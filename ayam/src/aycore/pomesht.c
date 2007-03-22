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

/* pomesht.c - PolyMesh object tools */


/* types local to this module */

typedef struct ay_pomesht_listobject_s
{
  struct ay_pomesht_listobject_s *next;
  void *data;
} ay_pomesht_listobject;

typedef struct ay_pomesht_htentry_s
{
  struct ay_pomesht_htentry_s *next;
  unsigned int index;
  double x, y, z, nx, ny, nz;
} ay_pomesht_htentry;

typedef struct ay_pomesh_hash_s
{
  int found;
  unsigned int index;
  int c;
  int T; /* tablesize */
  ay_pomesht_htentry **table;
} ay_pomesht_hash;

#define AYVCOMP(x1,y1,z1,x2,y2,z2) ((fabs(x1-x2)<=AY_EPSILON) && \
           (fabs(y1-y2)<=AY_EPSILON)&&(fabs(z1-z2)<= AY_EPSILON))


/* prototypes of functions local to this module */

void ay_pomesht_tcbBegin(GLenum prim);

void ay_pomesht_tcbVertex(void *data);

void ay_pomesht_tcbVertexN(void *data);

void ay_pomesht_tcbEnd(void);

void ay_pomesht_tcbCombine(GLdouble c[3], void *d[4], GLfloat w[4],
			   void **out);

void ay_pomesht_tcbCombineN(GLdouble c[3], void *d[4], GLfloat w[4],
			    void **out);

void ay_pomesht_ManageCombined(void *data);

void ay_pomesht_setautonormal(double *v1, double *v2, double *v3);

int ay_pomesht_inithash(ay_pomesht_hash *hash);

void ay_pomesht_destroyhash(ay_pomesht_hash *hash);

int ay_pomesht_addvertexhash(ay_pomesht_hash *phash, int ign, double *point);


/* functions */

 /* ay_pomesht_destroy:
  */
int
ay_pomesht_destroy(ay_pomesh_object *pomesh)
{

  if(!pomesh)
    return AY_ENULL;

  if(pomesh->nloops)
    free(pomesh->nloops);
  if(pomesh->nverts)
    free(pomesh->nverts);
  if(pomesh->verts)
    free(pomesh->verts);
  if(pomesh->controlv)
    free(pomesh->controlv);
  free(pomesh);

 return AY_OK;
} /* ay_pomesht_destroy */

/* tesselation callbacks needed by GLU */
void
ay_pomesht_tcbBegin(GLenum prim)
{
  glBegin(prim);
} /* ay_pomesht_tcbBegin */


void
ay_pomesht_tcbVertex(void *data)

{
  glVertex3dv((GLdouble *)data);
} /* ay_pomesht_tcbVertex */


void
ay_pomesht_tcbVertexN(void *data)

{
  glNormal3dv(((GLdouble *)data)+3);
  glVertex3dv((GLdouble *)data);
} /* ay_pomesht_tcbVertexN */


void
ay_pomesht_tcbEnd(void)
{
  glEnd();
} /* ay_pomesht_tcbEnd */


void
ay_pomesht_tcbCombine(GLdouble c[3], void *d[4], GLfloat w[4], void **out)
{
 GLdouble *nv = NULL;

 if(!(nv = (GLdouble *) malloc(sizeof(GLdouble)*3)))
   return;

  nv[0] = c[0];
  nv[1] = c[1];
  nv[2] = c[2];

  /* remember pointer to free it later */
  ay_pomesht_ManageCombined((void*)nv);

  *out = nv;
} /* ay_pomesht_tcbCombine */


void
ay_pomesht_tcbCombineN(GLdouble c[3], void *d[4], GLfloat w[4], void **out)
{
 GLdouble *nv = NULL;

 if(!(nv = (GLdouble *) malloc(sizeof(GLdouble)*6)))
   return;

  nv[0] = c[0];
  nv[1] = c[1];
  nv[2] = c[2];

  nv[3] = w[0]*((double*)d[0])[3] + w[1]*((double*)d[1])[3] +
    w[2]*((double*)d[2])[3] + w[3]*((double*)d[3])[3];

  nv[4] = w[0]*((double*)d[0])[4] + w[1]*((double*)d[1])[4] +
    w[2]*((double*)d[2])[4] + w[3]*((double*)d[3])[4];

  nv[5] = w[0]*((double*)d[0])[5] + w[1]*((double*)d[1])[5] +
    w[2]*((double*)d[2])[5] + w[3]*((double*)d[3])[5];

  /* remember pointer to free it later */
  ay_pomesht_ManageCombined((void*)nv);

  *out = nv;
} /* ay_pomesht_tcbCombineN */


void
ay_pomesht_ManageCombined(void *data)
{
 static ay_pomesht_listobject *list = NULL;
 ay_pomesht_listobject *new = NULL;

  if(data)
    { /* add new pointer to the list */
      if(!(new = calloc(1, sizeof(ay_pomesht_listobject))))
	return;

      new->data = data;
      new->next = list;
      list = new;
    }
  else
    { /* data == NULL => free the list */
      while(list)
	{
	  new = list;
	  list = new->next;
	  free(new->data);
	  free(new);
	} /* while */
    } /* if */

 return;
} /* ay_pomesht_ManageCombined */


