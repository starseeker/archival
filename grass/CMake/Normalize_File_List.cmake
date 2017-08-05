# Copyright (c) 2011-2014 United States Government as represented by
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
#
#-----------------------------------------------------------------------------
# For situations like file copying, where we sometimes need to autogenerate
# target names, it is important to make sure we can avoid generating absurdly
# long names.  To do this, we run candidate names through a length filter
# and use their MD5 hash if they are too long.
macro(CMAKE_FILE_COPY_TARGET_NAME input_string outputvar)
  string(REGEX REPLACE "/" "_" targetstr ${input_string})
  string(REGEX REPLACE "\\." "_" targetstr ${targetstr})
  string(LENGTH "${targetstr}" STRLEN)
  # If the input string is longer than 30 characters, generate a
  # shorter string using the md5 hash.  It will be cryptic but
  # the odds are very good it'll be a unique target name
  # and the string will be short enough, which is what we need.
  if ("${STRLEN}" GREATER 30)
    file(WRITE ${CMAKE_BINARY_DIR}/CMakeTmp/MD5CONTENTS "${targetstr}")
    execute_process(COMMAND ${CMAKE_COMMAND} -E md5sum ${CMAKE_BINARY_DIR}/CMakeTmp/MD5CONTENTS OUTPUT_VARIABLE targetname)
    string(REPLACE " ${CMAKE_BINARY_DIR}/CMakeTmp/MD5CONTENTS" "" targetname "${targetname}")
    string(STRIP "${targetname}" targetname)
    file(REMOVE ${CMAKE_BINARY_DIR}/CMakeTmp/MD5CONTENTS)
    set(${outpvar} ${targetname})
  else ("${STRLEN}" GREATER 30)
    set(${outputvar} "${targetstr}")
  endif ("${STRLEN}" GREATER 30)
endmacro(CMAKE_FILE_COPY_TARGET_NAME)


#-----------------------------------------------------------------------------
# It is sometimes convenient to be able to supply both a filename and a
# variable name containing a list of files to a single macro.
# This routine handles both forms of input - separate variables are
# used to indicate which variable names are supposed to contain the
# initial list contents and the full path version of that list.  Thus,
# macros using the normalize macro get the list in a known variable and
# can use it reliably, regardless of whether inlist contained the actual
# list contents or a variable.
macro(NORMALIZE_FILE_LIST inlist targetvar fullpath_targetvar)

  # First, figure out whether we have list contents or a list name
  set(havevarname 0)
  foreach(maybefilename ${inlist})
    if(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${maybefilename})
      set(havevarname 1)
    endif(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/${maybefilename})
  endforeach(maybefilename ${${targetvar}})

  # Put the list contents in the targetvar variable and
  # generate a target name.
  if(NOT havevarname)
    set(${targetvar} "${inlist}")
    CMAKE_FILE_COPY_TARGET_NAME("${inlist}" targetname)
  else(NOT havevarname)
    set(${targetvar} "${${inlist}}")
    set(targetname "${inlist}")
  endif(NOT havevarname)

  # For some uses, we need the contents of the input list
  # with full paths.  Generate a list that we're sure has
  # full paths, and return that to the second variable.
  set(${fullpath_targetvar} "")
  foreach(filename ${${targetvar}})
    get_filename_component(file_fullpath "${filename}" ABSOLUTE)
    set(${fullpath_targetvar} ${${fullpath_targetvar}} "${file_fullpath}")
  endforeach(filename ${${targetvar}})

  # Some macros will also want a valid build target name
  # based on the input - if a third input parameter has
  # been supplied, return the target name using it.
  if(NOT "${ARGV3}" STREQUAL "")
    set(${ARGV3} "${targetname}")
  endif(NOT "${ARGV3}" STREQUAL "")

endmacro(NORMALIZE_FILE_LIST)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
