include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/../driver
  )

file(GLOB driver_html_srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")

add_library(grass_htmldriver ${driver_html_srcs})
target_link_libraries(grass_htmldriver grass_driver grass_gis ${M_LIBRARY})

MKHTML(htmldriver html "")

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
