#ifndef __nurbs_h__
#define __nurbs_h__
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

/* nurbs.h - nurbs prototypes */

/* act.c */

/*! \brief
 */
int ay_act_leastSquares(double *Q, int m, int n, int p,
			double **U, double **P);

/*! \brief
 */
int ay_act_leastSquaresClosed(double *Q, int m, int n, int p,
			      double **U, double **P);

/*! \brief
 */
int ay_act_resize(ay_acurve_object *curve, int new_length);

/*! \brief
 */
int ay_act_revert(ay_acurve_object *curve);

/*! \brief
 */
int ay_act_getpntfromindex(ay_acurve_object *curve, int index, double **p);


/* capt.c */

/*! \brief
 */
int ay_capt_createfromcurve(ay_object *c, ay_object **cap);

/*! \brief
 */
int ay_capt_createfromnpcurve(ay_object *c, ay_object **cap);


/* ict.c */

/*! \brief
 */
int ay_ict_interpolateC2C(int length, double iparam, int knot_type,
			  int have_end_derivs, double *sderiv, double *ederiv,
			  double *controlv,
			  ay_nurbcurve_object **c);

/*! \brief
 */
int ay_ict_interpolateC2CClosed(int length, double iparam, int knot_type,
			   int have_end_derivs, double *sderiv, double *ederiv,
			       double *controlv,
			       ay_nurbcurve_object **c);



/*! \brief
 */
int ay_ict_interpolateG3D(int iorder, int length, int iparam,
			  int have_end_derivs, int knot_type,
			  double *controlv, double *sderiv, double *ederiv,
			  ay_nurbcurve_object **c);

/*! \brief
 */
int ay_ict_interpolateG3DClosed(int iorder, int length, double iparam,
				int have_end_derivs, int knot_type,
				double *controlv,
				double *sderiv, double *ederiv,
				ay_nurbcurve_object **c);

/*! \brief
 */
int ay_ict_resize(ay_icurve_object *curve, int new_length);

/*! \brief
 */
int ay_ict_revert(ay_icurve_object *curve);

/*! \brief
 */
int ay_ict_getpntfromindex(ay_icurve_object *curve, int index, double **p);


/* knots.c */

/*! \brief
 */
int ay_knots_createnp(ay_nurbpatch_object *patch);

/*! \brief
 */
int ay_knots_createnc(ay_nurbcurve_object *curve);

/*! \brief
 */
int ay_knots_check(int length, int order, int knot_count, double *knotv);

/*! \brief
 */
int ay_knots_rescaletorange(int n, double *knotv, double rmin, double rmax);

/*! \brief
 */
int ay_knots_rescaletomindist(int n, double *knotv, double mindist);

/*! \brief
 */
int ay_knots_unify(double *Ua, int Ualen, double *Ub, int Ublen,
		   double **Ubar, int *Ubarlen);

/*! \brief
 */
int ay_knots_mergenc(ay_nurbcurve_object *curve, double *Ubar, int Ubarlen);

/*! \brief
 */
int ay_knots_mergenp(ay_nurbpatch_object *patch,
		     double *Ubar, int Ubarlen, double *Vbar, int Vbarlen);

/*! \brief
 */
int ay_knots_getuminmax(ay_object *o, int order, int knots, double *knotv,
			double *umin, double *umax);

/*! \brief
 */
int ay_knots_getvminmax(ay_object *o, int order, int knots, double *knotv,
			double *vmin, double *vmax);

/*! \brief
 */
int ay_knots_setuminmax(ay_object *o, double umin, double umax);

/*! \brief
 */
int ay_knots_setvminmax(ay_object *o, double vmin, double vmax);

/*! \brief
 */
int ay_knots_coarsen(int order, int knotvlen, double *knotv, int count,
		     double **newknotv);

/*! \brief
 */
int ay_knots_chordparam(double *Q, int Qlen, int stride, double **U);

/*! \brief
 */
int ay_knots_centriparam(double *Q, int Qlen, int stride, double **U);

/*! \brief
 */
int ay_knots_init(Tcl_Interp *interp);


/* nb.c */

/*! \brief
 */
int ay_nb_LUDecompose(int n, double *A, int *pivot);

/*! \brief
 */
int ay_nb_LUInvert(int n, double *inv, int *pivot);

