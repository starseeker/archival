include_directories(
  ${GRASS_BINARY_DIR}/include
  ${GRASS_SOURCE_DIR}/include
  )

add_subdirectory(datetime)
add_subdirectory(gis)
add_subdirectory(raster)
add_subdirectory(external)
add_subdirectory(gmath)
add_subdirectory(linkm)
add_subdirectory(driver)
add_subdirectory(pngdriver)
add_subdirectory(psdriver)
add_subdirectory(htmldriver)
add_subdirectory(cairodriver)
add_subdirectory(bitmap)
add_subdirectory(btree)
add_subdirectory(btree2)
add_subdirectory(display)
add_subdirectory(db)
add_subdirectory(fonts)
add_subdirectory(proj)
#add_subdirectory(vector)
#add_subdirectory(imagery)
#add_subdirectory(cluster)
#add_subdirectory(rowio)
#add_subdirectory(segment)
#add_subdirectory(rst)
#add_subdirectory(lidar)
#add_subdirectory(raster3d)
#add_subdirectory(raster3d/test)
#add_subdirectory(gpde)
#add_subdirectory(dspf)
#add_subdirectory(symbol)
#add_subdirectory(init)
#add_subdirectory(cdhc)
#add_subdirectory(stats)
#add_subdirectory(arraystats)
#add_subdirectory(ogsf)
#add_subdirectory(nviz)
#add_subdirectory(temporal)
#add_subdirectory(python)
#add_subdirectory(iostream)
#add_subdirectory(manage)

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
