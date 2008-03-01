# Ayam, a free 3D modeler for the RenderMan interface.
#
# Ayam is copyrighted 1998-2005 by Randolf Schultz
# (rschultz@informatik.uni-rostock.de) and others.
#
# All rights reserved.
#
# See the file License for details.

# shortcut.tcl - procedures to establish key bindings


# repcont - replace control
proc repcont { string } {
    regsub -all "Ctrl" $string "Control" dummy
    return $dummy
}
# repcont


# repkp - replace "KeyPress-"
proc repkp { string } {
    regsub -all "KeyPress-" $string "" dummy
    return $dummy
}
# repkp

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

    bind $w <[repcont $aymainshortcuts(SwLazyNotify)]>\
	    prefs_toggleLazyNotification
    bind $w <[repcont $aymainshortcuts(SwNURBS)]>\
	    {prefs_toggleSurfaceWire 1}
    bind $w <[repcont $aymainshortcuts(SwWire)]>\
	    {prefs_toggleSurfaceWire 0}
    bind $w <[repcont $aymainshortcuts(SetSTP)]>\
	    {prefs_setSamplingTolerance 1}
    bind $w <[repcont $aymainshortcuts(SetSTL)]>\
	    {prefs_setSamplingTolerance 0}

 return;
}
# shortcut_fkeys


