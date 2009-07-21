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

#include "ayam.h"

/* extrnc.c - ExtrNC (extract NURBS curve) object */

static char *ay_extrnc_name = "ExtrNC";

/* functions: */

/* ay_extrnc_createcb:
 *  create callback function of extrnc object
 */
int
ay_extrnc_createcb(int argc, char *argv[], ay_object *o)
{
 char fname[] = "crtextrnc";
 ay_extrnc_object *new = NULL;

  if(!o)
    return AY_ENULL;

  if(!(new = calloc(1, sizeof(ay_extrnc_object))))
    {
      ay_error(AY_EOMEM, fname, NULL);
      return AY_ERROR;
    }

  o->hide_children = AY_TRUE;
  o->parent = AY_TRUE;
  o->refine = new;

 return AY_OK;
} /* ay_extrnc_createcb */


/* ay_extrnc_deletecb:
 *  delete callback function of extrnc object
 */
int
ay_extrnc_deletecb(void *c)
{
 ay_extrnc_object *extrnc = NULL;

  if(!c)
    return AY_ENULL;

  extrnc = (ay_extrnc_object *)(c);

  if(extrnc->ncurve)
    ay_object_delete(extrnc->ncurve);

  free(extrnc);

 return AY_OK;
} /* ay_extrnc_deletecb */


/* ay_extrnc_copycb:
 *  copy callback function of extrnc object
 */
int
ay_extrnc_copycb(void *src, void **dst)
{
 ay_extrnc_object *extrnc = NULL, *extrncsrc = NULL;

  if(!src || !dst)
    return AY_ENULL;

  extrncsrc = (ay_extrnc_object *)src;

  if(!(extrnc = calloc(1, sizeof(ay_extrnc_object))))
    return AY_EOMEM;

  memcpy(extrnc, src, sizeof(ay_extrnc_object));

  /* copy ncurve */
  if(extrncsrc->ncurve)
    {
      ay_object_copy(extrncsrc->ncurve, &(extrnc->ncurve));
    }

  *dst = (void *)extrnc;

 return AY_OK;
} /* ay_extrnc_copycb */


/* ay_extrnc_drawcb:
 *  draw (display in an Ayam view window) callback function of extrnc object
 */
int
ay_extrnc_drawcb(struct Togl *togl, ay_object *o)
{
 ay_extrnc_object *extrnc = NULL;

  if(!o)
    return AY_ENULL;

  extrnc = (ay_extrnc_object *)o->refine;

  if(!extrnc)
    return AY_ENULL;

  if(extrnc->ncurve)
    ay_draw_object(togl, extrnc->ncurve, AY_TRUE);

 return AY_OK;
} /* ay_extrnc_drawcb */


/* ay_extrnc_shadecb:
 *  shade (display in an Ayam view window) callback function of extrnc object
 */
int
ay_extrnc_shadecb(struct Togl *togl, ay_object *o)
{

 return AY_OK;
} /* ay_extrnc_shadecb */


/* ay_extrnc_drawhcb:
 *  draw handles (in an Ayam view window) callback function of extrnc object
 */
int
ay_extrnc_drawhcb(struct Togl *togl, ay_object *o)
{
 ay_extrnc_object *extrnc = NULL;
 ay_nurbcurve_object *nc = NULL;
 ay_object *c = NULL;
 double *p1, *p2;
 double m[16];

  if(!o)
    return AY_ENULL;

  extrnc = (ay_extrnc_object *)o->refine;

  if(extrnc && extrnc->ncurve)
    {
      /* get NURBS curve and its last control points */
      nc = (ay_nurbcurve_object *)extrnc->ncurve->refine;
      p1 = &(nc->controlv[nc->length*4-8]);
      p2 = p1+4;

      /* draw arrow */
      glPushMatrix();
        c = extrnc->ncurve;
	glTranslated((GLdouble)c->movx, (GLdouble)c->movy, (GLdouble)c->movz);
	ay_quat_torotmatrix(c->quat, m);
	glMultMatrixd((GLdouble*)m);
	glScaled((GLdouble)c->scalx, (GLdouble)c->scaly, (GLdouble)c->scalz);

        ay_draw_arrow(togl, p1, p2);

      glPopMatrix();
    }

 return AY_OK;
} /* ay_extrnc_drawhcb */


