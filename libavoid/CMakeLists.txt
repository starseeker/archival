set(AVOID_SRCS
  connectionpin.cpp
  connector.cpp
  connend.cpp
  geometry.cpp
  geomtypes.cpp
  graph.cpp
  junction.cpp
  makepath.cpp
  obstacle.cpp
  orthogonal.cpp
  router.cpp
  shape.cpp
  timer.cpp
  vertices.cpp
  viscluster.cpp
  visibility.cpp
  vpsc.cpp
  hyperedge.cpp
  hyperedgeimprover.cpp
  mtst.cpp
  hyperedgetree.cpp
  scanline.cpp
  actioninfo.cpp
  assertions.h
  connector.h
  connectionpin.h
  connend.h
  debug.h
  geometry.h
  geomtypes.h
  graph.h
  junction.h
  libavoid.h
  makepath.h
  obstacle.h
  orthogonal.h
  router.h
  shape.h
  timer.h
  vertices.h
  viscluster.h
  visibility.h
  hyperedge.h
  mtst.h
  hyperedgetree.h
  scanline.h
  actioninfo.h
  vpsc.h
  debughandler.h
  )

set(AVOID_HEADERS
  assertions.h
  connector.h
  connectionpin.h
  connend.h
  debug.h
  dllexport.h
  geometry.h
  geomtypes.h
  graph.h
  junction.h
  libavoid.h
  makepath.h
  obstacle.h
  orthogonal.h
  router.h
  shape.h
  timer.h
  vertices.h
  viscluster.h
  visibility.h
  hyperedge.h
  hyperedgeimprover.h
  mtst.h
  hyperedgetree.h
  scanline.h
  actioninfo.h
  vpsc.h
  debughandler.h
  )

if(BUILD_SHARED_LIBS)
  add_library(avoid SHARED ${AVOID_SRCS})
  install(TARGETS avoid
    RUNTIME DESTINATION ${BIN_DIR}
    LIBRARY DESTINATION ${LIB_DIR}
    ARCHIVE DESTINATION ${LIB_DIR})
endif(BUILD_SHARED_LIBS)

if(MSVC)
  # msvc does not append 'lib' - do it here to have consistent name
  set_target_properties(avoid PROPERTIES PREFIX "lib")
  set_target_properties(avoid PROPERTIES IMPORT_PREFIX "lib")
  #set_property(TARGET avoid APPEND PROPERTY COMPILE_DEFINITIONS "AVOID_DLL_EXPORTS")
endif(MSVC)

if(BUILD_STATIC_LIBS)
  add_library(avoid-static STATIC ${AVOID_SRCS})
  if(NOT WIN32)
    set_target_properties(avoid-static PROPERTIES OUTPUT_NAME "avoid")
  endif(NOT WIN32)
  install(TARGETS avoid-static
    RUNTIME DESTINATION ${BIN_DIR}
    LIBRARY DESTINATION ${LIB_DIR}
    ARCHIVE DESTINATION ${LIB_DIR})
endif(BUILD_STATIC_LIBS)


#add_subdirectory(tests)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

