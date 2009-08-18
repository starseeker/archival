/*
 * Ayam, a free 3D modeler for the RenderMan interface.
 *
 * Ayam is copyrighted 1998-2009 by Randolf Schultz
 * (randolf.schultz@gmail.com) and others.
 *
 * All rights reserved.
 *
 * See the file License for details.
 *
 */

#include "ayam.h"

/* concatnp.c - concatnp object */

static char *ay_concatnp_name = "ConcatNP";

/* ay_concatnp_createcb:
 *  create callback function of concatnp object
 */
int
ay_concatnp_createcb(int argc, char *argv[], ay_object *o)
{
 char fname[] = "crtconcatnp";
 ay_concatnp_object *new = NULL;

  if(!o)
    return AY_ENULL;

  if(!(new = calloc(1, sizeof(ay_concatnp_object))))
    {
      ay_error(AY_EOMEM, fname, NULL);
      return AY_ERROR;
    }

  new->knot_type = AY_KTNURB;

  o->parent = AY_TRUE;

  o->refine = new;

 return AY_OK;
} /* ay_concatnp_createcb */


/* ay_concatnp_deletecb:
 *  delete callback function of concatnp object
 */
int
ay_concatnp_deletecb(void *c)
{
 ay_concatnp_object *concatnp = NULL;

  if(!c)
    return AY_ENULL;

  concatnp = (ay_concatnp_object *)(c);

  ay_object_delete(concatnp->npatch);

  free(concatnp);

 return AY_OK;
} /* ay_concatnp_deletecb */


/* ay_concatnp_copycb:
 *  copy callback function of concatnp object
 */
int
ay_concatnp_copycb(void *src, void **dst)
{
 ay_concatnp_object *concatnp = NULL, *concatnpsrc = NULL;

  if(!src || !dst)
    return AY_ENULL;

  concatnpsrc = (ay_concatnp_object *)src;

  if(!(concatnp = calloc(1, sizeof(ay_concatnp_object))))
    return AY_EOMEM;

  memcpy(concatnp, src, sizeof(ay_concatnp_object));

  /* copy npatch */
  ay_object_copy(concatnpsrc->npatch, &(concatnp->npatch));

  *dst = (void *)concatnp;

 return AY_OK;
} /* ay_concatnp_copycb */


/* ay_concatnp_drawcb:
 *  draw (display in an Ayam view window) callback function of concatnp object
 */
int
ay_concatnp_drawcb(struct Togl *togl, ay_object *o)
{
 ay_concatnp_object *cc = NULL;

  if(!o)
    return AY_ENULL;

  cc = (ay_concatnp_object *)o->refine;

  if(cc->npatch)
    {
      ay_draw_object(togl, cc->npatch, AY_TRUE);
    }

 return AY_OK;
} /* ay_concatnp_drawcb */


/* ay_concatnp_shadecb:
 *  shade (display in an Ayam view window) callback function of concatnp object
 */
int
ay_concatnp_shadecb(struct Togl *togl, ay_object *o)
{
 ay_concatnp_object *cc = NULL;

  if(!o)
    return AY_ENULL;

  cc = (ay_concatnp_object *)o->refine;

  if(cc->npatch)
    {
      ay_shade_object(togl, cc->npatch, AY_FALSE);
    }

 return AY_OK;
} /* ay_concatnp_shadecb */


/* ay_concatnp_drawhcb:
 *  draw handles (in an Ayam view window) callback function of concatnp object
 */
int
ay_concatnp_drawhcb(struct Togl *togl, ay_object *o)
{

 return AY_OK;
} /* ay_concatnp_drawhcb */


/* ay_concatnp_getpntcb:
 *  get point (editing and selection) callback function of concatnp object
 */
int
ay_concatnp_getpntcb(int mode, ay_object *o, double *p, ay_pointedit *pe)
{

 return AY_OK;
} /* ay_concatnp_getpntcb */


/* ay_concatnp_setpropcb:
 *  set property (from Tcl to C context) callback function of concatnp object
 */
