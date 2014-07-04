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


#ifndef _DEFINES_
#define _DEFINES_

#ifndef LINUX
#include <malloc.h>
#include <stdlib.h>
#endif

#include <string.h>

#ifndef NULL
#define NULL    0
#endif

#ifndef TRUE
#define TRUE    1
#endif

#ifndef FALSE
#define FALSE   0
#endif

#ifndef MAX
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#endif

#ifndef MIN
#define MIN(a, b) ((a) < (b) ? (a) : (b))
#endif

#ifndef SWAP
#define SWAP(a, b, t) (t) = (a); (a) = (b); (b) = (t)
#endif

#ifndef SWAP_INT
#define SWAP_INT(a, b) {int _temp_int = (a); (a) = (b); (b) = _temp_int;}
#endif

#ifndef SWAP_FLOAT
#define SWAP_FLOAT(a, b) {float _temp_float =(a); (a) =(b); (b) =_temp_float;}
#endif

#ifndef SWAP_USHORT
#define SWAP_USHORT(a, b) {unsigned short _temp_ushort = (a); (a) = (b); \
  (b) = _temp_ushort;}
#endif

#ifndef SQUARE
#define SQUARE(x) ((x)*(x))
#endif

#ifndef ROUND_UCHAR
#define ROUND_UCHAR(x) (uchar((x)+0.5))
#endif

#ifndef ABS
#define ABS(x) ((x) > 0 ? (x) : -(x))
#endif

#ifndef SIGN
#define SIGN(x) ((x) > 0 ? 1 : -1)
#endif

#ifndef DEGTORAD
#define DEGTORAD(x) ((x)*M_PI/180)
#endif

#ifndef RAD
#define RAD(x) ((x)*M_PI/180)
#endif

#ifndef RADTODEG
#define RADTODEG(x) ((x)*180/M_PI)
#endif

#ifndef LINUX

#ifndef MALLOC
#define MALLOC(x, n) ((x*)malloc((n)*sizeof(x)))
#endif

#ifndef newmalloc
#define newmalloc(x, n) ((x*)malloc((n)*sizeof(x)))
#endif /* newmalloc */

#endif /* LINUX */

#ifndef PI
#define PI 3.14159265358979323846264
#endif

#ifndef EQSTR
#define EQSTR(x, y)  (strcmp((x),(y)) == 0)
#endif

#ifndef IS_ODD
#define IS_ODD(x)  ((x)%2 != 0)
#endif

#ifndef IS_EVEN
#define IS_EVEN(x)  ((x)%2 == 0)
#endif

#ifndef ROUNT_INT
#define ROUND_INT(x)  ((int)(x+0.5))
#endif


/* Watch out for BSD incompatibility */

typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint;


typedef uchar byte;

/* Stop using this? */
/*typedef int Bool;*/

#endif
