# Ayam, a free 3D modeler for the RenderMan interface.
#
# Ayam is copyrighted 1998-2003 by Randolf Schultz
# (rschultz@informatik.uni-rostock.de) and others.
#
# All rights reserved.
#
# See the file License for details.

# view.tcl - view window management


##############################
# viewSetType:
proc viewSetType { w type } {
 global ay ayprefs tcl_platform

    undo save ViewType
    set togl $w.f3D.togl

    $togl mc
    switch $type {
	0 {
	    $togl setconf -type 0 -fromx 0.0 -fromy 0.0 -fromz 10.0\
		    -tox 0.0 -toy 0.0 -toz 0.0 -upx 0.0 -upy 1.0 -upz 0.0
	    viewTitle $w Front ""
	}
	1 {
	    $togl setconf -type 1 -fromx 10.0 -fromy 0.0 -fromz 0.0\
		    -tox 0.0 -toy 0.0 -toz 0.0 -upx 0.0 -upy 1.0 -upz 0.0
	    viewTitle $w Side ""
	}
	2 {
	    $togl setconf -type 2 -fromx 0.0 -fromy 10.0 -fromz 0.0\
		    -tox 0.0 -toy 0.0 -toz 0.0 -upx 0.0 -upy 0.0 -upz -1.0
	    viewTitle $w Top ""
	}
	3 {
	    $togl setconf -type 3 -fromx 0.0 -fromy 0 -fromz 15.0\
		    -tox 0.0 -toy 0.0 -toz 0.0  -upx 0.0 -upy 1.0 -upz 0.0\
		    -drawg 1 -grid 1 -drotx 45 -droty -30
	    viewTitle $w Persp ""
	    viewSetGridIcon $w 1.0
	}
	4 {
	    $togl setconf -type 4 -fromx 0.0 -fromy 0.0 -fromz 10.0\
		    -tox 0.0 -toy 0.0 -toz 0.0 -upx 0.0 -upy 1.0 -upz 0.0\
		    -zoom 1.0
	    viewTitle $w Trim ""
	}
    }
    # switch

    $togl render
    $ay(currentView) mc
    update
    # actionClear $w

 return;
}
# viewSetType


##############################
# viewRender:
proc viewRender { w type } {
    global env ayprefs ay tcl_platform tmpfile

    set togl $w.f3D.togl

    if { $ayprefs(ShadowMaps) < 1 } {
	tmpGet $ayprefs(TmpDir) tmpfile

	if { $tcl_platform(platform) == "windows" } {
	    # Windows sucks big time!
	    regsub -all {\\} $tmpfile {/} tmpfile
	}
	set imagename ${tmpfile}.tif
	if { $type < 2 } {
	    if { $ayprefs(RenderMode) == 0 } {
		$togl wrib -file $tmpfile -image $imagename -temp
	    } else {
		$togl wrib -file $tmpfile -temp
	    }
	} else {
	    # render to image file
	    set ribname [io_getRIBName]
	    set imagename [lindex $ribname 1]
	    ayError 4 "viewRender" "Rendering to \\\"$imagename\\\"..."
	    $togl wrib -file $tmpfile -image $imagename -temp -rtf
	}

	lappend ay(tmpfiles) [list $tmpfile]
    } else {
	set ribname [io_getRIBName]
	set tmpfile [lindex $ribname 0]
	set imagename [lindex $ribname 1]
	if { $type < 2 } {
	    if { $ayprefs(RenderMode) == 0 } {
		$togl wrib -file $tmpfile -image $imagename -temp
	    } else {
		$togl wrib -file $tmpfile -temp
	    }
	} else {
	    # render to image file
	    ayError 4 "viewRender" "Rendering to \\\"$imagename\\\"..."
	    $togl wrib -file $tmpfile -image $imagename -temp -rtf
	}
    }
    # if

    set renderui 0
    if { $type == 0 } {
        if { $ayprefs(RenderUI) == 1 } { set renderui 1 }
	regsub -all {%s} $ayprefs(Render) "\"$tmpfile\"" command
	set pt $ayprefs(RenderPT)
    }
    if { $type == 1 } {
        if { $ayprefs(QRenderUI) == 1 } { set renderui 1 }
	regsub -all {%s} $ayprefs(QRender) "\"$tmpfile\"" command
	set pt $ayprefs(QRenderPT)
    }
    if { $type == 2 } {
        if { $ayprefs(FRenderUI) == 1 } { set renderui 1 }
	regsub -all {%s} $ayprefs(FRender) "\"$tmpfile\"" command
	set pt $ayprefs(FRenderPT)
    }

    if { $renderui != 1} {
	set command2 "exec "
	append command2 $command
	append command2 " &"
	eval [subst "$command2"]
    } else {
	runRenderer "$command" "$pt"
    }
    # if

    update
    tmp_clean 0

 return;
}
# viewRender


