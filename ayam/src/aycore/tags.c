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

/* tags.c - functions for tag management */


/* ay_tags_free:
 *  free tag <tag>
 */
int
ay_tags_free(ay_tag *tag)
{
 int ay_status = AY_OK;

  if(!tag)
    return AY_OK;

  if(tag->name)
    free(tag->name);

  if(tag->is_binary)
    {
      if(((ay_btval*)tag->val)->size)
	{
	  free(((ay_btval*)tag->val)->payload);
	}
    }

  if(tag->val)
    free(tag->val);

  free(tag);

 return ay_status;
} /* ay_tags_free */


/* ay_tags_delall:
 *  remove all tags from object <o>
 */
int
ay_tags_delall(ay_object *o)
{
 ay_tag *t = NULL, *nt = NULL;

  if(!o)
    return AY_OK;

  t = o->tags;
  while(t)
    {
      nt = t->next;
      ay_tags_free(t);
      t = nt;
    }

  o->tags = NULL;

 return AY_OK;
} /* ay_tags_delall */


/* ay_tags_copy:
 *  copy a tag from <source> to <dest>
 */
int
ay_tags_copy(ay_tag *source, ay_tag **dest)
{
 int ay_status = AY_OK;
 ay_tag *new = NULL;
 ay_btval *nbt = NULL;

  if(!source || !dest)
    return AY_ENULL;

  if(!source->name || !source->val)
    return AY_ERROR;

  if(!(new = calloc(1,sizeof(ay_tag))))
    return AY_EOMEM;

  memcpy(new, source, sizeof(ay_tag));
  /* danger! links point to original hierachy */

  new->next = NULL;

  /* copy name */
  if(!(new->name = calloc(1, strlen(source->name)+1)))
    { free(new); return AY_EOMEM; }
  strcpy(new->name, source->name);

  if(source->is_binary)
    {
      /* copy binary val */
      if(!(new->val = calloc(1, sizeof(ay_btval))))
	{ free(new); free(new->name); return AY_EOMEM; }
      memcpy(new->val, source->val, sizeof(ay_btval));
      if(((ay_btval*)new->val)->size)
	{
	  nbt = ((ay_btval*)new->val);
	  if(!(nbt->payload = calloc(1, nbt->size)))
	    {free(new->val); free(new); free(new->name); return AY_EOMEM; }
	  memcpy(nbt->payload, ((ay_btval*)source->val)->payload, nbt->size);
	}
    }
  else
    {
      /* copy ASCII val */
      if(!(new->val = calloc(1, strlen(source->val)+1)))
	{ free(new); free(new->name); return AY_EOMEM; }
      strcpy(new->val, source->val);
    }

  *dest = new;

 return ay_status;
} /* ay_tags_copy */


/* ay_tags_copyall:
 *  copy all tags from object <src> to object <dst>
 *  temporary tags are _not_ copied
 */
int
ay_tags_copyall(ay_object *src, ay_object *dst)
{
 int ay_status = AY_OK;
 ay_tag *tag = NULL, **newtagptr = NULL;

  if(!src || !dst)
    return AY_ENULL;

  tag = src->tags;
  newtagptr = &(dst->tags);
  while(tag)
    {
      if(!tag->is_temp)
	{
	  ay_status = ay_tags_copy(tag, newtagptr);
	  if(ay_status == AY_OK)
	    {
	      newtagptr = &((*newtagptr)->next);
	      *newtagptr = NULL;
	    }
	}
      tag = tag->next;
    }

 return AY_OK;
} /* ay_tags_copyall */


/* ay_tags_append:
 *  append the tag <tag> to object <o>;
 *  this routine keeps a pointer to the last tag of
 *  object o and is therefore fast for subsequent calls;
 *  the caller has to make sure, that the tags of <o> do not change
 *  between calls, or has to call ay_tags_append(NULL, NULL); to
 *  reset the cache.
 */
