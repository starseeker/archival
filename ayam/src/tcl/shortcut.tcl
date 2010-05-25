# Ayam, a free 3D modeler for the RenderMan interface.
#
# Ayam is copyrighted 1998-2009 by Randolf Schultz
# (randolf.schultz@gmail.com) and others.
#
# All rights reserved.
#
# See the file License for details.

# shortcut.tcl - procedures to establish key bindings


# repctrl - replace "Ctrl" by "Control"
#
#
proc repctrl { string } {
    regsub -all "Ctrl" $string "Control" string
    return $string
}


# remkpkr - remove "KeyPress-"/"KeyRelease-"
#
#
proc remkpkr { string } {
    regsub -all "KeyPress-" $string "" string
    regsub -all "KeyRelease-" $string "" string
    return $string
}
# remkpkr


# shortcut_swapmb:
#  swap mouse button numbers from Win32/X11 style to Aqua style
#  in shortcuts designated by ayprefs(SwapMBSC)
proc shortcut_swapmb { } {
 global ay ayprefs

    if { ($ayprefs(SwapMB) == 1) && ($ayprefs(WindowSystem) != $ay(ws)) } {
	foreach shortcut $ayprefs(SwapMBSC) {
	    eval [subst "set val \$::$shortcut"]
	    set val [string map { 2 3 3 2 } $val]
	    eval [subst "set ::$shortcut $val"]
	}
    }

 return;
}
# shortcut_swapmb


# shortcut_fkeys:
#  Setup Function-Key-Bindings for window w
proc shortcut_fkeys { w } {
 global aymainshortcuts

    bind $w <[repctrl $aymainshortcuts(SwLazyNotify)]>\
            { prefs_toggleLazyNotification }
    bind $w <[repctrl $aymainshortcuts(SwNURBSWire)]>\
	    { prefs_toggleSurfaceWire }
    bind $w <[repctrl $aymainshortcuts(SetSTP)]>\
	    { prefs_setSamplingTolerance 1 }
    bind $w <[repctrl $aymainshortcuts(SetSTL)]>\
	    { prefs_setSamplingTolerance 0 }
    bind $w <[repctrl $aymainshortcuts(Update)]>\
            {
		ayError 4 $aymainshortcuts(Update) "Update!"
		forceNot all; uS 1 1; rV;
	    }

 return;
}
# shortcut_fkeys


