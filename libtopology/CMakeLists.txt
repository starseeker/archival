set(TOPO_SRCS
  topology_graph.cpp
  topology_constraints.cpp
  compute_forces.cpp
  topology_constraints_constructor.cpp
  resize.cpp
  cola_topology_addon.cpp
  orthogonal_topology.cpp
  topology_constraints.h
  topology_graph.h
  cola_topology_addon.h
  orthogonal_topology.h
  topology_log.h
  util.h
  )

set(TOPO_HDRS
  topology_constraints.h
  topology_graph.h
  cola_topology_addon.h
  orthogonal_topology.h
  topology_log.h
  util.h
  )


if(BUILD_SHARED_LIBS)
  add_library(topology SHARED ${TOPO_SRCS})
  target_link_libraries(topology avoid vpsc cola)
  install(TARGETS topology
    RUNTIME DESTINATION ${BIN_DIR}
    LIBRARY DESTINATION ${LIB_DIR}
    ARCHIVE DESTINATION ${LIB_DIR})
endif(BUILD_SHARED_LIBS)

if(MSVC)
  # msvc does not append 'lib' - do it here to have consistent name
  set_target_properties(topology PROPERTIES PREFIX "lib")
  set_target_properties(topology PROPERTIES IMPORT_PREFIX "lib")
  #set_property(TARGET topology APPEND PROPERTY COMPILE_DEFINITIONS "TOPO_DLL_EXPORTS")
endif(MSVC)

if(BUILD_STATIC_LIBS)
  add_library(topology-static STATIC ${TOPO_SRCS})
  target_link_libraries(topology-static avoid vpsc cola)
  if(NOT WIN32)
    set_target_properties(topology-static PROPERTIES OUTPUT_NAME "topology")
  endif(NOT WIN32)
  install(TARGETS topology-static
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

