/*
 * Ayam, a free 3D modeler for the RenderMan interface.
 *
 * Ayam is copyrighted 1998-2005 by Randolf Schultz
 * (randolf.schultz@gmail.com) and others.
 *
 * All rights reserved.
 *
 * See the file License for details.
 *
 */

#include "ayam.h"

#ifndef AYNOUNISTDH
#include <sys/times.h>
#include <unistd.h>
#endif

/* viewt.c - view tools */

/* functions: */

/* ay_viewt_setupprojection:
 *  setup the current projection matrix
 *  to reflect "from" and "to" camera settings
 *  of view *togl
 */
void
ay_viewt_setupprojection(struct Togl *togl)
{
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);
 int width = Togl_Width(togl);
 int height = Togl_Height(togl);
 GLdouble aspect = ((GLdouble)width) / ((GLdouble)height);
 GLfloat light_posf[4] = { 0.0f,  0.0f, 1000.0f, 1.0f};
 GLfloat light_poss[4] = {1000.0f,  0.0f,  0.0f, 1.0f};
 GLfloat light_post[4] = { 0.0f, 1000.0f,  0.0f, 1.0f};
 GLdouble nearp = view->nearp, farp = view->farp;

  glViewport(0, 0, width, height);

  glMatrixMode(GL_PROJECTION);

  glLoadIdentity();

  if(view->type == AY_VTPERSP)
    {
      if(view->nearp <= 0.0)
	{
	  nearp = 1.0;
	}

      if((view->farp == 0.0) || (view->farp <= nearp))
	{
	  farp = 1000.0;
	}

      glFrustum(-aspect*view->zoom, aspect*view->zoom,
		-1.0*view->zoom, 1.0*view->zoom,
		nearp, farp);
    }
  else
    {
      if(view->nearp == 0.0)
	{
	  nearp = -100.0;
	}

      if(view->farp == 0.0)
	{
	  farp = 100.0;
	}

      glOrtho(-aspect*view->zoom, aspect*view->zoom,
	      -1.0*view->zoom, 1.0*view->zoom,
	      nearp, farp);
    } /* if */

  if(view->roll != 0.0)
    glRotated(view->roll, 0.0, 0.0, 1.0);
  if(view->type != AY_VTTOP)
    gluLookAt(view->from[0], view->from[1], view->from[2],
	      view->to[0], view->to[1], view->to[2],
	      view->up[0], view->up[1], view->up[2]);
  else
    gluLookAt(view->from[0], view->from[1], view->from[2],
	      view->to[0], view->to[1], view->to[2],
	      view->up[0], view->up[1], view->up[2]);

  glMatrixMode(GL_MODELVIEW);


  /* XXXX set light0 at cam-pos? */
  glPushMatrix();
   /*  glLoadIdentity();*/
   glRotated(view->rotz, 0.0, 0.0, 1.0);
   glRotated(view->roty, 0.0, 1.0, 0.0);
   glRotated(view->rotx, 1.0, 0.0, 0.0);
   if((view->type == AY_VTPERSP) || (view->type == AY_VTFRONT))
     glLightfv(GL_LIGHT0, GL_POSITION, light_posf);
   if(view->type == AY_VTSIDE)
     glLightfv(GL_LIGHT0, GL_POSITION, light_poss);
   if(view->type == AY_VTTOP)
     glLightfv(GL_LIGHT0, GL_POSITION, light_post);
  glPopMatrix();

 return;
} /* ay_viewt_setupprojection */


/* ay_viewt_rotate:
 *  calculate new "from" and "to" values from
 *  rotx, roty and rotz
 */
void
ay_viewt_rotate(ay_view_object *view, double rotx, double roty, double rotz)
{
 GLdouble m[16] = {0};
 double x, y, z;

  glMatrixMode(GL_MODELVIEW);
  glPushMatrix();
   glLoadIdentity();

   if(rotx != 0.0)
     {
       glRotated(view->roty, 0.0, 1.0, 0.0);
       glRotated(rotx, 1.0, 0.0, 0.0);
       glRotated(-view->roty, 0.0, 1.0, 0.0);
     }

   if(rotz != 0.0)
     {
       glRotated(view->roty, 0.0, 1.0, 0.0);
       glRotated(rotz, 0.0, 0.0, 1.0);
       glRotated(-view->roty, 0.0, 1.0, 0.0);
     }

   if(roty != 0.0)
     glRotated(roty, 0.0, 1.0, 0.0);


   glGetDoublev(GL_MODELVIEW_MATRIX, m);
  glPopMatrix();

  x = view->to[0]-view->from[0];
  y = view->to[1]-view->from[1];
  z = view->to[2]-view->from[2];

  view->from[0] = view->to[0]+(m[0]*x + m[4]*y + m[8]*z + m[12]);
  view->from[1] = view->to[1]+(m[1]*x + m[5]*y + m[9]*z + m[13]);
  view->from[2] = view->to[2]+(m[2]*x + m[6]*y + m[10]*z + m[14]);

  x = view->up[0];
  y = view->up[1];
  z = view->up[2];

  view->up[0] = (m[0]*x + m[4]*y + m[8]*z + m[12]);
  view->up[1] = (m[1]*x + m[5]*y + m[9]*z + m[13]);
  view->up[2] = (m[2]*x + m[6]*y + m[10]*z + m[14]);

 return;
} /* ay_viewt_rotate */


/* ay_viewt_wintoobj:
 * transforms the window coordinates winX winY,
 * to object coordinates for the given object *o
 * Assumes the standard transformations are
 * in use!
 */
int
ay_viewt_wintoobj(struct Togl *togl, ay_object *o,
		  double winX, double winY,
		  double *objX, double *objY, double *objZ)
{
 int ay_status = AY_OK;
 int height = Togl_Height(togl);
 GLint viewport[4];
 GLdouble modelMatrix[16], projMatrix[16], m[16], winx, winy;
 GLfloat winz = 0.0f;

  if(!o)
    return AY_ENULL;

  winx = winX;
  winy = height - winY;

  glReadPixels((GLint)winx,(GLint)winy,1,1,GL_DEPTH_COMPONENT,GL_FLOAT,&winz);

  /* fprintf(stderr,"WinZ:%g\n",winz); */

  glGetIntegerv(GL_VIEWPORT, viewport);

  ay_viewt_setupprojection(togl);

  glGetDoublev(GL_PROJECTION_MATRIX, projMatrix);

  glMatrixMode(GL_MODELVIEW);
  glPushMatrix();

   if(ay_currentlevel->object != ay_root)
     {
       ay_trafo_getall(ay_currentlevel->next);
     }

   glTranslated(o->movx, o->movy, o->movz);

   ay_quat_torotmatrix(o->quat, m);
   glMultMatrixd(m);

   glScaled(o->scalx, o->scaly, o->scalz);

   glGetDoublev(GL_MODELVIEW_MATRIX, modelMatrix);

   gluUnProject(winx, winy, (GLdouble)winz, modelMatrix, projMatrix, viewport,
		objX, objY, objZ);

   /*  fprintf(stderr,"ObjX:%g; ObjY:%g; ObjZ:%g\n",*objX, *objY, *objZ); */

  glPopMatrix();

 return ay_status;
} /* ay_viewt_wintoobj */