int
ay_concatnp_setpropcb(Tcl_Interp *interp, int argc, char *argv[], ay_object *o)
{
 /*int ay_status = AY_OK;*/
 char *n1 = "ConcatNPAttrData";
 /*char fname[] = "concatnp_setpropcb";*/
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 ay_concatnp_object *concatnp = NULL;

  if(!o)
    return AY_ENULL;

  concatnp = (ay_concatnp_object *)o->refine;

  toa = Tcl_NewStringObj(n1,-1);
  ton = Tcl_NewStringObj(n1,-1);

  Tcl_SetStringObj(ton,"Type",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(concatnp->type));

  Tcl_SetStringObj(ton,"Revert",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(concatnp->revert));

  Tcl_SetStringObj(ton,"Knot-Type",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(concatnp->knot_type));
  concatnp->knot_type++;

  Tcl_SetStringObj(ton,"FillGaps",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(concatnp->fillgaps));

  Tcl_SetStringObj(ton,"FTLength",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetDoubleFromObj(interp,to, &(concatnp->ftlength));

  Tcl_IncrRefCount(toa);Tcl_DecrRefCount(toa);
  Tcl_IncrRefCount(ton);Tcl_DecrRefCount(ton);

  ay_notify_force(o);

  o->modified = AY_TRUE;
  ay_notify_parent();

 return AY_OK;
} /* ay_concatnp_setpropcb */


/* ay_concatnp_getpropcb:
 *  get property (from C to Tcl context) callback function of concatnp object
 */
int
ay_concatnp_getpropcb(Tcl_Interp *interp, int argc, char *argv[], ay_object *o)
{
 char *n1="ConcatNPAttrData";
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 ay_concatnp_object *concatnp = NULL;

  if(!o)
    return AY_ENULL;

  concatnp = (ay_concatnp_object *)(o->refine);

  toa = Tcl_NewStringObj(n1,-1);

  ton = Tcl_NewStringObj(n1,-1);


  Tcl_SetStringObj(ton,"Type",-1);
  to = Tcl_NewIntObj(concatnp->type);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"Revert",-1);
  to = Tcl_NewIntObj(concatnp->revert);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"Knot-Type",-1);
  to = Tcl_NewIntObj(concatnp->knot_type-1);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"FillGaps",-1);
  to = Tcl_NewIntObj(concatnp->fillgaps);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"FTLength",-1);
  to = Tcl_NewDoubleObj(concatnp->ftlength);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  ay_prop_getnpinfo(interp, n1, concatnp->npatch);

  Tcl_IncrRefCount(toa);Tcl_DecrRefCount(toa);
  Tcl_IncrRefCount(ton);Tcl_DecrRefCount(ton);

 return AY_OK;
} /* ay_concatnp_getpropcb */


/* ay_concatnp_readcb:
 *  read (from scene file) callback function of concatnp object
 */
int
ay_concatnp_readcb(FILE *fileptr, ay_object *o)
{
 ay_concatnp_object *concatnp = NULL;

  if(!o)
    return AY_ENULL;

  if(!(concatnp = calloc(1, sizeof(ay_concatnp_object))))
    { return AY_EOMEM; }

  concatnp->ftlength = 0.3;

  fscanf(fileptr, "%d\n", &concatnp->type);
  fscanf(fileptr, "%d\n", &concatnp->revert);
  fscanf(fileptr, "%d\n", &concatnp->knot_type);

  fscanf(fileptr, "%d\n", &concatnp->fillgaps);
  fscanf(fileptr, "%lg\n", &concatnp->ftlength);

  o->refine = concatnp;

 return AY_OK;
} /* ay_concatnp_readcb */


/* ay_concatnp_writecb:
 *  write (to scene file) callback function of concatnp object
 */
int
ay_concatnp_writecb(FILE *fileptr, ay_object *o)
{
 ay_concatnp_object *concatnp = NULL;

  if(!o)
    return AY_ENULL;

  concatnp = (ay_concatnp_object *)(o->refine);

  fprintf(fileptr, "%d\n", concatnp->type);
  fprintf(fileptr, "%d\n", concatnp->revert);
  fprintf(fileptr, "%d\n", concatnp->knot_type);

  fprintf(fileptr, "%d\n", concatnp->fillgaps);
  fprintf(fileptr, "%g\n", concatnp->ftlength);

 return AY_OK;
} /* ay_concatnp_writecb */


/* ay_concatnp_wribcb:
 *  RIB export callback function of concatnp object
 */
int
ay_concatnp_wribcb(char *file, ay_object *o)
{
 ay_concatnp_object *concatnp = NULL;

  if(!o)
   return AY_ENULL;

  concatnp = (ay_concatnp_object*)o->refine;

  if(concatnp->npatch)
    ay_wrib_object(file, concatnp->npatch);

 return AY_OK;
} /* ay_concatnp_wribcb */


/* ay_concatnp_bbccb:
 *  bounding box calculation callback function of concatnp object
 */
int
ay_concatnp_bbccb(ay_object *o, double *bbox, int *flags)
{

  if(!o || !flags)
    return AY_ENULL;

  /* use the bounding boxes of the children */
  *flags = 2;

 return AY_OK;
} /* ay_concatnp_bbccb */


/* ay_concatnp_notifycb:
 *  notification callback function of concatnp object
 */