/*! \brief
 */
int ay_nb_GlobalInterpolation4D(int n, double *Q, double *ub, double *Uc,
				int d);

/*! \brief
 */
int ay_nb_GlobalInterpolation4DD(int n, double *Q, double *ub, double *Uc,
				 int d, double *D1, double *D2);

/*! \brief
 */
int ay_nb_CurveRemoveKnot4D(int n, int p, double *U, double *Pw, double tol,
			    int r, int s, int num, double *Ubar, double *Qw);

/*! \brief
 */
void ay_nb_Bin(int maxn, int maxk, double *bin);

/*! \brief
 */
int ay_nb_DegreeElevateCurve(int stride, int n, int p, double *U, double *Pw,
			     int t, int *nh, double *Uh, double *Qw);

/*! \brief
 */
int ay_nb_SolveTridiagonal(int n, double *Q, double *U, double *P);

/*! \brief
 */
int ay_nb_CurveInsertKnot4D(int np, int p, double *UP, double *Pw, double u,
			    int k, int s, int r, int *nq, double *UQ,
			    double *Qw);

/*! \brief
 */
int ay_nb_CurveInsertKnot3D(int np, int p, double *UP, double *P, double u,
			    int k, int s, int r, int *nq, double *UQ,
			    double *Q);

/*! \brief
 */
int ay_nb_FindSpan(int n, int p, double u, double *U);

/*! \brief
 */
int ay_nb_FindSpanMult(int n, int p, double u, double *U, int *s);

/*! \brief
 */
void ay_nb_BasisFuns(int i, double u, int p, double *U, double *N);

/*! \brief
 */
int ay_nb_CurvePoint4D(int n, int p, double *U, double *Pw, double u,
		       double *C);

/*! \brief
 */
int ay_nb_CurvePoint3D(int n, int p, double *U, double *P, double u,
		       double *C);

/*! \brief
 */
int ay_nb_SurfacePoint4D(int n, int m, int p, int q, double *U, double *V,
			 double *Pw, double u, double v, double *C);

/*! \brief
 */
int ay_nb_SurfacePoint3D(int n, int m, int p, int q, double *U, double *V,
			 double *P, double u, double v, double *C);

/*! \brief
 */
void ay_nb_DersBasisFuns(int i, double u, int p, int n, double *U,
			 double *ders);

/*! \brief
 */
void ay_nb_ComputeFirstDer3D(int n, int p, double *U, double *P, double u,
			     double *C1);

/*! \brief
 */
void ay_nb_ComputeSecDer3D(int n, int p, double *U, double *P, double u,
			   double *C2);

/*! \brief
 */
void ay_nb_ComputeFirstDer4D(int n, int p, double *U, double *Pw, double u,
			     double *C1);

/*! \brief
 */
void ay_nb_ComputeSecDer4D(int n, int p, double *U, double *Pw, double u,
			   double *C2);

/*! \brief
 */
void ay_nb_CompFirstDerSurf4D(int n, int m, int p, int q, double *U, double *V,
			      double *Pw, double u, double v, double *C);

/*! \brief
 */
void ay_nb_CompFirstDerSurf3D(int n, int m, int p, int q, double *U, double *V,
			      double *P, double u, double v, double *C);

/*! \brief
 */
int ay_nb_CreateNurbsCircleArc(double r, double ths, double the,
			       int *length, double **knotv, double **controlv);

/*! \brief
 */
void ay_nb_RefineKnotVectCurve(int stride, int n, int p, double *U, double *Pw,
			       double *X, int r, double *Ubar, double *Qw);

/*! \brief
 */
int ay_nb_DegreeElevateSurfU(int stride, int w, int h, int p, double *U,
			     double *Pw, int t,
			     int *nw, double *Uh, double *Qw);

/*! \brief
 */
int ay_nb_DegreeElevateSurfV(int stride, int w, int h, int p, double *V,
			     double *Pw, int t,
			     int *nh, double *Vh, double *Qw);

/*! \brief
 */
int ay_nb_RefineKnotVectSurfU(int stride, int w, int h, int p, double *U,
			      double *Pw, double *X, int r,
			      double *Ubar, double *Qw);

/*! \brief
 */