/* ay_viewt_winrecttoobj:
 * transforms the rectangle formed by the window coordinates
 * winX, winY, winX2, winY2,
 * to object coordinates (obj[24]!) for the given object *o
 * Assumes the standard transformations are
 * in use!
 */
int
ay_viewt_winrecttoobj(struct Togl *togl, ay_object *o,
		      double winX, double winY, double winX2, double winY2,
		      double *obj)
{
 int ay_status = AY_OK;
 int height = Togl_Height(togl), i, j;
 GLint viewport[4];
 GLdouble modelMatrix[16], projMatrix[16], m[16], win[24];

  if(!togl || !o || !obj)
    return AY_ENULL;

  j = AY_TRUE;

  for(i = 0; i < 8; i++)
    {
      if(j)
	{
	  win[i*3] = winX;
	  j = AY_FALSE;
	}
      else
	{
	  win[i*3] = winX2;
	  j = AY_TRUE;
	}

      win[i*3+1] = (height - winY);

      if(i < 4)
	{
	  win[i*3+2] = 0.0;
	}
      else
	{
	  win[i*3+2] = 1.0;
	}
    } /* for */

  win[7] = (height - winY2);
  win[10] = (height - winY2);
  win[19] = (height - winY2);
  win[22] = (height - winY2);

  glGetIntegerv(GL_VIEWPORT, viewport);

  ay_viewt_setupprojection(togl);

  glGetDoublev(GL_PROJECTION_MATRIX, projMatrix);

  glMatrixMode(GL_MODELVIEW);
  glPushMatrix();

   if(ay_currentlevel->next)
     {
       ay_trafo_getall(ay_currentlevel->next);
     }

   glTranslated(o->movx, o->movy, o->movz);

   ay_quat_torotmatrix(o->quat, m);
   glMultMatrixd(m);

   glScaled(o->scalx, o->scaly, o->scalz);

   glGetDoublev(GL_MODELVIEW_MATRIX, modelMatrix);

   for(i = 0; i < 8; i++)
     {
       gluUnProject(win[i*3], win[i*3+1], win[i*3+2],
		    modelMatrix, projMatrix, viewport,
		    &(obj[i*3]), &(obj[i*3+1]), &(obj[i*3+2]));
     }

  glPopMatrix();

 return ay_status;
} /* ay_viewt_winrecttoobj */


/* ay_viewt_wintoworld:
 *  transforms the window coordinates winX winY
 *  to world coordinates
 */
int
ay_viewt_wintoworld(struct Togl *togl, double winX, double winY,
		    double *worldX, double *worldY, double *worldZ)
{
 int ay_status = AY_OK;
 int height = Togl_Height(togl);
 GLint viewport[4];
 GLdouble modelMatrix[16], projMatrix[16], winx, winy;
 GLfloat winz = 0.0f;

  winx = winX;
  winy = height - winY;

  glReadPixels((GLint)winx,(GLint)winy,1,1,GL_DEPTH_COMPONENT,GL_FLOAT,&winz);

  glGetIntegerv(GL_VIEWPORT, viewport);
  ay_viewt_setupprojection(togl);
  glGetDoublev(GL_PROJECTION_MATRIX, projMatrix);

  glMatrixMode (GL_MODELVIEW);
  glPushMatrix();
   glLoadIdentity();
   glGetDoublev(GL_MODELVIEW_MATRIX, modelMatrix);
  glPopMatrix ();

  gluUnProject(winx, winy, (GLdouble)winz, modelMatrix, projMatrix, viewport,
	       worldX, worldY, worldZ);

 return ay_status;
} /* ay_viewt_wintoworld */


/* ay_viewt_zoomtoobj:
 *
 *
 */
int
ay_viewt_zoomtoobj(struct Togl *togl, int argc, char *argv[])
{
 int ay_status = AY_OK;
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);
 ay_object *o = NULL;
 ay_list_object *sel = ay_selection;
 double bb[24] = {0};
 double xmin = DBL_MAX, xmax = -DBL_MAX, ymin = DBL_MAX;
 double ymax = -DBL_MAX, zmin = DBL_MAX, zmax = -DBL_MAX;
 double cog[3] = {0}, dt[3] = {0}, dt2[3] = {0}, l, lx, ly, lz;
 int i, a;
 GLdouble m[16] = {0}, mt[16] = {0};

  if(sel)
    {
      while(sel)
	{
	  o = sel->object;

	  ay_status = ay_bbc_get(o, bb);
	  if(!ay_status)
	    {
	      a = 0;
	      for(i = 0; i < 8; i++)
		{
		  if(bb[a] < xmin)
		    xmin = bb[a];
		  if(bb[a] > xmax)
		    xmax = bb[a];
		  a += 3;
		}

	      a = 1;
	      for(i = 0; i < 8; i++)
		{
		  if(bb[a] < ymin)
		    ymin = bb[a];
		  if(bb[a] > ymax)
		    ymax = bb[a];
		  a += 3;
		}

	      a = 2;
	      for(i = 0; i < 8; i++)
		{
		  if(bb[a] < zmin)
		    zmin = bb[a];
		  if(bb[a] > zmax)
		    zmax = bb[a];
		  a += 3;
		}
	    } /* if */

	  sel = sel->next;
	} /* while */

      glMatrixMode(GL_MODELVIEW);
      glPushMatrix();
       glLoadIdentity();
       if(ay_currentlevel->next)
	 {
	   ay_trafo_getall(ay_currentlevel->next);
	 }
       glGetDoublev(GL_MODELVIEW_MATRIX, mt);
      glPopMatrix();

      /* calc center of gravity (middle of bounding box) */
      cog[0] = xmin+((fabs(xmax-xmin))/2.0);
      cog[1] = ymin+((fabs(ymax-ymin))/2.0);
      cog[2] = zmin+((fabs(zmax-zmin))/2.0);

      ay_trafo_apply3(cog, mt);

      dt[0] = view->to[0] - cog[0];
      dt[1] = view->to[1] - cog[1];
      dt[2] = view->to[2] - cog[2];

      /* let the view point to objects COG */
      view->to[0] -= dt[0];
      view->to[1] -= dt[1];
      view->to[2] -= dt[2];
      view->from[0] -= dt[0];
      view->from[1] -= dt[1];
      view->from[2] -= dt[2];

      ay_toglcb_reshape(togl);

      /* calc new zoom factor */
      glMatrixMode (GL_MODELVIEW);
      glPushMatrix();
       glLoadIdentity();
       glRotated(view->rotx, 1.0, 0.0, 0.0);
       glRotated(view->roty, 0.0, 1.0, 0.0);
       glRotated(view->rotz, 0.0, 0.0, 1.0);
       glGetDoublev(GL_MODELVIEW_MATRIX, m);
      glPopMatrix();

      dt[0] = xmin;
      dt[1] = ymin;
      dt[2] = zmin;

      dt2[0] = xmax;
      dt2[1] = ymax;
      dt2[2] = zmax;

      ay_trafo_apply3(dt, mt);
      ay_trafo_apply3(dt2, mt);

      lx = fabs(dt[0]-dt2[0]);
      ly = fabs(dt[1]-dt2[1]);
      lz = fabs(dt[2]-dt2[2]);

      if(ly>lx)
	l = ly;
      else
	l = lx;
      if(l<lz)
	l = lz;

      if(l < 1E-6 || l > 1E6)
	l = 3.0;

      view->zoom = l*0.9;

      if(view->type == AY_VTPERSP)
	{
	  view->zoom /= 12;
	  /* normalize */
	  /*
	  dt[0] = view->from[0] - view->to[0];
	  dt[1] = view->from[1] - view->to[1];
	  dt[2] = view->from[2] - view->to[2];
	  l = AY_V3LEN(dt);
	  */
	} /* if */

      if(view->zoom < 1E-6 || view->zoom > 1E6)
	view->zoom = 3.0;

      Togl_MakeCurrent(togl);

      ay_toglcb_reshape(togl);

      if(argc)
	ay_toglcb_display(togl);

      ay_viewt_uprop(view);
      view->drawmarker = AY_FALSE;
    } /* if (sel) */

 return TCL_OK;
} /* ay_viewt_zoomtoobj */