# shortcut_main:
#  Setup Keybindings for the Main Window
proc shortcut_main { w } {
    global ay aymainshortcuts AYWITHAQUA

    if { [winfo exists .fl.con] == 1 } {
	bind .fl.con.console <[repcont $aymainshortcuts(SwCon)]> {
	    focus [tk_focusNext %W] }

	bind .fl.con.console <ButtonPress-4> {
	.fl.con.console yview scroll -1 pages
	break
	}
	bind .fl.con.console <ButtonPress-5> {
	.fl.con.console yview scroll 1 pages
        break
	}
    }

    set m $ay(filemenu)
    bind $w <[repcont $aymainshortcuts(New)]> "$m invoke 0"
    $m entryconfigure 0 -accelerator $aymainshortcuts(New)
    bind $w <[repcont $aymainshortcuts(Replace)]> "$m invoke 2"
    $m entryconfigure 2 -accelerator $aymainshortcuts(Replace)
    bind $w <[repcont $aymainshortcuts(Insert)]> "$m invoke 3"
    $m entryconfigure 3 -accelerator $aymainshortcuts(Insert)
    bind $w <[repcont $aymainshortcuts(SaveAs)]> "$m invoke 5"
    $m entryconfigure 5 -accelerator $aymainshortcuts(SaveAs)
    bind $w <[repcont $aymainshortcuts(Save)]> "$m invoke 6"
    $m entryconfigure 6 -accelerator $aymainshortcuts(Save)
    bind $w <[repcont $aymainshortcuts(ExportRIB)]> "$m.ex invoke 0"
    $m.ex entryconfigure 0 -accelerator $aymainshortcuts(ExportRIB)

    bind $w <[repcont $aymainshortcuts(MRU1)]> "$m invoke 16"
    $m entryconfigure 16\
	    -accelerator [repkp $aymainshortcuts(MRU1)]
    bind $w <[repcont $aymainshortcuts(MRU2)]> "$m invoke 17"
    $m entryconfigure 17\
	    -accelerator [repkp $aymainshortcuts(MRU2)]
    bind $w <[repcont $aymainshortcuts(MRU3)]> "$m invoke 18"
    $m entryconfigure 18\
	    -accelerator [repkp $aymainshortcuts(MRU3)]
    bind $w <[repcont $aymainshortcuts(MRU4)]> "$m invoke 19"
    $m entryconfigure 19\
	    -accelerator [repkp $aymainshortcuts(MRU4)]


    bind $w <[repcont $aymainshortcuts(Quit)]> "$m invoke 21"
    $m entryconfigure 21 -accelerator $aymainshortcuts(Quit)


    bind $w <[repcont $aymainshortcuts(Apply)]> "$ay(appb) invoke"

    set m $ay(editmenu)
    bind $w <[repcont $aymainshortcuts(Copy)]> "$m invoke 0"
    $m entryconfigure 0 -accelerator $aymainshortcuts(Copy)
    bind $w <[repcont $aymainshortcuts(Cut)]> "$m invoke 1"
    $m entryconfigure 1 -accelerator $aymainshortcuts(Cut)
    bind $w <[repcont $aymainshortcuts(Paste)]> "$m invoke 2"
    $m entryconfigure 2 -accelerator $aymainshortcuts(Paste)

    bind $w <[repcont $aymainshortcuts(SelAll)]> "$m invoke 5"
    $m entryconfigure 5 -accelerator $aymainshortcuts(SelAll)
    bind $w <[repcont $aymainshortcuts(SelNone)]> "$m invoke 6"
    $m entryconfigure 6 -accelerator $aymainshortcuts(SelNone)

    bind $w <[repcont $aymainshortcuts(CopyP)]> "$m invoke 8"
    $m entryconfigure 8 -accelerator $aymainshortcuts(CopyP)
    bind $w <[repcont $aymainshortcuts(ICopyP)]> "$m invoke 9"
    $m entryconfigure 9 -accelerator $aymainshortcuts(ICopyP)
    bind $w <[repcont $aymainshortcuts(PasteP)]> "$m invoke 10"
    $m entryconfigure 10 -accelerator $aymainshortcuts(PasteP)

    bind $w <[repcont $aymainshortcuts(Undo)]> "$m invoke 12"
    $m entryconfigure 12 -accelerator $aymainshortcuts(Undo)
    bind $w <[repcont $aymainshortcuts(Redo)]> "$m invoke 13"
    $m entryconfigure 13 -accelerator $aymainshortcuts(Redo)

    bind $w <[repcont $aymainshortcuts(Material)]> "$m invoke 15"
    $m entryconfigure 15 -accelerator $aymainshortcuts(Material)

    bind $w <[repcont $aymainshortcuts(Master)]> "$m invoke 16"
    $m entryconfigure 16 -accelerator $aymainshortcuts(Master)


    bind $w <[repcont $aymainshortcuts(Prefs)]> "$m invoke 18"
    $m entryconfigure 18 -accelerator $aymainshortcuts(Prefs)

    set m $ay(toolsmenu)
    bind $w <[repcont $aymainshortcuts(LastTool)]> "$m invoke 0"
    $m entryconfigure 0 -accelerator $aymainshortcuts(LastTool)


    set m $ay(helpmenu)
    bind $w <[repcont $aymainshortcuts(Help)]> "$m invoke 0"
    $m entryconfigure 0 -accelerator $aymainshortcuts(Help)

    set m $ay(specialmenu)
    bind $w <[repcont $aymainshortcuts(Zap)]> zap
    $m entryconfigure 20 -accelerator $aymainshortcuts(Zap)

    bind $w <Map> unzap

    bind $w <[repcont $aymainshortcuts(RebuildTree)]> {
	global ay
	if { $ay(lb) == 0 } { tree_reset }
    }

    # bind function keys
    shortcut_fkeys $w

    bind $w <Enter> {
	global ayprefs
	if { $ayprefs(AutoFocus) == 1 } {
	    if { "%W" == "[winfo toplevel %W]" } {
		focus %W
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

    bind $w <[repcont $aymainshortcuts(SProp0)]> "plb_showprop 0"
    bind $w <[repcont $aymainshortcuts(SProp1)]> "plb_showprop 1"
    bind $w <[repcont $aymainshortcuts(SProp2)]> "plb_showprop 2"
    bind $w <[repcont $aymainshortcuts(SProp3)]> "plb_showprop 3"
    bind $w <[repcont $aymainshortcuts(SProp4)]> "plb_showprop 4"
    bind $w <[repcont $aymainshortcuts(SProp5)]> "plb_showprop 5"
    bind $w <[repcont $aymainshortcuts(SProp6)]> "plb_showprop 6"
    bind $w <[repcont $aymainshortcuts(SProp7)]> "plb_showprop 7"
    bind $w <[repcont $aymainshortcuts(SProp8)]> "plb_showprop 8"
    bind $w <[repcont $aymainshortcuts(SProp9)]> "plb_showprop 9"

    bind $w <[repcont $aymainshortcuts(SProp00)]> "plb_showprop 0"
    bind $w <[repcont $aymainshortcuts(SProp11)]> "plb_showprop 1"
    bind $w <[repcont $aymainshortcuts(SProp22)]> "plb_showprop 2"
    bind $w <[repcont $aymainshortcuts(SProp33)]> "plb_showprop 3"
    bind $w <[repcont $aymainshortcuts(SProp44)]> "plb_showprop 4"
    bind $w <[repcont $aymainshortcuts(SProp55)]> "plb_showprop 5"
    bind $w <[repcont $aymainshortcuts(SProp66)]> "plb_showprop 6"
    bind $w <[repcont $aymainshortcuts(SProp77)]> "plb_showprop 7"
    bind $w <[repcont $aymainshortcuts(SProp88)]> "plb_showprop 8"
    bind $w <[repcont $aymainshortcuts(SProp99)]> "plb_showprop 9"

    if { $AYWITHAQUA == 1 } {
	bind $w <Command-q> exit
    }

    bind $w <KeyPress-Control_L> "+set ay(ctrldown) 1"
    bind $w <KeyRelease-Control_L> "+set ay(ctrldown) 0"

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
    bind $w <[repcont $aymainshortcuts(Undo)]> "$m invoke 9"
    bind $w <[repcont $aymainshortcuts(Redo)]> "$m invoke 10"
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

    # some main window shortcuts
    set m $ay(helpmenu)
    bind $w <[repcont $aymainshortcuts(Help)]> "$m invoke 0;break"

    set m $ay(editmenu)
    bind $w <[repcont $aymainshortcuts(Undo)]> "$m invoke 12;break"
    bind $w <[repcont $aymainshortcuts(Redo)]> "$m invoke 13;break"
    bind $w <[repcont $aymainshortcuts(Material)]> "$m invoke 15;break"
    bind $w <[repcont $aymainshortcuts(Master)]> "$m invoke 16;break"

    # view window shortcuts
    set m $viewm
    bind $w <[repcont $ayviewshortcuts(QRender)]> "$m invoke 0;break"
    $m entryconfigure 0 -accelerator $ayviewshortcuts(QRender)
    bind $w <[repcont $ayviewshortcuts(Render)]> "$m invoke 1;break"
    $m entryconfigure 1 -accelerator $ayviewshortcuts(Render)
    bind $w <[repcont $ayviewshortcuts(Redraw)]> "$m invoke 3;break"
    $m entryconfigure 3 -accelerator $ayviewshortcuts(Redraw)

    bind $w <[repcont $aymainshortcuts(ExportRIB)]> "$m invoke 4;break"
    $m entryconfigure 4 -accelerator $aymainshortcuts(ExportRIB)
    if { [string first ".view" $w] == 0 } {
	global AYENABLEPPREV
	if { $AYENABLEPPREV == 1 } { set tmp 12 } else { set tmp 9 } 
	bind $w <[repcont $ayviewshortcuts(Close)]> "$m invoke $tmp"
	$m entryconfigure $tmp -accelerator $ayviewshortcuts(Close)
    }

    if { ([winfo toplevel $w] == $w) || $ayprefs(BindInternalViews) } {
	set m $typem
	bind $w <[repcont $ayviewshortcuts(Front)]> "$m invoke 0;break"
	$m entryconfigure 0 -accelerator $ayviewshortcuts(Front)
	bind $w <[repcont $ayviewshortcuts(Side)]> "$m invoke 1;break"
	$m entryconfigure 1 -accelerator $ayviewshortcuts(Side)
	bind $w <[repcont $ayviewshortcuts(Top)]> "$m invoke 2;break"
	$m entryconfigure 2 -accelerator $ayviewshortcuts(Top)
	bind $w <[repcont $ayviewshortcuts(Persp)]> "$m invoke 4;break"
	$m entryconfigure 4 -accelerator $ayviewshortcuts(Persp)
	bind $w <[repcont $ayviewshortcuts(Trim)]> "$m invoke 6;break"
	$m entryconfigure 6 -accelerator $ayviewshortcuts(Trim)
    }

    set m $confm
    bind $w <[repcont $ayviewshortcuts(Auto)]> "$m invoke 0;break"
    $m entryconfigure 0 -accelerator $ayviewshortcuts(Auto)
    
    #bind $w <[repcont $ayviewshortcuts(Shade)]> "$m invoke 1"
    #$m entryconfigure 1 -accelerator $ayviewshortcuts(Shade)
    bind $w <[repcont $ayviewshortcuts(Shade)]> "viewToggleDMode $w;break"

    bind $w <[repcont $ayviewshortcuts(DGrid)]> "$m invoke 10;break"
    $m entryconfigure 10 -accelerator $ayviewshortcuts(DGrid)
    bind $w <[repcont $ayviewshortcuts(UGrid)]> "$m invoke 11;break"
    $m entryconfigure 11 -accelerator $ayviewshortcuts(UGrid)
    bind $w <[repcont $ayviewshortcuts(SGrid)]> "$m invoke 12;break"
    $m entryconfigure 12 -accelerator $ayviewshortcuts(SGrid)
    if { ([winfo toplevel $w] == $w) } {
	bind $w <[repcont $ayviewshortcuts(Halve)]> "$m invoke 14;break"
	$m entryconfigure 14 -accelerator $ayviewshortcuts(Halve)
	bind $w <[repcont $ayviewshortcuts(Double)]> "$m invoke 15;break"
	$m entryconfigure 15 -accelerator $ayviewshortcuts(Double)
    }
    if { ([winfo toplevel $w] == $w) || $ayprefs(BindInternalViews) } {
	$m entryconfigure 21 -accelerator $ayviewshortcuts(ZoomTO)
	bind $w <[repcont $ayviewshortcuts(ZoomTO)]> "$m invoke 21;break"

	$m entryconfigure 22 -accelerator $ayviewshortcuts(Align)
	bind $w <[repcont $ayviewshortcuts(Align)]> "$m invoke 22;break"
    }

    #set m $ay(mmodem)
    #$m entryconfigure 1 -accelerator $ayviewshortcuts(Local)
    #bind $w <[repcont $ayviewshortcuts(Local)]> "$m invoke 1;break"
    if { ([winfo toplevel $w] == $w) || $ayprefs(BindInternalViews) } {
	bind $w <[repcont $ayviewshortcuts(Local)]> "viewToggleMMode $w;break"
    }

    bind $w <[repcont $ayviewshortcuts(RotL)]>\
	    "$w.f3D.togl setconf -undrotx 1 -drotx 5.0 -droty 0.0;break"
    bind $w <[repcont $ayviewshortcuts(RotR)]>\
	    "$w.f3D.togl setconf -undrotx 1 -drotx -5.0 -droty 0.0;break"
    bind $w <[repcont $ayviewshortcuts(RotU)]>\
	    "$w.f3D.togl setconf -undroty 1 -droty -5.0 -drotx 0.0;break"
    bind $w <[repcont $ayviewshortcuts(RotD)]>\
	    "$w.f3D.togl setconf -undroty 1 -droty 5.0 -drotx 0.0;break"

    bind $w <[repcont $ayviewshortcuts(ZoomI)]>\
	    "$w.f3D.togl setconf -dzoom 0.9;break"

    bind $w <[repcont $ayviewshortcuts(ZoomO)]>\
	    "$w.f3D.togl setconf -dzoom 1.1;break"

    bind $w <[repcont $ayviewshortcuts(SelAllP)]>\
	    "selPoints; rV;break"
    bind $w <[repcont $ayviewshortcuts(InvSelP)]>\
	    "invSelPoints; rV;break"

    bind $w <[repcont $ayviewshortcuts(CollP)]>\
	    "collMP; rV;break"
    bind $w <[repcont $ayviewshortcuts(ExplP)]>\
	    "explMP; rV;break"

    bind $w <[repcont $ayviewshortcuts(SnapGrid2D)]>\
	    "actionSnapToGrid2D $w.f3D.togl;break"
    bind $w <[repcont $ayviewshortcuts(SnapGrid3D)]>\
	    "actionSnapToGrid3D $w.f3D.togl;break"

    set m $ay(toolsmenu)
    bind $w <[repcont $ayviewshortcuts(Hide)]>\
	    "$m invoke 8;break"
    bind $w <[repcont $ayviewshortcuts(Show)]>\
	    "$m invoke 10;break"


    bind $w <[repcont $aymainshortcuts(Zap)]> zap
    bind $w <Map> unzap

    # bind function keys
    shortcut_fkeys $w

    if { $AYWITHAQUA == 1 } {
	bind $w <Command-q> exit
    }

    bind $w <KeyPress-Control_L> "+set ay(ctrldown) 1"
    bind $w <KeyRelease-Control_L> "+set ay(ctrldown) 0"

 return;
}
# shortcut_view


# shortcut_viewactions:
# Setup action-keybindings for a 3D-View.
proc shortcut_viewactions { w } {
 global ayviewshortcuts

    set i  $ayviewshortcuts(RotButton)

    # this binding allows to rotate any view regardless
    # of any active action; the old active action will
    # be re established again once the mouse button is released
    bind $w.f3D.togl <$ayviewshortcuts(RotMod)-ButtonPress-${i}> {
	global ayviewshortcuts

	set i  $ayviewshortcuts(RotButton)

	undo save RotView

	set oldx %x
	set oldy %y
	# save old bindings
	set ay(oldbinding) [bind %W <B${i}-Motion>]
	set ay(oldb1binding) [bind %W <ButtonPress-${i}>]
	set ay(oldb1rbinding) [bind %W <ButtonRelease-${i}>]
	bind %W <ButtonPress-${i}> { #nothing }
	bind %W <ButtonRelease-${i}> { #nothing }
	shortcut_modrotatebinding %W

	bind %W <ButtonRelease-${i}> {
	    # restore old bindings
	    bind %W <ButtonRelease-${i}> { #nothing }
	    bind %W <B${i}-Motion> $ay(oldbinding)
	    bind %W <ButtonPress-${i}> $ay(oldb1binding)
	    bind %W <ButtonRelease-${i}> $ay(oldb1rbinding)
	}
	break;
    }

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
	$w configure -cursor left_ptr
    }

    set i $ayviewshortcuts(ZoomRButton)

    # this binding allows to zoom into a region of any
    # view regardless of any active action
    bind $w.f3D.togl <$ayviewshortcuts(ZoomRMod)-ButtonPress-${i}> {
	set oldx %x
	set oldy %y
	shortcut_modzoomrbinding %W
	break;
    }
    bind $w <KeyPress-$ayviewshortcuts(ZoomRModKey)> {
	global ay ayviewshortcuts
	set i $ayviewshortcuts(ZoomRButton)
	if { $ay(zoomr) == 0 } {
	    set ay(zoomr) 1
	    update
	    if { [string first ".view" %W] != 0 } {
		set w %W.f3D.togl
	    } else {
		set w [winfo toplevel %W].f3D.togl
	    }
	    $w configure -cursor sizing
	    # save old bindings
	    set ay(oldbinding) [bind $w <B${i}-Motion>]
	    set ay(oldb1binding) [bind $w <ButtonPress-${i}>]
	    set ay(oldb1rbinding) [bind $w <ButtonRelease-${i}>]
	    set oldx -1
	    set oldy -1
	    # the following binding allows to start actions with
	    # the shift key held down (e.g. scale-3D using shift+s)
	    if { [string first ".view" %W] != 0 } {
		set w %W
	    } else {
		set w [winfo toplevel %W]
	    }
	    bind $w <KeyRelease> {
		if { [string first ".view" %W] != 0 } {
		    set w %W.f3D.togl
		} else {
		    set w [winfo toplevel %W].f3D.togl
		}
		# save old bindings
		set ay(oldbinding) [bind $w <B${i}-Motion>]
		set ay(oldb1binding) [bind $w <ButtonPress-${i}>]
		set ay(oldb1rbinding) [bind $w <ButtonRelease-${i}>]
	    }
	}
    }
    bind $w <KeyRelease-$ayviewshortcuts(ZoomRModKey)> {
	global ay ayviewshortcuts
	set i $ayviewshortcuts(ZoomRButton)
	set ay(zoomr) 0
	if { [string first ".view" $w] != 0 } {
	    set w %W.f3D.togl
	} else {
	    set w [winfo toplevel %W].f3D.togl
	}
	if { $oldx != -1 } {
	    $w setconf -rect $oldx $oldy %x %y 0
	}
	# restore old bindings
	bind $w <ButtonRelease-${i}> { #nothing }
	bind $w <B${i}-Motion> $ay(oldbinding)
	bind $w <ButtonPress-${i}> $ay(oldb1binding)
	bind $w <ButtonRelease-${i}> $ay(oldb1rbinding)
	$w configure -cursor left_ptr
	if { [string first ".view" %W] != 0 } {
	    set w %W
	} else {
	    set w [winfo toplevel %W]
	}
	bind $w <KeyRelease> ""
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

    
    bind $w.f3D.togl <ButtonPress-4> {
	undo save ZoomView
	%W mc
	%W setconf -dzoom $::ayprefs(WheelZoom)
	update
	%W reshape
	%W render
    }


    bind $w.f3D.togl <ButtonPress-5> {
	undo save ZoomView
	%W mc
	%W setconf -dzoom [expr 1.0/$::ayprefs(WheelZoom)]
	update
	%W reshape
	%W render
    }

    global tcl_platform AYWITHAQUA
    if { ($tcl_platform(platform) == "windows") } {
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
	}
    }
    # if

    if { $AYWITHAQUA } {
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
    bind $w <$ayviewshortcuts(RotA)> "actionRotObA $w.f3D.togl"
    bind $w <$ayviewshortcuts(ScalX)> "actionSc1DXOb $w.f3D.togl"
    bind $w <$ayviewshortcuts(ScalY)> "actionSc1DYOb $w.f3D.togl"
    bind $w <$ayviewshortcuts(ScalZ)> "actionSc1DZOb $w.f3D.togl"
    bind $w <$ayviewshortcuts(Scal2)> "actionSc2DOb $w.f3D.togl"
    bind $w <$ayviewshortcuts(Scal3)> "actionSc3DOb $w.f3D.togl"
    bind $w <$ayviewshortcuts(Stretch)> "actionStr2DOb $w.f3D.togl"
    bind $w <$ayviewshortcuts(Edit)> "actionEditP $w.f3D.togl"
    bind $w <$ayviewshortcuts(EditD)> "actionDEditP $w.f3D.togl"
    bind $w <$ayviewshortcuts(WeightE)> "actionEditWP $w.f3D.togl"
    bind $w <$ayviewshortcuts(WeightR)> "actionResetWP $w.f3D.togl"

    bind $w <$ayviewshortcuts(Select)> "actionTagP $w.f3D.togl"
    bind $w <$ayviewshortcuts(DeSelect)> "actionDelTagP $w.f3D.togl"
    bind $w <$ayviewshortcuts(InsertP)> "actionInsertP $w.f3D.togl"
    bind $w <$ayviewshortcuts(DeleteP)> "actionDeleteP $w.f3D.togl"
    bind $w <$ayviewshortcuts(FindU)> "actionFindU $w.f3D.togl"
    bind $w <$ayviewshortcuts(SplitNC)> "actionSplitNC $w.f3D.togl"
    bind $w <$ayviewshortcuts(Pick)> "actionPick $w.f3D.togl"

 return;
}
# shortcut_viewactions


#shortcut_modrotatebinding:
# Setup key bindings for rotation of a 3D-View while
# a modifier key (e.g. Alt) is held down.
proc shortcut_modrotatebinding { w } {
    global ayviewshortcuts
    set i $ayviewshortcuts(RotButton)
    bind $w <B${i}-Motion> {
	%W setconf -drotx [expr ($oldx - %x)] -droty [expr ($oldy - %y)]
	set oldx %x
	set oldy %y
	update
	break;
    }
 return;
}
# shortcut_modrotatebinding


#shortcut_modzoomrbinding:
# Setup key bindings for zooming into a region of
# a 3D-View with a modifier key (e.g. Ctrl) held down.
proc shortcut_modzoomrbinding { w } {
    global ayviewshortcuts

    set i $ayviewshortcuts(ZoomRButton)

    bind $w <ButtonRelease-${i}> {

	undo save ZoomRView

	%W setconf -zrect 1 -rect $oldx $oldy %x %y 0
	%W redraw

	update
    }
    bind $w <B${i}-Motion> {
	%W setconf -rect $oldx $oldy %x %y 1
    }

 return;
}
# shortcut_modzoomrbinding


#shortcut_show:
# display all current shortcuts in a separate top level window
proc shortcut_show { } {
global ay aymainshortcuts ayviewshortcuts tcl_platform

set w .ayscw

catch {destroy $w}
toplevel $w -class ayam
wm title $w "Ayam Shortcuts"
wm iconname $w "Ayam"
if { $ay(ws) == "Aqua" } {
    winMakeFloat $w
} else {
    #XXXX make this window transient?
    #wm transient $w .
}
frame $w.ftext

frame $w.fbutton
pack $w.fbutton -in $w -side bottom
button $w.fbutton.b -text "Dismiss" -pady $ay(pady) -command "destroy $w"
pack $w.fbutton.b -in $w.fbutton

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
	-setgrid 1 -font $font -height 20 -width 40
# -tabs {32c left}
scrollbar $w.ftext.sbar -takefocus 0 -command "$w.ftext.text yview"

pack $w.ftext.sbar -in $w.ftext -side right -fill y
pack $w.ftext.text -in $w.ftext -side left -fill both -expand yes

$w.ftext.text insert end "Modelling Actions (View Windows):

 Move Objects:        $ayviewshortcuts(MoveO)
 Rotate Objects:      $ayviewshortcuts(RotO)
 Rotate Objects   
 around Point:        $ayviewshortcuts(RotA)
 Scale Objects (3D)   $ayviewshortcuts(Scal3)
 Scale Objects (2D)   $ayviewshortcuts(Scal2)
 Stretch Objects (2D) $ayviewshortcuts(Stretch)
 Scale Objects (1D,X) $ayviewshortcuts(ScalX)
 Scale Objects (1D,Y) $ayviewshortcuts(ScalY)
 Scale Objects (1D,Z) $ayviewshortcuts(ScalZ)

 Edit Points          $ayviewshortcuts(Edit)
 Edit Points (direct) $ayviewshortcuts(EditD)
 Edit Weight          $ayviewshortcuts(WeightE)
 Reset Weights        $ayviewshortcuts(WeightR)

 Select Points        $ayviewshortcuts(Select)
 De-Select Points     $ayviewshortcuts(DeSelect)
 Insert Points        $ayviewshortcuts(InsertP)
 Delete Points        $ayviewshortcuts(DeleteP)

 Select All Points    $ayviewshortcuts(SelAllP)
 Invert PointSel      $ayviewshortcuts(InvSelP)
 Collapse Selected    $ayviewshortcuts(CollP)
 Explode Selected     $ayviewshortcuts(ExplP)
 Snap to Grid 2D      $ayviewshortcuts(SnapGrid2D)
 Snap to Grid 3D      $ayviewshortcuts(SnapGrid3D)

 Hide Objects         $ayviewshortcuts(Hide)
 Show Objects         $ayviewshortcuts(Show)

 FindU                $ayviewshortcuts(FindU)
 Split Curve          $ayviewshortcuts(SplitNC)

View Actions (View Windows):

 Break Action        $ayviewshortcuts(Break)

 Move View           $ayviewshortcuts(MoveV)
 Move View
 (along Z)           $ayviewshortcuts(MoveZV)
 Move View           Mouse-$ayviewshortcuts(MoveVButton)

 Rotate View         $ayviewshortcuts(RotV)
 Rotate View         $ayviewshortcuts(RotModKey)+Mouse-1

 Rotate View (left)  $ayviewshortcuts(RotL)
 Rotate View (right) $ayviewshortcuts(RotR)
 Rotate View (up)    $ayviewshortcuts(RotU)
 Rotate View (down)  $ayviewshortcuts(RotD)

 Zoom View           $ayviewshortcuts(ZoomV)
 Zoom in View        $ayviewshortcuts(ZoomI)
 Zoom out View       $ayviewshortcuts(ZoomO)
 Zoom View           Mouse-$ayviewshortcuts(ZoomVButton)

 ZoomRegion View     $ayviewshortcuts(ZoomRModKey)+Mouse-1

Function Keys (View Windows):

 Adjust NURBS Sampling Rate: ${aymainshortcuts(SetSTL)} / ${aymainshortcuts(SetSTP)}
 Toggle Wire/NURBS:          ${aymainshortcuts(SwWire)} / ${aymainshortcuts(SwNURBS)}
 Toggle Lazy Notification    ${aymainshortcuts(SwLazyNotify)} 


See the reference card in the docs
folder for a printable and more
complete version.
"

# disabling the widget on Win32 prohibits selection/focus
# and thus the mouse wheel does not work, the downside is
# that now, the user is able to edit the text (on Win32)
if { $tcl_platform(platform) != "windows" } {
    $w.ftext.text configure -state disabled
}

bind $w <Next> "$w.ftext.text yview scroll 1 pages"
bind $w <Prior> "$w.ftext.text yview scroll -1 pages"

bind $w.ftext.text <ButtonPress-4>\
"$w.ftext.text yview scroll -1 pages; break"

bind $w.ftext.text <ButtonPress-5>\
"$w.ftext.text yview scroll 1 pages; break"

 return;
}
# shortcut_show
