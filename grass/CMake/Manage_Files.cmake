#             M A N A G E D _ F I L E S . C M A K E
#
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
###

# Need sophisticated option parsing
include(CMakeParseArguments)

include(${GRASS_SOURCE_DIR}/CMake/Normalize_File_List.cmake)

#-----------------------------------------------------------------------------
# Files needed by programs need to be both installed and copied into the
# correct locations in the build directories to allow executables to run
# at build time.  Ideally, we would like any error messages returned when
# running from the build directory to direct back to the copies of files in
# the source tree, since those are the ones that should be edited.
# On platforms that support symlinks, this is possible - build directory
# "copies" of files are symlinks to the source tree version.  On platforms
# without symlink support, we are forced to copy the files into place in
# the build directories.  In both cases we have a build target that is
# triggered if source files are edited in order to allow the build system
# to take further actions (for example, re-generating tclIndex and pkgIndex.tcl
# files when the source .tcl files change).
#
# Because CMAKE_MANAGE_FILES defines custom commands and specifies the files it is
# to copy/symlink as dependencies, there is a potential for file names to
# conflict with build target names. (This has actually been observed with
# MSVC - our file INSTALL in the toplevel source directory conflicts with the
# MSVC target named INSTALL.) To avoid conflicts and make the dependencies
# of the custom commands robust we supply full file paths as dependencies to
# the file copying custom commands.

macro(CMAKE_MANAGE_FILES inputdata targetdir)

  string(RANDOM LENGTH 10 ALPHABET 0123456789 VAR_PREFIX)
  if(${ARGC} GREATER 2)
    CMAKE_PARSE_ARGUMENTS(${VAR_PREFIX} "EXEC" "FOLDER" "" ${ARGN})
  endif(${ARGC} GREATER 2)

  # Handle both a list of one or more files and variable holding a list of files -
  # find out what we've got.
  NORMALIZE_FILE_LIST("${inputdata}" datalist fullpath_datalist targetname)

  #-----------------------------------------------------------------------------
  # Some of the more advanced build system features in ${CMAKE_PROJECT_NAME}'s CMake
  # build need to know whether symlink support is present on the
  # current OS - go ahead and do this test up front, caching the
  # results.
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
      get_filename_component(ITEM_NAME ${filename} NAME)
      if(NOT CMAKE_CONFIGURATION_TYPES)
	execute_process(COMMAND ${CMAKE_COMMAND} -E create_symlink ${filename} ${CMAKE_BINARY_DIR}/${targetdir}/${ITEM_NAME})
      else(NOT CMAKE_CONFIGURATION_TYPES)
	foreach(CFG_TYPE ${CMAKE_CONFIGURATION_TYPES})
	  string(TOUPPER "${CFG_TYPE}" CFG_TYPE_UPPER)
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
  set_target_properties(${targetname}_cp PROPERTIES FOLDER "${CMAKE_PROJECT_NAME} File Copying")

  # Set the FOLDER property.  If the target has supplied a folder, use
  # that as a subfolder
  if("${${VAR_PREFIX}_FOLDER}" STREQUAL "")
    set_target_properties(${execname} PROPERTIES FOLDER "${CMAKE_PROJECT_NAME} File Setup")
  else("${${VAR_PREFIX}_FOLDER}" STREQUAL "")
    set_target_properties(${execname} PROPERTIES FOLDER "${CMAKE_PROJECT_NAME} File Setup/${${VAR_PREFIX}_FOLDER}")
  endif("${${VAR_PREFIX}_FOLDER}" STREQUAL "")

  # The installation rule relates only to the original source directory copy, and so doesn't
  # need to explicitly concern itself with configurations.
  if(${VAR_PREFIX}_EXEC)
    install(PROGRAMS ${datalist} DESTINATION ${targetdir})
  else(${VAR_PREFIX}_EXEC)
    install(FILES ${datalist} DESTINATION ${targetdir})
  endif(${VAR_PREFIX}_EXEC)

endmacro(CMAKE_MANAGE_FILES)

#-----------------------------------------------------------------------------
# Specific uses of the CMAKE_MANAGED_FILES functionality

macro(CMAKE_ADDDATA datalist targetdir)
  CMAKE_MANAGE_FILES(${datalist} ${DATA_DIR}/${targetdir})
endmacro(CMAKE_ADDDATA)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
