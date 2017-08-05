function(libvpsc_test filename)
  get_filename_component(rname ${filename} NAME_WE)
  add_executable(${rname} ${filename})
  target_link_libraries(${rname} vpsc)
  add_test(NAME ${rname}_test COMMAND ${rname})
endfunction()

# Disabled tests:
#	cycle

set(test_cpps
  satisfy_inc.cpp
  block.cpp
  rectangleoverlap.cpp
  )

foreach(fi ${test_cpps})
  libvpsc_test(${fi})
endforeach(fi ${test_cpps})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

