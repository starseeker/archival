#             T C L _ S C R I P T F I L E S . C M A K E
# BRL-CAD
#
# Copyright (c) 2011-2012 United States Government as represented by
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
###

# For situations like file copying, where we sometimes need to autogenerate
# target names, it is important to make sure we can avoid generating absurdly
# long names.  To do this, we run candidate names through a length filter
# and use their MD5 hash if they are too long.
macro(TCL_TARGET_NAME input_string outputvar)
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
endmacro(TCL_TARGET_NAME) 

#----------------------------------------------------------------------------- 
# It is sometimes convenient to be able to supply both a filename and a 
# variable name containing a list of files to a single macro. 
# This routine handles both forms of input - separate variables are 
# used to indicate which variable names are supposed to contain the 
# initial list contents and the full path version of that list.  Thus, 
# macros using the normalize macro get the list in a known variable and 
# can use it reliably, regardless of whether inlist contained the actual 
# list contents or a variable. 

if(NOT COMMAND NORMALIZE_FILE_LIST)
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
    TCL_TARGET_NAME("${inlist}" targetname) 
  else(NOT havevarname) 
    set(${targetvar} "${${inlist}}") 
    set(targetname "${inlist}") 
  endif(NOT havevarname) 
 
  # Mark the inputs as files to ignore in distcheck 
  if(COMMAND CMAKEFILES)
    CMAKEFILES(${${targetvar}}) 
  endif(COMMAND CMAKEFILES)
 
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
endif(NOT COMMAND NORMALIZE_FILE_LIST)

#-----------------------------------------------------------------------------
# Need to know whether symlink support is present on the current OS - go
# ahead and do this test up front, caching the results.
if(NOT DEFINED HAVE_SYMLINK)
  message("--- Checking operating system support for file symlinking")
  file(WRITE ${CMAKE_BINARY_DIR}/CMakeTmp/link_test_src "testing for symlink ability")
  execute_process(COMMAND ${CMAKE_COMMAND} -E create_symlink ${CMAKE_BINARY_DIR}/CMakeTmp/link_test_src ${CMAKE_BINARY_DIR}/CMakeTmp/link_test_dest)
  if(EXISTS ${CMAKE_BINARY_DIR}/CMakeTmp/link_test_dest)
    message("--- Checking operating system support for file symlinking - Supported")
    set(HAVE_SYMLINK 1 CACHE BOOL "Platform supports creation of symlinks" FORCE)
    mark_as_advanced(HAVE_SYMLINK)
    file(REMOVE ${CMAKE_BINARY_DIR}/CMakeTmp/link_test_src ${CMAKE_BINARY_DIR}/CMakeTmp/link_test_dest)
  else(EXISTS ${CMAKE_BINARY_DIR}/CMakeTmp/link_test_dest)
    message("--- Checking operating system support for file symlinking - Unsupported")
    set(HAVE_SYMLINK 0 CACHE BOOL "Platform does not support creation of symlinks" FORCE)
    mark_as_advanced(HAVE_SYMLINK)
    file(REMOVE ${CMAKE_BINARY_DIR}/CMakeTmp/link_test_src)
  endif(EXISTS ${CMAKE_BINARY_DIR}/CMakeTmp/link_test_dest)
endif(NOT DEFINED HAVE_SYMLINK)


#-----------------------------------------------------------------------------
# Tcl/Tk script files that are to be copied for use in a Tcl/TK installation
# also need to be copied to the CMake build directory (or, ideally, symlinked
# in the CMake build directory.)  TCL_SCRIPTFILES, based on BRL-CAD's
# BRLCAD_MANAGE_FILES macro, automatically sets up the correct logic for
# this process.  Note that it does not handle PkgIndex files - that's a
# separate macro.

