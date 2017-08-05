include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/../driver
  ${FREETYPE_INCLUDE_DIR_freetype2}
  ${FREETYPE_INCLUDE_DIR_ft2build}
  ${FONTCONFIG_INCLUDE_DIR}
  ${CAIRO_INCLUDE_DIRS}
  )

file(GLOB driver_cairo_srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")

add_library(grass_cairodriver ${driver_cairo_srcs})
target_link_libraries(grass_cairodriver grass_driver grass_gis ${ZLIB_LIBRARY} ${FONTCONFIG_LIBRARY} ${FREETYPE_LIBRARY} ${FONTCONFIG_LIBRARIES} ${X11_LIBRARIES} ${CAIRO_LIBRARIES} ${M_LIBRARY})

MKHTML(cairodriver html "")

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