int ay_nb_RefineKnotVectSurfV(int stride, int w, int h, int p, double *V,
			      double *Pw, double *X, int r,
			      double *Vbar, double *Qw);

/*! \brief
 */
int ay_nb_DecomposeCurve(int stride, int n, int p, double *U, double *Pw,
			 int *nb, double **Qw);

/*! \brief
 */
int ay_nb_InsertKnotSurfU(int stride, int w, int h, int p, double *UP,
			  double *Pw,
			  double u, int k, int s, int r,
			  double *UQ, double *Qw);

/*! \brief
 */
int ay_nb_InsertKnotSurfV(int stride, int w, int h, int q, double *VP,
			  double *Pw,
			  double v, int k, int s, int r,
			  double *VQ, double *Qw);


/* nct.c */

/*! \brief
 */
int ay_nct_create(int order, int length, int knot_type,
		  double *controlv, double *knotv,
		  ay_nurbcurve_object **curveptr);

/*! \brief
 */
int ay_nct_destroy(ay_nurbcurve_object *curve);

/*! \brief
 */
void ay_nct_clearmp(ay_nurbcurve_object *c);

/*! \brief
 */
int ay_nct_recreatemp(ay_nurbcurve_object *c);

/*! \brief
 */
int ay_nct_collapseselp(ay_object *o);

/*! \brief
 */
int ay_nct_explodemp(ay_object *o);

/*! \brief
 */
int ay_nct_resize(ay_nurbcurve_object *curve, int new_length);

/*! \brief
 */
int ay_nct_close(ay_nurbcurve_object *curve);

/*! \brief
 */
int ay_nct_revert(ay_nurbcurve_object *curve);

/*! \brief
 */
int ay_nct_refine(ay_nurbcurve_object *curve, double *newknotv,
		  int newknotvlen);

/*! \brief
 */
int ay_nct_refinetcmd(ClientData clientData, Tcl_Interp *interp,
		      int argc, char *argv[]);

/*! \brief
 */
int ay_nct_clamp(ay_nurbcurve_object *curve);

/*! \brief
 */
int ay_nct_clamptcmd(ClientData clientData, Tcl_Interp *interp,
		     int argc, char *argv[]);

/*! \brief
 */
int ay_nct_elevate(ay_nurbcurve_object *curve, int new_order);

/*! \brief
 */
int ay_nct_elevatetcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);

/*! \brief
 */
int ay_nct_insertkntcmd(ClientData clientData, Tcl_Interp *interp,
			int argc, char *argv[]);

/*! \brief
 */
int ay_nct_collapsetcmd(ClientData clientData, Tcl_Interp *interp,
			int argc, char *argv[]);

/*! \brief
 */
int ay_nct_explodetcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);

/*! \brief
 */
int ay_nct_findu(struct Togl *togl, ay_object *o,
		 double *winX, double *winY, double *u);

/*! \brief
 */
int ay_nct_finducb(struct Togl *togl, int argc, char *argv[]);

/*! \brief
 */
int ay_nct_split(ay_object *src, double u, ay_object **result);

/*! \brief
 */
int ay_nct_splittcmd(ClientData clientData, Tcl_Interp *interp,
		     int argc, char *argv[]);

/*! \brief
 */
int ay_nct_concattcmd(ClientData clientData, Tcl_Interp *interp,
		      int argc, char *argv[]);

/*! \brief
 */
int ay_nct_crtncircle(double radius, ay_nurbcurve_object **curve);

/*! \brief
 */
int ay_nct_crtncirclearc(double radius, double arc,
			 ay_nurbcurve_object **curve);

/*! \brief
 */
int ay_nct_crtnhcircle(double radius, ay_nurbcurve_object **curve);

/*! \brief
 */
int ay_nct_crtncircletcmd(ClientData clientData, Tcl_Interp *interp,
			  int argc, char *argv[]);

/*! \brief
 */
int ay_nct_crtrecttcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);

/*! \brief
 */
int ay_nct_crtcircbsp(int sections, double radius, double arc, int order,
		      ay_nurbcurve_object **result);

/*! \brief
 */
int ay_nct_crtclosedbsptcmd(ClientData clientData, Tcl_Interp *interp,
			    int argc, char *argv[]);

/*! \brief
 */
int ay_nct_getorientation(ay_nurbcurve_object *curve, double *oangle);

/*! \brief
 */
