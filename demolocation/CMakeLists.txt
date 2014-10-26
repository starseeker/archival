set(PTOP_SRCS
  PERMANENT/PROJ_INFO
  PERMANENT/DEFAULT_WIND
  PERMANENT/MYNAME
  PERMANENT/VAR
  PERMANENT/PROJ_UNITS
  PERMANENT/WIND
  )
CMAKE_MANAGE_FILES(PTOP_SRCS demolocation/PERMANENT)

CMAKE_MANAGE_FILES(PERMANENT/sqlite/sqlite.db demolocation/PERMANENT/sqlite)
CMAKE_MANAGE_FILES(PERMANENT/dbf/mysites.dbf demolocation/PERMANENT/dbf)
CMAKE_MANAGE_FILES(PERMANENT/dbf/point.dbf demolocation/PERMANENT/dbf)

set(vector_pnt_srcs
  PERMANENT/vector/point/topo
  PERMANENT/vector/point/head
  PERMANENT/vector/point/sidx
  PERMANENT/vector/point/dbln
  PERMANENT/vector/point/cidx
  PERMANENT/vector/point/coor
  PERMANENT/vector/point/hist
  )
CMAKE_MANAGE_FILES(vector_pnt_srcs demolocation/PERMANENT/vector/point)

set(country_boundaries
  PERMANENT/vector/country_boundaries/topo
  PERMANENT/vector/country_boundaries/head
  PERMANENT/vector/country_boundaries/sidx
  PERMANENT/vector/country_boundaries/dbln
  PERMANENT/vector/country_boundaries/cidx
  PERMANENT/vector/country_boundaries/coor
  PERMANENT/vector/country_boundaries/hist
  )
CMAKE_MANAGE_FILES(country_boundaries demolocation/PERMANENT/vector/country_boundaries)

set(mysites
  PERMANENT/vector/mysites/topo
  PERMANENT/vector/mysites/head
  PERMANENT/vector/mysites/sidx
  PERMANENT/vector/mysites/dbln
  PERMANENT/vector/mysites/cidx
  PERMANENT/vector/mysites/coor
  PERMANENT/vector/mysites/hist
  )
CMAKE_MANAGE_FILES(mysites demolocation/PERMANENT/vector/mysites)

get_filename_component(GISDBASE ${CMAKE_CURRENT_BINARY_DIR} DIRECTORY)
configure_file(grassrc.tmpl ${CMAKE_CURRENT_BINARY_DIR}/.grass${GRASS_VERSION_MAJOR}${GRASS_VERSION_MINOR})

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8