/* ay_pomesht_setautonormal:
 *
 */
void
ay_pomesht_setautonormal(double *v1, double *v2, double *v3)
{
 double t1[3], t2[3];
 GLdouble n[3];

  AY_V3SUB(t1, v1, v2)
  AY_V3SUB(t2, v1, v3)
  AY_V3CROSS(n, t1, t2)

  /* the next fragment should be unneeded, because we enable
     GL_NORMALIZE in ay_toglcb_create */

  /*
  AY_V3NORM(n)

  glMatrixMode(GL_MODELVIEW);
  glPushMatrix();
   glLoadIdentity();
  */
   glNormal3dv(n);
  /*
  glPopMatrix();
  */

 return;
} /* ay_pomesht_setautonormal */


/* ay_pomesht_tesselate:
 *  tesselate PolyMesh <pomesh> into triangles and draw them
 *  immediately using OpenGL
 */
int
ay_pomesht_tesselate(ay_pomesh_object *pomesh)
{
 unsigned int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0;
 unsigned int a;
 int stride = 0;
 GLUtesselator *tess = NULL;

  if(pomesh->has_normals)
    stride = 6;
  else
    stride = 3;

  for(i = 0; i < pomesh->npolys; i++)
    {
      /* is this polygon a simple triangle? */
      if((pomesh->nloops[i] == 1) && (pomesh->nverts[m] == 3))
	{
	  if(!pomesh->has_normals)
	    {
	      ay_pomesht_setautonormal(&pomesh->controlv[pomesh->verts[n] *
							stride],
				       &pomesh->controlv[pomesh->verts[n+1] *
							stride],
				       &pomesh->controlv[pomesh->verts[n+2] *
							stride]);
	    }

	  glBegin(GL_TRIANGLES);
	   a = pomesh->verts[n++];
	   if(pomesh->has_normals)
	     glNormal3dv((GLdouble*)(&(pomesh->controlv[a*stride+3])));
	   glVertex3dv((GLdouble*)(&(pomesh->controlv[a*stride])));
	   a = pomesh->verts[n++];
	   if(pomesh->has_normals)
	     glNormal3dv((GLdouble*)(&(pomesh->controlv[a*stride+3])));
	   glVertex3dv((GLdouble*)(&(pomesh->controlv[a*stride])));
	   a = pomesh->verts[n++];
	   if(pomesh->has_normals)
	     glNormal3dv((GLdouble*)(&(pomesh->controlv[a*stride+3])));
	   glVertex3dv((GLdouble*)(&(pomesh->controlv[a*stride])));
	  glEnd();

	  m++;
	  l++;

	}
      else
	{

	  if(!(tess = gluNewTess()))
	    return AY_EOMEM;

	  gluTessCallback(tess, GLU_TESS_ERROR, AYGLUCBTYPE ay_error_glucb);
	  gluTessCallback(tess, GLU_TESS_BEGIN, AYGLUCBTYPE ay_pomesht_tcbBegin);


	  if(!pomesh->has_normals)
	    {
	      gluTessCallback(tess, GLU_TESS_VERTEX, AYGLUCBTYPE ay_pomesht_tcbVertex);
	      gluTessCallback(tess, GLU_TESS_COMBINE, AYGLUCBTYPE ay_pomesht_tcbCombine);
	    }
	  else
	    {
	      gluTessCallback(tess, GLU_TESS_VERTEX, AYGLUCBTYPE ay_pomesht_tcbVertexN);
	      gluTessCallback(tess, GLU_TESS_COMBINE, AYGLUCBTYPE ay_pomesht_tcbCombineN);
	    } /* if */

	  gluTessCallback(tess, GLU_TESS_END, AYGLUCBTYPE ay_pomesht_tcbEnd);

	  /* GLU 1.2 only: */
	  /*gluTessBeginPolygon(tess, NULL);*/
	  gluBeginPolygon(tess);
	  if(!pomesh->has_normals)
	    {
	  ay_pomesht_setautonormal(&pomesh->controlv[pomesh->verts[n]*stride],
				  &pomesh->controlv[pomesh->verts[n+1]*stride],
				 &pomesh->controlv[pomesh->verts[n+2]*stride]);
	    }

	  for(j = 0; j < pomesh->nloops[l]; j++)
	    {
	      /*gluTessBeginContour(tess);*/
	      for(k = 0; k < pomesh->nverts[m]; k++)
		{
		  a = pomesh->verts[n++];
		  gluTessVertex(tess,
				(GLdouble*)(&(pomesh->controlv[a*stride])),
				(GLdouble*)(&(pomesh->controlv[a*stride])));
		} /* for */
	      /*gluTessEndContour(tess);*/
	      gluNextContour(tess, GLU_INTERIOR);
	      m++;
	    } /* for */
	  /*      gluTessEndPolygon(tess);*/
	  gluEndPolygon(tess);
	  gluDeleteTess(tess);
	  /* free combined vertices */
	  ay_pomesht_ManageCombined(NULL);
	  l++;
	} /* if */
    } /* for */

 return AY_OK;
} /* ay_pomesht_tesselate */


