include_directories(${GLFW3_INCLUDE_DIR})
add_definitions(-DNANOVG_GLEW -D_CRT_SECURE_NO_WARNINGS)

add_executable(example_gl2 example_gl2.c demo.c perf.c)
target_link_libraries(example_gl2 nanovg ${GLEW_LIBRARY} ${GLFW3_LIBRARIES} ${FREETYPE_LIBRARY} ${OPENGL_LIBRARIES} ${M_LIBRARY} ${CMAKE_THREAD_LIBS_INIT})
#install(TARGETS example_gl2
#  RUNTIME DESTINATION ${BIN_DIR}
#  LIBRARY DESTINATION ${LIB_DIR}
#  ARCHIVE DESTINATION ${LIB_DIR})

add_executable(example_gl3 example_gl3.c  demo.c perf.c)
target_link_libraries(example_gl3 nanovg ${GLEW_LIBRARY} ${GLFW3_LIBRARIES} ${FREETYPE_LIBRARY} ${OPENGL_LIBRARIES} ${M_LIBRARY} ${CMAKE_THREAD_LIBS_INIT})
#install(TARGETS example_gl3
#  RUNTIME DESTINATION ${BIN_DIR}
#  LIBRARY DESTINATION ${LIB_DIR}
#  ARCHIVE DESTINATION ${LIB_DIR})

add_definitions(-DDEMO_MSAA)

add_executable(example_gl2_msaa example_gles2.c demo.c perf.c)
target_link_libraries(example_gl2_msaa nanovg ${GLEW_LIBRARY} ${GLFW3_LIBRARIES} ${FREETYPE_LIBRARY} ${OPENGL_LIBRARIES} ${M_LIBRARY} ${CMAKE_THREAD_LIBS_INIT})
#install(TARGETS example_gl2_msaa
#  RUNTIME DESTINATION ${BIN_DIR}
#  LIBRARY DESTINATION ${LIB_DIR}
#  ARCHIVE DESTINATION ${LIB_DIR})

add_executable(example_gl3_msaa example_gles3.c  demo.c perf.c)
target_link_libraries(example_gl3_msaa nanovg ${GLEW_LIBRARY} ${GLFW3_LIBRARIES} ${FREETYPE_LIBRARY} ${OPENGL_LIBRARIES} ${M_LIBRARY} ${CMAKE_THREAD_LIBS_INIT})
#install(TARGETS example_gl3_msaa
#  RUNTIME DESTINATION ${BIN_DIR}
#  LIBRARY DESTINATION ${LIB_DIR}
#  ARCHIVE DESTINATION ${LIB_DIR})


# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8