/* ay_viewt_align:
 *
 */
int
ay_viewt_align(struct Togl *togl, int argc, char *argv[])
{
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);
 GLdouble m[16] = {0};
 double from[3] = {0.0,0.0,10.0}, to[3] = {0}, up[3] = {0.0,1.0,0.0};
 double m2[16];
 int use_m2 = AY_FALSE;

  /* No parent object and no selection? This means there is nothing
     we could align the view to. Thus, we just bail out. */
  if((ay_currentlevel->object == ay_root) && !ay_selection)
    return TCL_OK;

  if(ay_selection)
    {
      ay_trafo_identitymatrix(m2);
      ay_quat_torotmatrix(ay_selection->object->quat, m2);
      use_m2 = AY_TRUE;
    }

  /* get parent objects transformation */
  glMatrixMode (GL_MODELVIEW);
  glPushMatrix();
   glLoadIdentity();
   if(ay_currentlevel->object != ay_root)
     {
       ay_trafo_getallr(ay_currentlevel->next);
     }
   glGetDoublev(GL_MODELVIEW_MATRIX, m);
  glPopMatrix();

  if(view->type == AY_VTSIDE)
    {
      from[0] = 10.0;
      from[2] = 0.0;
    }

  if(view->type == AY_VTTOP)
    {
      from[1] = 10.0;
      from[2] = 0.0;

      up[1] = 0.0;
      up[2] = -1.0;
    }

  if(use_m2)
    {
      ay_trafo_apply3(from, m2);
      ay_trafo_apply3(to, m2);
      ay_trafo_apply3(up, m2);
      view->aligned = AY_TRUE;
    }

  ay_trafo_apply3(from, m);
  ay_trafo_apply3(to, m);
  ay_trafo_apply3(up, m);

  memcpy(view->from, from, 3*sizeof(double));
  memcpy(view->to, to, 3*sizeof(double));
  memcpy(view->up, up, 3*sizeof(double));

  ay_toglcb_reshape(togl);
  ay_toglcb_display(togl);

  ay_viewt_uprop(view);
  view->drawmarker = AY_FALSE;

 return TCL_OK;
} /* ay_viewt_align */


/* ay_viewt_alignlocal:
 *
 */
void
ay_viewt_alignlocal(void)
{
 ay_object *o = ay_root;
 ay_view_object *view = NULL;
 int status;

  o = o->down;

  if(!o)
    return;

  while(o->next)
    {
      if(o->type == AY_IDVIEW)
	{
	  view = (ay_view_object *)o->refine;
	  if(view->local)
	    {
	      status = ay_viewt_makecurtcb(view->togl, 0, NULL);
	      status = ay_viewt_align(view->togl, 0, NULL);
	      status = ay_viewt_zoomtoobj(view->togl, 0, NULL);
	    }
	}

      o = o->next;
    } /* while */

 return;
} /* ay_viewt_alignlocal */


/* ay_viewt_makecurtcb:
 *
 */
int
ay_viewt_makecurtcb(struct Togl *togl, int argc, char *argv[])
{
 Tcl_Interp *interp = ay_interp;
 char *n1="ay";
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 ay_view_object *view = NULL;

  view = (ay_view_object *)Togl_GetClientData(togl);

  Togl_MakeCurrent(togl);

  ay_currentview = view;

  toa = Tcl_NewStringObj(n1, -1);
  ton = Tcl_NewStringObj("cVRedraw", -1);
  to = Tcl_NewIntObj(view->redraw);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVDMode", -1);
  to = Tcl_NewIntObj(view->shade);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVDrawSel", -1);
  to = Tcl_NewIntObj(view->drawsel);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVDrawLevel", -1);
  to = Tcl_NewIntObj(view->drawlevel);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVDrawOCS", -1);
  to = Tcl_NewIntObj(view->drawobjectcs);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVAALines", -1);
  to = Tcl_NewIntObj(view->antialiaslines);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVDrawBG", -1);
  to = Tcl_NewIntObj(view->drawbg);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVDrawGrid", -1);
  to = Tcl_NewIntObj(view->drawgrid);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVUseGrid", -1);
  to = Tcl_NewIntObj(view->usegrid);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVMMode", -1);
  to = Tcl_NewIntObj(view->local);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVGridSize", -1);
  to = Tcl_NewDoubleObj(view->grid);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVFOV", -1);
  to = Tcl_NewDoubleObj((atan(view->zoom)*180.0)/AY_PI*2.0);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVType", -1);
  to = Tcl_NewIntObj(view->type);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVBGImage", -1);
  to = Tcl_NewStringObj(view->bgimage, -1);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  /**/
  Tcl_SetStringObj(ton, "cVFromX", -1);
  to = Tcl_NewDoubleObj(view->from[0]);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVFromY", -1);
  to = Tcl_NewDoubleObj(view->from[1]);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVFromZ", -1);
  to = Tcl_NewDoubleObj(view->from[2]);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVToX", -1);
  to = Tcl_NewDoubleObj(view->to[0]);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVToY", -1);
  to = Tcl_NewDoubleObj(view->to[1]);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton, "cVToZ", -1);
  to = Tcl_NewDoubleObj(view->to[2]);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);


  Tcl_SetStringObj(ton, "cVZoom", -1);
  to = Tcl_NewDoubleObj(view->zoom);
  Tcl_ObjSetVar2(interp, toa, ton, to, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);


  Tcl_IncrRefCount(toa); Tcl_DecrRefCount(toa);
  Tcl_IncrRefCount(ton); Tcl_DecrRefCount(ton);

 return TCL_OK;
} /* ay_viewt_makecurtcb */


