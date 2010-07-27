/*
 * Ayam, a free 3D modeler for the RenderMan interface.
 *
 * Ayam is copyrighted 1998-2001 by Randolf Schultz
 * (randolf.schultz@gmail.com) and others.
 *
 * All rights reserved.
 *
 * See the file License for details.
 *
 */

#include "ayam.h"

/* toglcb.c - standard togl callbacks */


/* ay_toglcb_create:
 *  Togl Callback, called on creation of view togl;
 *  creates and links the associated view object
 */
void
ay_toglcb_create(struct Togl *togl)
{
 /*int ay_status = AY_OK;*/
 char fname[] = "ay_toglcb_create";
 ay_view_object *view = NULL;
 ay_object *o = NULL, *d = NULL, **l = NULL;
 static int id = 0;

  /* create associated view object */
  if(!(view = calloc(1, sizeof(ay_view_object))))
    {
      ay_error(AY_EOMEM, fname, NULL);
      return;
    }

  if(!(o = calloc(1, sizeof(ay_object))))
    {
      ay_error(AY_EOMEM, fname, NULL);
      return;
    }
  ay_object_defaults(o);

  o->refine = view;
  o->type = AY_IDVIEW;
  o->hide = AY_TRUE;
  o->parent = AY_TRUE;
  o->hide_children = AY_TRUE;

  o->down = ay_endlevel;

  /* link object (manually, not via ay_object_link())
     as child to ay_root */
  d = ay_root->down;
  l = &(ay_root->down);
  while(d->next)
    {
      l = &(d->next);
      d = d->next;
    }
  o->next = *l;
  *l = o;

  /* correctly (re)set currentlevel */
  if(ay_currentlevel->next->object == ay_root)
    {
      ay_clevel_del();
      ay_clevel_add(ay_root->down);
    }

  /* add view object pointer to togl object,        */
  /* now togl callbacks have access to the view object */
  Togl_SetClientData(togl, (ClientData)view);

  /* fill view object */
  view->togl = togl;

  view->drawhandles = AY_FALSE;
  view->redraw = AY_TRUE;

  view->from[2] = 10.0;
  view->up[1] = 1.0;
  view->zoom = 3.0;
  view->type = AY_VTFRONT;

  view->id = id;
  id++;

  /* vital OpenGL defaults */
  glEnable(GL_DEPTH_TEST);
  glEnable(GL_AUTO_NORMAL);
  /* works only on OpenGL1.2+: glEnable(GL_RESCALE_NORMAL);*/
  glEnable(GL_NORMALIZE);
  glDisable(GL_DITHER);

  glLightModelf(GL_LIGHT_MODEL_TWO_SIDE, (GLfloat)1.0);
  glLightModeli(GL_LIGHT_MODEL_LOCAL_VIEWER, GL_TRUE);
  glEnable(GL_LIGHT0);

  /* glMaterialfv(GL_FRONT_AND_BACK, GL_AMBIENT_AND_DIFFUSE, color); */

 return;
} /* ay_toglcb_create */


/* ay_toglcb_destroy:
 *  Togl callback, called on destruction of view togl;
 *  unlinks and deletes the associated view object
 */
void
ay_toglcb_destroy(struct Togl *togl)
{
 char fname[] = "toglcb_destroy";
 ay_object *root = ay_root, *o, *o2, *l;
 ay_list_object *clevel = ay_currentlevel, *sel = ay_selection, **lsel = NULL;
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);
 int recreate_clevel = AY_FALSE;

#ifdef AYENABLEPPREV
  if(view)
    {
    if(view->ppreview)
      {
	ay_wrib_pprevclose();
      }
    }
#endif

  /* unlink from selection */
  lsel = &(ay_selection);
  while(sel)
    {
      if(sel->object && sel->object->type == AY_IDVIEW &&
	 (((ay_view_object*)(sel->object->refine)) == view))
	{
	  *lsel = sel->next;
	  free(sel);
	  break;
	}
      else
	{
	  lsel = &(sel->next);
	  sel = sel->next;
	}
    } /* while */

  /* unlink and delete view object */
  l = clevel->object;
  if(l == root->down)
    {
      recreate_clevel = AY_TRUE;
    }

  if((ay_view_object *)root->down->refine == view)
    {
      o2 = root->down;
      root->down = root->down->next;
      if(o2->name)
	free(o2->name);
      free(o2);
    }
  else
    {
      o = root->down;
      while(o)
	{
	  if(o->next)
	    {
	      if(o->next->refine == view)
		{
		  o2 = o->next;
		  o->next = o->next->next;
		  if(o2->name)
		    free(o2->name);
		  free(o2);
		  o = NULL;
		}
	      else
		{
		  o = o->next;
		} /* if */
	    }
	  else
	    {
	      /* view object not found in level beneath root! */
	      o = NULL;
	      ay_error(AY_ERROR, fname,
	  "Could not find view object for removal, scene may be corrupt now!");
	    } /* if */
	} /* while */
    } /* if */

  if(view)
    {
      if(view->bgimage)
	free(view->bgimage);

      if(view->bgknotv)
	free(view->bgknotv);

      if(view->bgcv)
	free(view->bgcv);

      free(view);
    }

  if(ay_currentview == view)
    {
      ay_currentview = NULL;
    }

  if(recreate_clevel)
    {
      clevel->object = root->down;
    }

 return;
} /* ay_toglcb_destroy */


/* ay_toglcb_reshape:
 *  Togl callback, called when view togl is
 *  exposed or reshaped
 */
void
ay_toglcb_reshape(struct Togl *togl)
{
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);
 double aspect = 0.0, width = (double)Togl_Width(togl),
   height = (double)Togl_Height(togl);

  ay_viewt_setupprojection(togl);

  aspect = width/height;

  view->conv_x = (aspect * 2.0 / width) * view->zoom;
  view->conv_y = 2.0/height * view->zoom;

  /*  glMatrixMode (GL_MODELVIEW);*/

 return;
} /* ay_toglcb_reshape */


/* ay_toglcb_display:
 *  Togl callback, draw view togl
 *  apply changes to this function also to ay_viewt_redrawtcb()!
 */
void
ay_toglcb_display(struct Togl *togl)
{
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);

  if(!view->redraw)
    {
      return;
    }

  if(view->altdispcb)
    {
      (view->altdispcb)(togl);
    }
  else
    {
      glClearColor((GLfloat)ay_prefs.bgr, (GLfloat)ay_prefs.bgg,
		   (GLfloat)ay_prefs.bgb, (GLfloat)1.0);
      glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

      /* draw */
      if(view->shade)
	ay_shade_view(togl);
      else
	ay_draw_view(togl, AY_FALSE);


      /* XXXX is this really necessary? */
      /*  glFlush();*/

      Togl_SwapBuffers(togl);
   }

#ifdef AYENABLEPPREV
  /* redraw permanent preview window? */
  if(view->ppreview)
    ay_wrib_pprevdraw(view);
#endif

 return;
} /* ay_toglcb_display */


