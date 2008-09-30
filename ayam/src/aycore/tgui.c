/*
 * Ayam, a free 3D modeler for the RenderMan interface.
 *
 * Ayam is copyrighted 1998-2004 by Randolf Schultz
 * (randolf.schultz@gmail.com) and others.
 *
 * All rights reserved.
 *
 * See the file License for details.
 *
 */

/* tgui.c - Tesselation GUI  */

#include "ayam.h"


/* global variables for this module: */

static ay_object *ay_tgui_origs = NULL; /* original objects */
static ay_list_object *ay_tgui_origrefs = NULL; /* place of originals
						   in scene */


/* prototypes of functions local to this module: */

int ay_tgui_open(void);

int ay_tgui_update(Tcl_Interp *interp, int argc, char *argv[]);

int ay_tgui_ok(void);

int ay_tgui_cancel(void);

int ay_tgui_tcmd(ClientData clientData, Tcl_Interp *interp,
		 int argc, char *argv[]);


/* functions: */

/* ay_tgui_open:
 *  tgui window opens => copy selected NURBS patches to ay_tgui_origs
 *  save references to original objects in scene to ay_tgui_origrefs
 */
int
ay_tgui_open(void)
{
 int ay_status = AY_OK;
 char fname[] = "tgui_open";
 ay_list_object *sel = ay_selection;
 ay_object *new = NULL, **last = NULL;
 ay_list_object *newl = NULL, **lastl = NULL;

  if(!sel)
    {
      ay_error(AY_ENOSEL, fname, NULL);
      return AY_ERROR;
    }

  last = &(ay_tgui_origs);
  lastl = &(ay_tgui_origrefs);
  while(sel)
    {
      if(sel->object && (sel->object->type == AY_IDINSTANCE))
	{
	  sel = sel->next;
	  continue;
	}
      if(sel->object && ((sel->object->type == AY_IDNPATCH) ||
		       (!ay_provide_object(sel->object, AY_IDNPATCH, NULL))))
	{
	  new = NULL;
	  if(!(new = calloc(1, sizeof(ay_object))))
	    return AY_EOMEM;
	  *last = new;
	  last = &(new->next);
	  /* we use the new ay_object to store the type specific
	     parts and transformations of the NPATCH object */
	  memcpy(new, sel->object, sizeof(ay_object));
	  new->next = NULL;

	  /* ay_tgui_update() may delete tags, make the original
	     tags immune to that */
	  sel->object->tags = NULL;

	  /* we save a pointer to the original object in the scene */
	  newl = NULL;
	  if(!(newl = calloc(1, sizeof(ay_list_object))))
	    return AY_EOMEM;
	  *lastl = newl;
	  lastl = &(newl->next);
	  newl->object = sel->object;
	}
      else
	{
	  ay_error(AY_EWARN, fname,
		   "Omitting object of wrong type, need NPatch!");
	} /* if */

      sel = sel->next;
    } /* while */

  if(!ay_tgui_origs)
    {
      ay_error(AY_ERROR, fname,
	       "Nothing to tesselate; select some NPatch objects!");
    }
  else
    {
      /* clear all cached pointers to scene hierarchy */
      ay_status = ay_object_ccp(NULL);
    }

 return ay_status;
} /* ay_tgui_open */


/* ay_tgui_update:
 *  re-tesselate selected NURBS patch objects after the user changed
 *  a tesselation parameter
 */
