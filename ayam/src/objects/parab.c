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

/* parab.c - paraboloid object */

static char *ay_parab_name = "Paraboloid";

int ay_paraboloid_notifycb(ay_object *o);

/* number of read only points */
#define AY_PPARAB 30


/* functions: */

/* ay_parab_createcb:
 *  create callback function of paraboloid object
 */
int
ay_parab_createcb(int argc, char *argv[], ay_object *o)
{
 ay_paraboloid_object *parab = NULL;
 char fname[] = "crtparab";

  if(!o)
    return AY_ENULL;

  if(!(parab = calloc(1, sizeof(ay_paraboloid_object))))
    {
      ay_error(AY_EOMEM, fname, NULL);
      return AY_ERROR;
    }

  parab->closed = AY_TRUE;
  parab->rmax = 1.0;
  parab->zmin = 0.0;
  parab->zmax = 1.0;
  parab->thetamax = 360.0;

  o->refine = parab;

 return AY_OK;
} /* ay_parab_createcb */


/* ay_parab_deletecb:
 *  delete callback function of paraboloid object
 */
int
ay_parab_deletecb(void *c)
{
 ay_paraboloid_object *parab = NULL;

  if(!c)
    return AY_ENULL;

  parab = (ay_paraboloid_object *)(c);

  if(parab->pnts)
    free(parab->pnts);

  free(parab);

 return AY_OK;
} /* ay_parab_deletecb */


/* ay_parab_copycb:
 *  copy callback function of paraboloid object
 */
int
ay_parab_copycb(void *src, void **dst)
{
 ay_paraboloid_object *parab = NULL;

  if(!src || !dst)
    return AY_ENULL;

  if(!(parab = malloc(sizeof(ay_paraboloid_object))))
    return AY_EOMEM;

  memcpy(parab, src, sizeof(ay_paraboloid_object));

  parab->pnts = NULL;

  *dst = (void *)parab;

 return AY_OK;
} /* ay_parab_copycb */


/* ay_parab_drawcb:
 *  draw (display in an Ayam view window) callback function of paraboloid
 *  object
 */
int
ay_parab_drawcb(struct Togl *togl, ay_object *o)
{
 ay_paraboloid_object *parab = NULL;
 double height, hdiff, angle, thetadiff, f;
 int i, j;
 double R[5];

  if(!o)
    return AY_ENULL;

  parab = (ay_paraboloid_object *)o->refine;

  if(!parab)
    return AY_ENULL;

  hdiff = ((parab->zmax-parab->zmin)/4);
  thetadiff = AY_D2R(parab->thetamax/8);
  f = parab->rmax/(sqrt(parab->zmax));
  height = parab->zmin;
  for(i = 0; i <= 4; i++)
    {
      R[i] = height>0.0?sqrt(height)*f:0.0;
      height += hdiff;
    }

  /* draw */
  /* XY-plane rings */
  height = parab->zmin;
  for(i = 0; i <= 4; i++)
    {
      angle = 0.0;
      glBegin(GL_LINE_STRIP);
      for(j = 0; j <= 8; j++)
	{
	  glVertex3d(cos(angle)*R[i], sin(angle)*R[i], height);
	  angle += thetadiff;
	}
      glEnd();
      height += hdiff;
    }

  /* walls */
  angle = 0.0;
  for(i = 0; i <= 8; i++)
    {
      height = parab->zmin;

      glBegin(GL_LINE_STRIP);
      for(j = 0; j <= 4; j++)
	{
	  glVertex3d(cos(angle)*R[j], sin(angle)*R[j], height);
	  height += hdiff;
	}
      glEnd();

      angle += thetadiff;
    }

  /* caps */
  if(parab->closed)
    {
      if(fabs(parab->thetamax) != 360.0)
	{
	  if(parab->zmin > 0.0)
	    {
	      glBegin(GL_LINES);
	       glVertex3d(R[0], 0.0, parab->zmin);
	       glVertex3d(0.0,  0.0, parab->zmin);
	      glEnd();
	    }
	  glBegin(GL_LINES);
	   glVertex3d(R[4], 0.0, parab->zmax);
	   glVertex3d(0.0,  0.0, parab->zmax);
	  glEnd();

	  glBegin(GL_LINES);
	   glVertex3d(0.0, 0.0, parab->zmin);
	   glVertex3d(0.0, 0.0, parab->zmax);
	  glEnd();

	  glRotated(parab->thetamax, 0.0, 0.0, 1.0);
	  if(parab->zmin > 0.0)
	    {
	      glBegin(GL_LINES);
	       glVertex3d(R[0], 0.0, parab->zmin);
	       glVertex3d(0.0,  0.0, parab->zmin);
	      glEnd();
	    }
	  glBegin(GL_LINES);
	   glVertex3d(R[4], 0.0, parab->zmax);
	   glVertex3d(0.0,  0.0, parab->zmax);
	  glEnd();
	}
    }

 return AY_OK;
} /* ay_parab_drawcb */


