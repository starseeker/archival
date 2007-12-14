# Ayam, a free 3D modeler for the RenderMan interface.
#
# Ayam is copyrighted 1998-2005 by Randolf Schultz
# (rschultz@informatik.uni-rostock.de) and others.
#
# All rights reserved.
#
# See the file License for details.

# prop.tcl - handle standard properties

# Transformations property

array set Transformations {
arr   transfPropData
sproc setTrafo
gproc getTrafo
w     fTrafoAttr
}

# create Transformations-UI
set w [frame $ay(pca).$Transformations(w)]
addCommand $w c1 "Reset All!" {
global transfPropData
undo save ResetTrafos
set transfPropData(Translate_X) 0.0
set transfPropData(Translate_Y) 0.0
set transfPropData(Translate_Z) 0.0

set transfPropData(Scale_X) 1.0
set transfPropData(Scale_Y) 1.0
set transfPropData(Scale_Z) 1.0

set transfPropData(Rotate_X) 0.0
set transfPropData(Rotate_Y) 0.0
set transfPropData(Rotate_Z) 0.0

set transfPropData(Quat0) 0.0
set transfPropData(Quat1) 0.0
set transfPropData(Quat2) 0.0
set transfPropData(Quat3) 1.0
setTrafo
rV
}

addText $w e1 "Translation:"
addParam $w transfPropData Translate_X
addParam $w transfPropData Translate_Y
addParam $w transfPropData Translate_Z

addText $w e2 "Rotation:"
addParam $w transfPropData Rotate_X
addParam $w transfPropData Rotate_Y
addParam $w transfPropData Rotate_Z

addText $w e3 "Scale:"
addParam $w transfPropData Scale_X
addParam $w transfPropData Scale_Y
addParam $w transfPropData Scale_Z

addText $w e4 "Quaternion:"
addParam $w transfPropData Quat0
addParam $w transfPropData Quat1
addParam $w transfPropData Quat2
addParam $w transfPropData Quat3


# Attributes property

proc setAttrp { } {
    global attrPropData
    regsub -all " " $attrPropData(Objectname) "_" attrPropData(Objectname)
    setAttr
    uCL cl "0 1"
 return;
}

array set Attributes {
arr   attrPropData
sproc setAttrp
gproc getAttr
w     fAttrAttr

}

# create Attributes-UI
set w [frame $ay(pca).$Attributes(w)]
addString $w attrPropData Objectname
addCheck $w attrPropData Hide
addCheck $w attrPropData HideChildren
addInfo $w attrPropData RefCount


# Material property

array set Material {
arr   matPropData
sproc setMat
gproc getMat
w     fMatAttr

}
# create Material-UI
set w [frame $ay(pca).$Material(w)]
addCommand $w c1 "Clear Material!" {
    undo save ClrMat
    global matPropData; set matPropData(Materialname) ""
    setMat
    plb_update
}

addCommand $w c2 "Add/Edit Material!" {
    global ay
    set m $ay(editmenu)
    $m invoke 12
}

addString $w matPropData Materialname


# Tags property

# getTagsp:
#
proc getTagsp { } {
global ay ayprefs tagsPropData Tags tcl_platform

getTags names values
set tagsPropData(names) $names
set tagsPropData(values) $values

# create Tags-UI
catch {destroy $ay(pca).$Tags(w)}
set w [frame $ay(pca).$Tags(w)]
addCommand $w c0 "Remove all Tags!" {undo save RemTags;delTags all;plb_update}

set bw 1
set f [frame $w.fDelete -relief sunken -bd $bw]
menubutton $f.mb -text "Remove Tag!" -menu $f.mb.m -relief raised -bd $bw\
	-padx 0 -pady 1 -takefocus 1 -highlightthickness 1
eval [subst "bindtags $f.mb \{$f.mb Menubutton all\}"]
bind $f.mb <Key-Escape> {resetFocus}
if { $tcl_platform(platform) == "windows" } {
    $f.mb configure -pady 1
}
set m [menu $f.mb.m -tearoff 0]
pack $f.mb -in $f -side left -fill x -expand yes -pady 0
pack $f -in $w -side top -fill x

set i 0
set j 0
foreach tag $names {
    if { !$ayprefs(HideTmpTags) || ![tagIsTemp $tag] } {

	$m add command -label "Tag#$j ($tag)" -command\
		"undo save RemTag;setTags -delete $i;plb_update"

	incr j
    }
    incr i
}

addCommand $w c2 "Add Tag!" {addTagp}
set i 0
foreach tag $names {
    if { !$ayprefs(HideTmpTags) || ![tagIsTemp $tag] } {
	set val [lindex $values $i]
	set len [string length $val]
	if { $len > $ayprefs(MaxTagLen) } {
	    set val [string range $val 0 $ayprefs(MaxTagLen)]
	    set val "${val}..."
	}
	button $w.b$i -text "$tag: $val" -command "addTagp $i" -bd 1 -pady 0
	pack $w.b$i -fill x -expand yes
    }
    incr i
}
$ay(pca) itemconfigure 1 -window $w
plb_resize
}
# getTagsp