int ay_nct_isclosed(ay_nurbcurve_object *nc);

/*! \brief
 */
int ay_nct_settype(ay_nurbcurve_object *nc);

/*! \brief
 */
int ay_nct_applytrafo(ay_object *c);

/*! \brief
 */
int ay_nct_getpntfromindex(ay_nurbcurve_object *curve, int index, double **p);

/*! \brief
 */
int ay_nct_concatmultiple(int closed, int knot_type, int fillgaps,
			  ay_object *curves,
			  ay_object **result);

/*! \brief
 */
int ay_nct_fillgap(int order, double tanlen,
		   ay_nurbcurve_object *c1, ay_nurbcurve_object *c2,
		   ay_object **result);

/*! \brief
 */
int ay_nct_fillgaps(int closed, int order, double tanlen, ay_object *curves);

/*! \brief
 */
int ay_nct_arrange(ay_object *o, ay_object *t, int rotate);

/*! \brief
 */
int ay_nct_addinternalcps(ay_object *curve, int where);

/*! \brief
 */
int ay_nct_rescaleknvtcmd(ClientData clientData, Tcl_Interp *interp,
			  int argc, char *argv[]);

/*! \brief
 */
double ay_nct_getcurvature(ay_nurbcurve_object *c, double t);

/*! \brief
 */
int ay_nct_curvplottcmd(ClientData clientData, Tcl_Interp *interp,
			int argc, char *argv[]);

/*! \brief
 */
int ay_nct_intersect(ay_nurbcurve_object *cu, ay_nurbcurve_object *cv,
		     double *intersection);

/*! \brief
 */
int ay_nct_intersectca(ay_object *cu, ay_object *cv, double *intersections);

/*! \brief
 */
int ay_nct_makecompatible(ay_object *curves);

/*! \brief
 */
int ay_nct_shiftcbs(ay_nurbcurve_object *curve);

/*! \brief
 */
int ay_nct_shiftcbstcmd(ClientData clientData, Tcl_Interp *interp,
		     int argc, char *argv[]);

/*! \brief
 */
int ay_nct_toxy(ay_object *c);

/*! \brief
 */
int ay_nct_toxytcmd(ClientData clientData, Tcl_Interp *interp,
		    int argc, char *argv[]);

/*! \brief
 */
int ay_nct_makecomptcmd(ClientData clientData, Tcl_Interp *interp,
			int argc, char *argv[]);

/*! \brief
 */
void ay_nct_findufrompoint(ay_nurbcurve_object *curve, double *point,
			   double guess, int max_try, double e1, double e2,
			   double *u);

/*! \brief
 */
int ay_nct_israt(ay_nurbcurve_object *curve);

/*! \brief
 */
int ay_nct_center(int mode, ay_nurbcurve_object *curve);

/*! \brief
 */
int ay_nct_centertcmd(ClientData clientData, Tcl_Interp *interp,
		      int argc, char *argv[]);

/*! \brief
 */
int ay_nct_coarsen(ay_nurbcurve_object *curve);

/*! \brief
 */
int ay_nct_coarsentcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);

/*! \brief
 */
int ay_nct_removekntcmd(ClientData clientData, Tcl_Interp *interp,
			int argc, char *argv[]);

/*! \brief
 */
int ay_nct_trimtcmd(ClientData clientData, Tcl_Interp *interp,
		int argc, char *argv[]);

/*! \brief
 */
int ay_nct_trim(ay_nurbcurve_object **curve, double umin, double umax);

/*! \brief
 */
int ay_nct_isdegen(ay_nurbcurve_object *curve);

/*! \brief
 */
int ay_nct_offset(ay_object *o, int mode, double offset,
		  ay_nurbcurve_object **nc);

/*! \brief
 */
int ay_nct_cmppnt(const void *p1, const void *p2);

/*! \brief
 */
int ay_nct_estlen(ay_nurbcurve_object *nc, double *len);

/*! \brief
 */
int ay_nct_estlentcmd(ClientData clientData, Tcl_Interp *interp,
		      int argc, char *argv[]);

/*! \brief
 */
int ay_nct_reparamtcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);


/* npt.c */

/*! \brief
 */
int ay_npt_create(int uorder, int vorder, int width, int height,
		  int uknot_type, int vknot_type,
		  double *controlv, double *uknotv, double *vknotv,
		  ay_nurbpatch_object **patchptr);