int
ay_tags_append(ay_object *o, ay_tag *tag)
{
 int ay_status = AY_OK;
 static ay_object *last_object = NULL;
 static ay_tag **next_tag = NULL;

  if(!o)
    {
      last_object = NULL;
      return AY_OK;
    }

  if(!tag)
    return AY_ENULL;

  if((o != last_object) || (!next_tag))
    {
      next_tag = &(o->tags);
      while(*next_tag)
	{
	  next_tag = &((*next_tag)->next);
	}
    }

  *next_tag = tag;
  next_tag = &(tag->next);

 return ay_status;
} /* ay_tags_append */


/* ay_tags_register:
 *  register a new tag type
 */
int
ay_tags_register(Tcl_Interp *interp, char *name, char **result)
{
 int new_item = 0;
 Tcl_HashEntry *entry = NULL;
 static char *tagcounter = (char *) 1; /* 0 - dummy */
 char fname[] = "tags_register";

  /* check, if type is already registered */
  if((entry = Tcl_FindHashEntry(&ay_tagtypesht, name)))
    {
      ay_error(AY_ERROR, fname, "tag type already registered");
      return AY_ERROR;
    }

  tagcounter++;

  entry = Tcl_CreateHashEntry(&ay_tagtypesht, name, &new_item);
  Tcl_SetHashValue(entry, tagcounter);

  *result = tagcounter;

 return AY_OK;
} /* ay_tags_register */


/* ay_tags_settcmd:
 *  set new tags of selected object(s), after removing all old tags
 */
