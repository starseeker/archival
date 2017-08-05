set(CRITCL_SRCS
  Config
  critcl_c/cdata.c
  critcl_c/header.c
  critcl_c/pkginit.c
  critcl_c/pkginitend.c
  critcl_c/pkginittk.c
  critcl_c/preload.c
  critcl_c/stubs.c
  critcl_c/tcl8.4/tclDecls.h
  critcl_c/tcl8.4/tcl.h
  critcl_c/tcl8.4/tclPlatDecls.h
  critcl_c/tcl8.4/tkDecls.h
  critcl_c/tcl8.4/tk.h
  critcl_c/tcl8.4/tkPlatDecls.h
  critcl_c/tcl8.4/X11/cursorfont.h
  critcl_c/tcl8.4/X11/keysymdef.h
  critcl_c/tcl8.4/X11/keysym.h
  critcl_c/tcl8.4/X11/tkIntXlibDecls.h
  critcl_c/tcl8.4/X11/Xatom.h
  critcl_c/tcl8.4/X11/Xfuncproto.h
  critcl_c/tcl8.4/X11/X.h
  critcl_c/tcl8.4/X11/Xlib.h
  critcl_c/tcl8.4/X11/Xutil.h
  critcl_c/tcl8.5/tclDecls.h
  critcl_c/tcl8.5/tcl.h
  critcl_c/tcl8.5/tclPlatDecls.h
  critcl_c/tcl8.5/tkDecls.h
  critcl_c/tcl8.5/tk.h
  critcl_c/tcl8.5/tkPlatDecls.h
  critcl_c/tcl8.5/X11/cursorfont.h
  critcl_c/tcl8.5/X11/keysymdef.h
  critcl_c/tcl8.5/X11/keysym.h
  critcl_c/tcl8.5/X11/tk.h
  critcl_c/tcl8.5/X11/tkIntXlibDecls.h
  critcl_c/tcl8.5/X11/Xatom.h
  critcl_c/tcl8.5/X11/Xfuncproto.h
  critcl_c/tcl8.5/X11/X.h
  critcl_c/tcl8.5/X11/Xlib.h
  critcl_c/tcl8.5/X11/Xutil.h
  critcl_c/tcl8.6/tclDecls.h
  critcl_c/tcl8.6/tcl.h
  critcl_c/tcl8.6/tclPlatDecls.h
  critcl_c/tcl8.6/tkDecls.h
  critcl_c/tcl8.6/tk.h
  critcl_c/tcl8.6/tkPlatDecls.h
  critcl_c/tcl8.6/X11/cursorfont.h
  critcl_c/tcl8.6/X11/keysymdef.h
  critcl_c/tcl8.6/X11/keysym.h
  critcl_c/tcl8.6/X11/tk.h
  critcl_c/tcl8.6/X11/tkIntXlibDecls.h
  critcl_c/tcl8.6/X11/Xatom.h
  critcl_c/tcl8.6/X11/Xfuncproto.h
  critcl_c/tcl8.6/X11/X.h
  critcl_c/tcl8.6/X11/Xlib.h
  critcl_c/tcl8.6/X11/Xutil.h
  critcl_c/tclAppInit.c
  critcl_c/tkstubs.c
  critcl.tcl
  license.terms
  pkgIndex.tcl
  )

TCL_SCRIPTFILES(CRITCL_SRCS ${LIB_DIR}/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR}/critcl3.1.2)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
