include_directories(
  ${FREETYPE_INCLUDE_DIR_freetype2}
  ${FREETYPE_INCLUDE_DIR_ft2build}
  )

file(GLOB driver_srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")

add_library(grass_driver ${driver_srcs})
target_link_libraries(grass_driver grass_gis ${FREETYPE_LIBRARY} ${M_LIBRARY})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
