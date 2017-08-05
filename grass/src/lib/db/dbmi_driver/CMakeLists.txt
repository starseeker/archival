include_directories(
  ${CMAKE_CURRENT_SOURCE_DIR}/../dbmi_base
  )

file(GLOB dbmidriver_srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")

add_library(grass_dbmidriver ${dbmidriver_srcs})
target_link_libraries(grass_dbmidriver grass_dbmibase grass_dbstubs grass_gis ${M_LIBRARY})

install(FILES dbstubs.h DESTINATION ${INCLUDE_DIR}/grass)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
