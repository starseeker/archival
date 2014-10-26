set(raster_srcs
  align_window.c
  alloc_cell.c
  auto_mask.c
  cats.c
  cell_stats.c
  cellstats_eq.c
  cell_title.c
  close.c
  color_compat.c
  color_free.c
  color_get.c
  color_hist.c
  color_init.c
  color_insrt.c
  color_invrt.c
  color_look.c
  color_org.c
  color_out.c
  color_rand.c
  color_range.c
  color_read.c
  color_remove.c
  color_rule.c
  color_rule_get.c
  color_rules.c
  color_set.c
  color_shift.c
  color_write.c
  color_xform.c
  format.c
  fpreclass.c
  gdal.c
  get_cellhd.c
  get_row.c
  get_row_colr.c
  histo_eq.c
  histogram.c
  history.c
  init.c
  interp.c
  maskfd.c
  mask_info.c
  null_val.c
  open.c
  put_cellhd.c
  put_row.c
  put_title.c
  quant.c
  quant_io.c
  quant_rw.c
  range.c
  raster.c
  raster_metadata.c
  reclass.c
  sample.c
  set_window.c
  window.c
  window_map.c
  zero_cell.c
  )

add_library(grass_raster ${raster_srcs})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