# shortcut_main:
#  Setup Keybindings for the Main Window
proc shortcut_main { w } {
    global ay aymainshortcuts AYWITHAQUA tcl_platform

    set m $ay(filemenu)
    bind $w <[repctrl $aymainshortcuts(New)]> "$m invoke 0;break"
    $m entryconfigure 0 -accelerator [remkpkr $aymainshortcuts(New)]
    bind $w <[repctrl $aymainshortcuts(Replace)]> "$m invoke 2;break"
    $m entryconfigure 2 -accelerator [remkpkr $aymainshortcuts(Replace)]
    bind $w <[repctrl $aymainshortcuts(Insert)]> "$m invoke 3;break"
    $m entryconfigure 3 -accelerator [remkpkr $aymainshortcuts(Insert)]
    bind $w <[repctrl $aymainshortcuts(SaveAs)]> "$m invoke 5;break"
    $m entryconfigure 5 -accelerator [remkpkr $aymainshortcuts(SaveAs)]
    bind $w <[repctrl $aymainshortcuts(Save)]> "$m invoke 6;break"
    $m entryconfigure 6 -accelerator [remkpkr $aymainshortcuts(Save)]
    bind $w <[repctrl $aymainshortcuts(ExportRIB)]> "$m.ex invoke 0;break"
    $m.ex entryconfigure 0 -accelerator [remkpkr $aymainshortcuts(ExportRIB)]

    bind $w <[repctrl $aymainshortcuts(MRU1)]> "$m invoke 16;break"
    $m entryconfigure 16\
	    -accelerator [remkpkr $aymainshortcuts(MRU1)]
    bind $w <[repctrl $aymainshortcuts(MRU2)]> "$m invoke 17;break"
    $m entryconfigure 17\
	    -accelerator [remkpkr $aymainshortcuts(MRU2)]
    bind $w <[repctrl $aymainshortcuts(MRU3)]> "$m invoke 18;break"
    $m entryconfigure 18\
	    -accelerator [remkpkr $aymainshortcuts(MRU3)]
    bind $w <[repctrl $aymainshortcuts(MRU4)]> "$m invoke 19;break"
    $m entryconfigure 19\
	    -accelerator [remkpkr $aymainshortcuts(MRU4)]


    bind $w <[repctrl $aymainshortcuts(Quit)]> "$m invoke 21;break"
    $m entryconfigure 21 -accelerator [remkpkr $aymainshortcuts(Quit)]


    bind $w <[repctrl $aymainshortcuts(Apply)]> "$ay(appb) invoke;break"

    set m $ay(editmenu)
    bind $w <[repctrl $aymainshortcuts(Copy)]> "$m invoke 0;break"
    $m entryconfigure 0 -accelerator [remkpkr $aymainshortcuts(Copy)]
    bind $w <[repctrl $aymainshortcuts(Cut)]> "$m invoke 1;break"
    $m entryconfigure 1 -accelerator [remkpkr $aymainshortcuts(Cut)]
    bind $w <[repctrl $aymainshortcuts(Paste)]> "$m invoke 2;break"
    $m entryconfigure 2 -accelerator [remkpkr $aymainshortcuts(Paste)]

    bind $w <[repctrl $aymainshortcuts(SelAll)]> "$m invoke 5;break"
    $m entryconfigure 5 -accelerator [remkpkr $aymainshortcuts(SelAll)]
    bind $w <[repctrl $aymainshortcuts(SelNone)]> "$m invoke 6;break"
    $m entryconfigure 6 -accelerator [remkpkr $aymainshortcuts(SelNone)]

    bind $w <[repctrl $aymainshortcuts(CopyP)]> "$m invoke 8;break"
    $m entryconfigure 8 -accelerator [remkpkr $aymainshortcuts(CopyP)]
    bind $w <[repctrl $aymainshortcuts(ICopyP)]> "$m invoke 9;break"
    $m entryconfigure 9 -accelerator [remkpkr $aymainshortcuts(ICopyP)]
    bind $w <[repctrl $aymainshortcuts(PasteP)]> "$m invoke 10;break"
    $m entryconfigure 10 -accelerator [remkpkr $aymainshortcuts(PasteP)]

    bind $w <[repctrl $aymainshortcuts(Undo)]> "$m invoke 12;break"
    $m entryconfigure 12 -accelerator [remkpkr $aymainshortcuts(Undo)]
    bind $w <[repctrl $aymainshortcuts(Redo)]> "$m invoke 13;break"
    $m entryconfigure 13 -accelerator [remkpkr $aymainshortcuts(Redo)]

    bind $w <[repctrl $aymainshortcuts(Material)]> "$m invoke 15;break"
    $m entryconfigure 15 -accelerator [remkpkr $aymainshortcuts(Material)]

    bind $w <[repctrl $aymainshortcuts(Master)]> "$m invoke 16;break"
    $m entryconfigure 16 -accelerator [remkpkr $aymainshortcuts(Master)]


    bind $w <[repctrl $aymainshortcuts(Prefs)]> "$m invoke 18;break"
    $m entryconfigure 18 -accelerator [remkpkr $aymainshortcuts(Prefs)]

    set m $ay(toolsmenu)
    bind $w <[repctrl $aymainshortcuts(LastTool)]> "$m invoke 0;break"
    $m entryconfigure 0 -accelerator [remkpkr $aymainshortcuts(LastTool)]

    bind $w <[repctrl $aymainshortcuts(LastToolP)]> "\
     if \{ \$ay(lasttool) != \"\" \} \{ eval \$ay(lasttool) \}"

    bind $w <[repctrl $aymainshortcuts(Hide)]>\
	"$m invoke 12;break"
    $m entryconfigure 12 -accelerator [remkpkr $aymainshortcuts(Hide)]

    bind $w <[repctrl $aymainshortcuts(Show)]>\
	"$m invoke 14;break"
    $m entryconfigure 14 -accelerator [remkpkr $aymainshortcuts(Show)]

    bind $w <[repctrl $aymainshortcuts(Convert)]>\
	"$m invoke 17;break"
    $m entryconfigure 17 -accelerator [remkpkr $aymainshortcuts(Convert)]

    bind $w <[repctrl $aymainshortcuts(ConvertP)]>\
	"$m invoke 18;break"
    $m entryconfigure 18 -accelerator [remkpkr $aymainshortcuts(ConvertP)]

    set m $ay(helpmenu)
    bind $w <[repctrl $aymainshortcuts(Help)]> "$m invoke 0;break"
    $m entryconfigure 0 -accelerator [remkpkr $aymainshortcuts(Help)]

    bind $w <$aymainshortcuts(ContextMod)-Key-$aymainshortcuts(Help)>\
	"$m invoke 1"

    set m $ay(specialmenu)
    bind $w <[repctrl $aymainshortcuts(Zap)]> zap
    $m entryconfigure 20 -accelerator [remkpkr $aymainshortcuts(Zap)]

    bind $w <Map> unzap

    bind $w <[repctrl $aymainshortcuts(RebuildTree)]> {
	global ay
	if { $ay(lb) == 0 } { tree_reset }
    }

    # bind function keys
    shortcut_fkeys $w

    if { $w  == "." } {
	bind $w <Enter> {
	    global ayprefs
	    if { $ayprefs(AutoFocus) == 1 } {
		if { "%W" == "[winfo toplevel %W]" } {
		    focus %W
		}
	    }
	}
    }

    bind $w <Left> {
	global ay
	if { $ay(lb) == 0 } {
	    set tree $ay(tree)
	    set cl $ay(CurrentLevel)

	    if { $cl == "root" } {
		break
	    }
	    set i [string last ":" $cl]
	    set newcl [string range $cl 0 [expr ${i}-1]]
	    tree_paintLevel $newcl
	    goUp
	    set ay(CurrentLevel) $newcl
	    set ay(SelectedLevel) $newcl
	    $tree selection set $cl
	    $tree see $cl
	    treeSelect $cl
	    tree_paintLevel $newcl
	    plb_update
	    rV

	} else {
	    $ay(olbbup) invoke
	    break
	}
	# if
    }
    # bind

    bind $w <Right> {
	global ay
	if { $ay(lb) == 0 } {
	    set tree $ay(tree)
	    set cl $ay(CurrentLevel)

	    set sel ""
	    set sel [$tree selection get]

	    if { $sel == "" } {
		break
	    }

	    set sel [lindex $sel 0]

	    $tree selection set $sel
	    treeSelect $sel

	    if { ! [hasChild] } {
		break
	    }
	    $tree itemconfigure $sel -open 1
	    goDown
	    set ay(CurrentLevel) $sel
	    set ay(SelectedLevel) $sel
	    tree_paintLevel $cl
	    $tree selection set ${sel}:0
	    $tree see ${sel}:0
	    treeSelect ${sel}:0
	    tree_paintLevel $sel
	    plb_update
	    rV

	} else {
	    $ay(olbbdwn) invoke
	    break
	}
	# if
    }
    # bind

    bind $w <Down> "selNPFL 0"
    bind $w <Shift-Down> "selAdd 1"
    bind $w <Shift-End> "selAdd 4"
    bind $w <Up> "selNPFL 1"
    bind $w <Shift-Up> "selAdd 0"
    bind $w <Shift-Home> "selAdd 3"
    bind $w <Home> "selNPFL 2"
    bind $w <End> "selNPFL 3"

    bind $w <space> {
	global ay
	if { $ay(lb) == 0 } {
	    set tree $ay(tree)
	    set sel ""
	    set sel [$tree selection get]
	    foreach node $sel {
		if { ! [$tree itemcget $node -open] } {
		    $tree itemconfigure $node -open 1
		} else {
		    $tree itemconfigure $node -open 0
		}
	    }
	    # foreach
	}
	# if
    }
    # bind

    bind $w <[repctrl $aymainshortcuts(SProp0)]> "plb_showprop 0"
    bind $w <[repctrl $aymainshortcuts(SProp1)]> "plb_showprop 1"
    bind $w <[repctrl $aymainshortcuts(SProp2)]> "plb_showprop 2"
    bind $w <[repctrl $aymainshortcuts(SProp3)]> "plb_showprop 3"
    bind $w <[repctrl $aymainshortcuts(SProp4)]> "plb_showprop 4"
    bind $w <[repctrl $aymainshortcuts(SProp5)]> "plb_showprop 5"
    bind $w <[repctrl $aymainshortcuts(SProp6)]> "plb_showprop 6"
    bind $w <[repctrl $aymainshortcuts(SProp7)]> "plb_showprop 7"
    bind $w <[repctrl $aymainshortcuts(SProp8)]> "plb_showprop 8"
    bind $w <[repctrl $aymainshortcuts(SProp9)]> "plb_showprop 9"

    bind $w <[repctrl $aymainshortcuts(SProp00)]> "plb_showprop 0"
    bind $w <[repctrl $aymainshortcuts(SProp11)]> "plb_showprop 1"
    bind $w <[repctrl $aymainshortcuts(SProp22)]> "plb_showprop 2"
    bind $w <[repctrl $aymainshortcuts(SProp33)]> "plb_showprop 3"
    bind $w <[repctrl $aymainshortcuts(SProp44)]> "plb_showprop 4"
    bind $w <[repctrl $aymainshortcuts(SProp55)]> "plb_showprop 5"
    bind $w <[repctrl $aymainshortcuts(SProp66)]> "plb_showprop 6"
    bind $w <[repctrl $aymainshortcuts(SProp77)]> "plb_showprop 7"
    bind $w <[repctrl $aymainshortcuts(SProp88)]> "plb_showprop 8"
    bind $w <[repctrl $aymainshortcuts(SProp99)]> "plb_showprop 9"

    bind $w <[repctrl $aymainshortcuts(ContextMenu)]> \
	"if { \$ay(lb) == 1 } {olb_openPopup \$ay(olb)} else {tree_openPopup \$ay(tree)}"

    # on Aqua, <Command-q> quits the application
    if { $AYWITHAQUA == 1 } {
	bind all <Command-q> exit
    }

    if { $tcl_platform(platform) == "windows" } {
	set m $ay(filemenu)
	bind all <Alt-F4> "$m invoke 21;break"
	bind . <Alt-F4> "$m invoke 21;break"
    }

    if { [winfo exists $ay(treecm).tree] } {
	$ay(treecm).tree entryconfigure 0 -accelerator [remkpkr $aymainshortcuts(RebuildTree)]
    }

 return;
}
# shortcut_main


