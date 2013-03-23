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

/* wrib.c - RIB export */


/* prototypes of functions local to this module: */

int ay_wrib_sm(char *file, char *image, int width, int height,
	       int selonly);

void ay_wrib_getup(double *dir, double *up, double *roll);


/* functions: */

/* ay_wrib_isprimitive:
 *  check, whether <o> should be considered a CSG primitive
 *  returns AY_TRUE if yes, else returns AY_FALSE
 */
int
ay_wrib_isprimitive(ay_object *o)
{
 ay_object *down = NULL;
 ay_level_object *level = NULL;

  if(o->type == AY_IDINSTANCE)
    {
      if(o->refine)
	{
	  return ay_wrib_isprimitive(o->refine);
	}
      else
	{
	  /* XXXX add error message */
	  return AY_TRUE;
	}
    }

  if(o->type == AY_IDLEVEL)
    {
      level = (ay_level_object*)o->refine;
      if((level->type == AY_LTUNION) ||
	 (level->type == AY_LTDIFF) ||
	 (level->type == AY_LTINT))
      return AY_FALSE;
    }

  if(o->down)
    {
      down = o->down;
      while(down->next)
	{
	  if(!ay_wrib_isprimitive(down))
	    return AY_FALSE;
	  down = down->next;
	}
    }

 return AY_TRUE;
} /* ay_wrib_isprimitive */


/* ay_wrib_noexport:
 *  check for presence of NoExport tag for object o;
 *  returns AY_TRUE if found, else returns AY_FALSE
 */
int
ay_wrib_noexport(ay_object *o)
{
 ay_tag *tag = NULL;

  if(o)
    {
      if(o->tags)
	{
	  tag = o->tags;
	  while(tag)
	    {
	      if(tag->type == ay_noexport_tagtype)
		{
		  return AY_TRUE;
		}
	      tag = tag->next;
	    } /* while */
	} /* if */
    } /* if */

 return AY_FALSE;
} /* ay_wrib_noexport */


/* cot() used by currently unused FrameCamera() */
/*
double
cot (double in)
{
if (sin (in) == 0)
 return (0);
else
 return (cos (in) / sin (in));
}
*/


/* ay_wrib_aimz:
 *
 */
void
ay_wrib_aimz(RtPoint direction)
{
 RtFloat xzlen = (RtFloat)0.0, yzlen = (RtFloat)0.0, xrot = (RtFloat)0.0,
   yrot = (RtFloat)0.0;
 RtFloat tmp;

  if((direction[0] == 0.0) && (direction[1] == 0.0) && (direction[2] == 0.0))
    return;

  xzlen = (RtFloat)(sqrt(direction[0]*direction[0] +
			 direction[2]*direction[2]));
  if(xzlen == 0.0)
    {
      yrot = (direction[1] < 0.0) ? (RtFloat)180.0 : (RtFloat)0.0;
    }
  else
    {
      tmp = direction[2]/xzlen;

      if((tmp>1.0)||(tmp<-1.0))
	{
	  fprintf(stderr,"gotcha!\n");
	  fprintf(stderr,"%g %g\n",direction[0],direction[2]);
	}
      yrot = (RtFloat)AY_R2D(acos((fabs(tmp)<=1.0?tmp:(tmp<-1.0?-1.0:1.0))));
    }

  yzlen = (RtFloat)(sqrt(direction[1]*direction[1] + xzlen*xzlen));
  if(yzlen != 0.0)
    {
      xrot = (RtFloat)AY_R2D(acos(xzlen/yzlen));
    }
  else
    {
      xrot = (RtFloat)0;
    }

  if(direction[1] > 0.0)
    {
      if(fabs(xrot) > AY_EPSILON)
	RiRotate(xrot, (RtFloat)1.0,(RtFloat)0.0,(RtFloat)0.0);
    }
  else
    {
      if(fabs(xrot) > AY_EPSILON)
	RiRotate(-xrot, (RtFloat)1.0,(RtFloat)0.0,(RtFloat)0.0);
    }

  if(direction[0] < 0.0)
    {
      if(fabs(yrot) > AY_EPSILON)
	RiRotate(yrot, (RtFloat)0.0,(RtFloat)1.0,(RtFloat)0.0);
    }
  else
    {
      if(fabs(yrot) > AY_EPSILON)
	RiRotate(-yrot, (RtFloat)0.0,(RtFloat)1.0,(RtFloat)0.0);
    }

 return;
} /* ay_wrib_aimz */


/* ay_wrib_placecamera:
 *
 */
void
ay_wrib_placecamera(RtPoint position, RtPoint direction, double roll)
{
  /* XXXX RiIdentity(); */
  if(fabs(roll) > AY_EPSILON)
    RiRotate((RtFloat)-roll, (RtFloat)0.0, (RtFloat)0.0, (RtFloat)1.0);

  ay_wrib_aimz(direction);

  if((fabs(position[0]) > AY_EPSILON) || (fabs(position[1]) > AY_EPSILON) ||
     (fabs(position[2]) > AY_EPSILON))
    RiTranslate((fabs(position[0]) > AY_EPSILON) ? -position[0] :
		(RtFloat) 0.0,
		(fabs(position[1]) > AY_EPSILON) ? -position[1] :
		(RtFloat) 0.0,
		(fabs(position[2]) > AY_EPSILON) ? -position[2] :
		(RtFloat) 0.0);

 return;
} /* ay_wrib_placecamera */


/* ay_wrib_getup:
 *  calculate new roll angle around <dir> vector that is needed to
 *  align the up vector of the rotated camera to the <up> vector
 *  This routine only works properly, if <up> is perpendicular to <dir>!
 */
void
ay_wrib_getup(double *dir, double *up, double *roll)
{
 double oup[3] = {0,1,0}, odir[3] = {0,0,-1}, V1[3], V2[3];
 double len, angle;
 double m[16];

  if(!dir || !up || !roll)
    return;

  V2[0] = dir[0];
  V2[1] = dir[2];
  len = AY_V2LEN(V2);
  AY_V2SCAL(V2, (1.0/len));
  odir[1] = -1;

  angle = -AY_R2D(acos(AY_V2DOT(odir, V2)));
  if(dir[0]>0.0)
    angle *= -1.0;

  /*printf("angle dir-odir: %g\n",angle);*/

  /* angle is now the angle between world and camera z when rotated
     around the y-axis, we apply the inverse of this transformation
     to the up-vector */
  if(fabs(angle) > AY_EPSILON)
    {
      ay_trafo_identitymatrix(m);

      ay_trafo_rotatematrix(angle, 0.0, 1.0, 0.0, m);
      AY_APTRAN3(V1, up, m);
    }
  else
    {
      memcpy(V1, up, 3*sizeof(double));
    }

  /* V1 now contains the new rotated up vector. If we calculate the
     angle between V1 and original up (0,1,0) we have the wanted roll angle. */

  /*printf("rotated up: %g %g %g\n",V1[0],V1[1],V1[2]);*/

  len = AY_V2LEN(V1);
  AY_V2SCAL(V1, (1.0/len));

  memcpy(V2, oup, 3*sizeof(double));

  len = AY_V2LEN(V2);
  AY_V2SCAL(V2, (1.0/len));

  *roll = -AY_R2D(acos(AY_V2DOT(V1, V2)));

  if((V1[0] > 0.0) && (V1[1] > 0.0))
    {
      *roll *= -1.0;
    }
  else
    {
      if((V1[0] > 0.0) && (V1[1] < 0.0))
	{
	  *roll *= -1.0;
	}
    }

 /*
  if(*roll == FP_NAN)
    *roll = 0.0;
  */

  /*printf("addroll:%g\n",*roll);*/
 return;
} /* ay_wrib_getup */


/* unused ruin */
/* XXXX Debug me! */
/*void
FrameCamera(double zoom, double framewidth, double frameheight)
{
  RtFloat fov;
  RtFloat focallength;

  focallength = (0.5 * (framewidth<frameheight)?framewidth:frameheight)*
    cot(45.0);

  fprintf(stderr,"focallength:%g\n",focallength);

  fov = 2.0 * atan((((framewidth<frameheight)?framewidth:frameheight)
		    * zoom * 0.5) / focallength) * 180.0 / AY_PI;

  fprintf(stderr,"fov:%g\n",fov);
  RiProjection("perspective", RI_FOV, (RtPointer) &fov, RI_NULL);

  RiFrameAspectRatio((RtFloat)(framewidth/frameheight));

 return;
}*/


/* ay_wrib_rioptions:
 *
 */
