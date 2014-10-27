file(GLOB dbstubs_srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")

add_library(grass_dbstubs ${dbstubs_srcs})
target_link_libraries(grass_dbstubs grass_dbmibase grass_gis ${M_LIBRARY})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