# shortcut_toolbox:
# Setup special Keybindings for the toolbox
# XXXX currently unused
#
proc shortcut_toolbox { w } {
    global ay ayviewshortcuts aymainshortcuts

    set m $ay(editmenu)
    bind $w <[repctrl $aymainshortcuts(Undo)]> "$m invoke 9"
    bind $w <[repctrl $aymainshortcuts(Redo)]> "$m invoke 10"
}
# shortcut_toolbox


# shortcut_view:
# Setup menu- and main-keybindings for a 3D-View.
proc shortcut_view { w } {
    global ay ayprefs ayviewshortcuts aymainshortcuts AYWITHAQUA

    if { (! $AYWITHAQUA) || ([winfo toplevel $w] != $w) } {
	set viewm $w.fMenu.v.m
	set typem $w.fMenu.t.m
	set confm $w.fMenu.c.m
    } else {
	set viewm $w.menubar.mview
	set typem $w.menubar.mtype
	set confm $w.menubar.mconf
    }

    if { [winfo toplevel $w] != $w } {
	# internal view
	shortcut_main $w
    } else {
	# external view
	# add only some main window shortcuts
	set m $ay(helpmenu)
	bind $w <[repctrl $aymainshortcuts(Help)]> "$m invoke 0;break"

	set m $ay(editmenu)
	bind $w <[repctrl $aymainshortcuts(Undo)]> "$m invoke 12;break"
	bind $w <[repctrl $aymainshortcuts(Redo)]> "$m invoke 13;break"
	bind $w <[repctrl $aymainshortcuts(Material)]> "$m invoke 15;break"
	bind $w <[repctrl $aymainshortcuts(Master)]> "$m invoke 16;break"

	# object selection
	bind $w <Shift-Up> "selAdd 0"
	bind $w <Shift-Home> "selAdd 3"
	bind $w <Home> "selNPFL 2"
	bind $w <End> "selNPFL 3"
    }

    # view window shortcuts
    set m $viewm
    bind $w <[repctrl $ayviewshortcuts(QRender)]> "$m invoke 0;break"
    $m entryconfigure 0 -accelerator [remkpkr $ayviewshortcuts(QRender)]
    bind $w <[repctrl $ayviewshortcuts(Render)]> "$m invoke 1;break"
    $m entryconfigure 1 -accelerator [remkpkr $ayviewshortcuts(Render)]
    bind $w <[repctrl $ayviewshortcuts(Redraw)]> "$m invoke 3;break"
    $m entryconfigure 3 -accelerator [remkpkr $ayviewshortcuts(Redraw)]

    bind $w <[repctrl $aymainshortcuts(ExportRIB)]> "$m invoke 4;break"
    $m entryconfigure 4 -accelerator [remkpkr $aymainshortcuts(ExportRIB)]
    if { [string first ".view" $w] == 0 } {
	global AYENABLEPPREV
	if { $AYENABLEPPREV == 1 } { set tmp 12 } else { set tmp 9 }
	bind $w <[repctrl $ayviewshortcuts(Close)]> "$m invoke $tmp"
	$m entryconfigure $tmp -accelerator [remkpkr $ayviewshortcuts(Close)]
    }

    if { ([winfo toplevel $w] == $w) || $ayprefs(BindInternalViews) } {
	set m $typem
	bind $w <[repctrl $ayviewshortcuts(Front)]> "$m invoke 0;break"
	$m entryconfigure 0 -accelerator [remkpkr $ayviewshortcuts(Front)]
	bind $w <[repctrl $ayviewshortcuts(Side)]> "$m invoke 1;break"
	$m entryconfigure 1 -accelerator [remkpkr $ayviewshortcuts(Side)]
	bind $w <[repctrl $ayviewshortcuts(Top)]> "$m invoke 2;break"
	$m entryconfigure 2 -accelerator [remkpkr $ayviewshortcuts(Top)]
	bind $w <[repctrl $ayviewshortcuts(Persp)]> "$m invoke 4;break"
	$m entryconfigure 4 -accelerator [remkpkr $ayviewshortcuts(Persp)]
	bind $w <[repctrl $ayviewshortcuts(Trim)]> "$m invoke 6;break"
	$m entryconfigure 6 -accelerator [remkpkr $ayviewshortcuts(Trim)]
    }

    set m $confm
    bind $w <[repctrl $ayviewshortcuts(Auto)]> "$m invoke 0;break"
    $m entryconfigure 0 -accelerator [remkpkr $ayviewshortcuts(Auto)]

    #bind $w <[repctrl $ayviewshortcuts(Shade)]> "$m invoke 1"
    #$m entryconfigure 1 -accelerator $ayviewshortcuts(Shade)
    if { ([winfo toplevel $w] == $w) || $ayprefs(BindInternalViews) } {
	bind $w <[repctrl $ayviewshortcuts(Shade)]> "viewToggleDMode $w;break"
    }

    bind $w <[repctrl $ayviewshortcuts(DGrid)]> "$m invoke 10;break"
    $m entryconfigure 10 -accelerator [remkpkr $ayviewshortcuts(DGrid)]
    bind $w <[repctrl $ayviewshortcuts(UGrid)]> "$m invoke 11;break"
    $m entryconfigure 11 -accelerator [remkpkr $ayviewshortcuts(UGrid)]
    bind $w <[repctrl $ayviewshortcuts(SGrid)]> "$m invoke 12;break"
    $m entryconfigure 12 -accelerator [remkpkr $ayviewshortcuts(SGrid)]

    if { ([winfo toplevel $w] == $w) } {
	bind $w <[repctrl $ayviewshortcuts(Halve)]> "$m invoke 14;break"
	$m entryconfigure 14 -accelerator [remkpkr $ayviewshortcuts(Halve)]
	bind $w <[repctrl $ayviewshortcuts(Double)]> "$m invoke 15;break"
	$m entryconfigure 15 -accelerator [remkpkr $ayviewshortcuts(Double)]
    }
    if { ([winfo toplevel $w] == $w) || $ayprefs(BindInternalViews) } {
	$m entryconfigure 21 -accelerator [remkpkr $ayviewshortcuts(ZoomTO)]
	bind $w <[repctrl $ayviewshortcuts(ZoomTO)]> "$m invoke 21;break"

	$m entryconfigure 22 -accelerator [remkpkr $ayviewshortcuts(Align)]
	bind $w <[repctrl $ayviewshortcuts(Align)]> "$m invoke 22;break"
    } else {
	$m entryconfigure 21 -accelerator [remkpkr $ayviewshortcuts(ZoomTO2)]
	$m entryconfigure 22 -accelerator [remkpkr $ayviewshortcuts(Align2)]
	$m entryconfigure 23 -accelerator [remkpkr $ayviewshortcuts(Local2)]
    }

    bind $w <[repctrl $ayviewshortcuts(ZoomTO2)]> "$m invoke 21;break"
    bind $w <[repctrl $ayviewshortcuts(Align2)]> "$m invoke 22;break"

    #set m $ay(mmodem)
    #$m entryconfigure 1 -accelerator [remkpkr $ayviewshortcuts(Local)]
    #bind $w <[repctrl $ayviewshortcuts(Local)]> "$m invoke 1;break"
    if { ([winfo toplevel $w] == $w) || $ayprefs(BindInternalViews) } {
	bind $w <[repctrl $ayviewshortcuts(Local)]> "viewToggleMMode $w;break"
	$m entryconfigure 23 -accelerator [remkpkr $ayviewshortcuts(Local)]
    }

    bind $w <[repctrl $ayviewshortcuts(Local2)]> "viewToggleMMode $w;break"

    bind $w <[repctrl $ayviewshortcuts(RotL)]>\
	    "$w.f3D.togl setconf -undokb ViewRotX -drotx 5.0 -droty 0.0;break"
    bind $w <[repctrl $ayviewshortcuts(RotR)]>\
	    "$w.f3D.togl setconf -undokb ViewRotX -drotx -5.0 -droty 0.0;break"
    bind $w <[repctrl $ayviewshortcuts(RotU)]>\
	    "$w.f3D.togl setconf -undokb ViewRotY -droty 5.0 -drotx 0.0;break"
    bind $w <[repctrl $ayviewshortcuts(RotD)]>\
	    "$w.f3D.togl setconf -undokb ViewRotY -droty -5.0 -drotx 0.0;break"

    bind $w <[repctrl $ayviewshortcuts(ZoomI)]>\
	    "$w.f3D.togl setconf -undokb ViewZoomIn -dzoom 0.9;break"

    bind $w <[repctrl $ayviewshortcuts(ZoomO)]>\
	    "$w.f3D.togl setconf -undokb ViewZoomOut -dzoom 1.1;break"

    bind $w <[repctrl $ayviewshortcuts(ZoomI2)]>\
	    "$w.f3D.togl setconf -undokb ViewZoomIn -dzoom 0.9;break"

    bind $w <[repctrl $ayviewshortcuts(ZoomO2)]>\
	    "$w.f3D.togl setconf -undokb ViewZoomOut -dzoom 1.1;break"


    bind $w <[repctrl $ayviewshortcuts(PanL)]>\
	"viewPan $w.f3D.togl 0;break"

    bind $w <[repctrl $ayviewshortcuts(PanR)]>\
	"viewPan $w.f3D.togl 1;break"

    bind $w <[repctrl $ayviewshortcuts(PanU)]>\
	"viewPan $w.f3D.togl 2;break"

    bind $w <[repctrl $ayviewshortcuts(PanD)]>\
	"viewPan $w.f3D.togl 3;break"


    bind $w <[repctrl $ayviewshortcuts(SelAllP)]>\
	"selPnts -all; rV;break"
    bind $w <[repctrl $ayviewshortcuts(DeSelect)]>\
	"selPnts; rV;break"
    bind $w <[repctrl $ayviewshortcuts(InvSelP)]>\
	"invPnts; rV;break"

    bind $w <[repctrl $ayviewshortcuts(CollP)]>\
	"collMP; rV;break"
    bind $w <[repctrl $ayviewshortcuts(ExplP)]>\
	"explMP; rV;break"

    bind $w <[repctrl $ayviewshortcuts(SnapGrid2D)]>\
	"actionSnapToGrid2D $w.f3D.togl;break"
    bind $w <[repctrl $ayviewshortcuts(SnapGrid3D)]>\
	"actionSnapToGrid3D $w.f3D.togl;break"

    bind $w <[repctrl $ayviewshortcuts(SnapMark)]>\
	"actionSnapToMark $w.f3D.togl;break"

    set m $ay(toolsmenu)
    bind $w <[repctrl $ayviewshortcuts(Hide)]>\
	"$m invoke 12;break"
    bind $w <[repctrl $ayviewshortcuts(Show)]>\
	"$m invoke 14;break"

    bind $w <[repctrl $ayviewshortcuts(TypeUp)]> "viewCycleType $w -1;break"
    bind $w <[repctrl $ayviewshortcuts(TypeDown)]> "viewCycleType $w 1;break"

    bind $w <[repctrl $ayviewshortcuts(DMUp)]> "viewCycleDrawMode $w -1;break"
    bind $w <[repctrl $ayviewshortcuts(DMDown)]> "viewCycleDrawMode $w 1;break"

    bind $w <[repctrl $aymainshortcuts(Zap)]> zap
    bind $w <Map> unzap


    # object selection
    bind $w <[repctrl $ayviewshortcuts(OSUp)]> "selNPFL 1"
    bind $w <[repctrl $ayviewshortcuts(OSDown)]> "selNPFL 0"
    bind $w <[repctrl $ayviewshortcuts(OSSUp)]> "selAdd 0"
    bind $w <[repctrl $ayviewshortcuts(OSSDown)]> "selAdd 1"
    # scene hierarchy navigation
    bind $w <[repctrl $ayviewshortcuts(OSLeft)]> {
	set oldfocus [focus]
	if { $ay(lb) == 0 } {
	    # Tree
	    set widget $ay(tree)
	} else {
	    # Listbox
	    set widget $ay(olb)
	}
	focus $widget
	event generate $widget <Left>
	focus $oldfocus
    }

    bind $w <[repctrl $ayviewshortcuts(OSRight)]> {
	set oldfocus [focus]
	if { $ay(lb) == 0 } {
	    # Tree
	    set widget $ay(tree)
	} else {
	    # Listbox
	    set widget $ay(olb)
	}
	focus $widget
	event generate $widget <Right>
	focus $oldfocus
    }

    # reset view camera
    bind $w <[repctrl $ayviewshortcuts(Reset)]> {
	if { [string first ".view" %W] != 0 } {
	    set w %W
	} else {
	    set w [winfo toplevel %W]
	}
	$w.f3D.togl mc
	viewSetType $w $ay(cVType) 0
	$w.f3D.togl render
    }

    # bind function keys
    shortcut_fkeys $w

    # on Aqua, in external views, <Command-q> quits the application
    if { ($AYWITHAQUA == 1) && ([winfo toplevel $w] == $w) } {
	bind $w <Command-q> exit
    }

 return;
}
# shortcut_view