/*! \brief
 */
int ay_npt_destroy(ay_nurbpatch_object *patch);

/*! \brief
 */
int ay_npt_createnpatchobject(ay_object **result);

/*! \brief
 */
int ay_npt_resizearrayw(double **controlvptr, int stride,
			int width, int height, int new_width);

/*! \brief
 */
int ay_npt_resizew(ay_nurbpatch_object *np, int new_width);

/*! \brief
 */
int ay_npt_resizearrayh(double **controlvptr, int stride,
			int width, int height, int new_height);

/*! \brief
 */
int ay_npt_resizeh(ay_nurbpatch_object *np, int new_height);

/*! \brief
 */
int ay_npt_revertu(ay_nurbpatch_object *np);

/*! \brief
 */
int ay_npt_revertutcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);

/*! \brief
 */
int ay_npt_revertv(ay_nurbpatch_object *np);

/*! \brief
 */
int ay_npt_revertvtcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);

/*! \brief
 */
int ay_npt_swaparray(double **controlvptr, int stride,
		     int width, int height);

/*! \brief
 */
int ay_npt_swapuv(ay_nurbpatch_object *np);

/*! \brief
 */
int ay_npt_drawtrimcurve(struct Togl *togl, ay_object *o, GLUnurbsObj *no);

/*! \brief
 */
int ay_npt_wribtrimcurves(ay_object *o);

/*! \brief
 */
int ay_npt_crtcobbsphere(ay_nurbpatch_object **cobbsphere);

/*! \brief
 */
int ay_npt_crtnsphere(double radius, ay_nurbpatch_object **nsphere);

/*! \brief
 */
int ay_npt_crtnspheretcmd(ClientData clientData, Tcl_Interp *interp,
			  int argc, char *argv[]);

/*! \brief
 */
int ay_npt_crtnsphere2tcmd(ClientData clientData, Tcl_Interp *interp,
			   int argc, char *argv[]);

/*! \brief
 */
int ay_npt_splittocurvestcmd(ClientData clientData, Tcl_Interp *interp,
			     int argc, char *argv[]);

/*! \brief
 */
int ay_npt_buildfromcurvestcmd(ClientData clientData, Tcl_Interp *interp,
			       int argc, char *argv[]);

/*! \brief
 */
int ay_npt_revolve(ay_object *o, double arc, int sections, int order,
		   ay_nurbpatch_object **revolution);

/*! \brief
 */
int ay_npt_swing(ay_object *o1, ay_object *o2,
		 ay_nurbpatch_object **swing);

/*! \brief
 */
int ay_npt_sweep(ay_object *o1, ay_object *o2, ay_object *o3, int sections,
		 int rotate, int closed, ay_nurbpatch_object **sweep,
		 int has_start_cap, ay_object **start_cap,
		 int has_end_cap, ay_object **end_cap);

/*! \brief
 */
int ay_npt_closedsweep(ay_object *o1, ay_object *o2, ay_object *o3,
		       int sections, int rotate,
		       ay_nurbpatch_object **closedsweep);

/*! \brief
 */
int ay_npt_birail1(ay_object *o1, ay_object *o2, ay_object *o3, int sections,
		   int closed, ay_nurbpatch_object **birail1,
		   int has_start_cap, ay_object **start_cap,
		   int has_end_cap, ay_object **end_cap);

/*! \brief
 */
int ay_npt_birail2(ay_object *o1, ay_object *o2, ay_object *o3, ay_object *o4,
		   ay_object *o5,
		   int sections, int closed, int fullinterpolctrl,
		   ay_nurbpatch_object **birail2,
		   int has_start_cap, ay_object **start_cap,
		   int has_end_cap, ay_object **end_cap);

/*! \brief
 */
int ay_npt_interpolateu(ay_nurbpatch_object *np, int order);

/*! \brief
 */
int ay_npt_interpolatev(ay_nurbpatch_object *np, int order);

/*! \brief
 */
int ay_npt_skinu(ay_object *curves, int order, int knot_type,
		 int interpolate, ay_nurbpatch_object **skin);

/*! \brief
 */
int ay_npt_skinv(ay_object *curves, int order, int knot_type,
		 int interpolate, ay_nurbpatch_object **skin);

