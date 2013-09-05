# Minimum required version of CMake
CMAKE_MINIMUM_REQUIRED(VERSION 2.8.3)
if(COMMAND CMAKE_POLICY)
  CMAKE_POLICY(SET CMP0003 NEW)
endif(COMMAND CMAKE_POLICY)

# set CMake project name
project(PINOCCHIO)

add_subdirectory(Pinocchio)
add_subdirectory(AttachWeights)
add_subdirectory(DemoUI)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
