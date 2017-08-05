file(GLOB btree_srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")

add_library(grass_btree ${btree_srcs})
if(M_LIBRARY)
  target_link_libraries(grass_btree ${M_LIBRARY})
endif(M_LIBRARY)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
