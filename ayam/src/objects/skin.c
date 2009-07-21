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

/* skin.c - skin object */

static char *ay_skin_name = "Skin";

/* functions: */

/* ay_skin_createcb:
 *  create callback function of skin object
 */
int
ay_skin_createcb(int argc, char *argv[], ay_object *o)
{
 char fname[] = "crtskin";
 ay_skin_object *new = NULL;

  if(!o)
    return AY_ENULL;

  if(!(new = calloc(1, sizeof(ay_skin_object))))
    {
      ay_error(AY_EOMEM, fname, NULL);
      return AY_ERROR;
    }

  new->uknot_type = AY_KTNURB;

  o->parent = AY_TRUE;
  o->refine = new;

 return AY_OK;
} /* ay_skin_createcb */


/* ay_skin_deletecb:
 *  delete callback function of skin object
 */
int
ay_skin_deletecb(void *c)
{
 ay_skin_object *skin = NULL;

  if(!c)
    return AY_ENULL;

  skin = (ay_skin_object *)(c);

  if(skin->npatch)
    ay_object_delete(skin->npatch);

  if(skin->caps_and_bevels)
    {
      ay_object_deletemulti(skin->caps_and_bevels);
      skin->caps_and_bevels = NULL;
    }

  free(skin);

 return AY_OK;
} /* ay_skin_deletecb */


/* ay_skin_copycb:
 *  copy callback function of skin object
 */
int
ay_skin_copycb(void *src, void **dst)
{
 ay_skin_object *skin = NULL, *skinsrc = NULL;

  if(!src || !dst)
    return AY_ENULL;

  skinsrc = (ay_skin_object *)src;

  if(!(skin = calloc(1, sizeof(ay_skin_object))))
    return AY_EOMEM;

  memcpy(skin, src, sizeof(ay_skin_object));

  /* copy npatch */
  ay_object_copy(skinsrc->npatch, &(skin->npatch));

  skin->caps_and_bevels = NULL;

  if(skinsrc->caps_and_bevels)
    ay_object_copymulti(skinsrc->caps_and_bevels, &(skin->caps_and_bevels));

  *dst = (void *)skin;

 return AY_OK;
} /* ay_skin_copycb */


/* ay_skin_drawcb:
 *  draw (display in an Ayam view window) callback function of skin object
 */
int
ay_skin_drawcb(struct Togl *togl, ay_object *o)
{
 ay_skin_object *skin;
 ay_object *b;

  if(!o)
    return AY_ENULL;

  skin = (ay_skin_object *)o->refine;

  if(!skin)
    return AY_ENULL;

  if(skin->npatch)
    ay_draw_object(togl, skin->npatch, AY_TRUE);

  if(skin->caps_and_bevels)
    {
      b = skin->caps_and_bevels;
      while(b)
	{
	  ay_draw_object(togl, b, AY_TRUE);
	  b = b->next;
	}
    }

 return AY_OK;
} /* ay_skin_drawcb */


/* ay_skin_shadecb:
 *  shade (display in an Ayam view window) callback function of skin object
 */
int
ay_skin_shadecb(struct Togl *togl, ay_object *o)
{
 ay_skin_object *skin;
 ay_object *b;

  if(!o)
    return AY_ENULL;

  skin = (ay_skin_object *)o->refine;

  if(!skin)
    return AY_ENULL;

  if(skin->npatch)
    ay_shade_object(togl, skin->npatch, AY_FALSE);

  if(skin->caps_and_bevels)
    {
      b = skin->caps_and_bevels;
      while(b)
	{
	  ay_shade_object(togl, b, AY_FALSE);
	  b = b->next;
	}
    }

 return AY_OK;
} /* ay_skin_shadecb */


/* ay_skin_drawhcb:
 *  draw handles (in an Ayam view window) callback function of skin object
 */
int
ay_skin_drawhcb(struct Togl *togl, ay_object *o)
{

 return AY_OK;
} /* ay_skin_drawhcb */


/* ay_skin_getpntcb:
 *  get point (editing and selection) callback function of skin object
 */
