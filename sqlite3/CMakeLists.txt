#########################################################################
#
#	BRL-CAD
#	
#	Copyright (c) 1997-2011 United States Government as represented by
#	the U.S. Army Research Laboratory.
#	
#	This library is free software; you can redistribute it and/or
#	modify it under the terms of the GNU Lesser General Public License
#	version 2.1 as published by the Free Software Foundation.
#	
#	This library is distributed in the hope that it will be useful, but
#	WITHOUT ANY WARRANTY; without even the implied warranty of
#	MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
#	Lesser General Public License for more details.
#	
#	You should have received a copy of the GNU Lesser General Public
#	License along with this file; see the file named COPYING for more
#	information.
#
cmake_minimum_required(VERSION 2.8)

PROJECT(sqlite)

find_package(Threads REQUIRED)
SET(SQLITE_LIBS ${CMAKE_THREAD_LIBS_INIT})

include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}
	)

IF(NOT LIB_DIR)
	IF(NOT WIN32)
		SET(LIB_DIR lib)
	ELSE(NOT WIN32)
		SET(LIB_DIR bin)
	ENDIF(NOT WIN32)
ENDIF(NOT LIB_DIR)

INCLUDE(CheckLibraryExists)
INCLUDE(${CMAKE_CURRENT_SOURCE_DIR}/CMake/ResolveCompilerPaths.cmake)
CHECK_LIBRARY_EXISTS(dl dlopen "" HAVE_DLOPEN)
IF(HAVE_DLOPEN)
	RESOLVE_LIBRARIES(DL_LIBRARY "-ldl")
	SET(SQLITE_LIBS ${SQLITE_LIBS} ${DL_LIBRARY})
ENDIF(HAVE_DLOPEN)

add_library(libsqlite3 SHARED sqlite3.c)
target_link_libraries(libsqlite3 ${SQLITE_LIBS})
set_target_properties(libsqlite3 PROPERTIES PREFIX "")
install(TARGETS libsqlite3 DESTINATION ${LIB_DIR})

add_executable(sqlite shell.c)
target_link_libraries(sqlite libsqlite3)
install(TARGETS sqlite DESTINATION bin)

SET(SQLITE3_LIBRARIES libsqlite3 CACHE STRING "sqlite lib")

# Tcl bindings
include_directories(${TCL_INCLUDE_DIRS})
add_definitions(-DSQLITE3_ENABLE_FTS3=1)
add_library(libtclsqlite3 SHARED tclsqlite3.c)
set_target_properties(libtclsqlite3 PROPERTIES PREFIX "")
install(TARGETS libtclsqlite3 DESTINATION ${LIB_DIR})

SET(SQLITE3_PKGNAME sqlite3)
SET(SQLITE3_PKGVERSION "3.7.8")
GET_TARGET_PROPERTY(SQLITE3_LIBLOCATION libtclsqlite3 LOCATION_${CMAKE_BUILD_TYPE})
GET_FILENAME_COMPONENT(SQLITE3_LIBNAME ${SQLITE3_LIBLOCATION} NAME)
FILE(WRITE ${CMAKE_CURRENT_BINARY_DIR}/pkgIndex.tcl "package ifneeded ${SQLITE3_PKGNAME} ${SQLITE3_PKGVERSION} [list load [file join $dir .. .. ${LIB_DIR} ${SQLITE3_LIBNAME}]]")
install(FILES ${CMAKE_CURRENT_BINARY_DIR}/pkgIndex.tcl DESTINATION lib/${SQLITE3_PKGNAME}${SQLITE3_PKGVERSION})

FILE(WRITE ${CMAKE_BINARY_DIR}/lib/${SQLITE3_PKGNAME}${SQLITE3_PKGVERSION}/pkgIndex.tcl "package ifneeded ${SQLITE3_PKGNAME} ${SQLITE3_PKGVERSION} [list load [file join $dir .. .. lib  ${SQLITE3_LIBNAME}] ${SQLITE3_PKGNAME}]")

