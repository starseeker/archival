add_subdirectory(defs)
add_subdirectory(iostream)
add_subdirectory(vect)

set(grass_hdrs
  arraystats.h
  bitmap.h
  blas.h
  btree.h
  cdhc.h
  cluster.h
  colors.h
  datetime.h
  dbmi.h
  display.h
  fontcap.h
  form.h
  gis.h
  glocale.h
  gmath.h
  gprojects.h
  imagery.h
  la.h
  lapack.h
  linkm.h
  manage.h
  neta.h
  nviz.h
  ogsf.h
  ortholib.h
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
  temporal.h
  vector.h
  vedit.h
  ${CMAKE_CURRENT_BINARY_DIR}/config.h
  ${CMAKE_CURRENT_BINARY_DIR}/version.h
  )

install(FILES ${grass_hdrs} DESTINATION ${INCLUDE_DIR}/grass)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

