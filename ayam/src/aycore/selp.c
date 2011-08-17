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

/* selp.c - selected points related functions */

/* ay_selp_clear:
 *  clear list of selected points from object o
 */
void
ay_selp_clear(ay_object *o)
{
 ay_point *next = NULL, *p = NULL;

  if(!o)
    return;

  p = o->selp;

  while(p)
    {
      next = p->next;
      free(p);
      p = next;
    }

  o->selp = NULL;

 return;
} /* ay_selp_clear */


/* ay_selp_selall:
 *  select (tag) all points
 */
int
ay_selp_selall(ay_object *o)
{
 /*int ay_status = AY_OK;*/
 char fname[] = "selp_selall";
 double p[3] = {DBL_MIN, DBL_MIN, DBL_MIN};
 unsigned int i = 0;
 ay_point *newp = NULL;
 ay_pointedit pe = {0};

  if(!o)
    return AY_ENULL;

  ay_selp_clear(o);
  ay_pact_getpoint(0, o, p, &pe);

  for(i = 0; i < pe.num; i++)
    {
      newp = NULL;
      if(!(newp = calloc(1, sizeof(ay_point))))
	{
	  ay_error(AY_EOMEM, fname, NULL);
	  return AY_ERROR;
	}

      newp->next = o->selp;
      o->selp = newp;
      newp->point = pe.coords[i];
      if(pe.indices)
	{
	  newp->index = pe.indices[i];
	}
      newp->rational = pe.rational;
    } /* for */

  ay_pact_clearpointedit(&pe);

 return AY_OK;
} /* ay_selp_selall */


/* ay_selp_applytrafotcmd:
 *  apply transformations to editable points of selected objects
 *
 *  Implements the \a applyTrafo scripting interface command.
 *  See also the corresponding section in the \ayd{scapplytrafo}.
 *
 *  \returns TCL_OK in any case.
 */
int
ay_selp_applytrafotcmd(ClientData clientData, Tcl_Interp *interp,
		       int argc, char *argv[])
{
 int ay_status = AY_OK;
 ay_object *o = NULL;
 ay_list_object *sel = ay_selection;
 ay_point *bak = NULL, *p = NULL;
 int all = AY_FALSE;
 double m[16];

 if(argc < 2)
   {
     ay_error(AY_EARGS, argv[0], "sel|all");
     return TCL_OK;
   }

 if(!strcmp(argv[1], "all"))
   all = AY_TRUE;

  while(sel)
    {
      o = sel->object;

      if(all)
	{
	  bak = o->selp;
	  o->selp = NULL;
	  ay_status = ay_selp_selall(o);
	  if(ay_status)
	    {
	      ay_selp_clear(o);
	      o->selp = bak;
	      return TCL_OK;
	    }
	}

      /* create trafo */
      ay_trafo_creatematrix(o, m);

      /* transform points */
      p = o->selp;
      while(p)
	{
	  ay_trafo_apply3(p->point, m);

	  p = p->next;
	}

      /* clear trafo */
      o->movx = 0.0;
      o->movy = 0.0;
      o->movz = 0.0;

      o->rotx = 0.0;
      o->roty = 0.0;
      o->rotz = 0.0;

      o->scalx = 1.0;
      o->scaly = 1.0;
      o->scalz = 1.0;


      o->quat[0] = 0.0;
      o->quat[1] = 0.0;
      o->quat[2] = 0.0;
      o->quat[3] = 1.0;

      /* restore old selected points */
      if(all)
	{
	  ay_selp_clear(o);
	  o->selp = bak;
	}

      sel = sel->next;
    } /* while */

 return TCL_OK;
} /* ay_selp_applytrafotcmd */


/* ay_selp_invert:
 *  invert list of selected points for object o
 */
