set(CRITCL_UTIL_SRCS
  util.tcl
  pkgIndex.tcl
  )

TCL_SCRIPTFILES(CRITCL_UTIL_SRCS ${LIB_DIR}/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR}/critcl-util1)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
