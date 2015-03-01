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

#ifndef __MESH_H__
#define __MESH_H__

#include "compat.h"
#include<set>
#include<map>

#include "general.h"

template<class Face>
class MeshTp;

template<class Face>
class EdgeTp {
public:
  EdgeTp(Face* f = 0, EnoType e = 0) : _f(f), _e(e) { ; }
  Face* face() const { return _f; }
  EnoType eno() const { return _e; }
private:
  Face* _f;
  EnoType _e;
};
  
template<class Face>
class VertexTp {
public:
  VertexTp(Face* f = 0, VnoType v = 0) : _f(f), _v(v) { ; }
  Face* face() const { return _f; }
  EnoType vno() const { return _v; }
private:
  Face* _f;
  VnoType _v;
};

template<class Face>
class FaceIterTp {
  friend class MeshTp<Face>;
public:
  typedef Face FaceType;

  FaceIterTp() : _t(0), _cl(0), _l(0) { ; }
  FaceIterTp(const FaceIterTp& i) :
    _t(i._t), _cl(i._cl), _l(i._l), _it(i._it) { ; }
  FaceIterTp& operator=(const FaceIterTp& i) {
    if(this != &i) { _t = i._t; _cl = i._cl; _l = i._l; _it = i._it; }
    return (*this);
  }
  FaceType* operator*() const { return (_t == 0)?(*_it):_t; }
  bool operator==(const FaceIterTp& i) const 
  { return (_t == i._t) && (_cl == i._cl) && (_l == i._l) && (_it == i._it); }
  bool operator!=(const FaceIterTp& it) const 
  { return !((*this)==it); }
  FaceIterTp& operator++() { next(); return (*this); }
  int depth() const { return _cl; }
  int maxDepth() const { return _l; }
private:
  FaceType* _t;
  int _cl, _l;
  typename set<FaceType*>::iterator _it;
  void next() {
    if(_t == 0) _t = (*_it);
    if((!_t->isLeaf()) && ((_cl < _l) || (_l == -1))) {
      // go deeper if possible 
      ++_cl;
      _t = _t->child(0);
    } else {
      // up until you can go to neighbor
      // if you hit the toplevel jump to next triangle
      while((_t != (*_it)) && (_t->no() == _t->parent()->childCount()-1)) {
	assert(_t->parent() != 0);
	_t = _t->parent();
	--_cl;
      }
      if(_t == (*_it)) {
	++_it;
	_t = 0;
      } else {
	_t = _t->parent()->child(_t->no()+1);
      }
    }
  }
  bool inSet() const { return (_t == 0) || ((*_it) == _t); }  
  const typename set<FaceType*>::iterator& setIterator() const { return _it; }
  FaceIterTp(int l, FaceType* t, typename set<FaceType*>::iterator it) :
    _t(t), _l(l), _it(it) { 
    _cl = (_t != 0) ?  _t->depth() : 0;  
  }
};


template<class Face>
class MeshTp {

public:
  
  typedef FaceIterTp<Face> FaceIterType;
  typedef EdgeTp<Face> EdgeType;
  typedef VertexTp<Face> VertexType;
  typedef Face FaceType;
  typedef typename FaceType::TLFace TLFaceType;
  typedef typename Face::FaceRingType FaceRingType;

  MeshTp() { ; }

  MeshTp(Vertex *cv, uint nfaces, uint *nverts, uint *verts);

  MeshTp(const MeshTp& m);
  MeshTp& operator=(MeshTp& m);
  virtual ~MeshTp();

  void toAyam(double **cv, unsigned int *cvlen, unsigned int **nverts,
	      unsigned int **verts, unsigned int *nfaces);

  MeshTp* clone() const;
  MeshTp* clone(map<Vertex*, Vertex*>& vvMap, map<Face*, Face*>& ttMap) const;
  void setClone(const MeshTp& m);
  void setClone(const MeshTp& m, map<Vertex*, Vertex*>& vvMap, map<Face*, Face*>& ttMap);

  const set<Face*>& faceSet() const { return _faceSet; }
  const map<Vertex*, pair<int, VertexType> >& vertMap() const { return _vertMap; }
  void insertFace(Face* t);
  const vector<Vertex*> vertVector() const { return _vertVec; }

  FaceIterType faceBegin(int l = -1)  {
    if(_faceSet.begin() == _faceSet.end()) 
      return FaceIterType(l, 0, _faceSet.begin()); 
    else
      return FaceIterType(l, (*_faceSet.begin()), _faceSet.begin()); 
  }
  FaceIterType faceEnd(int l = -1)  
    { return FaceIterType(l, 0, _faceSet.end()); }

