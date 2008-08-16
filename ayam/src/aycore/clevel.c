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

#include <ctype.h>

/* clevel.c - functions for current level management */

/* ay_clevel_find:
 *  _recursively_ search through all objects beneath and below <c>
 *  for object <o> and build a stack of list objects pointing from the
 *  ay_root to the object <o> in <ay_currentlevel>
 */
int
ay_clevel_find(ay_object *c, ay_object *o, int *found)
{
 int ay_status = AY_OK;

 /**found = AY_FALSE;*/
  while(c->next)
    {
      if(c != o)
	{
	  if(c->down)
	    {
	      ay_clevel_add(c);
	      ay_clevel_add(c->down);
	      ay_status = ay_clevel_find(c->down, o, found);
	      if(!(*found))
		{
		  ay_clevel_del();
		  ay_clevel_del();
		}
	      else
		{
		  return AY_OK;
		}
	    } /* if */
	}
      else
	{
	  *found = AY_TRUE;
	  return AY_OK;
	} /* if */
      c = c->next;
    } /* while */

 return AY_OK;
} /* ay_clevel_find */


/* ay_clevel_add:
 *  put list object pointing to <o> to top of current level stack
 */
int
ay_clevel_add(ay_object *o)
{
 ay_list_object *lev = NULL;

  if(!(lev = calloc(1, sizeof(ay_list_object))))
    return AY_EOMEM;

  lev->object = o;

  if(ay_currentlevel)
    lev->next = ay_currentlevel;

  ay_currentlevel = lev;

 return AY_OK;
} /* ay_clevel_add */


/* ay_clevel_del:
 *  remove topmost list object from current level stack
 */
int
ay_clevel_del(void)
{
 ay_list_object *lev = ay_currentlevel;

  if(lev->next)
  {
    ay_currentlevel = lev->next;
    free(lev);
  }

 return AY_OK;
} /* ay_clevel_del */


/* ay_clevel_delall:
 * actually deletes all clevel objects but not the first
 * that points to ay_root
 */
int
ay_clevel_delall(void)
{
 ay_list_object *lev = ay_currentlevel;

  if(lev)
    while(lev->next)
      {
	ay_currentlevel = lev->next;
	free(lev);
	lev = ay_currentlevel;
      }

  ay_clevel_add(ay_root);

 return AY_OK;
} /* ay_clevel_delall */


/* ay_clevel_gotoptcmd:
 *  Tcl command to change the current level to the top level
 */
