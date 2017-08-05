add_executable(xrabin32 xrabin.c)
SET_PROPERTY(TARGET xrabin32 APPEND PROPERTY COMPILE_DEFINITIONS "XRAB_WORD_TYPE=int")
SET_PROPERTY(TARGET xrabin32 APPEND PROPERTY COMPILE_DEFINITIONS "XRAB_WORD_PFMT=\"0x%x\"")

add_executable(xrabin64 xrabin.c)
SET_PROPERTY(TARGET xrabin64 APPEND PROPERTY COMPILE_DEFINITIONS "XRAB_WORD_TYPE=long long")
SET_PROPERTY(TARGET xrabin64 APPEND PROPERTY COMPILE_DEFINITIONS "XRAB_WORD_PFMT=\"0x%llx\"")

find_library(POPT_LIBRARY popt)
if(POPT_LIBRARY)
	include_directories(
		${CMAKE_CURRENT_SOURCE_DIR}/../xdiff
		)
	add_executable(odiff odiff.c)
	target_link_libraries(odiff xdiff ${POPT_LIBRARY})
endif(POPT_LIBRARY)
