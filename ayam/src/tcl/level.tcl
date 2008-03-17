# Ayam, a free 3D modeler for the RenderMan interface.
#
# Ayam is copyrighted 1998-2001 by Randolf Schultz
# (randolf.schultz@gmail.com) and others.
#
# All rights reserved.
#
# See the file License for details.

# level.tcl - level objects Tcl code

set Level_props { Transformations Attributes Material Tags LevelAttr }


array set LevelAttr {
arr   LevelAttrData
sproc ""
gproc ""
w     fLevelAttr

}

array set LevelAttrData {
Type 0
}

# create LevelAttr-UI
set w [frame $ay(pca).$LevelAttr(w)]
addMenu $w LevelAttrData Type {Level Union Difference Intersection Primitive }

# level_crt:
#
#
proc level_crt { objtype {crtargs "" } {keepsel 0} } {
    global ay ay_error selected
    set selected ""
    getSel selected
    if { $selected == "" } { ayError 20 "${objtype}_crt" ""; return; }

    # the next command sorts the selected objects
    eval "selOb $selected"

    set ay_error 0
    if { $crtargs != "" } {
	eval [subst "crtOb $objtype $crtargs"]
    } else {
	crtOb $objtype
    }
    if { $ay_error } { return; }

    cutOb
    set ay(ul) $ay(CurrentLevel)
    uS
    sL
    getLevel a b
    goDown [expr [llength $a]-1]
    cmovOb

    if { $keepsel == 0 } {
	goUp
	set ay(ul) $ay(CurrentLevel)
	uS; sL; forceNot; rV;
    } else {
	if { $ay(lb) == 0 } {
	    set tree $ay(tree)

	    # update the level, where the new level/tool object was created
	    set ay(ul) $ay(CurrentLevel)
	    uS
	    # paint the level gray (not current)
	    set nlist [$tree nodes $ay(CurrentLevel)]
	    foreach n $nlist {
		$tree itemconfigure $n -fill darkgrey
	    }
	    # set the new current level
	    if { $ay(CurrentLevel) == "root" } {
		set ay(CurrentLevel) $ay(CurrentLevel):[expr [llength $a]-1]
	    } else {
		set ay(CurrentLevel) $ay(CurrentLevel):[expr [llength $a]-2]
	    }
	    # update the new current level with the selected objects
	    set ay(ul) $ay(CurrentLevel)
	    uS

	    # open the tree-node
	    tree_openSub $tree 1 $ay(CurrentLevel)

	    # paint all selected objects black (mark current level)
	    set nlist [$tree nodes $ay(CurrentLevel)]
	    foreach n $nlist {
		$tree itemconfigure $n -fill black
	    }

	    # select the nodes
	    set nodes [$tree nodes $ay(CurrentLevel)]
	    if { [llength $nodes] > 0 } {
		eval [subst "$tree selection set $nodes"]
		eval [subst "treeSelect $nodes"]
	    }
	    set ay(SelectedLevel) $ay(CurrentLevel)
	} else {
	    uS
	    $ay(olbball) invoke
	}
	# if

	# update parent objects
	forceNot

	# redraw all views
	rV
    }
    # if
 return;
}
# level_crt
