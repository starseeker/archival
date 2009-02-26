#ifndef __aycore_h__
#define __aycore_h__
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

/* aycore.h - prototypes of core functions */

/* bbc.c */

/*! \brief calculate the bounding box of object o
 */
int ay_bbc_get(ay_object *o, double *bbox);


/* clear.c */

/*! \brief remove all objects from the scene
 */
int ay_clear_scene(void);

/*! \brief Tcl command to remove all objects from the scene
 */
int ay_clear_scenetcmd(ClientData clientData, Tcl_Interp * interp,
		       int argc, char *argv[]);


/* clevel.c */
int ay_clevel_find(ay_object *c, ay_object *o, int *found);

/*! \brief push object o onto current level stack
 */
int ay_clevel_add(ay_object *o);

/*! \brief pop current level stack
 */
int ay_clevel_del(void);

/*! \brief clear current level stack
 */
int ay_clevel_delall(void);

/*! \brief Tcl command to change current level to the top level
 */
int ay_clevel_gotoptcmd(ClientData clientData, Tcl_Interp *interp,
			int argc, char *argv[]);

/*! \brief Tcl command to change current level to the parent level
 */
int ay_clevel_gouptcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);

/*! \brief Tcl command to change current level to the child level
 *         of the first selected object
 */
int ay_clevel_godowntcmd(ClientData clientData, Tcl_Interp *interp,
			 int argc, char *argv[]);

/*! \brief Tcl command to get a string specification of the current level
 */
int ay_clevel_gettcmd(ClientData clientData, Tcl_Interp *interp,
		      int argc, char *argv[]);

/*! \brief Tcl command to change the current level
 */
int ay_clevel_cltcmd(ClientData clientData, Tcl_Interp *interp,
		     int argc, char *argv[]);


/* clipb.c */

/*! \brief Tcl command to copy selected objects to the object clipboard
 */
int ay_clipb_copytcmd(ClientData clientData, Tcl_Interp *interp,
		      int argc, char *argv[]);

/*! \brief Tcl command to move selected objects to the object clipboard
 */
int ay_clipb_cuttcmd(ClientData clientData, Tcl_Interp *interp,
		     int argc, char *argv[]);

/*! \brief Tcl command to copy the objects from the object clipboard
 *         to the scene
 */
int ay_clipb_pastetcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);

/*! \brief Tcl command to move the objects from the object clipboard
 *         to the scene
 */
int ay_clipb_movetcmd(ClientData clientData, Tcl_Interp *interp,
		      int argc, char *argv[]);

/*! \brief Tcl command to replace the selected objects with the
 *         objects from the object clipboard
 */
int ay_clipb_replacetcmd(ClientData clientData, Tcl_Interp *interp,
			 int argc, char *argv[]);


/* comp.c */

/*! \brief compare two strings
 */
int ay_comp_strcase(char *s1, char *s2);

/*! \brief register a comparison callback
 */
int ay_comp_register(ay_comparecb  *compcb, unsigned int type_id);

/*! \brief initialize object comparison module
 */
int ay_comp_init(void);

/*! \brief compare two objects
 */
int ay_comp_objects(ay_object *o1, ay_object *o2);

/*! \brief compare the transformation attributes of two objects
 */
int ay_comp_trafos(ay_object *o1, ay_object *o2);

/*! \brief compare the tags of two objects
 */
int ay_comp_tags(ay_object *o1, ay_object *o2);


/* convert.c */

/*! \brief register a conversion callback
 */
int ay_convert_register(ay_convertcb  *convcb, unsigned int type_id);

/*! \brief convert an object
 */
int ay_convert_force(ay_object *o, int in_place);

/*! \brief Tcl command to convert objects
 */
int ay_convert_forcetcmd(ClientData clientData, Tcl_Interp * interp,
			 int argc, char *argv[]);


/* draw.c */

/*! \brief draw the selected points of an object
 */
void ay_draw_selp(ay_object *o);

/*! \brief draw an object
 */
int ay_draw_object(struct Togl *togl, ay_object *o, int selected);

/*! \brief draw a view
 */
int ay_draw_view(struct Togl *togl, int draw_offset);

/*! \brief draw the grid of a view
 */
void ay_draw_grid(struct Togl *togl);

/*! \brief draw an arrow (to signify a vector or curve orientation)
 */
void ay_draw_arrow(struct Togl *togl, double *from, double *to);

/*! \brief draw the background image
 */
void ay_draw_bgimage(struct Togl *togl);

/*! \brief decide whether to redraw
 */
void ay_draw_needredraw(ay_list_object *oldsel, ay_list_object *newsel,
			int *result);

/*! \brief draw a view of type Trim
 */
void ay_draw_trimview(void);

/*! \brief draw an rectangle in image space
 */
void ay_draw_rectangle(int winwidth, int winheight,
		       double xmin, double ymin,
		       double xmax, double ymax);

/*! \brief draw a coordinate system (three color coded axes)
 */
void ay_draw_cs(struct Togl *togl);


/* error.c */

/*! \brief report an error to the user
 */
void ay_error(int code, char *where, char *what);

