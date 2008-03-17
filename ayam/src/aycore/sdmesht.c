/*
 * Ayam, a free 3D modeler for the RenderMan interface.
 *
 * Ayam is copyrighted 1998-2002 by Randolf Schultz
 * (randolf.schultz@gmail.com) and others.
 *
 * All rights reserved.
 *
 * See the file License for details.
 *
 */

#include "ayam.h"

/* sdmesht.c -  SubdivisionMesh object tools */

typedef struct ay_sdmesht_listobject_s
{
  struct ay_sdmesht_listobject_s *next;
  void *data;
} ay_sdmesht_listobject;

/* prototypes of functions local to this module */
void ay_sdmesht_tcbBegin(GLenum prim);

void ay_sdmesht_tcbVertex(void *data);

void ay_sdmesht_tcbEnd(void);

void ay_sdmesht_tcbCombine(GLdouble c[3], void *d[4], GLfloat w[4],
			   void **out);


void ay_sdmesht_ManageCombined(void *data);

void ay_sdmesht_setautonormal(double *v1, double *v2, double *v3);


/* functions */

/* tesselation callbacks needed by GLU */
void
ay_sdmesht_tcbBegin(GLenum prim)
{
  glBegin(prim);
} /* ay_sdmesht_tcbBegin */


void
ay_sdmesht_tcbVertex(void *data)

{
  glVertex3dv((GLdouble *)data);
} /* ay_sdmesht_tcbVertex */


void
ay_sdmesht_tcbEnd(void)
{
  glEnd();
} /* ay_sdmesht_tcbEnd */


void
ay_sdmesht_tcbCombine(GLdouble c[3], void *d[4], GLfloat w[4], void **out)
{
 GLdouble *nv = NULL;

 if(!(nv = (GLdouble *) malloc(sizeof(GLdouble)*3)))
   return;

  nv[0] = c[0];
  nv[1] = c[1];
  nv[2] = c[2];

  /* remember pointer to free it later */
  ay_sdmesht_ManageCombined((void*)nv);

  *out = nv;
 return;
} /* ay_sdmesht_tcbCombine */


void
ay_sdmesht_ManageCombined(void *data)
{
 static ay_sdmesht_listobject *list = NULL;
 ay_sdmesht_listobject *new = NULL;

  if(data)
    { /* add new pointer to the list */
      if(!(new = calloc(1, sizeof(ay_sdmesht_listobject))))
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
} /* ay_sdmesht_ManageCombined */


/* ay_sdmesht_setautonormal:
 *
 */
void
ay_sdmesht_setautonormal(double *v1, double *v2, double *v3)
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
} /* ay_sdmesht_setautonormal */


/* ay_sdmesht_tesselate:
 *
 */
