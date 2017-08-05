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
cmake_minimum_required(VERSION 2.8.12)
if(COMMAND CMAKE_POLICY)
  CMAKE_POLICY(SET CMP0003 NEW)
  CMAKE_POLICY(SET CMP0007 OLD)
  CMAKE_POLICY(SET CMP0017 OLD)
  if ("${CMAKE_VERSION}" VERSION_GREATER 2.99)
    CMAKE_POLICY(SET CMP0026 OLD)
    CMAKE_POLICY(SET CMP0042 OLD)
  endif ("${CMAKE_VERSION}" VERSION_GREATER 2.99)
endif(COMMAND CMAKE_POLICY)

# Set CMake project name
project(GRASS)

file(STRINGS ${GRASS_SOURCE_DIR}/include/VERSION VERSION_NUMBERS)
list(GET VERSION_NUMBERS 0 GRASS_VERSION_MAJOR)
list(GET VERSION_NUMBERS 1 GRASS_VERSION_MINOR)
list(GET VERSION_NUMBERS 2 GRASS_VERSION_RELEASE)
set(GRASS_VERSION_NUMBER ${GRASS_VERSION_MAJOR}.${GRASS_VERSION_MINOR}.${GRASS_VERSION_RELEASE})
if("${GRASS_VERSION_RELEASE}" STREQUAL "svn")
  set(GRASS_VERSION_RELEASE "\"${GRASS_VERSION_RELEASE}\"")
endif("${GRASS_VERSION_RELEASE}" STREQUAL "svn")
list(GET VERSION_NUMBERS 3 GRASS_VERSION_DATE)

#---------------------------------------------------------------------
# CMake derives much of its functionality from modules, typically
# stored in one directory - let CMake know where to find them.  If we
# are a subbuild, let the parent's CMAKE_MODULE_PATH supply files before
set(GRASS_CMAKE_DIR "${GRASS_SOURCE_DIR}/CMake")
if(GRASS_IS_SUBBUILD)
  set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${GRASS_CMAKE_DIR}")
else(GRASS_IS_SUBBUILD)
  set(CMAKE_MODULE_PATH "${GRASS_CMAKE_DIR};${CMAKE_MODULE_PATH}")
endif(GRASS_IS_SUBBUILD)

#---------------------------------------------------------------------
# Define relative install locations.  Don't set these if they have already
# been set by some other means (like a higher level CMakeLists.txt file
# including this one).

include(${GRASS_CMAKE_DIR}/Path_Setup.cmake)

#---------------------------------------------------------------------
# The following logic is what allows binaries to run successfully in
# the build directory AND install directory.  Thanks to plplot for
# identifying the necessity of setting CMAKE_INSTALL_NAME_DIR on OSX.
# Documentation of these options is available at
# http://www.cmake.org/Wiki/CMake_RPATH_handling

include(${GRASS_CMAKE_DIR}/RPath_Setup.cmake)

#---------------------------------------------------------------------
set(BUILD_SHARED_LIBS ON)

#---------------------------------------------------------------------
find_package(FLEX)
find_package(BISON)
find_package(X11)
find_package(ZLIB)
if(ZLIB_INCLUDE_DIR)
  set(HAVE_ZLIB_H 1)
endif(ZLIB_INCLUDE_DIR)
find_package(OpenGL)
find_package(GDAL)
find_package(FFTW)
find_package(Cairo)
find_package(Freetype)
find_package(Fontconfig)
find_package(OpenMP)
find_package(PROJ4 REQUIRED)
find_package(Threads)
find_package(PNG)
find_package(Sqlite3)
find_program(PYTHON_EXECUTABLE python)

#---------------------------------------------------------------------
include(CheckIncludeFiles)
CHECK_INCLUDE_FILES(limits.h HAVE_LIMITS_H)
CHECK_INCLUDE_FILES(termio.h HAVE_TERMIO_H)
CHECK_INCLUDE_FILES(termios.h HAVE_TERMIOS_H)
CHECK_INCLUDE_FILES(unistd.h HAVE_UNISTD_H)
CHECK_INCLUDE_FILES(values.h HAVE_VALUES_H)
CHECK_INCLUDE_FILES(f2c.h HAVE_F2C_H)
CHECK_INCLUDE_FILES(g2c.h HAVE_G2C_H)
CHECK_INCLUDE_FILES(sys/ioctl.h HAVE_SYS_IOCTL_H)
CHECK_INCLUDE_FILES(sys/mtio.h HAVE_SYS_MTIO_H)
CHECK_INCLUDE_FILES(sys/resource.h HAVE_SYS_RESOURCE_H)
CHECK_INCLUDE_FILES(sys/time.h HAVE_SYS_TIME_H)
CHECK_INCLUDE_FILES(sys/timeb.h HAVE_SYS_TIMEB_H)
CHECK_INCLUDE_FILES(sys/types.h HAVE_SYS_TYPES_H)
CHECK_INCLUDE_FILES(sys/utsname.h HAVE_SYS_UTSNAME_H)
CHECK_INCLUDE_FILES(libintl.h HAVE_LIBINTL_H)
CHECK_INCLUDE_FILES(iconv.h HAVE_ICONV_H)
CHECK_INCLUDE_FILES(langinfo.h HAVE_LANGINFO_H)