int
ay_concatnp_notifycb(ay_object *o)
{
 int ay_status = AY_OK;
 char fname[] = "concatnp_notifycb";
 ay_concatnp_object *concatnp = NULL;
 ay_object *down = NULL, *patches = NULL, **next = NULL;
 ay_nurbpatch_object *np = NULL;

  if(!o)
    return AY_ENULL;

  concatnp = (ay_concatnp_object *)(o->refine);
  if(concatnp->npatch)
    ay_object_delete(concatnp->npatch);
  concatnp->npatch = NULL;

  /* get child objects */
  down = o->down;
  next = &patches;
  while(down)
    {
      /* copy or provide */
      if(down->type == AY_IDNPATCH)
	{
	  ay_object_copy(down, next);
	  next = &((*next)->next);
	}
      else
	{
	  ay_provide_object(down, AY_IDNPATCH, next);
	  while(*next)
	    {
	      next = &((*next)->next);
	    }
	}

      down = down->next;
    } /* while */

  /* gracefully exit, if there are no
     (or not enough?) patches to concat */
  if(!patches)
    {
      return AY_OK;
    }

  ay_status = ay_npt_concat(patches, concatnp->type, concatnp->knot_type,
			    0, &concatnp->npatch);

  if(ay_status)
    {
      ay_error(AY_ERROR, fname, "Failed to concat!");
    }
  else
    {
      np = (ay_nurbpatch_object*)concatnp->npatch->refine;

      np->glu_sampling_tolerance =
	((ay_nurbpatch_object*)patches->refine)->glu_sampling_tolerance;
      np->display_mode =
	((ay_nurbpatch_object*)patches->refine)->display_mode;

      if(concatnp->revert)
	{
	  ay_status = ay_npt_revertu(np);
	  if(ay_status)
	    {
	      ay_error(ay_status, fname, "Failed to revert!");
	    } /* if */
	} /* if */
    } /* if */

  /* free list of temporary curves */
  ay_object_deletemulti(patches);

 return AY_OK;
} /* ay_concatnp_notifycb */


/* ay_concatnp_convertcb:
 *  convert callback function of concatnp object
 */
int
ay_concatnp_convertcb(ay_object *o, int in_place)
{
 int ay_status = AY_OK;
 ay_concatnp_object *cc = NULL;
 ay_object *new = NULL;
 ay_nurbpatch_object *np = NULL;

  if(!o)
    return AY_ENULL;

  cc = (ay_concatnp_object *) o->refine;

  if(cc->npatch)
    {
      ay_status = ay_object_copy(cc->npatch, &new);
      if(new)
	{
	  /* reset display mode of new patch to "global" */
	  np = (ay_nurbpatch_object *)(new->refine);
	  np->display_mode = 0;

	  /* immediately create and show the multiple points */
	  np->createmp = AY_TRUE;
	  ay_npt_recreatemp(np);

	  ay_trafo_copy(o, new);

	  if(!in_place)
	    {
	      ay_status = ay_object_link(new);
	    }
	  else
	    {
	      ay_status = ay_object_replace(new, o);
	    }
	}
    } /* if */

 return ay_status;
} /* ay_concatnp_convertcb */


/* ay_concatnp_providecb:
 *  provide callback function of concatnp object
 */
int
ay_concatnp_providecb(ay_object *o, unsigned int type, ay_object **result)
{
 int ay_status = AY_OK;
 char *fname = "concatnp_providecb";
 ay_concatnp_object *cc = NULL;

  if(!o)
    return AY_ENULL;

  if(!result)
    {
      if(type == AY_IDNPATCH)
	return AY_OK;
      else
	return AY_ERROR;
    }

  cc = (ay_concatnp_object *) o->refine;

  if(type == AY_IDNPATCH)
    {
      if(cc->npatch)
	{
	  ay_status = ay_object_copy(cc->npatch, result);
	  if(ay_status)
	    {
	      ay_error(ay_status, fname, NULL);
	      return AY_ERROR;
	    }
	  ay_trafo_copy(o, *result);
	}
    }

 return ay_status;
} /* ay_concatnp_providecb */


/* ay_concatnp_init:
 *  initialize the concatnp object module
 */
int
ay_concatnp_init(Tcl_Interp *interp)
{
 int ay_status = AY_OK;

  ay_status = ay_otype_registercore(ay_concatnp_name,
				    ay_concatnp_createcb,
				    ay_concatnp_deletecb,
				    ay_concatnp_copycb,
				    ay_concatnp_drawcb,
				    NULL, /* no handles */
				    ay_concatnp_shadecb,
				    ay_concatnp_setpropcb,
				    ay_concatnp_getpropcb,
				    ay_concatnp_getpntcb,
				    ay_concatnp_readcb,
				    ay_concatnp_writecb,
				    ay_concatnp_wribcb,
				    ay_concatnp_bbccb,
				    AY_IDCONCATNP);


  ay_status = ay_notify_register(ay_concatnp_notifycb, AY_IDCONCATNP);

  ay_status = ay_convert_register(ay_concatnp_convertcb, AY_IDCONCATNP);

  ay_status = ay_provide_register(ay_concatnp_providecb, AY_IDCONCATNP);

 return ay_status;
} /* ay_concatnp_init */

