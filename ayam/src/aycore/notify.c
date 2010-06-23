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

/* notify.c - functions for object notification */


/* global variables for this module: */


/*
  NC tags are used to store a counter value per candidate
  parent object that has to be notified. The counter is
  used to update parents only when all children are updated.
  The tag object is used in quite unusual way:
  <tag->name> is always NULL (we solely use the tag->type for identification)
  <tag->val> is used as counter value and not as pointer to a string
*/
static char *ay_nc_tagtype = NULL;

static char *ay_nc_tagname = "NC";

/* functions: */

/* ay_notify_register:
 *  register the notification callback notcb for
 *  objects of type type_id
 */
int
ay_notify_register(ay_notifycb  *notcb, unsigned int type_id)
{
 int ay_status = AY_OK;

  /* register notify callback */
  ay_status = ay_table_additem(&ay_notifycbt, (ay_voidfp)notcb, type_id);

 return ay_status;
} /* ay_notify_register */


/* ay_notify_parent:
 *  call notification callbacks of all parent objects
 *  relative to current level
 */
int
ay_notify_parent(void)
{
 int ay_status = AY_OK;
 char fname[] = "notify_parent";
 ay_list_object *lev = ay_currentlevel, *sel = ay_selection;
 ay_object *o = NULL;
 ay_voidfp *arr = NULL;
 ay_notifycb *cb = NULL;
 ay_tag *tag = NULL;
 int did_notify = AY_FALSE;

  /* always do complete notify? */
  if(ay_prefs.completenotify == 1)
    {
      /* Yes.*/

      /* loop through selected objects and check for changed ones;
         do complete notify for all of them */
      while(sel)
	{
	  o = sel->object;
	  if(o && o->modified)
	    {
	      ay_status = ay_notify_complete(o);
	      o->modified = AY_FALSE;
	      did_notify = AY_TRUE;
	    }
	  sel = sel->next;
	} /* while */

      /* in case we did not call any notification callbacks up to now,
         maybe the structure of the current level changed using e.g.
         clipboard operations, check for that and call notification */
      if(!did_notify)
	{
	  if(lev->next && lev->next->object && lev->next->object->modified)
	    {
	      ay_notify_force(lev->next->object);
	      ay_status = ay_notify_complete(lev->next->object);
	      lev->next->object->modified = AY_FALSE;
	    }
	} /* if */
      return ay_status;
    } /* if */

  while(lev)
    {
      o = NULL;

      if(lev->next)
	{
	  if(lev->next->object)
	    {
	      o = lev->next->object;
	    } /* if */
	} /* if */

      if(o)
	{
	  /* search for and execute all BNS (before notify) tag(s) */
	  tag = o->tags;
	  while(tag)
	    {
	      if(tag->type == ay_bns_tagtype)
		ay_ns_execute(o, tag->val);
	      tag = tag->next;
	    }

	  /* now get and execute notify callback */
	  arr = ay_notifycbt.arr;
	  cb = (ay_notifycb *)(arr[o->type]);
	  if(cb)
	    ay_status = cb(o);

	  if(ay_status)
	    {
	      ay_error(AY_ERROR, fname, "notify callback failed");
	      return AY_ERROR;
	    } /* if */

	  /* search for and execute all ANS (after notify) tag(s) */
	  tag = o->tags;
	  while(tag)
	    {
	      if(tag->type == ay_ans_tagtype)
		ay_ns_execute(o, tag->val);
	      tag = tag->next;
	    }

	} /* if */

      lev = lev->next;
      if(lev)
	{
	  lev = lev->next;
	}
    } /* while */

 return ay_status;
} /* ay_notify_parent */


/* ay_notify_force:
 *  call notification callback of object o
 */
int
ay_notify_force(ay_object *o)
{
 int ay_status = AY_OK;
 char fname[] = "notify_force";
 ay_object *od = NULL;
 ay_voidfp *arr = NULL;
 ay_notifycb *cb = NULL;
 ay_tag *tag = NULL;

  /* call notification callbacks of children first */
  if(o->down && o->down->next)
    {
      od = o->down;
      while(od->next)
	{
	  ay_status = ay_notify_force(od);
	  od = od->next;
	}
    }

  /* search for and execute all BNS (before notify) tag(s) */
  tag = o->tags;
  while(tag)
    {
      if(tag->type == ay_bns_tagtype)
	ay_ns_execute(o, tag->val);
      tag = tag->next;
    }

  /* call the notification callback */
  arr = ay_notifycbt.arr;
  cb = (ay_notifycb *)(arr[o->type]);
  if(cb)
    ay_status = cb(o);

  if(ay_status)
    {
      ay_error(AY_ERROR, fname, "notify callback failed");
      return AY_ERROR;
    }

  /* search for and execute all ANS (after notify) tag(s) */
  tag = o->tags;
  while(tag)
    {
      if(tag->type == ay_ans_tagtype)
	ay_ns_execute(o, tag->val);
      tag = tag->next;
    }

 return AY_OK;
} /* ay_notify_force */


