set(CRITCL_STUBS
  container.tcl
  gen_decl.tcl
  genframe.tcl
  gen_header.tcl
  gen_init.tcl
  gen_lib.tcl
  gen_macro.tcl
  gen_slot.tcl
  reader.tcl
  writer.tcl
  pkgIndex.tcl
  )

TCL_SCRIPTFILES(CRITCL_STUBS ${LIB_DIR}/tcl${TCL_VERSION_MAJOR}.${TCL_VERSION_MINOR}/stubs)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
