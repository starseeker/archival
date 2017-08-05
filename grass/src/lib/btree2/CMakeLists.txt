add_library(grass_btree2 rbtree.c)
target_link_libraries(grass_btree2 grass_gis ${M_LIBRARY})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
