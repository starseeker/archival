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

#ifndef _VRIP_
#define _VRIP_


#include "defines.h"

typedef float vec3f[3];
typedef float vec2f[2];


struct OrthoShear {
    int axis;
    int flip;
    float sx;
    float sy;
};


struct OccElement {
    ushort value;
    ushort totalWeight;
};


struct OccElementDbl {
    double value;
    double totalWeight;
};


struct OccNormElement {
    ushort value;
    ushort totalWeight;
    signed char nx;
    signed char ny;
    signed char nz;
    uchar more;

#if 0

    ushort value2;
    ushort totalWeight2;
    char nx2;
    char ny2;
    char nz2;
    uchar more2;

    ushort value3;
    ushort totalWeight3;
    char nx3;
    char ny3;
    char nz3;
    uchar more3;

    ushort value4;
    ushort totalWeight4;
    char nx4;
    char ny4;
    char nz4;
#endif

};


struct OccNormElementDbl {
    double value;
    double totalWeight;
    double nx;
    double ny;
    double nz;

    double value2;
    double totalWeight2;
    double nx2;
    double ny2;
    double nz2;

    double value3;
    double totalWeight3;
    double nx3;
    double ny3;
    double nz3;

    double value4;
    double totalWeight4;
    double nx4;
    double ny4;
    double nz4;
};


enum {X_AXIS, Y_AXIS, Z_AXIS};

#define FAR_AWAY_DEPTH -1e20
#define IS_VALID_DEPTH(z) (z > FAR_AWAY_DEPTH)
#define CHUNK_SIZE 1000000
#define DEPTH_TREE_GRANULARITY 8


#endif

