# Ayam, a free 3D modeler for the RenderMan interface.
#
# Ayam is copyrighted 1998-2002 by Randolf Schultz
# (randolf.schultz@gmail.com) and others.
#
# All rights reserved.
#
# See the file License for details.

# about.tcl - the about requester

# aboutAyam:
#  open the about window
#
proc aboutAyam {} {
global ay tcl_version tk_version tcl_patchLevel tk_patchLevel tcl_platform

winAutoFocusOff

set w .aboutw
# there can only be one
catch {destroy $w}
toplevel $w -class ayam
wm title $w "About Ayam"
wm iconname $w "Ayam"
if { $ay(ws) == "Aqua" } {
    winMakeFloat $w
} else {
    wm transient .
}
frame $w.ftext
frame $w.fbutton

if { $ay(views) != "" } {
    getVersion
} else {
    set ay(gl_ver) "Not available unless a view is open."
}

global AYWRAPPED
if { $AYWRAPPED == 1 } { set wrappedorshared "wrapped" } else {
    set wrappedorshared "shared"
}

if { $tcl_version >= 8.1 } {
    set platform [string toupper $tcl_platform(platform) 0 0 ]
} else {
    set platform [string toupper $tcl_platform(platform) ]
}

pack $w.ftext -in $w -side top -expand yes -fill both
pack $w.fbutton -in $w -side bottom

text $w.ftext.text -yscrollcommand "$w.ftext.sbar set" \
	-setgrid 1 -height 17 -width 65
scrollbar $w.ftext.sbar -takefocus 0 -command "$w.ftext.text yview"
pack $w.ftext.text -in $w.ftext -side left -fill both -expand yes
pack $w.ftext.sbar -in $w.ftext -side right -fill y

$w.ftext.text insert end \
{
Ayam, a free 3D Tcl/Tk/OpenGL/RenderMan modeler

Ayam is
Copyright (c) 1998-2008 by Randolf Schultz
(randolf.schultz@gmail.com)
All Rights Reserved

See the file License for details.

For additional information new versions etc. see:
http://www.ayam3d.org/

http://www.core.de/~randi/ayam/

Version Information:
}

$w.ftext.text tag add "tag1" 1.0 9.end
$w.ftext.text tag add "tag2" 2.0 2.end
$w.ftext.text tag add "httag1" 12.0 12.end
$w.ftext.text tag add "httag2" 14.0 14.end
$w.ftext.text tag configure tag1 -justify center
$w.ftext.text tag configure tag2 -underline yes
$w.ftext.text tag configure httag1 -relief raised -borderwidth 1
$w.ftext.text tag configure httag2 -relief raised -borderwidth 1
$w.ftext.text tag configure httag3 -relief raised -borderwidth 1
$w.ftext.text tag bind httag1 <ButtonPress-1> {
    browser_urlOpen "http://www.ayam3d.org/"}
$w.ftext.text tag bind httag2 <ButtonPress-1> {
    browser_urlOpen "http://www.core.de/~randi/ayam/"}
$w.ftext.text insert end \
"
Ayam: $ay(ay_version) ($wrappedorshared) on: $platform/$tcl_platform(os)($tcl_platform(osVersion))

Tcl-Version: $tcl_version
Tcl-PatchLevel: $tcl_patchLevel

Tk-Version: $tk_version
Tk-PatchLevel: $tk_patchLevel

OpenGL-Version: $ay(gl_ver)

GLU-Version: $ay(glu_ver)

OpenGL
Renderer: $ay(gl_ren)
Vendor:   $ay(gl_ven)
"

foreach i $ay(gl_ext) {
$w.ftext.text insert end "Extension: $i
" 
}

if { $ay(glu_ext) != "" } {
$w.ftext.text insert end \
"
GLU
"
}
foreach i $ay(glu_ext) {
$w.ftext.text insert end "Extension: $i
" 
}

$w.ftext.text insert end \
"

Ayam is based on the following fine software:

o BMRT (Blue Moon Rendering Tools) by Larry Gritz (Exluna)
o The Togl widget by Benjamin Bederson, Brian Paul et al.
o The tkMegaWidget set by Jeffrey Hobbs
o The Affine Toolkit by Thomas E. Burge
o The 3DMF parser from Apple (Duet Development Corp.)
o libtiff (Sam Leffler, Silicon Graphics et al.)
o Tcl/Tk, OpenGL, The RenderMan Interface (too many to list)

Ayam learned a lot from the code of:

o GLUT by M. Kilgard
o The NURBS Book by L. Piegl and W. Tiller
o The NURBS Procedure Library by W.T. Hewitt and D. Yipp
o The NURBS++ library by P. Lavoie

OpenGL (R) is a registered trademark of Silicon Graphics, Inc.

The RenderMan (R) Interface Procedures and Protocol are:
Copyright 1988, 1989, 2000, Pixar
All Rights Reserved

RenderMan (R) is a registered trademark of Pixar

The Affine Libraries and Tools are
Copyright (c) 1995, 1996, 1997, 1998 Thomas E. Burge
All rights reserved.

Affine (R) is a registered trademark of Thomas E. Burge

TIFF Software is
Copyright (c) 1988-1997 Sam Leffler
Copyright (c) 1991-1997 Silicon Graphics, Inc.
"

# center the last 19 lines"
$w.ftext.text tag add "tag3" end-19lines end

$w.ftext.text tag configure tag3 -justify center
# Disabling the text widget (unfortunately) prohibits selection
# on Win32 so we have to live with the user being able to _modify_
# the contents of the text widget:
#$w.ftext.text configure -state disabled

bind $w <Next> "$w.ftext.text yview scroll 1 pages"
bind $w <Prior> "$w.ftext.text yview scroll -1 pages"

bind $w.ftext.text <ButtonPress-4>\
"$w.ftext.text yview scroll -1 pages; break"

bind $w.ftext.text <ButtonPress-5>\
"$w.ftext.text yview scroll 1 pages; break"

button $w.fbutton.bcl -text "CopyClipboard" -pady $ay(pady)\
    -command {
	clipboard clear
	catch {clipboard append [.aboutw.ftext.text get 17.0 "end - 36 lines"] }
    }


button $w.fbutton.bca -text "Close" -pady $ay(pady)\
    -command "destroy $w"

pack $w.fbutton.bcl -in $w.fbutton -side left -padx 8

pack $w.fbutton.bca -in $w.fbutton -side right -padx 8

bind $w.ftext.text <ButtonRelease-1> {
    if {[string match %W [selection own -displayof %W]]} {
	clipboard clear -displayof %W
	catch {clipboard append -displayof %W [selection get -displayof %W]}
    }
}
# bind

update idletasks

# Esc-key && close via window decoration == Dismiss button
bind $w <Escape> "$w.fbutton.bca invoke"
wm protocol $w WM_DELETE_WINDOW "$w.fbutton.bca invoke"

winCenter $w
focus $w.fbutton.bca
tkwait window $w

winAutoFocusOn

return;
}
# aboutAyam
