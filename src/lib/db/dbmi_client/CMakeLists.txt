include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/../dbmi_base
  )

file(GLOB dbmiclient_srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")

add_library(grass_dbmiclient ${dbmiclient_srcs})
target_link_libraries(grass_dbmiclient grass_dbmibase grass_gis ${M_LIBRARY})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
