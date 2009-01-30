# Ayam, a free 3D modeler for the RenderMan interface.
#
# Ayam is copyrighted 1998-2009 by Randolf Schultz
# (randolf.schultz@gmail.com) and others.
#
# All rights reserved.
#
# See the file License for details.

# trim.tcl - Trim objects Tcl code

set Trim_props { Transformations Attributes Material Tags TrimAttr }

array set TrimAttr {
arr   TrimAttrData
sproc ""
gproc ""
w     fTrimAttr

}

array set TrimAttrData {
PatchNum 0
}

# create TrimAttr-UI
set w [frame $ay(pca).$TrimAttr(w)]

addParam $w TrimAttrData PatchNum