/* ay_parab_shadecb:
 *  shade (display in an Ayam view window) callback function of parab object
 */
int
ay_parab_shadecb(struct Togl *togl, ay_object *o)
{
 ay_paraboloid_object *parab = NULL;
 double height, hdiff, angle, thetadiff, f;
 int i, j;
 double R[5];

  if(!o)
    return AY_ENULL;

  parab = (ay_paraboloid_object *)o->refine;

  if(!parab)
    return AY_ENULL;

  /* calculate some points on a quadric curve */
  hdiff = ((parab->zmax-parab->zmin)/4);
  thetadiff = AY_D2R(parab->thetamax/8);
  f = parab->rmax/(sqrt(parab->zmax));
  height = parab->zmin;
  for(i = 0; i <= 4; i++)
    {
      R[i] = height>0.0?sqrt(height)*f:0.0;
      height += hdiff;
    }

  /* draw the paraboloid */
  height = parab->zmin;
  for(i = 0; i < 4; i++)
    {
      angle = 0.0;
      glBegin(GL_QUAD_STRIP);
       for(j = 0; j <= 8; j++)
	 {
	   /* XXXX these normals are probably a bit off  */
	   glNormal3d(cos(angle)*R[i+1], sin(angle)*R[i+1],
		      -parab->zmax-(height+hdiff));

	   glVertex3d(cos(angle)*R[i+1], sin(angle)*R[i+1], height+hdiff);

	   glNormal3d(cos(angle)*R[i], sin(angle)*R[i], -parab->zmax-height);

	   glVertex3d(cos(angle)*R[i], sin(angle)*R[i], height);

	   angle += thetadiff;
	 } /* for */
      glEnd();
      height += hdiff;
    } /* for */

  if(parab->closed)
    {
      if(fabs(parab->thetamax) != 360.0)
	{
	  glPushMatrix();

	  glNormal3d(0.0, -1.0, 0.0);
	  glBegin(GL_TRIANGLE_FAN);
	   glVertex3d(0.0,  0.0, parab->zmax);

	   height = parab->zmin;
	   for(i = 0; i <= 4; i++)
	     {
	       glVertex3d(R[i], 0.0, height);
	       height += hdiff;
	     }
	  glEnd();

	  if(parab->zmin > 0.0)
	    {
	      glBegin(GL_TRIANGLES);
	       glVertex3d(0.0,  0.0, parab->zmax);
	       glVertex3d(0.0, 0.0, parab->zmin);
	       glVertex3d(R[0], 0.0, parab->zmin);
	      glEnd();
	    }

	  glNormal3d(0.0, 1.0, 0.0);
	  glRotated(parab->thetamax, 0.0, 0.0, 1.0);
	  glBegin(GL_TRIANGLE_FAN);
	   glVertex3d(0.0,  0.0, parab->zmax);
	   height = parab->zmax;
	   for(i = 4; i >= 0; i--)
	     {
	       glVertex3d(R[i], 0.0, height);
	       height -= hdiff;
	     }
	  glEnd();

	  if(parab->zmin > 0.0)
	    {
	      glBegin(GL_TRIANGLES);
	       glVertex3d(0.0,  0.0, parab->zmax);
	       glVertex3d(R[0], 0.0, parab->zmin);
	       glVertex3d(0.0, 0.0, parab->zmin);
	      glEnd();
	    }

	  glPopMatrix();

	} /* if */

      /* draw caps */

      /* lower cap? */
      if(parab->zmin > 0.0)
	{
	  glPushMatrix();

	  gluQuadricOrientation(ay_gluquadobj, GLU_INSIDE);
	  glTranslated(0.0, 0.0, parab->zmin);
	  if(fabs(parab->thetamax) != 360.0)
	    {
	      glRotated(parab->thetamax-90.0, 0.0, 0.0, 1.0);
	      gluPartialDisk(ay_gluquadobj, 0.0, R[0], 8, 1, 0.0,
			     parab->thetamax);
	    }
	  else
	    {
	      gluDisk(ay_gluquadobj, 0.0, R[0], 8, 1);
	    }
	  gluQuadricOrientation(ay_gluquadobj, GLU_OUTSIDE);

	  glPopMatrix();
	}

      /* always draw upper cap */
      glPushMatrix();

       glTranslated(0.0, 0.0, parab->zmax);
       if(fabs(parab->thetamax) != 360.0)
	 {
	   glRotated(parab->thetamax-90.0, 0.0, 0.0, 1.0);
	   gluPartialDisk(ay_gluquadobj, 0.0, R[4], 8, 1, 0.0,
			  parab->thetamax);
	 }
       else
	 {
	   gluDisk(ay_gluquadobj, 0.0, R[4], 8, 1);
	 }

      glPopMatrix();
    } /* if */

 return AY_OK;
} /* ay_parab_shadecb */


