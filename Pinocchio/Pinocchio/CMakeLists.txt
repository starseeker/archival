set(PINO_SRCS
	attachment.cpp
	discretization.cpp
	indexer.cpp
	lsqSolver.cpp
	mesh.cpp
	graphutils.cpp
	intersector.cpp
	matrix.cpp
	skeleton.cpp
	embedding.cpp
	pinocchioApi.cpp
	refinement.cpp
	)

add_library(pinocchio ${PINO_SRCS})

