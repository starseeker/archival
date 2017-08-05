set(VPSC_SRCS
  block.cpp
  blocks.cpp
  constraint.cpp
  rectangle.cpp
  solve_VPSC.cpp
  variable.cpp
  cbuffer.cpp
  isnan.h
  block.h
  blocks.h
  constraint.h
  rectangle.h
  pairing_heap.h
  solve_VPSC.h
  variable.h
  cbuffer.h
  linesegment.h
  assertions.h
  )

set(VPSC_HEADERS
  solve_VPSC.h
  block.h
  constraint.h
  exceptions.h
  rectangle.h
  variable.h
  assertions.h
  )

if(BUILD_SHARED_LIBS)
  add_library(vpsc SHARED ${VPSC_SRCS})
  install(TARGETS vpsc
    RUNTIME DESTINATION ${BIN_DIR}
    LIBRARY DESTINATION ${LIB_DIR}
    ARCHIVE DESTINATION ${LIB_DIR})
endif(BUILD_SHARED_LIBS)

if(MSVC)
  # msvc does not append 'lib' - do it here to have consistent name
  set_target_properties(vpsc PROPERTIES PREFIX "lib")
  set_target_properties(vpsc PROPERTIES IMPORT_PREFIX "lib")
  #set_property(TARGET vpsc APPEND PROPERTY COMPILE_DEFINITIONS "VPSC_DLL_EXPORTS")
endif(MSVC)

if(BUILD_STATIC_LIBS)
  add_library(vpsc-static STATIC ${VPSC_SRCS})
  if(NOT WIN32)
    set_target_properties(vpsc-static PROPERTIES OUTPUT_NAME "vpsc")
  endif(NOT WIN32)
  install(TARGETS vpsc-static
    RUNTIME DESTINATION ${BIN_DIR}
    LIBRARY DESTINATION ${LIB_DIR}
    ARCHIVE DESTINATION ${LIB_DIR})
endif(BUILD_STATIC_LIBS)

if(COLA_ENABLE_TESTING AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/tests)
  add_subdirectory(tests)
endif(COLA_ENABLE_TESTING AND EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/tests)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

