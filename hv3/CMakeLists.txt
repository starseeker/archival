SET(hv3_TCLSCRIPTS
	combobox.tcl
	hv3.tcl
	hv3_encodings.tcl
	hv3_form.tcl
	hv3_request.tcl
	hv3_util.tcl
	snit.tcl
)
file(COPY ${hv3_TCLSCRIPTS} DESTINATION ${CMAKE_BINARY_DIR}/lib/hv3)
install(FILES ${hv3_TCLSCRIPTS} DESTINATION lib/hv3)

file(WRITE ${CMAKE_BINARY_DIR}/lib/hv3/pkgIndex.tcl "package ifneeded snit 1.0 [list source [file join $dir snit.tcl]]\n")
file(APPEND ${CMAKE_BINARY_DIR}/lib/hv3/pkgIndex.tcl "package ifneeded hv3 0.1 [list source [file join $dir hv3.tcl]]")
install(FILES ${CMAKE_BINARY_DIR}/lib/hv3/pkgIndex.tcl DESTINATION lib/hv3)

