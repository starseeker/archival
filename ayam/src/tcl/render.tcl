# Ayam, a free 3D modeler for the RenderMan interface.
#
# Ayam is copyrighted 1998-2001 by Randolf Schultz
# (randolf.schultz@gmail.com) and others.
#
# All rights reserved.
#
# See the file License for details.

# render.tcl - invoke an external renderer

#XXXX does not work this way, see run.tcl
proc render { args } {
    global ay ayprefs

    set command "|"
    append command [lindex $args 0]
    append command " 2>@ stderr &"

    set f [open $command r]
    fileevent $f readable "gotline $f"
    proc gotline f {
	if {[gets $f line]<0} {
	    # it died !
	    close $f ;      # catch to get exit status
	    return ;        # (see errorCode in tclvars.n)
	}
	# use $line !
	puts $line
    }

}
# render


# render_select
#  open dialog to select a new major RenderMan renderer for Ayam,
#  then overwrite the appropriate "RIB-Export" preferences
#  also allow to load and execute a shader parsing plugin
proc render_select { } {
    global ay ayprefs

    winAutoFocusOff

    set w .selRenw
    winDialog $w "Select Renderer"

    set f [frame $w.flb]

    label $f.l -text "Select Renderer:"
    pack $f.l -in $f -side top

    # scrollbar
    scrollbar $f.sc -command "$f.li yview" -takefocus 0
    pack $f.sc -in $f -side right -fill y -expand no

    # listbox
    pack $f -in $w -side top -fill both -expand yes
    listbox $f.li -width 24 -height 10 -selectmode single\
	-yscrollcommand "$f.sc set" -exportselection 0
    pack $f.li -in $f -side left -fill both -expand yes

    pack $f -in $w -side top -fill x

    set names [list BMRT2.5 BMRT2.6 Aqsis Air Angel 3Delight Pixie RDC PRMan Gelato]
    foreach name $names {
	$f.li insert end "$name"
    }

    if { [info exists ay(srr)] } {
	$f.li selection set $ay(srr)
    }

    set ay(bca) $w.fb1.bca
    set ay(bok) $w.fb1.bok

    # checkbutton
    set f [frame $w.fch]
    addCheck $f ay ScanShaders
    pack $f -in $w -side top -fill x

    # ok/cancel buttons
    set f [frame $w.fb1]
    button $f.bok -text "Ok" -pady $ay(pady) -width 5 -command {
	global ay ayprefs

	set sel [.selRenw.flb.li curselection]
	set splugin ""

	switch $sel {

	    0 {
		# BMRT2.5
		set ayprefs(QRender) "rgl -rd 4 %s"
		set ayprefs(QRenderPT) ""
		set ayprefs(Render) "rendrib -d 4 %s"
		set ayprefs(RenderPT) "Done computing %d"
		set ayprefs(SMRender) "rendrib %s"
		set ayprefs(SMRenderPT) "Done computing %d"
		set ayprefs(FRender) "rendrib %s"
		set ayprefs(FRenderPT) "Done computing %d"

		set ayprefs(RenderMode) 0

		if { $ay(ScanShaders) == 1 } {
		    set ay(sext) ""
		}
		set newr "BMRT2.5"
	    }

	    1 {
		# BMRT2.6
		set ayprefs(QRender) "rgl -rd 4 %s"
		set ayprefs(QRenderPT) ""
		set ayprefs(Render) "rendrib -d 4 -Progress %s"
		set ayprefs(RenderPT) "R90000 %d"
		set ayprefs(SMRender) "rendrib -Progress %s"
		set ayprefs(SMRenderPT) "R90000 %d"
		set ayprefs(FRender) "rendrib -Progress %s"
		set ayprefs(FRenderPT) "R90000 %d"

		set ayprefs(RenderMode) 0

		if { $ay(ScanShaders) == 1 } {
		    set ay(sext) ""
		}
		set newr "BMRT2.6"
	    }

	    2 {
		# Aqsis
		set ayprefs(QRender) "aqsis -Progress -fb  %s"
		set ayprefs(QRenderPT) "R90000%d"
		set ayprefs(Render) "aqsis -Progress -fb %s"
		set ayprefs(RenderPT) "R90000%d"
		set ayprefs(SMRender) "aqsis -Progress %s"
		set ayprefs(SMRenderPT) "R90000%d"
		set ayprefs(FRender) "aqsis -Progress %s"
		set ayprefs(FRenderPT) "R90000%d"

		set ayprefs(RenderMode) 0

		global AYUSESLXARGS
		if { $AYUSESLXARGS != 1 } {
		    set splugin "ayslx"
		}
		if { $ay(ScanShaders) == 1 } {
		    set ay(sext) ".slx"
		}
		set newr "Aqsis"
	    }

	    3 {
		# Air
		set ayprefs(QRender) "air -samples 1 1 -d 4 -Progress %s"
		set ayprefs(QRenderPT) "R90000 %d"
		set ayprefs(Render) "air -d 4 -Progress %s"
		set ayprefs(RenderPT) "R90000 %d"
		set ayprefs(SMRender) "air -Progress %s"
		set ayprefs(SMRenderPT) "R90000 %d"
		set ayprefs(FRender) "air -Progress %s"
		set ayprefs(FRenderPT) "R90000 %d"

		set ayprefs(RenderMode) 0

		set splugin "ayslb"
		if { $ay(ScanShaders) == 1 } {
		    set ay(sext) ".slb"
		}
		set newr "Air"
	    }

	    4 {
		# Angel
		set ayprefs(QRender) "angel %s"
		set ayprefs(QRenderPT) "%d"
		set ayprefs(Render) "angel %s"
		set ayprefs(RenderPT) "%d"
		set ayprefs(SMRender) "angel %s"
		set ayprefs(SMRenderPT) "%d"
		set ayprefs(FRender) "angel %s"
		set ayprefs(FRenderPT) "%d"

		set ayprefs(RenderMode) 1

		if { $ay(ScanShaders) == 1 } {
		    set ay(sext) ""
		}
		set newr "Angel"
	    }

	    5 {
		# 3Delight
		set ayprefs(QRender) "renderdl -d %s"
		set ayprefs(QRenderPT) ""
		set ayprefs(Render) "renderdl -d %s"
		set ayprefs(RenderPT) ""
		set ayprefs(SMRender) "renderdl %s"
		set ayprefs(SMRenderPT) ""
		set ayprefs(FRender) "renderdl %s"
		set ayprefs(FRenderPT) ""

		set ayprefs(RenderMode) 0

		set splugin "ayslo3d"
		if { $ay(ScanShaders) == 1 } {
		    set ay(sext) ".sdl"
		}
		set newr "3Delight"
	    }

	    6 {
		# Pixie
		set ayprefs(QRender) "rndr -p %s"
		set ayprefs(QRenderPT) "Done %%%d"
		#set ayprefs(QRenderPT) "regexp -- {^.* - (\\\[0-9\\\]+)} string dummy percent"
		set ayprefs(Render) "rndr -p %s"
		set ayprefs(RenderPT) "Done %%%d"
		#set ayprefs(RenderPT) "regexp -- {^.* - (\\\[0-9\\\]+)} string dummy percent"
		set ayprefs(SMRender) "rndr -p %s"
		set ayprefs(SMRenderPT) "Done %%%d"
		#set ayprefs(SMRenderPT) "regexp -- {^.* - (\\\[0-9\\\]+)} string dummy percent"
		set ayprefs(FRender) "rndr -p %s"
		set ayprefs(FRenderPT) "Done %%%d"
		#set ayprefs(FRenderPT) "regexp -- {^.* - (\\\[0-9\\\]+)} string dummy percent"

		set ayprefs(RenderMode) 1

		set splugin "aysdr"
		if { $ay(ScanShaders) == 1 } {
		    set ay(sext) ".sdr"
		}
		set newr "Pixie"
	    }

	    7 {
		# RDC
		set ayprefs(QRender) "renderdc %s"
		set ayprefs(QRenderPT) ""
		set ayprefs(Render) "renderdc %s"
		set ayprefs(RenderPT) ""
		set ayprefs(SMRender) "renderdc %s"
		set ayprefs(SMRenderPT) ""
		set ayprefs(FRender) "renderdc %s"
		set ayprefs(FRenderPT) ""

		set ayprefs(RenderMode) 1

		set splugin "ayso"
		if { $ay(ScanShaders) == 1 } {
		    set ay(sext) ".so"
		}
		set newr "RDC"
	    }

	    8 {
		# PRMan
		set ayprefs(QRender) "render -vector %s"
		set ayprefs(QRenderPT) ""
		set ayprefs(Render) "render -progress %s"
		set ayprefs(RenderPT) " %d"
		set ayprefs(SMRender) "render -progress %s"
		set ayprefs(SMRenderPT) " %d"
		set ayprefs(FRender) "render -progress %s"
		set ayprefs(FRenderPT) " %d"

		set ayprefs(RenderMode) 1

		set splugin "ayslo"
		if { $ay(ScanShaders) == 1 } {
		    set ay(sext) ".slo"
		}
		set newr "PRMan"
	    }

	    9 {
		# Gelato
		set ayprefs(QRender) "gelato -preview 0.25 -iv %s"
		set ayprefs(QRenderPT) ""
		set ayprefs(Render) "gelato -iv %s"
		set ayprefs(RenderPT) ""
		set ayprefs(SMRender) " %s"
		set ayprefs(SMRenderPT) ""
		set ayprefs(FRender) "gelato %s"
		set ayprefs(FRenderPT) ""

		set ayprefs(RenderMode) 1

		set splugin "aygso"
		if { $ay(ScanShaders) == 1 } {
		    set ay(sext) ".gso"
		}
		set newr "Gelato"
	    }

	    default { puts Whoops? }
	}
	# switch

	# Gelato specific settings
	if { $sel == 9 } {
	    set ayprefs(SMChangeShaders) 0
	    set ayprefs(SMFileFormat) "shadow"
	} else {
	    set ayprefs(SMChangeShaders) 1
	    set ayprefs(SMFileFormat) "zfile"
	    set ayprefs(SMFileType) "z"
	}

	# if preference editor is also open, take precedence
	if { ($sel > 0) && ($sel < 10) } {
	    set ayprefse(QRender) $ayprefs(QRender)
	    set ayprefse(QRenderPT) $ayprefs(QRenderPT)
	    set ayprefse(Render) $ayprefs(Render)
	    set ayprefse(RenderPT) $ayprefs(RenderPT)
	    set ayprefse(SMRender) $ayprefs(SMRender)
	    set ayprefse(SMRenderPT) $ayprefs(SMRenderPT)
	    set ayprefse(FRender) $ayprefs(FRender)
	    set ayprefse(FRenderPT) $ayprefs(FRenderPT)
	    set ayprefse(RenderMode) $ayprefs(RenderMode)
	}

	if { $ay(ScanShaders) == 1 } {
	    if { $splugin != "" } {
		set ay(autoload) $splugin
		io_lcAuto
	    }
	    shader_scanAll
	}

	ayError 4 "Renderer_Select" "Now using \"$newr\" to render."

	set ay(srr) $sel

	focus .
	grab release .selRenw
	destroy .selRenw
    }
    #-command


    button $f.bca -text "Cancel" -pady $ay(pady) -width 5 -command "\
	focus . ; destroy $w "
    pack $f.bok $f.bca -in $f -side left -fill x -expand yes
    pack $f -in $w -side top -fill x

    # Esc-key && close via window decoration == Cancel button
    bind $w <Escape> "$f.bca invoke"
    wm protocol $w WM_DELETE_WINDOW "$f.bca invoke"

    # center window
    winCenter $w

    grab $w
    focus $f.bok
    tkwait window $w

    winAutoFocusOn

 return;
}
# render_select