int
ay_tags_settcmd(ClientData clientData, Tcl_Interp *interp,
		int argc, char *argv[])
{
 int tcl_status = TCL_OK;
 ay_list_object *sel = ay_selection;
 ay_object *o = NULL;
 ay_tag *t = NULL, *new = NULL, **next = NULL;
 ay_tag *oldtemptags = NULL, **otnext = NULL;
 Tcl_HashEntry *entry = NULL;
 Tcl_Obj *to = NULL, *toa = NULL, *ton = NULL;
 int stride = 2, index = 0, i, pasteProp = AY_FALSE, have_flags = AY_FALSE;

  if(argc < 3)
    {
      ay_error(AY_EARGS, argv[0],
	       "[type value]|-index index type value|-delete index");
      return TCL_OK;
    }

  if(!sel)
    {
      ay_error(AY_ENOSEL, argv[0], NULL);
      return TCL_OK;
    }

  if(!strcmp(argv[1],"-index"))
    {
      if(argc < 5)
	{
	  ay_error(AY_EARGS, argv[0],
		   "[type value]|-index index type value|-delete index");
	  return TCL_OK;
	}

      tcl_status = Tcl_GetInt(interp, argv[2], &index);
      AY_CHTCLERRRET(tcl_status, argv[0], interp);

      /* find tag */
      o = sel->object;
      new = o->tags;
      for(i = 0; i < index; i++)
	{
	  if(!new)
	    {
	      ay_error(AY_ERROR, argv[0], "Tag not found!");
	      return TCL_OK;
	    }
	  new = new->next;
	} /* for */

      if(new->is_binary)
	{
	  ay_error(AY_ERROR, argv[0], "Can not set binary tags!");
	  return TCL_OK;
	}

      if(strcmp(argv[3], ""))
	{
	  if(new->name)
	    {
	      free(new->name);
	      new->name = NULL;
	    }
	  if(new->val)
	    {
	      free(new->val);
	      new->val = NULL;
	    }
	  /* we first try to resolve the tag type */
	  if(!(entry = Tcl_FindHashEntry(&ay_tagtypesht, argv[3])))
	    {
	      if(ay_prefs.wutag)
		ay_error(AY_EWARN, argv[0], "Tag type is not registered!");
	    }
	  if(entry)
	    {
	      new->type = (char *)Tcl_GetHashValue(entry);
	    }
	  /* create new tag */
	  if(!(new->name = calloc(strlen(argv[3])+1, sizeof(char))))
	    {
	      ay_error(AY_EOMEM, argv[0], NULL);
	      return TCL_OK;
	    }
	  strcpy(new->name, argv[3]);

	  if(!(new->val = calloc(strlen(argv[4])+1, sizeof(char))))
	    {
	      ay_error(AY_EOMEM, argv[0], NULL);
	      return TCL_OK;
	    }
	  strcpy(new->val, argv[4]);

	} /* if */

      return TCL_OK; /* early exit! */
    } /* if */

  if(!strcmp(argv[1], "-delete"))
    {

      tcl_status = Tcl_GetInt(interp, argv[2], &index);
      AY_CHTCLERRRET(tcl_status, argv[0], interp);

      /* find tag */
      o = sel->object;
      new = o->tags;
      next = &(o->tags);
      for(i = 0; i < index; i++)
	{
	  if(!new)
	    {
	      ay_error(AY_ERROR, argv[0], "Tag not found!");
	      return TCL_OK;
	    }

	  next = &(new->next);
	  new = new->next;
	} /* for */
      *next = new->next;
      ay_tags_free(new);

      return TCL_OK; /* early exit! */
    } /* if */

  /* normal setTags functionality */

  if(!strcmp(argv[1], "-flags"))
    {
      have_flags = AY_TRUE;
    }

  /* is a paste property in progress? */
  toa = Tcl_NewStringObj("ay", -1);
  ton = Tcl_NewStringObj("pasteProp", -1);
  to = Tcl_ObjGetVar2(interp, toa, ton, TCL_LEAVE_ERR_MSG | TCL_GLOBAL_ONLY);
  Tcl_GetIntFromObj(interp, to, &pasteProp);

  while(sel)
    {
      o = sel->object;

      if(!pasteProp)
	{
	  /* save old temp and binary tags */
	  t = o->tags;
	  otnext = &(oldtemptags);
	  next = &(o->tags);
	  while(t)
	    {
	      if(t->is_temp || t->is_binary)
		{
		  /* link tag t to end of list in oldtemptags */
		  *otnext = t;
		  /* unlink tag t from list in o->tags */
		  *next = t->next;
		  /* prepare processing the next tag */
		  t = t->next;
		  /* properly terminate the list in oldtemptags */
		  (*otnext)->next = NULL;
		  otnext = &((*otnext)->next);
		}
	      else
		{
		  /* prepare processing the next tag */
		  next = &(t->next);
		  t = t->next;
		}
	    } /* while */

	  /* delete old tags */
	  ay_tags_delall(o);

	  /* now add again the saved temporary/binary tags */
	  if(oldtemptags)
	    {
	      o->tags = oldtemptags;
	      oldtemptags = NULL;
	      next = otnext;
	    }
	  else
	    {
	      next = &(o->tags);
	    }
	}
      else
	{
	  /* pasting properties via property clipboard appends... */
	  new = o->tags;
	  while(new)
	    {
	      next = &(new->next);
	      new = new->next;
	    }
	} /* if */

      /* add new tags from args */

      if(have_flags)
	stride = 3;

      for(index = 2; index < argc-1; index += stride)
	{
	  if(strcmp(argv[index], ""))
	    {
	      /* always omit temporary tags */
	      if(have_flags && (!strcmp(argv[index+2], "1")))
		{
		  continue;
		}

	      if(!(new = calloc(1, sizeof(ay_tag))))
		{
		  ay_error(AY_EOMEM, argv[0], NULL);
		  return TCL_OK;
		}

	      /* we first try to resolve the tag type */
	      if(!(entry = Tcl_FindHashEntry(&ay_tagtypesht, argv[index])))
		{
		  if(ay_prefs.wutag)
		    ay_error(AY_EWARN, argv[0], "Tag type is not registered!");
		}
	      if(entry)
		{
		  new->type = (char *)Tcl_GetHashValue(entry);
		}

	      if(!(new->name = calloc(strlen(argv[index])+1, sizeof(char))))
		{
		  ay_error(AY_EOMEM, argv[0], NULL);
		  return TCL_OK;
		}
	      strcpy(new->name, argv[index]);

	      if(!(new->val = calloc(strlen(argv[index+1])+1, sizeof(char))))
		{
		  ay_error(AY_EOMEM, argv[0], NULL);
		  return TCL_OK;
		}
	      strcpy(new->val, argv[index+1]);

	      /* link new tag */
	      *next = new;
	      next = &(new->next);
	    } /* if */
	} /* for */

      sel = sel->next;
    } /* while */

 return TCL_OK;
} /* ay_tags_settcmd */


