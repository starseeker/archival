include_directories(
  ${FFTW_INCLUDES}
  )

file(GLOB gmath_srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")

add_library(grass_gmath ${gmath_srcs})
target_link_libraries(grass_gmath grass_gis ${FFTW_LIBRARY} ${M_LIBRARY} grass_ccmath)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
