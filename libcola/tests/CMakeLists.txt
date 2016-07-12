function(libcola_test filename)
  get_filename_component(rname ${filename} NAME_WE)
  add_executable(${rname} ${filename})
  target_link_libraries(${rname} cola vpsc avoid)
  add_test(NAME ${rname}_test COMMAND ${rname})
endfunction()

# Disabled tests:
#      unconstrained constrained containment shortest_paths connected_components
#      large_graph convex_hull scale_free trees random_graph large_graph topology
#      boundary planar resize problem
#
#      topology boundary planar resize resizealignment

set(test_cpps
  initialOverlap.cpp
  overlappingClusters01.cpp
  overlappingClusters02.cpp
  overlappingClusters04.cpp
  rectangularClusters01.cpp
  StillOverlap01.cpp
  StillOverlap02.cpp
  FixedRelativeConstraint01.cpp
  rectclustershapecontainment.cpp
  random_graph.cpp
  page_bounds.cpp
  constrained.cpp
  unsatisfiable.cpp
  invalid.cpp
  makefeasible02.cpp
  shortest_paths.cpp
  )

foreach(fi ${test_cpps})
  libcola_test(${fi})
endforeach(fi ${test_cpps})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