/* ay_tags_addtcmd:
 *  add a tag to the selected object(s)
 */
int
ay_tags_addtcmd(ClientData clientData, Tcl_Interp *interp,
		int argc, char *argv[])
{
 ay_list_object *sel = ay_selection;
 ay_object *o = NULL;
 ay_tag *new = NULL, *t = NULL;
 Tcl_HashEntry *entry = NULL;

   if(argc < 3)
     {
       ay_error(AY_EARGS, argv[0], "type value");
       return TCL_OK;
     }

  if(!sel)
    {
      ay_error(AY_ENOSEL, argv[0], NULL);
      return TCL_OK;
    }

  while(sel)
    {
      o = sel->object;

      /* we first try to resolve the tag type */
      if(!(entry = Tcl_FindHashEntry(&ay_tagtypesht, argv[1])))
	{
	  if(ay_prefs.wutag)
	    ay_error(AY_EWARN, argv[0], "Tag type is not registered!");
	}
      if(!(new = calloc(1, sizeof(ay_tag))))
	{
	  ay_error(AY_EOMEM, argv[0], NULL);
	  return TCL_OK;
	}
      if(!(new->name = calloc(strlen(argv[1])+1, sizeof(char))))
	{
	  ay_error(AY_EOMEM, argv[0], NULL);
	  return TCL_OK;
	}
      strcpy(new->name,argv[1]);

      if(entry)
	new->type = (char *)Tcl_GetHashValue(entry);

      if(!(new->val = calloc(strlen(argv[2])+1, sizeof(char))))
	{
	  ay_error(AY_EOMEM, argv[0], NULL);
	  return TCL_OK;
	}
      strcpy(new->val,argv[2]);

      if(!o->tags)
	{
	  o->tags = new;
	}
      else
	{
	  t = o->tags;
	  while(t->next)
	    t = t->next;
	  t->next = new;
	}

      sel = sel->next;
    } /* while */

 return TCL_OK;
} /* ay_tags_addtcmd */


/* ay_tags_gettcmd:
 *  return all tags of the (first) selected object
 */
int
ay_tags_gettcmd(ClientData clientData, Tcl_Interp *interp,
		int argc, char *argv[])
{
 ay_list_object *sel = ay_selection;
 ay_object *o = NULL;
 ay_tag *tag = NULL;

  if(argc < 3)
    {
      ay_error(AY_EARGS, argv[0], "vname1 vname2 [vname3]");
      return TCL_OK;
    }

  if(!sel)
    {
      ay_error(AY_ENOSEL, argv[0], NULL);
      return TCL_OK;
    }

  Tcl_SetVar(interp,argv[1], "", TCL_LEAVE_ERR_MSG);
  Tcl_SetVar(interp,argv[2], "", TCL_LEAVE_ERR_MSG);
  if(argc > 3)
    {
      Tcl_SetVar(interp,argv[3], "", TCL_LEAVE_ERR_MSG);
    }

  o = sel->object;
  tag = o->tags;
  while(tag)
    {
      if(tag->name && tag->val)
	{
	  Tcl_SetVar(interp,argv[1],tag->name, TCL_APPEND_VALUE |\
		     TCL_LIST_ELEMENT | TCL_LEAVE_ERR_MSG);
	  Tcl_SetVar(interp,argv[2],tag->val, TCL_APPEND_VALUE |\
		     TCL_LIST_ELEMENT | TCL_LEAVE_ERR_MSG);
	  if(argc > 3)
	    {
	      if(tag->is_temp)
		{
		  Tcl_SetVar(interp,argv[3],"1", TCL_APPEND_VALUE |\
			     TCL_LIST_ELEMENT | TCL_LEAVE_ERR_MSG);
		}
	      else
		{
		  Tcl_SetVar(interp,argv[3],"0", TCL_APPEND_VALUE |\
			     TCL_LIST_ELEMENT | TCL_LEAVE_ERR_MSG);
		}
	    } /* if */
	} /* if */
      tag = tag->next;
    } /* while */

  return TCL_OK;
} /* ay_tags_gettcmd */