/* ay_pomesht_merge:
 *  merge all PolyMesh objects to be found in list into a single
 *  new PolyMesh and return this new object in result
 */
int
ay_pomesht_merge(int merge_pv_tags, ay_list_object *list, ay_object **result)
{
 int ay_status = AY_OK;
 char fname[] = "mergePo";
 ay_list_object *lo = list;
 ay_object *o = NULL, *no = NULL;
 ay_pomesh_object *pm = NULL, *npm = NULL;
 unsigned int i = 0, j = 0, k = 0;
 unsigned int total_polys = 0, total_loops = 0, total_verts = 0,
   total_controls = 0;
 unsigned int pmloops = 0, pmverts = 0;
 unsigned int nextloops = 0, nextnverts = 0, nextverts = 0,
   nextcontrols = 0, oldpmncontrols = 0;
 int has_normals = -1, stride = 0;
 double dummy[3] = {0};
 int have_pv_tags = AY_TRUE;
 ay_tag *tag1 = NULL, *tag2 = NULL, *mtag = NULL;
 char *ct;

  while(lo)
    {
      o = lo->object;
      if(o->type == AY_IDPOMESH)
	{
	  i++;
	  pm = (ay_pomesh_object*)o->refine;

	  if(has_normals != -1)
	    {
	      if(pm->has_normals != has_normals)
		{
		  ay_error(AY_ERROR, fname,
			   "found meshes with and without vertex normals");
		  return AY_ERROR;
		} /* if */
	    } /* if */

	  total_polys += pm->npolys;

	  pmloops = 0;
	  for(j = 0; j < pm->npolys; j++)
	    {
	      pmloops += pm->nloops[j];
	      total_loops += pm->nloops[j];
	    }

	  pmverts = 0;
	  for(j = 0; j < pmloops; j++)
	    {
	      pmverts += pm->nverts[j];
	      total_verts += pm->nverts[j];
	    }

	  total_controls += pm->ncontrols;

	  has_normals = pm->has_normals;
	} /* if */
      lo = lo->next;
    } /* while */

  if(i < 2)
    {
      ay_error(AY_ERROR, fname, "found too few meshes");
      return AY_ERROR;
    }

  if(has_normals)
    stride = 6;
  else
    stride = 3;

  /* create a new PolyMesh object */
  if(!(no = calloc(1, sizeof(ay_object))))
    {
      ay_error(AY_EOMEM, fname, NULL);
      return AY_EOMEM;
    }
  ay_status = ay_object_defaults(no);

  no->type = AY_IDPOMESH;

  if(!(npm = calloc(1, sizeof(ay_pomesh_object))))
    {
      free(no);
      ay_error(AY_EOMEM, fname, NULL);
      return AY_EOMEM;
    }

  npm->npolys = total_polys;
  npm->has_normals = has_normals;
  npm->ncontrols = total_controls;

  no->refine = (void*)npm;

  /* allocate memory for new merged PolyMesh */
  if(!(npm->nloops = calloc(total_polys, sizeof(unsigned int))))
    {
      free(no); free(npm); return AY_EOMEM;
    }
  if(!(npm->nverts = calloc(total_loops, sizeof(unsigned int))))
    {
      free(no); free(npm); free(npm->nloops); return AY_EOMEM;
    }
  if(!(npm->verts = calloc(total_verts, sizeof(unsigned int))))
    {
      free(no); free(npm); free(npm->nloops); free(npm->nverts);
      return AY_EOMEM;
    }
  if(!(npm->controlv = calloc(stride * total_controls, sizeof(double))))
    {
      free(no); free(npm);  free(npm->nloops); free(npm->nverts);
      free(npm->verts); return AY_EOMEM;
    }

  /* now we fill the new object with the values from all meshes to merge */
  lo = list;
  while(lo)
    {
      o = lo->object;
      if(o->type == AY_IDPOMESH)
	{
	  i++;
	  pm = (ay_pomesh_object*)o->refine;

	  memcpy(&(npm->nloops[nextloops]), pm->nloops,
		 pm->npolys * sizeof(unsigned int));

	  pmloops = 0;
	  for(j = 0; j < pm->npolys; j++)
	    {
	      pmloops += pm->nloops[j];
	    } /* for */

	  memcpy(&(npm->nverts[nextnverts]), pm->nverts,
		 pmloops * sizeof(unsigned int));

	  pmverts = 0;
	  for(j = 0; j < pmloops; j++)
	    {
	      pmverts += pm->nverts[j];
	    } /* for */

	  /* the vertex indices need to be adapted to the new
	     (bigger) control point database */
	  k = 0;
	  for(j = nextverts; j < nextverts+pmverts; j++)
	    {
	      npm->verts[j] = pm->verts[k]+oldpmncontrols;
	      k++;
	    } /* for */

	  /* if the object has non-default transformation attributes,
	     we also need to transform the control points */
	  if((fabs(o->movx) > AY_EPSILON) ||
	     (fabs(o->movy) > AY_EPSILON) ||
	     (fabs(o->movz) > AY_EPSILON) ||
	     (fabs(1.0 - o->scalx) > AY_EPSILON) ||
	     (fabs(1.0 - o->scaly) > AY_EPSILON) ||
	     (fabs(1.0 - o->scalz) > AY_EPSILON) ||
	     (fabs(o->quat[0]) > AY_EPSILON) ||
	     (fabs(o->quat[1]) > AY_EPSILON) ||
	     (fabs(o->quat[2]) > AY_EPSILON) ||
	     (fabs(1.0 - o->quat[3]) > AY_EPSILON))
	    {
	      k = 0;
	      ay_trafo_apply(o, dummy, 3, AY_FALSE);
	      for(j = 0; j < pm->ncontrols; j++)
		{
		  memcpy(&(npm->controlv[nextcontrols + k]),
			 &(pm->controlv[k]),
			 stride * sizeof(double));
		  ay_trafo_apply(o, &(npm->controlv[nextcontrols + k]), 3,
				 AY_TRUE);
		  k += stride;
		} /* for */
	    } else {
	      memcpy(&(npm->controlv[nextcontrols]), pm->controlv,
		     stride * pm->ncontrols * sizeof(double));
	    }

	  nextloops    += pm->npolys;
	  nextnverts   += pmloops;
	  nextverts    += pmverts;
	  nextcontrols += (stride * pm->ncontrols);
	  oldpmncontrols += pm->ncontrols;

	  if(merge_pv_tags && have_pv_tags)
	    {
	      /* first object? */
	      if(lo == list)
		{
		  /* yes, just copy the tags */
		  have_pv_tags = AY_FALSE;
		  if(o->tags)
		    {
		      tag1 = o->tags;
		      while(tag1)
			{
			  if(tag1->type == ay_pv_tagtype)
			    {
			      have_pv_tags = AY_TRUE;
			      break;
			    }
			  tag1 = tag1->next;
			} /* while */
		      ay_status = ay_tags_copyall(o, no);
		    } /* if */
		}
	      else
		{
		  /* not first object, merge tags */
		  tag1 = no->tags;
		  while(tag1)
		    {
		      if(tag1->type == ay_pv_tagtype)
			{
			  /* find matching PV tag to merge it in */
			  tag2 = o->tags;
			  while(tag2)
			    {
			      mtag = NULL;
			      if((tag2->type == ay_pv_tagtype) &&
				 ay_pv_cmpname(tag1, tag2))
				ay_status = ay_pv_merge(tag1, tag2, &mtag);
			      if(mtag)
				{
				  /* swap value strings tag1<>mtag */
				  ct = tag1->val;
				  tag1->val = mtag->val;
				  mtag->val = ct;
				  ay_tags_free(mtag);
				} /* if */
			      tag2 = tag2->next;
			    } /* while */
			} /* if */
		      tag1 = tag1->next;
		    } /* while */
		} /* if */
	    } /* if */
	} /* if */

      lo = lo->next;
    } /* while */

  *result = no;

 return AY_OK;
} /* ay_pomesht_merge */


