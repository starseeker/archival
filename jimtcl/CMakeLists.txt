# Build system for JimTcl is based off of the build system for
# BRL-CAD.
#
# Copyright (c) 2010-2013 United States Government as represented by
# the U.S. Army Research Laboratory.
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
cmake_minimum_required(VERSION 2.8)
if(COMMAND CMAKE_POLICY)
  CMAKE_POLICY(SET CMP0003 NEW)
endif(COMMAND CMAKE_POLICY)

# Set CMake project name
project(JIMTCL)

# Set version
set(JIM_VERSION 75)

#---------------------------------------------------------------------
# CMake derives much of its functionality from modules, typically
# stored in one directory - let CMake know where to find them.  If we
# are a subbuild, let the parent's CMAKE_MODULE_PATH supply files before
set(JIMTCL_CMAKE_DIR "${JIMTCL_SOURCE_DIR}/CMake")
if(JIMTCL_IS_SUBBUILD)
  set(CMAKE_MODULE_PATH "${CMAKE_MODULE_PATH};${JIMTCL_CMAKE_DIR}")
else(JIMTCL_IS_SUBBUILD)
  set(CMAKE_MODULE_PATH "${JIMTCL_CMAKE_DIR};${CMAKE_MODULE_PATH}")
endif(JIMTCL_IS_SUBBUILD)

#---------------------------------------------------------------------
# Define relative install locations.  Don't set these if they have already
# been set by some other means (like a higher level CMakeLists.txt file
# including this one).

include(${JIMTCL_CMAKE_DIR}/Path_Setup.cmake)

#---------------------------------------------------------------------
# The following logic is what allows binaries to run successfully in
# the build directory AND install directory.  Thanks to plplot for
# identifying the necessity of setting CMAKE_INSTALL_NAME_DIR on OSX.
# Documentation of these options is available at
# http://www.cmake.org/Wiki/CMake_RPATH_handling

include(${JIMTCL_CMAKE_DIR}/RPath_Setup.cmake)


###############################################################################
#                           System checks
###############################################################################

make_directory(${CMAKE_CURRENT_BINARY_DIR}/include)
file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/include/jimautoconf.h "#ifndef _JIMAUTOCONF_H\n#define _JIMAUTOCONF_H\n")
file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/include/jimautoconf.h "#define JIM_VERSION ${JIM_VERSION}\n")

include(CheckIncludeFiles)
macro(JIMTCL_CHECK_INCLUDE_FILES header var)
  CHECK_INCLUDE_FILES(${header} ${var})
  if(${var})
    file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/include/jimautoconf.h "#define ${var} 1\n")
  else(${var})
    file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/include/jimautoconf.h "/* #undef ${var} */\n")
  endif(${var})
endmacro(JIMTCL_CHECK_INCLUDE_FILES)
JIMTCL_CHECK_INCLUDE_FILES(stdlib.h HAVE_STDLIB_H)
JIMTCL_CHECK_INCLUDE_FILES(sys/time.h HAVE_SYS_TIME_H)
JIMTCL_CHECK_INCLUDE_FILES(sys/socket.h HAVE_SYS_SOCKET_H)
JIMTCL_CHECK_INCLUDE_FILES(sys/sysinfo.h HAVE_SYS_SYSINFO_H)
JIMTCL_CHECK_INCLUDE_FILES(netinet/in.h HAVE_NETINET_IN_H)
JIMTCL_CHECK_INCLUDE_FILES(arpa/inet.h HAVE_ARPA_INET_H)
JIMTCL_CHECK_INCLUDE_FILES(netdb.h HAVE_NETDB_H)
JIMTCL_CHECK_INCLUDE_FILES(sys/un.h HAVE_SYS_UN_H)
JIMTCL_CHECK_INCLUDE_FILES(dlfcn.h HAVE_DLFCN_H)
JIMTCL_CHECK_INCLUDE_FILES(unistd.h HAVE_UNISTD_H)
JIMTCL_CHECK_INCLUDE_FILES(dirent.h HAVE_DIRENT_H)
JIMTCL_CHECK_INCLUDE_FILES(crt_externs.h HAVE_CRT_EXTERNS_H)
JIMTCL_CHECK_INCLUDE_FILES(sys/types.h HAVE_SYS_TYPES_H)
JIMTCL_CHECK_INCLUDE_FILES(sys/stat.h HAVE_SYS_STAT_H)
JIMTCL_CHECK_INCLUDE_FILES(termios.h HAVE_TERMIOS_H)