# setTagsp:
#
proc setTagsp { } {
global ay tagsPropData Tags

set names $tagsPropData(names)
set values $tagsPropData(values)
set alltags ""
set i 0
foreach tag $names {

lappend alltags $tag
lappend alltags [lindex $values $i]

incr i
}

if { [llength $alltags] > 0 } {
    eval [subst "setTags $alltags"]
}

}
# setTagsp


# editTagshelper:
#  used to edit tags
proc editTagshelper { index } {
 global tagsPropData
 undo save EditTag
 set tagsPropData(names) [lreplace $tagsPropData(names) $index $index [.addTag.fu.e get]]
 set tagsPropData(values) [lreplace $tagsPropData(values) $index $index [.addTag.fm.e get]]
 grab release .addTag
 focus .
 destroy .addTag
 setTagsp
 plb_update
}
#editTagshelper


# addTagp:
#  used to edit and add tags
proc addTagp { {edit -1} } {
global ay tagsPropData Tags

winAutoFocusOff

set w .addTag
catch {destroy $w}
toplevel $w -class ayam

if { $edit >= 0 } {
    wm title $w "Edit Tag"
} else {
    wm title $w "Add Tag"
}

wm iconname $w "Ayam"
wm transient $w .

set f [frame $w.fu]
label $f.lt -text "Type:" -width 6
entry $f.e -width 30
pack $f.lt -in $f -padx 2 -pady 2 -side left
pack $f.e -in $f -padx 2 -pady 2 -side left -fill x -expand yes
pack $f -in $w -side top -fill x -expand yes

if { $edit >= 0 } {
    $f.e insert 0 [lindex $tagsPropData(names) $edit]
}

set f [frame $w.fm]
label $f.lv -text "Value:" -width 6
entry $f.e -width 30
pack $f.lv -in $f -padx 2 -pady 2 -side left
pack $f.e -in $f -padx 2 -pady 2 -side left -fill x -expand yes
pack $f -in $w -side top -fill x -expand yes

if { $edit >= 0 } {
    $f.e insert 0 [lindex $tagsPropData(values) $edit]
}

set f [frame $w.fd]
button $f.bok -text "Ok" -pady $ay(pady) -width 5 -command {
    global ay
    undo save AddTag
    if { [.addTag.fu.e get] != "" } {
	addTag [.addTag.fu.e get] [.addTag.fm.e get]
    }
    grab release .addTag
    focus .
    destroy .addTag
    plb_update
}

button $f.bclr -text "Clear" -pady $ay(pady) -width 5 -command {
    global ay

    .addTag.fu.e delete 0 end
    .addTag.fm.e delete 0 end
}

if { $edit >= 0 } {
$f.bok configure -command "editTagshelper $edit"
}

button $f.bca -text "Cancel" -pady $ay(pady) -width 5 -command "grab release .addTag; focus .; destroy $w"

pack $f.bok $f.bclr $f.bca -in $f -side left -fill x -expand yes
pack $f -in $w -side top -fill x

# Esc-key && close via window decoration == Cancel button
bind $w <Escape> "$f.bca invoke"
wm protocol $w WM_DELETE_WINDOW "$f.bca invoke"

winCenter $w
grab $w
focus .addTag.fu.e
tkwait window $w

winAutoFocusOn

 return;
}
# addTagp

array set Tags {
arr   tagsPropData
sproc setTagsp
gproc getTagsp
w     fTagsAttr
}


# create Tags-UI
set w [frame $ay(pca).$Tags(w)]
addCommand $w c1 "Remove all Tags" {delTags all;plb_update}


