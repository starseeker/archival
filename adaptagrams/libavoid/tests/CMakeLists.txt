
function(libavoid_test filename)
  get_filename_component(rname ${filename} NAME_WE)
  add_executable(${rname} ${filename})
  target_link_libraries(${rname} avoid)
  add_test(NAME ${rname}_test COMMAND ${rname})
endfunction()

# Disabled tests:
#	corneroverlap01
#	unsatisfiableRangeAssertion  - really slow.

set(test_cpps
  removeJunctions01.cpp
  penaltyRerouting01.cpp
  treeRootCrash01.cpp
  treeRootCrash02.cpp
  forwardFlowingConnectors01.cpp
  example.cpp
  endlessLoop01.cpp
  complex.cpp
  multiconnact.cpp
  inline.cpp
  infinity.cpp
  latesetup.cpp
  inlineoverlap01.cpp
  inlineoverlap02.cpp
  inlineoverlap03.cpp
  inlineoverlap04.cpp
  inlineoverlap05.cpp
  inlineoverlap06.cpp
  inlineoverlap07.cpp
  inlineoverlap08.cpp
  inlineOverlap09.cpp
  inlineOverlap10.cpp
  inlineOverlap11.cpp
  nudgeintobug.cpp
  slowrouting.cpp
  tjunct.cpp
  vertlineassertion.cpp
  orthordering01.cpp
  orthordering02.cpp
  orderassertion.cpp
  connendmove.cpp
  connectionpin01.cpp
  connectionpin02.cpp
  connectionpin03.cpp
  junction01.cpp
  junction02.cpp
  junction03.cpp
  junction04.cpp
  nudgeold.cpp
  lineSegWrapperCrash1.cpp
  lineSegWrapperCrash2.cpp
  lineSegWrapperCrash3.cpp
  lineSegWrapperCrash4.cpp
  lineSegWrapperCrash5.cpp
  lineSegWrapperCrash6.cpp
  lineSegWrapperCrash7.cpp
  lineSegWrapperCrash8.cpp
  node1.cpp
  overlappingRects.cpp
  inlineShapes.cpp
  checkpoints01.cpp
  checkpoints02.cpp
  checkpoints03.cpp
  freeFloatingDirection01.cpp
  restrictedNudging.cpp
  performance01.cpp
  hyperedge01.cpp
  hyperedge02.cpp
  improveHyperedge01.cpp
  improveHyperedge02.cpp
  improveHyperedge03.cpp
  improveHyperedge04.cpp
  improveHyperedge05.cpp
  improveHyperedge06.cpp
  validPaths01.cpp
  validPaths02.cpp
  2junctions.cpp
  hyperedgeLoop1.cpp
  buildOrthogonalChannelInfo1.cpp
  finalSegmentNudging1.cpp
  finalSegmentNudging2.cpp
  finalSegmentNudging3.cpp
  checkpointNudging1.cpp
  checkpointNudging2.cpp
  checkpointNudging3.cpp
  nudgeCrossing01.cpp
  nudgingSkipsCheckpoint01.cpp
  nudgingSkipsCheckpoint02.cpp
  hola01.cpp
  hyperedgeRerouting01
  )

foreach(fi ${test_cpps})
  libavoid_test(${fi})
endforeach(fi ${test_cpps})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

