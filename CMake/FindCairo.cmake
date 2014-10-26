# (This is a BSD License)
# Copyright (c) 2002, 2003 Steve Dekorte
# All rights reserved.
# Redistribution and use in source and binary forms, with or
# without modification, are permitted provided that the
# following conditions are met:
#
# Redistributions of source code must retain the above copyright
# notice, this list of conditions and the following disclaimer.
#
# Redistributions in binary form must reproduce the above copyright
# notice, this list of conditions and the following disclaimer in
# the documentation and/or other materials provided with the distribution.
#
# Neither the name of the author nor the names of other contributors
# may be used to endorse or promote products derived from this software
# without specific prior written permission.

# THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
# "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED
# TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A
# PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE REGENTS OR
# CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
# EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
# PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR
# PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF
# LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING
# NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
# EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.

# - Try to find the cairo library
# Once done this will define
#
#  CAIRO_FOUND - system has cairo
#  CAIRO_INCLUDE_DIRS - the cairo include directory
#  CAIRO_LIBRARIES - Link these to use cairo
#
# Define CAIRO_MIN_VERSION for which version desired.
#

INCLUDE(FindPkgConfig)

IF(Cairo_FIND_REQUIRED)
	SET(_pkgconfig_REQUIRED "REQUIRED")
ELSE(Cairo_FIND_REQUIRED)
	SET(_pkgconfig_REQUIRED "")
ENDIF(Cairo_FIND_REQUIRED)

IF(CAIRO_MIN_VERSION)
	PKG_SEARCH_MODULE(CAIRO ${_pkgconfig_REQUIRED} cairo>=${CAIRO_MIN_VERSION})
ELSE(CAIRO_MIN_VERSION)
	PKG_SEARCH_MODULE(CAIRO ${_pkgconfig_REQUIRED} cairo)
ENDIF(CAIRO_MIN_VERSION)

IF(NOT CAIRO_FOUND AND NOT PKG_CONFIG_FOUND)
	FIND_PATH(CAIRO_INCLUDE_DIRS cairo.h)
	FIND_LIBRARY(CAIRO_LIBRARIES cairo)

	# Report results
	IF(CAIRO_LIBRARIES AND CAIRO_INCLUDE_DIRS)
		SET(CAIRO_FOUND 1)
		IF(NOT Cairo_FIND_QUIETLY)
			MESSAGE(STATUS "Found Cairo: ${CAIRO_LIBRARIES}")
		ENDIF(NOT Cairo_FIND_QUIETLY)
	ELSE(CAIRO_LIBRARIES AND CAIRO_INCLUDE_DIRS)	
		IF(Cairo_FIND_REQUIRED)
			MESSAGE(SEND_ERROR "Could not find Cairo")
		ELSE(Cairo_FIND_REQUIRED)
			IF(NOT Cairo_FIND_QUIETLY)
				MESSAGE(STATUS "Could not find Cairo")	
			ENDIF(NOT Cairo_FIND_QUIETLY)
		ENDIF(Cairo_FIND_REQUIRED)
	ENDIF(CAIRO_LIBRARIES AND CAIRO_INCLUDE_DIRS)
ENDIF(NOT CAIRO_FOUND AND NOT PKG_CONFIG_FOUND)

# Hide advanced variables from CMake GUIs
MARK_AS_ADVANCED(CAIRO_LIBRARIES CAIRO_INCLUDE_DIRS)