int
ay_wrib_rioptions(void)
{
 int ay_status = AY_OK;
 ay_riopt *riopt = NULL;
 ay_root_object *root = NULL;
 RtInt fw = 0, fh = 0;
 RtFloat rtftemp = (RtFloat)0.0;
 RtInt rtitemp = 0;

  root = (ay_root_object*)(ay_root->refine);
  riopt = root->riopt;

  if(riopt->Variance > 0.0)
    RiPixelVariance((RtFloat)riopt->Variance);
  else
    RiPixelSamples((RtFloat)riopt->Samples_X,
		   (RtFloat)riopt->Samples_Y);

  if(riopt->FilterWidth <= 0)
    fw = (RtInt)2;
  else
    fw = (RtInt)riopt->FilterWidth;

  if(riopt->FilterHeight <= 0)
    fh = (RtInt)2;
  else
    fh = (RtInt)riopt->FilterHeight;

  switch(riopt->FilterFunc)
    {
    case 1:
      RiPixelFilter(RiTriangleFilter,(RtFloat)fw,(RtFloat)fh);
      break;
    case 2:
      RiPixelFilter(RiCatmullRomFilter,(RtFloat)fw,(RtFloat)fh);
      break;
    case 3:
      RiPixelFilter(RiBoxFilter,(RtFloat)fw,(RtFloat)fh);
      break;
    case 4:
      RiPixelFilter(RiSincFilter,(RtFloat)fw,(RtFloat)fh);
      break;
    default:
      RiPixelFilter(RiGaussianFilter,(RtFloat)fw,(RtFloat)fh);
    }

  RiExposure((RtFloat)riopt->ExpGain, (RtFloat)riopt->ExpGamma);

  RiQuantize(RI_RGBA, (RtInt)riopt->RGBA_ONE, (RtInt)riopt->RGBA_MIN,
	     (RtInt)riopt->RGBA_MAX, (RtFloat)riopt->RGBA_Dither);

  /* BMRT-Specific */
  if(!ay_prefs.ristandard)
  {
    rtitemp = riopt->MinSamples;
    RiDeclare((RtToken)"minsamples", "integer");
    RiOption((RtToken)"render", (RtToken)"minsamples",
	     (RtPointer)(&rtitemp), RI_NULL);

    rtitemp = riopt->MaxSamples;
    RiDeclare((RtToken)"maxsamples", "integer");
    RiOption((RtToken)"render", (RtToken)"maxsamples",
	     (RtPointer)(&rtitemp), RI_NULL);

    rtitemp = riopt->MaxRayLevel;
    RiDeclare((RtToken)"max_raylevel", "integer");
    RiOption((RtToken)"render", (RtToken)"max_raylevel",
	     (RtPointer)(&rtitemp), RI_NULL);

    rtftemp = (RtFloat)riopt->ShadowBias;
    RiDeclare((RtToken)"minshadowbias", "float");
    RiOption((RtToken)"render", (RtToken)"minshadowbias",
	     (RtPointer)(&rtftemp), RI_NULL);

    rtitemp = riopt->PRManSpec;
    RiDeclare((RtToken)"prmanspecular", "integer");
    RiOption((RtToken)"render", (RtToken)"prmanspecular",
	     (RtPointer)(&rtitemp), RI_NULL);

    rtitemp = riopt->RadSteps;
    RiDeclare((RtToken)"steps", "integer");
    RiOption((RtToken)"radiosity", (RtToken)"steps",
	     (RtPointer)(&riopt->RadSteps), RI_NULL);

    rtitemp = riopt->PatchSamples;
    RiDeclare((RtToken)"minpatchsamples", "integer");
    RiOption((RtToken)"radiosity", (RtToken)"minpatchsamples",
	     (RtPointer)(&riopt->PatchSamples), RI_NULL);

    if(riopt->textures)
      if((riopt->textures)[0] != '\0')
	{
	  RiDeclare((RtToken)"texture", "string");
	  RiOption((RtToken)"searchpath", (RtToken)"texture",
		   (RtPointer)(&riopt->textures), RI_NULL);
	}

    if(riopt->shaders)
      if((riopt->shaders)[0] != '\0')
	{
	  RiDeclare((RtToken)"shader", "string");
	  RiOption((RtToken)"searchpath", (RtToken)"shader",
		   (RtPointer)(&riopt->shaders), RI_NULL);
	}

    if(riopt->archives)
      if((riopt->archives)[0] != '\0')
	{
	  RiDeclare((RtToken)"archive", "string");
	  RiOption((RtToken)"searchpath", (RtToken)"archive",
		   (RtPointer)(&riopt->archives), RI_NULL);
	}

    if(riopt->procedurals)
      if((riopt->procedurals)[0] != '\0')
	{
	  RiDeclare((RtToken)"procedural", "string");
	  RiOption((RtToken)"searchpath", (RtToken)"procedural",
		   (RtPointer)(&riopt->procedurals), RI_NULL);
	}

    rtitemp = riopt->texturemem;
    RiDeclare((RtToken)"texturememory", "integer");
    RiOption((RtToken)"limits", (RtToken)"texturememory",
	     &rtitemp, RI_NULL);

    rtitemp = riopt->geommem;
    RiDeclare((RtToken)"geommemory", "integer");
    RiOption((RtToken)"limits", (RtToken)"geommemory",
	     &rtitemp, RI_NULL);
  }


 return ay_status;
} /* ay_wrib_rioptions */


/* ay_wrib_trafos:
 *
 */
int
ay_wrib_trafos(ay_object *o)
{
 int ay_status = AY_OK;
 double euler[3];

  if((fabs(o->movx) > AY_EPSILON) ||
     (fabs(o->movy) > AY_EPSILON) ||
     (fabs(o->movz) > AY_EPSILON))
    RiTranslate((RtFloat)o->movx, (RtFloat)o->movy, (RtFloat)o->movz);

  if(o->quat[0] != 0.0 || o->quat[1] != 0.0 || o->quat[2] != 0.0 ||
     o->quat[3] != 1.0)
     {
       ay_quat_toeuler(o->quat, euler);
       if(fabs(euler[2]) > AY_EPSILON)
	 RiRotate((RtFloat)AY_R2D(-euler[2]),
		  (RtFloat)1.0, (RtFloat)0.0, (RtFloat)0.0);
       if(fabs(euler[1]) > AY_EPSILON)
	 RiRotate((RtFloat)AY_R2D(-euler[1]),
		  (RtFloat)0.0, (RtFloat)1.0, (RtFloat)0.0);
       if(fabs(euler[0]) > AY_EPSILON)
	 RiRotate((RtFloat)AY_R2D(-euler[0]),
		  (RtFloat)0.0, (RtFloat)0.0, (RtFloat)1.0);
     }

  if(o->scalx != 1.0 || o->scaly != 1.0 || o->scalz != 1.0)
    {
      RiScale((RtFloat)o->scalx, (RtFloat)o->scaly, (RtFloat)o->scalz);
    }

 return ay_status;
} /* ay_wrib_trafos */


/* ay_wrib_geniafilename:
 *  generate instance archive file name
 */
char *
ay_wrib_geniafilename(char *base, char *oi)
{
 char *iafilename = NULL, *ext = NULL;

  if(!(iafilename = malloc((strlen(base)+strlen(oi)+2)*sizeof(char))))
    return NULL;
  strcpy(iafilename, base);
  ext = strrchr(iafilename, '.');
  if(ext)
    {
      *ext = '-';
      ext++;
      strcpy(ext, oi);
      ext += strlen(oi);
      strcpy(ext, ".rib");
    }
  else
    {
      free(iafilename);
      return NULL;
    }
  return iafilename;
} /* ay_wrib_geniafilename */


/* ay_wrib_refobject:
 *  wrib referenced object (a master)
 */
int
ay_wrib_refobject(char *file, ay_object *o)
{
 int ay_status = AY_OK;
 char *iafilename = NULL;
 int found = AY_FALSE;
 ay_tag *tag = NULL;

  tag = o->tags;
  while(tag && !found)
    {
      if(tag->type == ay_oi_tagtype)
	{
	  RiTransformBegin();
	   ay_status = ay_wrib_trafos(o);

	   if(!file)
	     {
	       RiReadArchive(tag->val, (RtVoid*)RI_NULL, RI_NULL);
	     }
	   else
	     {
	       iafilename = ay_wrib_geniafilename(file, tag->val);
	       if(iafilename)
		 {
		   RiReadArchive(iafilename, (RtVoid*)RI_NULL, RI_NULL);
		   free(iafilename);
		 }
	       else
		 return AY_ERROR;
	     }
	  RiTransformEnd();
	  found = AY_TRUE;
	}
      tag = tag->next;
    } /* while */

  if(!found)
    return AY_ERROR; /* This should never happen! */

 return ay_status;
} /* ay_wrib_refobject */