/* ay_pomesht_mergetcmd:
 *  merge all selected PolyMesh objects into a new one
 *  and link this new PolyMesh to the scene
 */
int
ay_pomesht_mergetcmd(ClientData clientData, Tcl_Interp * interp,
		     int argc, char *argv[])
{
 int ay_status = AY_OK;
 int i = 1, mergepvtags = AY_FALSE;
 char fname[] = "mergePo";
 ay_object *no = NULL;

  if(!ay_selection)
    {
      ay_error(AY_ENOSEL, fname, NULL);
      return TCL_OK;
    }

  while(i+1 < argc)
    {
      if(!strcmp(argv[i], "-p"))
	{
	  sscanf(argv[i+1], "%d", &mergepvtags);
	}
      i += 2;
    }

  ay_status = ay_pomesht_merge(mergepvtags, ay_selection, &no);

  if(ay_status)
    { /* emit error message */
      ay_error(AY_ERROR, fname, "could not merge objects");
    }
  else
    { /* link the new PolyMesh to the scene */
      ay_status = ay_object_link(no);
    }

 return TCL_OK;
} /* ay_pomesht_mergetcmd */


int
ay_pomesht_inithash(ay_pomesht_hash *hash)
{

  hash->table = (ay_pomesht_htentry **)calloc(1, sizeof(ay_pomesht_htentry *) *
					      hash->T);
  if(hash->table)
    return AY_OK;
  else
    return AY_EOMEM;
} /* ay_pomesht_inithash */


