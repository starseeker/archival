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

/* trim.c - trim object */

static char *ay_trim_name = "Trim";

/* functions: */

/* ay_trim_createcb:
 *  create callback function of trim object
 */
int
ay_trim_createcb(int argc, char *argv[], ay_object *o)
{
 char fname[] = "crttrim";
 ay_trim_object *new = NULL;

  if(!o)
    return AY_ENULL;

  if(!(new = calloc(1, sizeof(ay_trim_object))))
    {
      ay_error(AY_EOMEM, fname, NULL);
      return AY_ERROR;
    }

  o->parent = AY_TRUE;
  o->hide_children = AY_TRUE;

  o->refine = new;

 return AY_OK;
} /* ay_trim_createcb */


/* ay_trim_deletecb:
 *  delete callback function of trim object
 */
int
ay_trim_deletecb(void *c)
{
 ay_trim_object *trim = NULL;

  if(!c)
    return AY_ENULL;

  trim = (ay_trim_object *)(c);

  if(trim->npatch)
    (void)ay_object_deletemulti(trim->npatch);

  free(trim);

 return AY_OK;
} /* ay_trim_deletecb */


/* ay_trim_copycb:
 *  copy callback function of trim object
 */
int
ay_trim_copycb(void *src, void **dst)
{
 ay_trim_object *trim = NULL;

  if(!src || !dst)
    return AY_ENULL;

  if(!(trim = malloc(sizeof(ay_trim_object))))
    return AY_EOMEM;

  memcpy(trim, src, sizeof(ay_trim_object));

  trim->npatch = NULL;

  *dst = (void *)trim;

 return AY_OK;
} /* ay_trim_copycb */


/* ay_trim_drawcb:
 *  draw (display in an Ayam view window) callback function of trim object
 */
int
ay_trim_drawcb(struct Togl *togl, ay_object *o)
{
 ay_trim_object *trim;
 ay_object *p;

  if(!o)
    return AY_ENULL;

  trim = (ay_trim_object *)(o->refine);

  p = trim->npatch;
  while(p)
    {
      ay_draw_object(togl, p, AY_TRUE);

      p = p->next;
    } /* while */

 return AY_OK;
} /* ay_trim_drawcb */


/* ay_trim_shadecb:
 *  shade (display in an Ayam view window) callback function of trim object
 */
int
ay_trim_shadecb(struct Togl *togl, ay_object *o)
{
 ay_trim_object *trim;
 ay_object *p;

  if(!o)
    return AY_ENULL;

  trim = (ay_trim_object *)(o->refine);

  p = trim->npatch;
  while(p)
    {
      ay_shade_object(togl, p, AY_FALSE);

      p = p->next;
    } /* while */

 return AY_OK;
} /* ay_trim_shadecb */


/* ay_trim_drawhcb:
 *  draw handles (in an Ayam view window) callback function of trim object
 */
int
ay_trim_drawhcb(struct Togl *togl, ay_object *o)
{

 return AY_OK;
} /* ay_trim_drawhcb */


/* ay_trim_getpntcb:
 *  get point (editing and selection) callback function of trim object
 */
int
ay_trim_getpntcb(int mode, ay_object *o, double *p, ay_pointedit *pe)
{

 return AY_OK;
} /* ay_trim_getpntcb */


/* ay_trim_setpropcb:
 *  set property (from Tcl to C context) callback function of trim object
 */
int
ay_trim_setpropcb(Tcl_Interp *interp, int argc, char *argv[], ay_object *o)
{
 /*int ay_status = AY_OK;*/
 char *n1 = "TrimAttrData";
 /* char fname[] = "trim_setpropcb";*/
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 ay_trim_object *trim = NULL;

  if(!o)
    return AY_ENULL;

  trim = (ay_trim_object *)o->refine;

  toa = Tcl_NewStringObj(n1,-1);
  ton = Tcl_NewStringObj(n1,-1);

  Tcl_SetStringObj(ton,"PatchNum",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp, to, &(trim->patchnum));

  Tcl_IncrRefCount(toa);Tcl_DecrRefCount(toa);
  Tcl_IncrRefCount(ton);Tcl_DecrRefCount(ton);

  ay_notify_object(o);

  o->modified = AY_TRUE;

  ay_notify_parent();

 return AY_OK;
} /* ay_trim_setpropcb */


/* ay_trim_getpropcb:
 *  get property (from C to Tcl context) callback function of trim object
 */
int
ay_trim_getpropcb(Tcl_Interp *interp, int argc, char *argv[], ay_object *o)
{
 char *n1="TrimAttrData";
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 ay_trim_object *trim = NULL;

  if(!o)
    return AY_ENULL;

  trim = (ay_trim_object *)(o->refine);

  toa = Tcl_NewStringObj(n1,-1);

  ton = Tcl_NewStringObj(n1,-1);

  Tcl_SetStringObj(ton,"PatchNum",-1);
  to = Tcl_NewIntObj(trim->patchnum);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG |
		 TCL_GLOBAL_ONLY);

  ay_prop_getnpinfo(interp, n1, trim->npatch);

  Tcl_IncrRefCount(toa);Tcl_DecrRefCount(toa);
  Tcl_IncrRefCount(ton);Tcl_DecrRefCount(ton);

 return AY_OK;
} /* ay_trim_getpropcb */


/* ay_trim_readcb:
 *  read (from scene file) callback function of trim object
 */