/*! \brief Tcl command to report an error to the user
 */
int ay_error_tcmd(ClientData clientData, Tcl_Interp *interp,
		  int argc, char *argv[]);

/*! \brief GLU error callback
 */
void ay_error_glucb(GLenum err);

/*! \brief Tcl command to get the current GL error state and report it
 */
int ay_error_getglerrortcmd(ClientData clientData, Tcl_Interp *interp,
			    int argc, char *argv[]);


/* geom.c */

/*! \brief 
 */
int ay_geom_intersectlines3D(double *p1, double *t1,
			     double *p2, double *t2,
			     double *p);

/*! \brief 
 */
int ay_geom_intersectlines2D(double *p1, double *t1,
			     double *p2, double *t2,
			     double *p);

/*! \brief 
 */
void ay_geom_calcnfrom3(double *p1, double *p2, double *p3, double *n);


/* instt.c */

/*! \brief 
 */
int ay_instt_createoidht(ay_object *o);

/*! \brief 
 */
int ay_instt_connect(ay_object *o, ay_object **last);

/*! \brief 
 */
int ay_instt_createoid(char **dest);

/*! \brief 
 */
int ay_instt_createorigids(ay_object *o);

/*! \brief 
 */
int ay_instt_createinstanceids(ay_object *o);

/*! \brief 
 */
int ay_instt_clearoidtags(ay_object *o);

/*! \brief 
 */
int ay_instt_findinstance(ay_object *r, ay_object *o);

/*! \brief 
 */
int ay_instt_checkclipboard(ay_object *o);

/*! \brief 
 */
int ay_instt_wribiarchives(char *file, ay_object *o);

/*! \brief 
 */
int ay_instt_resolve(ay_object *i);

/*! \brief Tcl command to resolve instances to normal objects
 */
int ay_instt_resolvetcmd(ClientData clientData, Tcl_Interp *interp,
			 int argc, char *argv[]);

/*! \brief 
 */
int ay_instt_checkinstance(ay_object *o, ay_object *target,
			   ay_object *instance, int *check_this_tree);

/*! \brief 
 */
int ay_instt_check(ay_object *o, ay_object *target);

/*! \brief 
 */
int ay_instt_getmaster(ay_object *o, ay_object *i, ay_object **r);

/*! \brief Tcl command to find a master of an instance
 */
int ay_instt_getmastertcmd(ClientData clientData, Tcl_Interp *interp,
			   int argc, char *argv[]);

/*! \brief 
 */
void ay_instt_init(Tcl_Interp *interp);


/* interpol.c */

/*! \brief 
 */
int ay_interpol_1DA4D(double p, int len, double *st, double *en, double *ta);

/*! \brief 
 */
int ay_interpol_1DA1D(double p, int len, double *st, double *en, double *ta);

/*! \brief 
 */
int ay_interpol_trafos(double p, ay_object *o1, ay_object *o2, ay_object *ta);

/*! \brief 
 */
int ay_interpol_ncurves(double p, ay_object *c1, ay_object *c2,
			ay_object **ta);


/* notify.c */

/*! \brief 
 */
int ay_notify_register(ay_notifycb *notcb, unsigned int type_id);

/*! \brief 
 */
int ay_notify_parent(void);

/*! \brief 
 */
int ay_notify_force(ay_object *o);

/*! \brief 
 */
int ay_notify_forceparent(ay_object *o, int silent);

/*! \brief Tcl command to enforce notification
 */
int ay_notify_forcetcmd(ClientData clientData, Tcl_Interp *interp,
			int argc, char *argv[]);

/*! \brief 
 */
int ay_notify_findparents(ay_object *o, ay_object *r,
			  ay_list_object **parents);

/*! \brief 
 */
int ay_notify_complete(ay_object *r);

/*! \brief 
 */
int ay_notify_init(Tcl_Interp *interp);


/* ns.c */

/*! \brief 
 */
Tk_RestrictAction ay_ns_restrictall(ClientData clientData,
				    XEvent *eventPtr);

/*! \brief 
 */
int ay_ns_execute(ay_object *o, char *script);

/*! \brief 
 */
void ay_ns_init(Tcl_Interp *interp);


/* oact.c */

/*! \brief 
 */
int ay_oact_movetcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_oact_rottcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_oact_rotatcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_oact_sc1DXcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_oact_sc1DYcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_oact_sc1DZcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_oact_sc2Dcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_oact_sc3Dcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_oact_str2Dcb(struct Togl *togl, int argc, char *argv[]);


/* object.c */

/*! \brief 
 */
int ay_object_defaults(ay_object *o);

/*! \brief 
 */
int ay_object_create(unsigned int index, ay_object **o);

/*! \brief 
 */
int ay_object_createargs(unsigned int index, int argc, char **argv,
			 ay_object **o);

/*! \brief Tcl command to create objects
 */
int ay_object_createtcmd(ClientData clientData, Tcl_Interp *interp,
			 int argc, char *argv[]);

/*! \brief 
 */
int ay_object_delete(ay_object *o);

/*! \brief 
 */
int ay_object_deletemulti(ay_object *o);