void
ay_pomesht_destroyhash(ay_pomesht_hash *hash)
{
 int i;
 ay_pomesht_htentry *entry;
 ay_pomesht_htentry *tmp;

  if(hash)
    {
      for(i = 0; i < hash->T; i++)
	{
	  entry = hash->table[i];
	  tmp = entry;

	  while(tmp)
	    {
	      tmp = entry->next;
	      free(entry);
	      entry = tmp;
	    } /* while */
	} /* for */

      if(hash->table)
	free(hash->table);

      free(hash);
    } /* if */

 return;
} /* ay_pomesht_destroyhash */


int
ay_pomesht_addvertexhash(ay_pomesht_hash *phash, int ign, double *point)
{
 int ay_status = AY_OK;
 unsigned int index;
 ay_pomesht_htentry *entry;
 ay_pomesht_htentry *chain;
 double x, y, z;

  x = point[0];
  y = point[1];
  z = point[2];

  index = (unsigned int)((3 * fabs(x) + 5 * fabs(y) + 7 * fabs(z)) *
			 phash->c + 0.5f) % phash->T;

  entry = phash->table[index];

  phash->found = AY_FALSE;

  if(entry)
    {
      chain = entry;

      while(chain)
	{
	  /* ignore normals? */
          if(ign)
	    {
	      if(AYVCOMP(chain->x, chain->y, chain->z, x, y, z))
		{
		  phash->index = chain->index;
		  phash->found = AY_TRUE;
		  break;
		} /* if */
	    }
	  else
	    {
	      if(AYVCOMP(chain->x, chain->y, chain->z, x, y, z) &&
     AYVCOMP(chain->nx, chain->ny, chain->nz, point[3], point[4], point[5]))
	        {
		  phash->index = chain->index;
		  phash->found = AY_TRUE;
		  break;
		} /* if */
	    } /* if */

	  chain = chain->next;
	} /* while */
    } /* if */

  /* add new entry? */
  if(!phash->found)
    {
      ay_pomesht_htentry *new;

      new = (ay_pomesht_htentry *)calloc(1, sizeof(ay_pomesht_htentry));

      new->index = phash->index;
      new->x = x;
      new->y = y;
      new->z = z;

      /* use normals? */
      if(!ign)
	{
	  new->nx = point[3];
	  new->ny = point[4];
	  new->nz = point[5];
	}

      if(entry)
	new->next = entry;

      phash->table[index] = new;

    } /* if */

 return ay_status;
} /* ay_pomesht_addvertexhash */


int
ay_pomesht_optimizecoords(ay_pomesh_object *pomesh, int ignore_normals)
{
 int ay_status = AY_OK;
 ay_pomesh_object *new = NULL;
 ay_pomesht_hash *phash;
 unsigned int i, total_loops = 0, total_verts = 0;
 unsigned int p, dp, t;
 int stride;
 double *tmp = NULL;

  if(!(new = (ay_pomesh_object *) calloc(1, sizeof(ay_pomesh_object))))
    return AY_EOMEM;

  /* calc total verts */
  for(i = 0; i < pomesh->npolys; i++)
    {
      total_loops += pomesh->nloops[i];
    } /* for */

  for(i = 0; i < total_loops; i++)
    {
      total_verts += pomesh->nverts[i];
    } /* for */

  if(!(new->verts = (unsigned int *)calloc(1, sizeof(unsigned int) *
					   total_verts)))
    { free(new); return AY_EOMEM; }
  new->ncontrols = 0;

  if(pomesh->has_normals)
    stride = 6;
  else
    stride = 3;

  if(!(new->controlv = (double *)calloc(1, pomesh->ncontrols * stride *
					sizeof(double))))
    { free(new); free(new->verts); return AY_EOMEM; }

  phash = (ay_pomesht_hash *)calloc(1, sizeof(ay_pomesht_hash));
  phash->T = total_verts/5;		/* hashtablesize */
  phash->c = 1024;

  if(ay_pomesht_inithash(phash) == AY_EOMEM)
    { free(new); free(new->verts); free(new->controlv); return AY_EOMEM; }

  dp = 0;

  /* if the user requested to honour normals but we have no normals
     we have to set ignore_normals to true */
  if(!ignore_normals && !pomesh->has_normals)
    ignore_normals = AY_TRUE;


  for(i = 0; i < total_verts; i++)
    {
      p = pomesh->verts[i] * stride;

      phash->found = AY_FALSE;
      phash->index = dp;

      ay_pomesht_addvertexhash(phash, ignore_normals, &pomesh->controlv[p]);

      if(phash->found)
	{
	  new->verts[i] = phash->index;
	}
      else
	{
	  new->verts[i] = dp;
	  t = dp * stride;
	  dp++;
	  new->ncontrols++;
	  memcpy(&(new->controlv[t]), &(pomesh->controlv[p]),
		 stride * sizeof(double));
	} /* if */
    } /* for */

  ay_pomesht_destroyhash(phash);

  if(pomesh->verts)
    free(pomesh->verts);

  if(pomesh->controlv)
    free(pomesh->controlv);

  pomesh->verts = new->verts;
  pomesh->controlv = new->controlv;
  pomesh->ncontrols = new->ncontrols;
  if(!(tmp = realloc(pomesh->controlv, new->ncontrols * stride *
		     sizeof(double))))
    {
      ay_status = AY_EOMEM;
    }
  else
    {
      pomesh->controlv = tmp;
    }
  free(new);

  return ay_status;
} /* ay_pomesht_optimizecoords */


