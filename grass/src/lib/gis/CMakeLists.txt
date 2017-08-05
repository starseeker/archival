include_directories(
  ${ZLIB_INCLUDE_DIR}
  #${REGEX_INCLUDE_DIR}
  )

file(GLOB gis_srcs RELATIVE ${CMAKE_CURRENT_SOURCE_DIR} "*.c")
if(NOT MINGW)
  list(REMOVE_ITEM gis_srcs fmode.c)
endif(NOT MINGW)

add_definitions(-DGRASS_VERSION_DATE=\"'${GRASS_VERSION_DATE}'\")

add_library(grass_gis ${gis_srcs})
target_link_libraries(grass_gis grass_datetime ${ZLIB_LIBRARY} ${M_LIBRARY})

# GIS etc data files
file(MAKE_DIRECTORY ${GRASS_BINARY_DIR}/etc/proj)
set(gis_proj_data_srcs
  ellipse.table
  ellipse.table.solar.system
  datum.table
  datumtransform.table
  FIPS.code
  state27
  state83
  projections
  )
CMAKE_MANAGE_FILES(gis_proj_data_srcs etc/proj)

file(MAKE_DIRECTORY ${GRASS_BINARY_DIR}/etc/colors)
set(gis_colors_data_srcs
  colors/aspect
  colors/aspectcolr
  colors/bcyr
  colors/bgyr
  colors/byg
  colors/byr
  colors/celsius
  colors/corine
  colors/curvature
  colors/differences
  colors/elevation
  colors/etopo2
  colors/evi
  colors/fahrenheit
  colors/gdd
  colors/grey
  colors/grey1.0
  colors/grey255
  colors/gyr
  colors/haxby
  colors/kelvin
  colors/ndvi
  colors/ndwi
  colors/population
  colors/population_dens
  colors/precipitation
  colors/precipitation_daily
  colors/precipitation_monthly
  colors/rainbow
  colors/ramp
  colors/roygbiv
  colors/rstcurv
  colors/ryb
  colors/ryg
  colors/sepia
  colors/slope
  colors/srtm
  colors/srtm_plus
  colors/terrain
  colors/wave
  colors.desc
  )
CMAKE_MANAGE_FILES(gis_colors_data_srcs etc/colors)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

