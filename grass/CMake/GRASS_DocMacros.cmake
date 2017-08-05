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

macro(MKHTML input_name targetdir deps_list)
  set(outfile ${GRASS_BINARY_DIR}/${DOC_DIR}/${targetdir}/${input_name}.html)
  set(input_name ${input_name})
  set(targetname ${input_name}_html)
  # Generate the script that will be used to run the python script 
  file(MAKE_DIRECTORY ${GRASS_BINARY_DIR}/${DOC_DIR}/${targetdir})
  set(scriptfile ${CMAKE_CURRENT_BINARY_DIR}/${targetname}.cmake)
  configure_file(${GRASS_SOURCE_DIR}/CMake/mkhtml.cmake.in ${scriptfile} @ONLY)

  add_custom_command(
    OUTPUT ${outfile}
    COMMAND ${CMAKE_COMMAND} -P ${scriptfile}
    DEPENDS ${CMAKE_CURRENT_SOURCE_DIR}/${input_name}.html ${deps_list}
    )
  add_custom_target(${targetname} ALL DEPENDS ${outfile})
  set_target_properties(${targetname} PROPERTIES FOLDER "HTML")

  install(FILES ${outfile} DESTINATION ${DOC_DIR}/${targetdir})
endmacro(MKHTML)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
