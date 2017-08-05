# Copyright (c) 2014 Clifford Yapp
# Copyright (c) 1995-2014, Stanford University
# All rights reserved.
#
# Redistribution and use in source and binary forms, with or without
# modification, are permitted provided that the following conditions are met:
#     * Redistributions of source code must retain the above copyright
#       notice, this list of conditions and the following disclaimer.
#     * Redistributions in binary form must reproduce the above copyright
#       notice, this list of conditions and the following disclaimer in the
#       documentation and/or other materials provided with the distribution.
#     * Neither the name of Stanford University nor the
#       names of its contributors may be used to endorse or promote products
#       derived from this software without specific prior written permission.
#
# THIS SOFTWARE IS PROVIDED BY STANFORD UNIVERSITY ''AS IS'' AND ANY
# EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
# WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
# DISCLAIMED. IN NO EVENT SHALL STANFORD UNIVERSITY BE LIABLE FOR ANY
# DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
# (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
# LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
# ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
# (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
# SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
#
# This licence superceeds older licenses for this software, per
# http://www-graphics.stanford.edu/software/volfill/
# See http://graphics.stanford.edu/software/bsd-license.html for details

#---------------------------------------------------------------------
include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/../include
  ${OPENGL_INCLUDE_DIR}
  ${GLFW3_INCLUDE_DIR}
  )

set(volfill_srcs
  ActiveGrid.cc
  ChunkAllocator.cc
  ChunkLink.cc
  Matrix2f.cc
  Matrix3f.cc
  Matrix4f.cc
  OccGrid.cc
  OccGridRLE.cc
  Quaternion.cc
  Vec3f.cc
  fb.cc
  main.cc
  util.cc
  )

add_executable(volfill ${volfill_srcs})
target_link_libraries(volfill ${OPENGL_gl_LIBRARY} ${OPENGL_glu_LIBRARY} ${GLFW3_LIBRARIES})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