int
ay_selp_invert(ay_object *o)
{
 int ay_status = AY_OK;
 ay_point *t = NULL, *p = NULL, **last2 = NULL, *p2 = NULL;

  if(!o)
    return AY_ENULL;

  if(!o->selp)
    {
      ay_status = ay_selp_selall(o);
      return ay_status;
    }

  /* save old selection of points to p */
  p = o->selp;

  /* select all points */
  o->selp = NULL;
  ay_status = ay_selp_selall(o);
  if(ay_status)
    {
      ay_selp_clear(o);
      o->selp = p;
      return ay_status;
    }

  /* remove all points, that are in p (old selection), from p2 (new
     selection); additionally, clear p */
  while(p)
    {
      last2 = &(o->selp);
      p2 = o->selp;
      while(p2)
	{
	  if(p->point == p2->point)
	    {
	      *last2 = p2->next;
	      free(p2);
	      /* XXXX should be unneeded, because of the break below: */
	      p2 = *last2;
	      break;
	    }
	  else
	    {
	      last2 = &(p2->next);
	      p2 = p2->next;
	    } /* if */
	} /* while */
      t = p;
      p = p->next;
      free(t);
    } /* while */

 return AY_OK;
} /* ay_selp_invert */


/* ay_selp_inverttcmd:
 *  invert point selection of selected objects
 *
 *  Implements the \a invPnts scripting interface command.
 *  See also the corresponding section in the \ayd{scinvpnts}.
 *
 *  \returns TCL_OK in any case.
 */
int
ay_selp_inverttcmd(ClientData clientData, Tcl_Interp *interp,
		   int argc, char *argv[])
{
 int ay_status = AY_OK;
 ay_object *o = NULL;
 ay_list_object *sel = ay_selection;

  while(sel)
    {
      o = sel->object;

      ay_status = ay_selp_invert(o);

      if(ay_status)
	{
	  ay_error(AY_ERROR, argv[0], NULL);
	  return TCL_OK;
	}

      sel = sel->next;
    } /* while */

 return TCL_OK;
} /* ay_selp_inverttcmd */


/* ay_selp_center:
 *  center all selected points
 *  pnts - (selected) points to center
 *  dim - control in which dimensions centering shall occur
 *   0: all dimensions
 *   1: only x-y
 *   2: only y-z
 *   3: only x-z
 *  center - center
 */
int
ay_selp_center(ay_point *p, int dim, double *center)
{
 int ay_status = AY_OK;
 ay_point *pnt = NULL;

  if(!p || !center)
    return AY_ENULL;

  /* center points, by translating them */
  pnt = p;
  switch(dim)
    {
    case 0:
      while(pnt)
	{
	  pnt->point[0] -= center[0];
	  pnt->point[1] -= center[1];
	  pnt->point[2] -= center[2];
	  pnt = pnt->next;
	}
      break;
    case 1:
      while(pnt)
	{
	  pnt->point[0] -= center[0];
	  pnt->point[1] -= center[1];
	  pnt = pnt->next;
	}
      break;
    case 2:
      while(pnt)
	{
	  pnt->point[1] -= center[1];
	  pnt->point[2] -= center[2];
	  pnt = pnt->next;
	}
      break;
    case 3:
      while(pnt)
	{
	  pnt->point[0] -= center[0];
	  pnt->point[2] -= center[2];
	  pnt = pnt->next;
	}
      break;
    default:
      break;
    } /* switch */

 return ay_status;
} /* ay_selp_center */


/* ay_selp_getcenter:
 *  calculate center of selected points
 *  pnts - (selected) points to center
 *  mode - which center
 *   0: minmax bbox
 *   1: COG
 *  center - center
 */
