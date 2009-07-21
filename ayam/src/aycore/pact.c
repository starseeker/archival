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

/* pact.c - single point related interactive actions */

/* global variables for this module: */
static ay_object *ay_pact_pedclearobject = NULL;
static ay_pointedit ay_pact_pe = {0};


static int *ay_pact_numcpo;
static int *ay_pact_homcpo;
static ay_object *ay_point_edit_object;
static ay_object **ay_pe_objects;
static int ay_pe_objectslen;


/* prototypes of functions local to this module: */
int ay_pact_insertnc(ay_nurbcurve_object *curve,
		     double objX, double objY, double objZ);

int ay_pact_insertic(ay_icurve_object *curve,
		     double objX, double objY, double objZ);


int ay_pact_insertac(ay_acurve_object *curve,
		     double objX, double objY, double objZ);

int ay_pact_deletenc(ay_nurbcurve_object *curve,
		     double objX, double objY, double objZ);

int ay_pact_deleteic(ay_icurve_object *icurve,
		     double objX, double objY, double objZ);

int ay_pact_deleteac(ay_acurve_object *acurve,
		     double objX, double objY, double objZ);

int ay_pact_flashpoint(int ignore_old);

/* functions: */

/* ay_pact_clearpointedit:
 *   clear a ay_pointedit structure gracefully
 */
int
ay_pact_clearpointedit(ay_pointedit *pe)
{
  if(!pe)
    return AY_ENULL;

  if(pe->coords)
    free(pe->coords);
  pe->coords = NULL;

  if(pe->indizes)
    free(pe->indizes);
  pe->indizes = NULL;

  pe->num = 0;
  pe->homogenous = AY_FALSE;

 return AY_OK;
} /* ay_pact_clearpointedit */


/* ay_pact_getpoint:
 *   calls object type specific getpoint
 *   functions to let the object decide
 *   which point should be edited in single
 *   point editing mode or for which point
 *   the weight should be changed
*/
int
ay_pact_getpoint(int mode, ay_object *o, double *obj, ay_pointedit *pe)
{
 int ay_status = AY_OK;
 void **arr = NULL;
 ay_getpntcb *cb = NULL;

  if(!o)
    return AY_ENULL;

  arr = ay_getpntcbt.arr;
  cb = (ay_getpntcb *)(arr[o->type]);
  if(cb)
    ay_status = cb(mode, o, obj, pe);

 return ay_status;
} /* ay_pact_getpoint */


/* ay_pact_seltcb:
 *  select (tag) single points of an object
 */
int
ay_pact_seltcb(struct Togl *togl, int argc, char *argv[])
{
 int ay_status = AY_OK;
 char fname[] = "selpac";
 Tcl_Interp *interp = Togl_Interp(togl);
 /*  ay_view_object *view = Togl_GetClientData(togl);*/
 double height = Togl_Height(togl);
 int i, have_it = AY_FALSE, multiple = AY_FALSE;
 double winX = 0.0, winY = 0.0, winX2 = 0.0, winY2 = 0.0, dtemp = 0.0;
 double obj[24] = {0}, pl[16] = {0};
 /*  double pickepsilon = ay_prefs.pick_epsilon;*/
 ay_point *newp = NULL, *point = NULL, *last = NULL;
 ay_pointedit pe;
 ay_list_object *sel = ay_selection;
 ay_object *o = NULL;
 GLfloat pixel[3] = {0.0f,0.0f,0.0f};

  if(!ay_selection)
    {
      ay_error(AY_ENOSEL, fname, NULL);
      return TCL_OK;
    }

  Tcl_GetDouble(interp, argv[2], &winX);
  Tcl_GetDouble(interp, argv[3], &winY);

  if(argc > 4)
    {
      multiple = AY_TRUE;
      Tcl_GetDouble(interp, argv[4], &winX2);
      Tcl_GetDouble(interp, argv[5], &winY2);
    }
  else
    {
      winX2 = winX;
      winY2 = winY;
    }

  if(winX2 < winX)
    {
      dtemp = winX2;
      winX2 = winX;
      winX = dtemp;
    }

  if(winY2 < winY)
    {
      dtemp = winY2;
      winY2 = winY;
      winY = dtemp;
    }

  while(sel)
    {
      o = sel->object;

      /* sanity check */
      if(!o)
	return TCL_OK;

      if(!multiple)
	{
	  glReadPixels((GLint)(winX),(GLint)(height-winY), 1, 1,
		       GL_RGB, GL_FLOAT, &pixel);
	  ay_status = ay_viewt_wintoobj(togl, o, winX, winY,
					&(obj[0]), &(obj[1]), &(obj[2]));

	  ay_status = ay_pact_getpoint(1, o, obj, &pe);
	}
      else
	{
	  ay_status = ay_viewt_winrecttoobj(togl, o, winX, winY, winX2, winY2,
					    obj);

	  /* create plane equation coefficients */
	  ay_trafo_pointstoplane(obj[0], obj[1], obj[2],
				 obj[3], obj[4], obj[5],
				 obj[12], obj[13], obj[14],
				 &(pl[0]), &(pl[1]), &(pl[2]), &(pl[3]));

	  ay_trafo_pointstoplane(obj[3], obj[4], obj[5],
				 obj[9], obj[10], obj[11],
				 obj[15], obj[16], obj[17],
				 &(pl[4]), &(pl[5]), &(pl[6]), &(pl[7]));

	  ay_trafo_pointstoplane(obj[6], obj[7], obj[8],
				 obj[18], obj[19], obj[20],
				 obj[9], obj[10], obj[11],
				 &(pl[8]), &(pl[9]), &(pl[10]), &(pl[11]));

	  ay_trafo_pointstoplane(obj[0], obj[1], obj[2],
				 obj[12], obj[13], obj[14],
				 obj[6], obj[7], obj[8],
				 &(pl[12]), &(pl[13]), &(pl[14]), &(pl[15]));

	  ay_status = ay_pact_getpoint(2, o, pl, &pe);

	} /* if */

      if(pe.coords)
	{
	  have_it = AY_FALSE;
	  for(i = 0; i < pe.num; i++)
	    {
	      /* do we have that point selected already? */
	      point = o->selp;
	      last = NULL;
	      have_it = AY_FALSE;
	      while(point)
		{
		  if(point->point == pe.coords[i])
		    {
		      /* we have that point already, so we delete
			 it from the selection if we are not in
			 multiple selection mode */
		      if(!multiple)
			{
			  if(last)
			    last->next = point->next;
			  else
			    o->selp = point->next;

			  free(point);
			} /* if */
		      have_it = AY_TRUE;
		      point = NULL; /* break loop */
		    } /* if */

		  last = point;
		  if(point)
		    point = point->next;
		} /* while */

	      if(!have_it)
		{
		  /* create new point object */
		  newp = NULL;
		  if(!(newp = calloc(1, sizeof(ay_point))))
		    {
		      ay_error(AY_EOMEM, fname, NULL);
		      return TCL_OK;
		    }

		  newp->next = o->selp;
		  o->selp = newp;
		  newp->point = pe.coords[i];

		  if(pe.indizes)
		    {
		      newp->index = pe.indizes[i];
		    }

		  newp->homogenous = pe.homogenous;
		} /* if */
	    } /* for */
	} /* if */

      ay_pact_clearpointedit(&pe);

      sel = sel->next;
    } /* while */

 return TCL_OK;
} /* ay_pact_seltcb */


/* ay_pact_deseltcb
 *  deselect all currently selected (tagged) points of an object
 */
int
ay_pact_deseltcb(struct Togl *togl, int argc, char *argv[])
{
 ay_list_object *sel = ay_selection;

  while(sel)
    {
      if(!sel->object)
	return TCL_OK;

      ay_selp_clear(sel->object);

      sel = sel->next;
    } /* while */

 return TCL_OK;
} /* ay_pact_deseltcb */


/* ay_pact_flashpoint:
 *  flash single points if the mouse pointer hovers over them
 *  by drawing with XOR directly into the front buffer
 *  Note: This function needs atleast OpenGL V1.1 to work.
 */
