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


#ifndef __TRIANGLEITER_H__
#define __TRIANGLEITER_H__

#include "compat.h"
#include "triangle.h"

class TriMesh;
class TriIter;

template<class Face>
class FaceIterTp;

class TriangleIter {
  friend class TriMesh;
public:
  TriangleIter();
  ~TriangleIter();
  TriangleIter(const TriangleIter& i);
  TriangleIter& operator=(const TriangleIter& i);
  
  Triangle operator*();
  TriangleIter& operator++();
  bool operator==(const TriangleIter& i) const;
  bool operator!=(const TriangleIter& i) const;

  int depth() const; 
  int maxDepth() const;

private:
  typedef FaceIterTp<Tri> TriIter;
  TriIter* _ti;
  TriangleIter(TriIter _ti);
};

#endif /* __TRIANGLEITER_H__ */
