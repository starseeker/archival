# Minimum required version of CMake
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
if(COMMAND CMAKE_POLICY)
  CMAKE_POLICY(SET CMP0003 NEW)
endif(COMMAND CMAKE_POLICY)

# set CMake project name
project(MLCNC)


if(NOT LIB_DIR)
  if(NOT WIN32)
    set(LIB_DIR lib)
  else(NOT WIN32)
    set(LIB_DIR bin)
  endif(NOT WIN32)
endif(NOT LIB_DIR)

set(CRITCL_BIN ${CMAKE_BINARY_DIR}/bin/critcl)

# The CMake build for tcllib leverages the installer routine

add_custom_command(
  OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/mlcnc-build.sentinel
  COMMAND ${CRITCL_BIN} -pkg -libdir ${CMAKE_BINARY_DIR}/${LIB_DIR} ${CMAKE_CURRENT_SOURCE_DIR}/mlcnc_critcl.tcl 
  COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_BINARY_DIR}/mlcnc-build.sentinel
  DEPENDS ${TCL_TCLSH}
  )
add_custom_target(mlcnc ALL DEPENDS
  critcl
  ${CMAKE_CURRENT_BINARY_DIR}/mlcnc-build.sentinel)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
