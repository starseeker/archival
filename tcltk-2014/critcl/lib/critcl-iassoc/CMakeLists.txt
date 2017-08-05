set(CRITCL_IASSOC_SRCS
  iassoc.tcl
  iassoc.h
  pkgIndex.tcl
  )

TCL_SCRIPTFILES(CRITCL_IASSOC_SRCS ${LIB_DIR}/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR}/critcl-iassoc1)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