/*! \brief Tcl command to delete objects
 */
int ay_object_deletetcmd(ClientData clientData, Tcl_Interp *interp,
			 int argc, char *argv[]);

/*! \brief 
 */
int ay_object_link(ay_object *o);

/*! \brief 
 */
int ay_object_unlink(ay_object *o);

/*! \brief 
 */
char *ay_object_gettypename(unsigned int index);

/*! \brief 
 */
char *ay_object_getname(ay_object *o);

/*! \brief Tcl command to set the name of an object
 */
int ay_object_setnametcmd(ClientData clientData, Tcl_Interp *interp,
			  int argc, char *argv[]);

/*! \brief 
 */
int ay_object_copy(ay_object *src, ay_object **dst);

/*! \brief 
 */
int ay_object_copymulti(ay_object *src, ay_object **dst);

/*! \brief Tcl command to inquire whether an object has children
 */
int ay_object_haschildtcmd(ClientData clientData, Tcl_Interp *interp,
			   int argc, char *argv[]);

/*! \brief Tcl command to get the type of an object
 */
int ay_object_gettypetcmd(ClientData clientData, Tcl_Interp *interp,
			  int argc, char *argv[]);

/*! \brief Tcl command to get the name of an object
 */
int ay_object_getnametcmd(ClientData clientData, Tcl_Interp *interp,
			  int argc, char *argv[]);

/*! \brief 
 */
int ay_object_crtendlevel(ay_object **o);

/*! \brief 
 */
int ay_object_deleteinstances(ay_object **o);

/*! \brief 
 */
int ay_object_replace(ay_object *src, ay_object *dst);

/*! \brief 
 */
int ay_object_ccp(ay_object *o);

/*! \brief 
 */
unsigned int ay_object_count(ay_object *o);


/* otype.c */

/*! \brief 
 */
int ay_otype_register(char *name,
		      ay_createcb  *crtcb,
		      ay_deletecb  *delcb,
		      ay_copycb    *copycb,
		      ay_drawcb    *drawcb,
		      ay_drawcb    *drawhcb,
		      ay_drawcb    *shadecb,
		      ay_propcb    *setpropcb,
		      ay_propcb    *getpropcb,
		      ay_getpntcb  *getpntcb,
		      ay_readcb    *readcb,
		      ay_writecb   *writecb,
		      ay_wribcb    *wribcb,
		      ay_bbccb     *bbccb,
		      unsigned int *type_index);

/*! \brief 
 */
int ay_otype_registercore(char *name,
			  ay_createcb  *crtcb,
			  ay_deletecb  *delcb,
			  ay_copycb    *copycb,
			  ay_drawcb    *drawcb,
			  ay_drawcb    *drawhcb,
			  ay_drawcb    *shadecb,
			  ay_propcb    *setpropcb,
			  ay_propcb    *getpropcb,
			  ay_getpntcb  *getpntcb,
			  ay_readcb    *readcb,
			  ay_writecb   *writecb,
			  ay_wribcb    *wribcb,
			  ay_bbccb     *bbccb,
			  unsigned int type_index);


/* matt.c */

/*! \brief 
 */
void ay_matt_init(Tcl_Interp *interp);

/*! \brief 
 */
int ay_matt_registermaterial(char *name, ay_mat_object *mat);

/*! \brief 
 */
int ay_matt_isregistered(char *name);

/*! \brief 
 */
int ay_matt_deregister(char *name);

/*! \brief 
 */
int ay_matt_getmaterial(char *name, ay_mat_object **material);

/*! \brief 
 */
int ay_matt_removeallrefs(ay_object *o);

/*! \brief 
 */
int ay_matt_removerefs(ay_object *o, ay_mat_object *material);

/*! \brief 
 */
int ay_matt_removecliprefs(ay_object *o);

/*! \brief 
 */
int ay_matt_connect(ay_object *o);

/*! \brief 
 */
int ay_matt_creatematerialids(ay_object *o);

/*! \brief 
 */
int ay_matt_clearmaterialids(ay_object *o);

/*! \brief 
 */
int ay_matt_wrib(char *file, ay_mat_object *m);

/*! \brief 
 */
void ay_matt_nomaterial(unsigned int type);

/*! \brief 
 */
int ay_matt_mayhavematerial(unsigned int type);


/* pact.c */

/*! \brief 
 */
int ay_pact_getpoint(int mode, ay_object *o, double *obj);

/*! \brief 
 */
void ay_pact_pedclear(ay_object *o);

/*! \brief 
 */
int ay_pact_seltcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_pact_deseltcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_pact_insertptcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_pact_deleteptcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_pact_startpetcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_pact_pedtcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
void ay_pact_griddify(double *n, double grid);

/*! \brief 
 */
int ay_pact_petcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_pact_wetcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_pact_wrtcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief Tcl command to center an object
 */
int ay_pact_centertcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);

/*! \brief 
 */
int ay_pact_snaptogridcb(struct Togl *togl, int argc, char *argv[]);


/* pomesht.c */

/*! \brief 
 */
int ay_pomesht_destroy(ay_pomesh_object *pomesh);

/*! \brief 
 */