/* ay_notify_forceparent:
 *  call notification callback of parents of object o
 */
int
ay_notify_forceparent(ay_object *o, int silent)
{
 int ay_status = AY_OK;
 char fname[] = "notify_forceparent";
 ay_list_object *oldclevel = ay_currentlevel, *lev;
 int found = AY_FALSE;

  if(!o)
    {
      return AY_ENULL;
    }

  if(!ay_root->next)
    {
      return AY_OK;
    }

  oldclevel = ay_currentlevel;

  ay_currentlevel = NULL;

  ay_status = ay_clevel_add(NULL);
  if(ay_status)
    return ay_status;

  ay_status = ay_clevel_add(ay_root);
  if(ay_status)
    {
      ay_clevel_del();
      return ay_status;
    }

  ay_status = ay_clevel_find(ay_root->next, o, &found);

  if(!found)
    {
      if(!silent)
	{
	  ay_error(AY_ERROR, fname, "object not found in scene");
	} /* if */
      return AY_OK; /* XXXX early exit! */
    } /* if */

  if(ay_currentlevel->next && ay_currentlevel->next->object)
    ay_currentlevel->next->object->modified = AY_TRUE;

  ay_status = ay_notify_parent();

  while(ay_currentlevel)
    {
      lev = ay_currentlevel->next;
      free(ay_currentlevel);
      ay_currentlevel = lev;
    }

  ay_currentlevel = oldclevel;

 return AY_OK;
} /* ay_notify_forceparent */


/* ay_notify_forcetcmd:
 *  force notification of selected objects or all objects
 *  in the scene (if selection is empty)
 */
int
ay_notify_forcetcmd(ClientData clientData, Tcl_Interp * interp,
		    int argc, char *argv[])
{
 int ay_status = AY_OK;
 char notify_modified = AY_FALSE;
 char notify_all = AY_FALSE;
 char notify_parent = AY_FALSE;
 ay_list_object *sel = ay_selection;
 ay_object *o = NULL;

  if(argc > 1)
    {
      if(!strcmp(argv[1], "mod"))
	notify_modified = AY_TRUE;
      if(!strcmp(argv[1], "all"))
	notify_all = AY_TRUE;
    }

  if((!sel) || (notify_all))
    {
      o = ay_root->next;
      while(o)
	{
	  if(notify_modified)
	    {
	      if(o->modified)
		{
		  ay_status = ay_notify_force(o);

		  if(ay_status)
		    {
		      ay_error(AY_ERROR, argv[0], NULL);
		    } /* if */

		  o->modified = AY_FALSE;

		  notify_parent = AY_TRUE;
		}
	    }
	  else
	    {
	      ay_status = ay_notify_force(o);

	      if(ay_status)
		{
		  ay_error(AY_ERROR, argv[0], NULL);
		} /* if */

	      notify_parent = AY_TRUE;
	    }
	  o = o->next;
	} /* while */

      if(notify_parent)
	{
	  ay_notify_parent();
	}
    }
  else
    {
      while(sel)
	{
	  if(notify_modified)
	    {
	      if(sel->object->modified)
		{
		  ay_status = ay_notify_force(sel->object);

		  if(ay_status)
		    {
		      ay_error(AY_ERROR, argv[0], NULL);
		    } /* if */

		  if(ay_prefs.completenotify)
		    {
		      ay_status = ay_notify_complete(sel->object);
		      if(ay_status)
			{
			  ay_error(AY_ERROR, argv[0], NULL);
			} /* if */
		    }
		  else
		    {
		      notify_parent = AY_TRUE;
		    } /* if */

		  sel->object->modified = AY_FALSE;
		} /* if */
	    }
	  else
	    {
	      ay_status = ay_notify_force(sel->object);

	      if(ay_status)
		{
		  ay_error(AY_ERROR, argv[0], NULL);
		} /* if */

	      if(ay_prefs.completenotify)
		{
		  ay_status = ay_notify_complete(sel->object);
		  if(ay_status)
		    {
		      ay_error(AY_ERROR, argv[0], NULL);
		    } /* if */
		}
	      else
		{
		  notify_parent = AY_TRUE;
		} /* if */
	    } /* if */

	  sel = sel->next;
	} /* while */

      if(!ay_prefs.completenotify && notify_parent)
	{
	  ay_notify_parent();
	}
    } /* if */

 return TCL_OK;
} /* ay_notify_forcetcmd */


