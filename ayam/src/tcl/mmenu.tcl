# Ayam, a free 3D modeler for the RenderMan interface.
#
# Ayam is copyrighted 1998-2005 by Randolf Schultz
# (randolf.schultz@gmail.com) and others.
#
# All rights reserved.
#
# See the file License for details.

# mmenu.tcl - the main menu

# mmenu_open:
#  create the Ayam main application menu
#
proc mmenu_open { w } {

global ay AYWITHAQUA

if { ! $AYWITHAQUA } {
    frame $w.fMenu -bd 2 -relief raised
    pack $w.fMenu -side top -fill both -expand no
    # File
    menubutton $w.fMenu.fil -text "File" -menu $w.fMenu.fil.m -padx 3\
	-underline 0

    menu $w.fMenu.fil.m -tearoff 0
    set m $w.fMenu.fil.m
} else {
    set mb [menu $w.menubar -tearoff 0 -type menubar]
    . configure -menu $mb

    # correct application menu (about entry)
    menu $w.menubar.apple
    $w.menubar add cascade -menu $w.menubar.apple
    $w.menubar.apple add command -label "About Ayam" -command "aboutAyam"

    # File
    set m [menu $mb.mfil -tearoff 0]
    $mb add cascade -label "File" -menu $m -underline 0
}
# if

set ay(filemenu) $m

$m add command -label "New"\
	-command {
    global ay ayprefs tcl_platform
    if { ! [io_warnChanged] } {
	update; selOb; cS; plb_update; newScene; uS;
	if { ($ayprefs(EnvFile) != "") && $ayprefs(NewLoadsEnv) == 1 } {
	    viewCloseAll; cS; plb_update
	    set filename [file nativename $ayprefs(EnvFile)]
	    if { $tcl_platform(platform) == "windows" } {
		regsub -all {\\} $filename {/} filename
	    }
	    catch {replaceScene $filename}
	    update
	}
	set ay(filename) ""
	wm title . "Ayam - Main - : --"
	goTop
	set ay(CurrentLevel) "root"
	set ay(SelectedLevel) "root"
	update
	uS
	update
	set ay(sc) 0
	update
	foreach view $ay(views) { viewBind $view }
	update
	rV
	after idle viewMouseToCurrent
    }
}
$m add separator
$m add command -label "Open" -command {
    if { ! [io_warnChanged] } {
	io_replaceScene
    }
}
$m add command -label "Insert" -command "io_insertScene"
$m add separator
$m add command -label "Save as" -command "io_saveScene ask 0"
$m add command -label "Save" -command "io_saveScene dontask 0"
$m add separator
$m add cascade -menu $m.im -label "Import"
menu $m.im -tearoff 0
set ay(im) $m.im
$m add separator
$m add cascade -menu $m.ex -label "Export"
menu $m.ex -tearoff 0
set ay(em) $m.ex
$m.ex add command -label "RenderMan RIB" -command "io_exportRIB"
$m add separator
$m add command -label "Load Plugin" -command "io_loadCustom"
$m add separator
$m add command -label "Save Prefs" -command "prefs_save"
$m add separator
global ayprefs
set label "1. [lindex $ayprefs(mru) 0]"
$m add command -label $label -command { global ay
if { ! [io_warnChanged] } {io_mruLoad 0}}
set label "2. [lindex $ayprefs(mru) 1]"
$m add command -label $label -command { global ay
if { ! [io_warnChanged] } {io_mruLoad 1}}
set label "3. [lindex $ayprefs(mru) 2]"
$m add command -label $label -command { global ay
if { ! [io_warnChanged] } {io_mruLoad 2}}
set label "4. [lindex $ayprefs(mru) 3]"
$m add command -label $label -command { global ay
if { ! [io_warnChanged] } {io_mruLoad 3}}
$m add separator
$m add command -label "Exit!" -command io_exit


if { ! $AYWITHAQUA } {
    pack $w.fMenu.fil -in $w.fMenu -side left

    # Edit
    menubutton $w.fMenu.ed -text "Edit" -menu $w.fMenu.ed.m -padx 3\
	-underline 0
    menu $w.fMenu.ed.m  -tearoff 0
    set m $w.fMenu.ed.m
} else {
    # Edit
    set m [menu $mb.medi -tearoff 0]
    $mb add cascade -label "Edit" -menu $m -underline 0

}
set ay(editmenu) $m
$m add command -label "Copy" -command {copOb}
$m add command -label "Cut" -command {cutOb; cS;
global ay; set ay(ul) $ay(CurrentLevel); uS; rV; set ay(sc) 1}
$m add command -label "Paste" -command {pasOb; cS;
global ay; set ay(ul) $ay(CurrentLevel); uS; rV; set ay(sc) 1}
$m add command -label "Delete" -command {delOb; cS;
global ay; set ay(ul) $ay(CurrentLevel); uS; rV; set ay(sc) 1}
$m add separator
$m add command -label "Select All" -command {
    global ay
    if { $ay(lb) == 0 } {
	set tree $ay(tree)
	set nodes [$tree nodes $ay(CurrentLevel)]

	if { $ay(CurrentLevel) == "root" } {
	    set nodes [lrange $nodes 1 end]
	}
	if { [llength $nodes] > 0 } {
	    eval [subst "$tree selection set $nodes"]
	    eval [subst "treeSelect $nodes"]
	}
	plb_update
	if { $ay(need_redraw) } {
	    rV
	}
    } else {
	$ay(olbball) invoke
	break
    }
}
$m add command -label "Select None" -command {
    cS
    plb_update
    if { $ay(need_redraw) == 1 } {
	rV
    }
}
$m add separator
$m add command -label "Copy Property" -command {pclip_copy 0}
$m add command -label "Copy Marked Prop" -command {pclip_copy 1}
$m add command -label "Paste Property" -command {global ay;
pclip_paste; set ay(sc) 1}
$m add separator
$m add command -label "Undo" -command {undo; uCL cl "0 1"; plb_update; rV}
$m add command -label "Redo" -command {undo redo; uCL cl "0 1"; plb_update; rV}
$m add separator
$m add command -label "Material" -command {material_edit;}
$m add command -label "Master" -command {instance_edit;}
$m add separator
$m add command -label "Preferences" -command {prefs_open; rV}

if { ! $AYWITHAQUA } {
    pack $w.fMenu.ed -in $w.fMenu -side left

    # Create
    menubutton $w.fMenu.cr -text "Create" -menu $w.fMenu.cr.m -padx 3\
	-underline 0
    menu $w.fMenu.cr.m -tearoff 0
    set m $w.fMenu.cr.m
} else {
    # Create
    set m [menu $mb.mcrt -tearoff 0]
    $mb add cascade -label "Create" -menu $m -underline 0
}

set ay(createmenu) $m

$m add cascade -menu $m.cu -label "Curve"
menu $m.cu -tearoff 0
$m.cu add command -label "NURBCurve" -command {
    runTool ay(nclen) "Length:" \
	"crtOb NCurve -length %0; uCR; sL; forceNot; rV;"
}
$m.cu add command -label "ICurve" -command {
    runTool ay(iclen) "Length:" \
	"crtOb ICurve -length %0; uCR; sL; forceNot; rV;"
}
$m.cu add command -label "ACurve" -command {
    runTool ay(iclen) "Length:" \
	"crtOb ACurve -length %0; uCR; sL; forceNot; rV;"
}
$m.cu add command -label "NCircle" -command {
    crtOb NCircle; uCR; sL; forceNot; rV;
}
$m add cascade -menu $m.su -label "Surface"
menu $m.su -tearoff 0
$m.su add command -label "NURBPatch" -command {
    runTool {ay(npwidth) ay(npheight)} {"Width:" "Height:"} \
	"crtOb NPatch -width %0 -height %1; uCR; sL; forceNot; rV;"
}
$m.su add command -label "BPatch" -command {
    crtOb BPatch; uCR; sL; forceNot; rV;
}
$m.su add command -label "PatchMesh" -command {
    runTool {ay(pmwidth) ay(pmheight)} {"Width:" "Height:"}\
	"crtOb PatchMesh -width %0 -height %1; uCR; sL; forceNot; rV;"
}

$m add cascade -menu $m.sl -label "Solid"
menu $m.sl -tearoff 0
$m.sl add command -label "Box"\
    -command "crtOb Box; uCR; sL; forceNot; rV;"
$m.sl add command -label "Sphere"\
-command "crtOb Sphere; uCR; sL; forceNot; rV;"
$m.sl add command -label "Disk"\
-command "crtOb Disk; uCR; sL; forceNot; rV;"
$m.sl add command -label "Cone"\
-command "crtOb Cone; uCR; sL; forceNot; rV;"
$m.sl add command -label "Cylinder"\
-command "crtOb Cylinder; uCR; sL; forceNot; rV;"
$m.sl add command -label "Torus"\
-command "crtOb Torus; uCR; sL; forceNot; rV;"
$m.sl add command -label "Hyperboloid"\
-command "crtOb Hyperboloid; uCR; sL; forceNot; rV;"
$m.sl add command -label "Paraboloid"\
-command "crtOb Paraboloid;  uCR; sL; forceNot; rV;"

$m add cascade -menu $m.csg -label "Level"
menu $m.csg -tearoff 0
$m.csg add command -label "Level"\
-command "crtOb Level 1; uCR; sL; forceNot; rV;"
$m.csg add separator
$m.csg add command -label "Union"\
-command "crtOb Level 2; uCR; sL; forceNot; rV;"
$m.csg add command -label "Intersection"\
-command "crtOb Level 4; uCR; sL; forceNot; rV;"
$m.csg add command -label "Difference"\
-command "crtOb Level 3; uCR; sL; forceNot; rV;"
$m.csg add separator
$m.csg add command -label "Primitive"\
-command "crtOb Level 5; uCR; sL; forceNot; rV;"

$m add command -label "Light" -command "crtOb Light; uCR; sL; forceNot; rV;"
$m add separator
$m add cascade -menu $m.cus -label "Custom Object"
menu $m.cus -tearoff 0

$m add separator
$m add command -label "View" \
	-command "viewOpen 400 300; global ay; set ay(ul) root:0; uS 0 1; rV;"
$m add separator
$m add command -label "Instance" \
	-command "crtOb Instance; uCR; sL; forceNot; rV;"
$m add command -label "Clone" -command "level_crt Clone;"
$m add command -label "Mirror" -command "level_crt Clone \"-mirror 1\";"
$m add command -label "Material" \
	-command "material_createp;"
$m add command -label "Camera" \
	-command "crtOb Camera; uCR; sL; forceNot; rV;"
$m add command -label "RiInc" \
	-command "crtOb RiInc; uCR; sL; forceNot; rV;"
$m add command -label "RiProc" \
	-command "crtOb RiProc; uCR; sL; forceNot; rV;"
$m add command -label "Script" \
	-command "crtOb Script; uCR; sL; forceNot; rV;"
$m add command -label "Select" \
	-command "crtOb Select; uCR; sL; forceNot; rV;"
$m add command -label "Text" \
	-command "crtOb Text; uCR; sL; forceNot; rV;"

if { ! $AYWITHAQUA } {
    pack $w.fMenu.cr -in $w.fMenu -side left

    # Tools
    menubutton $w.fMenu.tool -text "Tools" -menu $w.fMenu.tool.m -padx 3\
	-underline 0
    set m [menu $w.fMenu.tool.m -tearoff 0]
} else {
    # Tools
    set m [menu $mb.mtools -tearoff 0]
    $mb add cascade -label "Tools" -menu $m -underline 0
}

set ay(toolsmenu) $m
$m add command -label "Last (None)"
$m add separator
$m add cascade -menu $m.nc -label "Create"
menu $m.nc -tearoff 0
$m.nc add command -label "ClosedBSpline" -command {
    runTool {ay(cbspnum) ay(cbsporder)} {"NumPoints:" "Order:"}\
	"crtClosedBS %0 %1; uCR; sL; forceNot; rV;"
}
$m.nc add command -label "NURBCircle" -command {
    runTool {ay(ncircradius) ay(ncircarc)} {"Radius:" "Arc:"}\
	    "crtNCircle -r %0 -a %1; uCR; sL; forceNot; rV;"
}
$m.nc add command -label "TrimRect" -command {
    crtNRect; set ay(ul) $ay(CurrentLevel); uS 0 1; rV}

$m.nc add separator

$m.nc add command -label "ConcatNC" -command "level_crt ConcatNC;"
$m.nc add command -label "OffsetNC" -command "level_crt OffsetNC \"\" -1;"
$m.nc add command -label "ExtrNC" -command "level_crt ExtrNC \"\" -1;"

$m.nc add separator

$m.nc add command -label "ExtrNP" -command "level_crt ExtrNP \"\" -1;"
$m.nc add command -label "NURBSphere" -command {
    runTool ay(nsphereradius) "Radius:" \
	"crtNSphere -r %0; uCR; sL; forceNot; rV;"
    }
$m.nc add command -label "NURBSphere2" -command {
    crtNSphere2; uCR; sL; forceNot; rV}
$m.nc add separator
$m.nc add command -label "Revolve" -command "level_crt Revolve;"
$m.nc add command -label "Extrude" -command "level_crt Extrude;"
$m.nc add command -label "Sweep" -command "level_crt Sweep;"
$m.nc add command -label "Swing" -command "level_crt Swing;"
$m.nc add command -label "Cap" -command "level_crt Cap;"
$m.nc add command -label "Bevel" -command "level_crt Bevel;"
$m.nc add command -label "Birail1" -command "level_crt Birail1;"
$m.nc add command -label "Birail2" -command "level_crt Birail2;"
$m.nc add command -label "Gordon" -command "level_crt Gordon;"
$m.nc add command -label "Skin" -command "level_crt Skin;"
$m.nc add command -label "Trim" -command "level_crt Trim;"

$m add separator

$m add cascade -menu $m.nct -label "NURBCurve"
menu $m.nct -tearoff 0

$m.nct add command -label "Revert" -command { undo save Revert; revert;
                                              plb_update; rV }
$m.nct add command -label "Open" -command { undo save Open;
                                            ncurve_open;
                                            plb_update; rV }
$m.nct add command -label "Close" -command { undo save Close;
                                            ncurve_close;
                                            plb_update; rV }
$m.nct add command -label "Make Periodic" -command { undo save "Make Periodic";
                                            ncurve_makeperiodic;
                                            plb_update; rV }
$m.nct add command -label "Concat" -command { concatNC; uCR; rV}
$m.nct add command -label "Split" -command {
runTool ay(splitu) {"Split at:"} "undo save Split; splitNC %0; uCR; sL; rV" }
$m.nct add command -label "Trim" -command {
    runTool [list ay(trimumin) ay(trimumax)]\
	    [list "UMin:" "UMax:"]\
            "undo save TrimNC; trimNC %0 %1; plb_update; rV" }
$m.nct add command -label "Refine" -command { undo save Refine; refineNC;
                                              plb_update; rV }
$m.nct add command -label "Coarsen" -command { undo save Coarsen; coarsenNC;
                                              plb_update; rV }
$m.nct add command -label "Refine with" -command { runTool ay(refinekn) {"New Knots:"} "undo save Refine; refineNC \{%0\}; plb_update; rV" }
$m.nct add command -label "Clamp" -command { undo save Clamp; clampNC;
                                             plb_update; rV }
$m.nct add command -label "Elevate" -command {
    runTool ay(elevd) {"Elevate by:"}\
	    "undo save Elevate; elevateNC %0; plb_update; rV" }
$m.nct add command -label "Insert Knot" -command {
    runTool [list ay(insknu) ay(insknr)]\
	    [list "Insert knot at:" "Insert times:"]\
	    "undo save InsKn; insknNC %0 %1; plb_update; rV" }
$m.nct add command -label "Remove Knot" -command {
    runTool [list ay(remknu) ay(remknr) ay(remtol)]\
	    [list "Remove knot at:" "Remove times:" "Tolerance:"]\
	    "undo save RemKn; remknNC %0 %1 %2; plb_update; rV" }
$m.nct add command -label "Plot Curvature" -command {
    runTool [list ay(curvatp) ay(curvatw) ay(curvats)]\
	    [list "Data points:" "Width:" "Scale Height:"]\
	    "curvPlot %0 %1 %2; uCR; rV" }
$m.nct add command -label "Shift BSpline" -command {
runTool ay(shiftcbsp) {"Times:"}\
	    "undo save ShiftClosedBS; shiftClosedBS %0; rV" }
$m.nct add command -label "To XY" -command {
    undo save ToXYNC; toXYNC; rV; }
$m.nct add command -label "Make Compatible" -command {
    undo save MakeCompNC; makeCompNC; rV; }
$m.nct add command -label "Rescale Knots to Range" -command {
    undo save RescaleKnots;
    runTool {ay(rmin) ay(rmax)} {"RangeMin:" "RangeMax:"}\
	    "rescaleKnNC -r %0 %1; plb_update;"
}
$m.nct add command -label "Rescale Knots to Mindist" -command {
    undo save RescaleKnots;
    runTool ay(mindist) "MinDist:"\
	    "rescaleKnNC -d %0; plb_update;"
}
$m.nct add command -label "Reset Weights" -command {
    if { $ay(views) != "" } {
	undo save ResetWeights
	[lindex $ay(views) 0].f3D.togl wrpac
	rV
    } else {
	ayError 2 "Reset_Weights" "Need an open view!"
    }
}

$m.nct add separator
$m.nct add command -label "Collapse Points" -command {collMP; rV; set ay(sc) 1}
$m.nct add command -label "Explode Points" -command {explMP; rV; set ay(sc) 1}

$m add separator

$m add cascade -menu $m.npt -label "NURBPatch"
menu $m.npt -tearoff 0
$m.npt add command -label "Revert U" -command {
    undo save RevertU; revertU; plb_update; rV}
$m.npt add command -label "Revert V" -command {
    undo save RevertV; revertV; plb_update; rV}
$m.npt add command -label "Swap UV" -command {
    undo save SwapUV; swapUV; plb_update; rV}

$m.npt add command -label "Close U" -command {
    undo save closeNPU; closeNPU; plb_update; rV}
$m.npt add command -label "Close V" -command {
    undo save closeNPV; closeNPV; plb_update; rV}

$m.npt add command -label "Split U" -command {
runTool ay(splitu) {"Split at:"} "undo save SplitNPU; splitNPU %0; uCR; sL; rV"
}

$m.npt add command -label "Split V" -command {
runTool ay(splitu) {"Split at:"} "undo save SplitNPV; splitNPV %0; uCR; sL; rV"
}

$m.npt add command -label "Clamp U" -command {
    undo save clampNPU; clampNPU; plb_update; rV}
$m.npt add command -label "Clamp V" -command {
    undo save clampNPV; clampNPV; plb_update; rV}
$m.npt add command -label "Clamp Both" -command {
    undo save clampNP; clampNPU; clampNPV; plb_update; rV}

$m.npt add command -label "Insert Knot U" -command {
    runTool [list ay(insknu) ay(insknr)]\
	    [list "Insert knot at:" "Insert times:"]\
	    "undo save InsKnU; insknNPU %0 %1; plb_update; rV" }

$m.npt add command -label "Insert Knot V" -command {
    runTool [list ay(insknu) ay(insknr)]\
	    [list "Insert knot at:" "Insert times:"]\
	    "undo save InsKnV; insknNPV %0 %1; plb_update; rV" }

$m.npt add command -label "Elevate UV" -command {
    runTool [list ay(elevnpu) ay(elevnpv)]\
	    [list "Elevate U by:" "Elevate V by:"]\
	    "undo save ElevateUV; elevateNPU %0; elevateNPV %1; plb_update; rV"
}

$m.npt add command -label "Extract Curve" -command "level_crt ExtrNC \"\" -1;"

$m.npt add command -label "Extract Patch" -command "level_crt ExtrNP \"\" -1;"

#    runTool [list ay(extrnpumin) ay(extrnpumax) ay(extrnpvmin) ay(extrnpvmax)]\
#	    [list "UMin:" "UMax:" "VMin:" "VMax:"]\
#	    "undo save extrNP; extrNP %0 %1 %2 %3; uCR; sL; rV"

$m.npt add command -label "Rescale Knots to Range U" -command {
    undo save RescaleKnots 1;
    runTool {ay(rmin) ay(rmax)} {"RangeMin:" "RangeMax:"}\
	    "rescaleKnNP -ru %0 %1; plb_update;"
}
$m.npt add command -label "Rescale Knots to Range V" -command {
    undo save RescaleKnots 1;
    runTool {ay(rmin) ay(rmax)} {"RangeMin:" "RangeMax:"}\
	    "rescaleKnNP -rv %0 %1; plb_update;"
}
$m.npt add command -label "Rescale Knots to Range Both" -command {
    undo save RescaleKnots 1;
    runTool {ay(rmin) ay(rmax)} {"RangeMin:" "RangeMax:"}\
	    "rescaleKnNP -r %0 %1; plb_update;"
}
$m.npt add command -label "Rescale Knots to Mindist U" -command {
    undo save RescaleKnots 1;
    runTool ay(mindist) "MinDist:"\
	    "rescaleKnNP -du %0; plb_update;"
}
$m.npt add command -label "Rescale Knots to Mindist V" -command {
    undo save RescaleKnots 1;
    runTool ay(mindist) "MinDist:"\
	    "rescaleKnNP -dv %0; plb_update;"
}
$m.npt add command -label "Rescale Knots to Mindist Both" -command {
    undo save RescaleKnots 1;
    runTool ay(mindist) "MinDist:"\
	    "rescaleKnNP -d %0; plb_update;"
}
$m.npt add command -label "Reset Weights" -command {
    if { $ay(views) != "" } {
	undo save ResetWeights
	[lindex $ay(views) 0].f3D.togl wrpac
	rV
    } else {
	ayError 2 "Reset_Weights" "Need an open view!"
    }
}

$m.npt add command -label "Tesselate" -command tgui_open
$m.npt add separator
$m.npt add command -label "Collapse Points" -command {collMP; rV; set ay(sc) 1}
$m.npt add command -label "Explode Points" -command {explMP; rV; set ay(sc) 1}
$m.npt add separator
$m.npt add command -label "Split to Curves (u)" -command {
    splitNP u; uS; sL; rV; set ay(sc) 1}
$m.npt add command -label "Split to Curves (v)" -command {
    splitNP v; uS; sL; rV; set ay(sc) 1}
$m.npt add command -label "Build from Curves" -command {
    buildNP; uCR; sL; rV; set ay(sc) 1}

$m add separator

$m add cascade -menu $m.pm -label "PolyMesh"
menu $m.pm -tearoff 0
$m.pm add command -label "Merge" -command { pomesh_merge }
$m.pm add command -label "Split" -command { pomesh_split }
$m.pm add command -label "Optimize" -command { pomesh_optimize }

$m add separator

$m add cascade -menu $m.pnt -label "Points"
set sm [menu $m.pnt -tearoff 0]
$sm add command -label "Select All Points" -command "selPoints;rV"
$sm add command -label "Invert Selection" -command "invSelPoints;rV"
$sm add command -label "Apply Trafo To All Points"\
	-command "undo save ApplyTr; applyTrafo all;\
	plb_update; forceNot; rV"
$sm add command -label "Apply Trafo To Selected Points"\
	-command "undo save ApplyTr; applyTrafo sel;\
	plb_update; forceNot; rV"
$sm add command -label "Center All Points (3D)"\
	-command "undo save CenterPnts; centerPnts;\
	plb_update; rV"
$sm add command -label "Center All Points (2D-XY)"\
	-command "undo save CenterPntsXY; centerPnts 1;\
	plb_update; rV"
$sm add command -label "Center All Points (2D-ZY)"\
	-command "undo save CenterPntsZY; centerPnts 2;\
	plb_update; rV"
$sm add command -label "Center All Points (2D-XZ)"\
	-command "undo save CenterPntsXZ; centerPnts 3;\
	plb_update; rV"

$m add separator

$m add command -label "Hide" -command {
    global ay
    undo save Hide
    hide
    set ay(ul) $ay(CurrentLevel); uS 1 1; rV
}
$m add command -label "Hide All" -command "hide -all; uS 1 1; rV"
$m add command -label "Show" -command {
    global ay
    undo save Show
    show
    set ay(ul) $ay(CurrentLevel); uS 1 1; rV
}
$m add command -label "Show All" -command "show -all; uS 1 1; rV"
$m add separator
$m add command -label "Convert" -command {
    global ay
    convOb; update; cS; set ay(ul) $ay(CurrentLevel); uS; rV; set ay(sc) 1
}
$m add command -label "Convert (In Place)" -command {
    global ay
    #undo save Convert;
    set ay(need_undo_clear) 0
    forAll 0 { if { [hasChild] } { set ::ay(need_undo_clear) 1 } }
    convOb -inplace; update
    if { $ay(need_undo_clear) } { undo clear }
    set ay(ul) $ay(CurrentLevel); uS 1 1; rV
}
$m add separator
$m add command -label "Force Notification" -command "forceNot; rV"
$m add separator
$m add command -label "Highlight Material" -command "material_highlight"

if { ! $AYWITHAQUA } {
    pack $w.fMenu.tool -in $w.fMenu -side left

    # Custom
    menubutton $w.fMenu.cust -text "Custom" -menu $w.fMenu.cust.m -padx 3\
	-underline 1
    menu $w.fMenu.cust.m -tearoff 0
    pack $w.fMenu.cust -in $w.fMenu -side left
    set ay(cm) $w.fMenu.cust.m
    # Special
    menubutton $w.fMenu.spec -text "Special" -menu $w.fMenu.spec.m -padx 3\
	-underline 0
    set m [menu $w.fMenu.spec.m -tearoff 0]
    pack $w.fMenu.spec -in $w.fMenu -side left

} else {
    # Custom
    set m [menu $mb.mcust -tearoff 0]
    $mb add cascade -label "Custom" -menu $m -underline 1
    set ay(cm) $m
    # Special
    set m [menu $mb.mspecial -tearoff 0]
    $mb add cascade -label "Special" -menu $m -underline 0
}
set ay(specialmenu) $m

$m add command -label "Save Selected as" -command "io_saveScene ask 1"
$m add command -label "Save Environment" -command "io_saveEnv"

$m add cascade -menu $m.clp -label "Clipboard"
set sm [menu $m.clp -tearoff 0]
$sm add command -label "Paste (Move)" -command {cmovOb; cS;
global ay; set ay(ul) $ay(CurrentLevel); uS; rV; set ay(sc) 1}
$sm add command -label "Replace" -command {repOb; cS;
global ay; set ay(ul) $ay(CurrentLevel); uS; rV; set ay(sc) 1}
$sm add command -label "Paste Property to Selected"\
    -command "pclip_pastetosel; forceNot; rV"

$m add cascade -menu $m.ins -label "Instances"
set sm [menu $m.ins -tearoff 0]
$sm add command -label "Resolve all Instances" -command "ai_resolve"
$sm add command -label "Automatic Instancing" -command "ai_open"


$m add cascade -menu $m.tag -label "Tags"
set sm [menu $m.tag -tearoff 0]
$sm add command -label "Add RiOption" -command "riopt_addp"
$sm add command -label "Add RiAttribute" -command "riattr_addp"
$sm add command -label "Edit TexCoords" -command "tc_edit"

#$m add command -label "Create ShadowMaps" -command "riopt_addp"

$m add cascade -menu $m.rib -label "RIB-Export"
set sm [menu $m.rib -tearoff 0]
$sm add command -label "From Camera" -command "io_exportRIBfC"
$sm add command -label "Selected Objects" -command "io_exportRIBSO"
$sm add command -label "Create All ShadowMaps" -command "io_RenderSM 1"
$sm add command -label "Create ShadowMap" -command "io_RenderSM 0"
$m add separator
$m add command -label "Enable Scripts" -command "script_enable"
$m add command -label "Select Renderer" -command "render_select"
$m add command -label "Scan Shaders" -command "shader_scanAll"
$m add command -label "Reset Preferences" -command "prefs_reset"
$m add separator
$m add command -label "Toggle Toolbox" -command "toolbox_toggle"
$m add command -label "Toggle TreeView" -command "tree_toggle"
$m add separator
$m add command -label "Zap Ayam" -command "zap"

if { ! $AYWITHAQUA } {
    # Help
    menubutton $w.fMenu.hlp -text "Help" -menu $w.fMenu.hlp.m -padx 3\
	-underline 0
    set m [menu $w.fMenu.hlp.m -tearoff 0]
    pack $w.fMenu.hlp -in $w.fMenu -side right

} else {
    # Help
    set m [menu $mb.help -tearoff 0]
    $mb add cascade -label "Help" -menu $m -underline 0
}
set ay(helpmenu) $m

$m add command -label "Help" -command {
    after idle {
	global ayprefs
	browser_urlOpen $ayprefs(Docs)
    }
}

$m add command -label "Help on object" -command {
    after idle {
	catch {
	    global ayprefs
	    set selected ""
	    getSel selected
	    if { $selected == "" } {
		ayError 2 "Help on object" "Please select an object!"
		return;
	    }
	    getType type
	    set type [string tolower $type]
	    if { [string first "file://" $ayprefs(Docs)] != -1 } {
		set lslash [string last "/" $ayprefs(Docs)]
		set url [string range \
			 $ayprefs(Docs) 0 $lslash]/ayam-4.html\#${type}obj
		browser_urlOpen $url
	    } else {
		browser_urlOpen $ayprefs(Docs)ayam-4.html\#${type}obj
	    }
	}
    }
}

$m add command -label "Help on property" -command {
    after idle {
	catch {
	    global ay ayprefs
	    set selected ""
	    getSel selected
	    if { $selected == "" } {
		ayError 2 "Help on property" "Please select an object!"
		return;
	    }

	    set lb $ay(plb)
	    set index [$lb curselection]
    
	    if { $index == "" } {
		ayError 2 "Help on property:" "No property selected!"
		return;
	    }

	    set type [$lb get $index]

	    set type [string tolower $type]
	    if { [string first "file://" $ayprefs(Docs)] != -1 } {
		set lslash [string last "/" $ayprefs(Docs)]
		set url [string range \
			 $ayprefs(Docs) 0 $lslash]/ayam-4.html\#${type}prop
		browser_urlOpen $url
	    } else {
		browser_urlOpen $ayprefs(Docs)ayam-4.html\#${type}prop
	    }
	}
    }
}

$m add command -label "Show Shortcuts" -command "shortcut_show"
$m add command -label "About" -command "aboutAyam"
$m add checkbutton -label "Show Tooltips" -variable ayprefs(showtt)


# XXXX Win32 Menus are a bit to tall
global tcl_platform
if { $tcl_platform(platform) == "windows" } {
    set children [winfo children $w.fMenu]
    foreach child $children {
	$child configure -pady 1
    }
}

mmenu_addlume $ay(toolsmenu).nc
mmenu_addlume $ay(toolsmenu).nct
mmenu_addlume $ay(toolsmenu).npt
mmenu_addlume $ay(toolsmenu).pm
mmenu_addlume $ay(toolsmenu).pnt
mmenu_addlume $ay(toolsmenu)

# add traces that change the undo menu entries according to the operations
# that can be undone or redone
trace variable ay(undoo) w mmenu_updateundo
trace variable ay(redoo) w mmenu_updateundo

return;
}
# mmenu_open


