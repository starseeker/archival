include_directories(
  ${GDAL_INCLUDE_DIR}
  ${PROJ4_INCLUDE_DIR}
  )

file(GLOB proj_srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")

add_library(grass_gproj ${proj_srcs})
target_link_libraries(grass_gproj grass_gis ${GDAL_LIBRARY} ${PROJ4_LIBRARY} ${M_LIBRARY})

#TODO - handle files

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