int
ay_skin_getpntcb(int mode, ay_object *o, double *p, ay_pointedit *pe)
{

 return AY_OK;
} /* ay_skin_getpntcb */


/* ay_skin_setpropcb:
 *  set property (from Tcl to C context) callback function of skin object
 */
int
ay_skin_setpropcb(Tcl_Interp *interp, int argc, char *argv[], ay_object *o)
{
 /*int ay_status = AY_OK;*/
 char *n1 = "SkinAttrData";
 /* char fname[] = "skin_setpropcb";*/
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 ay_skin_object *skin = NULL;

  if(!o)
    return AY_ENULL;

  skin = (ay_skin_object *)o->refine;

  toa = Tcl_NewStringObj(n1,-1);
  ton = Tcl_NewStringObj(n1,-1);

  Tcl_SetStringObj(ton,"Interpolate",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(skin->interpolate));

  Tcl_SetStringObj(ton,"Order_U",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(skin->uorder));

  Tcl_SetStringObj(ton,"Knot-Type_U",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(skin->uknot_type));

  Tcl_SetStringObj(ton,"StartCap",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(skin->has_start_cap));

  Tcl_SetStringObj(ton,"EndCap",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(skin->has_end_cap));

  Tcl_SetStringObj(ton,"DisplayMode",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &(skin->display_mode));

  Tcl_SetStringObj(ton,"Tolerance",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetDoubleFromObj(interp,to, &(skin->glu_sampling_tolerance));

  Tcl_IncrRefCount(toa);Tcl_DecrRefCount(toa);
  Tcl_IncrRefCount(ton);Tcl_DecrRefCount(ton);

  ay_notify_force(o);

  o->modified = AY_TRUE;
  ay_notify_parent();

 return AY_OK;
} /* ay_skin_setpropcb */


/* ay_skin_getpropcb:
 *  get property (from C to Tcl context) callback function of skin object
 */
int
ay_skin_getpropcb(Tcl_Interp *interp, int argc, char *argv[], ay_object *o)
{
 char *n1="SkinAttrData";
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 ay_skin_object *skin = NULL;

  if(!o)
    return AY_ENULL;

  skin = (ay_skin_object *)(o->refine);

  toa = Tcl_NewStringObj(n1,-1);

  ton = Tcl_NewStringObj(n1,-1);


  Tcl_SetStringObj(ton,"Interpolate",-1);
  to = Tcl_NewIntObj(skin->interpolate);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"Order_U",-1);
  to = Tcl_NewIntObj(skin->uorder);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"Knot-Type_U",-1);
  to = Tcl_NewIntObj(skin->uknot_type);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"StartCap",-1);
  to = Tcl_NewIntObj(skin->has_start_cap);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"EndCap",-1);
  to = Tcl_NewIntObj(skin->has_end_cap);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"DisplayMode",-1);
  to = Tcl_NewIntObj(skin->display_mode);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"Tolerance",-1);
  to = Tcl_NewDoubleObj(skin->glu_sampling_tolerance);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  ay_prop_getnpinfo(interp, n1, skin->npatch);

  Tcl_IncrRefCount(toa);Tcl_DecrRefCount(toa);
  Tcl_IncrRefCount(ton);Tcl_DecrRefCount(ton);

 return AY_OK;
} /* ay_skin_getpropcb */


/* ay_skin_readcb:
 *  read (from scene file) callback function of skin object
 */
int
ay_skin_readcb(FILE *fileptr, ay_object *o)
{
 ay_skin_object *skin = NULL;

 if(!o)
   return AY_ENULL;

  if(!(skin = calloc(1, sizeof(ay_skin_object))))
    { return AY_EOMEM; }


  fscanf(fileptr,"%d\n",&skin->interpolate);
  fscanf(fileptr,"%d\n",&skin->uorder);
  fscanf(fileptr,"%d\n",&skin->uknot_type);
  fscanf(fileptr,"%d\n",&skin->has_start_cap);
  fscanf(fileptr,"%d\n",&skin->has_end_cap);
  fscanf(fileptr,"%d\n",&skin->display_mode);
  fscanf(fileptr,"%lg\n",&skin->glu_sampling_tolerance);

  o->refine = skin;

 return AY_OK;
} /* ay_skin_readcb */