int
ay_trim_readcb(FILE *fileptr, ay_object *o)
{
 ay_trim_object *trim = NULL;

 if(!o)
   return AY_ENULL;

  if(!(trim = calloc(1, sizeof(ay_trim_object))))
    { return AY_EOMEM; }

  fscanf(fileptr, "%d\n", &trim->patchnum);

  o->refine = trim;

 return AY_OK;
} /* ay_trim_readcb */


/* ay_trim_writecb:
 *  write (to scene file) callback function of trim object
 */
int
ay_trim_writecb(FILE *fileptr, ay_object *o)
{
 ay_trim_object *trim = NULL;

  if(!o)
    return AY_ENULL;

  trim = (ay_trim_object *)(o->refine);

  fprintf(fileptr, "%d\n", trim->patchnum);

 return AY_OK;
} /* ay_trim_writecb */


/* ay_trim_wribcb:
 *  RIB export callback function of trim object
 */
int
ay_trim_wribcb(char *file, ay_object *o)
{
 ay_trim_object *trim;
 ay_object *p;

  if(!o)
   return AY_ENULL;

  trim = (ay_trim_object*)o->refine;

  p = trim->npatch;
  while(trim->npatch)
    {
      ay_wrib_object(file, trim->npatch);
      p = p->next;
    }

 return AY_OK;
} /* ay_trim_wribcb */


/* ay_trim_bbccb:
 *  bounding box calculation callback function of trim object
 */
int
ay_trim_bbccb(ay_object *o, double *bbox, int *flags)
{
 ay_trim_object *trim = NULL;

  if(!o || !bbox || !flags)
    return AY_ENULL;

  trim = (ay_trim_object *)o->refine;

  if(trim->npatch)
    {
      ay_bbc_get(trim->npatch, bbox);
      *flags = 1;
    }
  else
    {
      /* invalid/nonexisting bbox */
      *flags = 2;
    }

 return AY_OK;
} /* ay_trim_bbccb */


/* ay_trim_notifycb:
 *  notification callback function of trim object
 */
int
ay_trim_notifycb(ay_object *o)
{
 int ay_status = AY_OK;
 ay_trim_object *trim = NULL;
 ay_object *down = NULL, *npatch = NULL, *ncurve = NULL;
 ay_object **next = NULL;
 int i = 0;

  if(!o)
    return AY_ENULL;

  trim = (ay_trim_object *)(o->refine);

  /* remove old objects */
  if(trim->npatch)
    {
      ay_status = ay_object_deletemulti(trim->npatch);
    }
  trim->npatch = NULL;

  down = o->down;
  if(!down || !down->next)
    {
      return AY_OK;
    }

  if(down->type == AY_IDNPATCH)
    ay_status = ay_object_copy(down, &npatch);
  else
    ay_status = ay_provide_object(down, AY_IDNPATCH, &npatch);

  if(npatch)
    {
      trim->npatch = npatch;

      while(npatch && (i < trim->patchnum))
	{
	  i++;
	  npatch = npatch->next;
	}

      if(npatch)
	{
	  down = down->next;

	  /* append new trim curves to patch objects old ones */
	  next = &(npatch->down);

	  while(*next && (*next)->next)
	    {
	      next = &((*next)->next);
	    }

	  while(down->next)
	    {
	      ncurve = NULL;
	      ay_status = ay_object_copy(down, &ncurve);
	      if(ay_status || !ncurve)
		{
		  return AY_ERROR;
		}
	      else
		{
		  *next = ncurve;
		  next = &(ncurve->next);
		}
	      down = down->next;
	    } /* while */

	  *next = ay_endlevel;

	  ay_notify_object(npatch);
	} /* if */
    } /* if */

 return ay_status;
} /* ay_trim_notifycb */


/* ay_trim_providecb:
 *  provide callback function of trim object
 */
int
ay_trim_providecb(ay_object *o, unsigned int type, ay_object **result)
{
 ay_trim_object *t = NULL;

  if(!o)
    return AY_ENULL;

  t = (ay_trim_object *) o->refine;

 return ay_provide_nptoolobj(o, type, t->npatch, NULL, result);
} /* ay_trim_providecb */


/* ay_trim_convertcb:
 *  convert callback function of trim object
 */
int
ay_trim_convertcb(ay_object *o, int in_place)
{
 ay_trim_object *t = NULL;

  if(!o)
    return AY_ENULL;

  t = (ay_trim_object *) o->refine;

 return ay_convert_nptoolobj(o, t->npatch, NULL, in_place);
} /* ay_trim_convertcb */


/* ay_trim_init:
 *  initialize the trim object module
 */
int
ay_trim_init(Tcl_Interp *interp)
{
 int ay_status = AY_OK;

  ay_status = ay_otype_registercore(ay_trim_name,
				    ay_trim_createcb,
				    ay_trim_deletecb,
				    ay_trim_copycb,
				    ay_trim_drawcb,
				    NULL, /* no handles */
				    ay_trim_shadecb,
				    ay_trim_setpropcb,
				    ay_trim_getpropcb,
				    ay_trim_getpntcb,
				    ay_trim_readcb,
				    ay_trim_writecb,
				    ay_trim_wribcb,
				    ay_trim_bbccb,
				    AY_IDTRIM);


  ay_status = ay_notify_register(ay_trim_notifycb, AY_IDTRIM);

  ay_status = ay_convert_register(ay_trim_convertcb, AY_IDTRIM);

  ay_status = ay_provide_register(ay_trim_providecb, AY_IDTRIM);

 return ay_status;
} /* ay_trim_init */