# shortcut_viewactions:
# Setup action-keybindings for a 3D-View.
proc shortcut_viewactions { w } {
 global ay ayviewshortcuts

    set i $ayviewshortcuts(RotButton)

    bind $w <KeyPress-$ayviewshortcuts(RotModKey)> {
	if { [string first ".view" %W] != 0 } {
	    set w %W.f3D.togl
	} else {
	    set w [winfo toplevel %W].f3D.togl
	}
	$w configure -cursor exchange
    }

    bind $w <KeyRelease-$ayviewshortcuts(RotModKey)> {
	if { [string first ".view" %W] != 0 } {
	    set w %W.f3D.togl
	} else {
	    set w [winfo toplevel %W].f3D.togl
	}
	$w configure -cursor {}
    }
    bind $w.f3D.togl <${ayviewshortcuts(RotMod)}-ButtonPress-${i}> {
	set oldx %x
	set oldy %y
    }
    bind $w.f3D.togl <${ayviewshortcuts(RotMod)}-ButtonRelease-${i}> {
	focus %W
	break
    }
    bind $w.f3D.togl <${ayviewshortcuts(RotMod)}-B${i}-Motion> {
	%W setconf -drotx [expr ($oldx - %x)] -droty [expr ($oldy - %y)]
	set oldx %x
	set oldy %y
	update
	break
    }

    set i $ayviewshortcuts(ZoomRButton)

    bind $w <KeyPress-$ayviewshortcuts(ZoomRModKey)> {
	if { [string first ".view" %W] != 0 } {
	    set w %W.f3D.togl
	} else {
	    set w [winfo toplevel %W].f3D.togl
	}
	$w configure -cursor sizing
    }

    bind $w <KeyRelease-$ayviewshortcuts(ZoomRModKey)> {
	if { [string first ".view" %W] != 0 } {
	    set w %W.f3D.togl
	} else {
	    set w [winfo toplevel %W].f3D.togl
	}
	$w configure -cursor {}
    }

    bind $w.f3D.togl <${ayviewshortcuts(ZoomRMod)}-ButtonPress-${i}> {
	set oldx %x
	set oldy %y
    }

    bind $w.f3D.togl <${ayviewshortcuts(ZoomRMod)}-ButtonRelease-${i}> {
	undo save ZoomRView
	%W setconf -zrect 1 -rect $oldx $oldy %x %y 0
	%W redraw
	focus %W
	break
    }

    bind $w.f3D.togl <${ayviewshortcuts(ZoomRMod)}-B${i}-Motion> {
	%W setconf -rect $oldx $oldy %x %y 1
    }

    set i $ayviewshortcuts(ZoomVButton)

    bind $w.f3D.togl <ButtonPress-${i}> {
	undo save ZoomView
	%W mc
	%W zoomvac -start %y
	update
    }

    bind $w.f3D.togl <B${i}-Motion> {
	%W zoomvac -winy %y
	update
    }

    bind $w.f3D.togl <ButtonRelease-${i}> {
	focus %W
    }

    set i  $ayviewshortcuts(MoveVButton)

    bind $w.f3D.togl <ButtonPress-${i}> {
	undo save MoveView
	%W mc
	%W movevac -start %x %y
	update
    }

    bind $w.f3D.togl <B${i}-Motion> {
	%W movevac -winxy %x %y
	update
    }

    bind $w.f3D.togl <ButtonRelease-${i}> {
	focus %W
    }

    bind $w.f3D.togl <ButtonPress-4> {
	undo save ZoomView
	%W mc
	%W setconf -dzoom $::ayprefs(WheelZoom)
	update
	%W reshape
	%W render
	break
    }

    bind $w.f3D.togl <ButtonPress-5> {
	undo save ZoomView
	%W mc
	%W setconf -dzoom [expr 1.0/$::ayprefs(WheelZoom)]
	update
	%W reshape
	%W render
	break
    }


    if { $ay(ws) == "Win32" } {
	if { [string first ".view" $w] != 0 } {
	    # internal view
	    bind $w <MouseWheel> {
		undo save ZoomView
		%W.f3D.togl mc
		if { %D < 0.0 } {
		    %W.f3D.togl setconf -dzoom [expr 1.0/$::ayprefs(WheelZoom)]
		} else {
		    %W.f3D.togl setconf -dzoom $::ayprefs(WheelZoom)
		}
		update
		%W.f3D.togl reshape
		%W.f3D.togl render
		break
	    }
	} else {
	    # extra view window
	    bind $w <MouseWheel> {
		undo save ZoomView
		%W mc
		if { %D < 0.0 } {
		    %W setconf -dzoom [expr 1.0/$::ayprefs(WheelZoom)]
		} else {
		    %W setconf -dzoom $::ayprefs(WheelZoom)
		}
		update
		%W reshape
		%W render
		break
	    }
	}
    }
    # if

    if { $ay(ws) == "Aqua" } {
	bind $w.f3D.togl <MouseWheel> {
	    undo save ZoomView
	    %W mc
	    if { %D < 0.0 } {
		%W setconf -dzoom [expr 1.0/$::ayprefs(WheelZoom)]
	    } else {
		%W setconf -dzoom $::ayprefs(WheelZoom)
	    }
	    update
	    %W reshape
	    %W render
	    break
	}
    }
    # if

    bind $w <$ayviewshortcuts(Break)> "actionClear $w.f3D.togl"
    bind $w <$ayviewshortcuts(MoveV)> "actionMoveView $w.f3D.togl"
    bind $w <$ayviewshortcuts(MoveZV)> "actionMoveZView $w.f3D.togl"
    bind $w <$ayviewshortcuts(RotV)> "actionRotView $w.f3D.togl"
    bind $w <$ayviewshortcuts(ZoomV)> "actionZoomView $w.f3D.togl"

    bind $w <$ayviewshortcuts(MoveO)> "actionMoveOb $w.f3D.togl"
    bind $w <$ayviewshortcuts(RotO)> "actionRotOb $w.f3D.togl"
    bind $w <$ayviewshortcuts(Scal2)> "actionSc2DOb $w.f3D.togl"
    bind $w <$ayviewshortcuts(Scal3)> "actionSc3DOb $w.f3D.togl"
    bind $w <$ayviewshortcuts(Stretch)> "actionStr2DOb $w.f3D.togl"
    bind $w <$ayviewshortcuts(Edit)> "actionEditP $w.f3D.togl"
    bind $w <$ayviewshortcuts(EditD)> "actionDEditP $w.f3D.togl"
    bind $w <$ayviewshortcuts(WeightE)> "actionEditWP $w.f3D.togl"
    bind $w <$ayviewshortcuts(WeightR)> "actionResetWP $w.f3D.togl"
    bind $w <$ayviewshortcuts(About)> "actionSetMark $w"

    bind $w <$ayviewshortcuts(Select)> "actionTagP $w.f3D.togl"
    bind $w <$ayviewshortcuts(InsertP)> "actionInsertP $w.f3D.togl"
    bind $w <$ayviewshortcuts(DeleteP)> "actionDeleteP $w.f3D.togl"
    bind $w <$ayviewshortcuts(FindU)> "actionFindU $w.f3D.togl"
    bind $w <$ayviewshortcuts(SplitNC)> "actionSplitNC $w.f3D.togl"
    bind $w <$ayviewshortcuts(Pick)> "actionPick $w.f3D.togl"

    # allow plugins to define their own actions
    foreach customkey $ay(customkeys) {
	catch { bind $w [lindex $customkey 0] [lindex $customkey 1] }
    }

 return;
}
# shortcut_viewactions