int
ay_clevel_gotoptcmd(ClientData clientData, Tcl_Interp *interp,
		    int argc, char *argv[])
{
 int ay_status = AY_OK;
 ay_object *o = ay_root;
 /* char varName[20], newValue[10];*/

  ay_status = ay_clevel_delall();

  if(o)
    {
      while(o->next)
	{
	  ay_next = &(o->next);
	  o = o->next;
	}
    }
#if 0
  /* Synchronize the value of ay(CurrentLevel) */
  sprintf(varName, "ay(CurrentLevel)");
  sprintf(newValue, "root");
  Tcl_SetVar(interp, varName, newValue,
		TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
#endif
 return TCL_OK;
} /* ay_clevel_gotoptcmd */


/* ay_clevel_gouptcmd:
 *  Tcl command to change the current level to the parent level
 */
int
ay_clevel_gouptcmd(ClientData clientData, Tcl_Interp *interp,
		   int argc, char *argv[])
{
 int ay_status = AY_OK;
 ay_object *o = NULL;
 /*
 char fname[] = "goUp";
 char *part1 = "ay", *part2 = "CurrentLevel";
 char *tmp = NULL, *string = NULL;
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL, *no = NULL;
 int length = 0;
 */

  if(ay_currentlevel->object != ay_root)
    {
      ay_status = ay_clevel_del();
      ay_status = ay_clevel_del();

      o = ay_currentlevel->object;
      if(o)
	{
	  while(o->next)
	    {
	      ay_next = &(o->next);
	      o = o->next;
	    }
	}
    }

#if 0
  /* Synchronize the value of ay(CurrentLevel) */
  toa = Tcl_NewStringObj(part1, -1);
  ton = Tcl_NewStringObj(part2, -1);

  to = Tcl_ObjGetVar2(interp, toa, ton,
		TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  /* Get ay(CurrentLevel) value */
  string = Tcl_GetStringFromObj(to, &length);

  /* Duplicate the value ay(CurrentLevel) since the original string
     must not be modified */
  tmp = malloc(length * sizeof(char));
  if (!tmp)
    {
      ay_error(AY_EOMEM, fname, NULL);
      Tcl_IncrRefCount(toa); Tcl_DecrRefCount(toa);
      Tcl_IncrRefCount(ton); Tcl_DecrRefCount(ton);
      return TCL_OK;
    }
  sprintf(tmp, "%s", string);

  /* Remove the last component */
  while ((length > 0) && (tmp[length] != ':'))
    {
      length--;
    }
  if (length > 0)
    {
      tmp[length] = 0;
    }

  /* Replace the old value */
  /*  Tcl_SetStringObj(to, tmp, -1);*/

  no = Tcl_NewStringObj(tmp, -1);
  Tcl_ObjSetVar2(interp, toa, ton, no,
		 TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

  if(tmp)
    free(tmp);

  Tcl_IncrRefCount(toa); Tcl_DecrRefCount(toa);
  Tcl_IncrRefCount(ton); Tcl_DecrRefCount(ton);
#endif
 return TCL_OK;
} /* ay_clevel_gouptcmd */


/* ay_clevel_godowntcmd:
 *  Tcl command to change the current level
 */
int
ay_clevel_godowntcmd(ClientData clientData, Tcl_Interp *interp,
		     int argc, char *argv[])
{
 int ay_status = AY_OK;
 int j = 0, argvi = 0;
 ay_object *o = ay_currentlevel->object;
 char fname[] = "goDown";
 /*
 char *part1 = "ay", *part2 = "CurrentLevel";
 char tmp[256];
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL, *no = NULL;
 */

  /* check args */
  if(argc != 2)
    {
      /* ay_error(AY_EARGS, fname, "index"); */
      return TCL_OK;
    }

  argvi = atoi(argv[1]);

  /* sublevel? */
  if(ay_root != o)
    {
      /* ".." selected? -> go up instead! */
      if(argvi == 0)
	{
	  return(ay_clevel_gouptcmd(clientData, interp, argc, argv));
	}
      j = 1;
    }


  while(o)
    {
      if(argvi == j)
	{ /* found the selected object */
	  if(o->parent)
	    {
	      ay_status = ay_clevel_add(o);
	      if(ay_status)
		{
		  ay_error(ay_status, fname, NULL);
		  return TCL_OK;
		}

	      ay_status = ay_clevel_add(o->down);
	      if(ay_status)
		{
		  ay_error(ay_status, fname, NULL);
		  return TCL_OK;
		}

	      if(!o->down)
		{
		  ay_error(AY_ENULL, fname, NULL);
		  return TCL_OK;
		}

	      /* if there is just a single object in this level
		 (this is then an EndLevel object) we add the next
		 object to the down link */
	      if(!o->down->next)
		{
		  ay_next = &(o->down);
		}
	      else
		{
		  o = o->down;
		  while(o->next)
		    {
		      ay_next = &(o->next);
		      o = o->next;
		    } /* while */
		} /* if */
	    } /* if */
#if 0
	  /* Synchronize the value of ay(CurrentLevel) */
	  toa = Tcl_NewStringObj(part1, -1);
	  ton = Tcl_NewStringObj(part2, -1);

	  /* Get ay(CurrentLevel) value */
	  to = Tcl_ObjGetVar2(interp, toa, ton,
			TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

	  no = Tcl_NewStringObj(Tcl_GetStringFromObj(to, NULL), -1);

	  /* Append the new component of the level */
	  if(strcmp(Tcl_GetStringFromObj(to, NULL), "root"))
	    {
	      sprintf(tmp, ":%d", argvi-1);
	    } else {
	      sprintf(tmp, ":%d", argvi);
	    }

	  Tcl_AppendStringsToObj(no, tmp, NULL);
	  Tcl_ObjSetVar2(interp, toa, ton, no,
			 TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);

	  Tcl_IncrRefCount(toa); Tcl_DecrRefCount(toa);
	  Tcl_IncrRefCount(ton); Tcl_DecrRefCount(ton);
#endif
	  return TCL_OK;
	} /* if */

      j++;
      o = o->next;
    } /* while */

 return TCL_OK;
} /* ay_clevel_godowntcmd */


/* ay_clevel_gettcmd:
 *  Tcl command to get the objects of the current level
 */
int
ay_clevel_gettcmd(ClientData clientData, Tcl_Interp *interp,
		  int argc, char *argv[])
{
 ay_object *o = ay_currentlevel->object;
 char *name = NULL;
 char *typename = NULL;
 char fname[] = "getLevel";
 Tcl_DString ds;

  /* check args */
  if(argc != 3)
    {
      ay_error(AY_EARGS, fname, "varname varname");
      return TCL_OK;
    }

  Tcl_SetVar(interp, argv[1], "", TCL_LEAVE_ERR_MSG);
  Tcl_SetVar(interp, argv[2], "", TCL_LEAVE_ERR_MSG);

  if(ay_currentlevel->object != ay_root)
    {
      Tcl_SetVar(interp, argv[1], "..",
		 TCL_APPEND_VALUE | TCL_LEAVE_ERR_MSG);
      Tcl_SetVar(interp, argv[2], "..",
		 TCL_APPEND_VALUE | TCL_LEAVE_ERR_MSG);
    }

  /* o->next because we silently discard the ever present EndLevel object */
  while(o->next)
    {
      name = NULL;
      name = ay_object_getname(o);

      if(name)
	{
	  if((o->name) || (o->type == AY_IDINSTANCE))
	    {
	      if(ay_prefs.list_types)
		{
		  typename = ay_object_gettypename(o->type);
		  Tcl_DStringInit(&ds);
		  if(ay_prefs.mark_hidden && o->hide)
		    {
		      Tcl_DStringAppend(&ds, "!", -1);
		    }
		  Tcl_DStringAppend(&ds, name, -1);
		  Tcl_DStringAppend(&ds, "(", -1);
		  Tcl_DStringAppend(&ds, typename, -1);
		  Tcl_DStringAppend(&ds, ")", -1);

		  Tcl_SetVar(interp, argv[1], Tcl_DStringValue(&ds),
		     TCL_APPEND_VALUE | TCL_LIST_ELEMENT |
		     TCL_LEAVE_ERR_MSG);

		  Tcl_DStringFree(&ds);

		}
	      else
		{
		  if(ay_prefs.mark_hidden && o->hide)
		    {
		      Tcl_DStringInit(&ds);
		      Tcl_DStringAppend(&ds, "!", -1);
		      Tcl_DStringAppend(&ds, name, -1);
		      Tcl_SetVar(interp, argv[1], Tcl_DStringValue(&ds),
				 TCL_APPEND_VALUE | TCL_LIST_ELEMENT |
				 TCL_LEAVE_ERR_MSG);

		      Tcl_DStringFree(&ds);
		    }
		  else
		    {
		      Tcl_SetVar(interp, argv[1], name, TCL_APPEND_VALUE |
				 TCL_LIST_ELEMENT | TCL_LEAVE_ERR_MSG);
		    } /* if */
		} /* if */
	    }
	  else
	    {
	      if(ay_prefs.mark_hidden && o->hide)
		{
		  Tcl_DStringInit(&ds);
		  Tcl_DStringAppend(&ds, "!", -1);
		  Tcl_DStringAppend(&ds, name, -1);
		  Tcl_SetVar(interp, argv[1], Tcl_DStringValue(&ds),
			     TCL_APPEND_VALUE | TCL_LIST_ELEMENT |
			     TCL_LEAVE_ERR_MSG);

		  Tcl_DStringFree(&ds);
		}
	      else
		{
		  Tcl_SetVar(interp, argv[1], name, TCL_APPEND_VALUE |
			     TCL_LIST_ELEMENT | TCL_LEAVE_ERR_MSG);
		}
	    } /* if */
	}
      else
	{
	  ay_error(AY_ENULL, fname, NULL);
	  return TCL_OK;
	} /* if */

      typename = NULL;
      typename = ay_object_gettypename(o->type);
      if(typename)
	{
	  Tcl_SetVar(interp, argv[2], typename, TCL_APPEND_VALUE |
		     TCL_LIST_ELEMENT | TCL_LEAVE_ERR_MSG);
	}
      else
	{
	  ay_error(AY_ENULL, fname, NULL);
	  return TCL_OK;
	}

      o = o->next;
    } /* while */

 return TCL_OK;
} /* ay_clevel_gettcmd */


/* ay_clevel_dup:
 *  _recursively_ duplicates a current level list (<src>) in <ay_currentlevel>
 */
int
ay_clevel_dup(ay_list_object *src)
{
 int ay_status = AY_OK;

  if(src->next)
    ay_status = ay_clevel_dup(src->next);

  ay_status = ay_clevel_add(src->object);

 return ay_status;
} /* ay_clevel_dup */


/* ay_clevel_cltcmd:
 *  Tcl command to set the current level (cl - change level)
 */
int
ay_clevel_cltcmd(ClientData clientData, Tcl_Interp *interp,
		 int argc, char *argv[])
{
 int ay_status = AY_OK;
 char fname[] = "cl";
 static ay_list_object *ocl = NULL;
 ay_list_object *tcl;
 ay_object *o = ay_root;
 int i, lindex = 0;
 char *lc = NULL; /* level component */

  /* check args */
  if(argc != 2)
    {
      ay_error(AY_EARGS, fname, "(-|level)");
      return TCL_OK;
    }

  if(*argv[1] == '-')
    {
      /* change back to last saved level */
      if(ocl)
	{
	  tcl = ay_currentlevel;
	  ay_currentlevel = ocl;
	  ocl = tcl;
	}
      else
	{
	  /* report error */
	  ay_error(AY_ERROR, fname, "no level saved");
	  return TCL_OK;
	}
    }
  else
    {
      /* first, save current level, for a potential "cl -" */
      ocl = ay_currentlevel;
      ay_currentlevel = NULL;
      ay_status = ay_clevel_dup(ocl);

      /* now, change to new level */
      lc = argv[1];

      /* is the new level expressed in a relative way? */
      if(*argv[1] == '.')
	{
	  /* yes, relative level */
	  while(lc && (strlen(lc) > 2) && !(strcmp("..", lc)))
	    {
	      ay_clevel_del();
	      ay_clevel_del();

	      o = ay_currentlevel->object;

	      lc += 3;
	    } /* while */
	}
      else
	{
	  /* no, absolute level */
	  ay_clevel_delall();
	} /* if */

      /* get first number */
      while(*lc != '\0' && !isdigit(*lc))
	{
	  lc++;
	}
      while(*lc != '\0')
	{
	  lindex = 0;
	  sscanf(lc, "%d", &lindex);

	  /* find and add object */
	  i = 0;
	  while(o && o->next && (i < lindex))
	    {
	      i++;
	      o = o->next;
	    }
	  if(o->next && o->parent)
	    {
	      /* all is well => descend for next level index */
	      ay_clevel_add(o);
	      o = o->down;
	      ay_clevel_add(o);
	    }
	  else
	    {
	      /* error, we run over end of level => index is wrong */
	      /* cleanup */
	      ay_clevel_delall();
	      free(ay_currentlevel);
	      ay_currentlevel = ocl;
	      ocl = NULL;
	      /* report error */
	      ay_error(AY_ERROR, fname, "could not find level");
	      return TCL_OK;
	    } /* if */
	  /* jump over the index number that we just processed */
	  while(*lc != '\0' && isdigit(*lc))
	    {
	      lc++;
	    }
	  /* jump over separator */
	  if(*lc != '\0')
	    {
	      lc++;
	    }
	} /* while */

    } /* if */

 return TCL_OK;
} /* ay_clevel_cltcmd */