#TODO - why doesn't this work when it does in JimTcl?
include(CheckSymbolExists)
macro(JIMTCL_CHECK_SYMBOL_EXISTS symbol header var)
  CHECK_SYMBOL_EXISTS(${symbol} "${header}" ${var})
  if(${var})
    file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/include/jimautoconf.h "#define ${var} 1\n")
  else(${var})
    file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/include/jimautoconf.h "/* #undef ${var} */\n")
  endif(${var})
endmacro(JIMTCL_CHECK_SYMBOL_EXISTS)
if(HAVE_UNISTD_H)
  JIMTCL_CHECK_SYMBOL_EXISTS(environ "unistd.h" HAVE_ENVIRON)
endif(HAVE_UNISTD_H)

include(CheckFunctionExists)
macro(JIMTCL_CHECK_FUNCTION_EXISTS header var)
  CHECK_FUNCTION_EXISTS(${header} ${var})
  if(${var})
    file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/include/jimautoconf.h "#define ${var} 1\n")
  else(${var})
    file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/include/jimautoconf.h "/* #undef ${var} */\n")
  endif(${var})
endmacro(JIMTCL_CHECK_FUNCTION_EXISTS)
JIMTCL_CHECK_FUNCTION_EXISTS(ualarm HAVE_UALARM)
JIMTCL_CHECK_FUNCTION_EXISTS(lstat HAVE_LSTAT)
JIMTCL_CHECK_FUNCTION_EXISTS(fork HAVE_FORK)
JIMTCL_CHECK_FUNCTION_EXISTS(vfork HAVE_VFORK)
JIMTCL_CHECK_FUNCTION_EXISTS(system HAVE_SYSTEM)
JIMTCL_CHECK_FUNCTION_EXISTS(select HAVE_SELECT)
JIMTCL_CHECK_FUNCTION_EXISTS(execvpe HAVE_EXECVPE)
JIMTCL_CHECK_FUNCTION_EXISTS(backtrace HAVE_BACKTRACE)
JIMTCL_CHECK_FUNCTION_EXISTS(geteuid HAVE_GETEUID)
JIMTCL_CHECK_FUNCTION_EXISTS(mkstemp HAVE_MKSTEMP)
JIMTCL_CHECK_FUNCTION_EXISTS(realpath HAVE_REALPATH)
JIMTCL_CHECK_FUNCTION_EXISTS(strptime HAVE_STRPTIME)
JIMTCL_CHECK_FUNCTION_EXISTS(isatty HAVE_ISATTY)
JIMTCL_CHECK_FUNCTION_EXISTS(regcomp HAVE_REGCOMP)
JIMTCL_CHECK_FUNCTION_EXISTS(waitpid HAVE_WAITPID)
JIMTCL_CHECK_FUNCTION_EXISTS(sigaction HAVE_SIGACTION)
JIMTCL_CHECK_FUNCTION_EXISTS(sys_signame HAVE_SYS_SIGNAME)
JIMTCL_CHECK_FUNCTION_EXISTS(sys_siglist HAVE_SYS_SIGLIST)
JIMTCL_CHECK_FUNCTION_EXISTS(isascii HAVE_ISASCII)
JIMTCL_CHECK_FUNCTION_EXISTS(syslog HAVE_SYSLOG)
JIMTCL_CHECK_FUNCTION_EXISTS(opendir HAVE_OPENDIR)
JIMTCL_CHECK_FUNCTION_EXISTS(readlink HAVE_READLINK)
JIMTCL_CHECK_FUNCTION_EXISTS(sleep HAVE_SLEEP)
JIMTCL_CHECK_FUNCTION_EXISTS(usleep HAVE_USLEEP)
JIMTCL_CHECK_FUNCTION_EXISTS(pipe HAVE_PIPE)
JIMTCL_CHECK_FUNCTION_EXISTS(getaddrinfo HAVE_GETADDRINFO)
JIMTCL_CHECK_FUNCTION_EXISTS(utimes HAVE_UTIMES)
JIMTCL_CHECK_FUNCTION_EXISTS(shutdown HAVE_SHUTDOWN)
JIMTCL_CHECK_FUNCTION_EXISTS(socketpair HAVE_SOCKETPAIR)
JIMTCL_CHECK_FUNCTION_EXISTS(isinf HAVE_ISINF)
JIMTCL_CHECK_FUNCTION_EXISTS(isnan HAVE_ISNAN)
JIMTCL_CHECK_FUNCTION_EXISTS(sysinfo HAVE_SYSINFO)
JIMTCL_CHECK_FUNCTION_EXISTS(fseeko HAVE_FSEEKO)
JIMTCL_CHECK_FUNCTION_EXISTS(ftello HAVE_FTELLO)
JIMTCL_CHECK_FUNCTION_EXISTS(_NSGetEnviron HAVE__NSGETENVIRON)