/* ay_tags_deletetcmd:
 *  delete all tags of the selected object(s)
 */
int
ay_tags_deletetcmd(ClientData clientData, Tcl_Interp *interp,
		   int argc, char *argv[])
{
 /*int ay_status = AY_OK;*/
 ay_list_object *sel = ay_selection;
 ay_object *o = NULL;
 ay_tag *tag = NULL, **last = NULL;
 int mode = 0; /* 0 delall, 1 type */

  if(argc < 2)
    {
      ay_error(AY_EARGS, argv[0], "type|all");
      return TCL_OK;
    }

  if(!sel)
    {
      ay_error(AY_ENOSEL, argv[0], NULL);
      return TCL_OK;
    }

  if(strcmp(argv[1], "all"))
    {
      mode = 1;
    }

  while(sel)
    {
      o = sel->object;

      last = &(o->tags);
      tag = o->tags;
      while(tag)
	{
	  if(!tag->is_binary && tag->name)
	    {
	      if(mode || (!strcmp(argv[1], tag->name)))
		{
		  *last = tag->next;
		  ay_tags_free(tag);
		  tag = *last;
		}
	      else
		{
		  last = &(tag->next);
		  tag = tag->next;
		} /* if */
	    }
	  else
	    {
	      last = &(tag->next);
	      tag = tag->next;
	    } /* if */
	} /* while */

      sel = sel->next;
    } /* while */

  return TCL_OK;
} /* ay_tags_deletetcmd */


/* ay_tags_parseplist:
 *  parse the string str into a parameterlist suitable for calls
 *  into the RenderMan Interface (e.g. RiDisplayV());
 *  the parameterlist is returned in: argc, tokensr, and valuesr;
 *  if declare is AY_TRUE this routine also makes the necessary
 *  calls to RiDeclare()!
 */
