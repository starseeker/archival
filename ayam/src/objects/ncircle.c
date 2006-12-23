/*
 * Ayam, a free 3D modeler for the RenderMan interface.
 *
 * Ayam is copyrighted 1998-2001 by Randolf Schultz
 * (rschultz@informatik.uni-rostock.de) and others.
 *
 * All rights reserved.
 *
 * See the file License for details.
 *
 */

#include "ayam.h"

/* ncircle.c - ncircle object */

static char *ay_ncircle_name = "NCircle";

int
ay_ncircle_createcb(int argc, char *argv[], ay_object *o)
{
  /* int ay_status = AY_OK;*/
 char fname[] = "crtncircle";
 ay_ncircle_object *new = NULL;

  if(!o)
    return AY_ENULL;

  if(!(new = calloc(1, sizeof(ay_ncircle_object))))
    {
      ay_error(AY_EOMEM, fname, NULL);
      return AY_ERROR;
    }

  new->radius = 1.0;
  new->tmax = 360.0;

  o->refine = new;

 return AY_OK;
} /* ay_ncircle_createcb */


int
ay_ncircle_deletecb(void *c)
{
 ay_ncircle_object *ncircle = NULL;

  if(!c)
    return AY_ENULL;

  ncircle = (ay_ncircle_object *)(c);

  if(ncircle->ncurve)
    ay_object_delete(ncircle->ncurve);

  free(ncircle);

 return AY_OK;
} /* ay_ncircle_deletecb */


int
ay_ncircle_copycb(void *src, void **dst)
{
 ay_ncircle_object *ncircle = NULL, *ncirclesrc = NULL;

  if(!src || !dst)
    return AY_ENULL;

  ncirclesrc = (ay_ncircle_object *)src;

  if(!(ncircle = calloc(1, sizeof(ay_ncircle_object))))
    return AY_EOMEM;

  memcpy(ncircle, src, sizeof(ay_ncircle_object));

  /* copy ncurve */
  ay_object_copy(ncirclesrc->ncurve, &(ncircle->ncurve));

  *dst = (void *)ncircle;

 return AY_OK;
} /* ay_ncircle_copycb */


int
ay_ncircle_drawcb(struct Togl *togl, ay_object *o)
{
 ay_ncircle_object *ncircle = NULL;

  if(!o)
    return AY_ENULL;

  ncircle = (ay_ncircle_object *)o->refine;

  if(!ncircle)
    return AY_ENULL;

  if(ncircle->ncurve)
    ay_draw_object(togl, ncircle->ncurve, AY_TRUE);

 return AY_OK;
} /* ay_ncircle_drawcb */


int
ay_ncircle_shadecb(struct Togl *togl, ay_object *o)
{

 return AY_OK;
} /* ay_ncircle_shadecb */


int
ay_ncircle_drawhcb(struct Togl *togl, ay_object *o)
{
 ay_ncircle_object *ncircle = NULL;
 ay_nurbcurve_object *nc = NULL;
 double *p1, *p2;

  if(!o)
    return AY_ENULL;

  ncircle = (ay_ncircle_object *)o->refine;

  if(ncircle && ncircle->ncurve)
    {
      /* get NURBS curve and its last control points */
      nc = (ay_nurbcurve_object *)ncircle->ncurve->refine;
      p1 = &(nc->controlv[nc->length*4-8]);
      p2 = p1+4;
      /* draw arrow */
      ay_draw_arrow(togl, p1, p2);
    }

 return AY_OK;
} /* ay_ncircle_drawhcb */


int
ay_ncircle_getpntcb(int mode, ay_object *o, double *p)
{

 return AY_OK;
} /* ay_ncircle_getpntcb */