/* ay_parab_drawhcb:
 *  draw handles (in an Ayam view window) callback function of parab object
 */
int
ay_parab_drawhcb(struct Togl *togl, ay_object *o)
{
 int i;
 double *pnts;
 ay_paraboloid_object *parab;

  if(!o)
    return AY_ENULL;

  parab = (ay_paraboloid_object *) o->refine;

  if(!parab->pnts)
    {
      if(!(pnts = calloc(AY_PPARAB*3, sizeof(double))))
	return AY_EOMEM;
      parab->pnts = pnts;
      ay_paraboloid_notifycb(o);
    }
  else
    {
      pnts = parab->pnts;
    }

  glColor3f((GLfloat)ay_prefs.obr, (GLfloat)ay_prefs.obg,
	    (GLfloat)ay_prefs.obb);

  glBegin(GL_POINTS);
   for(i = 0; i < AY_PPARAB; i++)
     {
       glVertex3dv((GLdouble *)pnts);
       pnts += 3;
     }
  glEnd();

  glColor3f((GLfloat)ay_prefs.ser, (GLfloat)ay_prefs.seg,
	    (GLfloat)ay_prefs.seb);

 return AY_OK;
} /* ay_parab_drawhcb */


/* ay_parab_getpntcb:
 *  get point (editing and selection) callback function of parab object
 */
int
ay_parab_getpntcb(int mode, ay_object *o, double *p, ay_pointedit *pe)
{
 ay_paraboloid_object *parab = NULL;

  if(!o)
    return AY_ENULL;

  parab = (ay_paraboloid_object *)o->refine;

  if(!parab->pnts)
    {
      if(!(parab->pnts = calloc(AY_PPARAB*3, sizeof(double))))
	return AY_EOMEM;
      ay_paraboloid_notifycb(o);
    }

 return ay_selp_getpnts(mode, o, p, pe, 1, AY_PPARAB, 3, parab->pnts);
} /* ay_parab_getpntcb */


/* ay_parab_setpropcb:
 *  set property (from Tcl to C context) callback function of parab object
 */