int
ay_tags_parseplist(char *str, int declare, RtInt *argc, RtToken **tokensr,
		   RtPointer **valuesr)
{
 char fname[] = "tags_parseplist", e1[] = "Missing value in parameter!";
 char *tmp = NULL, *parname = NULL, *partype = NULL, *parval = NULL;
 char *parval2 = NULL;
 char tok[] = ",";
 RtInt *itemp;
 RtFloat *ftemp;
 RtPoint *ptemp;
 RtString *stemp;
 RtColor *ctemp;
 RtToken *tokens;
 RtPointer *values;

  if(!str || !argc || !tokensr || !valuesr)
    return AY_ENULL;

  if(*str == '\0')
    return AY_OK;

  /* make a copy of str, so that we may parse it using strtok() */
  if(!(tmp = calloc(1, strlen(str)+1)))
    { return AY_EOMEM; }
  strcpy(tmp, str);


  *argc = 0;
  parval = NULL;
  partype = NULL;
  parname = NULL;
  tokens = NULL;
  values = NULL;

  /* get first name */
  parname = strtok(tmp, tok);

  while(parname)
    {
      /* get type */
      partype = strtok(NULL, tok);

      if(partype)
	{
	  /* get value */
	  parval = strtok(NULL, tok);
	  if(parval)
	    {
	      /* we have all three needed components and thus
		 may allocate memory for the new parameter */
	      if(!(tokens = realloc(tokens, sizeof(RtToken))))
		{ free(tmp); return AY_EOMEM; }
	      if(!(values = realloc(values, sizeof(RtPointer))))
		{ free(tmp); return AY_EOMEM; }

	      /* copy name */
	      if(!(tokens[*argc] = calloc(strlen(parname)+1, sizeof(char))))
		    { free(tmp); return AY_EOMEM; }
	      strcpy(tokens[*argc], parname);

	      switch(*partype)
		{
		case 'i':
		  if(!(itemp = calloc(1, sizeof(RtInt))))
		    { free(tmp); return AY_EOMEM; }
		  values[*argc] = (RtPointer)itemp;
		  sscanf(parval, "%d", itemp);
		  if(declare)
		    { RiDeclare(parname, "integer"); }
		  break;
		case 'j':
		  if(!(itemp = calloc(2, sizeof(RtInt))))
		    { free(tmp); return AY_EOMEM; }
		  values[*argc] = (RtPointer)itemp;
		  sscanf(parval, "%d", itemp);
		  parval2 = strtok(NULL, tok);
		  if(parval2)
		    {
		      sscanf(parval2, "%d", &(itemp[1]));
		    }
		  else
		    {
		      ay_error(AY_ERROR, fname, e1);
		    }

		  if(declare)
		    { RiDeclare(parname, "integer[2]"); }
		  break;
		case 'f':
		  if(!(ftemp = calloc(1, sizeof(RtFloat))))
		    { free(tmp); return AY_EOMEM; }
		  values[*argc] = (RtPointer)ftemp;
		  sscanf(parval, "%f", ftemp);
		  if(declare)
		    { RiDeclare(parname, "float"); }
		  break;
		case 'g':
		  if(!(ftemp = calloc(2, sizeof(RtFloat))))
		    { free(tmp); return AY_EOMEM; }
		  values[*argc] = (RtPointer)ftemp;
		  sscanf(parval, "%f", ftemp);
		  parval2 = strtok(NULL, tok);
		  if(parval2)
		    {
		      sscanf(parval2, "%f", &(ftemp[1]));
		    }
		  else
		    {
		      ay_error(AY_ERROR, fname, e1);
		    }

		  if(declare)
		    { RiDeclare(parname, "float[2]"); }
		  break;
		case 's':
		  if(!(stemp = calloc(1, sizeof(RtString))))
		    { free(tmp); return AY_EOMEM; }
		  if(!(*stemp = calloc(strlen(parval)+1, sizeof(char))))
		    { free(tmp); return AY_EOMEM; }
		  strcpy(*stemp, parval);
		  values[*argc] = (RtPointer)stemp;
		  if(declare)
		    { RiDeclare(parname, "string"); }
		  break;
		case 'p':
		  if(!(ptemp = calloc(1, sizeof(RtPoint))))
		    { free(tmp); return AY_EOMEM; }
		  values[*argc] = (RtPointer)ptemp;
		  sscanf(parval, "%f", &((*ptemp)[0]));
		  parval = strtok(NULL, tok);
		  if(parval)
		    {
		      sscanf(parval, "%f", &((*ptemp)[1]));
		    }
		  else
		    {
		      ay_error(AY_ERROR, fname, e1);
		    }
		  parval = strtok(NULL, tok);
		  if(parval)
		    {
		      sscanf(parval, "%f", &((*ptemp)[2]));
		    }
		  else
		    {
		      ay_error(AY_ERROR, fname, e1);
		    }
		  if(declare)
		    { RiDeclare(parname, "point"); }
		  break;
		case 'c':
		  if(!(ctemp = calloc(1, sizeof(RtColor))))
		    { free(tmp); return AY_EOMEM; }
		  values[*argc] = (RtPointer)ctemp;
		  sscanf(parval, "%f", &((*ctemp)[0]));
		  parval = strtok(NULL, tok);
		  if(parval)
		    {
		      sscanf(parval, "%f", &((*ctemp)[1]));
		    }
		  else
		    {
		      ay_error(AY_ERROR, fname, e1);
		    }
		  parval = strtok(NULL, tok);
		  if(parval)
		    {
		      sscanf(parval, "%f", &((*ctemp)[2]));
		    }
		  else
		    {
		      ay_error(AY_ERROR, fname, e1);
		    }
		  if(declare)
		    { RiDeclare(parname, "color"); }
		  break;
		default:
		  break;
		} /* switch */

	      *argc = *argc+1;

	    } /* if(parval */

	} /* if(partype */

      /* get next name */
      parname = strtok(NULL, tok);
    } /* while(parname */

  *tokensr = tokens;
  *valuesr = values;

  free(tmp);

 return AY_OK;
} /* ay_tags_parseplist */


/* ay_tags_reconnect:
 *
 */
