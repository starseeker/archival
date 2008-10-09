# Ayam, a free 3D modeler for the RenderMan interface.
#
# Ayam is copyrighted 1998-2001 by Randolf Schultz
# (randolf.schultz@gmail.com) and others.
#
# All rights reserved.
#
# See the file License for details.

# metaobj.tcl - Metaobj objects Tcl code
# Frank Pagels 2001

global ay MetaObj_props MetaObjAttr MetaObjAttrData

set MetaObj_props { Transformations Attributes Material Tags MetaObjAttr }

proc metaobj_getAttr { } {
    global ay MetaObjAttr MetaObjAttrData

    catch {destroy $ay(pca).$MetaObjAttr(w)}
    set w [frame $ay(pca).$MetaObjAttr(w)]
    getProp

    set ay(bok) $ay(appb)

    addParam $w MetaObjAttrData NumSamples {20 40 60 80 120 140 160 180 200}
    addParam $w MetaObjAttrData IsoLevel {0.1 0.6 1.0}
    addCheck $w MetaObjAttrData "ShowWorld"
    #addCheck $w MetaObjAttrData Adaptive
    addMenu $w MetaObjAttrData Adaptive {Never Always Automatic}

    if {$MetaObjAttrData(Adaptive) != 0} {
	addParam $w MetaObjAttrData Flatness 0.9
	addParam $w MetaObjAttrData Epsilon 0.0001
	addParam $w MetaObjAttrData StepSize 0.0001
    }

    $ay(pca) itemconfigure 1 -window $w
    plb_resize

}
# metaobj_getAttr

array set MetaObjAttr {
    arr   MetaObjAttrData
    sproc ""
    gproc metaobj_getAttr
    w     fMetaObjAttr
}

array set MetaObjAttrData {
    Formula  0
    Adaptive 0
}

# create MetaObjAttr-UI
set w [frame $ay(pca).$MetaObjAttr(w)]

addParam $w MetaObjAttrData NumSamples {20 40 60 80 120 140 160 180 200}
addParam $w MetaObjAttrData IsoLevel 0.6
addCheck $w MetaObjAttrData "ShowWorld"
#addCheck $w MetaObjAttrData Adaptive
addMenu $w MetaObjAttrData Adaptive {Never Always Automatic}

##if {$MetaObjAttrData(Adaptive) == 1} {
#addParam $w MetaObjAttrData Flatness 0.9
#addParam $w MetaObjAttrData Epsilon 0.0001
#addParam $w MetaObjAttrData Step 0.0001
#}

global meta_mouseup
set meta_mouseup 1

# add menu entry to Create/Custom sub-menu
mmenu_addcustom MetaObj "crtOb MetaObj;uS;sL;rV"

# tell the rest of Ayam (or other custom objects), that we are loaded
lappend ay(co) MetaObj