int
ay_selp_getcenter(ay_point *p, int mode, double *center)
{
 int ay_status = AY_OK;
 double xmin = DBL_MAX, xmax = -DBL_MAX;
 double ymin = DBL_MAX, ymax = -DBL_MAX;
 double zmin = DBL_MAX, zmax = -DBL_MAX;
 unsigned int i = 0, nump = 0, numpu = 0;
 ay_point *pnt = NULL;
 double **pnts = NULL;

  if(!p || !center)
    return AY_ENULL;

  pnt = p;

  switch(mode)
    {
    case 0:
      /* compute min-max-bbox center */
      while(pnt)
	{
	  if(pnt->point[0] < xmin)
	    xmin = pnt->point[0];
	  if(pnt->point[0] > xmax)
	    xmax = pnt->point[0];

	  if(pnt->point[1] < ymin)
	    ymin = pnt->point[1];
	  if(pnt->point[1] > ymax)
	    ymax = pnt->point[1];

	  if(pnt->point[2] < zmin)
	    zmin = pnt->point[2];
	  if(pnt->point[2] > zmax)
	    zmax = pnt->point[2];
	  pnt = pnt->next;
	}
      center[0] = xmin+(xmax-xmin)*0.5;
      center[1] = ymin+(ymax-ymin)*0.5;
      center[2] = zmin+(zmax-zmin)*0.5;
      break;
    case 1:
      /* compute COG */

      /* first count selected points */
      while(pnt)
	{
	  nump++;
	  pnt = pnt->next;
	}
      if(!(pnts = calloc(nump, sizeof(double*))))
	{
	  return AY_EOMEM;
	}
      pnt = p;
      for(i = 0; i < nump; i++)
	{
	  pnts[i] = pnt->point;
	  pnt = pnt->next;
	}

      if(nump > 1)
	{
	  qsort(pnts, nump, sizeof(double*), ay_nct_cmppntp);
	  /* calculate the number of unique points */
	  numpu = nump;
	  for(i = 0; i < nump-1; i++)
	    {
	      if(!ay_nct_cmppntp(&(pnts[i]), &(pnts[i+1])))
		{
		  numpu--;
		}
	    }
	  /* for the special case of two equal points, make
	     sure we have the first of the points as cog */
	  center[0] = (pnts[0])[0]/(double)numpu;
	  center[1] = (pnts[0])[1]/(double)numpu;
	  center[2] = (pnts[0])[2]/(double)numpu;
	  /* calculate the cog */
	  for(i = 1; i < nump; i++)
	    {
	      if(ay_nct_cmppntp(&(pnts[i-1]), &(pnts[i])))
		{
		  center[0] += (pnts[i])[0]/(double)numpu;
		  center[1] += (pnts[i])[1]/(double)numpu;
		  center[2] += (pnts[i])[2]/(double)numpu;
		}
	    }
	}
      else
	{
	  /* just one point => this is the cog */
	  center[0] = (pnts[0])[0];
	  center[1] = (pnts[0])[1];
	  center[2] = (pnts[0])[2];
	}

      free(pnts);
      break;
    default:
      break;
    } /* switch */

 return ay_status;
} /* ay_selp_getcenter */


/* ay_selp_centertcmd:
 *  moves all points of the selected objects so that their
 *  center is identical to the object coordinate systems center
 *
 *  Implements the \a centerPnts scripting interface command.
 *  See also the corresponding section in the \ayd{sccenterpnts}.
 *
 *  \returns TCL_OK in any case.
 */
int
ay_selp_centertcmd(ClientData clientData, Tcl_Interp *interp,
		   int argc, char *argv[])
{
 int tcl_status = TCL_OK, ay_status = AY_OK;
 ay_list_object *sel = ay_selection;
 ay_point *oldpointsel = NULL;
 ay_object *o = NULL;
 double center[3] = {0};
 int dim = 0, mode = 0;

  if(!sel)
    {
      ay_error(AY_ENOSEL, argv[0], NULL);
      return TCL_OK;
    }

  if(argc > 1)
    {
      tcl_status = Tcl_GetInt(interp, argv[1], &dim);
      AY_CHTCLERRRET(tcl_status, argv[0], interp);
    }

  if(argc > 2)
    {
      tcl_status = Tcl_GetInt(interp, argv[2], &mode);
      AY_CHTCLERRRET(tcl_status, argv[0], interp);
    }

  while(sel)
    {
      o = sel->object;

      /* save old point selection */
      oldpointsel = o->selp;
      o->selp = NULL;

      /* center all points */      
      ay_status = ay_selp_selall(o);
      if(!ay_status)
	{
	  ay_status = ay_selp_getcenter(o->selp, mode, center);
	  if(!ay_status)
	    {
	      ay_status = ay_selp_center(o->selp, dim, center);
	    }
	}

      /* recover point selection */
      ay_selp_clear(o);
      o->selp = oldpointsel;

      if(ay_status)
	{
	  ay_error(ay_status, argv[0], "Could not center.");
	}
      else
	{
	  o->modified = AY_TRUE;
	  ay_notify_force(o);
	}

      sel = sel->next;
    } /* while */

  ay_notify_parent();

 return TCL_OK;
} /* ay_selp_centertcmd */


