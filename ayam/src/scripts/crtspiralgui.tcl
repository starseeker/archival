# Ayam, save array: SpiralAttrData
# crtspiralgui.tcl: example script for Ayam Script object
# this script wants Script Object Type "Create" and creates
# a spiral NURBS curve; it also has a property GUI, just
# add a tag "NP SpiralAttr" to the script object to see it
if { ![info exists ::SpiralAttrData] } {
    array set ::SpiralAttrData {
	Length 30
	AngleD 0
	Radius 3.0
	ZDiff 0.25
	SP {Length AngleD Radius ZDiff}
    }
    set ::SpiralAttrData(AngleD)  [expr {90.0*3.141592654/180.0}]
}
if { ![info exists ::SpiralAttrGUI] } {
    set w [addPropertyGUI SpiralAttr "" ""]
    addParam $w SpiralAttrData Length
    addParam $w SpiralAttrData AngleD
    addParam $w SpiralAttrData Radius
    addParam $w SpiralAttrData ZDiff
}

set length $::SpiralAttrData(Length)
set angled $::SpiralAttrData(AngleD)
set r $::SpiralAttrData(Radius)
set zd $::SpiralAttrData(ZDiff)

crtOb NCurve -length $length;sL
set angle 0.0
set z 0.0
for {set i 0} {$i < $length} {incr i} {
    set x [expr {$r*cos($angle)}]
    set y [expr {$r*sin($angle)}]

    setPnt $i $x $y $z 1.0

    set angle [expr {$angle + $angled}]
    set z [expr {$z + $zd}]
}
# for

# crtspiralgui.tcl
