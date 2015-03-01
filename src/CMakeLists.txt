add_executable(ayam ayam.c)
target_link_libraries(ayam ${OPENGL_LIBRARIES})
#install(TARGETS ayam
#  RUNTIME DESTINATION ${BIN_DIR}
#  LIBRARY DESTINATION ${LIB_DIR}
#  ARCHIVE DESTINATION ${LIB_DIR})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