/* ay_pomesht_optimizetcmd:
 *  optimizes all selected PolyMesh objects
 */
int
ay_pomesht_optimizetcmd(ClientData clientData, Tcl_Interp * interp,
			int argc, char *argv[])
{
 int ay_status = AY_OK;
 int i = 1, optimize_coords = 1, ignore_normals = 1, optimize_faces = 0;
 char fname[] = "optiPo";
 ay_object *o = NULL;
 ay_list_object *sel = ay_selection;

  while(i+1 < argc)
    {
      if(!strcmp(argv[i], "-c"))
	{
	  sscanf(argv[i+1], "%d", &optimize_coords);
	}
      else
      if(!strcmp(argv[i], "-n"))
	{
	  sscanf(argv[i+1], "%d", &ignore_normals);
	}
      else
      if(!strcmp(argv[i], "-f"))
	{
	  sscanf(argv[i+1], "%d", &optimize_faces);
	}

      i += 2;
  } /* while */

  if(!sel)
    {
      ay_error(AY_ENOSEL, fname, NULL);
      return TCL_OK;
    }

  while(sel)
    {
      o = ay_selection->object;

      if(o && o->type == AY_IDPOMESH)
	{
	  ay_status = AY_OK;
	  if(optimize_coords)
	    {
	      ay_status = ay_pomesht_optimizecoords(o->refine, ignore_normals);
	    }
	  if(ay_status)
	    { /* emit error message */
	      ay_error(AY_ERROR, fname, "could not optimize object");
	    }
	}
      else
	{
	  ay_error(AY_ERROR, fname, "Can only operate on PolyMesh objects!");
	} /* if */

      sel = sel->next;
    } /* while */

 return TCL_OK;
} /* ay_pomesht_optimizetcmd */


/* ay_pomesht_tosdmesh:
 *  convert PolyMesh object <pomesh> to a SDMesh object, return result
 *  in <sdmesh>
 *  Note: faces with more than one loop (holes) are ignored, if these are
 *  encountered, not all control points in the resulting SDMesh object
 *  may end up being used
 */
int
ay_pomesht_tosdmesh(ay_pomesh_object *pomesh, ay_sdmesh_object **sdmesh)
{
 int ay_status = AY_OK;
 double *ncontrolv  = NULL;
 unsigned int *nverts = NULL, *verts = NULL, *t = NULL;
 unsigned int i, j, k, l = 0, m = 0, n = 0, totalverts = 0;
 ay_sdmesh_object *nsdmesh = NULL;

  if(!pomesh || !sdmesh)
    return AY_ENULL;

  if(!(nsdmesh = calloc(1, sizeof(ay_sdmesh_object))))
    { ay_status = AY_EOMEM; goto cleanup; }

  /* copy control points */
  if(!(ncontrolv = calloc(pomesh->ncontrols, 3*sizeof(double))))
    { ay_status = AY_EOMEM; goto cleanup; }

  nsdmesh->controlv = ncontrolv;
  nsdmesh->ncontrols = pomesh->ncontrols;

  if(!pomesh->has_normals)
    {
      memcpy(ncontrolv, pomesh->controlv, pomesh->ncontrols*3*sizeof(double));
    }
  else
    {
      for(i = 0; i < pomesh->ncontrols; i++)
	{
	  memcpy(&(ncontrolv[i*3]), &(pomesh->controlv[i*6]),
		 3*sizeof(double));
	} /* for */
    } /* if */

  /* copy faces */
  for(i = 0; i < pomesh->npolys; i++)
    {
      if(pomesh->nloops[i] < 2)
	{
	  t = NULL;
	  if(!(t = realloc(nverts, (nsdmesh->nfaces+1)*sizeof(unsigned int))))
	    { ay_status = AY_EOMEM; goto cleanup; }
	  nverts = t;
	  nverts[nsdmesh->nfaces] = pomesh->nverts[m];

	  t = NULL;
	  if(!(t = realloc(verts, (totalverts+pomesh->nverts[m])*
			   sizeof(unsigned int))))
	    { ay_status = AY_EOMEM; goto cleanup; }
	  verts = t;
	  for(k = 0; k < pomesh->nverts[m]; k++)
	    {
	      verts[totalverts+k] = pomesh->verts[n];
	      n++;
	    } /* for */

	  totalverts += pomesh->nverts[m];
	  m++;
	  nsdmesh->nfaces++;
	}
      else
	{
	  /* just advance pointers m/n correctly (while ignoring
	     faces with holes) */
	  for(j = 0; j < pomesh->nloops[l]; j++)
	    {
	      for(k = 0; k < pomesh->nverts[m]; k++)
		{
		  n++;
		} /* for */
	      m++;
	    } /* for */
	} /* if */
      l++;
    } /* for */

  nsdmesh->nverts = nverts;
  nsdmesh->verts = verts;

  /* return result */
  *sdmesh = nsdmesh;
  nsdmesh = NULL;

cleanup:

 if(nsdmesh)
   {
     free(nsdmesh);
     if(ncontrolv)
       free(ncontrolv);
     if(nverts)
       free(nverts);
     if(verts)
       free(verts);
   } /* if */

 return ay_status;
} /* ay_pomesht_tosdmesh */