int ay_pomesht_tesselate(ay_pomesh_object *pomesh);

/*! \brief 
 */
int ay_pomesht_merge(int merge_pv_tags, ay_list_object *list,
		     ay_object **result);

/*! \brief Tcl command to merge polymesh objects
 */
int ay_pomesht_mergetcmd(ClientData clientData, Tcl_Interp * interp,
			 int argc, char *argv[]);

/*! \brief 
 */
int ay_pomesht_optimizecoords(ay_pomesh_object *pomesh, int ignore_normals);

/*! \brief Tcl command to optimize polymesh objects
 */
int ay_pomesht_optimizetcmd(ClientData clientData, Tcl_Interp * interp,
			    int argc, char *argv[]);

/*! \brief 
 */
int ay_pomesht_tosdmesh(ay_pomesh_object *pomesh, ay_sdmesh_object **sdmesh);

/*! \brief 
 */
int ay_pomesht_splitface(ay_pomesh_object *pomesh, unsigned int f,
			 ay_pomesh_object *target);

/*! \brief 
 */
int ay_pomesht_split(ay_pomesh_object *pomesh, ay_point *pnts,
		     ay_pomesh_object **result);

/*! \brief Tcl command to split polymesh objects
 */
int ay_pomesht_splittcmd(ClientData clientData, Tcl_Interp *interp,
			 int argc, char *argv[]);


/* prefs.c */

/*! \brief Tcl command to get the preferences (C => Tcl)
 */
int ay_prefs_gettcmd(ClientData clientData, Tcl_Interp *interp,
		     int argc, char *argv[]);

/*! \brief Tcl command to set the preferences (Tcl => C)
 */
int ay_prefs_settcmd(ClientData clientData, Tcl_Interp *interp,
		     int argc, char *argv[]);


/* prop.c */

/*! \brief Tcl command to get the property of an object
 */
int ay_prop_gettcmd(ClientData clientData, Tcl_Interp *interp,
		    int argc, char *argv[]);

/*! \brief Tcl command to set the property of an object
 */
int ay_prop_settcmd(ClientData clientData, Tcl_Interp *interp,
		    int argc, char *argv[]);

/*! \brief Tcl command to get the transformations property
 */
int ay_prop_gettrafotcmd(ClientData clientData, Tcl_Interp *interp,
			 int argc, char *argv[]);

/*! \brief Tcl command to set the transformations property
 */
int ay_prop_settrafotcmd(ClientData clientData, Tcl_Interp *interp,
			 int argc, char *argv[]);

/*! \brief Tcl command to get the attributes property
 */
int ay_prop_getattrtcmd(ClientData clientData, Tcl_Interp *interp,
			int argc, char *argv[]);

/*! \brief Tcl command to set the attributes property
 */
int ay_prop_setattrtcmd(ClientData clientData, Tcl_Interp *interp,
			int argc, char *argv[]);

/*! \brief Tcl command to get the material property
 */
int ay_prop_getmattcmd(ClientData clientData, Tcl_Interp *interp,
			int argc, char *argv[]);

/*! \brief Tcl command to set the material property
 */
int ay_prop_setmattcmd(ClientData clientData, Tcl_Interp *interp,
			int argc, char *argv[]);

/*! \brief 
 */
int ay_prop_getnpinfo(Tcl_Interp *interp, char *n1, ay_object *o);

/*! \brief 
 */
int ay_prop_getncinfo(Tcl_Interp *interp, char *n1, ay_object *o);


/* provide.c */

/*! \brief 
 */
int ay_provide_register(ay_providecb  *provcb, unsigned int type_id);

/*! \brief 
 */
int ay_provide_object(ay_object *o, unsigned int type, ay_object **result);


/* pv.c */

/*! \brief parse all PV tags to RtToken/RtPointer arrays
 */
int ay_pv_filltokpar(ay_object *o, int declare, int start,
		     int *added, RtToken tokens[], RtPointer parms[]);

/*! \brief add PV tag to an object
 */
int ay_pv_add(ay_object *o, char *name, char *detail, int type,
	      int datalen, void *data);

/*! \brief merge two PV tags into one
 */
int ay_pv_merge(ay_tag *t1, ay_tag *t2, ay_tag **mt);

/*! \brief compare two PV tag variable names
 */
int ay_pv_cmpname(ay_tag *t1, ay_tag *t2);

/*! \brief convert PV tag data to value array
 */
int ay_pv_convert(ay_tag *tag, int type, unsigned int *datalen, void **data);

/*! \brief get texture coordinates from PV tag
 */
int ay_pv_getst(ay_object *o, char *mys, char *myt, void **data);

/*! \brief get vertex colors from PV tag
 */
int
ay_pv_getvc(ay_object *o, int stride, char *myc, void **data);

/*! \brief count PV tags of object o
 */
int ay_pv_count(ay_object *o);

/*! \brief initialize pv module
 */
void ay_pv_init(Tcl_Interp *interp);


/* quat.c */

/*! \brief 
 */
void ay_quat_axistoquat(double a[3], double phi, double q[4]);

/*! \brief 
 */