int
ay_parab_setpropcb(Tcl_Interp *interp, int argc, char *argv[], ay_object *o)
{
 /*int ay_status = AY_OK;*/
 char *n1 = "ParabAttrData";
 char fname[] = "parab_setprop";
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 ay_paraboloid_object *parab = NULL;
 int itemp = 0;
 double dtemp = 0.0;

  if(!o)
    return AY_ENULL;

  parab = (ay_paraboloid_object *)o->refine;

  toa = Tcl_NewStringObj(n1,-1);
  ton = Tcl_NewStringObj(n1,-1);

  Tcl_SetStringObj(ton,"Closed",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp,to, &itemp);
  parab->closed = (char)itemp;

  Tcl_SetStringObj(ton,"RMax",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetDoubleFromObj(interp,to, &parab->rmax);

  Tcl_SetStringObj(ton,"ZMin",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetDoubleFromObj(interp,to, &dtemp);
  if(dtemp >= 0.0)
    {
      parab->zmin = dtemp;
    }
  else
    {
      ay_error(AY_ERROR, fname, "ZMin must be >= 0.0!");
    }

  Tcl_SetStringObj(ton,"ZMax",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetDoubleFromObj(interp,to, &dtemp);
  if(dtemp >= 0.0)
    {
      parab->zmax = dtemp;
    }
  else
    {
      ay_error(AY_ERROR, fname, "ZMax must be >= 0.0!");
    }
  Tcl_SetStringObj(ton,"ThetaMax",-1);
  to = Tcl_ObjGetVar2(interp,toa,ton,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetDoubleFromObj(interp,to, &parab->thetamax);

  Tcl_IncrRefCount(toa);Tcl_DecrRefCount(toa);
  Tcl_IncrRefCount(ton);Tcl_DecrRefCount(ton);

  o->modified = AY_TRUE;
  ay_paraboloid_notifycb(o);
  ay_notify_parent();

 return AY_OK;
} /* ay_parab_setpropcb */


/* ay_parab_getpropcb:
 *  get property (from C to Tcl context) callback function of parab object
 */
int
ay_parab_getpropcb(Tcl_Interp *interp, int argc, char *argv[], ay_object *o)
{
 char *n1="ParabAttrData";
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 ay_paraboloid_object *parab = NULL;

  if(!o)
    return AY_ENULL;

  parab = (ay_paraboloid_object *)(o->refine);

  toa = Tcl_NewStringObj(n1,-1);
  ton = Tcl_NewStringObj(n1,-1);

  Tcl_SetStringObj(ton,"Closed",-1);
  to = Tcl_NewIntObj(parab->closed);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"RMax",-1);
  to = Tcl_NewDoubleObj(parab->rmax);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"ZMin",-1);
  to = Tcl_NewDoubleObj(parab->zmin);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"ZMax",-1);
  to = Tcl_NewDoubleObj(parab->zmax);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_SetStringObj(ton,"ThetaMax",-1);
  to = Tcl_NewDoubleObj(parab->thetamax);
  Tcl_ObjSetVar2(interp,toa,ton,to,TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  Tcl_IncrRefCount(toa);Tcl_DecrRefCount(toa);
  Tcl_IncrRefCount(ton);Tcl_DecrRefCount(ton);

 return AY_OK;
} /* ay_parab_getpropcb */


/* ay_parab_readcb:
 *  read (from scene file) callback function of parab object
 */
int
ay_parab_readcb(FILE *fileptr, ay_object *o)
{
 ay_paraboloid_object *parab = NULL;
 int itemp = 0;
 if(!o)
   return AY_ENULL;

  if(!(parab = calloc(1, sizeof(ay_paraboloid_object))))
    { return AY_EOMEM; }

  fscanf(fileptr,"%d\n",&itemp);
  parab->closed = (char)itemp;
  fscanf(fileptr,"%lg\n",&parab->rmax);
  fscanf(fileptr,"%lg\n",&parab->zmin);
  fscanf(fileptr,"%lg\n",&parab->zmax);
  fscanf(fileptr,"%lg\n",&parab->thetamax);


  o->refine = parab;

 return AY_OK;
} /* ay_parab_readcb */


/* ay_parab_writecb:
 *  write (to scene file) callback function of parab object
 */
int
ay_parab_writecb(FILE *fileptr, ay_object *o)
{
 ay_paraboloid_object *parab = NULL;

  if(!o)
    return AY_ENULL;

  parab = (ay_paraboloid_object *)(o->refine);

  fprintf(fileptr, "%d\n", (int)parab->closed);
  fprintf(fileptr, "%g\n", parab->rmax);
  fprintf(fileptr, "%g\n", parab->zmin);
  fprintf(fileptr, "%g\n", parab->zmax);
  fprintf(fileptr, "%g\n", parab->thetamax);

 return AY_OK;
} /* ay_parab_writecb */


/* ay_parab_wribcb:
 *  RIB export callback function of parab object
 *  code taken from Affine
 */
int
ay_parab_wribcb(char *file, ay_object *o)
{
 ay_paraboloid_object *paraboloid = NULL;
 RtFloat rmin = (RtFloat)0.0;
 RtPoint patch[16];
 RtFloat  Sx, Sy, B0, B3, K;

  if(!o)
   return AY_ENULL;

  paraboloid = (ay_paraboloid_object*)o->refine;

  if(!paraboloid->closed)
    {
      RiParaboloid((RtFloat)paraboloid->rmax,
		   (RtFloat)paraboloid->zmin,
		   (RtFloat)paraboloid->zmax,
		   (RtFloat)paraboloid->thetamax,
		   NULL);
    }
  else
    {

      memset(patch, 0, 16*sizeof(RtPoint));

      RiParaboloid((RtFloat)paraboloid->rmax,
		   (RtFloat)paraboloid->zmin,
		   (RtFloat)paraboloid->zmax,
		   (RtFloat)paraboloid->thetamax,
		   NULL);
      RiDisk((RtFloat)paraboloid->zmax,(RtFloat)paraboloid->rmax,
	     (RtFloat)paraboloid->thetamax, RI_NULL);


      if(paraboloid->zmin > 0.0)
	{
	  rmin = (RtFloat)sqrt(paraboloid->zmin/paraboloid->zmax);
	  RiAttributeBegin();
 	   RiReverseOrientation();
	   RiDisk((RtFloat)paraboloid->zmin,
		 rmin,
		 (RtFloat)paraboloid->thetamax, RI_NULL);
	  RiAttributeEnd();
	}

      if(fabs(paraboloid->thetamax) != 360.0)
	{
	  patch[0][2] = patch[1][2] = patch[2][2] = patch[3][2] =
	    (RtFloat)paraboloid->zmin;
	  patch[3][0] = (RtFloat) (paraboloid->zmin > 0.0 ? paraboloid->rmax *
				   rmin : 0.0);
	  patch[1][0] = (RtFloat)(patch[3][0]/3.0);
	  patch[2][0] = (RtFloat)(patch[1][0]*2.0);

	  patch[12][2] = patch[13][2] = patch[14][2] = patch[15][2] =
	    (RtFloat)paraboloid->zmax;
	  patch[15][0] = (RtFloat)paraboloid->rmax;
	  patch[13][0] = (RtFloat)(patch[15][0]/3.0);
	  patch[14][0] = (RtFloat)(patch[13][0]*2.0);

	  K = (RtFloat)(paraboloid->rmax*paraboloid->rmax);
	  B0 = (RtFloat)(patch[0][2]  - (2*paraboloid->zmin)/K);
	  B3 = (RtFloat)(patch[12][2] - 2*paraboloid->zmax);
	  K = (RtFloat)((2*paraboloid->zmax)/K);
	  Sx = (RtFloat)((B3 - B0)/( K*(rmin - paraboloid->rmax) ));
	  Sy = (RtFloat)(K*rmin * Sx + B0);

	  patch[4][2] = patch[5][2] = patch[6][2] = patch[7][2] =
	    (RtFloat)((patch[0][2] + 2*Sy)/3.0);
	  patch[7][0] = (RtFloat)((rmin + 2*Sx)/3.0);
	  patch[5][0] = (RtFloat)(patch[7][0]/3.0);
	  patch[6][0] = (RtFloat)(patch[5][0]*2.0);

	  patch[8][2] = patch[9][2] = patch[10][2] = patch[11][2] =
	    (RtFloat)((patch[12][2] + 2*Sy)/3.0);
	  patch[11][0] = (RtFloat)((paraboloid->rmax + 2*Sx)/3.0);
	  patch[9][0] = (RtFloat)(patch[11][0]/3.0);
	  patch[10][0] = (RtFloat)(patch[9][0]*2.0);

	  RiPatch(RI_BICUBIC, RI_P, (RtPointer)patch, RI_NULL);
	  RiAttributeBegin();
	   RiRotate((RtFloat)paraboloid->thetamax, (RtFloat)0.0,
		    (RtFloat)0.0, (RtFloat)1.0);
	   RiReverseOrientation();
	   RiPatch(RI_BICUBIC, RI_P, (RtPointer)patch, RI_NULL);
	  RiAttributeEnd();
	}

    } /* if */

 return AY_OK;
} /* ay_parab_wribcb */


/* ay_parab_bbccb:
 *  bounding box calculation callback function of parab object
 */
int
ay_parab_bbccb(ay_object *o, double *bbox, int *flags)
{
 double r = 0.0, zmi = 0.0, zma = 0.0;
 ay_paraboloid_object *parab = NULL;

  if(!o || !bbox || !flags)
    return AY_ENULL;

  parab = (ay_paraboloid_object *)o->refine;

  if(fabs(parab->thetamax) != 360.0)
    {
      if(!parab->pnts)
	{
	  if(!(parab->pnts = calloc(AY_PPARAB*3, sizeof(double))))
	    { return AY_EOMEM; }
	  ay_paraboloid_notifycb(o);
	}

      return ay_bbc_fromarr(parab->pnts, AY_PPARAB, 3, bbox);
    }

  r = parab->rmax;
  zmi = parab->zmin;
  zma = parab->zmax;

  /* P1 */
  bbox[0] = -r; bbox[1] = r; bbox[2] = zma;
  /* P2 */
  bbox[3] = -r; bbox[4] = -r; bbox[5] = zma;
  /* P3 */
  bbox[6] = r; bbox[7] = -r; bbox[8] = zma;
  /* P4 */
  bbox[9] = r; bbox[10] = r; bbox[11] = zma;

  /* P5 */
  bbox[12] = -r; bbox[13] = r; bbox[14] = zmi;
  /* P6 */
  bbox[15] = -r; bbox[16] = -r; bbox[17] = zmi;
  /* P7 */
  bbox[18] = r; bbox[19] = -r; bbox[20] = zmi;
  /* P8 */
  bbox[21] = r; bbox[22] = r; bbox[23] = zmi;

 return AY_OK;
} /* ay_parab_bbccb */


/* ay_paraboloid_notifycb:
 *  notification callback function of parab object
 */
int
ay_paraboloid_notifycb(ay_object *o)
{
 ay_paraboloid_object *parab;
 double *pnts;
 double zmin, zmid, zmax, rmin, rmid, rmax;
 int i, a;
 double thetadiff, angle;

  if(!o)
    return AY_ENULL;

  parab = (ay_paraboloid_object *)o->refine;

  if(parab->pnts)
    {
      pnts = parab->pnts;

      zmin = parab->zmin;
      zmax = parab->zmax;

      zmid = zmin + ((zmax - zmin) / 2.0);

      rmin = zmin>0.0?sqrt(zmin)*parab->rmax/(sqrt(parab->zmax)):0.0;
      rmid = zmid>0.0?sqrt(zmid)*parab->rmax/(sqrt(parab->zmax)):0.0;
      rmax = parab->rmax;

      pnts[2] = zmin;
      pnts[5] = zmid;
      pnts[8] = zmax;

      thetadiff = AY_D2R(parab->thetamax/8);

      /* lower ring */
      angle = 0.0;
      a = 9;
      for(i = 0; i <= 8; i++)
	{
	  pnts[a] = cos(angle)*rmin;
	  pnts[a+1] = sin(angle)*rmin;
	  pnts[a+2] = zmin;

	  a += 3;
	  angle += thetadiff;
	} /* for */

      /* middle ring */
      angle = 0.0;
      for(i = 0; i <= 8; i++)
	{
	  pnts[a] = cos(angle)*rmid;
	  pnts[a+1] = sin(angle)*rmid;
	  pnts[a+2] = zmid;
	  a += 3;
	  angle += thetadiff;
	} /* for */

      /* upper ring */
      angle = 0.0;
      for(i = 0; i <= 8; i++)
	{
	  pnts[a] = cos(angle)*rmax;
	  pnts[a+1] = sin(angle)*rmax;
	  pnts[a+2] = zmax;

	  a += 3;
	  angle += thetadiff;
	} /* for */
    } /* if */

 return AY_OK;
} /* ay_paraboloid_notifycb */


/* ay_parab_providecb:
 *  provide callback function of parab object
 */
int
ay_paraboloid_providecb(ay_object *o, unsigned int type, ay_object **result)
{
 int ay_status = AY_OK;
 int stride = 4, i, j, k, height;
 double z = 0.0, r = 0.0, *cv = NULL, *vk = NULL, *controlv = NULL;
 double K, B0, B3, Sx, Sy;
 double zaxis[3] = {0.0, 0.0, 1.0}, quat[4] = {0};
 ay_paraboloid_object *paraboloid = NULL;
 ay_disk_object disk = {0};
 ay_object *new = NULL, *newp = NULL, d = {0}, **n = NULL;
 ay_nurbpatch_object *np = NULL;

  if(!o)
    return AY_ENULL;

  if(!result)
    {
      if(type == AY_IDNPATCH)
	return AY_OK;
      else
	return AY_ERROR;
    }

  paraboloid = (ay_paraboloid_object *) o->refine;

  if(type == AY_IDNPATCH)
    {
      if(paraboloid->zmin > 0.0)
	r = sqrt(paraboloid->zmin/paraboloid->zmax);
      K  = paraboloid->rmax * paraboloid->rmax;
      B0 = paraboloid->zmin  - ((2 * paraboloid->zmin) / K);
      B3 = paraboloid->zmax - (2 * paraboloid->zmax);
      K  = (2 * paraboloid->zmax) / K;
      Sx = (B3 - B0) / (K * (r - paraboloid->rmax));
      Sy = (K * r * Sx + B0);

      if(paraboloid->thetamax < 0.0)
	{
	  ay_status = ay_nb_CreateNurbsCircleArc(paraboloid->rmax,
						 paraboloid->thetamax, 0.0,
						 &height, &vk, &cv);
	}
      else
	{
	  ay_status = ay_nb_CreateNurbsCircleArc(paraboloid->rmax,
						 0.0, paraboloid->thetamax,
						 &height, &vk, &cv);
	} /* if */

      if(ay_status)
	goto cleanup;

      if(!(controlv = calloc(1, height*4*stride*sizeof(double))))
	{
	  ay_status = AY_EOMEM;
	  goto cleanup;
	}

      memcpy(&(controlv[3*height*stride]), cv, height*stride*sizeof(double));

      free(vk); free(cv);
      vk = NULL; cv = NULL;

      j = (3*height*stride) + 2;
      for(i = 0; i < height; i++)
	{
	  controlv[j] = paraboloid->zmax;
	  j += stride;
	}

      if(paraboloid->zmin > 0.0)
	{
	  if(paraboloid->thetamax < 0.0)
	    {
	      ay_status = ay_nb_CreateNurbsCircleArc(r,
						     paraboloid->thetamax, 0.0,
						     &height, &vk, &cv);
	    }
	  else
	    {
	      ay_status = ay_nb_CreateNurbsCircleArc(r,
						     0.0, paraboloid->thetamax,
						     &height, &vk, &cv);
	    } /* if */

	  if(ay_status)
	    goto cleanup;

	  memcpy(controlv, cv, height*stride*sizeof(double));
	  free(vk); free(cv);
	  vk = NULL; cv = NULL;

	  j = 2;
	  for(i = 0; i < height; i++)
	    {
	      controlv[j] = paraboloid->zmin;
	      j += stride;
	    }

	}
      else
	{
	  j = 3;
	  for(i = 0; i < height; i++)
	    {
	      controlv[j] = controlv[j+height*3*stride];
	      j += stride;
	    }
	} /* if */

      r = (r + 2*Sx)/3.0;
      if(paraboloid->thetamax < 0.0)
	{
	  ay_status = ay_nb_CreateNurbsCircleArc(r,
						 paraboloid->thetamax, 0.0,
						 &height, &vk, &cv);
	}
      else
	{
	  ay_status = ay_nb_CreateNurbsCircleArc(r,
						 0.0, paraboloid->thetamax,
						 &height, &vk, &cv);
	} /* if */

      if(ay_status)
	goto cleanup;

      memcpy(&(controlv[height*stride]), cv, height*stride*sizeof(double));
      free(vk); free(cv);
      vk = NULL; cv = NULL;
      z = ((paraboloid->zmin + 2*Sy)/3.0);
      j = (height*stride) + 2;
      for(i = 0; i < height; i++)
	{
	  controlv[j] = z;
	  j += stride;
	}

      r = (paraboloid->rmax + 2*Sx)/3.0;
      if(paraboloid->thetamax < 0.0)
	{
	  ay_status = ay_nb_CreateNurbsCircleArc(r,
						 paraboloid->thetamax, 0.0,
						 &height, &vk, &cv);
	}
      else
	{
	  ay_status = ay_nb_CreateNurbsCircleArc(r,
						 0.0, paraboloid->thetamax,
						 &height, &vk, &cv);
	} /* if */

      if(ay_status)
	goto cleanup;

      memcpy(&(controlv[2*height*stride]), cv, height*stride*sizeof(double));

      z = ((paraboloid->zmax + 2*Sy)/3.0);
      j = (2*height*stride) + 2;
      for(i = 0; i < height; i++)
	{
	  controlv[j] = z;
	  j += stride;
	}


      ay_status = ay_npt_create(4, 3, 4, height, AY_KTBEZIER, AY_KTCUSTOM,
				controlv, NULL, vk, &np);

      if(ay_status)
	goto cleanup;


      if((ay_status = ay_npt_createnpatchobject(&new)))
	goto cleanup;

      ay_trafo_copy(o, new);
      new->down = ay_endlevel;

      new->refine = np;

      if(paraboloid->closed)
	{
	  /* create caps */
	  n = &(new->next);
	  ay_object_defaults(&d);
	  ay_trafo_copy(o, &d);
	  d.type = AY_IDDISK;
	  d.refine = &disk;
	  disk.thetamax = paraboloid->thetamax;
	  if(paraboloid->zmin > 0.0)
	    {
	      disk.radius = sqrt(paraboloid->zmin/paraboloid->zmax);
	      disk.height = paraboloid->zmin;
	      ay_provide_object(&d, AY_IDNPATCH, n);
	    } /* if */

	  if(*n)
	    {
	      n = &((*n)->next);
	    } /* if */

	  disk.radius = paraboloid->rmax;
	  disk.height = paraboloid->zmax;
	  ay_provide_object(&d, AY_IDNPATCH, n);
	  if(*n)
	    {
	      n = &((*n)->next);
	    } /* if */

	  if(fabs(paraboloid->thetamax) != 360.0)
	    {
	      if((ay_status = ay_npt_createnpatchobject(&newp)))
		goto cleanup;
	      ay_trafo_copy(o, newp);
	      newp->down = ay_endlevel;

	      controlv = NULL;
	      if(!(controlv = calloc(4*4*stride, sizeof(double))))
		{
		  ay_status = AY_EOMEM;
		  goto cleanup;
		}
	      /* copy first column from patch */
	      j = 0; k = 0;
	      for(i = 0; i < 4; i++)
		{
		  memcpy(&(controlv[j*stride]), &(np->controlv[k*stride]),
			 3*sizeof(double));
		  j += 4;
		  k += height;
		}
	      /* set missing z values */
	      for(i = 0; i < 4; i++)
		for(j = 1; j < 4; j++)
		  controlv[(i*4+j)*stride+2] = controlv[i*4*stride+2];
	      /* set missing x values */
	      j = 2;
	      for(i = 0; i < 4; i++)
		{
		  controlv[(i*4+j)*stride] = controlv[(i*4)*stride]/3.0;
		  controlv[(i*4+j-1)*stride] = controlv[(i*4+j)*stride]*2.0;
		}
	      /* set all weights to 1.0 */
	      for(i = 0; i < 16; i++)
		{
		  controlv[i*stride+3] = 1.0;
		}

	      np = NULL;
	      ay_status = ay_npt_create(4, 4, 4, 4, AY_KTBEZIER, AY_KTBEZIER,
					controlv, NULL, NULL, &np);
	      if(ay_status)
		goto cleanup;

	      newp->refine = np;

	      *n = newp;
	      n = &((*n)->next);

	      ay_status = ay_object_copy(newp, n);
	      if(ay_status)
		{
		  newp = NULL;
		  goto cleanup;
		}
	      /*
		XXXX instead of rotating all the patch data, just
		copy the last column from the paraboloid surface
		instead?
	      */
	      ay_trafo_defaults(*n);
	      ay_quat_axistoquat(zaxis, -AY_D2R(paraboloid->thetamax), quat);
	      (*n)->rotz += paraboloid->thetamax;
	      ay_quat_add((*n)->quat, quat, (*n)->quat);

	      ay_npt_applytrafo(*n);
	      ay_trafo_copy(o, *n);

	      newp = NULL;
	    } /* if */
	} /* if */

      /* copy eventually present TP tags */
      (void)ay_npt_copytptag(o, new);

      /* return result */
      *result = new;

      /* prevent cleanup code from doing something harmful */
      vk = NULL; controlv = NULL; np = NULL; new = NULL;
    } /* if */

cleanup:

  if(cv)
    free(cv);

  if(vk)
    free(vk);

  if(controlv)
    free(controlv);

  if(np)
    free(np);

  if(new)
    {
      (void)ay_object_deletemulti(new);
    }

  if(newp)
    {
      (void)ay_object_deletemulti(newp);
    }

 return ay_status;
} /* ay_paraboloid_providecb */


/* ay_parab_convertcb:
 *  convert callback function of parab object
 */
int
ay_paraboloid_convertcb(ay_object *o, int in_place)
{
 int ay_status = AY_OK;
 ay_object *new = NULL, *t;
 ay_paraboloid_object *paraboloid = NULL;

  if(!o)
    return AY_ENULL;

  paraboloid = (ay_paraboloid_object *) o->refine;

  /* first, create new object(s) */

  if(paraboloid->closed)
    {
      if(!(new = calloc(1, sizeof(ay_object))))
	{ return AY_EOMEM; }

      ay_object_defaults(new);
      new->type = AY_IDLEVEL;
      new->parent = AY_TRUE;
      new->inherit_trafos = AY_TRUE;

      if(!(new->refine = calloc(1, sizeof(ay_level_object))))
	{ free(new); return AY_EOMEM; }

      ((ay_level_object *)(new->refine))->type = AY_LTLEVEL;

      ay_status = ay_paraboloid_providecb(o, AY_IDNPATCH, &new->down);
      if(ay_status)
	{ free(new->refine); free(new); return ay_status; }

      t = new->down;
      while(t->next)
	{
	  t = t->next;
	}
      t->next = ay_endlevel;
    }
  else
    {
      ay_status = ay_paraboloid_providecb(o, AY_IDNPATCH, &new);
    }


  /* second, link new object(s), or replace old object with it/them */

  if(new)
    {
      if(!in_place)
	{
	  ay_object_link(new);
	}
      else
	{
	  ay_object_replace(new, o);
	} /* if */
    } /* if */

 return ay_status;
} /* ay_paraboloid_convertcb */


/* ay_parab_init:
 *  initialize the parab object module
 */
int
ay_parab_init(Tcl_Interp *interp)
{
 int ay_status = AY_OK;

  ay_status = ay_otype_registercore(ay_parab_name,
				    ay_parab_createcb,
				    ay_parab_deletecb,
				    ay_parab_copycb,
				    ay_parab_drawcb,
				    ay_parab_drawhcb,
				    ay_parab_shadecb,
				    ay_parab_setpropcb,
				    ay_parab_getpropcb,
				    ay_parab_getpntcb,
				    ay_parab_readcb,
				    ay_parab_writecb,
				    ay_parab_wribcb,
				    ay_parab_bbccb,
				    AY_IDPARABOLOID);

  ay_status = ay_notify_register(ay_paraboloid_notifycb, AY_IDPARABOLOID);

  ay_status = ay_convert_register(ay_paraboloid_convertcb, AY_IDPARABOLOID);

  ay_status = ay_provide_register(ay_paraboloid_providecb, AY_IDPARABOLOID);

 return ay_status;
} /* ay_parab_init */