int
ay_sdmesht_tesselate(ay_sdmesh_object *sdmesh)
{
 unsigned int i = 0, k = 0, m = 0, n = 0;
 unsigned int a;
 GLUtesselator *tess = NULL;

  for(i = 0; i < sdmesh->nfaces; i++)
    {
      /* Is this face a simple triangle? */
      if(sdmesh->nverts[m] == 3)
	{
	  /* Yes. */
	  ay_sdmesht_setautonormal(&sdmesh->controlv[sdmesh->verts[n] * 3],
				   &sdmesh->controlv[sdmesh->verts[n+1] * 3],
				   &sdmesh->controlv[sdmesh->verts[n+2] * 3]);

	  glBegin(GL_TRIANGLES);
	   a = sdmesh->verts[n++];
	   glVertex3dv((GLdouble*)(&(sdmesh->controlv[a*3])));
	   a = sdmesh->verts[n++];
	   glVertex3dv((GLdouble*)(&(sdmesh->controlv[a*3])));
	   a = sdmesh->verts[n++];
	   glVertex3dv((GLdouble*)(&(sdmesh->controlv[a*3])));
	  glEnd();
	}
      else
	{
	  /* No, we need to tesselate this face. */
	  if(!(tess = gluNewTess()))
	    return AY_EOMEM;

	  gluTessCallback(tess, GLU_TESS_ERROR, AYGLUCBTYPE ay_error_glucb);
	  gluTessCallback(tess, GLU_TESS_BEGIN, AYGLUCBTYPE ay_sdmesht_tcbBegin);
	  gluTessCallback(tess, GLU_TESS_VERTEX, AYGLUCBTYPE ay_sdmesht_tcbVertex);
	  gluTessCallback(tess, GLU_TESS_END, AYGLUCBTYPE ay_sdmesht_tcbEnd);
	  gluTessCallback(tess, GLU_TESS_COMBINE, AYGLUCBTYPE ay_sdmesht_tcbCombine);

	  /* GLU 1.2 only: */
	  /*gluTessBeginPolygon(tess, NULL);*/
	  gluBeginPolygon(tess);

	  ay_sdmesht_setautonormal(&sdmesh->controlv[sdmesh->verts[n] * 3],
				   &sdmesh->controlv[sdmesh->verts[n+1] * 3],
				   &sdmesh->controlv[sdmesh->verts[n+2] * 3]);

	  for(k = 0; k < sdmesh->nverts[m]; k++)
	    {
	      a = sdmesh->verts[n++];
	      gluTessVertex(tess,
			    (GLdouble*)(&(sdmesh->controlv[a * 3])),
			    (GLdouble*)(&(sdmesh->controlv[a * 3])));
	    }

	  /* GLU 1.2 only: */
	  /*gluTessEndPolygon(tess);*/
	  gluEndPolygon(tess);
	  gluDeleteTess(tess);

	  /* free combined vertices */
	  ay_sdmesht_ManageCombined(NULL);
	} /* if */
      m++;
    } /* for */

 return AY_OK;
} /* ay_sdmesht_tesselate */


/* ay_sdmesht_topolymesh:
 *  convert SDMesh object <sdmesh> to a PolyMesh object, return result
 *  in <pomesh>
 */
int
ay_sdmesht_topolymesh(ay_sdmesh_object *sdmesh, ay_pomesh_object **pomesh)
{
 int ay_status = AY_OK;
 double *ncontrolv  = NULL;
 unsigned int *nverts = NULL, *verts = NULL, *nloops = NULL;
 unsigned int i, totalverts = 0;
 ay_pomesh_object *npomesh = NULL;

  if(!sdmesh || !pomesh)
    return AY_ENULL;

  if(!(npomesh = calloc(1, sizeof(ay_pomesh_object))))
    { ay_status = AY_EOMEM; goto cleanup; }

  /* copy control points */
  if(!(ncontrolv = calloc(sdmesh->ncontrols, 3*sizeof(double))))
    { ay_status = AY_EOMEM; goto cleanup; }

  npomesh->controlv = ncontrolv;
  npomesh->ncontrols = sdmesh->ncontrols;

  memcpy(ncontrolv, sdmesh->controlv, sdmesh->ncontrols*3*sizeof(double));

  /* copy faces */
  if(!(nloops = calloc(sdmesh->nfaces, sizeof(unsigned int))))
    { ay_status = AY_EOMEM; goto cleanup; }
  if(!(nverts = calloc(sdmesh->nfaces, sizeof(unsigned int))))
    { ay_status = AY_EOMEM; goto cleanup; }

  for(i = 0; i < sdmesh->nfaces; i++)
    {
      nloops[i] = 1;
      nverts[i] = sdmesh->nverts[i];
      totalverts += sdmesh->nverts[i];
    }

  if(!(verts = calloc(totalverts, sizeof(unsigned int))))
    { ay_status = AY_EOMEM; goto cleanup; }

  for(i = 0; i < totalverts; i++)
    {
      verts[i] = sdmesh->verts[i];
    }

  npomesh->npolys = sdmesh->nfaces;
  npomesh->nloops = nloops;
  npomesh->nverts = nverts;
  npomesh->verts = verts;

  /* return result */
  *pomesh = npomesh;
  npomesh = NULL;

cleanup:

 if(npomesh)
   {
     free(npomesh);
     if(ncontrolv)
       free(ncontrolv);
     if(nverts)
       free(nverts);
     if(verts)
       free(verts);
   } /* if */

 return ay_status;
} /* ay_sdmesht_topolymesh */
