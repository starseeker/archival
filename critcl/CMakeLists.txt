# Minimum required version of CMake
CMAKE_MINIMUM_REQUIRED(VERSION 2.8)
if(COMMAND CMAKE_POLICY)
  CMAKE_POLICY(SET CMP0003 NEW)
endif(COMMAND CMAKE_POLICY)

# set CMake project name
project(CRITCL)

set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${CMAKE_CURRENT_SOURCE_DIR}/CMake")

IF(NOT TCL_LIBRARY OR NOT TCL_STUB_LIBRARY OR NOT TK_LIBRARY OR NOT
    TK_STUB_LIBRARY OR NOT TCL_INCLUDE_DIRS OR NOT TK_INCLUDE_PATH OR NOT
    TCL_TCLSH OR NOT TCL_WISH_EXECUTABLE)
  find_package(TCL)
ENDIF(NOT TCL_LIBRARY OR NOT TCL_STUB_LIBRARY OR NOT TK_LIBRARY OR NOT
  TK_STUB_LIBRARY OR NOT TCL_INCLUDE_DIRS OR NOT TK_INCLUDE_PATH OR NOT
  TCL_TCLSH OR NOT TCL_WISH_EXECUTABLE)


SET(CRITCL_PKGNAME Critcl)
SET(CRITCL_PKGVERSION "3.1.2")

if(NOT COMMAND TCL_PKGINDEX)
  include(${CRITCL_SOURCE_DIR}/CMake/TCL_PKGINDEX.cmake)
endif(NOT COMMAND TCL_PKGINDEX)

if(NOT COMMAND TCL_SCRIPTFILES)
  include(${CRITCL_SOURCE_DIR}/CMake/TCL_SCRIPTFILES.cmake)
endif(NOT COMMAND TCL_SCRIPTFILES)

if(NOT LIB_DIR)
  if(NOT WIN32)
    set(LIB_DIR lib)
  else(NOT WIN32)
    set(LIB_DIR bin)
  endif(NOT WIN32)
endif(NOT LIB_DIR)

if(NOT BIN_DIR)
  set(BIN_DIR bin)
endif(NOT BIN_DIR)

# Main critcl package
add_subdirectory(lib/critcl)

# critcl application
add_subdirectory(lib/app-critcl)

# critcl class package
add_subdirectory(lib/critcl-class)

# critcl iassoc package
add_subdirectory(lib/critcl-iassoc)

# critcl util package
add_subdirectory(lib/critcl-util)

# critcl stubs
add_subdirectory(lib/stubs)

# required packages
add_subdirectory(lib/util84)
add_subdirectory(lib/md5)
add_subdirectory(lib/cmdline)

add_custom_target(critcl ALL
  DEPENDS
  CRITCL_SRCS_cp
  CRITCL_APP_SRCS_cp
  CRITCL_CLASS_SRCS_cp
  CRITCL_IASSOC_SRCS_cp
  CRITCL_UTIL_SRCS_cp
  CRITCL_STUBS_cp
  CRITCL_UTIL84_SRCS_cp
  TCL_MD5_SRCS_cp
  TCL_CMDLINE_SRCS_cp
  ${TCL_TCLSH}
  )

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