void ay_quat_norm(double q[4]);

/*! \brief 
 */
void ay_quat_add(double q1[4], double q2[4], double dest[4]);

/*! \brief 
 */
void ay_quat_torotmatrix(double q[4], double m[16]);

/*! \brief 
 */
void ay_quat_toeuler(double q[4], double euler[3]);

/*! \brief 
 */
int ay_quat_slerp(double time, double q1[4], double q2[4], double *r);

/*! \brief 
 */
double ay_quat_dot(double q1[4], double q2[4]);


/* read.c */

/*! \brief 
 */
int ay_read_string(FILE *fileptr, char **result);

/*! \brief 
 */
int ay_read_unistring(FILE *fileptr, Tcl_UniChar **result);

/*! \brief 
 */
int ay_read_skip(FILE *fileptr);

/*! \brief 
 */
int ay_read_header(FILE *fileptr);

/*! \brief 
 */
int ay_read_attributes(FILE *fileptr, ay_object *o);

/*! \brief 
 */
int ay_read_tags(FILE *fileptr, ay_object *o);

/*! \brief 
 */
int ay_read_shader(FILE *fileptr, ay_shader **result);

/*! \brief 
 */
int ay_read_object(FILE *fileptr);

/*! \brief 
 */
int ay_read_scene(Tcl_Interp *interp, char *filename, int insert);

/*! \brief Tcl command to open (replace) a scene file
 */
int ay_read_replacetcmd(ClientData clientData, Tcl_Interp * interp,
			int argc, char *argv[]);

/*! \brief Tcl command to open (insert) a scene file
 */
int ay_read_inserttcmd(ClientData clientData, Tcl_Interp * interp,
		       int argc, char *argv[]);


/* riattr.c */

/*! \brief 
 */
int ay_riattr_wrib(ay_object *o);

/*! \brief 
 */
void ay_riattr_init(Tcl_Interp *interp);


/* riopt.c */

/*! \brief 
 */
int ay_riopt_wrib(ay_object *o);

/*! \brief 
 */
void ay_riopt_init(Tcl_Interp *interp);


/* sdmesht.c */

/*! \brief 
 */
int ay_sdmesht_tesselate(ay_sdmesh_object *sdmesh);

/*! \brief 
 */
int ay_sdmesht_topolymesh(ay_sdmesh_object *sdmesh, ay_pomesh_object **pomesh);


/* sel.c */

/*! \brief 
 */
int ay_sel_free(int clear_selflag);

/*! \brief 
 */
int ay_sel_add(ay_object *o);

/*! \brief Tcl command to set the selection from the object listbox
 */
int ay_sel_setfromlbtcmd(ClientData clientData, Tcl_Interp *interp,
			 int argc, char *argv[]);

/*! \brief Tcl command to get the selection
 */
int ay_sel_getseltcmd(ClientData clientData, Tcl_Interp *interp,
		      int argc, char *argv[]);

/*! \brief Tcl command to silently select the last object in current level
 */
int ay_sel_hsltcmd(ClientData clientData, Tcl_Interp *interp,
		   int argc, char *argv[]);


/* selp.c */

/*! \brief 
 */
void ay_selp_clear(ay_object *o);

/*! \brief 
 */
int ay_selp_selall(ay_object *o);

/*! \brief Tcl command to select all points of an object
 */
int ay_selp_selalltcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);

/*! \brief Tcl command to apply the transformations to the points
 */
int ay_selp_applytrafotcmd(ClientData clientData, Tcl_Interp *interp,
			   int argc, char *argv[]);

/*! \brief 
 */
int ay_selp_invert(ay_object *o);

/*! \brief Tcl command to invert the point selection of an object
 */
int ay_selp_inverttcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);

/*! \brief 
 */
int ay_selp_center(ay_object *o, int mode);


/* shade.c */

/*! \brief 
 */
int ay_shade_object(struct Togl *togl, ay_object *o, int push_name);

/*! \brief 
 */
int ay_shade_view(struct Togl *togl);


/* shader.c */

#ifdef AYUSESLCARGS
/*! \brief 
 */
int ay_shader_scanslcsarg(SLC_VISSYMDEF *symbol, Tcl_DString *ds);
#endif


/*! \brief Tcl command to scan a SLC shader
 */
int ay_shader_scanslctcmd(ClientData clientData, Tcl_Interp *interp,
			  int argc, char *argv[]);
#ifdef AYUSESLXARGS
/*! \brief
 */
int ay_shader_scanslxsarg(SLX_VISSYMDEF *symbol, Tcl_DString *ds);
#endif

/*! \brief Tcl command to scan a SLX shader
 */
int ay_shader_scanslxtcmd(ClientData clientData, Tcl_Interp *interp,
			  int argc, char *argv[]);

/*! \brief 
 */
int ay_shader_free(ay_shader *shader);

/*! \brief 
 */
int ay_shader_copyarg(ay_shader_arg *source, ay_shader_arg **dest);

/*! \brief 
 */
int ay_shader_copy(ay_shader *source, ay_shader **dest);

/*! \brief 
 */
int ay_shader_wrib(ay_shader *shader, int type, RtLightHandle *light_handle);