/* ay_viewt_changetype:
 *
 */
void
ay_viewt_changetype(ay_view_object *view, int type)
{

  switch(type)
    {
    case AY_VTFRONT:
      view->from[0] = 0.0;
      view->from[1] = 0.0;
      view->from[2] = 10.0;
      view->to[0] = 0.0;
      view->to[1] = 0.0;
      view->to[2] = 0.0;
      view->up[0] = 0.0;
      view->up[1] = 1.0;
      view->up[2] = 0.0;
      break;
    case AY_VTSIDE:
      view->from[0] = 10.0;
      view->from[1] = 0.0;
      view->from[2] = 0.0;
      view->to[0] = 0.0;
      view->to[1] = 0.0;
      view->to[2] = 0.0;
      view->up[0] = 0.0;
      view->up[1] = 1.0;
      view->up[2] = 0.0;
      break;
    case AY_VTTOP:
      view->from[0] = 0.0;
      view->from[1] = 10.0;
      view->from[2] = 0.0;
      view->to[0] = 0.0;
      view->to[1] = 0.0;
      view->to[2] = 0.0;
      view->up[0] = 0.0;
      view->up[1] = 0.0;
      view->up[2] = 1.0;
      break;
    case AY_VTPERSP:
      view->from[0] = 10.0;
      view->from[1] = 10.0;
      view->from[2] = 10.0;
      view->to[0] = 0.0;
      view->to[1] = 0.0;
      view->to[2] = 0.0;
      view->up[0] = -0.707;
      view->up[1] = 1;
      view->up[2] = -0.707;
      break;
    case AY_VTTRIM:
      view->from[0] = 0.0;
      view->from[1] = 0.0;
      view->from[2] = 10.0;
      view->to[0] = 0.0;
      view->to[1] = 0.0;
      view->to[2] = 0.0;
      view->up[0] = 0.0;
      view->up[1] = 1.0;
      view->up[2] = 0.0;
      break;
    default:
      break;
    } /* switch */

  view->rotx = 0.0;
  view->roty = 0.0;
  view->rotz = 0.0;

  if(type != view->type)
    {
      if(view->type == AY_VTPERSP)
	{
	  view->zoom *= 12.0;
	}
      else
	{
	  if(type == AY_VTPERSP)
	    {
	      view->zoom /= 12.0;
	    }
	} /* if */

    } /* if */

  view->type = type;
  view->drawmarker = AY_FALSE;
  view->aligned = AY_FALSE;

 return;
} /* ay_viewt_changetype */


/* ay_viewt_reshapetcb:
 *
 */
int
ay_viewt_reshapetcb(struct Togl *togl, int argc, char *argv[])
{

  ay_toglcb_reshape(togl);

 return TCL_OK;
} /* ay_viewt_reshapetcb */


/* ay_viewt_redrawtcb:
 *  draw a view regardless of automatic redraw setting (used by
 *  "View/Redraw Ctrl+d")
 *  apply changes to this function also to ay_toglcb_display()!
 */
int
ay_viewt_redrawtcb(struct Togl *togl, int argc, char *argv[])
{
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);

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
      /*glFlush();*/

      Togl_SwapBuffers(togl);
    }

#ifdef AYENABLEPPREV
  /* redraw permanent preview window? */
  if(view->ppreview)
    ay_wrib_pprevdraw(view);
#endif

 return TCL_OK;
} /* ay_viewt_redrawtcb */


/* ay_viewt_setconftcb:
 *
 */
int
ay_viewt_setconftcb(struct Togl *togl, int argc, char *argv[])
{
 int ay_status = AY_OK;
 char fname[] = "view_setconf";
 Tcl_Interp *interp = ay_interp;
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);
 int width = Togl_Width(togl);
 int height = Togl_Height(togl);
 ay_object *o = NULL;
 int argi = 0, need_redraw = AY_TRUE;
 double argd = 0.0, rotx = 0.0, roty = 0.0, rotz = 0.0;
 double old_rect_xmin, old_rect_ymin, old_rect_xmax, old_rect_ymax;
 double temp[3] = {0};
 int i = 2;
 int kbdact_in_progress = AY_FALSE;
 char arg1[] = "save";
 char arg2[] = "-start", arg3[] = "0";
 char arg4[] = "-winxy";
 char *tclargv[5] = {0};
#ifndef AYNOUNISTDH
 static clock_t t_lastcalled = 0, t_current = 0;
 struct tms tbuf;
#endif
#ifdef WIN32
 static DWORD t_lastcalled = 0, t_current = 0;
#endif

#ifndef AYNOUNISTDH
  t_current = times(&tbuf);

  if(t_lastcalled != 0)
    {
    /*printf("%g\n",(double)(t_current-t_lastcalled)/(sysconf(_SC_CLK_TCK)));*/
      if((double)(t_current-t_lastcalled)/sysconf(_SC_CLK_TCK) < 0.1)
	{
	  kbdact_in_progress = AY_TRUE;
	}
      else
	{
	  kbdact_in_progress = AY_FALSE;
	}
    }
  else
    {
      kbdact_in_progress = AY_FALSE;
    }
#endif
#ifdef WIN32
  t_current = GetTickCount();

  if(t_lastcalled != 0)
    {
      if((t_current-t_lastcalled) < 100)
	{
	  kbdact_in_progress = AY_TRUE;
	}
      else
	{
	  kbdact_in_progress = AY_FALSE;
	}
    }
  else
    {
      kbdact_in_progress = AY_FALSE;
    }