##############################
# viewUPos:
# get the positions of all views
# put them in the C context view_info
proc viewUPos { } {
 global ay ayprefs tcl_platform

    update idletasks

    foreach w $ay(views) {

	if { ($tcl_platform(platform) != "windows" ) &&\
	    ($ayprefs(TwmCompat) != 1) } {
	    set x [winfo rootx $w]
	    set y [winfo rooty $w]
	} else {
	    set oldgeom [wm geom [winfo toplevel $w]]
	    regexp {([0-9]+)?x?([0-9]+)?(\+|\-)?([0-9]+)?(\+|\-)?([0-9]+)?} $oldgeom blurb width height blurb2 x blurb3 y
	}
#	set cw $ay(currentView)

	set isicon 0
	set state [wm state [winfo toplevel $w]]
	if {  ($state == "iconic") || ($state == "withdrawn") } {
	    set isicon 1
	}
	$w.f3D.togl mc
	$w.f3D.togl setconf -ico $isicon -pos $x $y
	$ay(currentView) mc
    }
    # foreach

 return;
}
# viewUPos


##############################
# viewTitle:
# set title bar of window w (for views only)
# type = "" -> no change, action = "" -> no change
proc viewTitle { w type action } {
    global ay AYWITHAQUA

    if { [string first ".view" $w] != 0 } {
	# $w does not start with ".view" => view is internal, no title to set
	return;
    }

    # guard against calling with sub-widget
    set w [winfo toplevel $w]

    set oldname [wm title $w]

    set vname ""
    set oldtype ""
    set oldaction ""

    catch {scan $oldname "%s - %s - %s" vname oldtype oldaction}

    scan $w ".view%d" number

    set newvname [format "View%d" $number]

    if { $type != "" } {
	set oldtype $type

	if { (! $AYWITHAQUA) || ([winfo toplevel $w] != $w) } {
	    set confm $w.fMenu.c.m
	} else {
	    set confm $w.menubar.mconf
	}

	if { $type == "Persp" } {
	    $confm entryconfigure 17 -state normal
	    $confm entryconfigure 18 -state normal
	} else {
	    $confm entryconfigure 17 -state disabled
	    $confm entryconfigure 18 -state disabled
	}
    }
    # if
    if { $action != "" } { set oldaction $action }
    set newname [format "%s - %s - %s" $newvname $oldtype $oldaction]
    wm title $w $newname
    update idletasks

return;
}
# viewTitle


##############################
# viewSetFOV:
#  set the Field Of View of a view
proc viewSetFOV { view } {
global ay

winAutoFocusOff

set w .setFov
catch {destroy $w}
toplevel $w -class ayam
wm title $w "Set FOV"
wm iconname $w "Ayam"
wm transient $w [winfo toplevel $view]

set f [frame $w.f1]
pack $f -in $w -side top -fill x

set ay(FOV) $ay(cVFOV)

set ay(iapplydisable) 1
addParam $f ay FOV
set ay(iapplydisable) 0

set f [frame $w.f2]
button $f.bok -text "Ok" -pady $ay(pady) -width 5 -command "global ay;\
	$view mc;\
	undo save SetFOV;\
	$view setconf -fovx \$ay(FOV);\
	$view render;\
	update;\
	grab release .setFov;\
	focus $view;\
	destroy .setFov"

button $f.bca -text "Cancel" -pady $ay(pady) -width 5 -command "\
	set ay(FOV) $ay(FOV);\
	grab release .setFov;\
	focus $view;\
	destroy $w"

pack $f.bok $f.bca -in $f -side left -fill x -expand yes
pack $f -in $w -side bottom -fill x

winCenter $w
grab $w
focus $w.f1.fFOV.e
tkwait window $w

winAutoFocusOn

return;
}
# viewSetFOV