/* ay_skin_writecb:
 *  write (to scene file) callback function of skin object
 */
int
ay_skin_writecb(FILE *fileptr, ay_object *o)
{
 ay_skin_object *skin = NULL;

  if(!o)
    return AY_ENULL;

  skin = (ay_skin_object *)(o->refine);

  fprintf(fileptr, "%d\n", skin->interpolate);
  fprintf(fileptr, "%d\n", skin->uorder);
  fprintf(fileptr, "%d\n", skin->uknot_type);
  fprintf(fileptr, "%d\n", skin->has_start_cap);
  fprintf(fileptr, "%d\n", skin->has_end_cap);
  fprintf(fileptr, "%d\n", skin->display_mode);
  fprintf(fileptr, "%g\n", skin->glu_sampling_tolerance);

 return AY_OK;
} /* ay_skin_writecb */


/* ay_skin_wribcb:
 *  RIB export callback function of skin object
 */
int
ay_skin_wribcb(char *file, ay_object *o)
{
 ay_skin_object *skin;
 ay_object *b;

  if(!o)
   return AY_ENULL;

  skin = (ay_skin_object*)o->refine;

  if(skin->npatch)
    ay_wrib_object(file, skin->npatch);

  if(skin->caps_and_bevels)
    {
      b = skin->caps_and_bevels;
      while(b)
	{
	  ay_wrib_object(file, b);
	  b = b->next;
	}
    }

 return AY_OK;
} /* ay_skin_wribcb */


/* ay_skin_bbccb:
 *  bounding box calculation callback function of skin object
 */
int
ay_skin_bbccb(ay_object *o, double *bbox, int *flags)
{
 ay_skin_object *skin = NULL;

  if(!o || !bbox)
    return AY_ENULL;

  skin = (ay_skin_object *)o->refine;

  if(skin->npatch)
    {
      ay_bbc_get(skin->npatch, bbox);
      *flags = 1;
    }
  else
    {
      /* invalid/nonexisting bbox */
      *flags = 2;
    }

 return AY_OK;
} /* ay_skin_bbccb */


/* ay_skin_notifycb:
 *  notification callback function of skin object
 */