/* ay_notify_findparents:
 *
 */
int
ay_notify_findparents(ay_object *o, ay_object *r, ay_list_object **parents)
{
 ay_object *down;
 ay_tag *newt = NULL;
 ay_list_object *newl = NULL;
 int dfound = AY_FALSE, found = AY_FALSE;

  if(!o || !r || !parents)
    return 0;

  if(o->down)
    {
      down = o->down;

      while(down && down->next)
	{
	  dfound = AY_FALSE;
	  if(down->down && down->down->next)
	    {
	      dfound = ay_notify_findparents(down, r, parents);
	    }
	  if(dfound)
	    {
	      found = AY_TRUE;
	    }
	  if((down == r) || (down->refine == r))
	    {
	      found = AY_TRUE;
	    }
	  down = down->next;
	} /* while */

      if(found)
	{
	  if(!(newl = calloc(1, sizeof(ay_list_object))))
	    {
	      return 0;
	    }

	  newl->object = o;
	  o->modified = AY_FALSE;
	  newl->next = *parents;
	  *parents = newl;
	  if(o->tags && o->tags->type == ay_nc_tagtype)
	    {
	      o->tags->val = 0;
	    }
	  else
	    {
	      if(!(newt = calloc(1, sizeof(ay_tag))))
		{
		  return 0;
		}
	      newt->next = o->tags;
	      newt->type = ay_nc_tagtype;
	      o->tags = newt;
	    }

	} /* if */
    } /* if */

 return found;
} /* ay_notify_findparents */


/* ay_notify_complete:
 *
 */
int
ay_notify_complete(ay_object *r)
{
 static int lock = 0;
 int propagate = AY_TRUE;
 ay_object *o;
 ay_tag *tag;
 ay_list_object *l = NULL, *s, *t, *u;

  /* avoid recursive calls that may happen with Script objects */
  if(lock)
    {
      return AY_OK;
    }

  lock = 1;

  if(!r)
    {
      lock = 0;
      return AY_ENULL;
    }

  o = ay_root;

  while(o)
    {
      ay_notify_findparents(o, r, &l);
      o = o->next;
    } /* while */

  u = NULL;
  while(propagate)
    {
      propagate = AY_FALSE;
      t = l;
      s = l;
      while(s && (s != u))
	{
	  if(s->object && (s->object->refcount > 0))
	    {
	      o = ay_root->next;
	      while(o)
		{
		  ay_notify_findparents(o, s->object, &l);
		  o = o->next;
		} /* while */
	    } /* if */
	  s = s->next;
	} /* while */

      if(l != t)
	{
	  /* added some objects, need to continue propagating... */
	  propagate = AY_TRUE;
	}

      /* for consecutive iterations, arrange to stop at old list, because
	 we processed that already */
      u = t;
    } /* while */

  /* revert list */
  s = NULL;
  while(l)
    {
      t = l;
      l = l->next;
      o = t->object;
      if(o && o->tags && (o->tags->type == ay_nc_tagtype))
	{
	  o->tags->val++;
	}
      t->next = s;
      s = t;
    } /* while */

  while(s)
    {
      o = s->object;
      if(o && o->tags && (o->tags->type == ay_nc_tagtype))
	{
	  o->tags->val--;
	  if(o->tags->val == 0)
	    {
	      ay_notify_force(o);
	      if(o->tags && (o->tags->type == ay_nc_tagtype))
		{
		  tag = o->tags;
		  o->tags = tag->next;
		  free(tag);
		}
	    }
	}
      t = s->next;
      free(s);
      s = t;
    } /* while */

 lock = 0;

 return AY_OK;
} /* ay_notify_complete */


/* ay_notify_init:
 *  initialize notification module
 */
int
ay_notify_init(Tcl_Interp *interp)
{
 int ay_status = AY_OK;
 int dummy;

  /* register NC tag type */
  ay_status = ay_tags_register(interp, ay_nc_tagname, &ay_nc_tagtype);
  if(ay_status)
    return ay_status;

  ay_status = ay_tags_temp(interp, ay_nc_tagname, 1, &dummy);

  return AY_OK;
} /* ay_notify_init */