include(CheckLibraryExists)
CHECK_LIBRARY_EXISTS(dl dlopen "" HAVE_STD_DLOPEN)
if(HAVE_STD_DLOPEN)
  set(DL_LIBRARY "dl")
  file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/include/jimautoconf.h "#define HAVE_DLOPEN 1\n")
else(HAVE_STD_DLOPEN)
  CHECK_LIBRARY_EXISTS(c dlopen "" HAVE_C_DLOPEN)
  if(HAVE_C_DLOPEN)
    set(DL_LIBRARY "c")
    file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/include/jimautoconf.h "#define HAVE_DLOPEN 1\n")
  endif(HAVE_C_DLOPEN)
endif(HAVE_STD_DLOPEN)

include(CheckTypeSize)
macro(JIMTCL_CHECK_TYPE_SIZE header var)
  CHECK_TYPE_SIZE(${header} ${var})
  if(${var})
    file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/include/jimautoconf.h "#define ${var} 1\n")
  else(${var})
    file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/include/jimautoconf.h "/* #undef ${var} */\n")
  endif(${var})
endmacro(JIMTCL_CHECK_TYPE_SIZE)
JIMTCL_CHECK_TYPE_SIZE("long long" HAVE_LONG_LONG)

#Checking for mkdir with one arg...no
#Checking if -D_FILE_OFFSET_BITS=64 is needed...no
#Checking libs for inet_ntop...none needed
#Checking libs for socket...none needed
#CHECK_FUNCTION_EXISTS(struct sysinfo.uptime...ok

file(APPEND ${CMAKE_CURRENT_BINARY_DIR}/include/jimautoconf.h "#endif /*_JIMAUTOCONF_H*/\n")

###############################################################################
#                     Start of Tcl specific logic
###############################################################################

configure_file(jim-config.h.in ${CMAKE_CURRENT_BINARY_DIR}/include/jim-config.h)

macro(JIMTCL_OPTION feature helpstring deps)
  string(TOUPPER "${feature}" FEATURE_UPPER)
  option(JIMTCL_ENABLE_${FEATURE_UPPER} "${helpstring}" "${JIMTCL_ENABLE_${FEATURE_UPPER}}")
  if(JIMTCL_ENABLE_${FEATURE_UPPER})
    set(jimtcl_srcs ${jimtcl_srcs} jim-${feature}.c)
  endif(JIMTCL_ENABLE_${FEATURE_UPPER})
endmacro(JIMTCL_OPTION)

set(jimtcl_srcs
  jim-subcmd.c
  jim-interactive.c
  jim-format.c
  jim.c
  )

OPTION(JIMTCL_ENABLE_UTF8 "include support for utf8-encoded strings" "${JIMTCL_ENABLE_UTF8}")
if(JIMTCL_ENABLE_UTF8)
  set(jimtcl_srcs ${jimtcl_srcs} utf8.c)
endif(JIMTCL_ENABLE_UTF8)

OPTION(JIMTCL_ENABLE_REGEX "${JIMTCL_ENABLE_REGEX}")
if(JIMTCL_ENABLE_REGEX)
  set(jimtcl_srcs ${jimtcl_srcs} jim-regexp.c jimregexp.c)
endif(JIMTCL_ENABLE_REGEX)

#JIMTCL_OPTION(aio )
#JIMTCL_OPTION(array)
#JIMTCL_OPTION(clock)
#JIMTCL_OPTION(eventloop)
#JIMTCL_OPTION(exec)
#JIMTCL_OPTION(file)
#JIMTCL_OPTION(history)
#JIMTCL_OPTION(load "DL_LIBRARY")
#JIMTCL_OPTION(namespace)
#JIMTCL_OPTION(pack)
#JIMTCL_OPTION(package)
#JIMTCL_OPTION(posix)
#JIMTCL_OPTION(readdir)
#JIMTCL_OPTION(readline)
#JIMTCL_OPTION(sdl)
#JIMTCL_OPTION(signal)
#JIMTCL_OPTION(sqlite3)
#JIMTCL_OPTION(syslog)
#JIMTCL_OPTION(tclprefix)

#JIMTCL_OPTION(oo)
#JIMTCL_OPTION(nshelper)
#JIMTCL_OPTION(binary)
#JIMTCL_OPTION(glob)
#JIMTCL_OPTION(stdlib)
#JIMTCL_OPTION(tclcompat)

#jimsh.c
#jim-win32.c
#jim-win32compat.c
#linenoise.c

include_directories(
  ${CMAKE_CURRENT_BINARY_DIR}/include
  ${CMAKE_CURRENT_SOURCE_DIR}/include
  )

add_library(jimtcl SHARED ${jimtcl_srcs})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