int
ay_skin_notifycb(ay_object *o)
{
 int ay_status = AY_OK;
 ay_nurbcurve_object *curve = NULL;
 ay_skin_object *skin = NULL;
 ay_object *down = NULL, *c = NULL, *last = NULL, *all_curves = NULL;
 ay_object *newo = NULL, **nextcb;
 ay_object *bevel = NULL;
 int mode = 0, count = 0, i, a;
 int has_startb = AY_FALSE, has_endb = AY_FALSE;
 int startb_type, endb_type, startb_sense, endb_sense;
 double startb_radius, endb_radius, m[16] = {0}, tolerance;

  if(!o)
    return AY_ENULL;

  skin = (ay_skin_object *)(o->refine);

  mode = skin->display_mode;
  tolerance = skin->glu_sampling_tolerance;

  nextcb = &(skin->caps_and_bevels);

  /* remove old objects */
  if(skin->npatch)
    ay_object_delete(skin->npatch);
  skin->npatch = NULL;

  if(skin->caps_and_bevels)
    {
      ay_object_deletemulti(skin->caps_and_bevels);
      skin->caps_and_bevels = NULL;
    }

  /* get curves to skin */
  if(!o->down)
    return AY_OK;
  down = o->down;

  while(down->next)
    {
      c = NULL;

      if(down->type == AY_IDNCURVE)
	{
	  ay_object_copy(down, &c);
	}
      else
	{
	  ay_status = ay_provide_object(down, AY_IDNCURVE, &c);
	} /* if */

      if(c)
	{
	  /* link curve to list */
	  if(last)
	    last->next = c;
	  else
	    all_curves = c;

	  /*if(skin->use_multiple_provided_objects)*/
	  while(c->next)
	    {
	      count++;
	      c = c->next;
	    }

	  last = c;

	  count++;
	} /* if */

      down = down->next;
    } /* while */

  /* No curves to skin? */
  if(count <= 1)
    {
      goto cleanup;
    }

  /* skin */
  if(!(newo = calloc(1, sizeof(ay_object))))
    {
      ay_status = AY_EOMEM;
      goto cleanup;
    }

  ay_object_defaults(newo);
  newo->type = AY_IDNPATCH;

  /* get bevel parameters */
  ay_npt_getbeveltags(o, 0, &has_startb, &startb_type, &startb_radius,
		      &startb_sense);
  ay_npt_getbeveltags(o, 1, &has_endb, &endb_type, &endb_radius,
		      &endb_sense);

  /* create caps */
  if(!has_startb && skin->has_start_cap)
    {
      c = NULL;
      ay_status = ay_object_copy(all_curves, &c);
      ay_trafo_defaults(c);
      ay_status = ay_capt_createfromcurve(c, nextcb);
      if(ay_status)
	goto cleanup;
      ay_trafo_copy(all_curves, *nextcb);
      nextcb = &((*nextcb)->next);
    } /* if */

  if(has_startb)
    {
      c = NULL;
      ay_status = ay_object_copy(all_curves, &c);
      if(startb_sense)
	{
	  ay_nct_revert((ay_nurbcurve_object*)(c->refine));
	}

      bevel = NULL;
      if(!(bevel = calloc(1, sizeof(ay_object))))
	{
	  ay_status = AY_EOMEM;
	  goto cleanup;
	}

      ay_object_defaults(bevel);
      bevel->type = AY_IDNPATCH;
      bevel->parent = AY_TRUE;
      bevel->inherit_trafos = AY_FALSE;
      ay_nct_applytrafo(c);
      ay_status = ay_npt_bevel(startb_type, startb_radius, AY_TRUE, c,
			       (ay_nurbpatch_object**)&(bevel->refine));

      ay_object_delete(c);
      c = NULL;

      if(ay_status)
	goto cleanup;

      *nextcb = bevel;
      nextcb = &(bevel->next);

      /* create cap */
      if(skin->has_start_cap)
	{
	  if(!(c = calloc(1, sizeof(ay_object))))
	    {
	      ay_status = AY_EOMEM;
	      goto cleanup;
	    }

	  ay_object_defaults(c);
	  c->type = AY_IDNCURVE;

	  ay_status = ay_npt_extractnc(bevel, 3, 0.0, AY_FALSE, AY_FALSE,
				    (ay_nurbcurve_object**)&(c->refine));

	  if(ay_status)
	    goto cleanup;

	  ay_status = ay_capt_createfromcurve(c, nextcb);

	  if(ay_status)
	    goto cleanup;

	  nextcb = &((*nextcb)->next);
	} /* if */
    } /* if */

  if(!has_endb && skin->has_end_cap)
    {
      c = NULL;
      ay_status = ay_object_copy(last, &c);
      ay_trafo_defaults(c);
      ay_status = ay_capt_createfromcurve(c, nextcb);
      if(ay_status)
	goto cleanup;
      ay_trafo_copy(last, *nextcb);
      (*nextcb)->scalz *= -1.0;
      nextcb = &((*nextcb)->next);
    } /* if */

  if(has_endb)
    {
      c = NULL;
      ay_status = ay_object_copy(last, &c);
      if(!endb_sense)
	{
	  ay_nct_revert((ay_nurbcurve_object*)(c->refine));
	}

      bevel = NULL;
      if(!(bevel = calloc(1, sizeof(ay_object))))
	{
	  ay_status = AY_EOMEM;
	  goto cleanup;
	}

      ay_object_defaults(bevel);
      bevel->type = AY_IDNPATCH;
      bevel->parent = AY_TRUE;
      bevel->inherit_trafos = AY_FALSE;
      ay_nct_applytrafo(c);
      ay_status = ay_npt_bevel(endb_type, endb_radius*-1.0, AY_TRUE, c,
			       (ay_nurbpatch_object**)&(bevel->refine));

      ay_object_delete(c);
      c = NULL;

      if(ay_status)
	goto cleanup;

      *nextcb = bevel;
      nextcb = &(bevel->next);

      /* create cap */
      if(skin->has_end_cap)
	{
	  if(!(c = calloc(1, sizeof(ay_object))))
	    {
	      ay_status = AY_EOMEM;
	      goto cleanup;
	    }

	  ay_object_defaults(c);
	  c->type = AY_IDNCURVE;

	  ay_status = ay_npt_extractnc(bevel, 3, 0.0, AY_FALSE, AY_FALSE,
				    (ay_nurbcurve_object**)&(c->refine));

	  if(ay_status)
	    goto cleanup;

	  ay_status = ay_capt_createfromcurve(c, nextcb);

	  if(ay_status)
	    goto cleanup;

	  nextcb = &((*nextcb)->next);
	} /* if */
    } /* if */

  c = all_curves;
  while(c)
    {
      /* apply transformation attributes to control points */
      if((c->movx != 0.0) || (c->movy != 0.0) || (c->movz != 0.0) ||
	 (c->rotx != 0.0) || (c->roty != 0.0) || (c->rotz != 0.0) ||
	 (c->scalx != 1.0) || (c->scaly != 1.0) || (c->scalz != 1.0) ||
	 (c->quat[0] != 0.0) || (c->quat[1] != 0.0) ||
	 (c->quat[2] != 0.0) || (c->quat[3] != 1.0))
	{
	  ay_trafo_creatematrix(c, m);
	  curve = (ay_nurbcurve_object *)c->refine;
	  a = 0;
	  for(i = 0; i < curve->length; i++)
	    {
	      ay_trafo_apply4(&(curve->controlv[a]), m);
	      a += 4;
	    }
	} /* if */

      c = c->next;
    } /* while */


  ay_status = ay_npt_skinu(all_curves, skin->uorder, skin->uknot_type,
			   skin->interpolate,
			   (ay_nurbpatch_object **)(&(newo->refine)));

  if(ay_status)
    {
      goto cleanup;
    }

  /* copy sampling tolerance/mode over to new objects */
  skin->npatch = newo;

  ((ay_nurbpatch_object *)newo->refine)->glu_sampling_tolerance =
    tolerance;
  ((ay_nurbpatch_object *)newo->refine)->display_mode =
    mode;

  if(skin->caps_and_bevels)
    {
      bevel = skin->caps_and_bevels;
      while(bevel)
	{
	  ((ay_nurbpatch_object *)
	   (bevel->refine))->glu_sampling_tolerance = tolerance;
	  ((ay_nurbpatch_object *)
	   (bevel->refine))->display_mode = mode;
	  bevel = bevel->next;
	}
    }

cleanup:
  /* remove temporary curves */
  while(all_curves)
    {
      c = all_curves->next;
      ay_object_delete(all_curves);
      all_curves = c;
    }

 return ay_status;
} /* ay_skin_notifycb */


