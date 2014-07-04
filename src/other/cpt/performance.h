// -*- C++ -*-

#if !defined(__cpt_performance_h__)
#define __cpt_performance_h__

#include <iostream>

namespace cpt {

#ifdef CPT_PERFORMANCE
namespace performance {

extern std::size_t countFaceScanConverted;
extern std::size_t countEdgeScanConverted;
extern std::size_t countVertexScanConverted;

extern std::size_t countFaceDistancesComputed;
extern std::size_t countEdgeDistancesComputed;
extern std::size_t countVertexDistancesComputed;

extern std::size_t countFaceDistancesSet;
extern std::size_t countEdgeDistancesSet;
extern std::size_t countVertexDistancesSet;

extern double timeMakeFacePolyhedra;
extern double timeMakeEdgePolyhedra;
extern double timeMakeVertexPolyhedra;

extern double timeScanConvertFacePolyhedra;
extern double timeScanConvertEdgePolyhedra;
extern double timeScanConvertVertexPolyhedra;

extern double timeFaceCpt;
extern double timeEdgeCpt;
extern double timeVertexCpt;

void
print(std::ostream& out);

}
#endif

} // namespace cpt

#endif
