find_package(FLTK)
include(CheckLibraryExists)
CHECK_LIBRARY_EXISTS(dl dlopen "" HAVE_DL_LIBRARY)
if(HAVE_DL_LIBRARY)
	set(DL_LIBRARY dl)
endif(HAVE_DL_LIBRARY)

set(demo_SRCS
	demoUI.cpp
	MyWindow.cpp
	defmesh.cpp
	processor.cpp
	motion.cpp
	filter.cpp
	)

add_executable(DemoUI ${demo_SRCS})
target_link_libraries(DemoUI pinocchio ${DL_LIBRARY} ${FLTK_LIBRARIES})
