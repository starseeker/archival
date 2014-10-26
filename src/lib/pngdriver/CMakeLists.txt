include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/../driver
  ${PNG_INCLUDE_DIRS}
  ${ZLIB_INCLUDE_DIR}
  )

file(GLOB driver_png_srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")

add_library(grass_pngdriver ${driver_png_srcs})
target_link_libraries(grass_pngdriver grass_driver grass_gis ${PNG_LIBRARIES} ${ZLIB_LIBRARY} ${M_LIBRARY})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