/* Tcl -> C! */
int
ay_ncircle_setpropcb(Tcl_Interp *interp, int argc, char *argv[], ay_object *o)
{
 int ay_status = AY_OK;
 char *n1 = "NCircleAttrData";
 /*char fname[] = "ncircle_setpropcb";*/
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 ay_ncircle_object *ncircle = NULL;

  if(!o)
    return AY_ENULL;

  ncircle = (ay_ncircle_object *)o->refine;

  toa = Tcl_NewStringObj(n1,-1);
  ton = Tcl_NewStringObj(n1,-1);

  Tcl_SetStringObj(ton,"Radius",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetDoubleFromObj(interp,to, &(ncircle->radius));

  Tcl_SetStringObj(ton,"TMin",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetDoubleFromObj(interp,to, &(ncircle->tmin));

  Tcl_SetStringObj(ton,"TMax",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetDoubleFromObj(interp,to, &(ncircle->tmax));

  Tcl_SetStringObj(ton,"Tolerance",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetDoubleFromObj(interp,to, &(ncircle->glu_sampling_tolerance));

  Tcl_SetStringObj(ton,"DisplayMode",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(ncircle->glu_display_mode));

  Tcl_IncrRefCount(toa);Tcl_DecrRefCount(toa);
  Tcl_IncrRefCount(ton);Tcl_DecrRefCount(ton);

  o->modified = AY_TRUE;

  ay_status = ay_notify_force(o);

  ay_status = ay_notify_parent();

 return AY_OK;
} /* ay_ncircle_setpropcb */


/* C -> Tcl! */
int
ay_ncircle_getpropcb(Tcl_Interp *interp, int argc, char *argv[], ay_object *o)
{
 char *n1="NCircleAttrData";
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 ay_ncircle_object *ncircle = NULL;

  if(!o)
    return AY_ENULL;

  ncircle = (ay_ncircle_object *)(o->refine);

  toa = Tcl_NewStringObj(n1,-1);

  ton = Tcl_NewStringObj(n1,-1);

  Tcl_SetStringObj(ton,"Radius",-1);
  to = Tcl_NewDoubleObj(ncircle->radius);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"TMin",-1);
  to = Tcl_NewDoubleObj(ncircle->tmin);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"TMax",-1);
  to = Tcl_NewDoubleObj(ncircle->tmax);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"Tolerance",-1);
  to = Tcl_NewDoubleObj(ncircle->glu_sampling_tolerance);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"DisplayMode",-1);
  to = Tcl_NewIntObj(ncircle->glu_display_mode);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  ay_prop_getncinfo(interp, n1, ncircle->ncurve);

  Tcl_IncrRefCount(toa);Tcl_DecrRefCount(toa);
  Tcl_IncrRefCount(ton);Tcl_DecrRefCount(ton);

 return AY_OK;
} /* ay_ncircle_getpropcb */


int
ay_ncircle_readcb(FILE *fileptr, ay_object *o)
{
 ay_ncircle_object *ncircle = NULL;

 if(!o)
   return AY_ENULL;

  if(!(ncircle = calloc(1, sizeof(ay_ncircle_object))))
    { return AY_EOMEM; }

  fscanf(fileptr,"%lg\n",&ncircle->radius);
  fscanf(fileptr,"%lg\n",&ncircle->tmin);
  fscanf(fileptr,"%lg\n",&ncircle->tmax);
  fscanf(fileptr,"%lg\n",&ncircle->glu_sampling_tolerance);
  fscanf(fileptr,"%d\n",&ncircle->glu_display_mode);

  o->refine = ncircle;

 return AY_OK;
} /* ay_ncircle_readcb */


int
ay_ncircle_writecb(FILE *fileptr, ay_object *o)
{
 ay_ncircle_object *ncircle = NULL;

  if(!o)
    return AY_ENULL;

  ncircle = (ay_ncircle_object *)(o->refine);

  fprintf(fileptr, "%g\n", ncircle->radius);
  fprintf(fileptr, "%g\n", ncircle->tmin);
  fprintf(fileptr, "%g\n", ncircle->tmax);
  fprintf(fileptr, "%g\n", ncircle->glu_sampling_tolerance);
  fprintf(fileptr, "%d\n", ncircle->glu_display_mode);

 return AY_OK;
} /* ay_ncircle_writecb */


int
ay_ncircle_wribcb(char *file, ay_object *o)
{
 ay_ncircle_object *ncircle = NULL;

  if(!o)
   return AY_ENULL;

  ncircle = (ay_ncircle_object*)o->refine;

 return AY_OK;
} /* ay_ncircle_wribcb */


int
ay_ncircle_bbccb(ay_object *o, double *bbox, int *flags)
{
 ay_ncircle_object *ncircle = NULL;

  if(!o || !bbox || !flags)
    return AY_ENULL;

  ncircle = (ay_ncircle_object *)o->refine;

  if(ncircle->ncurve)
    {
      ay_bbc_get(ncircle->ncurve, bbox);
      *flags = 1;
    }
  else
    {
      /* invalid/nonexisting bbox */
      *flags = 2;
    } /* if */

 return AY_OK;
} /* ay_ncircle_bbccb */


