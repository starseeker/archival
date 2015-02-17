// -*- C++ -*-

/*!
  \file Face.h
  \brief Class for a face on a b-rep.
*/

#if !defined(__cpt_Face_h__)
#define __cpt_Face_h__

#include "../ads/algorithm/min_max.h"

#include "../ext/array.h"

#include "../geom/grid/RegularGrid.h"
#include "../geom/kernel/Plane.h"
#include "../geom/polytope/IndexedEdgePolyhedron.h"
#include "../geom/polytope/ScanConversionPolyhedron.h"

#include <vector>

#include <cmath>

namespace cpt {

template < std::size_t N, typename T = double >
class Face;

//! Equality operator
/*! \relates Face<N,T> */
template<std::size_t N, typename T>
bool
operator==(const Face<N, T>& a, const Face<N, T>& b);

//! Inequality operator
/*! \relates Face */
template<std::size_t N, typename T>
inline
bool
operator!=(const Face<N, T>& a, const Face<N, T>& b) {
   return !(a == b);
}

} // namespace cpt

#define __cpt_Face1_ipp__
#include "Face1.ipp"
#undef __cpt_Face1_ipp__

#define __cpt_Face2_ipp__
#include "Face2.ipp"
#undef __cpt_Face2_ipp__

#define __cpt_Face3_ipp__
#include "Face3.ipp"
#undef __cpt_Face3_ipp__

#endif