int
ay_pact_flashpoint(int ignore_old)
{
 int old_is_new = AY_FALSE, penumber = 0;
 static int have_old_flashed_point = AY_FALSE;
 static double old_pnt[3] = {0};
 ay_object *o = ay_point_edit_object;
 double m[16];

  if(!o)
    return AY_OK;

#ifdef GL_VERSION_1_1
  penumber = ay_pact_pe.num;

  if(have_old_flashed_point && ay_pact_pe.coords)
    {
      if((ay_pact_pe.coords[penumber-1][0] == old_pnt[0]) &&
	 (ay_pact_pe.coords[penumber-1][1] == old_pnt[1]) &&
	 (ay_pact_pe.coords[penumber-1][2] == old_pnt[2]))
	{
	  old_is_new = AY_TRUE;
	}
    }
  if(!old_is_new || ignore_old)
    {
      glDrawBuffer(GL_FRONT);
      glEnable(GL_COLOR_LOGIC_OP);
      glLogicOp(GL_XOR);
      glColor3f((GLfloat)ay_prefs.sxr, (GLfloat)ay_prefs.sxg,
		(GLfloat)ay_prefs.sxb);
      glDisable(GL_DEPTH_TEST);
      glMatrixMode(GL_MODELVIEW);
      glPushMatrix();
       glLoadIdentity();
       ay_trafo_getall(ay_currentlevel->next);
       glTranslated(o->movx, o->movy, o->movz);
       ay_quat_torotmatrix(o->quat, m);
       glMultMatrixd((GLdouble*)m);
       glScaled (o->scalx, o->scaly, o->scalz);
       glBegin(GL_POINTS);
       /* clear old point? */
       if(have_old_flashed_point && !ignore_old)
	 {
	   glVertex3d(old_pnt[0], old_pnt[1], old_pnt[2]);
	   have_old_flashed_point = AY_FALSE;
	 }
       /*
	 glEnd();
	 glFlush();
	 glBegin(GL_POINTS);
       */
       /* draw new point? */
       if(ay_pact_pe.coords)
	 {
	   glVertex3d(ay_pact_pe.coords[penumber-1][0],
		      ay_pact_pe.coords[penumber-1][1],
		      ay_pact_pe.coords[penumber-1][2]);

	   old_pnt[0] = ay_pact_pe.coords[penumber-1][0];
	   old_pnt[1] = ay_pact_pe.coords[penumber-1][1];
	   old_pnt[2] = ay_pact_pe.coords[penumber-1][2];
	   have_old_flashed_point = AY_TRUE;
	 }
       else
	 {
	   have_old_flashed_point = AY_FALSE;
	 }
       glEnd();
      glPopMatrix();
      glEnable(GL_DEPTH_TEST);
      glDisable(GL_COLOR_LOGIC_OP);
      glFlush();
      glDrawBuffer(GL_BACK);
    } /* if */
#endif

 return AY_OK;
} /* ay_pact_flashpoint */


/* ay_pact_startpetcb:
 *  prepares everything for the single point editing modes
 */
int
ay_pact_startpetcb(struct Togl *togl, int argc, char *argv[])
{
 int ay_status = AY_OK;
 char fname[] = "pointEdit";
 Tcl_Interp *interp = Togl_Interp(togl);
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);
 double winX = 0.0, winY = 0.0;
 /*  double pickepsilon = ay_prefs.pick_epsilon;*/
 double obj[3] = {0};
 ay_list_object *sel = ay_selection;
 int penumber = 0, *tmpi;
 double **pecoords = NULL, **tmp = NULL, oldpickepsilon, mins;
 ay_object **tmpo = NULL;
 static ay_list_object *lastlevel = NULL;
 static double lscal = 0.0;
 GLdouble m[16];

  if(ay_pact_numcpo)
    free(ay_pact_numcpo);
  ay_pact_numcpo = NULL;

  if(ay_pact_homcpo)
    free(ay_pact_homcpo);
  ay_pact_homcpo = NULL;

  if(ay_pe_objects)
    free(ay_pe_objects);
  ay_pe_objects = NULL;

  ay_pe_objectslen = 0;

  ay_pact_clearpointedit(&ay_pact_pe);

  Tcl_GetDouble(interp, argv[2], &winX);
  Tcl_GetDouble(interp, argv[3], &winY);

  if(lastlevel != ay_currentlevel)
    {

      glMatrixMode(GL_MODELVIEW);
      glPushMatrix();

       ay_trafo_getalls(ay_currentlevel->next);
       glGetDoublev(GL_MODELVIEW_MATRIX, m);
       lscal = fabs(m[0]);
       if(fabs(m[5]) < lscal)
	 lscal = fabs(m[5]);
       if(fabs(m[10]) < lscal)
	 lscal = fabs(m[10]);
      glPopMatrix();

      lastlevel = ay_currentlevel;
    } /* if */

  oldpickepsilon = ay_prefs.pick_epsilon;

  while(sel)
    {
      if(!sel->object)
	return TCL_OK;

      mins = fabs(sel->object->scalx);

      if(fabs(sel->object->scaly) < mins)
	mins = sel->object->scaly;

      if(fabs(sel->object->scalz) < mins)
	mins = sel->object->scalz;

      ay_prefs.pick_epsilon = oldpickepsilon / lscal *
	(view->conv_x/0.006) / mins;

      /*printf("using pickepsilon %g\n", ay_prefs.pick_epsilon);*/

      ay_status = ay_viewt_wintoobj(togl, sel->object, winX, winY,
				    &(obj[0]), &(obj[1]), &(obj[2]));

      ay_status = ay_pact_getpoint(1, sel->object, obj, &ay_pact_pe);

      if(ay_pact_pe.coords)
	{
	  if(!(tmp = realloc(pecoords,
			     (ay_pact_pe.num + penumber)*sizeof(double*))))
	    {
	      ay_error(AY_EOMEM, fname, NULL);
	      free(pecoords);
	      return TCL_OK;
	    }
	  else
	    {
	      pecoords = tmp;
	      memcpy(&(pecoords[penumber]), ay_pact_pe.coords,
		     ay_pact_pe.num*sizeof(double*));
	      penumber += ay_pact_pe.num;
	    }

	  ay_point_edit_object = sel->object;

	  /* remember number of picked points of current object */
	  if(!(tmpi = realloc(ay_pact_numcpo, (ay_pe_objectslen+1)*
			      sizeof(int))))
	    {
	      ay_error(AY_EOMEM, fname, NULL);
	      return TCL_OK;
	    }
	  else
	    {
	      ay_pact_numcpo = tmpi;
	      ay_pact_numcpo[ay_pe_objectslen] = ay_pact_pe.num;
	    }

	  /* remember homogenous state of current object */
	  if(!(tmpi = realloc(ay_pact_homcpo, (ay_pe_objectslen+1)*
			      sizeof(int))))
	    {
	      ay_error(AY_EOMEM, fname, NULL);
	      return TCL_OK;
	    }
	  else
	    {
	      ay_pact_homcpo = tmpi;
	      ay_pact_homcpo[ay_pe_objectslen] = ay_pact_pe.homogenous;
	    }

	  /* remember pointer to current object */
	  if(!(tmpo = realloc(ay_pe_objects, (ay_pe_objectslen+1)*
			      sizeof(ay_object*))))
	    {
	      ay_error(AY_EOMEM, fname, NULL);
	      return TCL_OK;
	    }
	  else
	    {
	      ay_pe_objects = tmpo;
	      ay_pe_objects[ay_pe_objectslen] = sel->object;
	    }

	  ay_pe_objectslen++;

	} /* if */

      ay_pact_clearpointedit(&ay_pact_pe);

      sel = sel->next;
    } /* while */

  ay_prefs.pick_epsilon = oldpickepsilon;

  ay_pact_pe.num = penumber;

  if(ay_pact_pe.coords)
    free(ay_pact_pe.coords);

  ay_pact_pe.coords = pecoords;

  if(ay_selection &&(argc > 4))
    {
      if(argc > 5)
	ay_status = ay_pact_flashpoint(AY_TRUE);
      else
	ay_status = ay_pact_flashpoint(AY_FALSE);
    } /* if */

 return TCL_OK;
} /* ay_pact_startpetcb */


/* ay_pact_pedclear:
 *  clear the cache of pointers to selected points
 *  of the single point direct edit callback
 */
void
ay_pact_pedclear(ay_object *o)
{
 int argc = 3;
 char *argv[3], a2[] = "-clear";

  if(!o)
    return;

  ay_pact_pedclearobject = o;
  argv[2] = a2;
  ay_pact_pedtcb(NULL, argc, argv);

 return;
} /* ay_pact_pedclear */


/* ay_pact_pedtcb:
 *  single point direct edit callback
 *
 */