/* ay_pomesht_splitface:
 *  split face <f> off of polymesh <pomesh> and add it to the
 *  polymesh <target>
 *  <pomesh> remains unchanged
 */
int
ay_pomesht_splitface(ay_pomesh_object *pomesh, unsigned int f,
		     ay_pomesh_object *target)
{
 int ay_status = AY_OK;
 int stride;
 unsigned int i, j, k, l, m, n, *tmp;
 unsigned int oldtotalloops = 0, oldtotalverts = 0;
 double *dtmp;

  if(!pomesh || !target)
    return AY_ENULL;

  if(f > pomesh->npolys)
    return AY_ERROR;
  
  if(pomesh->has_normals)
    stride = 6;
  else
    stride = 3;

  target->has_normals = pomesh->has_normals;

  /* fast forward m to face to split off, also keep l for later use
     as loop index (points to the loops of the face to split off) */
  l = 0;
  m = 0;
  for(i = 0; i < f; i++)
    {
      for(j = 0; j < pomesh->nloops[i]; j++)
	{
	  m += pomesh->nverts[l];
	  l++;
	}
    }

  /* count number of old loops and vertices (in target) */
  n = 0;
  for(i = 0; i < target->npolys; i++)
    {
      oldtotalloops += target->nloops[i];
      for(j = 0; j < target->nloops[i]; j++)
	{
	  oldtotalverts += target->nverts[n];
	  n++;
	}
    }

  /* increase targets number of faces counter */
  target->npolys++;

  /* for the new face in target, set the number of loops */
  tmp = NULL;
  if(!(tmp = realloc(target->nloops, target->npolys*sizeof(unsigned int))))
    {
      return AY_EOMEM;
    }
  target->nloops = tmp;
  target->nloops[target->npolys-1] = pomesh->nloops[f];

  /* for all new loops in target, set the number of vertices */
  tmp = NULL;
  if(!(tmp = realloc(target->nverts, (oldtotalloops + pomesh->nloops[f]) *
		     sizeof(unsigned int))))
    {
      return AY_EOMEM;
    }
  target->nverts = tmp;
  for(k = oldtotalloops; k < oldtotalloops + pomesh->nloops[f]; k++)
    {
      /* l is the loop index (in pomesh) */
      target->nverts[k] = pomesh->nverts[l];

      /* also create new vertice info and copy control points */
      tmp = NULL;
      if(!(tmp = realloc(target->verts, (oldtotalverts + pomesh->nverts[l]) *
			 sizeof(unsigned int))))
	{
	  return AY_EOMEM;
	}
      target->verts = tmp;
      dtmp = NULL;
      if(!(dtmp = realloc(target->controlv, (target->ncontrols +
					     pomesh->nverts[l]) * stride *
			  sizeof(double))))
	{
	  return AY_EOMEM;
	}
      target->controlv = dtmp;
      for(n = 0; n < pomesh->nverts[l]; n++)
	{
	  target->verts[oldtotalverts + n] = target->ncontrols + n;
	  if(pomesh->verts[m + n]>pomesh->ncontrols)
	    printf("gotcha!\n");	    
	  memcpy(&(target->controlv[(target->ncontrols + n)*stride]),
		 &(pomesh->controlv[(pomesh->verts[m + n])*stride]),
		 stride*sizeof(double));
	} /* for */
      target->ncontrols += pomesh->nverts[l];
  
      /* increase all index variables used */
      m += pomesh->nverts[l];
      oldtotalverts += pomesh->nverts[l];
      l++;
    } /* for */

 return ay_status;
} /* ay_pomesht_splitface */


/* ay_pomesht_split:
 *  split polymesh <pomesh> into two, based on selected points in <pnts>
 *  returns resulting new polymesh in <result>
 */