/*! \brief Tcl command to get a shader property
 */
int ay_shader_gettcmd(ClientData clientData, Tcl_Interp * interp,
		      int argc, char *argv[]);

/*! \brief Tcl command to set a shader property
 */
int ay_shader_settcmd(ClientData clientData, Tcl_Interp * interp,
		      int argc, char *argv[]);


/* table.c */

/*! \brief 
 */
int ay_table_init(ay_table *table);

/*! \brief 
 */
int ay_table_additem(ay_table *table, void *newitem,
		     unsigned int index, int policy);


/* tags.c */

/*! \brief 
 */
int ay_tags_delall(ay_object *o);

/*! \brief 
 */
int ay_tags_free(ay_tag *tag);

/*! \brief 
 */
int ay_tags_copy(ay_tag *source, ay_tag **dest);

/*! \brief 
 */
int ay_tags_copyall(ay_object *src, ay_object *dst);

/*! \brief 
 */
int ay_tags_temp(Tcl_Interp *interp, char *name, int set, int *result);

/*! \brief Tcl command to inquire about the temporary state of a tag
 */
int ay_tags_istemptcmd(ClientData clientData, Tcl_Interp * interp,
		       int argc, char *argv[]);

/*! \brief 
 */
int ay_tags_append(ay_object *o, ay_tag *tag);

/*! \brief 
 */
int ay_tags_register(Tcl_Interp *interp, char *name, char **result);

/*! \brief Tcl command to set the tags property
 */
int ay_tags_settcmd(ClientData clientData, Tcl_Interp * interp,
		    int argc, char *argv[]);

/*! \brief Tcl command to add tags to an object
 */
int ay_tags_addtcmd(ClientData clientData, Tcl_Interp * interp,
		    int argc, char *argv[]);

/*! \brief Tcl command to get the tags property
 */
int ay_tags_gettcmd(ClientData clientData, Tcl_Interp * interp,
		    int argc, char *argv[]);

/*! \brief Tcl command to delete tags from an object
 */
int ay_tags_deletetcmd(ClientData clientData, Tcl_Interp * interp,
		       int argc, char *argv[]);

/*! \brief 
 */
int ay_tags_parseplist(char *str, int declare, RtInt *argc, RtToken **tokensr,
		       RtPointer **valuesr);

/*! \brief 
 */
int ay_tags_reconnect(ay_object *o, char *tagtype, char *tagname);


/* tc.c */

/*! \brief 
 */
int ay_tc_wrib(ay_object *o);

/*! \brief 
 */
int ay_tc_wribindex(ay_object *o, int index);

/*! \brief 
 */
int ay_tc_count(ay_object *o);

/*! \brief 
 */
void ay_tc_init(Tcl_Interp *interp);


/* tcmd.c */

/*! \brief Tcl command to
 */
int ay_tcmd_reverttcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);

/*! \brief 
 */
void ay_tcmd_showall(ay_object *o);

/*! \brief Tcl command to show (un-hide) all objects
 */
int ay_tcmd_showtcmd(ClientData clientData, Tcl_Interp *interp,
		     int argc, char *argv[]);

/*! \brief 
 */
void ay_tcmd_hideall(ay_object *o);

/*! \brief Tcl command to hide all objects
 */
int ay_tcmd_hidetcmd(ClientData clientData, Tcl_Interp *interp,
		     int argc, char *argv[]);

/*! \brief Tcl command to get the Ayam version
 */
int ay_tcmd_getvertcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);

/*! \brief 
 */
int ay_tcmd_getbppntfromindex(ay_bpatch_object *patch, int index,
			      double **p);

/*! \brief Tcl command to get the coordinates of points
 */
int ay_tcmd_getpointtcmd(ClientData clientData, Tcl_Interp *interp,
			 int argc, char *argv[]);

/*! \brief Tcl command to set the coordinates of points
 */
int ay_tcmd_setpointtcmd(ClientData clientData, Tcl_Interp *interp,
			 int argc, char *argv[]);

#ifdef AYENABLEWAIT
/*! \brief 
 */
int ay_tcmd_waitpidtcmd(ClientData clientData, Tcl_Interp *interp,
			int argc, char *argv[]);
#endif /* AYENABLEWAIT */

#ifdef AYENABLEFEXIT
/*! \brief Tcl command to exit Ayam
 */
int ay_tcmd_fastexittcmd(ClientData clientData, Tcl_Interp *interp,
			 int argc, char *argv[]);
#endif /* AYENABLEFEXIT */

/*! \brief Tcl command to execute command for a single object
 */
int ay_tcmd_withobtcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[]);


/* tgui.c */

/*! \brief 
 */
int ay_tgui_init(Tcl_Interp *interp);


/* tmp.c */

/*! \brief Tcl command to get a temporary filename
 */
int ay_tmp_gettcmd(ClientData clientData, Tcl_Interp *interp,
		   int argc, char *argv[]);


/* toglcb.c */

/*! \brief 
 */
void ay_toglcb_create(struct Togl *togl);

/*! \brief 
 */
void ay_toglcb_destroy(struct Togl *togl);