##############################
# viewSetGrid:
proc viewSetGrid { view } {
global ay

winAutoFocusOff

set w .setGrid
catch {destroy $w}
toplevel $w -class ayam
wm title $w "Set GridSize"
wm iconname $w "Ayam"
wm transient $w [winfo toplevel $view]

set f [frame $w.f1]
pack $f -in $w -side top -fill x

set ay(GridSize) $ay(cVGridSize)

set ay(iapplydisable) 1
addParam $f ay GridSize [list 0.001 0.01 0.1 0.25 0.5 1 10]
set ay(iapplydisable) 0

set f [frame $w.f2]
button $f.bok -text "Ok" -pady $ay(pady) -width 5 -command "\
	global ay;\
	$view mc;\
	undo save SetGrid;\
        if \{ \$ay(GridSize) != 0.0 \} \{\ 
	  $view setconf -drawg 1 -ugrid 1 -grid \$ay(GridSize);\
        \} else \{\
	  $view setconf -grid \$ay(GridSize);\
        \};\
	$view render;\
        set w \[winfo parent \[winfo parent $view\]\];\
	viewSetGridIcon \$w \$ay(GridSize);\
	update;\
	catch \{grab release .setGrid\};\
	focus $view;\
	destroy .setGrid"


button $f.bca -text "Cancel" -pady $ay(pady) -width 5 -command "\
	global ay;\
	set ay(GridSize) $ay(GridSize);\
	catch \{grab release .setGrid\};\
	focus $view;\
	destroy $w"

pack $f.bok $f.bca -in $f -side left -fill x -expand yes
pack $f -in $w -side bottom -fill x

winCenter $w
global ay
if { $ay(ws) != "Aqua" } {
    grab $w
}
focus $w.f1.fGridSize.e
tkwait window $w

winAutoFocusOn

return;
}
# viewSetGrid


##############################
# viewOpen:
proc viewOpen { width height {establish_bindings 1} {internal_view 0} } {
    global ay ayprefs

    update
    set ay(cviewsema) 1
    update

    # calculate view name
    if { [llength $ay(views)] == 0 } {
	set w .view1
    } else {
	set lastname [lindex $ay(views) end]
	if { [string first ".view" $lastname] == 0 } {
	    scan $lastname ".view%d" lastid
	} else {
	    scan $lastname ".fv.fViews.fview%d" lastid
	}
	set w .view[expr $lastid + 1]
    }

    # create internal view frame or toplevel window?
    if { $internal_view == 0 } {
	# toplevel
	catch {destroy $w}
	if { $ay(truecolor) == 1 } {
	    toplevel $w -class ayam -visual truecolor
	} else {
	    toplevel $w -class ayam
	}

	scan $w ".%s" name
	wm iconname $w $name
    } else {
	# internal
	scan $w ".%s" name
	set w [frame .fv.fViews.f$name -takefocus 1 -highlightthickness 1]
    }

    # create view menu
    frame $w.fMenu -bd 2 -relief raised
    vmenu_open $w
    pack $w.fMenu -side top -fill x

    # create the 3D widget
    frame $w.f3D

    if { $ayprefs(AddViewParams) != "" } {
	eval [subst "togl $w.f3D.togl -rgba true -double true -depth true\
		-ident $name -width $width -height $height\
		$ayprefs(AddViewParams)"]
    } else {
	togl $w.f3D.togl -rgba true -double true -depth true\
		-ident $name -width $width -height $height
    }

    # realize the GUI
    pack $w.f3D -in $w -fill both -expand yes
    pack $w.f3D.togl -in $w.f3D -fill both -expand yes
    update

    # add to list of views
    lappend ay(views) $w

    $w.f3D.togl setconf -name $name

    set ay(currentView) $w.f3D.togl

    if { $internal_view == 0 } {
	viewTitle $w Front Pick

	wm protocol $w WM_DELETE_WINDOW "viewClose $w;\
	    global ay; set ay(ul) root:0; uS"

	if { $establish_bindings == 1 } {
	    viewBind $w
	} else {
	    $w configure -cursor watch
	}
    }
    # if

    bind $w <Configure> {
	global ay
	set lb $ay(plb)
	set tmp ""
	set tmp [$lb curselection]
	if { ($tmp != "") && ([$lb get $tmp] == "ViewAttrib") } {
	    getProp
	    plb_update
	}
    }
    # bind

    DropSite::register $w.f3D.togl -dropcmd viewDrop\
	    -droptypes {TREE_NODE {copy {}} IMAGE { copy {}}}

    update
    set ay(cviewsema) 0
    update

 return;
}
# viewOpen