/* ay_selp_sel:
 *  select points from indices
 */
int
ay_selp_sel(ay_object *o, unsigned int indiceslen, unsigned int *indices)
{
 int ay_status = AY_OK;
 ay_point *po = NULL, *p = NULL;
 unsigned int i = 0;
 char have_it = AY_FALSE;

  if(!o || !indices)
    return AY_ENULL;

  for(i = 0; i < indiceslen; i++)
    {
      if(!po)
	{
	  if(!(po = calloc(1, sizeof(ay_point))))
	    {
	      return AY_EOMEM;
	    }
	}
      have_it = AY_FALSE;
      p = o->selp;
      while(p)
	{
	  if(indices[i] == p->index)
	    {
	      have_it = AY_TRUE;
	      break;
	    }
	  p = p->next;
	}
      if(!have_it)
	{
	  po->index = indices[i];
	  po->next = o->selp;
	  o->selp = po;
	  po = NULL;
	}
    } /* for */

  /* update pointers */
  ay_status = ay_pact_getpoint(3, o, NULL, NULL);

  /* cleanup */
  if(po)
    free(po);

 return ay_status;
} /* ay_selp_sel */


/* ay_selp_seltcmd:
 *  select points of selected objects
 *
 *  Implements the \a selPnts scripting interface command.
 *  See also the corresponding section in the \ayd{scselpnts}.
 *
 *  \returns TCL_OK in any case.
 */
int
ay_selp_seltcmd(ClientData clientData, Tcl_Interp *interp,
		int argc, char *argv[])
{
 int ay_status = AY_OK;
 unsigned int i = 1, indiceslen = 0, *indices = NULL;
 int select_all = AY_FALSE, select_none = AY_FALSE;
 ay_object *o = NULL;
 ay_list_object *sel = ay_selection;

  if(!sel)
    {
      ay_error(AY_ENOSEL, argv[0], NULL);
      return TCL_OK;
    }

  /* parse args */
  if(argc == 1)
    {
      select_none = AY_TRUE;
    }
  else
    {
      if((argv[1][0] == '-'))
	{
	  /* -all */
	  if(argv[1][1] == 'a')
	    {
	      select_all = AY_TRUE;
	    }
	  /* -none */
	  if(argv[1][1] == 'n')
	    {
	      select_none = AY_TRUE;
	    }
	  /* -help */
	  if(argv[1][1] == 'h')
	    {
	      ay_error(AY_EARGS, argv[0],
		       "[-all | -none | ind1 ind2 ... indn]");
	      goto cleanup;
	    }
	}
    }

  /* parse list of indices */
  if(!select_none && !select_all)
    {
      if(!(indices = calloc(argc, sizeof(unsigned int))))
	{
	  ay_error(AY_EOMEM, argv[0], NULL);
	  goto cleanup;
	}
      while(i < (unsigned int)argc)
	{
	  ay_status = ay_tcmd_getuint(argv[i], &(indices[indiceslen]));
	  if(ay_status)
	    {
	      goto cleanup;
	    }
	  indiceslen++;
	  i++;
	} /* while */
    } /* if */

  while(sel)
    {
      o = sel->object;

      if(select_none)
	{
	  ay_selp_clear(o);
	}
      else
	{
	  if(select_all)
	    {
	      ay_status = ay_selp_selall(o);

	      /* it is no error if we could not select any points, when
		 the user requested no specific points, but "all" */
	      if(ay_status == AY_ERROR)
		{
		  ay_status = AY_OK;
		}
	    }
	  else
	    {
	      ay_status = ay_selp_sel(o, indiceslen, indices);
	    }
	} /* if */

      if(ay_status)
	{
	  ay_error(AY_ERROR, argv[0], NULL);
	  /*
	  goto cleanup;
	  */
	}

      sel = sel->next;
    } /* while */

cleanup:

  if(indices)
    free(indices);

 return TCL_OK;
} /* ay_selp_seltcmd */