/*! \brief 
 */
void ay_toglcb_reshape(struct Togl *togl);

/*! \brief 
 */
void ay_toglcb_display(struct Togl *togl);


/* trafo.c */

/*! \brief 
 */
void ay_trafo_apply3(double *c, double *m);

/*! \brief 
 */
void ay_trafo_apply4(double *c, double *m);

/*! \brief 
 */
void ay_trafo_getall(ay_list_object *lo);

/*! \brief 
 */
void ay_trafo_getalli(ay_list_object *lo);

/*! \brief 
 */
void ay_trafo_getalls(ay_list_object *lo);

/*! \brief 
 */
void ay_trafo_getallis(ay_list_object *lo);

/*! \brief 
 */
void ay_trafo_getallsr(ay_list_object *lo);

/*! \brief 
 */
void ay_trafo_getallisr(ay_list_object *lo);

/*! \brief 
 */
void ay_trafo_getallr(ay_list_object *lo);

/*! \brief 
 */
void ay_trafo_getallir(ay_list_object *lo);

/*! \brief 
 */
int ay_trafo_delegate(ay_object *o);

/*! \brief Tcl command to delegate the transformations to the children
 */
int ay_trafo_delegatetcmd(ClientData clientData, Tcl_Interp *interp,
			  int argc, char *argv[]);

/*! \brief 
 */
void ay_trafo_applyall(ay_list_object *lo, ay_object *o, double *p);

/*! \brief 
 */
void ay_trafo_applyalli(ay_list_object *lo, ay_object *o, double *p);

/*! \brief 
 */
void ay_trafo_copy(ay_object *src, ay_object *dst);

/*! \brief 
 */
void ay_trafo_add(ay_object *src, ay_object *dst);

/*! \brief initialize transformation attributes of object o to identity 
 */
void ay_trafo_defaults(ay_object *o);

/*! \brief Tcl command to move an object
 */
int ay_trafo_movobtcmd(ClientData clientData, Tcl_Interp * interp,
		       int argc, char *argv[]);

/*! \brief Tcl command to move the selected points of an object
 */
int ay_trafo_movseltcmd(ClientData clientData, Tcl_Interp * interp,
		       int argc, char *argv[]);

/*! \brief Tcl command to scale an object
 */
int ay_trafo_scalobtcmd(ClientData clientData, Tcl_Interp * interp,
		    int argc, char *argv[]);

/*! \brief Tcl command to scale the selected points of an object
 */
int ay_trafo_scalseltcmd(ClientData clientData, Tcl_Interp * interp,
			 int argc, char *argv[]);

/*! \brief Tcl command to rotate an object
 */
int ay_trafo_rotobtcmd(ClientData clientData, Tcl_Interp * interp,
		       int argc, char *argv[]);

/*! \brief Tcl command to rotate the selected points of an object
 */
int ay_trafo_rotseltcmd(ClientData clientData, Tcl_Interp * interp,
			int argc, char *argv[]);

/*! \brief 
 */
int ay_trafo_multmatrix4(double *m1, double *m2);

/*! \brief 
 */
int ay_trafo_invmatrix4(double *m, double *mi);

/*! \brief 
 */
int ay_trafo_apply(ay_object *o, double *p, int stride, int reusem);

/*! \brief initialize transformation matrix m from transformation
 *  attributes of o
 */
int ay_trafo_creatematrix(ay_object *o, double *m);

/*! \brief initialize transformation matrix m to identity
 */
void ay_trafo_identitymatrix(double *m);

/*! \brief add a translation to transformation matrix m
 */
void ay_trafo_translatematrix(double x, double y, double z, double *m);

/*! \brief add a scale transformation to transformation matrix m
 */
void ay_trafo_scalematrix(double x, double y, double z, double *m);

/*! \brief add a rotation to transformation matrix m
 */
void ay_trafo_rotatematrix(double angle, double x, double y, double z,
			   double *m);

/*! \brief 
 */
void ay_trafo_pointstoplane(double x1, double y1, double z1,
			    double x2, double y2, double z2,
			    double x3, double y3, double z3,
			    double *A, double *B, double *C, double *D);

/*! \brief decompose transformation matrix m to transformation attributes of o
 */
void ay_trafo_decompose(double *m, ay_object *o);


/* undo.c */

/*! \brief initialize undo system
 */
int ay_undo_init(int buffer_size);

/*! \brief clear all undo states
 */
int ay_undo_clear(void);

/*! \brief clear all undo states of object o
 */
int ay_undo_clearobj(ay_object *o);

/*! \brief Tcl command to interface to the undo system
 */
int ay_undo_undotcmd(ClientData clientData, Tcl_Interp *interp,
		     int argc, char *argv[]);


/* vact.c */

/*! \brief 
 */
int ay_vact_movetcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_vact_zoomtcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_vact_moveztcb(struct Togl *togl, int argc, char *argv[]);


/* viewt.c */

/*! \brief 
 */
void ay_viewt_setupprojection(struct Togl *togl);

/*! \brief 
 */
void ay_viewt_rotate(ay_view_object *view, double rotx, double roty,
		     double rotz);