#---------------------------------------------------------------------
include(CheckFunctionExists)
CHECK_FUNCTION_EXISTS(ftime HAVE_FTIME)
CHECK_FUNCTION_EXISTS(gethostname HAVE_GETHOSTNAME)
CHECK_FUNCTION_EXISTS(gettimeofday HAVE_GETTIMEOFDAY)
CHECK_FUNCTION_EXISTS(lseek HAVE_LSEEK)
CHECK_FUNCTION_EXISTS(nice HAVE_NICE)
CHECK_FUNCTION_EXISTS(time HAVE_TIME)
CHECK_FUNCTION_EXISTS(uname HAVE_UNAME)
CHECK_FUNCTION_EXISTS(seteuid HAVE_SETEUID)
CHECK_FUNCTION_EXISTS(setpriority HAVE_SETPRIORITY)
CHECK_FUNCTION_EXISTS(setreuid HAVE_SETREUID)
CHECK_FUNCTION_EXISTS(setruid HAVE_SETRUID)
CHECK_FUNCTION_EXISTS(drand48 HAVE_DRAND48)
CHECK_FUNCTION_EXISTS(putenv HAVE_PUTENV)
CHECK_FUNCTION_EXISTS(setenv HAVE_SETENV)
CHECK_FUNCTION_EXISTS(nanosleep HAVE_NANOSLEEP)
CHECK_FUNCTION_EXISTS(connect HAVE_CONNECT)
CHECK_FUNCTION_EXISTS(remove HAVE_REMOVE)
CHECK_FUNCTION_EXISTS(shmat HAVE_SHMAT)
CHECK_FUNCTION_EXISTS(dlsym HAVE_DLSYM)
CHECK_FUNCTION_EXISTS(iconv HAVE_ICONV)
CHECK_FUNCTION_EXISTS(socket HAVE_SOCKET)

#---------------------------------------------------------------------
include(CheckLibraryExists)
CHECK_LIBRARY_EXISTS(m atan "" HAVE_M_LIB)
if(HAVE_M_LIB)
  set(M_LIBRARY "m")
endif(HAVE_M_LIB)

CHECK_LIBRARY_EXISTS(dl dlopen "" HAVE_STD_DLOPEN)
if(HAVE_STD_DLOPEN)
  set(DL_LIBRARY "dl")
  set(HAVE_DLOPEN 1)
else(HAVE_STD_DLOPEN)
  CHECK_LIBRARY_EXISTS(c dlopen "" HAVE_C_DLOPEN)
  if(HAVE_C_DLOPEN)
    set(DL_LIBRARY "c")
    set(HAVE_DLOPEN 1)
  endif(HAVE_C_DLOPEN)
endif(HAVE_STD_DLOPEN)

# Check signal handler's return type
try_compile(sig_ret_void
  "${CMAKE_BINARY_DIR}/test_funcs"
  "${CMAKE_SOURCE_DIR}/CMake/test_srcs/sig_ret.c"
  )
if(sig_ret_void)
  set(RETSIGTYPE void)
else(sig_ret_void)
  set(RETSIGTYPE int)
endif(sig_ret_void)

#---------------------------------------------------------------------
# Set up variables for environment definitions in scripts
set(ENV_PYTHON_PATH ENV{PYTHON_PATH})
set(GRASS_PYTHONPATH "${GRASS_BINARY_DIR}/etc/python:${GRASS_SOURCE_DIR}/gui/wxpython:${ENV_PYTHON_PATH}")
set(GI_SRC "${GRASS_BINARY_DIR}/demolocation/.grassrc${GRASS_MAJOR_VERSION}${GRASS_MINOR_VERSION}")
set(GI_BASE "${GRASS_BINARY_DIR}")

include(${GRASS_SOURCE_DIR}/CMake/GRASS_DocMacros.cmake)

#---------------------------------------------------------------------
# Note - to avoid unnecessary rebuilding when CMake is re-run, only
# update the final configured files if they have changed since the
# last run (or if it is the first run)
file(MAKE_DIRECTORY ${GRASS_BINARY_DIR}/include)
file(MAKE_DIRECTORY ${GRASS_BINARY_DIR}/include/grass)

macro(update_config_file file_name)
  configure_file(${GRASS_SOURCE_DIR}/include/${file_name}.in ${GRASS_BINARY_DIR}/include/grass/${file_name}_tmp)
  execute_process(COMMAND ${CMAKE_COMMAND} -E copy_if_different ${GRASS_BINARY_DIR}/include/grass/${file_name}_tmp ${GRASS_BINARY_DIR}/include/grass/${file_name})
  file(REMOVE ${GRASS_BINARY_DIR}/include/grass/${file_name}_tmp)
endmacro(update_config_file file_name)

update_config_file(config.h)
update_config_file(version.h)

#---------------------------------------------------------------------
include(${GRASS_SOURCE_DIR}/CMake/Manage_Files.cmake)
add_subdirectory(include)
add_subdirectory(demolocation)
add_subdirectory(src)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