/* ay_selp_calccog:
 *  calc cog from selected points
 */
void
ay_selp_calccog(ay_point *pnts, double *cog)
{
 unsigned int i, a = 0, numpoints = 0;
 ay_point *p = NULL;
 int stride = 3;

  if(!pnts || !cog)
    {
      return;
    }

  p = pnts;
  while(p)
    {
      numpoints++;
      p = p->next;
    }

  /*
  if(!(vbuf = calloc(numpoints, stride*sizeof(double))))
    {
      return;
    }
  */

  p = pnts;
  for(i = 0; i < numpoints; i++)
    {
      /* XXXX ToDo: check, whether point is alread in vbuf;
	 only if not: copy point to vbuf and update cog */

      cog[0] += p->point[0]/numpoints;
      cog[1] += p->point[1]/numpoints;
      cog[2] += p->point[2]/numpoints;

      a += stride;
      p = p->next;
    }


  /* free(vbuf); */

 return;
} /* ay_selp_calccog */


/* ay_selp_rem:
 *
 */
int
ay_selp_rem(ay_object *o, unsigned int index)
{
 int ay_status = AY_OK;
 ay_point **pp = NULL, *p = NULL;

  if(!o)
    return AY_ENULL;

  /* remove point with matching index */
  p = o->selp;
  pp = &(o->selp);
  while(p)
    {
      if(index == p->index)
	{
	  *pp = p->next;
	  free(p);
	  p = *pp;
	  break;
	}
      pp = &(p->next);
      p = p->next;
    }

  /* readjust indices of remaining points */
  p = o->selp;
  while(p)
    {
      if(p->index > index)
	{
	  p->index--;
	}
      p = p->next;
    }

  /* update pointers */
  ay_status = ay_pact_getpoint(3, o, NULL, NULL);

 return ay_status;
} /* ay_selp_rem */


/* ay_selp_ins:
 *
 */
int
ay_selp_ins(ay_object *o, unsigned int index, int addtoselp)
{
 int ay_status = AY_OK;
 ay_point *p = NULL, *newp = NULL;

  if(!o)
    return AY_ENULL;

  /* add point with matching index */
  if(addtoselp)
    {
      if(!(newp = calloc(1, sizeof(ay_point))))
	{
	  return AY_EOMEM;
	}
      newp->next = o->selp;
      o->selp = newp;
      newp->index = index;
    }

  /* readjust indices of old points */
  if(newp)
    p = newp->next;
  else
    p = o->selp;

  while(p)
    {
      if(p->index > index )
	{
	  p->index++;
	}
      p = p->next;
    }

  /* update pointers */
  ay_status = ay_pact_getpoint(3, o, NULL, NULL);

 return ay_status;
} /* ay_selp_ins */


/* ay_selp_getpnts:
 *  getpnts callback helper
 */