#shortcut_show:
# display all current shortcuts in a separate top level window
proc shortcut_show { } {
global ay aymainshortcuts ayviewshortcuts tcl_platform

set w .ayscw

catch {destroy $w}
toplevel $w -class Ayam
wm title $w "Ayam Shortcuts"
wm iconname $w "Ayam"
if { $ay(ws) == "Aqua" } {
    winMakeFloat $w
} else {
    wm transient $w .
}
frame $w.ftext

frame $w.fbutton
pack $w.fbutton -in $w -side bottom
button $w.fbutton.b -text "Dismiss" -pady $ay(pady) -command "destroy $w"
pack $w.fbutton.b -in $w.fbutton

# Esc-key && close via window decoration == Dismiss button
bind $w <Escape> "$w.fbutton.b invoke"
wm protocol $w WM_DELETE_WINDOW "$w.fbutton.b invoke"

pack $w.ftext -in $w -side top -expand yes -fill both

set font fixed

if { $tcl_platform(platform) == "windows" } {
    set font fixedsys
}

# IRIXens "fixed" is too wide...
if { [string first "IRIX" $tcl_platform(os)] != -1 } {
    set font 9x15
}

# Also MacOSX Aqua does not deliver a proper mono-spaced "fixed"...
if { $ay(ws) == "Aqua"  } {
    set font {Courier 12}
}

text $w.ftext.text -yscrollcommand "$w.ftext.sbar set" \
	-setgrid 1 -font $font -height 20 -width 40 -wrap none
# -tabs {32c left}
scrollbar $w.ftext.sbar -takefocus 0 -command "$w.ftext.text yview"

pack $w.ftext.sbar -in $w.ftext -side right -fill y
pack $w.ftext.text -in $w.ftext -side left -fill both -expand yes

# strip KeyRelease/KeyPress elements
foreach elem [array names ayviewshortcuts] {

    eval set sc1 \$ayviewshortcuts(${elem})
    set sc2 ""
    set indexr [string first "KeyRelease-" $sc1]
    set indexp [string first "KeyPress-" $sc1]
    if { ($indexr > -1) || ($indexp) > 0 } {
	if { $indexr > -1 } {
	    if { $indexr > 0 } {
		set sc2 [string range $sc1 0 [expr $indexr - 1]]
	    }
	    append sc2 [string range $sc1 [expr $indexr + 11] end]
	}

	if { $indexp > -1 } {
	    if { $indexp > 0 } {
		set sc2 [string range $sc1 0 [expr $indexp - 1]]
	    }
	    set sc2 [string range $sc1 [expr $indexp + 9] end]
	}
    } else {
	set sc2 $sc1
    }

    set svsc(${elem}) $sc2

}
# foreach

$w.ftext.text insert end "Modelling Actions (View Windows):

 Pick Objects         <$svsc(Pick)>

 Move Objects         <$svsc(MoveO)>
  restrict X, Y, Z:   <$svsc(MoveO)$svsc(RestrictX)>, <$svsc(MoveO)$svsc(RestrictY)>, <$svsc(MoveO)$svsc(RestrictZ)>

 Rotate Objects       <$svsc(RotO)>
  about Mark, Center  <$svsc(RotO)$svsc(About)>, <$svsc(RotO)$svsc(CenterO)>
  about Pnts Center   <$svsc(RotO)$svsc(CenterP)>
 Scale Objects (3D)   <$svsc(Scal3)>
 Scale Objects (2D)   <$svsc(Scal2)>
 Stretch Objects (2D) <$svsc(Stretch)>
 Scale Objects (1D,X) <$svsc(Scal2)$svsc(RestrictX)>
 Scale Objects (1D,Y) <$svsc(Scal2)$svsc(RestrictY)>
 Scale Objects (1D,Z) <$svsc(Scal2)$svsc(RestrictZ)>
 Scale Objects 2D
  about Mark, Center  <$svsc(Scal2)$svsc(About)>, <$svsc(Scal2)$svsc(CenterO)>
  about Pnts Center   <$svsc(Scal2)$svsc(CenterP)>
 Similar for other scale actions...

 Set Mark             <$svsc(About)>
  accept old Mark      <Return>
  set objs center      <$svsc(CenterO)>
  set pnts center      <$svsc(CenterP)>

 Edit Points          <$svsc(Edit)>
 Edit Points (direct) <$svsc(EditD)>
 Edit Weight          <$svsc(WeightE)>
 Reset Weights        <$svsc(WeightR)>

 Select Points        <$svsc(Select)>
 De-Select Points     <$svsc(DeSelect)>
 Insert Points        <$svsc(InsertP)>
 Delete Points        <$svsc(DeleteP)>

 Select All Points    <$svsc(SelAllP)>
 Invert PointSel      <$svsc(InvSelP)>
 Collapse Selected    <$svsc(CollP)>
 Explode Selected     <$svsc(ExplP)>
 Snap to Grid 2D      <$svsc(SnapGrid2D)>
 Snap to Grid 3D      <$svsc(SnapGrid3D)>

 Hide Objects         <$svsc(Hide)>
 Show Objects         <$svsc(Show)>

 FindU                <$svsc(FindU)>
 Split Curve          <$svsc(SplitNC)>

View Actions (View Windows):

 Break Action        <$svsc(Break)>

 Move View           <$svsc(MoveV)>
 Move View
 (along Z)           <$svsc(MoveZV)>
 MoveViewAnytime     <Mouse-$svsc(MoveVButton)>

 Rotate View         <$svsc(RotV)>
 RotateViewAnytime   <$svsc(RotModKey)+Mouse-1>

 Rotate View (left)  <$svsc(RotL)>
 Rotate View (right) <$svsc(RotR)>
 Rotate View (up)    <$svsc(RotU)>
 Rotate View (down)  <$svsc(RotD)>

 Zoom View           <$svsc(ZoomV)>
 Zoom in View        <$svsc(ZoomI)>
 Zoom out View       <$svsc(ZoomO)>
 ZoomViewAnytime     <Mouse-$svsc(ZoomVButton)>

 ZoomRegion View     <$svsc(ZoomRModKey)+Mouse-1

 ZoomToObject        <$svsc(ZoomTO)> / <$svsc(ZoomTO2)>

 Cycle View Type     <$svsc(TypeUp)> / <$svsc(TypeDown)>

Function Keys (View Windows):

Adjust NURBS Sampling Rate: <${aymainshortcuts(SetSTL)}> / <${aymainshortcuts(SetSTP)}>
 Toggle Wire/NURBS:          <${aymainshortcuts(SwWire)}> / <${aymainshortcuts(SwNURBS)}>
 Toggle Lazy Notification    <${aymainshortcuts(SwLazyNotify)}>


See the reference card in the docs
folder for a printable and more
complete version.
"

bind $w <Next> "$w.ftext.text yview scroll 1 pages"
bind $w <Prior> "$w.ftext.text yview scroll -1 pages"

bind $w.ftext.text <ButtonPress-4>\
"$w.ftext.text yview scroll -1 pages; break"

bind $w.ftext.text <ButtonPress-5>\
"$w.ftext.text yview scroll 1 pages; break"

# add a pinstripe background pattern
set filler "                                                        "
set i 2
set on 0
while {$i < 82} {
    set line [$w.ftext.text get ${i}.0 ${i}.end]
    if { [string length $line] > 0 } {
	if { $on } {
	    # extend dark lines
	    $w.ftext.text insert ${i}.end $filler
	    update
	    # add line to range list for the graytag
	    lappend ranges ${i}.0
	    lappend ranges ${i}.end
	}
	set first 0
	set first [string first "<" $line ]
	if { $first > 0 } {
	    # only lines with "<" toggle the pattern
	    if { $on } {
		set on 0
	    } else {
		set on 1
	    }
	}
    } else {
	# empty lines reset the pinstripe pattern
	set on 0
    }
    incr i
}
# while

eval $w.ftext.text tag add graytag $ranges

# calculate new (darker) color from current background color
set oldbg [$w.ftext.text cget -background]
set r0 -1
if { [string first "\#" $oldbg] > -1 } {
    scan $oldbg "\#%2x%2x%2x" r0 g0 b0
} else {
    set rgb [winfo rgb . $oldbg]
    set r0 [expr [lindex $rgb 0] / 65535 * 256]
    set g0 [expr [lindex $rgb 1] / 65535 * 256]
    set b0 [expr [lindex $rgb 2] / 65535 * 256]
}
if { $r0 != -1 } {
    set r0 [expr $r0 - 10]
    set g0 [expr $g0 - 10]
    set b0 [expr $b0 - 10]
    set newbg [format "\#%2x%2x%2x" $r0 $g0 $b0]
    # set new color
    $w.ftext.text tag configure graytag -background $newbg
}


# disabling the widget on Win32 prohibits selection/focus
# and thus the mouse wheel does not work, the downside is
# that now, the user is able to edit the text (on Win32)
if { $tcl_platform(platform) != "windows" } {
    $w.ftext.text configure -state disabled
}

 return;
}
# shortcut_show


# shortcut_addescescbinding:
#
proc shortcut_addescescbinding { w } {
    bind $w <Escape> "\
        bind $w <Escape> \"\";
        resetFocus;
	cS;
        \$ay(plb) selection clear 0 end;
        plb_update;
        if \{ \$ay(lb) == 0 \} \{ tree_gotop \} else \{ goTop \};
        rV;"
    after 1000 "bind $w <Escape> \{shortcut_addescescbinding $w\}"

 return;
}
# shortcut_addescescbinding