  int meshDepth()  {
    if(faceBegin() == faceEnd()) {
      return 0;
    } else {
      Face* f = *faceBegin();
      int l = 0;
      while(f->childCount() > 0) {
	++l;
	f = f->child(0);
      }
      return l;
    }
  }
  
private:
  set<Face*> _faceSet;
  map<Vertex*, pair<int, VertexType> > _vertMap;
  vector<Vertex*> _vertVec;
  vector<Vertex> _vert;
  void cleanup();
};

//------------------------------------------------------------------------------
// implementation

template<class Face>
MeshTp<Face>::MeshTp(Vertex *cv, uint nfaces, uint *nverts, uint *verts) {

  typedef pair<Vertex*, Vertex*> VertPairType;
  typedef map<VertPairType, EdgeType> EdgeMapType;

  EdgeMapType edgeMap;


  uint i, start = 0;
  for(i = 0; i < nfaces; ++i) {

    int novtx = nverts[i];
    Vertex** _v = new Vertex*[novtx];
    for(int u = 0; u < novtx; ++u) 
      _v[u] = &(cv[verts[start+u]]);
    TLFaceType* t = new TLFaceType(novtx, _v);

    EnoType e;

    for(e = 1; e < t->noVtx()+1; ++e) {
      typename EdgeMapType::iterator it = edgeMap.find(VertPairType(t->tailVert(e), t->headVert(e)));
      if(it != edgeMap.end()) {
	t->linkBothWays(e, (TLFaceType*) (*it).second.face(), (*it).second.eno());
      } else {
	it = edgeMap.find(VertPairType(t->headVert(e), t->tailVert(e)));
	if(it != edgeMap.end()) {
	  t->linkBothWays(-e, (TLFaceType*) (*it).second.face(), (*it).second.eno());
	}
      }
    }

    insertFace(t);

    for(e = 1; e < t->noVtx()+1; ++e)
      edgeMap[VertPairType(t->tailVert(e), t->headVert(e))] = EdgeType(t, e);

    start += novtx;
  }

  
}

template<class Face>
MeshTp<Face>::MeshTp(const MeshTp& m) {
  typename set<Face*>::iterator it;
  for(it = _faceSet.begin(); it != _faceSet.end(); ++it) {
    Face* t = (*it);
    if(t->isToplevel())
      TLFaceType::ref((TLFaceType*)t);
  }
  _faceSet = m._faceSet;
  _vertMap = m._vertMap;
  _vertVec = m._vertVec;
}

template<class Face>
MeshTp<Face>::~MeshTp() 
{ cleanup(); }

template<class Face>
MeshTp<Face>& MeshTp<Face>::operator=(MeshTp& m) {
  if(this != &m) {

    typename set<Face*>::iterator it;

    // ref all faceangles from m
    for(it = m._faceSet.begin(); it != m._faceSet.end(); ++it) {
      Face* t = (*it);
      if(t->isToplevel())
      TLFaceType::ref((TLFaceType*)t);
    }

    cleanup();

    // copy information
    _faceSet = m._faceSet;
    _vertMap = m._vertMap;
    _vertVec = m._vertVec;
  }

  return *this;
}

template<class Face>
MeshTp<Face>* MeshTp<Face>::clone() const {
  map<Vertex*, Vertex*>& vvMap;
  map<Face*, Face*>& ttMap;
  return clone(vvMap, ttMap);
}
template<class Face>
MeshTp<Face>* MeshTp<Face>::clone(map<Vertex*, Vertex*>& vvMap, map<Face*, Face*>& ttMap) const {
  MeshTp* m = new MeshTp();
  m->setClone(*this, vvMap, ttMap);
  return m;
}

template<class Face>
void MeshTp<Face>::setClone(const MeshTp& m) {
  map<Vertex*, Vertex*> vvMap;
  map<Face*, Face*> ttMap;
  setClone(m, vvMap, ttMap);
}

