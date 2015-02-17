// -*- C++ -*-

#if !defined(__cpt_Vertex_h__)
#define __cpt_Vertex_h__

#include "../ads/algorithm/sign.h"

#include "../ext/array.h"

#include "../geom/grid/RegularGrid.h"
#include "../geom/kernel/Point.h"
#include "../geom/polytope/IndexedEdgePolyhedron.h"
#include "../geom/polytope/ScanConversionPolyhedron.h"

#include <vector>

#include <cmath>

namespace cpt {


template < std::size_t N, typename T = double >
class Vertex;


//! Equality operator
/*! \relates Vertex */
template<std::size_t N, typename T>
bool
operator==(const Vertex<N, T>& a, const Vertex<N, T>& b);


//! Inequality operator
/*! \relates Vertex */
template<std::size_t N, typename T>
inline
bool
operator!=(const Vertex<N, T>& a, const Vertex<N, T>& b) {
   return !(a == b);
}


} // namespace cpt

#define __cpt_Vertex2_ipp__
#include "Vertex2.ipp"
#undef __cpt_Vertex2_ipp__

#define __cpt_Vertex3_ipp__
#include "Vertex3.ipp"
#undef __cpt_Vertex3_ipp__

#endif
