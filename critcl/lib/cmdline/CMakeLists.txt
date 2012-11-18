set(TCL_CMDLINE_SRCS
  cmdline.tcl
  typedCmdline.tcl
  pkgIndex.tcl
  )

TCL_SCRIPTFILES(TCL_CMDLINE_SRCS ${LIB_DIR}/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR}/cmdline)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
