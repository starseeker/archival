# Ayam, a free 3D modeler for the RenderMan interface.
#
# Ayam is copyrighted 1998-2001 by Randolf Schultz
# (rschultz@informatik.uni-rostock.de) and others.
#
# All rights reserved.
#
# See the file License for details.

# revolve.tcl - Revolve objects Tcl code

set Revolve_props { Transformations Attributes Material Tags RevolveAttr }


array set RevolveAttr {
arr   RevolveAttrData
sproc ""
gproc ""
w     fRevolveAttr

}

array set RevolveAttrData {
DisplayMode 1
NPInfoBall "n/a"
}
# create RevolveAttr-UI
set w [frame $ay(pca).$RevolveAttr(w)]

addParam $w RevolveAttrData ThetaMax
addParam $w RevolveAttrData Sections
addParam $w RevolveAttrData Order
addCheck $w RevolveAttrData UpperCap
addCheck $w RevolveAttrData LowerCap
addCheck $w RevolveAttrData StartCap
addCheck $w RevolveAttrData EndCap

addParam $w RevolveAttrData Tolerance
addMenu $w RevolveAttrData DisplayMode $ay(npdisplaymodes)

addText $w RevolveAttrData "Created NURBS Patch:"
addInfo $w RevolveAttrData NPInfo
