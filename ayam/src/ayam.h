#ifndef __ayam_h__
#define __ayam_h__
/*
 * Ayam, a free 3D modeler for the RenderMan interface.
 *
 * Ayam is copyrighted 1998-2002 by Randolf Schultz
 * (rschultz@informatik.uni-rostock.de) and others.
 *
 * All rights reserved.
 *
 * See the file License for details.
 *
 */

/* ayam.h - the main Ayam header */


/* Includes */
#include <limits.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <errno.h>

#ifdef WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#undef WIN32_LEAN_AND_MEAN
#endif /* WIN32 */

#ifdef __cplusplus
 extern "C" {
#endif /* __cplusplus */

#ifdef AYWITHAQUA
  #include <OpenGL/glu.h>
#else
  #include <GL/glu.h>
#endif /* AYWITHAQUA */

/*
#ifdef AYUSEORIGTOGL
*/
#include <togl.h>
/*
#else
#include <aytogl.h>
#endif*/
/* AYUSEORIGTOGL */

#ifdef AYUSEAFFINE
#include <ributil.h>
#endif /* AYUSEAFFINE */

#ifdef AYUSEBMRTRIBOUT
#include <ri.h>
#endif

#ifdef AYUSEAQSISRIB
#include <ri.h>
#endif

#ifdef AYUSESLARGS
#include <sl.h>
#endif /* AYUSESLARGS */

#ifdef AYUSESLCARGS
#include <slc.h>
#endif /* AYUSESLCARGS */

#ifdef AYUSESLOARGS
#include <slo.h>
#endif /* AYUSESLOARGS */

#ifdef AYUSESOARGS
#include <so.h>
#endif /* AYUSESOARGS */

#ifdef AYUSESLXARGS
#include <slx.h>
#endif /* AYUSESLXARGS */

#define AYGLUCBTYPE

#ifdef WIN32
 #undef AYGLUCBTYPE
 #define AYGLUCBTYPE (GLUnurbsErrorProc)
 #ifdef AYMESASGIGLU
  #undef AYGLUCBTYPE
  #define AYGLUCBTYPE (_GLUfuncptr)
 #endif
 #ifdef AYUSESUPERGLU
  #undef AYGLUCBTYPE
  #define AYGLUCBTYPE
 #endif
#endif


/* Ayam Object Structure */

typedef struct ay_object_s {
  struct ay_object_s *next;  /* next object in same hierarchie-level */
  struct ay_object_s *down;  /* children of this object */

  /* the type of the object, see AY_ID section below */
  unsigned int type;

  /* the name of the object */
  char *name;

  /* a "name" for OpenGL selection */
  unsigned int glname;

  /* how many references of this object exist? */
  unsigned int refcount;

  /* is this object currently selected? */
  int selected;

  /* is this object modified by an editing action? */
  int modified;

  /* does this object allow children? */
  int parent;

  /* do children inherit the transformation attributes? */
  int inherit_trafos;

  /* Visibility */
  /* is this object hidden? */
  int hide;
  /* should the children of this object be hidden? */
  int hide_children;

  double movx, movy, movz;
  double rotx, roty, rotz;
  double scalx, scaly, scalz;
  double quat[4]; /* quaternion */
#if 0
  struct ay_trafo_s *trafo; /* transformations of this object */
#endif
  struct ay_point_s *selp; /* selected points of this object */

  struct ay_tag_s *tags; /* tags of this object */

  struct ay_mat_object_s *mat; /* material of this object */

  void *refine; /* type specific object (e.g. ay_sphere_object) */
} ay_object;


typedef struct ay_list_object_s
{
  struct ay_list_object_s *next;
  ay_object *object;
} ay_list_object;


/* Shaders */
typedef struct ay_shader_arg_s
{
  struct ay_shader_arg_s *next;
  char *name;
  int type; /* color point vector scalar string */
  union {
    float color[3];
    float point[4];
    float matrix[16];
    float scalar;
    char *string;
  } val;
} ay_shader_arg;


typedef struct ay_shader_s
{
  struct ay_shader_s *next;
  int type; /* light volume surface displacement transformation */
  char *name;
  ay_shader_arg *arg;
} ay_shader;


/* Material Object */
typedef struct ay_mat_object_s {

  int registered;

  char **nameptr;
  unsigned int *refcountptr;
  ay_object *objptr;

  /* RiStandard (3.1) Attributes */

  /* Color */
  int colr, colg, colb;

  /* Opacity */
  int opr, opg, opb;

  /* Matte */
  int matte; /* no, yes */

  /* Shading */
  double shading_rate;
  int shading_interpolation; /* constant, smooth */

  /* Displacement */
  double dbound_val; /* displacement bound value */
  int dbound; /* coordinate system for bound value */

  /* Sidedness */
  int sides; /* two-sided, one-sided */

  /* Shaders */
  /* Surface */
  ay_shader *sshader;
  /* Displacement */
  ay_shader *dshader;
  /* Interior */
  ay_shader *ishader;
  /* Exterior */
  ay_shader *eshader;

  /* BMRT Specific Attributes */
   /* Radiosity */
    /* Average Color */
    int avr, avg, avb, ava;
    /* Emitted Color */
    int emr, emg, emb, ema;
    /* Specular Color */
    int spr, spg, spb, spa;
    /* Meshing */
    double patch_size, elem_size, min_size;
    /* Calculation */
    int zonal; /* dontset, none, zonal_receives, zonal_shoots, full_zonal */
    /* Caustics */
    int has_caustics; /* no, yes */

   /* Shadows */
   int cast_shadows; /* Os, none, opaque, surface */

   /* Displacements */
   int true_displacement; /* no, yes */

   /* Visibility */
   int camera; /* yes, no */
   int reflection; /* yes, no */
   int shadow; /* yes, no */

} ay_mat_object;


typedef struct ay_riopt_s
{
  double Variance;
  double Samples_X;
  double Samples_Y;
  char FilterFunc;
  double FilterWidth;
  double FilterHeight;
  double ExpGain;
  double ExpGamma;
  double RGBA_ONE;
  double RGBA_MIN;
  double RGBA_MAX;
  double RGBA_Dither;

  int MinSamples;
  int MaxSamples;
  int MaxRayLevel;
  double ShadowBias;
  char PRManSpec;
  int RadSteps;
  int PatchSamples;

  char *textures;
  char *shaders;
  char *archives;
  char *procedurals;

  int texturemem;
  int geommem;

  int width;
  int height;

  int use_std_display;
} ay_riopt;


typedef struct ay_root_object_s
{
  ay_riopt  *riopt;
  ay_shader *imager;
  ay_shader *atmosphere;
} ay_root_object;


typedef struct ay_nurbcurve_object_s
{
  int type; /* AY_CTOPEN, AY_CTCLOSED, AY_CTPERIODIC */
  int length;
  int order;
  int knot_type; /* AY_KTBEZIER, AY_KTBSPLINE, AY_KTNURB, AY_KTCUSTOM */
  int is_rat;
  double *controlv;
  double *knotv;

  /* GLU */
  double glu_sampling_tolerance;
  int display_mode;

  GLUnurbsObj *no;

  /* stess */
  int tesslen;
  double *tessv;
  int tessqf;

  /* multiple points */
  int createmp;
  struct ay_mpoint_s *mpoints;
} ay_nurbcurve_object;


/* a tesselated NURBS patch point */
typedef struct ay_stess_uvp_s {
  struct ay_stess_uvp_s *next;
  int type;    /* 0 - original point, 1 - trimloop point */
  int dir;     /* direction of associated trimcurve, 0 - cw, 1 - ccw */
  double u, v; /* associated parametric values of this point */
  double C[6]; /* geometric coordinates and normal of this point */
} ay_stess_uvp;


/* a complete tesselation */
typedef struct ay_stess_s {
  /* untrimmed patch */
  int tessw, tessh;
  double *tessv; /* [tessw*tessh] */

  /* trimmed patch */
  /* number of arrays of tesselated points */
  int upslen, vpslen;
  /* arrays of lists of tesselated points */
  ay_stess_uvp **ups, **vps; /* [upslen], [vpslen] */
  /**/
  int ft_cw;
  /* number of tesselated trim curves */
  int tcslen;
  /* tesselated trim curves */
  double **tcs; /* [tcslen][tcslens[i]] */
  /* length and direction of trim curves */
  int *tcslens, *tcsdirs; /* [tcslen] */
} ay_stess;


typedef struct ay_nurbpatch_object_s
{
  int width, height;
  int uorder, vorder;
  int uknot_type; /* AY_KTBEZIER, AY_KTBSPLINE, AY_KTNURB, AY_KTCUSTOM */
  int vknot_type; /* AY_KTBEZIER, AY_KTBSPLINE, AY_KTNURB, AY_KTCUSTOM */
  /*int closedu, closedv;*/ /* unused */
  int is_rat;

  double *controlv, *uknotv, *vknotv;
  /*double *texv;*/ /* unused */

  /* GLU */
  GLUnurbsObj *no;

  double glu_sampling_tolerance;
  int display_mode;

  /* stess */
  int tessqf;
  ay_stess *stess;

  /* multiple points */
  int createmp;
  struct ay_mpoint_s *mpoints;
} ay_nurbpatch_object;


typedef struct ay_pamesh_object_s {
  int width, height;
  int close_u, close_v;
  double *controlv; /* [width*height*4] */
  int type; /* AY_PTBILINEAR, AY_PTBICUBIC */
  int btype_u; /* AY_BTBEZIER, AY_BTBSPLINE, AY_BTCATMULLROM, AY_BTHERMITE,
		  AY_BTCUSTOM */
  int btype_v; /* AY_BTBEZIER, AY_BTBSPLINE, AY_BTCATMULLROM, AY_BTHERMITE,
		  AY_BTCUSTOM */
  int ustep;
  double *ubasis; /* [16], only in use for btype_u == AY_BTCUSTOM */
  int vstep;
  double *vbasis; /* [16], only in use for btype_v == AY_BTCUSTOM */

  /* cache NURBS patch representation */
  ay_object *npatch;
  double glu_sampling_tolerance;
  int display_mode;
} ay_pamesh_object;


typedef struct ay_pomesh_object_s {
  int type; /* currently unused */

  unsigned int npolys; /* total number of polygons */
  unsigned int *nloops; /* [npolys] */
  unsigned int *nverts; /* [<sum of all elements of nloops>] */
  unsigned int *verts; /* [<sum of all elements of nverts>] */

  unsigned int ncontrols; /* total number of control points */
  int has_normals; /* 0 - No, stride=3; 1 - Yes, stride=6 */
  double *controlv; /* [ncontrols * stride] */
} ay_pomesh_object;


typedef struct ay_sdmesh_object_s {
  int scheme; /* AY_SDSCATMULL, AY_SDSLOOP */

  unsigned int nfaces; /* total number of faces */
  unsigned int *nverts; /* [nfaces] */
  unsigned int *verts; /* [<sum of all elements of nverts>] */

  unsigned int ntags; /* total number of tags */
  int *tags; /* [ntags] (AY_SDTHOLE, AY_SDTCORNER, AY_SDTCREASE, AY_SDTIB) */
  unsigned int *nargs; /* [ntags * 2] */
  int *intargs; /* [<sum of all even elements of nargs>] */
  double *floatargs; /* [<sum of all uneven elements of nargs>] */

  unsigned int ncontrols; /* total number of control points */
  double *controlv; /* [ncontrols * 3] */
} ay_sdmesh_object;


typedef struct ay_gordon_object_s {
  int wcc; /* watch (and automatically correct parameter curves) */
  int uorder; /* desired order for u dimension */
  int vorder; /* desired order for v dimension */

  ay_object *caps_and_bevels;
  /* cache NURBS patch representation */
  ay_object *npatch;
  double glu_sampling_tolerance;
  int display_mode;
} ay_gordon_object;


typedef struct ay_text_object_s
{
  char *fontname;
  Tcl_UniChar *unistring;
  double height;
  int revert;
  int has_upper_cap;
  int has_lower_cap;
  /* cache NURBS patch representation */
  ay_object *npatch;
  double glu_sampling_tolerance;
  int display_mode;
} ay_text_object;


typedef struct ay_light_object_s
{
  int type; /* custom, point, spot, distant */
  int on; /* 0 off, 1 on */
  int local; /* light only local objects (same level and below)? 0 off, 1 on */
  RtLightHandle light_handle; /* handle of local lights */
  int shadows; /* cast shadows? 0 off, 1 on */
  int samples; /* number of samples (for area lights), default 1 */
  int colr, colg, colb;
  double intensity;
  double cone_angle;
  double cone_delta_angle;
  double beam_distribution;
  int use_sm; /* create shadow map */
  int sm_resolution; /* shadow map resolution */
  ay_shader *lshader;
  double tfrom[3];
  double tto[3];
} ay_light_object;


typedef struct ay_level_object_s
{
  int type;
} ay_level_object;


typedef struct ay_box_object_s
{
  double width, length, height;
} ay_box_object;


typedef struct ay_bpatch_object_s
{
  double p1[3];
  double p2[3];
  double p3[3];
  double p4[3];
} ay_bpatch_object;


typedef struct ay_sphere_object_s
{
  char closed;
  char is_simple;
  double radius;
  double zmin, zmax;
  double thetamax;
} ay_sphere_object;


typedef struct ay_cone_object_s
{
  char closed;
  char is_simple;
  double radius;
  double height;
  double thetamax;
} ay_cone_object;


typedef struct ay_disk_object_s
{
  char is_simple;
  double radius;
  double height;
  double thetamax;
} ay_disk_object;


typedef struct ay_cylinder_object_s
{
  char closed;
  char is_simple;
  double radius;
  double zmin, zmax;
  double thetamax;
} ay_cylinder_object;


typedef struct ay_hyperboloid_s
{
  char closed;
  double p1[3];
  double p2[3];
  double thetamax;
} ay_hyperboloid_object;


typedef struct ay_paraboloid_object_s
{
  char closed;
  double rmax;
  double zmin, zmax;
  double thetamax;
} ay_paraboloid_object;


typedef struct ay_torus_object_s
{
  char closed;
  double majorrad, minorrad;
  double phimin, phimax;
  double thetamax;
} ay_torus_object;


typedef struct ay_icurve_object_s
{
  int length;
  int closed;
  int imode;
  int iorder;
  double iparam;
  double *controlv;

  /* cache NURBS curve representation */
  ay_object *ncurve;
  double glu_sampling_tolerance;
  int display_mode;
} ay_icurve_object;


typedef struct ay_acurve_object_s
{
  int length;
  int closed;
  int order;
  /*
  int imode;
  double iparam;
  */
  double *controlv;

  /* cache NURBS curve representation */
  ay_object *ncurve;
  double glu_sampling_tolerance;
  int display_mode;
} ay_acurve_object;


typedef struct ay_concatnc_object_s
{
  int closed;
  int fillgaps;
  int revert;
  int knot_type;
  double ftlength;

  /* cache NURBS curve representation */
  ay_object *ncurve;
  double glu_sampling_tolerance;
  int display_mode;
} ay_concatnc_object;


typedef struct ay_offnc_object_s
{
  int mode;
  int revert;
  double offset;

  /* cache NURBS curve representation */
  ay_object *ncurve;
  double glu_sampling_tolerance;
  int display_mode;
} ay_offnc_object;


typedef struct ay_cap_object_s
{
  int type;
  /* cache NURBS patch representation */
  ay_object *npatch;
  double glu_sampling_tolerance;
  int display_mode;
} ay_cap_object;


typedef struct ay_bevel_object_s
{
  int has_cap;
  /* cache NURBS patch representation */
  ay_object *npatch;
  double glu_sampling_tolerance;
  int display_mode;
} ay_bevel_object;


typedef struct ay_custom_object_s
{
  unsigned int type;
  void *object;
} ay_custom_object;


typedef struct ay_clone_object_s
{
  int numclones;
  int rotate;
  int mirror;
  /* transformations */
  double movx, movy, movz;
  double rotx, roty, rotz;
  double scalx, scaly, scalz;
  double quat[4]; /* quaternion */
  ay_object *clones;
} ay_clone_object;


typedef struct ay_camera_object_s
{
  double from[3];
  double to[3];
  double up[3];
  double roll, zoom;
  double nearp, farp; /* clipping planes */
} ay_camera_object;


typedef struct ay_riinc_object_s
{
  double width, length, height;
  char *file;
} ay_riinc_object;


typedef struct ay_riproc_object_s
{
  int type;
  double minx, miny, minz, maxx, maxy, maxz;
  char *file;
  char *data;
} ay_riproc_object;


typedef struct ay_revolve_object_s
{
  double thetamax;
  int sections;
  int order;
  int has_upper_cap;
  ay_object *upper_cap;
  int has_lower_cap;
  ay_object *lower_cap;
  int has_start_cap;
  ay_object *start_cap;
  int has_end_cap;
  ay_object *end_cap;

  /* cache NURBS patch representation */
  ay_object *npatch;
  double glu_sampling_tolerance;
  int display_mode;
} ay_revolve_object;


typedef struct ay_extrude_object_s
{
 double height;
 int has_upper_cap;
 int has_lower_cap;

 ay_object *caps_and_bevels;
 /* cache NURBS patch representation */
 ay_object *npatch;
 double glu_sampling_tolerance;
 int display_mode;
} ay_extrude_object;


typedef struct ay_sweep_object_s
{
 int rotate;
 int interpolate;
 int close;
 int sections;
 int has_start_cap;
 int has_end_cap;

 ay_object *caps_and_bevels;
 /* cache NURBS patch representation */
 ay_object *npatch;
 double glu_sampling_tolerance;
 int display_mode;
} ay_sweep_object;


typedef struct ay_swing_object_s
{

  int has_upper_cap;
  ay_object *upper_cap;
  int has_lower_cap;
  ay_object *lower_cap;
  int has_start_cap;
  ay_object *start_cap;
  int has_end_cap;
  ay_object *end_cap;

  /* cache NURBS patch representation */
  ay_object *npatch;
  double glu_sampling_tolerance;
  int display_mode;
} ay_swing_object;


typedef struct ay_birail1_object_s
{
 int close;
 int sections;
 int has_start_cap;
 int has_end_cap;

 ay_object *caps_and_bevels;
 /* cache NURBS patch representation */
 ay_object *npatch;
 double glu_sampling_tolerance;
 int display_mode;
} ay_birail1_object;


typedef struct ay_birail2_object_s
{
 int close;
 int sections;
 int interpolctrl;
 int has_start_cap;
 int has_end_cap;

 ay_object *caps_and_bevels;
 /* cache NURBS patch representation */
 ay_object *npatch;
 double glu_sampling_tolerance;
 int display_mode;
} ay_birail2_object;


typedef struct ay_skin_object_s
{
 int interpolate;
 int uorder;
 int uknot_type;
 double uknotv;
 int has_start_cap;
 int has_end_cap;

 ay_object *caps_and_bevels;
 /* cache NURBS patch representation */
 ay_object *npatch;
 double glu_sampling_tolerance;
 int display_mode;
} ay_skin_object;


typedef struct ay_extrnc_object_s
{
  int side;
  int pnum;
  int revert;
  double parameter;
  /* cache NURBS curve representation */
  ay_object *ncurve;
  double glu_sampling_tolerance;
  int display_mode;
} ay_extrnc_object;


typedef struct ay_extrnp_object_s
{
  int pnum;
  double umin, umax, vmin, vmax;
  /* cache NURBS patch representation */
  ay_object *npatch;
  double glu_sampling_tolerance;
  int display_mode;
} ay_extrnp_object;


typedef struct ay_ncircle_object_s
{
  double radius;
  double tmin;
  double tmax;
  /* cache NURBS curve representation */
  ay_object *ncurve;
  double glu_sampling_tolerance;
  int display_mode;
} ay_ncircle_object;


typedef struct ay_script_object_s
{
  char *script; /* the script text (Tcl) */
  int active; /* 0 - Inactive, 1 - Active */
  int type; /* 0 - Run, 1 - Create, 2 -  Modify */
  ay_object *cm_objects; /* created or modified objects */

  int modified;
  Tcl_Obj *cscript; /* cache compiled script */
} ay_script_object;


typedef struct ay_view_object_s
{
  struct Togl *togl;
  int type; /* Persp, Front, Side, Top, Trim */
  double grid; /* gridsize, 0.0 == no grid */

  int local; /* editing takes place in local space, not world space */
  int aligned; /* view is aligned to object-space of selected object */

  int drawsel; /* draw selected objects (and their children) only */
  int drawlevel; /* draw current level (and below) only */
  int redraw; /* automatic redraw */
  int drawgrid; /* draw grid */
  int usegrid; /* use (snap to) grid */
  int shade; /* shade view */
  int antialiaslines; /* use antialiasing for line drawing */

  /*#ifdef AY_ENABLEPPREV*/
  int ppreview; /* create a permanent preview */
  /*#endif*/

  /* draw object coordinate system? */
  int drawobjectcs;

  /* camera */
  double from[3];
  double to[3];
  double up[3];
  double roll, zoom;
  double nearp, farp; /* clipping planes */

  /* temporarily in use for rotation with cursor keys */
  double rotx, roty, rotz;

  /* how to get from win to world coordinates (in parallel views!) */
  double conv_x, conv_y;

  /* rectangle, currently used to draw
     a rectangle while drag-selection of points */
  double rect_xmin, rect_xmax, rect_ymin, rect_ymax;
  int drawrect;

  /* mark a point in space */
  double markx;
  double marky;
  int drawmarker;

  /* position */
  int pos_x, pos_y;

  /* internal */
  int drawhandles;
  /* call reshape before drawing */
  int dirty;

  /* background image */
  int drawbg;
  char *bgimage;

  int isicon;

  /* alternative display callback */
  Togl_Callback *altdispcb;
} ay_view_object;


typedef struct ay_select_object_s
{
  int index; /* index of object to be selected */
} ay_select_object;


typedef struct ay_preferences_s
{
  int list_types;
  int mark_hidden;

  /* modelling prefs */
  int edit_snaps_to_grid;
  double pick_epsilon;
  int lazynotify;
  int completenotify;
  int undo_levels;
  int snap3d;

  /* RIB export prefs */
  int resolveinstances;
  int checklights;
  int ristandard;
  int use_sm;
  int defaultmat; /* 0 no, 1 matte, 2 "default" */
  int writeident;
  int excludehidden;

  /* Mops Import prefs */
  int mopsiresetdisplaymode;
  int mopsiresettolerance;

  /* drawing */
  double handle_size; /* size of points */

  double bgr, bgg, bgb; /* background color */
  double obr, obg, obb; /* object color */
  double ser, seg, seb; /* selection color */
  double grr, grg, grb; /* grid color */
  double tpr, tpg, tpb; /* tagged points color */
  double shr, shg, shb; /* default shade color */
  double lir, lig, lib; /* default light color */
  double sxr, sxg, sxb; /* default drag selection rectangle color (XOR) */

  int use_materialcolor;

  double linewidth;
  double sellinewidth;

  /* error handling */
  char onerror; /* 0 stop, 1 continue */
  int writelog;
  char *logfile;

  /* for developers */
  int overload; /* 0 no, 1 yes */

  /* state of the RIB exporter */
  int wrib_sm;
  int wrib_em;
  int wrib_archives;

  /* rendering quality */
  double glu_sampling_tolerance;
  int np_display_mode;
  int nc_display_mode;
  int glu_cache_float; /* unused */

  int stess_qf;

  /* sampling mode/quality for NURBS -> PolyMesh conversion */
  int smethod;
  double sparamu;
  double sparamv;

  /* control warnings about unknown tag types */
  int wutag;

  /* parameters for glPolygonOffset */
  double polyoffset0;
  double polyoffset1;

  /* is a permanent preview window open? */
  int pprev_open;
  char *pprender;
} ay_preferences;


typedef struct ay_point_s
{
  struct ay_point_s *next;
  int homogenous; /* AY_TRUE, AY_FALSE */
  double *point;
} ay_point;


typedef struct ay_mpoint_s
{
  struct ay_mpoint_s *next;
  int multiplicity;
  double **points;
} ay_mpoint;


typedef struct ay_tag_s
{
  struct ay_tag_s *next;
  char *name;
  char *type;
  char *val;
} ay_tag;


typedef struct ay_trafo_s
{
  double movx, movy, movz;
  double rotx, roty, rotz;
  double scalx, scaly, scalz;
  double quat[4]; /* quaternion */
} ay_trafo;


typedef struct ay_table_s
{
  unsigned int size;
  void **arr;
} ay_table;


/* Callbacks */
typedef int (ay_createcb) (int argc, char *argv[], ay_object *o);

typedef int (ay_deletecb) (void *c);

typedef int (ay_copycb) (void *src, void **dst);

typedef int (ay_drawcb) (struct Togl *togl,  ay_object *o);

typedef int (ay_propcb) (Tcl_Interp *interp, int argc, char *argv[],
			 ay_object *o);

typedef int (ay_getpntcb) (int mode, ay_object *o, double *p);

typedef int (ay_wribcb) (char *file, ay_object *o);

typedef int (ay_readcb) (FILE *fileptr, ay_object *o);

typedef int (ay_writecb) (FILE *fileptr, ay_object *o);

typedef int (ay_notifycb) (ay_object *o);

typedef int (ay_treedropcb) (ay_object *o);

typedef int (ay_comparecb) (ay_object *o1, ay_object *o2);

typedef int (ay_convertcb) (ay_object *o, int in_place);

typedef int (ay_providecb) (ay_object *o, unsigned int type,
			    ay_object **result);

typedef int (ay_bbccb) (ay_object *o, double *bbox, int *flags);


/* Globals */
extern Tcl_Interp *ay_interp;
extern ay_preferences ay_prefs;
extern ay_object *ay_root;
extern ay_object **ay_next;

extern ay_view_object *ay_currentview;

extern ay_list_object *ay_selection;

extern ay_list_object *ay_currentlevel;

extern ay_object *ay_clipboard;

extern int ay_point_edit_coords_homogenous;
extern int ay_point_edit_coords_number;
extern int *ay_pe_numcpo;
extern int *ay_pe_homcpo;
extern double **ay_point_edit_coords;
extern ay_object *ay_point_edit_object;
extern ay_object **ay_pe_objects;
extern int ay_pe_objectslen;

extern Tcl_HashTable ay_otypesht;

extern ay_table ay_typenamest;

extern ay_table ay_createcbt;
extern ay_table ay_deletecbt;
extern ay_table ay_copycbt;
extern ay_table ay_drawcbt;
extern ay_table ay_drawhcbt;
extern ay_table ay_shadecbt;
extern ay_table ay_getpropcbt;
extern ay_table ay_setpropcbt;
extern ay_table ay_getpntcbt;
extern ay_table ay_wribcbt;
extern ay_table ay_readcbt;
extern ay_table ay_writecbt;
extern ay_table ay_notifycbt;
extern ay_table ay_bbccbt;

extern ay_table ay_treedropcbt;

extern Tcl_HashTable ay_tagtypesht;

extern Tcl_HashTable ay_temptagtypesht;

extern ay_table ay_tagnamest;

extern ay_table ay_oidptrt;

extern ay_table ay_convertcbt;

extern ay_table ay_providecbt;

extern int ay_errno;

extern ay_object *ay_last_read_object;

extern int ay_read_version;

extern char ay_version_ma[];
extern char ay_version_mi[];

extern char *ay_instt_oitagtype;
extern char *ay_riattr_tagtype;
extern char *ay_riopt_tagtype;
extern char *ay_tc_tagtype;
extern char *ay_pv_tagtype;
extern char *ay_ridisp_tagtype;
extern char *ay_rihider_tagtype;
extern char *ay_noexport_tagtype;
extern char *ay_tp_tagtype;
extern char *ay_ns_tagtype;
extern char *ay_dns_tagtype;
extern char *ay_dns_tagname;
extern char *ay_umm_tagtype;
extern char *ay_vmm_tagtype;
extern char *ay_bp_tagtype;

extern unsigned int ay_current_glname;
extern int ay_wrib_framenum;
extern unsigned int ay_current_primlevel;

/* Definitions */

/* The Truth */
#define AY_TRUE      1
#define AY_FALSE     0

/* Return/Error Codes */
#define AY_OK          0 /* everything all right */
#define AY_EWARN       1 /* warning */
#define AY_ERROR       2 /* unspecified error */
#define AY_EFLUSH      3 /* flush error messages */
#define AY_EOUTPUT     4 /* used for unspecific output */
#define AY_EOMEM       5 /* out of memory */
#define AY_EOPENFILE  10 /* error opening file */
#define AY_ECLOSEFILE 11 /* error closing file */
#define AY_EFORMAT    12 /* wrong file format  */
#define AY_EUEOF      13 /* unexpected EOF read */
#define AY_EEOF       14 /* EOF read */
#define AY_EDONOTLINK 15 /* Do not link read object! */
#define AY_ENOSEL     20 /* nothing selected */
#define AY_EARGS      21 /* wrong args */
#define AY_EWTYPE     22 /* object is of wrong type */
#define AY_ETYPE      30 /* type exists */
#define AY_ENTYPE     31 /* type does not exist */
#define AY_EREF       40 /* reference counter not zero */
#define AY_ENULL      50 /* illegal zero pointer encountered */


/* "Core" Object Type Ids */
#define AY_IDROOT           0
#define AY_IDNPATCH         1
#define AY_IDNCURVE         2
#define AY_IDLEVEL          3
#define AY_IDLIGHT          4
#define AY_IDBOX            5
#define AY_IDBPATCH         6
#define AY_IDVIEW           7
#define AY_IDCAMERA         8
#define AY_IDINSTANCE       9
#define AY_IDSPHERE        10
#define AY_IDDISK          11
#define AY_IDCONE          12
#define AY_IDCYLINDER      13
#define AY_IDPARABOLOID    14
#define AY_IDHYPERBOLOID   15
#define AY_IDTORUS         16
#define AY_IDRIINC         17
#define AY_IDMATERIAL      18
#define AY_IDICURVE        19
#define AY_IDREVOLVE       20
#define AY_IDEXTRUDE       21
#define AY_IDSWEEP         22
#define AY_IDSKIN          23
#define AY_IDCAP           24
#define AY_IDPAMESH        25
#define AY_IDPOMESH        26
#define AY_IDCONCATNC      27
#define AY_IDCLONE         28
#define AY_IDSDMESH        29
#define AY_IDGORDON        30
#define AY_IDTEXT          31
#define AY_IDBIRAIL1       32
#define AY_IDBIRAIL2       33
#define AY_IDEXTRNC        34
#define AY_IDSCRIPT        35
#define AY_IDRIPROC        36
#define AY_IDBEVEL         37
#define AY_IDNCIRCLE       38
#define AY_IDSWING         39
#define AY_IDSELECT        40
#define AY_IDEXTRNP        41
#define AY_IDOFFNC         42
#define AY_IDACURVE        43

#define AY_IDLAST          50

/* Level Object SubType Ids */
#define AY_LTEND    0
#define AY_LTLEVEL  1
#define AY_LTUNION  2
#define AY_LTDIFF   3
#define AY_LTINT    4
#define AY_LTPRIM   5

/* View Object SubType Ids */
#define AY_VTFRONT  0
#define AY_VTSIDE   1
#define AY_VTTOP    2
#define AY_VTPERSP  3
#define AY_VTTRIM   4

/* Shader Types */
#define AY_STSURFACE        0
#define AY_STDISPLACEMENT   1
#define AY_STVOLUME         2
#define AY_STLIGHT          3
#define AY_STIMAGER         4
#define AY_STTRANSFORMATION 5

#define AY_STAREALIGHT      6
#define AY_STINTERIOR       7
#define AY_STEXTERIOR       8
#define AY_STATMOSPHERE     9

/* Shader Argument Types */
#define AY_SASCALAR  0
#define AY_SAPOINT   1
#define AY_SANORMAL  2
#define AY_SAVECTOR  3
#define AY_SACOLOR   4
#define AY_SASTRING  5
#define AY_SAMATRIX  6

/* Light Source Types */
#define AY_LITCUSTOM    0
#define AY_LITPOINT     1
#define AY_LITDISTANT   2
#define AY_LITSPOT      3

/* NURBS Curve Types */
#define AY_CTOPEN     0
#define AY_CTCLOSED   1
#define AY_CTPERIODIC 2

/* Knot Vector Types */
#define AY_KTBEZIER    0
#define AY_KTBSPLINE   1
#define AY_KTNURB      2
#define AY_KTCUSTOM    3

/* Patch Mesh Types */
#define AY_PTBILINEAR  0
#define AY_PTBICUBIC   1

/* Basis Matrix Types */
#define AY_BTBEZIER     0
#define AY_BTBSPLINE    1
#define AY_BTCATMULLROM 2
#define AY_BTHERMITE    3
#define AY_BTCUSTOM     4

/* Subdivision Schemes */
#define AY_SDSCATMULL    0
#define AY_SDSLOOP       1

/* Subdivision Tag Types */
#define AY_SDTHOLE    0
#define AY_SDTCORNER  1
#define AY_SDTCREASE  2
#define AY_SDTIB      3

/* Procedural Object Types */
#define AY_PRTDREADA  0 /* Delayed Read Archive */
#define AY_PRTRUNPROG 1 /* Run Program */
#define AY_PRTDYNLOAD 2 /* Dynamic Load */


/* size of arrows */
#define AY_POINTER 8

/* to avoid direct comparison of doubles with 0.0 */
#define AY_EPSILON 1.0e-06


#ifdef M_PI
 #define AY_PI M_PI
 #define AY_HALFPI (M_PI/2.0)
#else
 #define AY_PI 3.1415926535897932384626433
 #define AY_HALFPI (3.1415926535897932384626433/2.0)
#endif

#define AY_D2R(x) ((x)*AY_PI/180.0)

#define AY_R2D(x) ((x)*180.0/AY_PI)

#define AY_COT(x) (cos(x)/sin(x))

/* Basic Vector Arithmetic */
#define AY_VLEN(x,y,z) sqrt((x*x)+(y*y)+(z*z))

#define AY_V3LEN(v) sqrt((v[0]*v[0])+(v[1]*v[1])+(v[2]*v[2]))

#define AY_V2LEN(v) sqrt((v[0]*v[0])+(v[1]*v[1]))

#define AY_V3ZERO(v) {v[0]=0.0; v[1]=0.0; v[2]=0.0;}

#define AY_V3SUB(r,v1,v2) {r[0]=v1[0]-v2[0];r[1]=v1[1]-v2[1];r[2]=v1[2]-v2[2];}

#define AY_V3ADD(r,v1,v2) {r[0]=v1[0]+v2[0];r[1]=v1[1]+v2[1];r[2]=v1[2]+v2[2];}

#define AY_V3MUL(r,v1,v2) {r[0]=v1[0]*v2[0];r[1]=v1[1]*v2[1];r[2]=v1[2]*v2[2];}

#define AY_V3CROSS(r,v1,v2) {r[0]=(v1[1] * v2[2]) - (v1[2] * v2[1]);r[1]=(v1[2] * v2[0]) - (v1[0] * v2[2]);r[2]=(v1[0] * v2[1]) - (v1[1] * v2[0]);}

#define AY_V3SCAL(v,f) {(v[0])*=(f);(v[1])*=(f);(v[2])*=(f);}

#define AY_V2SCAL(v,f) {(v[0])*=(f);(v[1])*=(f);}

/* XXXX is this nesting dangerous? wrong? */
#define AY_V3NORM(v) {AY_V3SCAL((v),(1.0/(AY_V3LEN(v))));}

#define AY_V2NORM(v) {AY_V2SCAL((v),(1.0/(AY_V2LEN(v))));}

#define AY_V3DOT(v1,v2) (v1[0]*v2[0] + v1[1]*v2[1] + v1[2]*v2[2])

#define AY_V2DOT(v1,v2) (v1[0]*v2[0] + v1[1]*v2[1])

#define AY_V4COMP(v1, v2) ((fabs(v1[0]-v2[0]) < AY_EPSILON) &&\
			   (fabs(v1[1]-v2[1]) < AY_EPSILON) &&\
			   (fabs(v1[2]-v2[2]) < AY_EPSILON))

