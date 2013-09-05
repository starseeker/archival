set(AW_SRCS
	AttachWeights.cpp
	)

add_executable(AttachWeights ${AW_SRCS})
target_link_libraries(AttachWeights pinocchio)
