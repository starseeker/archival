function(libtopology_test filename)
  get_filename_component(rname ${filename} NAME_WE)
  add_executable(${rname} ${filename})
  target_link_libraries(${rname} topology vpsc avoid)
  add_test(NAME ${rname}_test COMMAND ${rname})
endfunction()

# Disabled tests:
#	triangle split kamada nooverlap

set(test_cpps
  simple_bend.cpp
  nooverlap.cpp
  nodedragging.cpp
  #beautify.cpp TODO - Need to figure out "right" way to run this...
  orthogonalOpt.cpp
  )

foreach(fi ${test_cpps})
  libtopology_test(${fi})
endforeach(fi ${test_cpps})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

