include_directories(
  ${ZLIB_INCLUDE_DIR}
  #${REGEX_INCLUDE_DIR}
  )

set(gis_srcs
  adj_cellhd.c
  alloc.c
  area.c
  area_ellipse.c
  area_poly1.c
  area_poly2.c
  area_sphere.c
  ascii_chk.c
  asprintf.c
  basename.c
  bres_line.c
  clicker.c
  color_rules.c
  color_str.c
  commas.c
  copy_dir.c
  copy_file.c
  counter.c
  date.c
  datum.c
  debug.c
  distance.c
  done_msg.c
  endian.c
  env.c
  error.c
  file_name.c
  find_etc.c
  find_file.c
  find_rast3d.c
  find_rast.c
  find_vect.c
  flate.c
  #fmode.c     #TODO add when building with mingw only
  geodesic.c
  geodist.c
  get_ellipse.c
  getl.c
  get_projinfo.c
  get_window.c
  gisbase.c
  gisdbase.c
  gisinit.c
  handler.c
  home.c
  ilist.c
  intersect.c
  is.c
  key_value1.c
  key_value2.c
  key_value3.c
  key_value4.c
  legal_name.c
  line_dist.c
  list.c
  ll_format.c
  ll_scan.c
  locale.c
  location.c
  lrand48.c
  ls.c
  ls_filter.c
  mach_name.c
  make_loc.c
  make_mapset.c
  mapcase.c
  mapset.c
  mapset_msc.c
  mapset_nme.c
  mkstemp.c
  myname.c
  named_colr.c
  nl_to_spaces.c
  nme_in_mps.c
  open.c
  open_misc.c
  overwrite.c
  pager.c
  parser.c
  parser_dependencies.c
  parser_help.c
  parser_html.c
  parser_interface.c
  parser_rest.c
  parser_script.c
  parser_standard_options.c
  parser_wps.c
  paths.c
  percent.c
  plot.c
  pole_in_poly.c
  popen.c
  progrm_nme.c
  proj1.c
  proj2.c
  proj3.c
  putenv.c
  put_window.c
  radii.c
  rd_cellhd.c
  remove.c
  rename.c
  rhumbline.c
  rotate.c
  seek.c
  set_window.c
  short_way.c
  sleep.c
  snprintf.c
  spawn.c
  strings.c
  tempfile.c
  timestamp.c
  token.c
  trim_dec.c
  units.c
  user_config.c
  verbose.c
  view.c
  whoami.c
  win32_pipes.c
  wind_2_box.c
  wind_format.c
  wind_in.c
  wind_limits.c
  wind_overlap.c
  window_map.c
  wind_scan.c
  worker.c
  wr_cellhd.c
  writ_zeros.c
  xdr.c
  zero.c
  zone.c
  )

add_definitions(-DGRASS_VERSION_DATE=\"'${GRASS_VERSION_DATE}'\")

add_library(grass_gis ${gis_srcs})
target_link_libraries(grass_gis ${ZLIB_LIBRARY})

#PROJSRC = ellipse.table ellipse.table.solar.system datum.table \
#	datumtransform.table FIPS.code state27 state83 projections

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

