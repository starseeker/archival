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

#ifndef _MATRIX3F_
#define _MATRIX3F_

#include "Vec3f.h"
#include "defines.h"

class Matrix3f {
    friend Vec3f;

 public:
    float m[3][3];

    Matrix3f() {}
    Matrix3f(const Matrix3f &a) {setValue(a);}
    Matrix3f(float a[][3]) {setValue(a);}
    Matrix3f(float *a0, float *a1, float *a2) {setValue(a0, a1, a2);}
    Matrix3f(Vec3f a0, Vec3f a1, Vec3f a2) {setValue(a0, a1, a2);}
    Matrix3f(float a00, float a01, float a02,
		  float a10, float a11, float a12,
		  float a20, float a21, float a22)
        { setValue(a00, a01, a02, a10, a11, a12, a20, a21, a22); }
    void clear() {setValue(0,0,0,0,0,0,0,0,0);}
    void makeIdentity();
    void setValue(const Matrix3f &a);
    void setValue(float a[][3]);
    void setValue(float *a0, float *a1, float *a2);
    void setValue(Vec3f a0, Vec3f a1, Vec3f a2);
    void setValue(float a00, float a01, float a02,
		  float a10, float a11, float a12,
		  float a20, float a21, float a22);
    Vec3f mult(Vec3f &vec);
    float elem(int i, int j) {return m[i][j];}
    void setElem(int i, int j, float val) {m[i][j] = val;}
    Matrix3f&     operator +=(const Matrix3f &a);
    float determinant();
    int operator==(const Matrix3f &);
    int operator!=(const Matrix3f &);
    Matrix3f & operator*=(float);
    Matrix3f inverse() const;
    void map(const Vec3f vin[3], const Vec3f vout[3]);
    void toNR(Matrix3f &in, float **nrmat) const;
    void setScale(float s);
    void setScale(float sx, float sy, float sz);
    void setScale(const Vec3f &s);
    Matrix3f & multLeft(const Matrix3f &m);
};

#endif