int
ay_tgui_update(Tcl_Interp *interp, int argc, char *argv[])
{
 int ay_status = AY_OK;
 char fname[] = "tgui_update";
 char *n1="tgui_tessparam";
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 ay_tag *tag = NULL;
 ay_list_object *oref = NULL;
 ay_list_object *newl = NULL, **lastl = NULL, *polist = NULL;
 ay_object *o = NULL, *tmp = NULL, *tmpnp = NULL;
 ay_deletecb *cb = NULL;
 void **arr = NULL;
 char *mys = "mys", *myt = "myt", *myc = "myc";
 int smethod = 0, numtriangles = 0, use_tc = AY_FALSE, use_vc = AY_FALSE;
 double sparamu = 0.0, sparamv = 0.0;

  /* get new tesselation parameters */
  if(argc < 5)
    {
      ay_error(AY_EARGS, fname, "smethod sparamu sparamv usetexcoords!");
      return AY_ERROR;
    }

  sscanf(argv[1], "%d", &smethod);
  sscanf(argv[2], "%lg", &sparamu);
  sscanf(argv[3], "%lg", &sparamv);
  sscanf(argv[4], "%d", &use_tc);
  sscanf(argv[5], "%d", &use_vc);

  /* clear old tesselations */
  oref = ay_tgui_origrefs;
  while(oref)
   {
     if((oref->object->type == AY_IDPOMESH) && oref->object->refine)
       {
	 arr = ay_deletecbt.arr;
	 cb = (ay_deletecb *)(arr[oref->object->type]);
	 if(cb)
	   ay_status = cb(oref->object->refine);

	 if(ay_status)
	   return ay_status;

	 oref->object->refine = NULL;
       }
     oref = oref->next;
   } /* while */

  /* re-tesselate with new tesselation parameters */
  o = ay_tgui_origs;
  oref = ay_tgui_origrefs;
  while(o)
    {
      /* infer parameters from (eventually present) TP tag */
      tag = o->tags;
      while(tag)
	{
	  if(tag->type == ay_tp_tagtype)
	    {
	      if(tag->val)
		sscanf(tag->val, "%d,%lg,%lg", &smethod, &sparamu, &sparamv);
	    }
	  tag = tag->next;
	} /* while */

      if(o->type == AY_IDNPATCH)
	{
	  tmp = NULL;
	  ay_status = ay_tess_npatch(o, smethod+1, sparamu, sparamv,
				     use_tc, mys, myt, use_vc, myc,
				     &tmp);
	}
      else
	{
	  tmpnp = NULL;
	  ay_status = ay_provide_object(o, AY_IDNPATCH, &tmpnp);
	  if(tmpnp)
	    {
	      if(tmpnp->next)
		{
		  lastl = &polist;
		  while(tmpnp)
		    {
		      ay_npt_applytrafo(tmpnp);

		      tmp = NULL;
		      ay_status = ay_tess_npatch(tmpnp, smethod+1,
						 sparamu, sparamv,
						 use_tc, mys, myt,
						 use_vc, myc,
						 &tmp);

		      newl = NULL;
		      if(!(newl = calloc(1, sizeof(ay_list_object))))
			return AY_EOMEM;
		      newl->object = tmp;
		      *lastl = newl;
		      lastl = &(newl->next);

		      tmpnp = tmpnp->next;
		    } /* while */

		  tmp = NULL;
		  ay_status = ay_pomesht_merge(AY_FALSE, polist, &tmp);

		  while(polist)
		    {
		      newl = polist;
		      polist = newl->next;
		      ay_object_delete(newl->object);
		      free(newl);
		    } /* while */
		}
	      else
		{
		  tmp = NULL;
		  ay_status = ay_tess_npatch(tmpnp, smethod+1,
					     sparamu, sparamv,
					     use_tc, mys, myt,
					     use_vc, myc,
					     &tmp);
		} /* if */
	      ay_object_deletemulti(tmpnp);
	    } /* if */
	} /* if */

      if(tmp)
	{
	  oref->object->refine = tmp->refine;
	  numtriangles += ((ay_pomesh_object*)(tmp->refine))->npolys;
	  /*ay_trafo_copy(tmp, oref->object);*/

	  /*
	   * the tesselation might have created PV tags (e.g. TexCoords)
	   * we just move them to the original object...
	   */
	  ay_tags_delall(oref->object);
	  oref->object->tags = tmp->tags;
	  tmp->tags = NULL;

	  free(tmp);
	  tmp = NULL;
	}
      oref->object->type = AY_IDPOMESH;

      /* PolyMesh objects have no children (trim curves)... */
      oref->object->down = NULL;

      oref = oref->next;
      o = o->next;
    } /* while */

  /* redraw all views */
  o = ay_root->down;
  while(o)
    {
      if(o->type == AY_IDVIEW)
	{
	  Togl_MakeCurrent(((ay_view_object *)(o->refine))->togl);
	  ay_currentview = (ay_view_object *)(o->refine);
	  ay_toglcb_display(((ay_view_object *)(o->refine))->togl);
	}
      o = o->next;
    } /* while */


  toa = Tcl_NewStringObj(n1,-1);

  ton = Tcl_NewStringObj(n1,-1);

  Tcl_SetStringObj(ton,"NumTriangles",-1);
  to = Tcl_NewIntObj(numtriangles);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_IncrRefCount(toa);Tcl_DecrRefCount(toa);
  Tcl_IncrRefCount(ton);Tcl_DecrRefCount(ton);

 return ay_status;
} /* ay_tgui_update */