/* ay_skin_providecb:
 *  provide callback function of skin object
 */
int
ay_skin_providecb(ay_object *o, unsigned int type, ay_object **result)
{
 int ay_status = AY_OK;
 char fname[] = "skin_providecb";
 ay_skin_object *s = NULL;
 ay_object *new = NULL, **t = NULL, *p = NULL;

  if(!o)
    return AY_ENULL;

  if(!result)
    {
      if(type == AY_IDNPATCH)
	return AY_OK;
      else
	return AY_ERROR;
    }

  s = (ay_skin_object *) o->refine;

  if(type == AY_IDNPATCH)
    {
      t = &(new);

      /* copy skin */
      ay_status = ay_object_copy(s->npatch, t);
      if(ay_status)
	{
	  ay_error(ay_status, fname, NULL);
	  return AY_ERROR;
	}
      ay_trafo_copy(o, *t);
      (*t)->hide_children = AY_TRUE;
      (*t)->parent = AY_TRUE;
      ay_object_crtendlevel(&(*t)->down);

      t = &((*t)->next);

      /* copy caps and bevels */
      p = s->caps_and_bevels;
      while(p)
	{
	  ay_status = ay_object_copy(p, t);
	  if(ay_status)
	    {
	      ay_error(ay_status, fname, NULL);
	      return AY_ERROR;
	    }
	  t = &((*t)->next);
	  p = p->next;
	} /* while */

      /* copy eventually present TP tags */
      ay_npt_copytptag(o, new);

      *result = new;
    } /* if */

 return ay_status;
} /* ay_skin_providecb */