macro(TCL_SCRIPTFILES inputdata targetdir)
  # Handle both a list of one or more files and variable holding a list of files -
  # find out what we've got.
  NORMALIZE_FILE_LIST("${inputdata}" datalist fullpath_datalist targetname)

  # Now that the input data and target names are in order, define the custom
  # commands needed for build directory data copying on this platform (per
  # symlink test results.)

  if(HAVE_SYMLINK)

    # Make sure the target directory exists (symlinks need the target directory already in place)
    if(NOT CMAKE_CONFIGURATION_TYPES)
      execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/${targetdir})
    else(NOT CMAKE_CONFIGURATION_TYPES)
      foreach(CFG_TYPE ${CMAKE_CONFIGURATION_TYPES})
	string(TOUPPER "${CFG_TYPE}" CFG_TYPE_UPPER)
	execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR_${CFG_TYPE_UPPER}}/${targetdir})
      endforeach(CFG_TYPE ${CMAKE_CONFIGURATION_TYPES})
    endif(NOT CMAKE_CONFIGURATION_TYPES)

    # Using symlinks - in this case, the custom command doesn't actually have to
    # do the work every time the source file changes - once established, the symlink
    # will behave correctly.  That being the case, we just go ahead and establish the
    # symlinks in the configure stage.
    foreach(filename ${fullpath_datalist})
      string(REPLACE "${CMAKE_CURRENT_SOURCE_DIR}" "" ITEM_NAME "${filename}")
      string(REGEX REPLACE "^/" "" ITEM_NAME "${ITEM_NAME}")
      get_filename_component(ITEM_PATH ${ITEM_NAME} PATH)
      if(NOT CMAKE_CONFIGURATION_TYPES)
	if(ITEM_PATH)
	  execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR}/${targetdir}/${ITEM_PATH})
	endif(ITEM_PATH)
	execute_process(COMMAND ${CMAKE_COMMAND} -E create_symlink ${filename} ${CMAKE_BINARY_DIR}/${targetdir}/${ITEM_NAME})
      else(NOT CMAKE_CONFIGURATION_TYPES)
	foreach(CFG_TYPE ${CMAKE_CONFIGURATION_TYPES})
	  string(TOUPPER "${CFG_TYPE}" CFG_TYPE_UPPER)
	  if(ITEM_PATH)
	    execute_process(COMMAND ${CMAKE_COMMAND} -E make_directory ${CMAKE_BINARY_DIR_${CFG_TYPE_UPPER}}/${targetdir}/${ITEM_PATH})
	  endif(ITEM_PATH)
	  execute_process(COMMAND ${CMAKE_COMMAND} -E create_symlink ${filename} ${CMAKE_BINARY_DIR_${CFG_TYPE_UPPER}}/${targetdir}/${ITEM_NAME})
	endforeach(CFG_TYPE ${CMAKE_CONFIGURATION_TYPES})
      endif(NOT CMAKE_CONFIGURATION_TYPES)
    endforeach(filename ${fullpath_datalist})

    # The custom command is still necessary - since it depends on the original source files,
    # this will be the trigger that tells other commands depending on this data that
    # they need to re-run one one of the source files is changed.
    add_custom_command(
      OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/${targetname}.sentinel
      COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_BINARY_DIR}/${targetname}.sentinel
      DEPENDS ${fullpath_datalist}
      )

  else(HAVE_SYMLINK)

    # Write out script for copying from source dir to build dir
    set(${targetname}_cmake_contents "set(FILES_TO_COPY \"${fullpath_datalist}\")\n")
    set(${targetname}_cmake_contents "${${targetname}_cmake_contents}foreach(filename \${FILES_TO_COPY})\n")
    if(NOT CMAKE_CONFIGURATION_TYPES)
      set(${targetname}_cmake_contents "${${targetname}_cmake_contents}  file(COPY \${FILES_TO_COPY} DESTINATION \"${CMAKE_BINARY_DIR}/${targetdir}\")\n")
    else(NOT CMAKE_CONFIGURATION_TYPES)
      foreach(CFG_TYPE ${CMAKE_CONFIGURATION_TYPES})
	string(TOUPPER "${CFG_TYPE}" CFG_TYPE_UPPER)
	set(${targetname}_cmake_contents "${${targetname}_cmake_contents}  file(COPY \${FILES_TO_COPY} DESTINATION \"${CMAKE_BINARY_DIR_${CFG_TYPE_UPPER}}/${targetdir}\")\n")
      endforeach(CFG_TYPE ${CMAKE_CONFIGURATION_TYPES})
    endif(NOT CMAKE_CONFIGURATION_TYPES)
    set(${targetname}_cmake_contents "${${targetname}_cmake_contents}endforeach(filename \${CURRENT_FILE_LIST})\n")
    file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/${targetname}.cmake "${${targetname}_cmake_contents}")

    # Define custom command for copying from src to bin.
    add_custom_command(
      OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/${targetname}.sentinel
      COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/${targetname}.cmake
      COMMAND ${CMAKE_COMMAND} -E touch ${CMAKE_CURRENT_BINARY_DIR}/${targetname}.sentinel
      DEPENDS ${fullpath_datalist}
      )
  endif(HAVE_SYMLINK)

  # Define the target and add it to this directories list of data targets
  add_custom_target(${targetname}_cp ALL DEPENDS ${CMAKE_CURRENT_BINARY_DIR}/${targetname}.sentinel)
  if(COMMAND BRLCAD_ADD_DIR_LIST_ENTRY)
    BRLCAD_ADD_DIR_LIST_ENTRY(DATA_TARGETS "${CMAKE_CURRENT_BINARY_DIR}" ${targetname}_cp)
  endif(COMMAND BRLCAD_ADD_DIR_LIST_ENTRY)

  # Add outputs to the distclean rules - this is consistent regardless of what type the output
  # file is, symlink or copy.  Just need to handle the single and multiconfig cases.
  if(COMMAND DISTCLEAN)
    foreach(filename ${fullpath_datalist})
      string(REPLACE "${CMAKE_CURRENT_SOURCE_DIR}" "" ITEM_NAME "${filename}")
      string(REGEX REPLACE "^/" "" ITEM_NAME "${ITEM_NAME}")
      if(NOT CMAKE_CONFIGURATION_TYPES)
	DISTCLEAN(${CMAKE_BINARY_DIR}/${targetdir}/${ITEM_NAME})
      else(NOT CMAKE_CONFIGURATION_TYPES)
	foreach(CFG_TYPE ${CMAKE_CONFIGURATION_TYPES})
	  string(TOUPPER "${CFG_TYPE}" CFG_TYPE_UPPER)
	  DISTCLEAN(${CMAKE_BINARY_DIR_${CFG_TYPE_UPPER}}/${targetdir}/${ITEM_NAME})
	endforeach(CFG_TYPE ${CMAKE_CONFIGURATION_TYPES})
      endif(NOT CMAKE_CONFIGURATION_TYPES)
    endforeach(filename ${fullpath_datalist})
  endif(COMMAND DISTCLEAN)

  # The installation rule relates only to the original source directory copy, and so doesn't
  # need to explicitly concern itself with configurations.
  install(FILES ${datalist} DESTINATION ${targetdir})

endmacro(TCL_SCRIPTFILES)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
