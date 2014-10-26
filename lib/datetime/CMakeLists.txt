set(datetime_srcs
  between.c
  change.c
  copy.c
  diff.c
  error.c
  format.c
  incr1.c
  incr2.c
  incr3.c
  local.c
  misc.c
  same.c
  scan.c
  sign.c
  type.c
  tz1.c
  tz2.c
  values.c
  )

add_library(grass_datetime ${datetime_srcs})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
