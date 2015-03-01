// -*- Mode: c++ -*-
// $Id$
// $Source$

/* Subdivide V2.0
   Copyright (C) 2000 Henning Biermann, Denis Zorin, NYU

This file is part of Subdivide.

Subdivide is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

Subdivide is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with Subdivide; see the file COPYING.  If not, write to the Free
Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
02111-1307, USA.  */

#ifndef __TRIMESH_H__
#define __TRIMESH_H__

#include "compat.h"
#include "cvec3t.h"
#include "vertex.h"

// the face class for triangle meshes -- internal
class Tri;

// template for the mesh representation -- internal
template<class Tri> class TagMeshTp;

// face manipulation interface (defined separately)
class PickableTri;

// triangular hierarchical mesh with extended Loop refinement
class TriMesh {
  friend class PickableTri;
public:
  TriMesh();
  virtual ~TriMesh();

  // construct from flat data (from Ayam)
  TriMesh(Vertex *cv, uint nfaces, uint *nverts, uint *verts);

  // construct from another mesh, share vertices and faces
  TriMesh(const TriMesh& m);

  // assignment, share vertices and faces
  TriMesh& operator=(const TriMesh& m);

  // create a new mesh, clone vertices and faces
  TriMesh* clone() const;

  // set the current mesh to be the clone of mesh m
  void setClone(const TriMesh& m);

  // return a mesh containing just the leaf faces
  TriMesh* leafMesh() const;

  // depth of the mesh
  int meshDepth() const;

  // allow access to subdivided data
  void toAyam(double **cv, unsigned int *cvlen, unsigned int **nverts,
	      unsigned int **verts, unsigned int *nfaces);

  // midpoint subdivide until level maxl
  // maxl == -1: just recompute current vertex position
  void midsub(int maxl = -1);

  // extended Loop subdivision until level maxl
  // maxl == -1: just recompute current vertex position
  void subdivide(int maxl = -1);

  // get/set vertex position
  int numberOfVertices() const;
  const cvec3f& getVertexPos(uint index) const;
  void setVertexPos(uint index, const cvec3f& f);
  
  TagMeshTp<Tri>*& triTagMesh() { return _triTagMesh; }
  
private:
  // internal representation
  TagMeshTp<Tri>* _triTagMesh;
};

#endif /* __TRIMESH_H__ */