# getProperty:
#
#
proc getProperty { property varName } {
upvar $varName vname
global ay curtypes ay_error

    # decode arrayname from property argument
    set arrayname [string range $property 0 \
		       [expr [string first "(" $property]-1]]

    set propname [string range $property \
		       [expr [string first "(" $property]+1] \
		       [expr [string first ")" $property]-1]]

    # check object selection, XXXX should we?
    if { 0 } {
    set index ""
    if { $ay(lb) == 1 } {
	set index [$ay(olb) curselection]
    } else {
	set index [$ay(tree) selection get]
    }
    if { [llength $index] != 1 } {
	return;
    }
    }

    # get object type
    set type ""
    if { $ay(lb) == 1 } {
	set type [lindex $curtypes $index]
    } else {
	set oldayerror $ay_error
	getType type
	set ay_error $oldayerror
    }
    if { $type == "" || $type == ".." } {
	ayError 2 "getProperty" "Could not get type of object."
	return;
    }

    # get list of properties of selected object
    global ${type}_props
    eval [subst "set props {\$${type}_props}"]

    # also get properties from NP tags
    set tn ""
    getTags tn tv
    if { ($tn != "") && ([ string first NP $tn ] != -1) } {
	set i 0
	foreach tag $tn {
	    if { [lindex $tn $i] == "NP" } {
		lappend props [lindex $tv $i] 
	    }
	    incr i
	}
	# foreach
    }
    # if

    # check presence of wanted property for selected object
    set propindex ""
    catch {set propindex [lsearch $props $arrayname]}
    if { $propindex == -1 } {
	ayError 2 "getProperty" "Could not find property: $arrayname."
	return;
    }
    
    # get property data
    global $arrayname
    set getprocp ""
    eval [subst "set getprocp \$${arrayname}(gproc)"]
    if { $getprocp != "" } { $getprocp } else { getProp }

    # fill value to variable
    eval [subst "set arr \$${arrayname}(arr)"]
    global $arr
    set pvarname ${arr}($propname)
    eval [subst "set vname \{\$$pvarname\}"]

 return;
}
# getProperty


# setProperty:
#
#
proc setProperty { property newValue } {
global ay curtypes ay_error

    # decode arrayname from property argument
    set arrayname [string range $property 0 \
		       [expr [string first "(" $property]-1]]

    set propname [string range $property \
		       [expr [string first "(" $property]+1] \
		       [expr [string first ")" $property]-1]]

    # check object selection, XXXX should we?
    if { 0 } {
    set index ""
    if { $ay(lb) == 1 } {
	set index [$ay(olb) curselection]
    } else {
	set index [$ay(tree) selection get]
    }
    if { [llength $index] != 1 } {
	return;
    }
    }

    # get object type
    set type ""
    if { $ay(lb) == 1 } {
	set type [lindex $curtypes $index]
    } else {
	set oldayerror $ay_error
	getType type
	set ay_error $oldayerror
    }
    if { $type == "" || $type == ".." } {
	ayError 2 "setProperty" "Could not get type of object."
	return;
    }

    # get list of properties of selected object
    global ${type}_props
    eval [subst "set props {\$${type}_props}"]

    # also get properties from NP tags
    set tn ""
    getTags tn tv
    if { ($tn != "") && ([ string first NP $tn ] != -1) } {
	set i 0
	foreach tag $tn {
	    if { [lindex $tn $i] == "NP" } {
		lappend props [lindex $tv $i] 
	    }
	    incr i
	}
	# foreach
    }
    # if

    # check presence of wanted property for selected object
    set propindex ""
    catch {set propindex [lsearch $props $arrayname]}
    if { $propindex == -1 } {
	ayError 2 "setProperty" "Could not find property: $arrayname."
	return;
    }

    # get property data
    global $arrayname
    set getprocp ""
    eval [subst "set getprocp \$${arrayname}(gproc)"]
    if { $getprocp != "" } { $getprocp } else { getProp }

    # modify property data
    eval [subst "set arr \$${arrayname}(arr)"]
    global $arr
    set pvarname ${arr}($propname)
    eval [subst "set $pvarname \{\$newValue\}"]

    # set property data
    set setprocp ""
    eval [subst "set setprocp \$${arrayname}(sproc)"]
    if { $setprocp != "" } { $setprocp } else { setProp }

 return;
}
# setProperty


# markPropModified:
#  this procedure is used by traces to property variables and sets
#  the global variable <name1>(<name2>-Modified) to 1, where
#  name1 is a property data array (like NCurveAttrData) and
#  name2 is a single property in that array (like Knots)
proc markPropModified { name1 name2 op } {
    global $name1
    set ${name1}(${name2}-Modified) 1
}
# markPropModified