# mmenu_updateundo:
#  update undo main menu entries
proc mmenu_updateundo {n1 n2 op} {
    global ay
    $ay(editmenu) entryconfigure 12 -label "Undo ($ay(undoo))"
    $ay(editmenu) entryconfigure 13 -label "Redo ($ay(redoo))"
}
# mmenu_updateundo


# mmenu_addcustom:
#  XXXX add code to avoid creating double entries when
#  custom objects are overloaded?
proc mmenu_addcustom { name command } {
    global ay
    set m $ay(createmenu).cus
#    set m $w.fMenu.cr.m.cus
    $m add command -label $name -command $command

 return;
}
# mmenu_addcustom


# mmenu_addlume:
#  arrange for menu <m> to update the "last used tool" menu entry
#  when a command entry in this menu is used
proc mmenu_addlume { m } {
    global ay
    set i 0
    set last [$m index end]
    while { $i <= $last } {
	if { [$m type $i] == "command" } {
	    set newlabel "Last ("
	    append newlabel [$m entrycget $i -label]
	    append newlabel ")"
	    set cmd "$ay(toolsmenu) entryconfigure 0 -label \"$newlabel\" \
                     -command \{[$m entrycget $i -command]\};"
	    append cmd [$m entrycget $i -command]
	    $m entryconfigure $i -command $cmd
	}
	# if
	incr i
    }
    # while
 return;
}
# mmenu_addlume