int
ay_pomesht_split(ay_pomesh_object *pomesh, ay_point *pnts,
		 ay_pomesh_object **result)
{
 int ay_status = AY_OK;
 char fname[] = "pomesht_split";
 ay_point *pnt = NULL;
 unsigned int i, j, k, m, n;
 int stride = 3;
 int foundpnt, splitoffthisface;
 double *v0, *v1;
 ay_pomesh_object *pomesh0 = NULL, *pomesh1 = NULL;

  if(!pomesh || !pnts || !result)
    return AY_ENULL;

  if(!(pomesh0 = calloc(1, sizeof(ay_pomesh_object))))
    {
      return AY_EOMEM;
    }
  if(!(pomesh1 = calloc(1, sizeof(ay_pomesh_object))))
    {
      free(pomesh0); return AY_EOMEM;
    }

  if(pomesh->has_normals)
    stride = 6;

  m = 0;
  n = 0;
  for(i = 0; i < pomesh->npolys; i++)
    {
      splitoffthisface = AY_TRUE;

      for(j = 0; j < pomesh->nloops[i]; j++)
	{
	  /* if we still believe we split off this face we continue
	     checking its vertices, otherwise just increase m */
	  if(splitoffthisface)
	    {
	      for(k = 0; k < pomesh->nverts[n]; k++)
		{
		  /* if we still believe we split off this face we continue
		     checking its vertices, otherwise just increase m */
		  if(splitoffthisface)
		    {
		      foundpnt = AY_FALSE;
		      pnt = pnts;
		      while(pnt)
			{
			  v0 = &(pomesh->controlv[pomesh->verts[m]*stride]);
			  v1 = pnt->point;
			  if(AY_V3COMP(v0,v1))
			    {
			      foundpnt = AY_TRUE;
			      break;
			    }
			  pnt = pnt->next;
			} /* while */
		      if(!foundpnt)
			{
			  /* a face vertex was _not_ found in the list of
			     selected points => do not split off this face */
			  splitoffthisface = AY_FALSE;
			  /* increase m as if we continued looping */
			  m += (pomesh->nverts[n]-k);
			  /* now we may break the inner for() and return
			     to the pnt comparison only for the next face
			     (when splitoffthisface is AY_TRUE again) */
			  break;
			} /* if */
		    } /* if */
		  m++;
		} /* for */
	    }
	  else
	    {
	      m += pomesh->nverts[n];
	    } /* if */
	  n++;
	} /* for */

      /* if all vertices of this face were to be found in <pnts>... */
      if(splitoffthisface == AY_TRUE)
	{
	  /* ...split off this face (<i>) */
	  ay_status = ay_pomesht_splitface(pomesh, i, pomesh1);
	}
      else
	{
	  ay_status = ay_pomesht_splitface(pomesh, i, pomesh0);
	} /* if */

    } /* for */

  /* check and return result */
  if(pomesh1->npolys == pomesh->npolys)
    {
      /* oops, all faces from the original polymesh are in pomesh1
	 => do nothing */
      ay_pomesht_destroy(pomesh0);
      ay_pomesht_destroy(pomesh1);
      ay_error(AY_ERROR, fname, "All faces would be split off!");
      return AY_ERROR;
    } /* if */

  *result = pomesh1;

  /* copy arrays from pomesh0 to original pomesh */
  pomesh->npolys = pomesh0->npolys;
  free(pomesh->nloops);
  pomesh->nloops = pomesh0->nloops;
  free(pomesh->nverts);
  pomesh->nverts = pomesh0->nverts;
  free(pomesh->verts);
  pomesh->verts = pomesh0->verts;
  free(pomesh->controlv);
  pomesh->controlv = pomesh0->controlv;
  pomesh->ncontrols = pomesh0->ncontrols;
  free(pomesh0);

 return ay_status;
} /* ay_pomesht_split */


/* ay_pomesht_splittcmd:
 *  split selectedpolymesh objects into two, based on their
 *  selected points
 */
int
ay_pomesht_splittcmd(ClientData clientData, Tcl_Interp *interp,
		     int argc, char *argv[])
{
 int ay_status = AY_OK;
 char fname[] = "splitPo";
 ay_object *o = NULL, *newo;
 ay_list_object *sel = ay_selection;

  if(!sel)
    {
      ay_error(AY_ENOSEL, fname, NULL);
      return TCL_OK;
    }

  while(sel)
    {
      o = ay_selection->object;

      if(o->type == AY_IDPOMESH)
	{
	  if(o->selp)
	    {
	      newo = NULL;
	      if(!(newo = calloc(1, sizeof(ay_object))))
		{
		  ay_error(AY_EOMEM, fname, NULL);
		  return TCL_OK;
		}
	      ay_status = ay_pomesht_split((ay_pomesh_object*)o->refine,
					   o->selp,
					(ay_pomesh_object**)&(newo->refine));

	      if(newo->refine)
		{
		  ay_object_defaults(newo);
		  ay_trafo_copy(o, newo);
		  newo->type = AY_IDPOMESH;
		  ay_object_link(newo);
		}
	      else
		{
		  ay_error(AY_ERROR, fname, "Split failed.");
		  free(newo);
		} /* if */
	    }
	  else
	    {
	      ay_error(AY_ERROR, fname, "No point selection.");
	    } /* if */
	}
      else
	{
	  ay_error(AY_EWTYPE, fname, "PolyMesh");
	} /* if */

      sel = sel->next;
    } /* while */


 return TCL_OK;
} /* ay_pomesht_splittcmd */
