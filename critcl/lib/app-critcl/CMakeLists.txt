set(CRITCL_APP_SRCS
  critcl.tcl
  pkgIndex.tcl
  runtime.tcl
  tea/aclocal.m4
  tea/Config.in
  tea/configure.in
  tea/Makefile.in
  tea/tclconfig/install-sh
  tea/tclconfig/README.txt
  tea/tclconfig/tcl.m4
  )

TCL_SCRIPTFILES(CRITCL_APP_SRCS ${LIB_DIR}/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR}/critcl-app3.1.2)

set(CRITCL_BIN_DIR "${CMAKE_BINARY_DIR}/${BIN_DIR}")
configure_file(critcl.sh.in ${CMAKE_BINARY_DIR}/critcl/app-critcl/critcl @ONLY)
file(COPY ${CMAKE_BINARY_DIR}/critcl/app-critcl/critcl
  DESTINATION ${CMAKE_BINARY_DIR}/${BIN_DIR}
  FILE_PERMISSIONS OWNER_READ OWNER_WRITE OWNER_EXECUTE GROUP_READ
  GROUP_EXECUTE WORLD_READ WORLD_EXECUTE)
file(REMOVE ${CMAKE_BINARY_DIR}/critcl/app-critcl/critcl)
set(CRITCL_BIN_DIR "${CMAKE_INSTALL_PREFIX}/${BIN_DIR}")
configure_file(critcl.sh.in ${CMAKE_BINARY_DIR}/critcl/app-critcl/critcl @ONLY)
install(PROGRAMS ${CMAKE_BINARY_DIR}/critcl/app-critcl/critcl DESTINATION ${BIN_DIR})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
