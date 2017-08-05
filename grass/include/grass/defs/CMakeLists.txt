set(defs_hdrs
  arraystats.h
  bitmap.h
  btree.h
  cdhc.h
  cluster.h
  CMakeLists.txt
  colors.h
  datetime.h
  dbmi.h
  devlib.h
  dig_atts.h
  display.h
  form.h
  gis.h
  glocale.h
  gmath.h
  gprojects.h
  imagery.h
  la.h
  linkm.h
  manage.h
  neta.h
  nviz.h
  ogsf.h
  ortholib.h
  Paintlib.h
  raster3d.h
  raster.h
  rbtree.h
  rowio.h
  segment.h
  site.h
  spawn.h
  sqlp.h
  stats.h
  symbol.h
  vector.h
  vedit.h
  )

install(FILES ${defs_hdrs} DESTINATION ${INCLUDE_DIR}/grass/defs)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

