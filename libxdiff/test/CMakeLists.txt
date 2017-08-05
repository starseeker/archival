include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}
	${CMAKE_CURRENT_SOURCE_DIR}/../xdiff
	)

add_executable(xdiff_test xdiff_test.c xtestutils.c)
target_link_libraries(xdiff_test xdiff)

add_executable(xregression xregression.c xtestutils.c)
target_link_libraries(xregression xdiff)