###############################
# viewDrop:
proc viewDrop { w tree dropx dropy currentoperation datatype data } {

    #puts "viewDrop: $currentoperation $datatype $data"

    $w drop
    after 100 "focus -force $w"

 return;
}
# viewDrop


##############################
# viewBind:
proc viewBind { w } {
    global ayviewshortcuts

    # internal bindings
    bind $w <Enter> {
	global ay ayprefs
	if { $ay(cviewsema) != 1 } {
	    update
	    set ay(cviewsema) 1
	    update

	    if { [string first ".view" %W] == 0 } {
		set w [winfo toplevel %W]
	    } else {
		set w %W
	    }
	    $w.f3D.togl mc
	    set ay(currentView) $w.f3D.togl
	    $w.f3D.togl configure -cursor left_ptr

	    update
	    set ay(cviewsema) 0
	    update
	}
	#if

	if { ($ayprefs(AutoFocus) == 1) && \
		 ([string first ".view" %W] == 0) } {
	    focus [winfo toplevel %W].f3D.togl
	}

	break;
    }
    #bind

    bind $w <$ayviewshortcuts(RotMod)-Enter> {
	global ay ayprefs ayviewshortcuts
	if { $ay(cviewsema) != 1 } {
	    update
	    set ay(cviewsema) 1
	    update

	    if { [string first ".view" %W] == 0 } {
		set w [winfo toplevel %W]
	    } else {
		set w %W
	    }
	    $w.f3D.togl mc
	    set ay(currentView) $w.f3D.togl
	    $w.f3D.togl configure -cursor exchange

	    update
	    set ay(cviewsema) 0
	    update
	}
	#if

	if { ($ayprefs(AutoFocus) == 1) && \
	     ([string first ".view" %W] == 0) } {
	    focus [winfo toplevel %W].f3D.togl
	}
    }
    #bind

    bind $w <$ayviewshortcuts(ZoomRMod)-Enter> {
	global ay ayprefs ayviewshortcuts
	if { $ay(cviewsema) != 1 } {
	    update
	    set ay(cviewsema) 1
	    update

	    if { [string first ".view" %W] == 0 } {
		set w [winfo toplevel %W]
	    } else {
		set w %W
	    }
	    $w.f3D.togl mc
	    set ay(currentView) $w.f3D.togl
	    $w.f3D.togl configure -cursor sizing

	    update
	    set ay(cviewsema) 0
	    update
	}
	#if

	# save old bindings
	set i $ayviewshortcuts(ZoomRButton)
	set ay(oldbinding) [bind $w.f3D.togl <B${i}-Motion>]
	set ay(oldb1binding) [bind $w.f3D.togl <ButtonPress-${i}>]
	set ay(oldb1rbinding) [bind $w.f3D.togl <ButtonRelease-${i}>]

	if { ($ayprefs(AutoFocus) == 1) && \
	     ([string first ".view" %W] == 0) } {
	    focus [winfo toplevel %W].f3D.togl
	}
    }
    #bind

    # bind menu shortcuts
    shortcut_view $w

    # bind actions
    shortcut_viewactions $w

    # bind default action
    actionClear $w.f3D.togl

    $w configure -cursor {}
    $w.f3D.togl configure -cursor {}

 return;
}
# viewBind