#endif

  Togl_MakeCurrent(togl);
  ay_currentview = view;

  /* XXXX the i += 2 at the end of this while enforces arguments to contain
     two words, if other arguments follow; you may add dummy words:
     "-undrotx dummy -drotx 5" instead of "-undrotx -drotx 5" */
  while(i+1 < argc)
    {
      rotx = 0.0; roty = 0.0; rotz = 0.0;
      Tcl_GetDouble(interp, argv[i+1], &argd);

      /* XXXX this code assumes, every argument is atleast 2 chars long! */
      switch(argv[i][1])
	{
	case 'b':
	  if(!strcmp(argv[i], "-bgimage"))
	    {
	      if(view->bgimage)
		{
		  free(view->bgimage);
		  view->bgimage = NULL;
		} /* if */

	      if(argv[i+1])
		{
		  if(!(view->bgimage = calloc(strlen(argv[i+1])+1,
					      sizeof(char))))
		    {
		      ay_error(AY_EOMEM, fname, NULL);
		      return TCL_OK;
		    } /* if */
		  strcpy(view->bgimage, argv[i+1]);
		  o = ay_root->down;
		  while(o)
		    {
		      if(o->refine == view)
			{
			  ay_notify_force(o);
			}
		      o = o->next;
		    } /* while */
		} /* if */
	    }
	  break;
	case 'd':
	  if(!strcmp(argv[i], "-dfromx"))
	    {
	      view->from[0] += argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-dfromy"))
	    {
	      view->from[1] += argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-dfromz"))
	    {
	      view->from[2] += argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-dtox"))
	    {
	      view->to[0] += argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-dtoy"))
	    {
	      view->to[1] += argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-dtoz"))
	    {
	      view->to[2] += argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-drotx"))
	    {
	      roty = argd;
	      view->roty += argd;

	      ay_viewt_rotate(view, 0.0, roty, 0.0);
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-droty"))
	    {
	      rotz = 0.0;
	      rotx = 0.0;
	      if(view->type == AY_VTSIDE)
		{
		  rotz = -argd;
		  view->rotz -= argd;
		}
	      else
		{
		  rotx = argd;
		  view->rotx += argd;
		}

	      ay_viewt_rotate(view, rotx, 0.0, rotz);
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-droll"))
	    {
	      view->roll = view->roll + argd;
	      if(view->roll > 180.0)
		view->roll = view->roll - 180.0;
	      else
		if(view->roll < -180.0)
		  view->roll = view->roll + 180.0;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-dzoom"))
	    {
	      view->zoom *= argd;
	      view->drawmarker = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-dsel"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &argi);
	      view->drawsel = argi;
	    }
	  if(!strcmp(argv[i], "-dlev"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &argi);
	      view->drawlevel = argi;
	    }
	  if(!strcmp(argv[i], "-dbg"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &argi);
	      view->drawbg = argi;
	    }
	  if(!strcmp(argv[i], "-docs"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &argi);
	      view->drawobjectcs = argi;
	    }
	  if(!strcmp(argv[i], "-doaal"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &argi);
	      view->antialiaslines = argi;
	    }
	  if(!strcmp(argv[i], "-draw"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &argi);
	      view->redraw = argi;
	    }
	  if(!strcmp(argv[i], "-drawg"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &argi);
	      view->drawgrid = argi;
	    }
	  if(!strcmp(argv[i], "-drawh"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &argi);
	      if(argi == view->drawhandles)
		need_redraw = AY_FALSE;
	      view->drawhandles = argi;
	    }
	  break;
	case 'f':
	  if(!strcmp(argv[i], "-fromx"))
	    {
	      view->from[0] = argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-fromy"))
	    {
	      view->from[1] = argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-fromz"))
	    {
	      view->from[2] = argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-fovx"))
	    {
	      Tcl_GetDouble(interp, argv[i+1], &argd);

	      view->zoom = fabs(tan(AY_D2R(argd/2.0)));
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  break;
	case 'g':
	  if(!strcmp(argv[i], "-grid"))
	    {
	      if(argd >= 0.0)
		{
		  view->grid = argd;
		}
	      else
		{
		  view->grid = 0.0;
		} /* if */
	    }
	  if(!strcmp(argv[i], "-gmark"))
	    {
	      Tcl_GetDouble(interp, argv[i+1], &view->markx);
	      Tcl_GetDouble(interp, argv[i+2], &view->marky);
	      if(view->usegrid)
		ay_viewt_griddify(togl, &view->markx, &view->marky);
	      Tcl_GetInt(interp, argv[i+3], &argi);
	      if(view->markx == 0.0 && view->marky == 0 &&
		 argi == view->drawmarker)
		need_redraw = AY_FALSE;
	      view->drawmarker = argi;
	    } /* if */
	  break;
	case 'i':
	  if(!strcmp(argv[i], "-ico"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &argi);
	      view->isicon = argi;
	    }
	  break;
	case 'l':
	  if(!strcmp(argv[i], "-local"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &argi);
	      view->local = argi;
	      view->drawmarker = AY_FALSE;
	    }
	  break;
	case 'm':
	  if(!strcmp(argv[i], "-mark"))
	    {
	      Tcl_GetDouble(interp, argv[i+1], &view->markx);
	      Tcl_GetDouble(interp, argv[i+2], &view->marky);

	      Tcl_GetInt(interp, argv[i+3], &argi);
	      if(view->markx == 0.0 && view->marky == 0 &&
		 argi == view->drawmarker)
		need_redraw = AY_FALSE;
	      view->drawmarker = argi;
	    } /* if */
	  break;
	case 'n':
	  if(!strcmp(argv[i], "-name"))
	    {
	      o = ay_root->down;
	      while(o)
		{
		  if(o->refine == view)
		    {
		      if(o->name)
			free(o->name);
		      o->name = NULL;
		      if(!(o->name = calloc(strlen(argv[i+1]) + 1,
					    sizeof(char))))
			{
			  ay_error(AY_EOMEM, fname, NULL);
			  return TCL_OK;
			}

		      strcpy(o->name, argv[i+1]);
		    } /* if */
		  o = o->next;
		} /* while */
	    } /* if */
	  break;
	case 'p':
	  if(!strcmp(argv[i], "-panx"))
	    {
	      tclargv[2] = arg2;
	      tclargv[3] = arg3;
	      tclargv[4] = arg3;
	      ay_vact_movetcb(togl, 5, tclargv);
	      tclargv[2] = arg4;
	      tclargv[3] = argv[i+1];
	      tclargv[4] = arg3;
	      ay_vact_movetcb(togl, 5, tclargv);
	    }
	  if(!strcmp(argv[i], "-pany"))
	    {
	      tclargv[2] = arg2;
	      tclargv[3] = arg3;
	      tclargv[4] = arg3;
	      ay_vact_movetcb(togl, 5, tclargv);
	      tclargv[2] = arg4;
	      tclargv[3] = arg3;
	      tclargv[4] = argv[i+1];
	      ay_vact_movetcb(togl, 5, tclargv);
	    }
	  if(!strcmp(argv[i], "-pos"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &view->pos_x);
	      Tcl_GetInt(interp, argv[i+2], &view->pos_y);
	    }
#ifdef AYENABLEPPREV
	  if(!strcmp(argv[i], "-pprev"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &argi);
	      if(argi)
		ay_wrib_pprevopen(view);
	      else
		ay_wrib_pprevclose();
	    }
#endif
	  break;
	case 'r':
	  if(!strcmp(argv[i], "-roll"))
	    {
	      view->roll = argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-rect"))
	    {
	      old_rect_xmin = view->rect_xmin;
	      old_rect_ymin = view->rect_ymin;
	      old_rect_xmax = view->rect_xmax;
	      old_rect_ymax = view->rect_ymax;

	      Tcl_GetDouble(interp, argv[i+1], &view->rect_xmin);
	      Tcl_GetDouble(interp, argv[i+2], &view->rect_ymin);
	      Tcl_GetDouble(interp, argv[i+3], &view->rect_xmax);
	      Tcl_GetDouble(interp, argv[i+4], &view->rect_ymax);

	      Tcl_GetInt(interp, argv[i+5], &view->drawrect);
	      need_redraw = AY_FALSE;
	      /*XXXX DBG*/
/*#undef GL_VERSION_1_1*/
#ifdef GL_VERSION_1_1
	      glDrawBuffer(GL_FRONT);
	      glEnable(GL_COLOR_LOGIC_OP);
	      glLogicOp(GL_XOR);
	      /*XXXX DBG*/
	      /*glLogicOp(GL_COPY);*/

	       glColor3f((GLfloat)ay_prefs.sxr, (GLfloat)ay_prefs.sxg,
			 (GLfloat)ay_prefs.sxb);

	       /* clear old rectangle? */
	       if((old_rect_xmin != 0.0) && (old_rect_ymin != 0.0) &&
		  (old_rect_xmax != 0.0) && (old_rect_ymax != 0.0))
		 {

		   ay_draw_rectangle(width, height,
				     old_rect_xmin, old_rect_ymin,
				     old_rect_xmax, old_rect_ymax);

		 }

	       if(view->drawrect)
		 {
		   ay_draw_rectangle(width, height,
				     view->rect_xmin, view->rect_ymin,
				     view->rect_xmax, view->rect_ymax);
		 }
	       else
		 {
		   view->rect_xmin = 0.0;
		   view->rect_ymin = 0.0;
		   view->rect_xmax = 0.0;
		   view->rect_ymax = 0.0;
		 } /* if */

	      /* the following line fixes problems with Intel
		 onboard graphics (i915) */
	      glLogicOp(GL_COPY);
	      glDisable(GL_COLOR_LOGIC_OP);
	      glFlush();
	      glDrawBuffer(GL_BACK);
#else
	      ay_toglcb_display(togl);
	      if(view->drawrect)
		{
		  glDrawBuffer(GL_FRONT);
		  glColor3f((GLfloat)ay_prefs.tpr, (GLfloat)ay_prefs.tpg,
			 (GLfloat)ay_prefs.tpb);
		  ay_draw_rectangle(width, height,
				    view->rect_xmin, view->rect_ymin,
				    view->rect_xmax, view->rect_ymax);

		  glDrawBuffer(GL_BACK);
		} /* if */
#endif
	    } /* if */
	  if(!strcmp(argv[i], "-redraw"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &argi);
	      need_redraw = argi;
	    }
	  break;
	case 's':
	  if(!strcmp(argv[i], "-shade"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &argi);
	      view->shade = argi;
	    }
	  break;
	case 't':
	  if(!strcmp(argv[i], "-tox"))
	    {
	      view->to[0] = argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-toy"))
	    {
	      view->to[1] = argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-toz"))
	    {
	      view->to[2] = argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-type"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &argi);
	      if(argi != view->type)
		{
		  ay_viewt_changetype(view, argi);
		}

	      view->rotx = 0.0;
	      view->roty = 0.0;
	      view->rotz = 0.0;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  break;
	case 'u':
	  if(!strcmp(argv[i], "-undokb"))
	    {
	      /* save current state of view, but only once per
		 keypress-keyrelease-sequence */
	      if(!kbdact_in_progress)
		{
		  /* undo save */
		  tclargv[1] = arg1;
		  tclargv[2] = argv[i+1];
		  ay_status = ay_undo_undotcmd(NULL, ay_interp, 3, tclargv);
		}
	    }
	  if(!strcmp(argv[i], "-upx"))
	    {
	      view->up[0] = argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-upy"))
	    {
	      view->up[1] = argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-upz"))
	    {
	      view->up[2] = argd;
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-updroty"))
	    {
	      /* reset rotx,rotz; recalc roty */
	      view->rotx = 0.0;
	      view->roty = 0.0;
	      view->rotz = 0.0;

	      temp[0] = view->to[0] - view->from[0];
	      temp[1] = view->to[2] - view->from[2];
	      view->roty = 180.0 + AY_R2D(atan2(temp[0], temp[1]));
	      view->drawmarker = AY_FALSE;
	      view->aligned = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-ugrid"))
	    {
	      Tcl_GetInt(interp, argv[i+1], &argi);
	      view->usegrid = argi;
	    }
	  break;
	case 'z':
	  if(!strcmp(argv[i], "-zoom"))
	    {
	      view->zoom = argd;
	      view->drawmarker = AY_FALSE;
	    }
	  if(!strcmp(argv[i], "-zrect"))
	    {
	      int rectw, recth, dispx, dispy;
	      double dxw, dyw, t[3] = {0}, t2[2] = {0},mm[16] = {0};
	      if(view->rect_xmin<view->rect_xmax)
		{
		  rectw = (int)(view->rect_xmax-view->rect_xmin);
		  dispx = (int)((width/2)-(view->rect_xmax-(rectw/2)));
		}
	      else
		{
		  rectw = (int)(view->rect_xmin-view->rect_xmax);
		  dispx = (int)((width/2)-(view->rect_xmin-(rectw/2)));
		}
	      if(view->rect_ymin<view->rect_ymax)
		{
		  recth = (int)(view->rect_ymax-view->rect_ymin);
		  dispy = (int)((height/2)-(view->rect_ymax-(recth/2)));
		}
	      else
		{
		  recth = (int)(view->rect_ymin-view->rect_ymax);
		  dispy = (int)((height/2)-(view->rect_ymin-(recth/2)));
		}

	      if(!(rectw && recth))
		break;

	      dxw = -(dispx*view->conv_x);
	      dyw = (dispy*view->conv_y);
	      t[0] = view->from[0] - view->to[0];
	      t[1] = view->from[1] - view->to[1];
	      t[2] = view->from[2] - view->to[2];
	      glMatrixMode(GL_MODELVIEW);
	      glPushMatrix();
	       glLoadIdentity();
	       /* check, whether we are able to derive camera
		  orientation angles from t */
	       if(!t[0] && !t[2])
		 {
		   /* no, this (hopefully just) happens with Top views, that
		      are Y-Axis aligned and express a useful angle in
		      view->up */

		   /* XXXX this currently only works for real Y-aligned
		      Top views */
		   t[0] = -view->up[0];
		   t[1] = -view->up[1];
		   t[2] = -view->up[2];
		   roty = AY_R2D(atan2(t[0], t[2]));

		   if(fabs(view->roll) > AY_EPSILON)
		     glRotated(-view->roll, 0.0, 1.0, 0.0);

		   glRotated(roty, 0.0, 1.0, 0.0);

		   glTranslated(dxw, 0.0, -dyw);

		   glRotated(-roty, 0.0, 1.0, 0.0);

		   if(fabs(view->roll) > AY_EPSILON)
		     glRotated(view->roll, 0.0, 1.0, 0.0);
		 }
	       else
		 {
		   /* yes, derive angles from t */
		   roty = AY_R2D(atan2(t[0], t[2]));

		   t2[0]=t[0];
		   t2[1]=t[2];
		   if(t[0] && t[2])
		     rotx = AY_R2D(atan2(t[1], AY_V2LEN(t2)));

		   if(fabs(view->roll) > AY_EPSILON)
		     glRotated(-view->roll, 0.0, 0.0, 1.0);

		   glRotated(roty, 0.0, 1.0, 0.0);
		   glRotated(-rotx, 1.0, 0.0, 0.0);

		   if(view->up[1] > 0.0)
		     glTranslated(dxw, dyw, 0.0);
		   else
		     glTranslated(-dxw, -dyw, 0.0);

		   glRotated(rotx, 1.0, 0.0, 0.0);
		   glRotated(-roty, 0.0, 1.0, 0.0);

		   if(fabs(view->roll) > AY_EPSILON)
		     glRotated(view->roll, 0.0, 0.0, 1.0);
		 }
	       glGetDoublev(GL_MODELVIEW_MATRIX, mm);
	      glPopMatrix();

	      ay_trafo_apply3(view->from, mm);
	      ay_trafo_apply3(view->to, mm);
	      if(rectw > recth)
		{
		  if(width != rectw)
		    view->zoom /= (width/rectw);
		}
	      else
		{
		  if(height != recth)
		    view->zoom /= (height/recth);
		}
	      view->drawmarker = AY_FALSE;
	    }
	  break;
	} /* switch */
      i += 2;
  } /* while */

  ay_toglcb_reshape(togl);

  if(need_redraw)
    {
      ay_toglcb_display(togl);
    }

  ay_viewt_uprop(view);

  /* save point in time where we return control to Tcl; we use this
     to detect whether the user holds down a key if we are called
     in the future again */
#ifndef AYNOUNISTDH
  t_lastcalled = times(&tbuf);
#endif
#ifdef WIN32
  t_lastcalled = GetTickCount();
#endif

 return TCL_OK;
} /* ay_viewt_setconftcb */


/* ay_viewt_fromcamtcb:
 *  copy from/to/up from the selected camera object to view <togl>
 */
int
ay_viewt_fromcamtcb(struct Togl *togl, int argc, char *argv[])
{
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);
 ay_list_object *sel = ay_selection;
 ay_object *o = NULL;
 ay_camera_object *c = NULL;
 char fname[] = "fromcamera";

  if(!sel)
    {
      ay_error(AY_ENOSEL,fname,NULL);
      return TCL_OK;
    }
  o = sel->object;
  if(o->type != AY_IDCAMERA)
    {
      ay_error(AY_ERROR,fname, "Please select a camera!");
      return TCL_OK;
    }
  c = (ay_camera_object *)o->refine;

  memcpy(view->from, c->from, 3*sizeof(double));
  memcpy(view->to, c->to, 3*sizeof(double));
  memcpy(view->up, c->up, 3*sizeof(double));
  view->roll =  c->roll;
  view->zoom =  c->zoom;

  ay_toglcb_reshape(togl);
  ay_toglcb_display(togl);

  ay_viewt_uprop(view);
  view->drawmarker = AY_FALSE;
  view->aligned = AY_FALSE;

 return TCL_OK;
} /* ay_viewt_fromcamtcb */


/* ay_viewt_tocamtcb:
 *  copy camera settings of view <togl> to the selected camera object
 */
int
ay_viewt_tocamtcb(struct Togl *togl, int argc, char *argv[])
{
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);
 ay_list_object *sel = ay_selection;
 ay_object *o = NULL;
 ay_camera_object *c = NULL;
 char fname[] = "tocamera";

  if(!sel)
    {
      ay_error(AY_ENOSEL,fname,NULL);
      return TCL_OK;
    }
  o = sel->object;
  if(o->type != AY_IDCAMERA)
    {
      ay_error(AY_ERROR,fname, "Please select a camera!");
      return TCL_OK;
    }
  c = (ay_camera_object *)o->refine;

  memcpy(c->from,view->from,  3*sizeof(double));
  memcpy(c->to, view->to, 3*sizeof(double));
  memcpy(c->up, view->up, 3*sizeof(double));
  c->roll = view->roll;
  c->zoom = view->zoom;

 return TCL_OK;
} /* ay_viewt_tocamtcb */


/* ay_viewt_uprop:
 *  update view property
 */
void
ay_viewt_uprop(ay_view_object *view)
{
 Tcl_Interp *interp = ay_interp;
 ay_list_object *sel = ay_selection;
 ay_object *o = NULL;
 ay_view_object *sview = NULL;

  if(sel)
    {
      if(!sel->next)
	{
	  o = sel->object;
	  if(o->type == AY_IDVIEW)
	    {
	      sview = (ay_view_object *)(o->refine);
	      if(sview == view)
		{
		  ay_prop_gettcmd(NULL, interp, 0, NULL);
		} /* if */
	    } /* if */
	} /* if */
    } /* if */

 return;
} /* ay_viewt_uprop */


/* ay_viewt_griddify:
 *  snap winx and winy to current grid
 */
int
ay_viewt_griddify(struct Togl *togl, double *winx, double *winy)
{
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);
 ay_object *o = NULL;
 int width = Togl_Width(togl);
 int height = Togl_Height(togl);
 double refx = 0.0, refy = 0.0, refz = 0.0;
 double gdx = 0.0, gdy = 0.0;
 double gridx = view->grid/view->conv_x,
   gridy = view->grid/view->conv_y, gridz = 0.0;
 double ghx = view->grid/view->conv_x/2.0,
   ghy = view->grid/view->conv_y/2.0;
 double m[16] = {0};
 GLdouble mp[16], mm[16];
 GLint vp[4];

  if(view->grid != 0.0)
    {

      if(!view->local)
	{
	  /* get reference point in window coords */
	  switch(view->type)
	    {
	    case AY_VTFRONT:
	    case AY_VTTRIM:
	      refx = (width/2.0)-(view->from[0]/view->conv_x);
	      refy = (height/2.0)+(view->from[1]/view->conv_y);
	      break;
	    case AY_VTSIDE:
	      refx = (width/2.0)+(view->from[2]/view->conv_x);
	      refy = (height/2.0)+(view->from[1]/view->conv_y);
	      break;
	    case AY_VTTOP:
	      refx = (width/2.0)-(view->from[0]/view->conv_x);
	      refy = (height/2.0)-(view->from[2]/view->conv_y);
	      break;
	    }
	}
      else
	{
	  /* get reference point and grid size in window coords */
	  glGetIntegerv(GL_VIEWPORT, vp);
	  glMatrixMode(GL_PROJECTION);
	  glGetDoublev(GL_PROJECTION_MATRIX, mp);
	  glMatrixMode(GL_MODELVIEW);
	  glPushMatrix();
	   if(ay_currentlevel->object != ay_root)
	     {
	       ay_trafo_getall(ay_currentlevel->next);
	     }

	   if(view->aligned && ay_selection)
	     {
	       o = ay_selection->object;
	       glTranslated((GLdouble)o->movx, (GLdouble)o->movy,
			    (GLdouble)o->movz);
	       ay_quat_torotmatrix(o->quat, m);
	       glMultMatrixd((GLdouble*)m);

	       glScaled((GLdouble)o->scalx, (GLdouble)o->scaly,
			(GLdouble)o->scalz);
	     } /* if */

	   glGetDoublev(GL_MODELVIEW_MATRIX, mm);
	  glPopMatrix();
	  gluProject(0.0, 0.0, 0.0, mm, mp, vp, &refx, &refy, &refz);
	  refy = height-refy;
	  switch(view->type)
	    {
	    case AY_VTFRONT:
	    case AY_VTTRIM:
	      gluProject(view->grid, view->grid, 0.0, mm, mp, vp,
			 &gridx, &gridy, &gridz);
	      gridy = height-gridy;
	      break;
	    case AY_VTSIDE:
	      gluProject(0.0, view->grid, -view->grid, mm, mp, vp,
			 &gridx, &gridy, &gridz);
	      gridy = height-gridy;
	      break;
	    case AY_VTTOP:
	      gluProject(view->grid, 0.0, view->grid, mm, mp, vp,
			 &gridx, &gridy, &gridz);
	      break;
	    }

	  gridx = gridx-refx;
	  gridy = -(gridy-refy);

	  ghx = gridx/2.0;
	  ghy = gridy/2.0;
	} /* if */

      /* from grid reference, grid size and current window coordinates
	 compute new window coordinates, that are snapped to the grid;
         snapping to new coordinate values occurs halfway between two
	 grid corners (thus, the use of ghx/ghy) */
      gdx = fmod(*winx-refx, gridx);
      gdy = fmod(*winy-refy, gridy);

      if(*winx>refx)
	{
	  if(gdx >= ghx)
	    *winx += (gridx-gdx);
	  else
	    *winx -= gdx;
	}
      else
	{
	  if(gdx <= -ghx)
	    *winx -= (gridx+gdx);
	  else
	    *winx -= gdx;
	}

      if(*winy>refy)
	{
	  if(gdy >= ghy)
	    *winy += (gridy-gdy);
	  else
	    *winy -= gdy;
	}
      else
	{
	  if(gdy <= -ghy)
	    *winy -= (gridy+gdy);
	  else
	    *winy -= gdy;
	} /* if */

    } /* if */

 return AY_OK;
} /* ay_viewt_griddify */


/* ay_viewt_droptcb:
 *  an object has been dropped onto a view window
 */
int
ay_viewt_droptcb(struct Togl *togl, int argc, char *argv[])
{
 int ay_status = AY_OK;
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);
 ay_list_object *sel = ay_selection;
 ay_object *o, *v;
 void **arr = NULL;
 ay_treedropcb *cb = NULL;

  if(!sel)
    return TCL_OK; /* Oops? Should not there be atleast one selected object? */

  o = sel->object;

  switch(o->type)
    {
    case AY_IDLIGHT:
    case AY_IDCAMERA:
      arr = ay_treedropcbt.arr;
      cb = (ay_treedropcb *)(arr[AY_IDVIEW]);
      v = ay_root->down;
      while(v)
	{
	  if(v->type == AY_IDVIEW)
	    if(v->refine == view)
	      break;
	  v = v->next;
	}
      if(v)
	{
	  /* call callback */
	  if(cb)
	    {
	      ay_status = cb(v);
	    }
	}
      break;
    default:
      ay_viewt_zoomtoobj(togl, argc, argv);
      break;
    }

 return TCL_OK;
} /* ay_viewt_droptcb */


/* ay_viewt_setupintview:
 *  an object has been dropped onto a view window
 */
int
ay_viewt_setupintview(int viewnum, ay_view_object *vtemp)
{
 int ay_status = AY_OK;
 struct Togl *togl;
 Togl_Callback *altdispcb;
 ay_view_object *view = NULL;
 ay_object *o;
 char command[255] = {0}, update_cmd[] = "update";
 int vnum = viewnum-1;

  if(!vtemp)
    return AY_ENULL;

  /* find view object to configure */
  o = ay_root->down;
  while(o && (viewnum > 1))
    {
      o = o->next;
      viewnum--;
    }

  if(o->type == AY_IDVIEW)
    view = (ay_view_object *)o->refine;
  else
    return AY_ERROR;

  togl = view->togl;
  altdispcb = view->altdispcb;
  if(view->bgimage)
    free(view->bgimage);
  memcpy(view, vtemp, sizeof(ay_view_object));
  view->togl = togl;
  view->altdispcb = altdispcb;

  view->bgimage = NULL;
  if(vtemp->bgimage)
    {
      if((view->bgimage = calloc(strlen(vtemp->bgimage)+1,sizeof(char))))
	{
	  strcpy(view->bgimage, vtemp->bgimage);
	}
    }

  /* notify also includes reshape() and additionally loads the BGImage */
  ay_status = ay_notify_force(o);

  sprintf(command,
	  "global ay;viewSetGridIcon [lindex $ay(views) %d] %g\n",
	  vnum, vtemp->grid);

  Tcl_Eval(ay_interp, command);

  sprintf(command,
	  "global ay;viewSetDModeIcon [lindex $ay(views) %d] %d\n",
	  vnum, vtemp->shade);

  Tcl_Eval(ay_interp, command);

  sprintf(command,
	  "global ay;viewSetMModeIcon [lindex $ay(views) %d] %d\n",
	  vnum, vtemp->local);

  Tcl_Eval(ay_interp, command);

  Tcl_Eval(ay_interp, update_cmd);

 return TCL_OK;
} /* ay_viewt_setupintview */