/* ay_wrib_object:
 *
 */
int
ay_wrib_object(char *file, ay_object *o)
{
 int ay_status = AY_OK;
 ay_object *down = NULL;
 ay_voidfp *arr = NULL;
 ay_wribcb *cb = NULL;
 ay_level_object *l = NULL;
 ay_light_object *light = NULL;
 int down_is_prim = AY_FALSE;
 char *parname = "name";

  if(!o)
    return AY_ENULL;

  if(ay_prefs.excludehidden && o->hide)
    return AY_OK;

  if(ay_wrib_noexport(o))
    return AY_OK;

  arr = ay_wribcbt.arr;
  cb = (ay_wribcb *)(arr[o->type]);

  if((!ay_prefs.resolveinstances) && (o->type != AY_IDMATERIAL) &&
     (o->refcount) && (cb))
    {

      ay_status = ay_wrib_refobject(file, o);

      return AY_OK; /* XXXX early exit */
    }

  if(cb)
    {
      /* write name */
      if(ay_prefs.writeident)
	{
	  if(o->name)
	    {
	      if(!ay_prefs.ristandard)
		{
		  RiDeclare(parname, "string");
		  RiAttribute("identifier", parname,
			      (RtPointer)&o->name, RI_NULL);

		}
	      else
		{
		  RiArchiveRecord(RI_COMMENT, o->name);
		}
	    }
	}
      else
	{
	  if(o->name)
	    {
	      RiArchiveRecord(RI_COMMENT, o->name);
	    }
	}

      RiAttributeBegin();
      RiTransformBegin();

      /* write transformations */
      ay_wrib_trafos(o);

      /* write material information */
      if(o->type != AY_IDINSTANCE)
	{
	  if(o->mat)
	    {
	      ay_status = ay_matt_wrib(file, o->mat);
	    }

	  /* write tags */
	  if(o->tags)
	    {
	      ay_status = ay_riattr_wrib(o);
	      ay_status = ay_tc_wrib(o);
	    } /* if */
	}  /* if */
    } /* if */

  /* write child objects, but do not descend into light sources as
     the arealight geometry has been written long ago in the lights
     section of the RIB;  */
  if(o->down && o->down->next && (o->type != AY_IDLIGHT) &&
     !o->hide_children)
    {
      /* first, if the current object is a level object,
	 write appropriate SolidBegin statements */
      l = NULL;
      if(o->type == AY_IDLEVEL)
	{
	  l = (ay_level_object*)o->refine;
	  switch(l->type)
	    {
	    case AY_LTUNION:
	      RiSolidBegin(RI_UNION);
	      break;
	    case AY_LTDIFF:
	      RiSolidBegin(RI_DIFFERENCE);
	      break;
	    case AY_LTINT:
	      RiSolidBegin(RI_INTERSECTION);
	      break;
	    case AY_LTPRIM:
	      if(!ay_current_primlevel)
		{
		  RiSolidBegin(RI_PRIMITIVE);
		}
	      ay_current_primlevel++;
	      break;
	    default:
	      break;
	    } /* switch */
	} /* if */

      /* before writing the child objects, check for local lights
	 and switch them on */
      down = o->down;
      while(down->next)
	{
	  if(down->type == AY_IDLIGHT)
	    {
	      light = (ay_light_object*) down->refine;
	      if(light->type != AY_LITCUSTOM)
		{
		  if(light->on && light->local)
		    {
		      RiIlluminate(light->light_handle, RI_TRUE);
		    }
		}
	      else
		{
		  if(light->lshader && light->on && light->local)
		    {
		      RiIlluminate(light->light_handle, RI_TRUE);
		    }
		}
	    } /* if */
	  down = down->next;
	} /* while */

      /* finally, write the child objects */
      down = o->down;
      while(down->next)
	{
	  down_is_prim = AY_FALSE;
	  if(ay_wrib_isprimitive(down))
	    {
	      down_is_prim = AY_TRUE;
	      if(l && ((l->type == AY_LTUNION) || (l->type == AY_LTDIFF) ||
		       (l->type == AY_LTINT)))
		{
		  if(!ay_current_primlevel)
		    {
		      RiSolidBegin(RI_PRIMITIVE);
		    }
		  ay_current_primlevel++;
		} /* if */
	    } /* if */

	  ay_status = ay_wrib_object(file, down);
	  if(ay_status)
	    return ay_status;

	  if(down_is_prim)
	    {
	      if(l && ((l->type == AY_LTUNION) || (l->type == AY_LTDIFF) ||
		       (l->type == AY_LTINT)))
		{
		  ay_current_primlevel--;
		  if(!ay_current_primlevel)
		    {
		      RiSolidEnd();
		    }
		} /* if */
	    } /* if */

	  down = down->next;
	} /* while */

      /* after writing the child objects, check for local lights
	 and switch them off again */
      down = o->down;
      while(down->next)
	{
	  if(down->type == AY_IDLIGHT)
	    {
	      light = (ay_light_object*) down->refine;
	      if(light->type != AY_LITCUSTOM)
		{
		  if(light->on && light->local)
		    {
		      RiIlluminate(light->light_handle, RI_FALSE);
		    }
		}
	      else
		{
		  if(light->lshader && light->on && light->local)
		    {
		      RiIlluminate(light->light_handle, RI_FALSE);
		    }
		}
	    } /* if */
	  down = down->next;
	} /* while */

      /* write appropriate SolidEnd statements */
      if(l)
	{
	  if(l->type > 1)
	    {
	      if(l->type == AY_LTPRIM)
		{
		  ay_current_primlevel--;
		  if(!ay_current_primlevel)
		    {
		      RiSolidEnd();
		    }
		}
	      else
		{
		  RiSolidEnd();
		} /* if */
	    } /* if */
	} /* if */
    } /* if */

  if(cb)
    {
      ay_status = cb(file, o);

      RiTransformEnd();
      RiAttributeEnd();
    } /* if */

 return ay_status;
} /* ay_wrib_object */


/* ay_wrib_toolobject:
 *  export a sub-object from a tool object to a RIB file
 *  temporarily replacing the (PV) tags from the sub-object
 *  with the ones from the tool-object
 */
int
ay_wrib_toolobject(char *file, ay_object *o, ay_object *t)
{
 int ay_status = AY_OK;
 ay_tag *old_tags = NULL, *tag = NULL, *pvtags = NULL;
 unsigned int i = 0;

  if(!file || !o)
    return AY_ENULL;

  if(t && t->tags)
    {
      /* check the tags for PV tags */
      tag = t->tags;
      while(tag)
	{
	  if(tag->type == ay_pv_tagtype)
	    i++;
	  tag = tag->next;
	}

      if(i > 0)
	{
	  /* copy the PV tags temporarily into an array (pseudo-list)
	     but without actually copying the tag values */
	  if(!(pvtags = calloc(i, sizeof(ay_tag))))
	    {
	      return AY_EOMEM;
	    }
	  tag = t->tags;
	  i = 0;
	  while(tag)
	    {
	      if(tag->type == ay_pv_tagtype)
		{
		  (pvtags[i]).type = ay_pv_tagtype;
		  /* no need to copy the name... */
		  (pvtags[i]).val = tag->val;
		  (pvtags[i]).next = &(pvtags[i+1]);
		  i++;
		}
	      tag = tag->next;
	    } /* while */
	  /* terminate the pseudo-list */
	  (pvtags[i-1]).next = NULL;
	} /* if */

      old_tags = o->tags;
      o->tags = pvtags;
      ay_status = ay_wrib_object(file, o);
      o->tags = old_tags;

      if(pvtags)
	free(pvtags);
    }
  else
    {
      ay_status = ay_wrib_object(file, o);
    } /* if */

 return ay_status;
} /* ay_wrib_toolobject */


/* ay_wrib_displaytags:
 *  write display tags that are attached to the root object
 */