##############################
# viewUnBind:
proc viewUnBind { w } {

    foreach v [ bind $w ] { bind $w $v "" }
    foreach v [ bind $w.f3D.togl ] { bind $w.f3D.togl $v "" }
    update
    $w configure -cursor watch
    $w.f3D.togl configure -cursor watch

 return;
}
# viewUnBind


##############################
# viewCloseAll:
proc viewCloseAll { } {
  global ay

  foreach view $ay(views) {
      viewClose $view
  }

 return;
}
# viewCloseAll


##############################
# viewClose:
proc viewClose { w } {
  global ay

  if { [string first ".view" $w] != 0 } {
      # $w does not start with ".view" => view is internal, can not close
      return;
  }

  set ay(draw) 0
  update

  # first remove bindings that could accidentally fire while closing
  bind $w <Enter> ""
  bind $w <Motion> ""
  global ayviewshortcuts
  bind $w <$ayviewshortcuts(RotMod)-Motion> ""

  # now delete the view from the view list
  set temp ""
  set ay(currentView) ""
  foreach view $ay(views) {
    if { $view != $w } {
	set temp [concat $temp $view]
	set ay(currentView) ${view}.f3D.togl
    }
  }

  set ay(views) $temp

  catch {$ay(currentView) mc}

  # finally delete the window
  destroy $w.f3D.togl
  destroy $w

  # clear undo buffer
  undo clear

  set ay(draw) 1

 return;
}
# viewClose


##############################
# setCameraAttr:
proc setCameraAttr { } {
    global ay CameraData
    set cw $ay(currentView)
    getName o
    getType t

    $CameraData(togl) mc

    setProp

    $ay(currentView) mc

}
# setCameraAttr


##############################
# setViewAttr:
proc setViewAttr { } {
    global ay ViewAttribData pclip_reset

    set cw $ay(currentView)
    getName o
    
    set togl $ViewAttribData(togl)

    $togl mc

    if { $ViewAttribData(Width) != $pclip_reset(Width) ||
	 $ViewAttribData(Height) != $pclip_reset(Height) } {
	$togl configure -width $ViewAttribData(Width)\
	    -height $ViewAttribData(Height)
	update
    }
    if { $ViewAttribData(Type) != $pclip_reset(Type) } {
	#    setupActionKeys $w clear
	set typename [lindex $ay(viewtypenames) $ViewAttribData(Type)]
	viewTitle $togl $typename Pick
    }

    viewSetGridIcon $togl $ViewAttribData(GridSize)

    setProp

    $ay(currentView) mc
 return;
}
# setViewAttr


##############################
# viewRepairTitle:
#  after undo/redo, set correct view title
proc viewRepairTitle { w type } {
    global ay ViewAttribData

    set typename [lindex $ay(viewtypenames) $type]

    viewTitle .${w} $typename ""

}
# viewRepairTitle


##############################
# viewSetGridIcon:
#  set correct grid icon according to gridsize
proc viewSetGridIcon { w gridsize } {
    global ay tcl_platform AYWITHAQUA

    if { [string first ".view" $w] == 0 } {
	# guard against calling with sub-widget
	set w [winfo toplevel $w]
    }

    if { (! $AYWITHAQUA) || ([winfo toplevel $w] != $w) } {
	set menubar 0
	set m fMenu.g
	set conf "$w.$m configure"
    } else {
	set menubar 1
	set m menubar.mgrid
	set conf "$w.menubar entryconfigure 6"
    }

    if { $gridsize == 0.1 } {
	eval "$conf -image ay_Grid01_img"
	if {$menubar} { eval "$conf -image {} -label \"Grid 0.1\"" }
	} else {
	    if { $gridsize == 0.25 } {
		eval "$conf -image ay_Grid025_img"
	       if {$menubar} { eval "$conf -image {} -label \"Grid 0.25\"" }
	    } else {
		if { $gridsize == 0.5 } {
		    eval "$conf -image ay_Grid05_img"
		if {$menubar} { eval "$conf -image {} -label \"Grid 0.5\"" }
		} else {
		    if { $gridsize == 1.0 } {
			eval "$conf -image ay_Grid10_img"
		if {$menubar} { eval "$conf -image {} -label \"Grid 1.0\"" }
		    } else {
			if { $gridsize == 0.0 } {
			    eval "$conf -image ay_Grid_img"
		    if {$menubar} { eval "$conf -image {} -label \"No Grid\"" }
			} else {
			    eval "$conf -image ay_GridX_img"
                  if {$menubar} { eval "$conf -image {} -label \"Grid X\"" }
			}
		    }
		}
	    }
	}

 return;
}
# viewSetGridIcon