int
ay_tags_reconnect(ay_object *o, char *tagtype, char *tagname)
{
 /*int ay_status = AY_OK;*/
 ay_tag *tag;

  if(!tagtype || !tagname)
    return AY_ENULL;

  if(!o)
    return AY_OK;

  while(o)
    {
      if(o->down)
	{
	  ay_tags_reconnect(o->down, tagtype, tagname);
	}

      tag = o->tags;
      while(tag)
	{
	  if(tag->name)
	    {
	      if(!strcmp(tag->name, tagname))
		{
		  tag->type = tagtype;
		}
	    }
	  tag = tag->next;
	} /* while */

      ay_notify_force(o);

      o = o->next;
    } /* while */

 return AY_OK;
} /* ay_tags_reconnect */


/* ay_tags_addnonm:
 *  add NO/NM tags
 */
int
ay_tags_addnonm(ay_object *o, ay_object *m)
{
 int ay_status = AY_OK;
 ay_tag *tag;
 ay_tag *newnotag, *newnmtag;
 int found = AY_FALSE;

  if(!o || !m)
    return AY_ENULL;

  /* see if there is already a NO tag in the master
     that points to us, if there is one, nothing
     needs to be done */
  tag = m->tags;
  while(tag)
    {
      if(tag->type == ay_no_tagtype)
	{
	  if(o == ((ay_btval*)tag->val)->payload)
	    {
	      found = AY_TRUE;
	      break;
	    }
	}
      tag = tag->next;
    } /* while */

  if(!found)
    {
      /* first, get memory for the two new binary tags */
      if(!(newnotag = calloc(1, sizeof(ay_tag))))
	{
	  return AY_EOMEM;
	}
      newnotag->type = ay_no_tagtype;
      newnotag->is_temp = AY_TRUE;
      newnotag->is_binary = AY_TRUE;
      if(!(newnotag->val = calloc(1, sizeof(ay_btval))))
	{
	  free(newnotag);
	  return AY_EOMEM;
	}
      ((ay_btval*)newnotag->val)->size = 0;
      ((ay_btval*)newnotag->val)->payload = o;

      if(!(newnmtag = calloc(1, sizeof(ay_tag))))
	{
	  ay_tags_free(newnotag);
	  return AY_EOMEM;
	}

      newnmtag->type = ay_no_tagtype;
      newnmtag->is_temp = AY_TRUE;
      newnmtag->is_binary = AY_TRUE;
      if(!(newnmtag->val = calloc(1, sizeof(ay_btval))))
	{
	  free(newnmtag);
	  ay_tags_free(newnotag);
	  return AY_EOMEM;
	}
      ((ay_btval*)newnmtag->val)->size = 0;
      ((ay_btval*)newnmtag->val)->payload = m;

      /* second, link the new tags */
      newnotag->next = m->tags;
      m->tags = newnotag;

      newnmtag->next = o->tags;
      o->tags = newnmtag;
    } /* if */

 return ay_status;
} /* ay_tags_addnonm */


/* ay_tags_remnonm:
 *  remove NO/NM tags
 */
int
ay_tags_remnonm(ay_object *o, ay_object *m)
{
 int ay_status = AY_OK;
 ay_tag *tag, **lasttag;
 int found = AY_FALSE;

  if(!o || !m)
    return AY_ENULL;

  tag = m->tags;
  lasttag = &(m->tags);
  while(tag)
    {
      if(tag->type == ay_no_tagtype)
	{
	  if(o == ((ay_btval*)tag->val)->payload)
	    {
	      *lasttag = tag->next;
	      ay_tags_free(tag);
	      found = AY_TRUE;
	      break;
	    }
	}
      tag = tag->next;
    } /* while */

  /* look for and remove corresponding NM tag only if we found the NO tag */
  if(found)
    {
      tag = o->tags;
      lasttag = &(o->tags);
      while(tag)
	{
	  if(tag->type == ay_nm_tagtype)
	    {
	      if(m == ((ay_btval*)tag->val)->payload)
		{
		  *lasttag = tag->next;
		  ay_tags_free(tag);
		  break;
		}
	    }
	  tag = tag->next;
	} /* while */
    } /* if */

 return ay_status;
} /* ay_tags_remnonm */