/*! \brief
 */
int ay_npt_extrude(double height, ay_object *o,
		   ay_nurbpatch_object **extrusion);

/*! \brief
 */
int ay_npt_gettangentfromcontrol2D(int ctype, int n, int p, int stride,
				   double *P, int a, double *T);

/*! \brief
 */
int ay_npt_getnormalfromcontrol3D(int ctype, int n, int p,
				  int stride, double *P, int a, double *N);

/*! \brief
 */
int ay_npt_bevel(int type, double radius, int align, ay_object *o,
		 ay_nurbpatch_object **bevel);

/*! \brief
 */
int ay_npt_createcap(double z, ay_nurbcurve_object *curve,
		     double *ominx, double *omaxx,
		     double *ominy, double *omaxy, double *oangle,
		     ay_nurbpatch_object **cap);

/*! \brief
 */
int ay_npt_applytrafo(ay_object *p);

/*! \brief
 */
int ay_npt_getpntfromindex(ay_nurbpatch_object *patch, int indexu, int indexv,
			   double **p);

/*! \brief
 */
int ay_npt_elevateu(ay_nurbpatch_object *patch, int t);

/*! \brief
 */
int ay_npt_elevateutcmd(ClientData clientData, Tcl_Interp *interp,
			int argc, char *argv[]);

/*! \brief
 */
int ay_npt_elevatev(ay_nurbpatch_object *patch, int t);

/*! \brief
 */
int ay_npt_elevatevtcmd(ClientData clientData, Tcl_Interp *interp,
			int argc, char *argv[]);

/*! \brief
 */
int ay_npt_swapuvtcmd(ClientData clientData, Tcl_Interp *interp,
		      int argc, char *argv[]);

/*! \brief
 */
int ay_npt_gordon(ay_object *cu, ay_object *cv, ay_object *in,
		  int uorder, int vorder,
		  ay_nurbpatch_object **gordon);

/*! \brief
 */
int ay_npt_gordonmodw(ay_object *o1, ay_object *o2);

/*! \brief
 */
int ay_npt_gordoncc(ay_object *o1, ay_object *o2, int stride,
		    double *p1, double *p2, double *pp1, double *pp2,
		    double *m1, double *m2);

/*! \brief
 */
int ay_npt_gordonwc(ay_object *g);

/*! \brief
 */
int ay_npt_extractboundary(ay_object *o, int apply_trafo,
			   ay_nurbcurve_object **result);

/*! \brief
 */
int ay_npt_extractmiddlepoint(double *cv, int width, int height, int stride,
			      int index, int side,
			      double *result);

/*! \brief
 */
int ay_npt_extractnc(ay_object *npatch, int side, double param, int relative,
		     int apply_trafo,
		     ay_nurbcurve_object **result);

/*! \brief
 */
int ay_npt_israt(ay_nurbpatch_object *np);

/*! \brief
 */
int ay_npt_isboundcurve(ay_object *o,
			double b1, double b2, double b3, double b4,
			int *result);

/*! \brief
 */
int ay_npt_istrimmed(ay_object *o, int mode);

/*! \brief
 */
int ay_npt_closeu(ay_nurbpatch_object *np);

/*! \brief
 */
int ay_npt_closeutcmd(ClientData clientData, Tcl_Interp *interp,
		      int argc, char *argv[]);

/*! \brief
 */
int ay_npt_closev(ay_nurbpatch_object *np);

/*! \brief
 */
int ay_npt_closevtcmd(ClientData clientData, Tcl_Interp *interp,
		      int argc, char *argv[]);

/*! \brief
 */
void ay_npt_clearmp(ay_nurbpatch_object *np);

/*! \brief
 */
int ay_npt_recreatemp(ay_nurbpatch_object *np);

/*! \brief
 */
int ay_npt_collapseselp(ay_object *o);

/*! \brief
 */
int ay_npt_explodemp(ay_object *o);

/*! \brief
 */
int ay_npt_getbeveltags(ay_object *o, int place,
			int *has_bevel, int *type, double *radius, int *sense);

/*! \brief
 */
int ay_npt_copytptag(ay_object *src, ay_object *dst);

/*! \brief
 */
int ay_npt_clampu(ay_nurbpatch_object *np);

