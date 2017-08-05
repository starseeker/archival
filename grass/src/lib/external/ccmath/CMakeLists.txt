file(GLOB ccmath_srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")

add_library(grass_ccmath ${ccmath_srcs})
if(M_LIBRARY)
  target_link_libraries(grass_ccmath ${M_LIBRARY})
endif(M_LIBRARY)

configure_file(ccmath.h ${GRASS_BINARY_DIR}/${INCLUDE_DIR}/grass/ccmath_grass.h COPYONLY)
install(FILES ${GRASS_BINARY_DIR}/${INCLUDE_DIR}/grass/ccmath_grass.h DESTINATION ${INCLUDE_DIR}/grass)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
