set(COLA_SRCS
  cola.h
  cola.cpp
  colafd.cpp
  conjugate_gradient.cpp
  conjugate_gradient.h
  exceptions.h
  gradient_projection.cpp
  gradient_projection.h
  shortest_paths.h
  straightener.h
  straightener.cpp
  connected_components.cpp
  convex_hull.h
  convex_hull.cpp
  cluster.cpp
  compound_constraints.h
  compound_constraints.cpp
  pseudorandom.h
  pseudorandom.cpp
  output_svg.cpp
  output_svg.h
  unused.h
  cc_clustercontainmentconstraints.cpp
  cc_clustercontainmentconstraints.h
  cc_nonoverlapconstraints.cpp
  cc_nonoverlapconstraints.h
  box.cpp
  box.h
  shapepair.cpp
  shapepair.h
  )

set(COLA_HDRS
  cluster.h
  commondefs.h
  compound_constraints.h
  pseudorandom.h
  exceptions.h
  gradient_projection.h
  sparse_matrix.h
  straightener.h
  output_svg.h
  unused.h
  cc_clustercontainmentconstraints.h
  cc_nonoverlapconstraints.h
  box.h
  shapepair.h
  )

if(BUILD_SHARED_LIBS)
  add_library(cola SHARED ${COLA_SRCS})
  target_link_libraries(cola vpsc)
  install(TARGETS cola
    RUNTIME DESTINATION ${BIN_DIR}
    LIBRARY DESTINATION ${LIB_DIR}
    ARCHIVE DESTINATION ${LIB_DIR})
endif(BUILD_SHARED_LIBS)

if(MSVC)
  # msvc does not append 'lib' - do it here to have consistent name
  set_target_properties(cola PROPERTIES PREFIX "lib")
  set_target_properties(cola PROPERTIES IMPORT_PREFIX "lib")
  #set_property(TARGET cola APPEND PROPERTY COMPILE_DEFINITIONS "COLA_DLL_EXPORTS")
endif(MSVC)

if(BUILD_STATIC_LIBS)
  add_library(cola-static STATIC ${COLA_SRCS})
  target_link_libraries(cola-static vpsc)
  if(NOT WIN32)
    set_target_properties(cola-static PROPERTIES OUTPUT_NAME "cola")
  endif(NOT WIN32)
  install(TARGETS cola-static
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