##############################
# viewSetDModeIcon:
#  set correct drawing mode icon according to mode
proc viewSetDModeIcon { w mode } {
    global ay AYWITHAQUA

    if { [string first ".view" $w] == 0 } {
	# guard against calling with sub-widget
	set w [winfo toplevel $w]
    }

    if { (! $AYWITHAQUA) || ([winfo toplevel $w] != $w) } {
	set menubar 0
	set m fMenu.dm
	set conf "$w.$m configure"
    } else {
	set menubar 1
	set m menubar.dm
	set conf "$w.menubar entryconfigure 5"
    }

    if { $mode == 0 } {
	eval "$conf -image ay_DMDraw_img"
	if {$menubar} { eval "$conf -image {} -label \"Draw\"" }
    } else {
	if { $mode == 1 } {
	    eval "$conf -image ay_DMShade_img"
	    if {$menubar} { eval "$conf -image {} -label \"Shade\"" }
	} else {
	    eval "$conf -image ay_DMShadeDraw_img"
	    if {$menubar} { eval "$conf -image {} -label \"Shade&Draw\"" }
	}
    }

 return;
}
# viewSetDModeIcon


##############################
# viewSetMModeIcon:
#  set correct modelling mode (global/local) icon according to mode
proc viewSetMModeIcon { w mode } {
    global ay AYWITHAQUA

    if { [string first ".view" $w] == 0 } {
	# guard against calling with sub-widget
	set w [winfo toplevel $w]
    }

    if { (! $AYWITHAQUA) || ([winfo toplevel $w] != $w) } {
	set m fMenu.mm
	set conf "$w.$m configure"

	if { $mode == 0 } {
	    eval "$conf -image ay_MMGlobLoc_img"
	} else {
	    eval "$conf -image ay_MMLocGlob_img"
	}
    } else {
	set conf "$w.menubar entryconfigure 4"

	if { $mode == 0 } {
	    eval "$conf -label Global"
	} else {
	    eval "$conf -label Local"
	}
    }

 return;
}
# viewSetMModeIcon


##############################
# viewMouseToCurrent:
#  set current view to the view that has the focus;
#  used after startup and loading of scenes
proc viewMouseToCurrent { } {
    global ay

    set focused [focus -displayof .]

    if { $focused != "" } {

 	foreach view $ay(views) {
 	    if { [string compare $view $focused] == 0 } {
 		${view}.f3D.togl mc
		set ay(currentView) ${view}.f3D.togl
 	    }
 	}
    }

}
# viewMouseToCurrent


##############################
# viewToggleDMode:
#  toggle drawing mode from shade (Shade _or_ ShadeAndDraw) to draw
proc viewToggleDMode { w } {
    global ay

    set togl $w.f3D.togl

    if { [string first ".view" $w] == 0 } {
	set w [winfo toplevel $togl]
    }

    if { $ay(cVDMode) > 0 } {
	$togl setconf -shade 0
	viewSetDModeIcon $w 0
	set ay(cVDMode) 0
    } else {
	$togl setconf -shade 1
	viewSetDModeIcon $w 1
	set ay(cVDMode) 1
    }

}
# viewToggleDMode


##############################
# viewToggleMMode:
#  toggle modelling mode (local <> global)
proc viewToggleMMode { w } {
    global ay

    set togl $w.f3D.togl

    if { [string first ".view" $w] == 0 } {
	set w [winfo toplevel $togl]
    }

    if { $ay(cVMMode) > 0 } {
	$togl setconf -local 0
	viewSetMModeIcon $w 0
	set ay(cVMMode) 0
    } else {
	$togl setconf -local 1
	viewSetMModeIcon $w 1
	set ay(cVMMode) 1
    }

}
# viewToggleMMode


