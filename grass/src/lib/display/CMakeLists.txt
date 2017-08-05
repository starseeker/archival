include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/../driver
  )

add_definitions(-DUSE_CAIRO)

file(GLOB display_srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")

add_library(grass_display ${display_srcs})
target_link_libraries(grass_display grass_htmldriver grass_pngdriver grass_psdriver grass_driver grass_raster grass_gis ${M_LIBRARY})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
