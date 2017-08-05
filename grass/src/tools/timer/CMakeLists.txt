add_executable(current_time_s_ms main.c)
if(M_LIBRARY)
	target_link_libraries(current_time_s_ms ${M_LIBRARY})
endif(M_LIBRARY)