int
ay_selp_getpnts(int mode, ay_object *o, double *p, ay_pointedit *pe,
		int readonly, int arrlen, int stride, double *arr)
{
 ay_point *pnt = NULL, **lastpnt = NULL;
 double min_dist = ay_prefs.pick_epsilon, dist = 0.0;
 double **pecoords = NULL, *pecoord = NULL, *c;
 int i = 0, j = 0, a = 0, found = AY_FALSE;
 unsigned int *peindices = NULL, peindex = 0;

  if(!o || !arr)
    return AY_ENULL;
  if((mode != 3) && (!p || !pe))
    return AY_ENULL;

  if(min_dist == 0.0)
    min_dist = DBL_MAX;

  if(pe)
    {
      if(stride == 4)
	pe->rational = AY_TRUE;

      pe->readonly = readonly;
    }

  switch(mode)
    {
    case 0:
      /* select all points */
      if(!(pe->coords = calloc(arrlen, sizeof(double*))))
	return AY_EOMEM;
      if(!(pe->indices = calloc(arrlen, sizeof(unsigned int))))
	return AY_EOMEM;

      for(i = 0; i < arrlen; i++)
	{
	  pe->coords[i] = &(arr[a]);
	  pe->indices[i] = i;
	  a += stride;
	}

      pe->num = arrlen;
      break;
    case 1:
      /* selection based on a single point */
      for(i = 0; i < arrlen; i++)
	{
	  dist = AY_VLEN((p[0] - arr[j]),
			 (p[1] - arr[j+1]),
			 (p[2] - arr[j+2]));

	  if(dist < min_dist)
	    {
	      pecoord = &(arr[j]);
	      peindex = i;
	      min_dist = dist;
	    }

	  j += stride;
	} /* for */

      if(!pecoord)
	return AY_OK; /* XXXX should this return a 'AY_EPICK' ? */

      if(!found)
	{
	  if(!(pe->coords = calloc(1, sizeof(double *))))
	    return AY_EOMEM;

	  if(!(pe->indices = calloc(1, sizeof(unsigned int))))
	    return AY_EOMEM;

	  pe->coords[0] = pecoord;
	  pe->indices[0] = peindex;
	  pe->num = 1;
	} /* if */
      break;
    case 2:
      /* selection based on planes */
      j = 0;
      a = 0;
      for(i = 0; i < arrlen; i++)
	{
	  c = &(arr[j]);

	  /* test point c against the four planes in p */
	  if(((p[0]*c[0] + p[1]*c[1] + p[2]*c[2] + p[3]) < 0.0) &&
	     ((p[4]*c[0] + p[5]*c[1] + p[6]*c[2] + p[7]) < 0.0) &&
	     ((p[8]*c[0] + p[9]*c[1] + p[10]*c[2] + p[11]) < 0.0) &&
	     ((p[12]*c[0] + p[13]*c[1] + p[14]*c[2] + p[15]) < 0.0))
	    {
	      if(!(pecoords = realloc(pecoords, (a+1)*sizeof(double *))))
		return AY_EOMEM;
	      if(!(peindices = realloc(peindices,
				       (a+1)*sizeof(unsigned int))))
		return AY_EOMEM;
	      pecoords[a] = &(arr[j]);
	      peindices[a] = i;
	      a++;
	    } /* if */

	  j += stride;
	} /* for */

      if(!pecoords)
	return AY_OK; /* XXXX should this return a 'AY_EPICK' ? */

      pe->coords = pecoords;
      pe->indices = peindices;
      pe->num = a;
      break;
    case 3:
      /* rebuild from o->selp */
      pnt = o->selp;
      lastpnt = &o->selp;
      while(pnt)
	{
	  if(pnt->index < (unsigned int)arrlen)
	    {
	      pnt->point = &(arr[pnt->index*stride]);
	      if(stride == 4)
		pnt->rational = AY_TRUE;
	      pnt->readonly = readonly;
	      lastpnt = &(pnt->next);
	      pnt = pnt->next;
	    }
	  else
	    {
	      *lastpnt = pnt->next;
	      free(pnt);
	      pnt = *lastpnt;
	    }
	} /* while */
      break;
    default:
      return AY_ERROR;
      break;
    } /* switch */

 return AY_OK;
} /* ay_selp_getpnts */