#define AY_V3COMP(v1, v2) ((fabs(v1[0]-v2[0]) < AY_EPSILON) &&\
			   (fabs(v1[1]-v2[1]) < AY_EPSILON) &&\
			   (fabs(v1[2]-v2[2]) < AY_EPSILON))

#define AY_V2COMP(v1, v2) ((fabs(v1[0]-v2[0]) < AY_EPSILON) &&\
			   (fabs(v1[1]-v2[1]) < AY_EPSILON))

/* Warning: v1 and v2 must be different locations in memory! */
#define AY_APTRAN4(v1,v2,m) {v1[0]=v2[0]*m[0]+v2[1]*m[4]+v2[2]*m[8]+v2[3]*m[12];v1[1]=v2[0]*m[1]+v2[1]*m[5]+v2[2]*m[9]+v2[3]*m[13];v1[2]=v2[0]*m[2]+v2[1]*m[6]+v2[2]*m[10]+v2[3]*m[14];v1[3]=v2[0]*m[3]+v2[1]*m[7]+v2[2]*m[11]+v2[3]*m[15];}

/* Warning: v1 and v2 must be different locations in memory! */
#define AY_APTRAN3(v1,v2,m) {v1[0]=v2[0]*m[0]+v2[1]*m[4]+v2[2]*m[8]+1.0*m[12];v1[1]=v2[0]*m[1]+v2[1]*m[5]+v2[2]*m[9]+1.0*m[13];v1[2]=v2[0]*m[2]+v2[1]*m[6]+v2[2]*m[10]+1.0*m[14];}