template<class Face>
void MeshTp<Face>::setClone(const MeshTp& m, map<Vertex*, Vertex*>& vvMap, map<Face*, Face*>& ttMap) {
  if(this != &m) {
    cleanup();

    vvMap.clear();
    ttMap.clear();

    // clone faces
    typename set<Face*>::const_iterator ti;
    for(ti = m._faceSet.begin(); ti != m._faceSet.end(); ++ti) {
      ttMap[*ti] = TLFaceType::createFromFace(*ti);
    }
    
    // link faces
    typename map<Face*, Face*>::const_iterator mi;
    for(mi = ttMap.begin(); mi != ttMap.end(); ++mi) {
      for(EnoType e = 1; e < (*mi).first->noVtx()+1; ++e) {
	Face* t0 = (*mi).first;
	TLFaceType* t1 = (TLFaceType*)((*mi).second);
	EnoType ne;
	Face* tmp = t0->neighbor(e, ne);
	EdgeType ne0(tmp, ne);
	if(ne0.face() != 0) {
	  typename map<Face*, Face*>::iterator it = ttMap.find(ne0.face());
	  if(it != ttMap.end())
	    t1->linkBothWays(e, (TLFaceType*)(*it).second, ne0.eno());
	}
      }
    }
    
    // replace vertices
    typename map<Vertex*, pair<int, VertexType> >::const_iterator vi;
    for(vi = m._vertMap.begin(); vi != m._vertMap.end(); ++vi)
      vvMap[(*vi).first] = (*vi).first->clone((*vi).second.second.face()->depth());
    
    for(mi = ttMap.begin(); mi != ttMap.end(); ++mi) {
      Face* t = (*mi).second;
      for(VnoType v = 0; v < t->noVtx(); ++v)
	t->setVert(v, vvMap[t->vert(v)]);
      insertFace(t);
    }
  }
}

template<class Face>
void MeshTp<Face>::insertFace(Face* t) {
  _faceSet.insert(t);
  if(t->isToplevel())
    TLFaceType::ref((TLFaceType*)t);
  for(VnoType v = 0; v < t->noVtx(); ++v) {
    typename map<Vertex*, pair<int, VertexType> >::iterator it = _vertMap.find(t->vert(v));
    if(it == _vertMap.end()) {
      _vertMap[t->vert(v)] = pair<int, VertexType>(_vertVec.size(), VertexType(t, v));
      _vertVec.push_back(t->vert(v));
      assert(_vertVec.size() == _vertMap.size());
    }
  }
}

template<class Face>
void MeshTp<Face>::cleanup() {
  typename set<Face*>::iterator it;
  for(it = _faceSet.begin(); it != _faceSet.end(); ++it) {
    if((*it)->isToplevel()) {
      TLFaceType::unref((TLFaceType*)(*it));
    }
  }
  _vertMap.clear(); 
  _faceSet.clear();
}


template<class Face>
void MeshTp<Face>::toAyam(double **cv, unsigned int *cvlen,
			  unsigned int **nverts, unsigned int **verts,
			  unsigned int *nfaces) {

  double *lcv = NULL;
  unsigned int *lnverts = NULL, *lverts = NULL;
  int vtxcnt = 0;

  // add polygons
  uint fcnt = 0;
  uint vcnt = 0;
  FaceIterType fi;
  for(fi = this->faceBegin(); fi != this->faceEnd(); ++fi) {
    if((*fi)->isLeaf())
      {
	++fcnt;
	vcnt += (*fi)->noVtx();
      }
  }

  if(!(lnverts = (unsigned int*)calloc(fcnt, sizeof(unsigned int))))
    return;
  *nfaces = fcnt;
  if(!(lverts = (unsigned int*)calloc(vcnt, sizeof(unsigned int))))
    return;

  vcnt = 0;
  fcnt = 0;
  for(fi = this->faceBegin(); fi != this->faceEnd(); ++fi) {
    Face* f = (*fi);
    if(f->isLeaf())
      {
	lnverts[fcnt] = f->noVtx();

	EnoType e = f->directEno(1);

	for(VnoType v = 0; v < f->noVtx(); ++v, e = f->nextEno(e)) {
	  lverts[vcnt] = vcnt;
	  ++vcnt;
	}
	++fcnt;
      }
  }

  // add vertices
  if(!(lcv = (double*)calloc(vcnt*6,sizeof(double))))
    return;
  for(fi = this->faceBegin(); fi != this->faceEnd(); ++fi) {
    Face* f = (*fi);
    if(f->isLeaf()) {
      EnoType e = f->directEno(1);

      for(VnoType v = 0; v < f->noVtx(); ++v, e = f->nextEno(e)) {
	cvec3f p;
	p = (f->headVert(e))->getPos(f->depth());
	lcv[vtxcnt]   = (double)p[0];
	lcv[vtxcnt+1] = (double)p[1];
	lcv[vtxcnt+2] = (double)p[2];
	p = f->normal(f->headVno(e));
	lcv[vtxcnt+3] = (double)p[0];
	lcv[vtxcnt+4] = (double)p[1];
	lcv[vtxcnt+5] = (double)p[2];
	vtxcnt += 6;
      }
    }
  }

  // return results
  *cvlen = vcnt;
  *cv = lcv;
  *nverts = lnverts;
  *verts = lverts;

}
#endif /* __MESH_H__ */
