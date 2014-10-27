add_library(grass_bitmap bitmap.c sparse.c)
target_link_libraries(grass_bitmap grass_linkm ${M_LIBRARY})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