/*! \brief
 */
int ay_npt_clampv(ay_nurbpatch_object *np);

/*! \brief
 */
int ay_npt_clamputcmd(ClientData clientData, Tcl_Interp *interp,
		      int argc, char *argv[]);

/*! \brief
 */
int ay_npt_clampvtcmd(ClientData clientData, Tcl_Interp *interp,
		      int argc, char *argv[]);

/*! \brief
 */
int ay_npt_rescaletrims(ay_object *trim,
			int mode, double omin, double omax,
			double nmin, double nmax);

/*! \brief
 */
int ay_npt_rescaleknvnptcmd(ClientData clientData, Tcl_Interp *interp,
			    int argc, char *argv[]);

/*! \brief
 */
int ay_npt_insertknutcmd(ClientData clientData, Tcl_Interp *interp,
			 int argc, char *argv[]);

/*! \brief
 */
int ay_npt_insertknvtcmd(ClientData clientData, Tcl_Interp *interp,
			 int argc, char *argv[]);

/*! \brief
 */
int ay_npt_splitu(ay_object *src, double u, ay_object **result);

/*! \brief
 */
int ay_npt_splitutcmd(ClientData clientData, Tcl_Interp *interp,
		      int argc, char *argv[]);

/*! \brief
 */
int ay_npt_splitv(ay_object *src, double v, ay_object **result);

/*! \brief
 */
int ay_npt_splitvtcmd(ClientData clientData, Tcl_Interp *interp,
		      int argc, char *argv[]);

/*! \brief
 */
int ay_npt_extractnp(ay_object *src, double umin, double umax,
		     double vmin, double vmax, int relative,
		     ay_object **result);

/*! \brief
 */
int ay_npt_extractnptcmd(ClientData clientData, Tcl_Interp *interp,
			 int argc, char *argv[]);


/* pmt.c */

/*! \brief
 */
int ay_pmt_tonpatch(ay_pamesh_object *pamesh, ay_object **result);

/*! \brief
 */
int ay_pmt_valid(ay_pamesh_object *pamesh, int *detail);

/*! \brief
 */
int ay_pmt_getpntfromindex(ay_pamesh_object *patch, int indexu, int indexv,
			   double **p);

/*! \brief
 */
int ay_pmt_swapuv(ay_pamesh_object *pm);

/*! \brief
 */
int ay_pmt_revertu(ay_pamesh_object *pm);

/*! \brief
 */
int ay_pmt_revertv(ay_pamesh_object *pm);


/* stess.c */

/*! \brief
 */
int ay_stess_destroy(ay_nurbpatch_object *np);

/*! \brief
 */
int ay_stess_GetQF(double gst);

/*! \brief
 */
int ay_stess_CurvePoints2D(int n, int p, double *U, double *Pw, int is_rat,
			   int qf, int *Clen, double **C);

/*! \brief
 */
int ay_stess_CurvePoints3D(int n, int p, double *U, double *Pw, int is_rat,
			   int qf, int *Clen, double **C);

/*! \brief
 */
int ay_stess_SurfacePoints3D(int n, int m, int p, int q, double *U, double *V,
			     double *P, int qf, int *Cn, int *Cm, double **C);

/*! \brief
 */
int ay_stess_SurfacePoints4D(int n, int m, int p, int q, double *U, double *V,
			     double *P, int qf, int *Cn, int *Cm, double **C);

/*! \brief
 */
int ay_stess_DrawTrimmedSurface(ay_object *o);

/*! \brief
 */
int ay_stess_TessNP(ay_object *o, int qf);


/* tess.c */

/*! \brief
 */
int ay_tess_npatch(ay_object *o, int smethod, double sparamu, double sparamv,
		   int use_tc, char *mys, char *myt, int use_vc, char *myc,
		   ay_object **pm);

/*! \brief
 */
int ay_tess_npatchtcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);

/*! \brief
 */
int ay_tess_pomeshf(ay_pomesh_object *pomesh,
		    unsigned int f, unsigned int m, unsigned int n,
		    int optimize,
		    ay_pomesh_object **trpomesh);

/*! \brief
 */
int ay_tess_pomesh(ay_pomesh_object *pomesh, int optimize,
		   ay_pomesh_object **trpomesh);

#endif /* __nurbs_h__ */