/* ay_extrnc_getpntcb:
 *  get point (editing and selection) callback function of extrnc object
 */
int
ay_extrnc_getpntcb(int mode, ay_object *o, double *p, ay_pointedit *pe)
{

 return AY_OK;
} /* ay_extrnc_getpntcb */


/* ay_extrnc_setpropcb:
 *  set property (from Tcl to C context) callback function of extrnc object
 */
int
ay_extrnc_setpropcb(Tcl_Interp *interp, int argc, char *argv[], ay_object *o)
{
 /*int ay_status = AY_OK;*/
 char *n1 = "ExtrNCAttrData";
 /* char fname[] = "extrnc_setpropcb";*/
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 ay_extrnc_object *extrnc = NULL;

  if(!o)
    return AY_ENULL;

  extrnc = (ay_extrnc_object *)o->refine;

  toa = Tcl_NewStringObj(n1,-1);
  ton = Tcl_NewStringObj(n1,-1);


  Tcl_SetStringObj(ton,"Side",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(extrnc->side));

  Tcl_SetStringObj(ton,"Parameter",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetDoubleFromObj(interp,to, &(extrnc->parameter));

  Tcl_SetStringObj(ton,"PatchNum",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(extrnc->pnum));

  Tcl_SetStringObj(ton,"Revert",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(extrnc->revert));

  Tcl_SetStringObj(ton,"Relative",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(extrnc->relative));

  Tcl_SetStringObj(ton,"DisplayMode",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(extrnc->display_mode));

  Tcl_SetStringObj(ton,"Tolerance",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetDoubleFromObj(interp,to, &(extrnc->glu_sampling_tolerance));

  Tcl_IncrRefCount(toa);Tcl_DecrRefCount(toa);
  Tcl_IncrRefCount(ton);Tcl_DecrRefCount(ton);

  ay_notify_force(o);

  o->modified = AY_TRUE;
  ay_notify_parent();

 return AY_OK;
} /* ay_extrnc_setpropcb */


/* ay_extrnc_getpropcb:
 *  get property (from C to Tcl context) callback function of extrnc object
 */
int
ay_extrnc_getpropcb(Tcl_Interp *interp, int argc, char *argv[], ay_object *o)
{
 char *n1="ExtrNCAttrData";
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 ay_extrnc_object *extrnc = NULL;

  if(!o)
    return AY_ENULL;

  extrnc = (ay_extrnc_object *)(o->refine);

  toa = Tcl_NewStringObj(n1,-1);

  ton = Tcl_NewStringObj(n1,-1);


  Tcl_SetStringObj(ton,"Side",-1);
  to = Tcl_NewIntObj(extrnc->side);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"Parameter",-1);
  to = Tcl_NewDoubleObj(extrnc->parameter);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"PatchNum",-1);
  to = Tcl_NewIntObj(extrnc->pnum);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"Revert",-1);
  to = Tcl_NewIntObj(extrnc->revert);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"Relative",-1);
  to = Tcl_NewIntObj(extrnc->relative);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"DisplayMode",-1);
  to = Tcl_NewIntObj(extrnc->display_mode);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"Tolerance",-1);
  to = Tcl_NewDoubleObj(extrnc->glu_sampling_tolerance);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  ay_prop_getncinfo(interp, n1, extrnc->ncurve);

  Tcl_IncrRefCount(toa);Tcl_DecrRefCount(toa);
  Tcl_IncrRefCount(ton);Tcl_DecrRefCount(ton);

 return AY_OK;
} /* ay_extrnc_getpropcb */


/* ay_extrnc_readcb:
 *  read (from scene file) callback function of extrnc object
 */
int
ay_extrnc_readcb(FILE *fileptr, ay_object *o)
{
 ay_extrnc_object *extrnc = NULL;

 if(!o)
   return AY_ENULL;

  if(!(extrnc = calloc(1, sizeof(ay_extrnc_object))))
    { return AY_EOMEM; }

  fscanf(fileptr, "%d\n", &extrnc->side);
  fscanf(fileptr, "%lg\n", &extrnc->parameter);
  fscanf(fileptr, "%d\n", &extrnc->display_mode);
  fscanf(fileptr, "%lg\n", &extrnc->glu_sampling_tolerance);

  if(ay_read_version >= 8)
    {
      fscanf(fileptr, "%d\n", &extrnc->pnum);
    }

  if(ay_read_version >= 10)
    {
      fscanf(fileptr, "%d\n", &extrnc->revert);
    }

  if(ay_read_version >= 12)
    {
      fscanf(fileptr, "%d\n", &extrnc->relative);
    }

  o->refine = extrnc;

 return AY_OK;
} /* ay_extrnc_readcb */


