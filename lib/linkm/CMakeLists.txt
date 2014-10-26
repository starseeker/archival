file(GLOB linkm_srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")

add_library(grass_linkm ${linkm_srcs})
if(M_LIBRARY)
  target_link_libraries(grass_linkm ${M_LIBRARY})
endif(M_LIBRARY)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
