# Copyright (c) 2014 Clifford Yapp
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions
# are met:
#
# 1. Redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer.
#
# 2. Redistributions in binary form must reproduce the above
# copyright notice, this list of conditions and the following
# disclaimer in the documentation and/or other materials provided
# with the distribution.
#
# 3. The name of the author may not be used to endorse or promote
# products derived from this software without specific prior written
# permission.
#
# THIS SOFTWARE IS PROVIDED BY THE AUTHOR ``AS IS'' AND ANY EXPRESS
# OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
# ARE DISCLAIMED. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR ANY
# DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
# DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE
# GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
# INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
# WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
# NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

# Minimum required version of CMake
cmake_minimum_required(VERSION 2.8.8)
if(COMMAND CMAKE_POLICY)
  CMAKE_POLICY(SET CMP0003 NEW)
  CMAKE_POLICY(SET CMP0007 OLD)
  if(${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}.${CMAKE_PATCH_VERSION} VERSION_GREATER 2.8.3)
    CMAKE_POLICY(SET CMP0017 OLD)
  endif(${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}.${CMAKE_PATCH_VERSION} VERSION_GREATER 2.8.3)
endif(COMMAND CMAKE_POLICY)

# Set CMake project name
project(NANOVG)

#---------------------------------------------------------------------
# CMake derives much of its functionality from modules, typically
# stored in one directory - let CMake know where to find them.  If we
# are a subbuild, let the parent's CMAKE_MODULE_PATH supply files before
set(NANOVG_CMAKE_DIR "${NANOVG_SOURCE_DIR}/CMake")
if(NANOVG_IS_SUBBUILD)
  set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${NANOVG_CMAKE_DIR}")
else(NANOVG_IS_SUBBUILD)
  set(CMAKE_MODULE_PATH "${NANOVG_CMAKE_DIR};${CMAKE_MODULE_PATH}")
endif(NANOVG_IS_SUBBUILD)

#---------------------------------------------------------------------
# Define relative install locations.  Don't set these if they have already
# been set by some other means (like a higher level CMakeLists.txt file
# including this one).

include(${NANOVG_CMAKE_DIR}/Path_Setup.cmake)

#---------------------------------------------------------------------
# The following logic is what allows binaries to run successfully in
# the build directory AND install directory.  Thanks to plplot for
# identifying the necessity of setting CMAKE_INSTALL_NAME_DIR on OSX.
# Documentation of these options is available at
# http://www.cmake.org/Wiki/CMake_RPATH_handling

include(${NANOVG_CMAKE_DIR}/RPath_Setup.cmake)

#---------------------------------------------------------------------

set(BUILD_SHARED_LIBS ON)

find_package(OpenGL)
find_package(Threads)
find_package(GLEW)

# We need GLFW3 for this example - just build one we know will work
add_subdirectory(example/glfw)
set(GLFW3_LIBRARIES glfw)
set(GLFW3_INCLUDE_DIR ${CMAKE_CURRENT_SOURCE_DIR}/example/glfw/include)

include(CheckLibraryExists)
CHECK_LIBRARY_EXISTS(m cos "" HAVE_M_LIB)
if(HAVE_M_LIB)
  set(M_LIBRARY "m")
endif(HAVE_M_LIB)

#---------------------------------------------------------------------

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/src)

find_package(Freetype)
if(FREETYPE_LIBRARY)
  add_definitions(-DFONS_USE_FREETYPE)
  include_directories(${FREETYPE_INCLUDE_DIR_freetype2} ${FREETYPE_INCLUDE_DIR_ft2build})
endif(FREETYPE_LIBRARY)

add_library(nanovg src/nanovg.c)

add_subdirectory(example)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8