/* ay_tgui_ok:
 *  remove temporary copies of NURBS patch objects (user pressed "Ok")
 */
int
ay_tgui_ok(void)
{
 int ay_status = AY_OK;
 char fname[] = "tgui_ok";
 ay_list_object *oref = ay_tgui_origrefs;
 ay_object *o = ay_tgui_origs, *l = NULL;

  while(ay_tgui_origrefs)
    {
      o = ay_tgui_origs;
      ay_tgui_origs = o->next;

      /* remove trim curves */
      if(o->down)
	{
	  ay_status = ay_object_deletemulti(o->down);
	  if(ay_status)
	    {
	      ay_error(AY_ERROR, fname,
		"Could not remove children, maybe referenced objects?");

	      l = o->down;
	      while(l->next)
		{
		  l = l->next;
		}
	      ay_object_delete(l->next);
	      l->next = ay_clipboard;
	      ay_clipboard = o->down;
	      o->down = NULL;
	      ay_error(AY_ERROR, fname, "Moved children to clipboard!");

	    } /* if */
	  o->down = NULL;
	} /* if */

      o->name = NULL;
      o->selp = NULL;
      o->mat = NULL;
      ay_tags_delall(o);
      ay_object_delete(o);
      /*free(o);*/

      /* remove reference to original object (in scene) */
      oref = ay_tgui_origrefs;
      ay_tgui_origrefs = oref->next;
      free(oref);
    } /* while */

 return ay_status;
} /* ay_tgui_ok */


/* ay_tgui_cancel:
 *  copy original NURBS patch objects from ay_tgui_origs back to scene
 *  and remove tesselated PolyMeshes (user pressed "Cancel")
 */
int
ay_tgui_cancel(void)
{
 int ay_status = AY_OK;
 ay_list_object *oref = ay_tgui_origrefs;
 ay_object *o = ay_tgui_origs;
 ay_deletecb *cb = NULL;
 void **arr = NULL;

  arr = ay_deletecbt.arr;

  while(ay_tgui_origrefs)
    {
      o = ay_tgui_origs;
      oref = ay_tgui_origrefs;

      if(oref->object->type == AY_IDPOMESH)
	{
	  cb = (ay_deletecb *)(arr[oref->object->type]);
	  if(cb)
	    ay_status = cb(oref->object->refine);

	  if(ay_status)
	    return ay_status;
	}

      oref->object->type = o->type;
      oref->object->refine = o->refine;
      /* move children (trim curves) */
      oref->object->down = o->down;

      /* move tags */
      ay_tags_delall(oref->object);
      oref->object->tags = o->tags;

      ay_tgui_origs = o->next;
      free(o);
      ay_tgui_origrefs = oref->next;
      free(oref);
    } /* while */

  /* redraw all views */
  o = ay_root->down;
  while(o)
    {
      if(o->type == AY_IDVIEW)
	{
	  ay_toglcb_display(((ay_view_object *)(o->refine))->togl);
	}
      o = o->next;
    } /* while */

 return ay_status;
} /* ay_tgui_cancel */


/* ay_tgui_tcmd:
 *
 */
int
ay_tgui_tcmd(ClientData clientData, Tcl_Interp *interp,
	     int argc, char *argv[])
{
 int ay_status = AY_OK;
 char fname[] = "tguiCmd";

  if(argc < 2)
    {
      ay_error(AY_EARGS, fname, "(ok|ca|up|in)!");
      return TCL_OK;
    }

  switch(argv[1][0])
    {
    case 'o':
      ay_status = ay_tgui_ok();
      break;
    case 'c':
      ay_status = ay_tgui_cancel();
      break;
    case 'u':
      ay_status = ay_tgui_update(interp, argc-1, &(argv[1]));
      break;
    case 'i':
      ay_status = ay_tgui_open();
      break;
    default:
      break;
    } /* switch */

 return TCL_OK;
} /* ay_tgui_tcmd */


/* ay_tgui_init:
 *  initialize tgui module
 */
int
ay_tgui_init(Tcl_Interp *interp)
{
 int ay_status = AY_OK;

  /* register some C-functions as Tcl-Commands */
  Tcl_CreateCommand (interp, "tguiCmd",
		     ay_tgui_tcmd,
		     (ClientData) NULL, (Tcl_CmdDeleteProc *) NULL);

  /* register TP tag type */
  ay_tags_register(interp, ay_tp_tagname, &ay_tp_tagtype);

 return ay_status;
} /* ay_tgui_init */