int
ay_ncircle_notifycb(ay_object *o)
{
 int ay_status = AY_OK;
 char fname[] = "ncircle_notify";
 ay_ncircle_object *ncircle = NULL;
 ay_nurbcurve_object *nc = NULL;
 ay_object *ncurve = NULL;

  if(!o)
    return AY_ENULL;

  ncircle = (ay_ncircle_object *)(o->refine);

  if(!(nc = calloc(1, sizeof(ay_nurbcurve_object))))
    return AY_EOMEM;

  ay_status = ay_nb_CreateNurbsCircleArc(ncircle->radius,
					 ncircle->tmin, ncircle->tmax,
			         &(nc->length), &(nc->knotv), &(nc->controlv));

  if(ay_status)
    { free(nc); return ay_status; }


  nc->order = 3;
  nc->knot_type = AY_KTCUSTOM;
  nc->is_rat = AY_TRUE;
  nc->display_mode = ncircle->glu_display_mode;
  nc->glu_sampling_tolerance = ncircle->glu_sampling_tolerance;

  if(!(ncurve = calloc(1, sizeof(ay_object))))
    {
      ay_nct_destroy(nc);
      ay_error(AY_EOMEM, fname, NULL);
      return TCL_OK;
    }

  ncurve->type = AY_IDNCURVE;
  ay_status = ay_object_defaults(ncurve);
  ncurve->refine = nc;

  ncircle->ncurve = ncurve;

 return AY_OK;
} /* ay_ncircle_notifycb */


int
ay_ncircle_convertcb(ay_object *o, int in_place)
{
 int ay_status = AY_OK;
 ay_ncircle_object *ncircle = NULL;
 ay_object *new = NULL;
 ay_nurbcurve_object *nc = NULL;

  if(!o)
    return AY_ENULL;

  ncircle = (ay_ncircle_object *) o->refine;

  if(ncircle->ncurve)
    {
      ay_status = ay_object_copy(ncircle->ncurve, &new);

      if(new)
	{
	  /* reset display mode of new curve to "global" */
	  nc = (ay_nurbcurve_object *)(new->refine);
	  nc->display_mode = 0;

	  ay_trafo_copy(o, new);

	  if(!in_place)
	    {
	      ay_status = ay_object_link(new);
	    }
	  else
	    {
	      ay_status = ay_object_replace(new, o);
	    } /* if */
	} /* if */
    } /* if */

 return ay_status;
} /* ay_ncircle_convertcb */


int
ay_ncircle_providecb(ay_object *o, unsigned int type, ay_object **result)
{
 int ay_status = AY_OK;
 ay_ncircle_object *ncircle = NULL;
 ay_nurbcurve_object *nc = NULL;

  if(!o)
    return AY_ENULL;

  if(!result)
    {
      if(type == AY_IDNCURVE)
	return AY_OK;
      else
	return AY_ERROR;
    }

  ncircle = (ay_ncircle_object *) o->refine;

  if(type == AY_IDNCURVE)
    {
      if(ncircle->ncurve)
	{
	  nc = (ay_nurbcurve_object *)ncircle->ncurve->refine;
	  nc->display_mode = ncircle->glu_display_mode;
	  ay_status = ay_object_copy(ncircle->ncurve, result);
	  if(*result)
	    {
	      ay_trafo_copy(o, *result);
	    } /* if */
	} /* if */
    } /* if */

 return ay_status;
} /* ay_ncircle_providecb */


int
ay_ncircle_init(Tcl_Interp *interp)
{
 int ay_status = AY_OK;

  ay_status = ay_otype_registercore(ay_ncircle_name,
				    ay_ncircle_createcb,
				    ay_ncircle_deletecb,
				    ay_ncircle_copycb,
				    ay_ncircle_drawcb,
				    ay_ncircle_drawhcb,
				    NULL, /* no shading */
				    ay_ncircle_setpropcb,
				    ay_ncircle_getpropcb,
				    NULL, /* no editable points */
				    ay_ncircle_readcb,
				    ay_ncircle_writecb,
				    NULL, /* no RIB export */
				    ay_ncircle_bbccb,
				    AY_IDNCIRCLE);


  ay_status = ay_notify_register(ay_ncircle_notifycb, AY_IDNCIRCLE);

  ay_status = ay_convert_register(ay_ncircle_convertcb, AY_IDNCIRCLE);

  ay_status = ay_provide_register(ay_ncircle_providecb, AY_IDNCIRCLE);

  ay_matt_nomaterial(AY_IDNCIRCLE);

 return ay_status;
} /* ay_ncircle_init */

