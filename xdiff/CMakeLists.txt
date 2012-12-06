include_directories(
	${CMAKE_CURRENT_SOURCE_DIR}
	${XDIFF_BINARY_DIR}/include
	)

set(XDIFF_SRCS
	xdiffi.c
	xprepare.c
	xpatchi.c
	xmerge3.c
	xemit.c
	xmissing.c
	xutils.c
	xadler32.c
	xbdiff.c
	xbpatchi.c
	xversion.c
	xalloc.c
	xrabdiff.c
	)

set(XDIFF_HDRS
	xdiff.h
	)

add_library(xdiff SHARED ${XDIFF_SRCS})

