/*
 * Copyright (c) 1995-2014, Stanford University
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *     * Redistributions of source code must retain the above copyright
 *       notice, this list of conditions and the following disclaimer.
 *     * Redistributions in binary form must reproduce the above copyright
 *       notice, this list of conditions and the following disclaimer in the
 *       documentation and/or other materials provided with the distribution.
 *     * Neither the name of Stanford University nor the
 *       names of its contributors may be used to endorse or promote products
 *       derived from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY STANFORD UNIVERSITY ''AS IS'' AND ANY
 * EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL STANFORD UNIVERSITY BE LIABLE FOR ANY
 * DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES;
 * LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND
 * ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS
 * SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef _MATRIX4F_
#define _MATRIX4F_

#include "Vec3f.h"
#include "Matrix3f.h"
#include "defines.h"

class Matrix4f {
 public:
    float m[4][4];

    Matrix4f() {}
    Matrix4f(const Matrix4f &a) {setValue(a);}
    Matrix4f(float a[][4]) {setValue(a);}
    Matrix4f(float *a0, float *a1, float *a2, float *a3) 
        {setValue(a0, a1, a2, a3);}
    Matrix4f(float a00, float a01, float a02, float a03,
	     float a10, float a11, float a12, float a13,
	     float a20, float a21, float a22, float a23,
	     float a30, float a31, float a32, float a33)
        { setValue(a00, a01, a02, a03, 
		   a10, a11, a12, a13, 
		   a20, a21, a22, a23,
		   a30, a31, a32, a33); }

    void clear() {setValue(0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0);}
    void setValue(const Matrix4f &a);
    void setValue(float a[][4]);
    void setValue(float *a0, float *a1, float *a2, float *a3);
    void setValue(float a00, float a01, float a02, float a03,
		  float a10, float a11, float a12, float a13,
		  float a20, float a21, float a22, float a23,
		  float a30, float a31, float a32, float a33);
    void setValue(float *a);
    void getValue(float *a);
    void multVec(const Vec3f &src, Vec3f &dst);
    void multVecHomog(const Vec3f &src, Vec3f &dst);
    void multDir(const Vec3f &src, Vec3f &dst);
    float elem(int i, int j) {return m[i][j];}
    void setElem(int i, int j, float val) {m[i][j] = val;}
    void makeIdentity();
    Matrix4f & multRight(const Matrix4f &m);
    Matrix4f & multLeft(const Matrix4f &m);
    Matrix4f & multLeft(const Matrix3f &a);
    void setScale(float s);
    void setScale(float sx, float sy, float sz);
    void setScale(const Vec3f &s);
    void setRotateX(float theta);
    void setRotateY(float theta);
    void setRotateZ(float theta);
    void setTranslate(Vec3f t);
    void setTranslate(float tx, float ty, float tz);
    void scale(float s);
    void scale(float sx, float sy, float sz);
    void scale(const Vec3f &s);
    void rotateX(float theta);
    void rotateY(float theta);
    void rotateZ(float theta);
    void translate(Vec3f t);
    void translate(float tx, float ty, float tz);
    Matrix4f inverse() const;
    void transpose();
    //void freeNR(float **in) const; 
    //void toNR(Matrix4f &in, float **nrmat) const;
    int operator==(const Matrix4f &);
    int operator!=(const Matrix4f &);
    void print();

/*
    Matrix4f & operator *=(const Matrix4f &m);
    friend Matrix4f operator *(const Matrix4f &m1, const Matrix4f &m2);
*/
};

#endif
