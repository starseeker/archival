FLEX_TARGET(sqlp_scanner sqlp.l ${CMAKE_CURRENT_BINARY_DIR}/sqlp.yy.c)
BISON_TARGET(sqlp_parser sqlp.y ${CMAKE_CURRENT_BINARY_DIR}/sqlp.tab.c COMPILE_FLAGS "-y -bsqlp -d -v")

ADD_FLEX_BISON_DEPENDENCY(sqlp_scanner sqlp_parser)

set(sqlp_srcs
  ${FLEX_sqlp_scanner_OUTPUTS}
  ${BISON_sqlp_parser_OUTPUTS}
  alloc.c
  print.c
  sql.c
  )

add_library(grass_sqlp ${sqlp_srcs})
if(M_LIBRARY)
  target_link_libraries(grass_sqlp ${M_LIBRARY})
endif(M_LIBRARY)

MKHTML(sql html "")

# Local Variables:
# tab-width: 8
# mode: cmake
# indent-tabs-mode: t
# End:
# ex: shiftwidth=2 tabstop=8