void
ay_wrib_displaytags(void)
{
 char fname[] = "wrib_displaytags";
 ay_object *root = NULL;
 ay_tag *tag = NULL;
 int i = 0, j = 0;
 char *val = NULL, *name = NULL, *type = NULL, *mode = NULL;
 size_t len;
 RtToken dtype = RI_FILE, dmode = RI_RGBA;
 RtToken *tokens = NULL;
 RtPointer *values = NULL;
 RtInt argc;

  root = ay_root;
  if(!root)
    return;

  tag = root->tags;
  if(!tag)
    return;

  while(tag)
    {
      if(tag->type == ay_ridisp_tagtype)
	{
	  name = NULL;
	  val = tag->val;
	  len = strlen(val)+1;
	  if(len > 1)
	    {
	      if(!(name = calloc(len, sizeof(char))))
		return;
	      if(!(type = calloc(len, sizeof(char))))
		{ free(name); return; }
	      if(!(mode = calloc(len, sizeof(char))))
		{ free(name); free(type); return; }

	      i = 0;
	      j = 0;
	      if(val[0] != '+')
		{
		  name[0] = '+';
		  i++;
		}
	      while(val[j] && val[j] != ',')
		{
		  name[i] = val[j];
		  i++; j++;
		}
	      name[i] = '\0';
	      i = 0;
	      j++;
	      while(val[j] && val[j] != ',')
		{
		  type[i] = val[j];
		  i++; j++;
		}
	      type[i] = '\0';
	      i = 0;
	      j++;
	      while(val[j] && val[j] != ',')
		{
		  mode[i] = val[j];
		  i++; j++;
		}
	      mode[i] = '\0';

	      if(!name[0] || !type[0] || !mode[0])
		{

		  ay_error(AY_ERROR, fname,
			   "malformed RiDisplay tag encountered");
		  free(name); free(type); free(mode);
		  return;
		}

	      /* get proper type */
	      if( ! ay_comp_strcase(type, "framebuffer"))
		{
		  dtype = RI_FRAMEBUFFER;
		}
	      if( ! ay_comp_strcase(type, "file"))
		{
		  dtype = RI_FILE;
		}


	      /* get proper mode */
	      if( ! ay_comp_strcase(mode, "a"))
		{
		  dmode = RI_A;
		}
	      if( ! ay_comp_strcase(mode, "z"))
		{
		  dmode = RI_Z;
		}
	      if( ! ay_comp_strcase(mode, "az"))
		{
		  dmode = RI_AZ;
		}
	      if( ! ay_comp_strcase(mode, "rgb"))
		{
		  dmode = RI_RGB;
		}
	      if( ! ay_comp_strcase(mode, "rgba"))
		{
		  dmode = RI_RGBA;
		}
	      if( ! ay_comp_strcase(mode, "rgbz"))
		{
		  dmode = RI_RGBZ;
		}
	      if( ! ay_comp_strcase(mode, "rgbaz"))
		{
		  dmode = RI_RGBAZ;
		}
	      argc = 0;
	      if(val[j] == ',')
		{
		  ay_tags_parseplist(&(val[j]), AY_TRUE,
				     &argc, &tokens, &values);
		}
	      if(argc != 0)
		{
		  RiDisplayV(name, dtype, dmode, argc, tokens, values);
		}
	      else
		{
		  RiDisplay(name, dtype, dmode, RI_NULL);
		}

	      free(name); free(type); free(mode);
	      /* free plist */
	      if(tokens)
		{
		  free(tokens);
		  tokens = NULL;
		}
	      if(values)
		{
		  free(values);
		  values = NULL;
		}

	    }
	  else
	    {
	      ay_error(AY_ERROR, fname,
		       "malformed RiDisplay tag encountered");
	    }
	} /* if */

      tag = tag->next;
    } /* while */

 return;
} /* ay_wrib_displaytags */


/* ay_wrib_hidertags:
 *  write hider tags that are attached to the root object
 */
void
ay_wrib_hidertags(void)
{
 char fname[] = "wrib_hidertags";
 ay_object *root = NULL;
 ay_tag *tag = NULL;
 int i = 0;
 char *val = NULL, *type = NULL;
 size_t len;
 RtToken htype = RI_HIDDEN;
 RtToken *tokens = NULL;
 RtPointer *values = NULL;
 RtInt argc;

  root = ay_root;
  if(!root)
    return;

  tag = root->tags;
  if(!tag)
    return;

  while(tag)
    {
      if(tag->type == ay_rihider_tagtype)
	{
	  val = tag->val;
	  len = strlen(val)+1;
	  if(len > 1)
	    {
	      if(!(type = calloc(len, sizeof(char))))
		{ return; }

	      i = 0;

	      while(val[i] && val[i] != ',')
		{
		  type[i] = val[i];
		  i++;
		}
	      type[i] = '\0';

	      if(!type[0])
		{
		  ay_error(AY_ERROR, fname,
			   "malformed RiHider tag encountered");
		  free(type);
		  return;
		}

	      /* get proper type */
	      if( ! ay_comp_strcase(type, "hidden"))
		{
		  htype = RI_HIDDEN;
		}
	      else
	      if( ! ay_comp_strcase(type, "paint"))
		{
		  htype = RI_PAINT;
		}
	      else
		{
		  htype = type;
		}

	      argc = 0;
	      if(val[i] == ',')
		{
		  ay_tags_parseplist(&(val[i]), AY_TRUE,
				     &argc, &tokens, &values);
		}

	      if(argc != 0)
		{
		  RiHiderV(htype, argc, tokens, values);
		}
	      else
		{
		  RiHider(htype, RI_NULL);
		}

	      free(type);
	      /* free plist */
	      if(tokens)
		{
		  free(tokens);
		  tokens = NULL;
		}
	      if(values)
		{
		  free(values);
		  values = NULL;
		}
	    }
	  else
	    {
	      ay_error(AY_ERROR, fname, "malformed RiHider tag encountered");
	    }
	} /* if */

      tag = tag->next;
    } /* while */

 return;
} /* ay_wrib_hidertags */


/* ay_wrib_rootsh:
 *  write shaders that are attached to root object
 *  if imager is 1, write imager shader
 *  if imager is 0, write atmosphere shader
 */
void
ay_wrib_rootsh(int imager)
{
 ay_root_object *root = NULL;

  root = (ay_root_object *)ay_root->refine;

  if(!imager)
    { /* write the atmosphere shader */
      ay_shader_wrib(root->atmosphere, AY_STATMOSPHERE, NULL);
    }
  else
    { /* write the imager shader */
      ay_shader_wrib(root->imager, AY_STIMAGER, NULL);
    } /* if */

 return;
} /* ay_wrib_rootsh */


/* ay_wrib_defmat:
 *  write default material
 */
void
ay_wrib_defmat(char *file)
{
 int ay_status = AY_OK;
 ay_mat_object *m = NULL;
 char fname[] = "wrib_defmat";

  switch(ay_prefs.defaultmat)
    {
    case 0:
      break;
    case 1:
      RiSurface("matte", RI_NULL);
      break;
    case 2:
      ay_status = ay_matt_getmaterial("default", &m);
      if(ay_status == AY_ERROR)
	{
	  ay_error(AY_EWARN, fname,
		   "No material named default. Using matte.");
	  RiSurface("matte", RI_NULL);
	}
      else
	{
	  ay_status = ay_matt_wrib(file, m);
	}
      break;
    default:
      break;
    } /* switch */

 return;
} /* ay_wrib_defmat */


/* ay_wrib_checklights:
 *  recursively browse through the scene and check for lights
 *  that are switched on; if none are to be found: return AY_FALSE,
 *  else return AY_TRUE;
 */
int
ay_wrib_checklights(ay_object *o)
{
 int  i = AY_FALSE;
 ay_light_object *light = NULL;

  if(!o)
    return AY_FALSE;

  while(o->next)
    {
      if(o->down)
	{
	  i = ay_wrib_checklights(o->down);
	  if(i)
	    {
	      /* no need for further checks; we found atleast one
		 light that is switched on => break recursion */
	      return i;
	    }
	}

      if((o->type == AY_IDLIGHT) && (!(ay_wrib_noexport(o))))
	{
	  light = (ay_light_object *)o->refine;

	  if(light->type == AY_LITCUSTOM)
	    {
	      if(light->lshader)
		{
		  if(light->on)
		    {
		      return AY_TRUE;
		    }
		}
	    }
	  else
	    {
	      if(light->on)
		{
		  return AY_TRUE;
		}
	    } /* if */
	} /* if */
      o = o->next;
    } /* while */

 return i;
} /* ay_wrib_checklights */


/* ay_wrib_lights:
 *  XXXX Bug! The method of accumulating transformations via
 *  the OpenGL MODELVIEW_MATRIX stack fails, if no view is open!
 */