/* ay_extrnc_writecb:
 *  write (to scene file) callback function of extrnc object
 */
int
ay_extrnc_writecb(FILE *fileptr, ay_object *o)
{
 ay_extrnc_object *extrnc = NULL;

  if(!o)
    return AY_ENULL;

  extrnc = (ay_extrnc_object *)(o->refine);

  fprintf(fileptr, "%d\n", extrnc->side);
  fprintf(fileptr, "%g\n", extrnc->parameter);
  fprintf(fileptr, "%d\n", extrnc->display_mode);
  fprintf(fileptr, "%g\n", extrnc->glu_sampling_tolerance);
  fprintf(fileptr, "%d\n", extrnc->pnum);
  fprintf(fileptr, "%d\n", extrnc->revert);
  fprintf(fileptr, "%d\n", extrnc->relative);

 return AY_OK;
} /* ay_extrnc_writecb */


/* ay_extrnc_wribcb:
 *  RIB export callback function of extrnc object
 */
int
ay_extrnc_wribcb(char *file, ay_object *o)
{

 return AY_OK;
} /* ay_extrnc_wribcb */


/* ay_extrnc_bbccb:
 *  bounding box calculation callback function of extrnc object
 */
int
ay_extrnc_bbccb(ay_object *o, double *bbox, int *flags)
{
 ay_extrnc_object *extrnc = NULL;

  if(!o || !bbox)
    return AY_ENULL;

  extrnc = (ay_extrnc_object *)o->refine;

  if(extrnc->ncurve)
    {
      ay_bbc_get(extrnc->ncurve, bbox);
      *flags = 1;
    }
  else
    {
      /* invalid/nonexisting bbox */
      *flags = 2;
    } /* if */

 return AY_OK;
} /* ay_extrnc_bbccb */


/* ay_extrnc_notifycb:
 *  notification callback function of extrnc object
 */
int
ay_extrnc_notifycb(ay_object *o)
{
 int ay_status = AY_OK;
 ay_extrnc_object *extrnc = NULL;
 ay_object *npatch = NULL, *pobject = NULL;
 ay_object *ncurve = NULL;
 int mode, pnum, provided = AY_FALSE;
 double tolerance;

  if(!o)
    return AY_ENULL;

  extrnc = (ay_extrnc_object *)(o->refine);

  pnum = extrnc->pnum - 1;
  mode = extrnc->display_mode;
  tolerance = extrnc->glu_sampling_tolerance;

  /* remove old objects */
  if(extrnc->ncurve)
    ay_object_delete(extrnc->ncurve);
  extrnc->ncurve = NULL;

  /* get patch to extract the ncurve from */
  if(!o->down)
    return AY_OK;
  if(!o->down->next)
    return AY_OK;

  npatch = o->down;
  if(npatch->type != AY_IDNPATCH)
    {
      ay_status = ay_provide_object(npatch, AY_IDNPATCH, &pobject);
      if(!pobject)
	{
	  return AY_OK;
	}
      else
	{
	  if(pnum > 0)
	    {
	      while(pobject && pnum)
		{
		  pobject = pobject->next;
		  pnum--;
		}
	      if(pobject)
		{
		  npatch = pobject;
		}
	      else
		{
		  /* not enough patches for pnum! */
		  ay_status = AY_ERROR;
		  goto cleanup;
		}
	    }
	  else
	    {
	      npatch = pobject;
	    }
	  provided = AY_TRUE;
	} /* if */
    } /* if */

  /* extract the curve */
  if(!(ncurve = calloc(1, sizeof(ay_object))))
    {
      ay_status = AY_EOMEM;
      goto cleanup;
    }

  ay_object_defaults(ncurve);
  ncurve->type = AY_IDNCURVE;

  ay_status = ay_npt_extractnc(npatch, extrnc->side, extrnc->parameter,
			       extrnc->relative, AY_FALSE,
			       (ay_nurbcurve_object **)(&(ncurve->refine)));

  if(ay_status || !ncurve->refine)
    {
      goto cleanup;
    }

  if(extrnc->revert)
    {
      ay_status = ay_nct_revert((ay_nurbcurve_object *)(ncurve->refine));
    }

  extrnc->ncurve = ncurve;

  /* copy transformation attributes over to new object */
  ay_trafo_copy(npatch, ncurve);

  /* copy sampling tolerance/mode over to new object */
  ((ay_nurbcurve_object *)ncurve->refine)->glu_sampling_tolerance =
    tolerance;
  ((ay_nurbcurve_object *)ncurve->refine)->display_mode =
    mode;

  /* prevent cleanup code from doing something harmful */
  ncurve = NULL;

cleanup:

  if(ncurve)
    {
      ay_object_delete(ncurve);
    }

  /* remove provided object(s) */
  if(provided)
    {
      ay_object_deletemulti(pobject);
    }

 return ay_status;
} /* ay_extrnc_notifycb */