/*! \brief 
 */
int ay_viewt_wintoobj(struct Togl *togl, ay_object *o,
		      double winX, double winY,
		      double *objX, double *objY, double *objZ);

/*! \brief 
 */
int ay_viewt_winrecttoobj(struct Togl *togl, ay_object *o,
			  double winX, double winY, double winX2, double winY2,
			  double *obj);

/*! \brief 
 */
int ay_viewt_wintoworld(struct Togl *togl, double winX, double winY,
			double *worldX, double *worldY, double *worldZ);

/*! \brief 
 */
int ay_viewt_zoomtoobj(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_viewt_align(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
void ay_viewt_alignlocal(void);

/*! \brief 
 */
int ay_viewt_makecurtcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
void ay_viewt_changetype(ay_view_object *view, int type);

/*! \brief 
 */
int ay_viewt_reshapetcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_viewt_redrawtcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_viewt_setconftcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_viewt_fromcamtcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int ay_viewt_tocamtcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
void ay_viewt_uprop(ay_view_object *view);

/*! \brief 
 */
int ay_viewt_griddify(struct Togl *togl, double *winx, double *winy);

/*! \brief 
 */
int ay_viewt_droptcb(struct Togl *togl, int argc, char *argv[]);

/*! \brief 
 */
int
ay_viewt_setupintview(int viewnum, ay_view_object *vtemp);


/* w32t.c */
#ifdef WIN32

/*! \brief Tcl command to kill processes on the Win32 platform
 */
int ay_w32t_w32killtcmd(ClientData clientData, Tcl_Interp *interp,
			int argc, char *argv[]);
#endif


/* wrib.c */

/*! \brief check, whether o should be considered a CSG primitive
 */
int ay_wrib_isprimitive(ay_object *o);

/*! \brief check for NoExport tags of an object
 */
int ay_wrib_noexport(ay_object *o);

/*! \brief set up camera for RIB export
 */
void ay_wrib_aimz(RtPoint direction);

/*! \brief set up camera for RIB export
 */
void ay_wrib_placecamera(RtPoint position, RtPoint direction, double roll);

/*! \brief export the RiOptions to a RIB file
 */
int ay_wrib_rioptions(void);

/*! \brief look through the scene whether there are any lights switched on
 */
int ay_wrib_checklights(ay_object *o);

/*! \brief export the lights to a RIB file
 */
int ay_wrib_lights(char *file, ay_object *o);

/*! \brief export the root object shaders (e.g. RiImager) to a RIB file
 */
void ay_wrib_rootsh(int imager);

/*! \brief export the default material to a RIB file
 */
void ay_wrib_defmat(char *file);

/*! \brief export transformations of an object to a RIB file
 */
int ay_wrib_trafos(ay_object *o);

/*! \brief export an object to a RIB file
 */
int ay_wrib_object(char *file, ay_object *o);

/*! \brief export a referenced object to a RIB file
 */
int ay_wrib_refobject(char *file, ay_object *o);

/*! \brief export the scene to a RIB file
 */
int ay_wrib_scene(char *file, char *image, int temp, int rtf,
		  double *from, double *to,
		  double roll, double zoom, double nearp, double farp,
		  int width, int height, int type);

/*! \brief Togl callback for exporting the scene to a RIB file
 */
int ay_wrib_cb(struct Togl *togl, int argc, char *argv[]);

/*! \brief export RiDisplay tags to a RIB file
 */
void ay_wrib_displaytags(void);

/*! \brief export RiHider tags to a RIB file
 */
void ay_wrib_hidertags(void);

/*! \brief Tcl command to export the scene to a RIB file
 */
int ay_wrib_tcmd(ClientData clientData, Tcl_Interp * interp,
		 int argc, char *argv[]);

#ifdef AYENABLEPPREV

/*! \brief redraw permanent preview window
 */
int ay_wrib_pprevdraw(ay_view_object *view);

/*! \brief open permanent preview window
 */
int ay_wrib_pprevopen(ay_view_object *view);

/*! \brief close permanent preview window
 */
void ay_wrib_pprevclose();
#endif

/*! \brief initialize RIB export module
 */
void ay_wrib_init(Tcl_Interp *interp);


/* write.c */

/*! \brief write the Ayam scene file format header to a scene file
 */
int ay_write_header(FILE *fileptr);

/*! \brief save object attributes to a scene file
 */
int ay_write_attributes(FILE *fileptr, ay_object *o);

/*! \brief save object tags to a scene file
 */
int ay_write_tags(FILE *fileptr, ay_object *o);

/*! \brief save a shader to a scene file
 */
int ay_write_shader(FILE *fileptr, ay_shader *shader);

/*! \brief save an object to a scene file
 */
int ay_write_object(FILE *fileptr, ay_object *o);

/*! \brief save the scene to a scene file
 */
int ay_write_scene(char *fname, int selected);

/*! \brief Tcl command to save the scene to a scene file
 */
int ay_write_scenetcmd(ClientData clientData, Tcl_Interp * interp,
		       int argc, char *argv[]);

#endif /* __aycore_h__ */