int
ay_wrib_lights(char *file, ay_object *o)
{
 int ay_status = AY_OK;
 ay_light_object *light = NULL;
 char *onstr = "on", *offstr = "off";
 RtColor color = {0.0f,0.0f,0.0f};
 RtPoint from, to;
 RtFloat intensity, coneangle, conedeltaangle, beamdistribution;
 RtFloat rim[4][4];
 double m[16];
 int i, j;
 int countsm = 1;
 /* shadowmap names */
 char *shadowptr = NULL, *pxptr = NULL, *nxptr = NULL;
 char *pyptr = NULL, *nyptr = NULL, *pzptr = NULL, *nzptr = NULL;
 size_t filenlen = 0;
 RtLightHandle light_handle;
 char arrname[] = "ayprefs", ccvarname[] = "SMChangeShaders";
 const char *vstr = NULL;
 int changeshaders = AY_TRUE;

  if(!o || !file)
    return ay_status;

  vstr = Tcl_GetVar2(ay_interp, arrname, ccvarname,
		     TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  if(vstr)
    Tcl_GetInt(ay_interp, vstr, &changeshaders);

  filenlen = strlen(file);

  if(!(shadowptr = calloc(filenlen+64, sizeof(char))))
    return AY_EOMEM;
  if(!(pxptr = calloc(filenlen+64, sizeof(char))))
    return AY_EOMEM;
  if(!(nxptr = calloc(filenlen+64, sizeof(char))))
    return AY_EOMEM;
  if(!(pyptr = calloc(filenlen+64, sizeof(char))))
    return AY_EOMEM;
  if(!(nyptr = calloc(filenlen+64, sizeof(char))))
    return AY_EOMEM;
  if(!(pzptr = calloc(filenlen+64, sizeof(char))))
    return AY_EOMEM;
  if(!(nzptr = calloc(filenlen+64, sizeof(char))))
    return AY_EOMEM;

  while(o)
    {
      if(o->down)
	{
	  glPushMatrix();
	   glTranslated((GLdouble)o->movx, (GLdouble)o->movy,
			(GLdouble)o->movz);
	   ay_quat_torotmatrix(o->quat, m);
	   glMultMatrixd((GLdouble *)m);
	   glScaled (o->scalx, o->scaly, o->scalz);
	   ay_wrib_lights(file, o->down);
	  glPopMatrix();
	}

      if((o->type == AY_IDLIGHT) && (!(ay_wrib_noexport(o))))
	{
	  light = (ay_light_object *)o->refine;

	  /* write tags */
	  if(o->tags)
	    {
	      RiAttributeBegin();
	      ay_status = ay_riattr_wrib(o);
	    }

	  RiTransformBegin();

	  /* write transformation */
	  glPushMatrix();
	   glTranslated((GLdouble)o->movx, (GLdouble)o->movy,
			(GLdouble)o->movz);
	   ay_quat_torotmatrix(o->quat, m);
	   glMultMatrixd((GLdouble *)m);
	   glScaled (o->scalx, o->scaly, o->scalz);
	   glGetDoublev(GL_MODELVIEW_MATRIX, m);
	  glPopMatrix();

	  for(i=0;i<4;i++)
	    for(j=0;j<4;j++)
	      rim[i][j] = (RtFloat)m[i*4+j];

	  RiConcatTransform(rim);

	  from[0] = (RtFloat)light->tfrom[0];
	  from[1] = (RtFloat)light->tfrom[1];
	  from[2] = (RtFloat)light->tfrom[2];

	  to[0] = (RtFloat)light->tto[0];
	  to[1] = (RtFloat)light->tto[1];
	  to[2] = (RtFloat)light->tto[2];

	  intensity = (RtFloat)light->intensity;
	  color[0] = (RtFloat)(light->colr/255.0);
	  color[1] = (RtFloat)(light->colg/255.0);
	  color[2] = (RtFloat)(light->colb/255.0);

	  if(!ay_prefs.ristandard)
	    {
	      RiDeclare((RtToken)"shadows", "string");
	      if(light->shadows)
		RiAttribute("light","shadows",(RtPointer)&onstr, RI_NULL);
	      else
		RiAttribute("light","shadows",(RtPointer)&offstr, RI_NULL);
	    }

	  switch(light->type)
	    {
	    case AY_LITCUSTOM:
	      if(light->lshader)
		{

		  if(o->down && o->down->next)
		    { /* this is an AreaLight */
		      RiAttributeBegin();
		    } /* if */

		  if(light->samples > 1)
		    RiAttribute("light","nsamples",
				(RtPointer)(&light->samples), RI_NULL);

		  if(o->down && o->down->next)
		    { /* this is an AreaLight */
		      ay_status = ay_shader_wrib(light->lshader,
						 AY_STAREALIGHT,
						 &light_handle);
		      ay_status = ay_wrib_object(file, o->down);
		      RiAttributeEnd();
		    }
		  else
		    {
		      ay_status = ay_shader_wrib(light->lshader,
						 AY_STLIGHT,
						 &light_handle);
		    } /* if */
		} /* if */
	      break;
	    case AY_LITPOINT:
	      RiDeclare("intensity","float");
	      RiDeclare("lightcolor","color");
	      RiDeclare("from","point");

	      /* use shadowmap? */
	      if((ay_prefs.use_sm > 0) && light->use_sm && changeshaders)
		{ /* yes */
		  RiDeclare("sfpx", "uniform string");
		  RiDeclare("sfnx", "uniform string");
	          RiDeclare("sfpy", "uniform string");
		  RiDeclare("sfny", "uniform string");
		  RiDeclare("sfpz", "uniform string");
		  RiDeclare("sfnz", "uniform string");

		  sprintf(pxptr, "%s.point%d_x+.shd", file, countsm);
		  sprintf(nxptr, "%s.point%d_x-.shd", file, countsm);
		  sprintf(pyptr, "%s.point%d_y+.shd", file, countsm);
		  sprintf(nyptr, "%s.point%d_y-.shd", file, countsm);
		  sprintf(pzptr, "%s.point%d_z+.shd", file, countsm);
		  sprintf(nzptr, "%s.point%d_z-.shd", file, countsm);
		  light_handle = RiLightSource("shadowpoint",
					"intensity", (RtPointer)&intensity,
					"lightcolor", (RtPointer)&color,
					"from", (RtPointer)&from,
					"sfpx", (RtPointer)&pxptr,
			                "sfnx", (RtPointer)&nxptr,
			                "sfpy", (RtPointer)&pyptr,
			                "sfny", (RtPointer)&nyptr,
			                "sfpz", (RtPointer)&pzptr,
			                "sfnz", (RtPointer)&nzptr,
					RI_NULL);
		  countsm++;
		}
	      else
		{ /* no, write normal lightsource */
		  light_handle = RiLightSource("pointlight",
					"intensity", (RtPointer)&intensity,
			                "lightcolor", (RtPointer)&color,
			                "from", (RtPointer)&from,
					RI_NULL);
		} /* if */
	      break;
	    case AY_LITSPOT:

	      RiDeclare("intensity","float");
	      RiDeclare("lightcolor","color");
	      RiDeclare("from","point");
	      RiDeclare("to","point");
	      RiDeclare("coneangle","float");
	      RiDeclare("conedeltaangle","float");
	      RiDeclare("beamdistribution","float");
	      coneangle = (RtFloat)light->cone_angle;
	      conedeltaangle = (RtFloat)light->cone_delta_angle;
	      beamdistribution = (RtFloat)light->beam_distribution;

	      /* use shadowmap? */
	      if((ay_prefs.use_sm > 0) && light->use_sm && changeshaders)
		{ /* yes */
		 RiDeclare("shadowname", "uniform string");
		  sprintf(shadowptr, "%s.spot%d.shd", file, countsm);
		  light_handle = RiLightSource("shadowspot",
			"intensity",(RtPointer)&intensity,
			"lightcolor",(RtPointer)&color,
			"from",(RtPointer)&from,
			"to",(RtPointer)&to,
			"coneangle",(RtPointer)&coneangle,
			"conedeltaangle",(RtPointer)&conedeltaangle,
			"beamdistribution",(RtPointer)&beamdistribution,
			"shadowname", (RtPointer)&shadowptr,
			RI_NULL);
		  countsm++;
		}
	      else
		{ /* no, write normal lightsource */
		  light_handle = RiLightSource("spotlight",
			"intensity",(RtPointer)&intensity,
			"lightcolor",(RtPointer)&color,
			"from",(RtPointer)&from,
			"to",(RtPointer)&to,
			"coneangle",(RtPointer)&coneangle,
			"conedeltaangle",(RtPointer)&conedeltaangle,
			"beamdistribution",(RtPointer)&beamdistribution,
			RI_NULL);
		} /* if */
	      break;
	    case AY_LITDISTANT:
	      RiDeclare("intensity","float");
	      RiDeclare("lightcolor","color");
	      RiDeclare("from","point");
	      RiDeclare("to","point");
	      /* use shadowmap? */
	      if((ay_prefs.use_sm > 0) && light->use_sm && changeshaders)
		{ /* yes */
		  RiDeclare("shadowname", "uniform string");
		  sprintf(shadowptr, "%s.dist%d.shd", file, countsm);
		  light_handle = RiLightSource("shadowdistant",
					"intensity", (RtPointer)&intensity,
					"lightcolor", (RtPointer)&color,
					"from", (RtPointer)&from,
					"to", (RtPointer)&to,
					"shadowname", (RtPointer)&shadowptr,
					RI_NULL);
		  countsm++;
		}
	      else
		{ /* no, write normal lightsource */
		  light_handle = RiLightSource("distantlight",
					"intensity", (RtPointer)&intensity,
					"lightcolor", (RtPointer)&color,
			                "from", (RtPointer)&from,
			                "to", (RtPointer)&to,
					RI_NULL);
		} /* if */
	      break;
	    default:
	      break;
	    } /* switch */

	  light->light_handle = light_handle;

	  /* immediately switch on all lights that are not local */
	  switch(light->type)
	    {
	    case AY_LITCUSTOM:
	      if(light->lshader)
		{
		  if(light->on && !light->local)
		    RiIlluminate(light_handle, RI_TRUE);
		  else
		    RiIlluminate(light_handle, RI_FALSE);
		}
	      break;
	    default:
	      if(light->on && !light->local)
		RiIlluminate(light_handle, RI_TRUE);
	      else
		RiIlluminate(light_handle, RI_FALSE);
	      break;
	    } /* switch */

	  RiTransformEnd();

	  if(o->tags)
	    {
	      RiAttributeEnd();
	    }
	} /* if */
      o = o->next;
    } /* while */

  /* clean up */
  if(shadowptr)
    {
      free(shadowptr);
    }
  if(pxptr)
    {
      free(pxptr);
    }
  if(nxptr)
    {
      free(nxptr);
    }
  if(pyptr)
    {
      free(pyptr);
    }
  if(nyptr)
    {
      free(nyptr);
    }
  if(pzptr)
    {
      free(pzptr);
    }
  if(nzptr)
    {
      free(nzptr);
    }

  return ay_status;
} /* ay_wrib_lights */


/* ay_wrib_scene:
 *  propagate changes to this function also to ay_wrib_pprevdraw()!
 */
int
ay_wrib_scene(char *file, char *image, int temp, int rtf,
	      double *from, double *to,
	      double roll, double zoom, double nearp, double farp,
	      int width, int height, int type)
{
 int ay_status = AY_OK;
 ay_object *o = ay_root;
 ay_root_object *root = NULL;
 ay_riopt *riopt = NULL;
 RtPoint f,/* t,*/ d;
 RtFloat aspect = (RtFloat)1.0, swleft, swright, swtop, swbot;
 RtFloat fov = (RtFloat)90.0, rinearp, rifarp;
 char *objfile = NULL, *pos = NULL, fnum[30];
 size_t filenlen = 0;

  ay_current_primlevel = 0;

  /* create obj-file name (for use with ShadowMaps) */
  if(ay_prefs.use_sm >= 1)
    {
      ay_prefs.wrib_sm = AY_TRUE;

      filenlen = strlen(file);

      if(!(objfile = calloc(filenlen+64, sizeof(char))))
	return AY_EOMEM;

      pos = strstr(file, ".rib");

      if(pos)
	{
	  sprintf(objfile, "%s", file);
	  pos = NULL;
	  pos = strstr(objfile, ".rib");
	  if(pos)
	    sprintf(pos, "%s", ".obj.rib");
	}
      else
	{
	  sprintf(objfile, "%s.obj.rib", file);
	}
    } /* if */

  if(!ay_prefs.resolveinstances)
    {
      /* reset oid counter */
      ay_instt_createoid(NULL);
      /* create OI tags for all original (referenced) objects */
      ay_status = ay_instt_createorigids(o);
      /* create OI tags for all instance (referencing) objects */
      /*ay_status = ay_instt_createinstanceids(o);*/
      /* write archive files for all original (referenced) objects */
      if(ay_prefs.use_sm >= 1)
	{
	  ay_status = ay_instt_wribiarchives(objfile, o);
	}
      else
	{
	  ay_status = ay_instt_wribiarchives(file, o);
	}
    } /* if */

  ay_wrib_framenum = 1;

  /* assemble args */
  aspect = (RtFloat)(width/((double)height));

  f[0] = (RtFloat) from[0];
  f[1] = (RtFloat) from[1];
  f[2] = (RtFloat) from[2];

  /*
  t[0] = (RtFloat) to[0];
  t[1] = (RtFloat) to[1];
  t[2] = (RtFloat) to[2];
  */

  d[0] = (RtFloat)(to[0] - from[0]);
  d[1] = (RtFloat)(to[1] - from[1]);
  d[2] = (RtFloat)(to[2] - from[2]);

  /* dump RIB to stdout? */
  if(!file)
    { /* Yes */
      RiBegin(RI_NULL);
    }
  else
    { /* No */
      RiBegin(file);
    }

  /* write shadow maps */
  if(ay_prefs.use_sm == 1)
    {
      ay_prefs.wrib_sm = AY_TRUE;

      /* write root RiOption tags (possibly containing shadow bias) */
      ay_status = ay_riopt_wrib(ay_root);

      ay_sm_wriballsm(file, objfile, ay_root->next, NULL, width, height,
		      AY_FALSE);

      ay_prefs.wrib_sm = AY_FALSE;
    }

  RiFrameBegin((RtInt)ay_wrib_framenum++);

   /* render to frame buffer or to image file? */
   if(!image)
     { /* frame buffer */
       /* XXXX use "dummy" to work around a bug in Aqsis libri2rib */
       RiDisplay(/*RI_NULL*/"dummy", RI_FRAMEBUFFER, RI_RGBA, RI_NULL);
     }
   else
     { /* image file */
       root = (ay_root_object*)(ay_root->refine);
       riopt = root->riopt;
       if(riopt->use_std_display || temp || rtf)
	 {
	   RiDisplay(image, RI_FILE, RI_RGBA, RI_NULL);
	 }
     } /* if */

   /* write additional RiDisplay statements from tags */
   ay_wrib_displaytags();
   /* write RiHider statements from tags */
   ay_wrib_hidertags();
   /* write imager shader */
   ay_wrib_rootsh(AY_TRUE);

   /* Camera! */
   RiFormat(width, height, (RtFloat)-1.0);
   if(type != AY_VTPERSP)
     RiProjection("orthographic", RI_NULL);
   else
     RiProjection("perspective", "fov", (RtPointer)&fov, RI_NULL);

   RiFrameAspectRatio((RtFloat)aspect);

   swleft = (RtFloat)-aspect;
   swright = (RtFloat)aspect;
   swbot = (RtFloat)-1.0;
   swtop = (RtFloat)1.0;

   /* clipping planes */
   if(nearp != 0.0 || farp != 0.0)
     {
       if(nearp != 0.0)
	 {
	   rinearp = (RtFloat)nearp;
	   if(type == AY_VTPERSP)
	     zoom /= nearp;
	 }
       else
	 rinearp = RI_EPSILON;

       if(farp != 0.0)
	 rifarp = (RtFloat)farp;
       else
	 rifarp = RI_INFINITY;

       RiClipping(rinearp, rifarp);
     }

   RiScreenWindow((RtFloat)(swleft*zoom), (RtFloat)(swright*zoom),
		  (RtFloat)(swbot*zoom), (RtFloat)(swtop*zoom));

   RiIdentity();

   /* check for lights */
   if(ay_prefs.checklights)
     {
       if(!ay_wrib_checklights(ay_root))
	 { /* no lights in scene -> add a distant headlight */
	   RiArchiveRecord(RI_COMMENT, "Default Distant Headlight");
	   RiLightSource("distantlight", RI_NULL);
	 }
     }

   /* convert rh to lh */
   RiArchiveRecord(RI_COMMENT, "rh->lh");
   RiScale((RtFloat)-1.0, (RtFloat)1.0, (RtFloat)1.0);

   RiArchiveRecord(RI_COMMENT, "Camera!");
   ay_wrib_placecamera(f, d, roll);

   /* write RiOptions */
   ay_status = ay_wrib_rioptions();

   /* write root RiOption tags */
   ay_status = ay_riopt_wrib(ay_root);

   RiWorldBegin();

    /* Lights! */
    RiArchiveRecord(RI_COMMENT, "Lights!");
    ay_status = ay_wrib_lights(file, ay_root->next);

    RiIdentity();

    /* Action! */
    RiArchiveRecord(RI_COMMENT, "Action!");

    /* write atmosphere shader */
    ay_wrib_rootsh(AY_FALSE);

    /* write default material */
    ay_wrib_defmat(file);

    /* write objects */
    if(!ay_prefs.use_sm)
      {
	o = ay_root->next;
	while(o->next)
	  {
	    ay_status = ay_wrib_object(file, o);
	    o = o->next;
	  }
      }
    else
      {
	RiReadArchive(objfile, (RtVoid*)RI_NULL, RI_NULL);
      }

   RiWorldEnd();

  RiFrameEnd();

  if(ay_prefs.use_sm == 1)
    {
      sprintf(fnum, "%d", (ay_wrib_framenum-1));
      RiArchiveRecord(RI_COMMENT, fnum);
    }

  /* Cut! */
  RiEnd();

  /* if shadowmaps are in use, write second RIB containing objects */
  if(ay_prefs.use_sm >= 1)
    {
      RiBegin(objfile);
       o = ay_root->next;
       while(o->next)
	 {
	   ay_status = ay_wrib_object(objfile, o);
	   o = o->next;
	 }
      RiEnd();
    } /* if */

  /* clean up */
  if(objfile)
    {
      free(objfile);
    }

 return ay_status;
} /* ay_wrib_scene */


/* ay_wrib_sm:
 *
 */
int
ay_wrib_sm(char *file, char *image, int width, int height, int selonly)
{
 int ay_status = AY_OK;
 ay_object *o = ay_root;
 char *objfile = NULL, *pos = NULL;
 size_t filenlen = 0;

  filenlen = strlen(file);

  if(!(objfile = calloc(filenlen+64, sizeof(char))))
    return AY_EOMEM;

  pos = strstr(file, ".rib");

  if(pos)
    {
      sprintf(objfile, "%s", file);
      pos = NULL;
      pos = strstr(objfile, ".rib");
      if(pos)
	sprintf(pos, "%s", ".obj.rib");
    }
  else
    {
      sprintf(objfile, "%s.obj.rib", file);
    }

 if(!ay_prefs.resolveinstances)
  {
    /* reset oid counter */
    ay_instt_createoid(NULL);
    /* create OI tags for all original (referenced) objects */
    ay_status = ay_instt_createorigids(o);
    /* create OI tags for all instance (referencing) objects */
    /*ay_status = ay_instt_createinstanceids(o);*/
    /* write archive files for all original (referenced) objects */
    ay_status = ay_instt_wribiarchives(objfile, o);
  }

  ay_wrib_framenum = 1;

  if(!file) /* dump .rib to stdout? */
    RiBegin(RI_NULL);
  else
    RiBegin(file);

  /* inform other code that we write shadow maps now */
  ay_prefs.wrib_sm = AY_TRUE;

  /* write RiHider tags */
  ay_wrib_hidertags();

  /* write RiOption tags (possibly containing shadow bias settings) */
  ay_status = ay_riopt_wrib(ay_root);

  /* actually write the shadow maps */
  ay_sm_wriballsm(file, objfile, ay_root->next, NULL, width, height,
		  selonly);

  /* inform other code that we do not write shadow maps anymore */
  ay_prefs.wrib_sm = AY_FALSE;

  /* Cut! */
  RiEnd();

  /* write second RIB containing objects */
  RiBegin(objfile);

  o = ay_root->next;
  while(o->next)
    {
      ay_status = ay_wrib_object(objfile, o);
      o = o->next;
    }

  RiEnd();

  free(objfile);

 return ay_status;
} /* ay_wrib_sm */


/* ay_wrib_cb:
 *
 */
int
ay_wrib_cb(struct Togl *togl, int argc, char *argv[])
{
 int ay_status = AY_OK;
 ay_view_object *view = (ay_view_object *)Togl_GetClientData(togl);
 ay_root_object *root = NULL;
 ay_riopt *riopt = NULL;
 int width = Togl_Width (togl);
 int height = Togl_Height (togl);
 int i, temp = AY_FALSE, rtf = AY_FALSE;
 char *file = NULL, *image = NULL;
 char fname[] = "write_rib";
 double addroll = 0.0, dir[3];

#ifdef AYENABLEPPREV
  /* is a permanent preview window open? */
  if(ay_prefs.pprev_open)
    {
      ay_error(AY_ERROR, fname, "Please close the permanent preview first!");
      return AY_ERROR;
    }
#endif

  /* parse args */
  i = 2;
  while((i+1) <= argc)
    {
      if(!strcmp(argv[i], "-file"))
	{
	  file = argv[i+1];
	  i++;
	}

      if(!strcmp(argv[i], "-image"))
	{
	  image = argv[i+1];
	  i++;
	}

      if(!strcmp(argv[i], "-temp"))
	{
	  temp = AY_TRUE;
	}

      if(!strcmp(argv[i], "-rtf"))
	{
	  rtf = AY_TRUE;
	}
      i++;
    } /* while */

  root = (ay_root_object*)(ay_root->refine);
  riopt = root->riopt;

  if(!temp)
    {
      /* override view width/height ? */
      if(riopt->width > 0)
	width = riopt->width;

      if(riopt->height > 0)
	height = riopt->height;
    }

  /* default */
  if(!file)
    {
      file = "rendrib";
    }

  dir[0] = (view->to[0] - view->from[0]);
  dir[1] = (view->to[1] - view->from[1]);
  dir[2] = (view->to[2] - view->from[2]);

  ay_wrib_getup(dir, view->up, &addroll);

  ay_status = ay_wrib_scene(file, image, temp, rtf, view->from, view->to,
			    view->roll+addroll, view->zoom, view->nearp,
			    view->farp,
			    width, height, view->type);

  if(ay_status)
    {
      ay_error(ay_status, fname, NULL);
    }

 return TCL_OK;
} /* ay_wrib_cb */


/* ay_wrib_tcmd
 *
 */
int
ay_wrib_tcmd(ClientData clientData, Tcl_Interp * interp,
	     int argc, char *argv[])
{
 int ay_status = AY_OK;
 ay_object *o = NULL;
 ay_list_object *sel = ay_selection;
 ay_camera_object *cam = NULL;
 ay_root_object *root = NULL;
 ay_riopt *riopt = NULL;
 int old_resinstances = ay_prefs.resolveinstances;
 int width = 400;
 int height = 300;
 int i, selonly = AY_FALSE, smonly = AY_FALSE, objonly = AY_FALSE;
 char *filename = NULL, *imagename = NULL;
 char fname[] = "wrib";
 double addroll = 0.0, dir[3];

 /*
  if(argc <= 1)
    {
      ay_error(AY_EARGS, fname,
	 "<filename> \\[-image <imagename>\\] \\[-smonly\\]");
      return TCL_OK;
    }
 */

  filename = argv[1];

  /* parse args */
  i = 2;
  while((i+1) <= argc)
    {
      if(!strcmp(argv[i], "-image"))
	{
	  imagename = argv[i+1];
	  i++;
	}
      else
      if(!strcmp(argv[i], "-smonly"))
	smonly = AY_TRUE;
      else
      if(!strcmp(argv[i], "-selonly"))
	selonly = AY_TRUE;
      else
      if(!strcmp(argv[i], "-objonly"))
	objonly = AY_TRUE;

      i++;
    } /* while */

  if((!(smonly || selonly || objonly)) && (!sel ||
	      (sel && sel->object->type != AY_IDCAMERA)))
   {
     ay_error(AY_ERROR, fname, "Please select a camera object!");
     return TCL_OK;
   }

  if(smonly && selonly && (!(sel && (sel->object->type == AY_IDLIGHT))))
    {
      ay_error(AY_ERROR, fname, "Please select a light object!");
      return TCL_OK;
    }

  if(selonly && (!sel))
   {
     ay_error(AY_ENOSEL, fname, NULL);
     return TCL_OK;
   }

  if(!(smonly || selonly || objonly))
    cam = (ay_camera_object*)(sel->object->refine);

#ifdef AYENABLEPPREV
  /* is a permanent preview window open? */
  if(ay_prefs.pprev_open)
    {
      ay_error(AY_ERROR, fname, "Please close the permanent preview first!");
      return TCL_OK;
    }
#endif

  root = (ay_root_object*)(ay_root->refine);
  riopt = root->riopt;

  /* override view width/height ? */
  if(riopt->width > 0)
    width = riopt->width;

  if(riopt->height > 0)
    height = riopt->height;

  /* default */
  if(!filename)
    {
      filename = "unnamed.rib";
    }

  if(!imagename)
    {
      imagename = "unnamed.tif";
    }

  if(!(smonly || selonly || objonly))
    {
      /* normal RIB export (no shadow maps, complete scene, all objects) */
      dir[0] = (cam->to[0] - cam->from[0]);
      dir[1] = (cam->to[1] - cam->from[1]);
      dir[2] = (cam->to[2] - cam->from[2]);

      ay_wrib_getup(dir, cam->up, &addroll);

      ay_status = ay_wrib_scene(filename, imagename, AY_FALSE, AY_FALSE,
				cam->from, cam->to, cam->roll+addroll,
				cam->zoom, cam->nearp, cam->farp,
				width, height, AY_VTPERSP);
    }
  else
    {
      if(smonly)
	{
	  /* export for rendering shadow maps */
	  ay_status = ay_wrib_sm(filename, imagename, width, height, selonly);
	}
      else
	{
	  /* export for normal rendering */
	  if(selonly)
	    {
	      /* export selected objects only */

	      /* thus, always resolve instances */
	      ay_prefs.resolveinstances = AY_TRUE;

	      RiBegin(filename);
	       while(sel)
		 {
		   ay_wrib_object(filename, sel->object);
		   sel = sel->next;
		 } /* while */
	      RiEnd();

	      /* restore old value */
	      ay_prefs.resolveinstances = old_resinstances;
	    }
	  else
	    {
	      /* export all objects only */
	      o = ay_root->next;
	      RiBegin(filename);
	       while(o)
		 {
		   ay_wrib_object(filename, o);
		   o = o->next;
		 } /* while */
	      RiEnd();
	    } /* if */
	} /* if */
    } /* if */

  if(ay_status)
    {
      ay_error(ay_status, fname, NULL);
    }

 return TCL_OK;
} /* ay_wrib_tcmd */


#ifdef AYENABLEPPREV
/* ay_wrib_pprevdraw:
 *
 */
int
ay_wrib_pprevdraw(ay_view_object *view)
{
 int ay_status = AY_OK;
 ay_object *o = ay_root;
 int old_resinstances = ay_prefs.resolveinstances;
 RtPoint f, t, d;
 RtFloat aspect = (RtFloat)1.0, swleft, swright, swtop, swbot;
 RtFloat fov = (RtFloat)90.0, rinearp, rifarp;
 struct Togl *togl = NULL;
 int width, height, i;
 double zoom, roll, *from, *to;
 char *pprender = "rgl";
 double addroll = 0.0, dir[3];

  ay_current_primlevel = 0;

  if(ay_prefs.pprender && (strlen(ay_prefs.pprender) > 0))
    {
      pprender = ay_prefs.pprender;
    }

  from = view->from;
  to = view->to;
  togl = view->togl;
  width = Togl_Width(togl);
  height = Togl_Height(togl);
  zoom = view->zoom;
  roll = view->roll;

  aspect = (RtFloat)(width/((double)height));

  /* assemble args */
  f[0] = (RtFloat) from[0];
  f[1] = (RtFloat) from[1];
  f[2] = (RtFloat) from[2];

  t[0] = (RtFloat) to[0];
  t[1] = (RtFloat) to[1];
  t[2] = (RtFloat) to[2];

  d[0] = (RtFloat)(to[0] - from[0]);
  d[1] = (RtFloat)(to[1] - from[1]);
  d[2] = (RtFloat)(to[2] - from[2]);

  dir[0] = (view->to[0] - view->from[0]);
  dir[1] = (view->to[1] - view->from[1]);
  dir[2] = (view->to[2] - view->from[2]);

  ay_wrib_getup(dir, view->up, &addroll);

  /* when rendering to a pipe, do not create extra files
     for instances but rather resolve them */
  ay_prefs.resolveinstances = AY_TRUE;

  /* XXXX does this constant framenumber hurt? */
  RiFrameBegin((RtInt)1);

  RiDisplay("PPrev", RI_FRAMEBUFFER, RI_RGBA, RI_NULL);

  /* write RiHider statements from tags */
  ay_wrib_hidertags();

  /* write imager shader */
  ay_wrib_rootsh(AY_TRUE);

  /* Camera! */
  RiFormat(width, height, (RtFloat)-1.0);
  if(view->type != AY_VTPERSP)
    RiProjection("orthographic", RI_NULL);
  else
    RiProjection("perspective", "fov", (RtPointer)&fov, RI_NULL);

  RiFrameAspectRatio((RtFloat)aspect);

  swleft = (RtFloat)-aspect;
  swright =  (RtFloat)aspect;
  swbot = (RtFloat)-1.0;
  swtop = (RtFloat)1.0;

  /* clipping planes */
  if(view->nearp != 0.0 || view->farp != 0.0)
    {
      if(view->nearp != 0.0)
	{
	  rinearp = (RtFloat)view->nearp;
	  if(view->type == AY_VTPERSP)
	    zoom /= view->nearp;
	}
      else
	rinearp = RI_EPSILON;

      if(view->farp != 0.0)
	rifarp = (RtFloat)view->farp;
      else
	rifarp = RI_INFINITY;

      RiClipping(rinearp, rifarp);
    }

  RiScreenWindow((RtFloat)(swleft*zoom), (RtFloat)(swright*zoom),
		 (RtFloat)(swbot*zoom), (RtFloat)(swtop*zoom));

  RiIdentity();

  /* check for lights */
  if(ay_prefs.checklights)
    {
      if(!ay_wrib_checklights(ay_root))
	{ /* no lights in scene -> add a distant headlight */
	  RiArchiveRecord(RI_COMMENT, "Default Distant Headlight");
	  RiLightSource("distantlight", RI_NULL);
	}
    }

  /* convert rh to lh */
  RiArchiveRecord(RI_COMMENT, "rh->lh");
  RiScale((RtFloat)-1.0, (RtFloat)1.0, (RtFloat)1.0);
  RiArchiveRecord(RI_COMMENT, "Camera!");
  ay_wrib_placecamera(f, d, roll+addroll);

  /* write RiOptions */
  ay_status = ay_wrib_rioptions();

  /* write root RiOption tags */
  ay_status = ay_riopt_wrib(ay_root);

  RiWorldBegin();

  /* Lights! */
  RiArchiveRecord(RI_COMMENT, "Lights!");
  ay_status = ay_wrib_lights(pprender, ay_root->next);

  RiIdentity();

  /* Action! */
  RiArchiveRecord(RI_COMMENT, "Action!");

  /* write atmosphere shader */
  ay_wrib_rootsh(AY_FALSE);

  /* write default material */
  ay_wrib_defmat(pprender);

   o = ay_root->next;
   while(o->next)
     {
       ay_status = ay_wrib_object(pprender, o);
       o = o->next;
     }

  RiWorldEnd();
  RiFrameEnd();

  /* XXXX */
  for(i = 0;i < 500; i++)
    {
      RiArchiveRecord(RI_COMMENT, "Redraw please!\n");
    }

  ay_prefs.resolveinstances = old_resinstances;

 return ay_status;
} /* ay_wrib_pprevdraw */


/* ay_wrib_pprevopen:
 *
 */
int
ay_wrib_pprevopen(ay_view_object *view)
{
 int ay_status = AY_OK;
 char *pprender = "rgl";

  if(ay_prefs.pprender && (strlen(ay_prefs.pprender) > 0))
    {
      pprender = ay_prefs.pprender;
    }

  /* first, close eventually already open permanent preview window */
  ay_wrib_pprevclose();

  view->ppreview = AY_TRUE;

  /* now, open the new permanent preview window */
  /* corresponding RiEnd(); issued in pprevclose() below */
  RiBegin(pprender);

  /* and draw it */
  ay_status = ay_wrib_pprevdraw(view);

  ay_prefs.pprev_open = AY_TRUE;

 return ay_status;
} /* ay_wrib_pprevopen */


/* ay_wrib_pprevclose:
 *
 */
void
ay_wrib_pprevclose()
{
 ay_object *o = ay_root->down;
 ay_view_object *v = NULL;
 char fname[] = "pprevclose";

  while(o)
    {
      if(o->type == AY_IDVIEW)
	{
	  v = (ay_view_object *)o->refine;

	  if(v->ppreview)
	    {
	      ay_error(AY_EOUTPUT, fname,
		    "Please close the permanent preview window now manually,");
	      ay_error(AY_EOUTPUT, fname,"using the Esc-key!");

	      /* corresponding RiBegin(); was issued in pprevopen() above */
	      RiEnd();

	      v->ppreview = AY_FALSE;
	      ay_prefs.pprev_open = AY_FALSE;
	    } /* if */

	} /* if */
      o = o->next;
    } /* while */

 return;
} /* ay_wrib_pprevclose */
#endif /* AYENABLEPPREV */


/* ay_wrib_init:
 *  initialize wrib module by registering the RiDisplay, RiHider, and
 *  NoExport tag types
 */
void
ay_wrib_init(Tcl_Interp *interp)
{

  /* register RiDisplay tag type */
  ay_tags_register(interp, ay_ridisp_tagname, &ay_ridisp_tagtype);

  /* register RiHider tag type */
  ay_tags_register(interp, ay_rihider_tagname, &ay_rihider_tagtype);

  /* register NoExport tag type */
  ay_tags_register(interp, ay_noexport_tagname, &ay_noexport_tagtype);

 return;
} /* ay_wrib_init */
