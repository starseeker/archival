# TODO - these definitions should be triggered by some configure or settings tests,
# need to figure out which
add_definitions(-DGDAL_LINK=1)
add_definitions(-DGDAL_DYNAMIC=1)

file(GLOB raster_srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")

add_library(grass_raster ${raster_srcs})
target_link_libraries(grass_raster grass_gis ${M_LIBRARY} ${DL_LIBRARY})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