/* ay_extrnc_providecb:
 *  provide callback function of extrnc object
 */
int
ay_extrnc_providecb(ay_object *o, unsigned int type, ay_object **result)
{
 int ay_status = AY_OK;
 char fname[] = "extrnc_providecb";
 ay_extrnc_object *s = NULL;
 ay_object *new = NULL, **t = NULL;

  if(!o)
    return AY_ENULL;

  if(!result)
    {
      if(type == AY_IDNCURVE)
	return AY_OK;
      else
	return AY_ERROR;
    } /* if */

  s = (ay_extrnc_object *) o->refine;

  if(type == AY_IDNCURVE)
    {
      t = &(new);

      /* copy extrnc */
      ay_status = ay_object_copy(s->ncurve, t);
      if(ay_status)
	{
	  ay_error(ay_status, fname, NULL);
	  return AY_ERROR;
	}
      ay_trafo_add(o, *t);
      t = &((*t)->next);

      *result = new;
    } /* if */

 return ay_status;
} /* ay_extrnc_providecb */


/* ay_extrnc_convertcb:
 *  convert callback function of extrnc object
 */
int
ay_extrnc_convertcb(ay_object *o, int in_place)
{
 int ay_status = AY_OK;
 ay_extrnc_object *r = NULL;
 ay_object *new = NULL;

  if(!o)
    return AY_ENULL;

  /* first, create new objects */
  r = (ay_extrnc_object *) o->refine;

  if(r->ncurve)
    {
      ay_status = ay_object_copy(r->ncurve, &new);
      ay_trafo_add(o, new);
    } /* if */

  /* second, link new object, or replace old object with it */
  if(new)
    {
      if(!in_place)
	{
	  ay_status = ay_object_link(new);
	}
      else
	{
	  ay_object_replace(new, o);
	} /* if */
    } /* if */

 return ay_status;
} /* ay_extrnc_convertcb */


/* ay_extrnc_init:
 *  initialize the extrnc object module
 */
int
ay_extrnc_init(Tcl_Interp *interp)
{
 int ay_status = AY_OK;

  ay_status = ay_otype_registercore(ay_extrnc_name,
				    ay_extrnc_createcb,
				    ay_extrnc_deletecb,
				    ay_extrnc_copycb,
				    ay_extrnc_drawcb,
				    ay_extrnc_drawhcb,
				    NULL/*ay_extrnc_shadecb*/,
				    ay_extrnc_setpropcb,
				    ay_extrnc_getpropcb,
				    ay_extrnc_getpntcb,
				    ay_extrnc_readcb,
				    ay_extrnc_writecb,
				    ay_extrnc_wribcb,
				    ay_extrnc_bbccb,
				    AY_IDEXTRNC);


  ay_status = ay_notify_register(ay_extrnc_notifycb, AY_IDEXTRNC);

  ay_status = ay_convert_register(ay_extrnc_convertcb, AY_IDEXTRNC);

  ay_status = ay_provide_register(ay_extrnc_providecb, AY_IDEXTRNC);

  /* extrnc objects may not be associated with materials */
  ay_matt_nomaterial(AY_IDEXTRNC);

 return ay_status;
} /* ay_extrnc_init */

