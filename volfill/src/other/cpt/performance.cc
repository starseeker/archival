// -*- C++ -*-

#include "performance.h"

namespace cpt {

#ifdef CPT_PERFORMANCE
namespace performance {

std::size_t countFaceScanConverted = 0;
std::size_t countEdgeScanConverted = 0;
std::size_t countVertexScanConverted = 0;

std::size_t countFaceDistancesComputed = 0;
std::size_t countEdgeDistancesComputed = 0;
std::size_t countVertexDistancesComputed = 0;

std::size_t countFaceDistancesSet = 0;
std::size_t countEdgeDistancesSet = 0;
std::size_t countVertexDistancesSet = 0;

double timeMakeFacePolyhedra = 0;
double timeMakeEdgePolyhedra = 0;
double timeMakeVertexPolyhedra = 0;

double timeScanConvertFacePolyhedra = 0;
double timeScanConvertEdgePolyhedra = 0;
double timeScanConvertVertexPolyhedra = 0;

double timeFaceCpt = 0;
double timeEdgeCpt = 0;
double timeVertexCpt = 0;

void
print(std::ostream& out) {
   double total;

   out << "countFaceScanConverted = "
       << countFaceScanConverted << "\n"
       << "countEdgeScanConverted = "
       << countEdgeScanConverted << "\n"
       << "countVertexScanConverted = "
       << countVertexScanConverted << "\n"
       << "  Total scan converted = "
       << (countFaceScanConverted +
           countEdgeScanConverted +
           countVertexScanConverted) << "\n";


   out << "countFaceDistancesComputed = "
       << countFaceDistancesComputed << "\n"
       << "countEdgeDistancesComputed = "
       << countEdgeDistancesComputed << "\n"
       << "countVertexDistancesComputed = "
       << countVertexDistancesComputed << "\n"
       << "  Total distances computed = "
       << (countFaceDistancesComputed +
           countEdgeDistancesComputed +
           countVertexDistancesComputed) << "\n";

   out << "countFaceDistancesSet = "
       << countFaceDistancesSet << "\n"
       << "countEdgeDistancesSet = "
       << countEdgeDistancesSet << "\n"
       << "countVertexDistancesSet = "
       << countVertexDistancesSet << "\n"
       << "  Total distances set = "
       << (countFaceDistancesSet +
           countEdgeDistancesSet +
           countVertexDistancesSet) << "\n";

   total = timeMakeFacePolyhedra + timeMakeEdgePolyhedra +
           timeMakeVertexPolyhedra;
   if (total != 0) {
      out << "timeMakeFacePolyhedra = "
          << timeMakeFacePolyhedra << "\n"
          << "timeMakeEdgePolyhedra = "
          << timeMakeEdgePolyhedra << "\n"
          << "timeMakeVertexPolyhedra = "
          << timeMakeVertexPolyhedra << "\n"
          << "  Total time to make the polyhedra = "
          << total << "\n";
   }

   total = timeScanConvertFacePolyhedra +
           timeScanConvertEdgePolyhedra +
           timeScanConvertVertexPolyhedra;
   if (total != 0) {
      out << "timeScanConvertFacePolyhedra = "
          << timeScanConvertFacePolyhedra << "\n"
          << "timeScanConvertEdgePolyhedra = "
          << timeScanConvertEdgePolyhedra << "\n"
          << "timeScanConvertVertexPolyhedra = "
          << timeScanConvertVertexPolyhedra << "\n"
          << "  Total time to scan convert the polyhedra = "
          << total << "\n";
   }

   out << "timeFaceCpt = "
       << timeFaceCpt << "\n"
       << "timeEdgeCpt = "
       << timeEdgeCpt << "\n"
       << "timeVertexCpt = "
       << timeVertexCpt << "\n"
       << "  Total time to compute distances etc. = "
       << (timeFaceCpt +
           timeEdgeCpt +
           timeVertexCpt) << "\n";
}

}
#endif

} // namespace cpt