int
ay_pact_pedtcb(struct Togl *togl, int argc, char *argv[])
{
 int ay_status = AY_OK;
 Tcl_Interp *interp = NULL;
 ay_view_object *view = NULL;
 double winX = 0.0, winY = 0.0;
 double obj[3] = {0};
 char *n1 = "editPointDarray", fname[] = "editPointDirect";
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 int i, changed = AY_FALSE, local = 0/*, need_parentnotify = AY_TRUE*/;
 double *coords, wcoords[4];
 ay_list_object *sel = NULL;
 ay_object *o = NULL;
 static double **pe_coords = NULL;
 static int pe_coordslen = 0, pe_coordshom = AY_FALSE;
 static ay_object *pe_object = NULL;
 ay_pointedit pe = {0};
 ay_nurbcurve_object *nc = NULL;
 ay_nurbpatch_object *np = NULL;


  if(argc < 1)
    {
      return TCL_OK;
    }

  if(!strcmp(argv[2], "-clear"))
    {
      /* clear cached pointers to points */
      if(pe_object == ay_pact_pedclearobject)
	{
	  if(pe_coords)
	    free(pe_coords);
	  pe_coords = NULL;

	  pe_coordslen = 0;

	  pe_object = NULL;
	} /* if */
      return TCL_OK;
    } /* if */

  interp = Togl_Interp(togl);
  view = (ay_view_object *)Togl_GetClientData(togl);

  if(!strcmp(argv[2], "-start"))
    {
      sel = ay_selection;
      if(!sel)
	{
	  ay_error(AY_ENOSEL, fname, NULL);
	  return TCL_OK;
	}

      o = sel->object;

      if(!o)
	return TCL_OK;

      if(sel->next)
	{
	  ay_error(AY_EWARN, fname,
		   "Will only operate on the first selected object!");
	}

      Tcl_GetDouble(interp, argv[3], &winX);
      Tcl_GetDouble(interp, argv[4], &winY);

      ay_status = ay_viewt_wintoobj(togl, o, winX, winY,
				    &(obj[0]), &(obj[1]), &(obj[2]));

      ay_status = ay_pact_getpoint(1, o, obj, &pe);

      ay_point_edit_object = o;

      if(pe.coords)
	{
	  /* first, save the pointers to the picked point(s)*/
	  if(!(pe_coords = calloc(pe.num, sizeof(double*))))
	    {
	      ay_error(AY_EOMEM, fname, NULL);
	      return TCL_OK;
	    }

	  memcpy(pe_coords, pe.coords, pe.num * sizeof(double*));
	  pe_coordslen = pe.num;
	  pe_coordshom = pe.homogenous;
	  pe_object = o;

	  /* now, transport the coordinate values of the picked point(s)
	     to the Tcl context for display and editing in the direct
	     point edit dialog */
	  toa = Tcl_NewStringObj(n1, -1);
	  ton = Tcl_NewStringObj(n1, -1);

	  coords = pe.coords[0];

	  Tcl_SetStringObj(ton,"lx",-1);
	  to = Tcl_NewDoubleObj(coords[0]);
	  Tcl_ObjSetVar2(interp, toa, ton, to,
			 TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

	  Tcl_SetStringObj(ton,"ly",-1);
	  to = Tcl_NewDoubleObj(coords[1]);
	  Tcl_ObjSetVar2(interp, toa, ton, to,
			 TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

	  Tcl_SetStringObj(ton,"lz",-1);
	  to = Tcl_NewDoubleObj(coords[2]);
	  Tcl_ObjSetVar2(interp, toa, ton, to,
			 TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

	  if(pe.homogenous)
	    {
	      Tcl_SetStringObj(ton,"lw",-1);
	      to = Tcl_NewDoubleObj(coords[3]);
	      Tcl_ObjSetVar2(interp, toa, ton, to,
			     TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
	    } /* if */


	  if(pe.homogenous)
	    {
	      memcpy(wcoords, coords, 4*sizeof(double));
	    }
	  else
	    {
	      memcpy(wcoords, coords, 3*sizeof(double));
	      wcoords[3] = 1.0;
	    }

	  ay_trafo_applyall(ay_currentlevel->next, o, wcoords);

	  Tcl_SetStringObj(ton,"wx",-1);
	  to = Tcl_NewDoubleObj(wcoords[0]);
	  Tcl_ObjSetVar2(interp, toa, ton, to,
			 TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

	  Tcl_SetStringObj(ton,"wy",-1);
	  to = Tcl_NewDoubleObj(wcoords[1]);
	  Tcl_ObjSetVar2(interp, toa, ton, to,
			 TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

	  Tcl_SetStringObj(ton,"wz",-1);
	  to = Tcl_NewDoubleObj(wcoords[2]);
	  Tcl_ObjSetVar2(interp, toa, ton, to,
			 TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

	  if(pe.homogenous)
	    {
	      Tcl_SetStringObj(ton,"ww",-1);
	      to = Tcl_NewDoubleObj(wcoords[3]);
	      Tcl_ObjSetVar2(interp, toa, ton, to,
			     TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
	    } /* if */

	  Tcl_SetStringObj(ton,"valid",-1);
	  to = Tcl_NewIntObj(1);
	  Tcl_ObjSetVar2(interp, toa, ton, to,
			 TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
	  Tcl_IncrRefCount(toa); Tcl_DecrRefCount(toa);
	  Tcl_IncrRefCount(ton); Tcl_DecrRefCount(ton);
	} /* if */

      ay_pact_clearpointedit(&pe);

      return TCL_OK;
    } /* if */

  if(!strcmp(argv[2], "-apply"))
    {
      toa = Tcl_NewStringObj(n1, -1);
      ton = Tcl_NewStringObj(n1, -1);
      Tcl_SetStringObj(ton,"changed",-1);
      to = Tcl_ObjGetVar2(interp, toa, ton,
			  TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
      Tcl_GetIntFromObj(interp, to, &changed);

      if(changed)
	{
	  if(!pe_coords)
	    {
	      ay_error(AY_ERROR, fname, "Lost pointer to selected point(s)!");
	      ay_error(AY_ERROR, fname, "Please re-select the point(s)!");

	      Tcl_IncrRefCount(toa); Tcl_DecrRefCount(toa);
	      Tcl_IncrRefCount(ton); Tcl_DecrRefCount(ton);
	      return TCL_OK;
	    } /* if */

	  o = pe_object;

	  for(i = 0; i < pe_coordslen; i++)
	    {
	      coords = pe_coords[i];

	      Tcl_SetStringObj(ton,"x",-1);
	      to = Tcl_ObjGetVar2(interp, toa, ton,
				  TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
	      Tcl_GetDoubleFromObj(interp, to, &coords[0]);

	      Tcl_SetStringObj(ton,"y",-1);
	      to = Tcl_ObjGetVar2(interp, toa, ton,
				  TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
	      Tcl_GetDoubleFromObj(interp, to, &coords[1]);

	      Tcl_SetStringObj(ton,"z",-1);
	      to = Tcl_ObjGetVar2(interp, toa, ton,
				  TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
	      Tcl_GetDoubleFromObj(interp, to, &coords[2]);

	      if(pe_coordshom)
		{
		  Tcl_SetStringObj(ton,"w",-1);
		  to = Tcl_ObjGetVar2(interp, toa, ton,
				      TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
		  Tcl_GetDoubleFromObj(interp, to, &coords[3]);
		} /* if */

	      Tcl_SetStringObj(ton,"local",-1);
	      to = Tcl_ObjGetVar2(interp, toa, ton,
				  TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
	      Tcl_GetIntFromObj(interp, to, &local);

	      if(!local)
		{
		  /* XXXX what if the user changes the current level
		     after opening of the dpe dialog? */
		  ay_trafo_applyalli(ay_currentlevel->next, o, coords);
		}

	    } /* for */

	  o->modified = AY_TRUE;
	  if(o->type == AY_IDNCURVE)
	    {
	      nc = (ay_nurbcurve_object *)o->refine;
	      nc->is_rat = ay_nct_israt(nc);
	    }
	  if(o->type == AY_IDNPATCH)
	    {
	      np = (ay_nurbpatch_object *)o->refine;
	      np->is_rat = ay_npt_israt(np);
	    }
	  ay_notify_force(o);
	  ay_status = ay_notify_forceparent(o, AY_FALSE);
	  view->drawmarker = AY_FALSE;
	} /* if */

      Tcl_IncrRefCount(toa); Tcl_DecrRefCount(toa);
      Tcl_IncrRefCount(ton); Tcl_DecrRefCount(ton);

      return TCL_OK;
    } /* if */

 return TCL_OK;
} /* ay_pact_pedtcb */


/* ay_pact_insertnc:
 *  insert a point into a NURBS curve (NCurve)
 */
int
ay_pact_insertnc(ay_nurbcurve_object *curve,
		 double objX, double objY, double objZ)
{

 int ay_status = AY_OK;
 char fname[] = "insert_pointnc";
 int i = 0, j = 0, k = 0, index = -1;
 double min_distance = ay_prefs.pick_epsilon, distance = 0.0;
 double *newcontrolv = NULL, *oldcontrolv = NULL, *newknotv = NULL;
 int inserted, sections = 0, section;

 if(!curve)
   return AY_ENULL;

  if(min_distance == 0.0)
    min_distance = DBL_MAX;

  for(i = 0; i < curve->length; i++)
    {
      distance = AY_VLEN((objX - curve->controlv[j]),
			 (objY - curve->controlv[j+1]),
			 (objZ - curve->controlv[j+2]));

      if(distance < min_distance)
	{
	  index = i;
	  min_distance = distance;
	}

      j += 4;
    } /* for */

  /* no point picked? */
  if(index == -1)
    {
      return AY_OK;
    }

  if(curve->type == AY_CTPERIODIC)
    {
      /*
       * if the curve is periodic we simply insert the new point
       * in the controlvector between the picked point and the
       * next different
       */
      oldcontrolv = curve->controlv;

      if(index == curve->length-1)
	index--;

      curve->length++;
      if(!(newcontrolv = calloc(curve->length*4, sizeof(double))))
	{
	  curve->length--;
	  return AY_EOMEM;
	}

      j = 0;
      inserted = AY_FALSE;
      for(i = 0; i < (curve->length-1); i++)
	{
	  if(i >= index && !inserted)
	    {
	      memcpy(&(newcontrolv[j*4]), &(oldcontrolv[i*4]),
		     4*sizeof(double));

	      if(oldcontrolv[i*4] != oldcontrolv[(i+1)*4] ||
		 oldcontrolv[i*4+1] != oldcontrolv[(i+1)*4+1] ||
		 oldcontrolv[i*4+2] != oldcontrolv[(i+1)*4+2])
		{
		  newcontrolv[(j+1)*4] = oldcontrolv[i*4] +
		    ((oldcontrolv[(i+1)*4] - oldcontrolv[i*4])/2.0);

		  newcontrolv[(j+1)*4+1] = oldcontrolv[i*4+1] +
		    ((oldcontrolv[(i+1)*4+1] - oldcontrolv[i*4+1])/2.0);

		  newcontrolv[(j+1)*4+2] = oldcontrolv[i*4+2] +
		    ((oldcontrolv[(i+1)*4+2] - oldcontrolv[i*4+2])/2.0);

		  newcontrolv[(j+1)*4+3] = oldcontrolv[i*4+3] +
		    ((oldcontrolv[(i+1)*4+3] - oldcontrolv[i*4+3])/2.0);

		  j++;
		  inserted = AY_TRUE;
		}

	    }
	  else
	    {
	      memcpy(&(newcontrolv[j*4]), &(oldcontrolv[i*4]),
		     4*sizeof(double));
	    }
	  j++;
	} /* for */

      if(!inserted)
	{
	  free(newcontrolv);
	  curve->length--;
	  ay_error(AY_ERROR, fname, "Cannot insert point here!");
	  return AY_ERROR;
	}

      free(curve->controlv);
      curve->controlv = newcontrolv;

      if(curve->knot_type == AY_KTCUSTOM)
	{
	  if(!(newknotv = calloc(curve->length+curve->order, sizeof(double))))
	    {
	      curve->length--;
	      return AY_EOMEM;
	    }

	  i = 0;
	  for(j = curve->order; j < curve->length-1; j++)
	    {
	      if(curve->knotv[j] != curve->knotv[j+1])
		{
		  sections++;
		}
	    }

	  section = sections*index/(curve->length-1);

	  k = 0; i = 0;
	  for(j = 0; j < curve->length+curve->order-1; j++)
	    {

	      if((j >= curve->order-1) &&
		 (curve->knotv[j] != curve->knotv[j+1]))
		{
		  newknotv[k] = curve->knotv[j];
		  k++;
		  if(i == section)
		    {
		      newknotv[k] = curve->knotv[j]+
			((curve->knotv[j+1]-curve->knotv[j])/2.0);
		      k++;
		    }
		  i++;
		}
	      else
		{
		  newknotv[k] = curve->knotv[j];
		  k++;
		}

	    } /* for */

	  free(curve->knotv);
	  curve->knotv = newknotv;

	  /*
	  ay_error(AY_EWARN,fname, "Changed knot type to B-Spline!");
	  curve->knot_type = AY_KTBSPLINE;
	  */
	}

      if(curve->knot_type != AY_KTCUSTOM)
	{
	  ay_status = ay_knots_createnc(curve);
	}
      ay_status = ay_nct_close(curve);
    }
  else
    { /* curve is not closed */

      curve->length++;
      if(!(newcontrolv = calloc(curve->length*4, sizeof(double))))
	{
	  curve->length--;
	  return AY_EOMEM;
	}

      j = 0; k = 0;
      for(i = 0; i < curve->length-1; i++)
	{
	  if(i == index)
	    {
	      /* insert point here */
	      memcpy(&newcontrolv[k],&curve->controlv[j],4*sizeof(double));

	      k += 4;
	      if(i == curve->length-2)
		{ /* the new point is the new last point */
		  newcontrolv[k] = curve->controlv[j] +
		    ((curve->controlv[j]-curve->controlv[j-4])/2.0);
		  newcontrolv[k+1] = curve->controlv[j+1]+
		    ((curve->controlv[j+1]-curve->controlv[j+1-4])/2.0);
		  newcontrolv[k+2] = curve->controlv[j+2]+
		    ((curve->controlv[j+2]-curve->controlv[j+2-4])/2.0);
		  newcontrolv[k+3] = curve->controlv[j+3]+
		    ((curve->controlv[j+3]-curve->controlv[j+3-4])/2.0);
		}
	      else
		{
		  newcontrolv[k] = curve->controlv[j] +
		    ((curve->controlv[j+4]-curve->controlv[j])/2.0);
		  newcontrolv[k+1] = curve->controlv[j+1]+
		    ((curve->controlv[j+1+4]-curve->controlv[j+1])/2.0);
		  newcontrolv[k+2] = curve->controlv[j+2]+
		    ((curve->controlv[j+2+4]-curve->controlv[j+2])/2.0);
		  newcontrolv[k+3] = curve->controlv[j+3]+
		    ((curve->controlv[j+3+4]-curve->controlv[j+3])/2.0);
		} /* if */
	    }
	  else
	    {
	      memcpy(&newcontrolv[k],&curve->controlv[j],4*sizeof(double));
	    } /* if */

	  k += 4;
	  j += 4;
	} /* for */

      free(curve->controlv);
      curve->controlv = newcontrolv;

      if(curve->knot_type == AY_KTCUSTOM)
	{
	  if(!(newknotv = calloc(curve->length+curve->order, sizeof(double))))
	    {
	      curve->length--;
	      return AY_EOMEM;
	    }

	  /* count sections */
	  i = 0;
	  for(j = curve->order; j < curve->length-1; j++)
	    {
	      if(curve->knotv[j] != curve->knotv[j+1])
		{
		  sections++;
		}
	    }

	  section = sections*index/(curve->length-1);

	  k = 0; i = 0;
	  for(j = 0; j < curve->length+curve->order-2; j++)
	    {
	      if((j >= curve->order-1) &&
		 (curve->knotv[j] != curve->knotv[j+1]))
		{
		  newknotv[k] = curve->knotv[j];
		  k++;
		  if(i == section)
		    {
		      newknotv[k] = curve->knotv[j]+
			((curve->knotv[j+1]-curve->knotv[j])/2.0);
		      k++;
		    }
		  i++;
		}
	      else
		{
		  newknotv[k] = curve->knotv[j];
		  k++;
		}

	    } /* for */

	  newknotv[curve->length+curve->order-1] =
	    curve->knotv[curve->length+curve->order-2];

	  free(curve->knotv);
	  curve->knotv = newknotv;

	  /*
	    ay_error(AY_EWARN,fname, "Changed knot type to NURB!");
	    curve->knot_type = AY_KTNURB;
	  */
	} /* if */

      if(curve->knot_type != AY_KTCUSTOM)
	{
	  ay_status = ay_knots_createnc(curve);
	}
    } /* if */

  ay_status = ay_nct_recreatemp(curve);

 return ay_status;
} /* ay_pact_insertnc */


/* ay_pact_insertic:
 *  insert a point into an interpolating curve (ICurve)
 */
int
ay_pact_insertic(ay_icurve_object *icurve,
		 double objX, double objY, double objZ)
{

 int ay_status = AY_OK;
 char fname[] = "insert_pointic";
 int i = 0, j = 0, index = -1;
 double min_distance = ay_prefs.pick_epsilon, distance = 0.0;
 double *newcontrolv = NULL, *oldcontrolv = NULL;
 int inserted;

  if(!icurve)
    return AY_ENULL;

  if(min_distance == 0.0)
    min_distance = DBL_MAX;

  for(i = 0; i < icurve->length; i++)
    {
      distance = AY_VLEN((objX - icurve->controlv[j]),
			 (objY - icurve->controlv[j+1]),
			 (objZ - icurve->controlv[j+2]));

      if(distance < min_distance)
	{
	  index = i;
	  min_distance = distance;
	}

      j += 3;
    } /* for */

  /* no point picked? */
  if(index == -1)
    {
      return AY_OK;
    }

  /*
   * we simply insert the new point in the controlvector
   * between the picked point and the next different
   */
  oldcontrolv = icurve->controlv;

  if(!icurve->type)
    {
      if(index == icurve->length-1)
	{
	  index--;
	}
    }
  else
    {
      if(index == icurve->length-1)
	{
	  icurve->length++;
	  if(!(newcontrolv = calloc(icurve->length*3, sizeof(double))))
	    {
	      icurve->length--;
	      return AY_EOMEM;
	    }
	  memcpy(newcontrolv, oldcontrolv,
		 (icurve->length-1)*3*sizeof(double));
	  j = (icurve->length-1)*3;
	  i = (icurve->length-2)*3;
	  newcontrolv[j] = oldcontrolv[i] +
	    ((oldcontrolv[0] - oldcontrolv[i])/2.0);

	  newcontrolv[j+1] = oldcontrolv[i+1] +
	    ((oldcontrolv[1] - oldcontrolv[i+1])/2.0);

	  newcontrolv[j+2] = oldcontrolv[i+2] +
	    ((oldcontrolv[2] - oldcontrolv[i+2])/2.0);

	  free(icurve->controlv);
	  icurve->controlv = newcontrolv;
	  return ay_status; /* XXXX early exit */
	} /* if */
    } /* if */

  icurve->length++;
  if(!(newcontrolv = calloc(icurve->length*3, sizeof(double))))
    {
      icurve->length--;
      return AY_EOMEM;
    }

  j = 0;
  inserted = AY_FALSE;
  for(i = 0; i < (icurve->length-1); i++)
    {
      if(i >= index && !inserted)
	{
	  memcpy(&(newcontrolv[j*3]), &(oldcontrolv[i*3]),
		 3*sizeof(double));

	  if(oldcontrolv[i*3] != oldcontrolv[(i+1)*3] ||
	     oldcontrolv[i*3+1] != oldcontrolv[(i+1)*3+1] ||
	     oldcontrolv[i*3+2] != oldcontrolv[(i+1)*3+2])
	    {
	      newcontrolv[(j+1)*3] = oldcontrolv[i*3] +
		((oldcontrolv[(i+1)*3] - oldcontrolv[i*3])/2.0);

	      newcontrolv[(j+1)*3+1] = oldcontrolv[i*3+1] +
		((oldcontrolv[(i+1)*3+1] - oldcontrolv[i*3+1])/2.0);

	      newcontrolv[(j+1)*3+2] = oldcontrolv[i*3+2] +
		((oldcontrolv[(i+1)*3+2] - oldcontrolv[i*3+2])/2.0);

	      newcontrolv[(j+1)*3+3] = oldcontrolv[i*3+3] +
		((oldcontrolv[(i+1)*3+3] - oldcontrolv[i*3+3])/2.0);

	      j++;
	      inserted = AY_TRUE;
	    }

	}
      else
	{
	  memcpy(&(newcontrolv[j*3]), &(oldcontrolv[i*3]),
		 3*sizeof(double));
	} /* if */
      j++;
    } /* for */

  if((icurve->type) && (index == icurve->length-2))
    {

      inserted = AY_TRUE;
    }

  if(!inserted)
    {
      free(newcontrolv);
      icurve->length--;
      ay_error(AY_ERROR, fname, "Cannot insert point here!");
      return AY_ERROR;
    }


  free(icurve->controlv);
  icurve->controlv = newcontrolv;

 return ay_status;
} /* ay_pact_insertic */


/* ay_pact_insertac:
 *  insert a point into an approximating curve (ACurve)
 */
int
ay_pact_insertac(ay_acurve_object *acurve,
		 double objX, double objY, double objZ)
{

 int ay_status = AY_OK;
 char fname[] = "insert_pointic";
 int i = 0, j = 0, index = -1;
 double min_distance = ay_prefs.pick_epsilon, distance = 0.0;
 double *newcontrolv = NULL, *oldcontrolv = NULL;
 int inserted;

  if(!acurve)
    return AY_ENULL;

  if(min_distance == 0.0)
    min_distance = DBL_MAX;

  for(i = 0; i < acurve->length; i++)
    {
      distance = AY_VLEN((objX - acurve->controlv[j]),
			 (objY - acurve->controlv[j+1]),
			 (objZ - acurve->controlv[j+2]));

      if(distance < min_distance)
	{
	  index = i;
	  min_distance = distance;
	}

      j += 3;
    } /* for */

  /* no point picked? */
  if(index == -1)
    {
      return AY_OK;
    }

  /*
   * we simply insert the new point in the controlvector
   * between the picked point and the next different
   */
  oldcontrolv = acurve->controlv;

  if(!acurve->closed)
    {
      if(index == acurve->length-1)
	{
	  index--;
	}
    }
  else
    {
      if(index == acurve->length-1)
	{
	  acurve->length++;
	  if(!(newcontrolv = calloc(acurve->length*3, sizeof(double))))
	    {
	      acurve->length--;
	      return AY_EOMEM;
	    }
	  memcpy(newcontrolv, oldcontrolv,
		 (acurve->length-1)*3*sizeof(double));
	  j = (acurve->length-1)*3;
	  i = (acurve->length-2)*3;
	  newcontrolv[j] = oldcontrolv[i] +
	    ((oldcontrolv[0] - oldcontrolv[i])/2.0);

	  newcontrolv[j+1] = oldcontrolv[i+1] +
	    ((oldcontrolv[1] - oldcontrolv[i+1])/2.0);

	  newcontrolv[j+2] = oldcontrolv[i+2] +
	    ((oldcontrolv[2] - oldcontrolv[i+2])/2.0);

	  free(acurve->controlv);
	  acurve->controlv = newcontrolv;
	  return ay_status; /* XXXX early exit */
	} /* if */
    } /* if */

  acurve->length++;
  if(!(newcontrolv = calloc(acurve->length*3, sizeof(double))))
    {
      acurve->length--;
      return AY_EOMEM;
    }

  j = 0;
  inserted = AY_FALSE;
  for(i = 0; i < (acurve->length-1); i++)
    {
      if(i >= index && !inserted)
	{
	  memcpy(&(newcontrolv[j*3]), &(oldcontrolv[i*3]),
		 3*sizeof(double));

	  if(oldcontrolv[i*3] != oldcontrolv[(i+1)*3] ||
	     oldcontrolv[i*3+1] != oldcontrolv[(i+1)*3+1] ||
	     oldcontrolv[i*3+2] != oldcontrolv[(i+1)*3+2])
	    {
	      newcontrolv[(j+1)*3] = oldcontrolv[i*3] +
		((oldcontrolv[(i+1)*3] - oldcontrolv[i*3])/2.0);

	      newcontrolv[(j+1)*3+1] = oldcontrolv[i*3+1] +
		((oldcontrolv[(i+1)*3+1] - oldcontrolv[i*3+1])/2.0);

	      newcontrolv[(j+1)*3+2] = oldcontrolv[i*3+2] +
		((oldcontrolv[(i+1)*3+2] - oldcontrolv[i*3+2])/2.0);

	      newcontrolv[(j+1)*3+3] = oldcontrolv[i*3+3] +
		((oldcontrolv[(i+1)*3+3] - oldcontrolv[i*3+3])/2.0);

	      j++;
	      inserted = AY_TRUE;
	    }

	}
      else
	{
	  memcpy(&(newcontrolv[j*3]), &(oldcontrolv[i*3]),
		 3*sizeof(double));
	} /* if */
      j++;
    } /* for */

  if((acurve->closed) && (index == acurve->length-2))
    {

      inserted = AY_TRUE;
    }

  if(!inserted)
    {
      free(newcontrolv);
      acurve->length--;
      ay_error(AY_ERROR, fname, "Cannot insert point here!");
      return AY_ERROR;
    }


  free(acurve->controlv);
  acurve->controlv = newcontrolv;

 return ay_status;
} /* ay_pact_insertac */


/* ay_pact_insertptcb:
 *  insert point action callback
 */
int
ay_pact_insertptcb(struct Togl *togl, int argc, char *argv[])
{
 int ay_status = AY_OK;
 Tcl_Interp *interp = Togl_Interp (togl);
 double winX = 0.0, winY = 0.0, objX = 0.0, objY = 0.0, objZ = 0.0;
 char fname[] = "insert_point";

  if(ay_selection)
    {
      if(!ay_selection->object)
	return TCL_OK;

      ay_selp_clear(ay_selection->object);

      Tcl_GetDouble(interp, argv[2], &winX);
      Tcl_GetDouble(interp, argv[3], &winY);

      ay_status = ay_viewt_wintoobj(togl, ay_selection->object,
				    winX, winY,
				    &objX, &objY, &objZ);

      switch(ay_selection->object->type)
	{
	case AY_IDNCURVE:
	  ay_status = ay_pact_insertnc((ay_nurbcurve_object *)
				       (ay_selection->object->refine),
				       objX, objY, objZ);
	  if(ay_status)
	    ay_error(ay_status, fname, "Error while inserting point!");
	  ay_status = ay_notify_force(ay_selection->object);
	  ay_selection->object->modified = AY_TRUE;
	  break;
	case AY_IDICURVE:
	  ay_status = ay_pact_insertic((ay_icurve_object *)
				       (ay_selection->object->refine),
				       objX, objY, objZ);
	  if(ay_status)
	    ay_error(ay_status, fname, "Error while inserting point!");

	  ay_status = ay_notify_force(ay_selection->object);
	  ay_selection->object->modified = AY_TRUE;
	  break;
	case AY_IDACURVE:
	  ay_status = ay_pact_insertac((ay_acurve_object *)
				       (ay_selection->object->refine),
				       objX, objY, objZ);
	  if(ay_status)
	    ay_error(ay_status, fname, "Error while inserting point!");

	  ay_status = ay_notify_force(ay_selection->object);
	  ay_selection->object->modified = AY_TRUE;
	  break;
	default:
	  break;
	}

       ay_status = ay_notify_parent();

       ay_toglcb_display(togl);
    }
  else
    {
      ay_error(AY_ENOSEL, fname, NULL);
    }

 return TCL_OK;
} /* ay_pact_insertptcb */


/* ay_pact_deletenc:
 *  delete a point from a NURBS curve (NCurve)
 */
int
ay_pact_deletenc(ay_nurbcurve_object *curve,
		 double objX, double objY, double objZ)
{
 int ay_status = AY_OK;
 char fname[] = "delete_point";
 double *cv = NULL;
 int i = 0, j = 0, k = 0, index = -1;
 double min_distance = ay_prefs.pick_epsilon, distance = 0.0;
 double *newcontrolv = NULL, *newknotv = NULL;

  if(!curve)
    return AY_ENULL;

  cv = curve->controlv;

  if(min_distance == 0.0)
    min_distance = DBL_MAX;

  index = -1;
  for(i = 0; i < curve->length; i++)
    {
      distance = AY_VLEN((objX - cv[j]),
			 (objY - cv[j+1]),
			 (objZ - cv[j+2]));

      if(distance < min_distance)
	{
	  index = i;
	  min_distance = distance;
	}

      j += 4;
    } /* for */

  if((index != -1) && (curve->length-1 < 2))
    {
      ay_error(AY_ERROR, fname, "need atleast two points");
      return TCL_OK;
    }

  if((curve->type) &&
     (index > (curve->length-curve->order)))
    {
      index = curve->order-(curve->length-index)-1;
    }

  /* create new curve */
  if(index != -1)
    {
      curve->length--;
      if(!(newcontrolv = calloc(curve->length*4, sizeof(double))))
	return AY_EOMEM;

      /* copy controlv */
      j = 0;
      k = 0;
      for(i = 0; i <= curve->length; i++)
	{
	  if(i != index)
	    {
	      newcontrolv[k] = curve->controlv[j];
	      newcontrolv[k+1] = curve->controlv[j+1];
	      newcontrolv[k+2] = curve->controlv[j+2];
	      newcontrolv[k+3] = curve->controlv[j+3];
	      k += 4;
	    }

	  j += 4;
	} /* for */

      free(curve->controlv);
      curve->controlv = newcontrolv;

      if(curve->knot_type == AY_KTBEZIER)
	curve->order--;

      if(curve->length < curve->order)
	curve->order = curve->length;

      /* generate new knots? */
      if(curve->knot_type == AY_KTCUSTOM)
	{
	  if(!(newknotv = calloc(curve->order+curve->length,
				 sizeof(double))))
	    { return AY_EOMEM; }

	  memcpy(newknotv, curve->knotv, (curve->length)*sizeof(double));
	  memcpy(&(newknotv[curve->length]),
		 &(curve->knotv[curve->length+1]),
		 curve->order*sizeof(double));
	  /*
	    for(i=0;i<curve->length+curve->order;i++)
	    {
	    newknotv[i] = curve->knotv[i];
	    }
	  */
	  free(curve->knotv);
	  curve->knotv = newknotv;
	}
      else
	{
	  ay_status = ay_knots_createnc(curve);
	}

    } /* if */

  if(curve->type)
    {
      ay_status = ay_nct_close(curve);
      if(ay_status)
	{
	  ay_error(ay_status, fname, "cannot close this curve");
	}
    }

  ay_status = ay_nct_recreatemp(curve);

 return AY_OK;
} /* ay_pact_deletenc */


/* ay_pact_deleteic:
 *  delete a point from an interpolating curve (ICurve)
 */
int
ay_pact_deleteic(ay_icurve_object *icurve,
		 double objX, double objY, double objZ)
{
 char fname[] = "delete_point";
 double *cv = NULL;
 int i=0, j=0, k=0, index = -1;
 double min_distance = ay_prefs.pick_epsilon, distance = 0.0;
 double *newcontrolv = NULL;

  if(!icurve)
    return AY_ENULL;

  cv = icurve->controlv;

  if(min_distance == 0.0)
    min_distance = DBL_MAX;

  index = -1;
  for(i = 0; i < icurve->length; i++)
    {
      distance = AY_VLEN((objX - cv[j]),
			 (objY - cv[j+1]),
			 (objZ - cv[j+2]));

      if(distance < min_distance)
	{
	  index = i;
	  min_distance = distance;
	}

      j += 3;
    } /* for */

  if((index != -1) && (icurve->length-1 < 3))
    {
      ay_error(AY_ERROR, fname, "need atleast three points");
      return TCL_OK;
    }

  /* create new icurve */
  if(index != -1)
    {
      icurve->length--;
      if(!(newcontrolv = calloc(icurve->length*3, sizeof(double))))
	return AY_EOMEM;

      /* copy controlv */
      j = 0;
      k = 0;
      for(i=0; i<=icurve->length; i++)
	{
	  if(i != index)
	    {
	      newcontrolv[k] = icurve->controlv[j];
	      newcontrolv[k+1] = icurve->controlv[j+1];
	      newcontrolv[k+2] = icurve->controlv[j+2];

	      k += 3;
	    }

	  j += 3;
	} /* for */

      free(icurve->controlv);
      icurve->controlv = newcontrolv;
   } /* if */

 return AY_OK;
} /* ay_pact_deleteic */

/* ay_pact_deleteac:
 *  delete a point from an approximating curve (ACurve)
 */
int
ay_pact_deleteac(ay_acurve_object *acurve,
		 double objX, double objY, double objZ)
{
 char fname[] = "delete_point";
 double *cv = NULL;
 int i=0, j=0, k=0, index = -1;
 double min_distance = ay_prefs.pick_epsilon, distance = 0.0;
 double *newcontrolv = NULL;

  if(!acurve)
    return AY_ENULL;

  cv = acurve->controlv;

  if(min_distance == 0.0)
    min_distance = DBL_MAX;

  index = -1;
  for(i = 0; i < acurve->length; i++)
    {
      distance = AY_VLEN((objX - cv[j]),
			 (objY - cv[j+1]),
			 (objZ - cv[j+2]));

      if(distance < min_distance)
	{
	  index = i;
	  min_distance = distance;
	}

      j += 3;
    } /* for */

  if((index != -1) && (acurve->length-1 < 3))
    {
      ay_error(AY_ERROR, fname, "need atleast three points");
      return TCL_OK;
    }

  /* create new acurve */
  if(index != -1)
    {
      acurve->length--;
      if(!(newcontrolv = calloc(acurve->length*3, sizeof(double))))
	return AY_EOMEM;

      /* copy controlv */
      j = 0;
      k = 0;
      for(i=0; i<=acurve->length; i++)
	{
	  if(i != index)
	    {
	      newcontrolv[k] = acurve->controlv[j];
	      newcontrolv[k+1] = acurve->controlv[j+1];
	      newcontrolv[k+2] = acurve->controlv[j+2];

	      k += 3;
	    }

	  j += 3;
	} /* for */

      free(acurve->controlv);
      acurve->controlv = newcontrolv;
   } /* if */

 return AY_OK;
} /* ay_pact_deleteac */


/* ay_pact_deleteptcb:
 *  delete point action callback
 *
 */
int
ay_pact_deleteptcb(struct Togl *togl, int argc, char *argv[])
{
 int ay_status = AY_OK;
 Tcl_Interp *interp = Togl_Interp (togl);
 double winX = 0.0, winY = 0.0, objX = 0.0, objY = 0.0, objZ = 0.0;
 char fname[] = "delete_point";

  if(ay_selection)
    {
      if(!ay_selection->object)
	return TCL_OK;

      ay_selp_clear(ay_selection->object);

      Tcl_GetDouble(interp, argv[2], &winX);
      Tcl_GetDouble(interp, argv[3], &winY);

      ay_status = ay_viewt_wintoobj(togl, ay_selection->object,
				    winX, winY,
				    &objX, &objY, &objZ);

      switch(ay_selection->object->type)
	{
	case AY_IDNCURVE:
	  ay_status = ay_pact_deletenc((ay_nurbcurve_object *)
				       (ay_selection->object->refine),
				       objX, objY, objZ);
	  if(ay_status)
	    ay_error(ay_status, fname, "Error while deleting point!");
	  ay_status = ay_notify_force(ay_selection->object);
	  ay_selection->object->modified = AY_TRUE;
	  break;
	case AY_IDICURVE:
	  ay_status = ay_pact_deleteic((ay_icurve_object *)
				       (ay_selection->object->refine),
				       objX, objY, objZ);
	  if(ay_status)
	    ay_error(ay_status, fname, "Error while deleting point!");

	  ay_status = ay_notify_force(ay_selection->object);
	  ay_selection->object->modified = AY_TRUE;
	  break;
	case AY_IDACURVE:
	  ay_status = ay_pact_deleteac((ay_acurve_object *)
				       (ay_selection->object->refine),
				       objX, objY, objZ);
	  if(ay_status)
	    ay_error(ay_status, fname, "Error while deleting point!");

	  ay_status = ay_notify_force(ay_selection->object);
	  ay_selection->object->modified = AY_TRUE;
	  break;
	default:
	  break;
	}

       ay_status = ay_notify_parent();

       ay_toglcb_display(togl);
    }
  else
    {
      ay_error(AY_ENOSEL, fname, NULL);
    }

 return TCL_OK;
} /* ay_pact_deleteptcb */


/* ay_pact_griddify:
 *  helper for ay_pact_petcb()
 *  snap value n to a grid sized by grid
 */
void
ay_pact_griddify(double *n, double grid)
{
 double m;

  m = fmod(*n, grid);

  if(fabs(m) > 1.0e-05)
    {
      if(*n>0.0)
	{
	  if(m < (grid/2.0))
	    {
	      *n -= m;
	    }
	  else
	    {
	      *n += grid-m;
	    }
	}
      else
	{
	  if(m < -(grid/2.0))
	    {
	      *n -= grid+m;
	    }
	  else
	    {
	      *n -= m;
	    } /* if */
	} /* if */
    } /* if */

 return;
} /* ay_pact_griddify */


/* ay_pact_petcb:
 *  action callback for single point editing
 */
int
ay_pact_petcb(struct Togl *togl, int argc, char *argv[])
{
 /*int ay_status = AY_OK;*/
 char fname[] = "edit_points";
 Tcl_Interp *interp = Togl_Interp (togl);
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);
 /*ay_list_object *sel = ay_selection;*/
 static double oldwinx = 0.0, oldwiny = 0.0;
 double winx = 0.0, winy = 0.0;
 double movX, movY, movZ, dx = 0.0, dy = 0.0, dz = 0.0, *coords = NULL;
 double euler[3] = {0}, uccoords[3] = {0};
 int i = 0, j, k = 0, redraw = AY_FALSE;
 static GLdouble m[16] = {0};
 /*GLdouble mo[16] = {0};*/
 ay_object *o = ay_point_edit_object;

  if(!o)
    return TCL_OK;

  for(j = 0; j < ay_pe_objectslen; j++)
    {
      o = ay_pe_objects[j];

      glMatrixMode(GL_MODELVIEW);
      glPushMatrix();

      glScaled (1.0/o->scalx, 1.0/o->scaly, 1.0/o->scalz);
      if(!view->aligned)
	{
	  ay_quat_toeuler(o->quat, euler);
	  glRotated(AY_R2D(euler[0]), 0.0, 0.0, 1.0);
	  glRotated(AY_R2D(euler[1]), 0.0, 1.0, 0.0);
	  glRotated(AY_R2D(euler[2]), 1.0, 0.0, 0.0);
	}
      glTranslated(-o->movx, -o->movy, -o->movz);

      if(!view->local)
	{
	  ay_trafo_getalli(ay_currentlevel->next);
	}
      else
	{
	  ay_trafo_getallis(ay_currentlevel->next);
	}

      glGetDoublev(GL_MODELVIEW_MATRIX, m);
      glPopMatrix();

      if(argc >= 4)
	{
	  if(!strcmp(argv[2],"-winxy"))
	    {
	      Tcl_GetDouble(interp, argv[3], &winx);
	      Tcl_GetDouble(interp, argv[4], &winy);

	      if(view->usegrid)
		{
		  ay_viewt_griddify(togl, &winx, &winy);
		}
	    }
	  else
	    {
	      if(!strcmp(argv[2],"-start"))
		{
		  Tcl_GetDouble(interp, argv[3], &winx);
		  Tcl_GetDouble(interp, argv[4], &winy);

		  if(view->usegrid)
		    {
		      ay_viewt_griddify(togl, &winx, &winy);
		    }

		  oldwinx = winx;
		  oldwiny = winy;

		  /* snap selected points to grid coordinates */
		  if(ay_pact_pe.coords)
		    {
		      if(view->usegrid && ay_prefs.edit_snaps_to_grid &&
			 (view->grid != 0.0))
			{
			  for(i = 0; i < ay_pact_numcpo[j]; i++)
			    {
			      coords = ay_pact_pe.coords[k];
			      if(!view->local)
				{
				  ay_trafo_applyall(ay_currentlevel->next, o,
						    coords);
				} /* if */
			      if(i == 0)
				{
				  memcpy(uccoords, coords, 3*sizeof(double));
				} /* if */
			      if(ay_prefs.snap3d)
				{
				  ay_pact_griddify(&(coords[0]), view->grid);
				  ay_pact_griddify(&(coords[1]), view->grid);
				  ay_pact_griddify(&(coords[2]), view->grid);
				}
			      else
				{
				  switch(view->type)
				    {
				    case AY_VTFRONT:
				    case AY_VTTRIM:
				      ay_pact_griddify(&(coords[0]),
						       view->grid);
				      ay_pact_griddify(&(coords[1]),
						       view->grid);
				      break;
				    case AY_VTSIDE:
				      ay_pact_griddify(&(coords[1]),
						       view->grid);
				      ay_pact_griddify(&(coords[2]),
						       view->grid);
				      break;
				    case AY_VTTOP:
				      ay_pact_griddify(&(coords[0]),
						       view->grid);
				      ay_pact_griddify(&(coords[2]),
						       view->grid);
				      break;
				    default:
				      break;
				    } /* switch */
				} /* if */
			      if(i == 0)
				{
				  if(memcmp(uccoords, coords,
					    3*sizeof(double)))
				    {
				      o->modified = AY_TRUE;
				    }
				} /* if */
			      if(!view->local)
				{
				  ay_trafo_applyalli(ay_currentlevel->next, o,
						     coords);
				} /* if */
			      k++;
			    } /* for */
			  /* notify&redraw are only necessary if coords are
			     really changed by the snap to grid operation */
			  if(o->modified)
			    {
			      ay_notify_force(o);
			      ay_notify_parent();
			      ay_toglcb_display(togl);
			    } /* if */
			} /* if */
		    } /* if */
		  return TCL_OK;
		} /* if */
	    } /* if */
	}
      else
	{
	  ay_error(AY_EARGS, fname, NULL);
	  return TCL_OK;
	} /* if */

      dx = -(oldwinx - winx) * view->conv_x;
      dy = (oldwiny - winy) * view->conv_y;

      /* Side or Top view? */
      if(view->type == AY_VTSIDE)
	{
	  dz = -dx;
	  dx = 0.0;
	}

      if(view->type == AY_VTTOP)
	{
	  dx = dx;
	  dz = -dy;
	  dy = 0.0;
	}

      movX = m[0]*dx+m[4]*dy+m[8]*dz;
      movY = m[1]*dx+m[5]*dy+m[9]*dz;
      movZ = m[2]*dx+m[6]*dy+m[10]*dz;

      if(ay_pact_pe.coords)
	{
	  for(i = 0; i < ay_pact_numcpo[j]; i++)
	    {
	      coords = ay_pact_pe.coords[k];
	      k++;
	      coords[0] += movX;
	      coords[1] += movY;
	      coords[2] += movZ;
	    } /* for */

	  if((fabs(movX) > AY_EPSILON)||
	     (fabs(movY) > AY_EPSILON)||
	     (fabs(movZ) > AY_EPSILON))
	    {
	      o->modified = AY_TRUE;
	      ay_notify_force(o);
	      redraw = AY_TRUE;
	    } /* if */
	} /* if */
    } /* for */

  oldwinx = winx;
  oldwiny = winy;

  if(redraw)
    {
      if(!ay_prefs.lazynotify)
	{
	  ay_notify_parent();
	}

      ay_toglcb_display(togl);

      /* flash option given? */
      if(argc > 5)
	{
	  ay_pact_flashpoint(AY_TRUE);
	}
    } /* if */

 return TCL_OK;
} /* ay_pact_petcb */


/* ay_pact_wetcb:
 *  action callback for single point weight editing
 */
int
ay_pact_wetcb(struct Togl *togl, int argc, char *argv[])
{
 /*int ay_status = AY_OK;*/
 char fname[] = "weight_edit";
 Tcl_Interp *interp = Togl_Interp (togl);
 /*  ay_view_info *view = Togl_GetClientData(togl);*/
 double dx, winx = 0.0, new_weight = 0.0, *coords;
 static double oldwinx = 0.0;
 int i = 0, j, k = 0, notifyparent = AY_FALSE;
 ay_object *o = ay_point_edit_object;
 ay_nurbcurve_object *nc = NULL;
 ay_nurbpatch_object *np = NULL;

  if(!o)
    return TCL_OK;

  /* parse args */
  if(argc == 4)
    {
      if(!strcmp(argv[2], "-winx"))
	Tcl_GetDouble(interp, argv[3], &winx);
      else
	if(!strcmp(argv[2], "-start"))
	  {
	    Tcl_GetDouble(interp, argv[3], &winx);
	    oldwinx = winx;
	  }
    }
  else
    {
      ay_error(AY_EARGS, fname, NULL);
      return TCL_OK;
    }

  if(!ay_selection)
    return TCL_OK;

  dx = oldwinx - winx;

  for(j = 0; j < ay_pe_objectslen; j++)
    {
      o = ay_pe_objects[j];

      for(i = 0; i < ay_pact_numcpo[j]; i++)
	{
	  coords = ay_pact_pe.coords[k];
	  k++;
	  if(ay_pact_homcpo[j])
	    {
	      new_weight = coords[3];
	      if(dx > 0.0)
		{
		  new_weight *= 1.1;
		}
	      else
		{
		  new_weight *= 0.9;
		}
	      coords[3] = new_weight;
	    }
	  else
	    {
	      ay_error(AY_ERROR, fname, "Point is not homogenous!");
	    } /* if */
	} /* for */

      if(ay_pact_homcpo[j])
	{
	  o->modified = AY_TRUE;
	  if((fabs(new_weight) < (1.0-AY_EPSILON)) ||
	     (fabs(new_weight) > (1.0+AY_EPSILON)))
	    {
	      if(o->type == AY_IDNCURVE)
		{
		  nc = (ay_nurbcurve_object *)o->refine;
		  nc->is_rat = AY_TRUE;
		}
	      if(o->type == AY_IDNPATCH)
		{
		  np = (ay_nurbpatch_object *)o->refine;
		  np->is_rat = AY_TRUE;
		}
	    }
	  ay_notify_force(ay_selection->object);
	  notifyparent = AY_TRUE;
	} /* if */
    } /* for */

  oldwinx = winx;

  if(!ay_prefs.lazynotify && notifyparent)
    {
      ay_notify_parent();
    }

 return TCL_OK;
} /* ay_pact_wetcb */


/* ay_pact_wrtcb:
 *  this action callback resets all weights
 */
int
ay_pact_wrtcb(struct Togl *togl, int argc, char *argv[])
{
 int ay_status = AY_OK;
 char fname[] = "reset_weights";
 double p[3], *coords;
 int i;
 ay_object *o = NULL;
 ay_list_object *sel = ay_selection;
 ay_nurbcurve_object *nc = NULL;
 ay_nurbpatch_object *np = NULL;
 ay_pointedit pe = {0};

  while(sel)
    {
      o = sel->object;

      if(!o)
	return TCL_OK;

      ay_status = ay_pact_getpoint(0, o, p, &pe);

      if(ay_status)
	{
	  ay_error(AY_ERROR, fname, NULL);
	}

      if(pe.coords && pe.homogenous)
	{
	  for(i = 0; i < pe.num; i++)
	    {
	      coords = pe.coords[i];
	      coords[3] = 1.0;
	    } /* for */

	  o->modified = AY_TRUE;
	  if(o->type == AY_IDNCURVE)
	    {
	      nc = (ay_nurbcurve_object *)o->refine;
	      nc->is_rat = AY_FALSE;
	    }
	  if(o->type == AY_IDNPATCH)
	    {
	      np = (ay_nurbpatch_object *)o->refine;
	      np->is_rat = AY_FALSE;
	    }
	  ay_notify_force(o);
	}
      else
	{
	  ay_error(AY_ERROR, fname, "No rational points found!");
	} /* if */

      ay_pact_clearpointedit(&pe);

      sel = sel->next;
   } /* while */

  ay_status = ay_notify_parent();

 return TCL_OK;
} /* ay_pact_wrtcb */


/* ay_pact_centertcmd:
 *  centerPnts command that moves all points of an object so that their
 *  center is identical to the object coordinate systems center
 */
int
ay_pact_centertcmd(ClientData clientData, Tcl_Interp *interp,
		   int argc, char *argv[])
{
 int ay_status = AY_OK;
 char fname[] = "centerPnts";
 ay_list_object *sel = ay_selection;
 ay_point *oldpointsel = NULL;
 ay_object *o = NULL;
 int mode = 0;

  if(!sel)
    {
      ay_error(AY_ENOSEL, fname, NULL);
      return TCL_OK;
    }

  if(argc > 1)
    {
      Tcl_GetInt(interp, argv[1], &mode);
    }

  while(sel)
    {
      o = sel->object;
      if(o)
	{
	  /* save old point selection */
	  oldpointsel = o->selp;
	  o->selp = NULL;

	  /* center all points */
	  switch(o->type)
	    {
	    case AY_IDNCURVE:
	      ay_status = ay_nct_center(mode, (ay_nurbcurve_object*)o->refine);
	      break;
	    default:
	      ay_status = ay_selp_selall(o);
	      if(!ay_status)
		{
		  ay_status = ay_selp_center(o, mode);
		}
	      break;
	    } /* switch */

	  /* recover point selection */
	  ay_selp_clear(o);
	  o->selp = oldpointsel;

	  if(ay_status)
	    {
	      ay_error(ay_status, fname, "Could not center object!");
	    }
	  else
	    {
	      o->modified = AY_TRUE;
	      ay_notify_force(o);
	    }
	} /* if */
      sel = sel->next;
    } /* while */

  ay_notify_parent();

 return TCL_OK;
} /* ay_pact_centertcmd */


/* ay_pact_snaptogridcb:
 *  this action callback snaps all selected points to grid coordinates
 *  if no points are selected, all selectable points are snapped
 */
int
ay_pact_snaptogridcb(struct Togl *togl, int argc, char *argv[])
{
 int ay_status = AY_OK;
 char fname[] = "snap_to_grid";
 Tcl_Interp *interp = Togl_Interp (togl);
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);
 double p[3], *coords;
 int mode = 0, i;
 ay_object *o = NULL;
 ay_list_object *sel = ay_selection;
 ay_point *pnt = NULL;
 ay_pointedit pe = {0};

  if(!sel)
    {
      ay_error(AY_ENOSEL, fname, NULL);
      return TCL_OK;
    }

  if(argc > 2)
    {
      Tcl_GetInt(interp, argv[2], &mode);
    }

  while(sel)
    {
      o = sel->object;

      if(!o)
	return TCL_OK;

      if(!o->selp)
	{

	  ay_status = ay_pact_getpoint(0, o, p, &pe);

	  if(ay_status || (!pe.coords))
	    {
	      ay_error(AY_ERROR, fname, NULL);
	    }
	  else
	    {
	      for(i = 0; i < pe.num; i++)
		{
		  coords = pe.coords[i];
		  if(mode == 0)
		    {
		      ay_pact_griddify(&(coords[0]), view->grid);
		      ay_pact_griddify(&(coords[1]), view->grid);
		      ay_pact_griddify(&(coords[2]), view->grid);
		    }
		  else
		    {
		      switch(view->type)
			{
			case AY_VTFRONT:
			case AY_VTTRIM:
			  ay_pact_griddify(&(coords[0]), view->grid);
			  ay_pact_griddify(&(coords[1]), view->grid);
			  break;
			case AY_VTSIDE:
			  ay_pact_griddify(&(coords[1]), view->grid);
			  ay_pact_griddify(&(coords[2]), view->grid);
			  break;
			case AY_VTTOP:
			  ay_pact_griddify(&(coords[0]), view->grid);
			  ay_pact_griddify(&(coords[2]), view->grid);
			  break;
			default:
			  /* XXXX output proper error message */
			  break;
			} /* switch */
		    } /* if */
		} /* for */
	    } /* if */

	  ay_pact_clearpointedit(&pe);

	}
      else
	{
	  pnt = o->selp;
	  while(pnt)
	    {
	      coords = pnt->point;
	      if(mode == 0)
		{
		  ay_pact_griddify(&(coords[0]), view->grid);
		  ay_pact_griddify(&(coords[1]), view->grid);
		  ay_pact_griddify(&(coords[2]), view->grid);
		}
	      else
		{
		  switch(view->type)
		    {
		    case AY_VTFRONT:
		    case AY_VTTRIM:
		      ay_pact_griddify(&(coords[0]), view->grid);
		      ay_pact_griddify(&(coords[1]), view->grid);
		      break;
		    case AY_VTSIDE:
		      ay_pact_griddify(&(coords[1]), view->grid);
		      ay_pact_griddify(&(coords[2]), view->grid);
		      break;
		    case AY_VTTOP:
		      ay_pact_griddify(&(coords[0]), view->grid);
		      ay_pact_griddify(&(coords[2]), view->grid);
		      break;
		    default:
		      /* XXXX output proper error message */
		      break;
		    } /* switch */
		} /* if */
	      pnt = pnt->next;
	    } /* while */
	} /* if */

      o->modified = AY_TRUE;

      ay_notify_force(o);

      sel = sel->next;
   } /* while */

  ay_status = ay_notify_parent();

 return TCL_OK;
} /* ay_pact_snaptogridcb */