##############################
# viewSetBGImage:
proc viewSetBGImage { view } {
    global ay

    winAutoFocusOff

    set w .setBGI
    catch {destroy $w}
    toplevel $w -class ayam
    wm title $w "Set BGImage"
    wm iconname $w "Ayam"
    wm transient $w [winfo toplevel $view]

    set f [frame $w.f1]
    pack $f -in $w -side top -fill x

    $view mc
    set ay(ImageFile) $ay(cVBGImage)
    update

    addFileT $f ay ImageFile \
	{ {"TIF" ".tif"} {"TIFF" ".tiff"} {"All files" *} }

    set f [frame $w.f2]
    button $f.bok -text "Ok" -pady $ay(pady) -width 15 -command "\
	global ay;\
	$view mc;\
	$view setconf -bgimage \$ay(ImageFile);\
	if { \$ay(cVDrawBG) == 0 } {\
	 set ay(cVDrawBG) 1;\
	 $view setconf -dbg \$ay(cVDrawBG);\
        };\
        set ay(sc) 1;\
	$view render;\
	update;\
	grab release .setBGI;\
	focus $view;\
	destroy $w"


    button $f.bca -text "Cancel" -pady $ay(pady) -width 15 -command "\
	global ay;
	grab release .setBGI;\
	focus $view;\
	destroy $w"

    pack $f.bok $f.bca -in $f -side left -fill x -expand yes
    pack $f -in $w -side bottom -fill x

    # Esc-key && close via window decoration == Cancel button
    bind $w <Escape> "$f.bca invoke"
    wm protocol $w WM_DELETE_WINDOW "$f.bca invoke"

    winCenter $w
    grab $w
    focus $w.f1.fImageFile.e
    tkwait window $w

    winAutoFocusOn

 return;
}
# viewSetBGImage


# some code, that has to be executed in global context when this
# module is sourced the first time (on application startup):

# objects of type View have just two editable properties:
set View_props { Camera ViewAttrib }

# create Camera-UI
array set Camera {
arr   CameraData
sproc setCameraAttr
gproc ""
w     fCamera
}

set w [frame $ay(pca).$Camera(w)]

addText $w e2 "From:"
addParam $w CameraData From_X
addParam $w CameraData From_Y
addParam $w CameraData From_Z

addText $w e3 "To:"
addParam $w CameraData To_X
addParam $w CameraData To_Y
addParam $w CameraData To_Z

addText $w e4 "Up:"
addParam $w CameraData Up_X
addParam $w CameraData Up_Y
addParam $w CameraData Up_Z

addText $w e5 "Clipping Planes:"
addParam $w CameraData Near
addParam $w CameraData Far

addText $w e6 "Misc:"
addParam $w CameraData Roll
addParam $w CameraData Zoom

# create ViewAttr-UI
array set ViewAttrib {
arr   ViewAttribData
sproc setViewAttr
gproc ""
w     fViewAttr
}

array set ViewAttribData {
 Type 0
 Mode 0
}

set w [frame $ay(pca).$ViewAttrib(w)]

addMenu $w ViewAttribData Type [list Front Side Top Persp Trim]

addText $w e1 "Window:"
addParam $w ViewAttribData Width
addParam $w ViewAttribData Height

addText $w e2 "Drawing:"
addCheck $w ViewAttribData Redraw
addMenu $w ViewAttribData Mode [list Draw Shade ShadeAndDraw]
addCheck $w ViewAttribData DrawSel
addCheck $w ViewAttribData DrawLevel
addCheck $w ViewAttribData DrawObjectCS
addCheck $w ViewAttribData AALines

addText $w e3 "Grid:"
addParam $w ViewAttribData GridSize
addCheck $w ViewAttribData DrawGrid
addCheck $w ViewAttribData UseGrid
addCheck $w ViewAttribData Local

addText $w e4 "Background:"
addCheck $w ViewAttribData DrawBG
addFile $w ViewAttribData BGImage
