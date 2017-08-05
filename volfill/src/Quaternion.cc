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

#include "Quaternion.h"
#include "Matrix4f.h"

#define X 0
#define Y 1
#define Z 2
#define W 3


Quaternion::Quaternion()
{
    q[0] = 0;
    q[1] = 0;
    q[2] = 0;
    q[3] = 1;
}

Quaternion::~Quaternion()
{
}


void
Quaternion::setValue(float q0, float q1, float q2, float q3)
{
    q[0] = q0;
    q[1] = q1;
    q[2] = q2;
    q[3] = q3;
}

void
Quaternion::setValue(float *quat)
{
    q[0] = quat[0];
    q[1] = quat[1];
    q[2] = quat[2];
    q[3] = quat[3];
}


void
Quaternion::setValue(Quaternion &quat)
{
    q[0] = quat.q[0];
    q[1] = quat.q[1];
    q[2] = quat.q[2];
    q[3] = quat.q[3];
}


/******************************************************************************
Convert a quaternion into a rotation matrix.  Does *not* assume a unit
quaternion.  From Ken Shoemake.

******************************************************************************/
void
Quaternion::toMatrix(Matrix4f &mat)
{
    float s;
    float xs,ys,zs;
    float wx,wy,wz;
    float xx,xy,xz;
    float yy,yz,zz;
    
    /* for unit q, just set s = 2 or set xs = this->q[X] + this->q[X], etc. */
    
    s = 2 / (this->q[X]*this->q[X] + this->q[Y]*this->q[Y] 
	     + this->q[Z]*this->q[Z] + this->q[W]*this->q[W]);
    
    xs = this->q[X] * s;
    ys = this->q[Y] * s;
    zs = this->q[Z] * s;
    
    wx = this->q[W] * xs;
    wy = this->q[W] * ys;
    wz = this->q[W] * zs;
    
    xx = this->q[X] * xs;
    xy = this->q[X] * ys;
    xz = this->q[X] * zs;
    
    yy = this->q[Y] * ys;
    yz = this->q[Y] * zs;
    zz = this->q[Z] * zs;
    
    mat.m[X][X] = 1 - (yy + zz);
    mat.m[X][Y] = xy - wz;
    mat.m[X][Z] = xz + wy;
    mat.m[X][W] = 0;
    
    mat.m[Y][X] = xy + wz;
    mat.m[Y][Y] = 1 - (xx + zz);
    mat.m[Y][Z] = yz - wx;
    mat.m[Y][W] = 0;
    
    mat.m[Z][X] = xz - wy;
    mat.m[Z][Y] = yz + wx;
    mat.m[Z][Z] = 1 - (xx + yy);
    mat.m[Z][W] = 0;
    
    mat.m[W][X] = 0;
    mat.m[W][Y] = 0;
    mat.m[W][Z] = 0;
    mat.m[W][W] = 1;
}


/******************************************************************************
Convert a rotation mat.mrix into a unit quaternion.  From Ken Shoemake.

******************************************************************************/
void
Quaternion::fromMatrix(Matrix4f &mat)
{
  int i,j,k;
  float tr,s;
  static int nxt[3] = {Y, Z, X};

  tr = mat.m[X][X] + mat.m[Y][Y] + mat.m[Z][Z];

  if (tr > 0) {
    s = sqrt (tr + 1);
    this->q[W] = s * 0.5;
    s = 0.5 / s;
    this->q[X] = (mat.m[Z][Y] - mat.m[Y][Z]) * s;
    this->q[Y] = (mat.m[X][Z] - mat.m[Z][X]) * s;
    this->q[Z] = (mat.m[Y][X] - mat.m[X][Y]) * s;
  }
  else {
    i = X;
    if (mat.m[Y][Y] > mat.m[X][X])
      i = Y;
    if (mat.m[Z][Z] > mat.m[i][i])
      i = Z;
    j = nxt[i];
    k = nxt[j];
    s = sqrt (1 + (mat.m[i][i] - (mat.m[j][j] + mat.m[k][k])));
    this->q[i] = s * 0.5;
    s = 0.5 / s;
    this->q[W] = (mat.m[k][j] - mat.m[j][k]) * s;
    this->q[j] = (mat.m[j][i] + mat.m[i][j]) * s;
    this->q[k] = (mat.m[k][i] + mat.m[i][k]) * s;
  }
}