/* ay_skin_convertcb:
 *  convert callback function of skin object
 */
int
ay_skin_convertcb(ay_object *o, int in_place)
{
 int ay_status = AY_OK;
 ay_skin_object *s = NULL;
 ay_object *new = NULL, **next = NULL;
 ay_object *b;

  if(!o)
    return AY_ENULL;

  /* first, create new objects */

  s = (ay_skin_object *) o->refine;

  if(s->caps_and_bevels)
    {
      if(!(new = calloc(1, sizeof(ay_object))))
	{ return AY_EOMEM; }

      ay_object_defaults(new);
      new->type = AY_IDLEVEL;
      new->parent = AY_TRUE;
      new->inherit_trafos = AY_TRUE;
      ay_trafo_copy(o, new);

      if(!(new->refine = calloc(1, sizeof(ay_level_object))))
	{ free(new); return AY_EOMEM; }

      ((ay_level_object *)(new->refine))->type = AY_LTLEVEL;

      next = &(new->down);

      if(s->npatch)
	{
	  ay_status = ay_object_copy(s->npatch, next);
	  if(*next)
	    {
	      (*next)->hide_children = AY_TRUE;
	      (*next)->parent = AY_TRUE;
	      ay_object_crtendlevel(&(*next)->down);
	      next = &((*next)->next);
	    }
	}

      if(s->caps_and_bevels)
	{
	  b = s->caps_and_bevels;
	  while(b)
	    {
	      ay_status = ay_object_copy(b, next);
	      if(*next)
		{
		  next = &((*next)->next);
		}
	      b = b->next;
	    } /* while */
	} /* if */

      /* copy eventually present TP tags */
      ay_npt_copytptag(o, new->down);

      ay_object_crtendlevel(next);
    }
  else
    {
       if(s->npatch)
	{
	  ay_status = ay_object_copy(s->npatch, &new);
	  ay_trafo_copy(o, new);
	  new->hide_children = AY_TRUE;
	  new->parent = AY_TRUE;
	  ay_object_crtendlevel(&(new->down));

	  /* copy eventually present TP tags */
	  ay_npt_copytptag(o, new);
	}
    } /* if */

  /* second, link new objects, or replace old objects with them */

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
} /* ay_skin_convertcb */


/* ay_skin_init:
 *  initialize the skin object module
 */
int
ay_skin_init(Tcl_Interp *interp)
{
 int ay_status = AY_OK;

  ay_status = ay_otype_registercore(ay_skin_name,
				    ay_skin_createcb,
				    ay_skin_deletecb,
				    ay_skin_copycb,
				    ay_skin_drawcb,
				    NULL, /* no handles */
				    ay_skin_shadecb,
				    ay_skin_setpropcb,
				    ay_skin_getpropcb,
				    ay_skin_getpntcb,
				    ay_skin_readcb,
				    ay_skin_writecb,
				    ay_skin_wribcb,
				    ay_skin_bbccb,
				    AY_IDSKIN);


  ay_status = ay_notify_register(ay_skin_notifycb, AY_IDSKIN);

  ay_status = ay_convert_register(ay_skin_convertcb, AY_IDSKIN);

  ay_status = ay_provide_register(ay_skin_providecb, AY_IDSKIN);

 return ay_status;
} /* ay_skin_init */

