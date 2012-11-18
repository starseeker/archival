# Minimum required version of CMake
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
if(COMMAND CMAKE_POLICY)
  CMAKE_POLICY(SET CMP0003 NEW)
endif(COMMAND CMAKE_POLICY)

# set CMake project name
project(TCLLIB)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_CURRENT_SOURCE_DIR}/CMake")

if(NOT TCL_LIBRARY OR NOT TCL_STUB_LIBRARY OR NOT TK_LIBRARY OR NOT
    TK_STUB_LIBRARY OR NOT TCL_INCLUDE_DIRS OR NOT TK_INCLUDE_PATH OR NOT
    TCL_TCLSH OR NOT TCL_WISH_EXECUTABLE)
  find_package(TCL)
endif(NOT TCL_LIBRARY OR NOT TCL_STUB_LIBRARY OR NOT TK_LIBRARY OR NOT
  TK_STUB_LIBRARY OR NOT TCL_INCLUDE_DIRS OR NOT TK_INCLUDE_PATH OR NOT
  TCL_TCLSH OR NOT TCL_WISH_EXECUTABLE)


if(NOT LIB_DIR)
  if(NOT WIN32)
    set(LIB_DIR lib)
  else(NOT WIN32)
    set(LIB_DIR bin)
  endif(NOT WIN32)
endif(NOT LIB_DIR)

# The CMake build for tcllib leverages the installer routine

add_custom_command(
  OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/tcllib-build.sentinel
  COMMAND ${TCL_TCLSH} ${CMAKE_CURRENT_SOURCE_DIR}/installer.tcl -no-gui -no-wait -no-nroff -no-apps -no-html -no-examples -pkg-path ${CMAKE_BINARY_DIR}/${LIB_DIR}/tcllib1.14
  COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_BINARY_DIR}/tcllib-build.sentinel
  DEPENDS ${TCL_TCLSH}
  )
add_custom_target(tcllib ALL DEPENDS
  ${CMAKE_CURRENT_BINARY_DIR}/tcllib-build.sentinel)

add_custom_command(
  OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/tcllib-install.sentinel
  COMMAND ${TCL_TCLSH} ${CMAKE_CURRENT_SOURCE_DIR}/installer.tcl -no-gui -no-wait -no-nroff -no-apps -no-html -no-examples -pkg-path ${CMAKE_INSTALL_PREFIX}/${LIB_DIR}/tcllib1.14
  COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_BINARY_DIR}/tcllib-install.sentinel
  DEPENDS ${TCL_TCLSH}
  )
add_custom_target(tcllib-install DEPENDS
  ${CMAKE_CURRENT_BINARY_DIR}/tcllib-install.sentinel)
install(CODE "execute_process(COMMAND \"${CMAKE_COMMAND}\" --build --target tcllib-install)")

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