#define AY_COMP4DP(P1, P2) ((fabs(P1[0]-P2[0]) < AY_EPSILON) &&\
                            (fabs(P1[1]-P2[1]) < AY_EPSILON) &&\
                            (fabs(P1[2]-P2[2]) < AY_EPSILON) &&\
                            (fabs(P1[3]-P2[3]) < AY_EPSILON))

#define AY_COMP3DP(P1, P2) ((fabs(P1[0]-P2[0]) < AY_EPSILON) &&\
                            (fabs(P1[1]-P2[1]) < AY_EPSILON) &&\
                            (fabs(P1[2]-P2[2]) < AY_EPSILON))

#define AY_COMP2DP(P1, P2) ((fabs(P1[0]-P2[0]) < AY_EPSILON) &&\
                            (fabs(P1[1]-P2[1]) < AY_EPSILON))

/* Version Strings and Numbers */
#define AY_VERSIONSTR "1.14pre"
#define AY_VERSIONSTRMI "0"

#define AY_VERSIONMA 1
#define AY_VERSION   14
#define AY_VERSIONMI 0


/* Ayam API */
#include "aycore.h"
#include "nurbs.h"
#include "objects.h"
#include "contrib.h"

#ifdef __cplusplus
}
#endif /* __cplusplus */

#endif /* __ayam_h__ */

