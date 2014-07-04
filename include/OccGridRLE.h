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

#ifndef _OCC_GRID_RLE_
#define _OCC_GRID_RLE_

#include "vrip.h"
#include "ChunkAllocator.h"
#include <limits.h>
#include "OccGrid.h"

typedef ushort RunLength;


class OccScanlineRLE {

 public:

	RunLength *lengths;
	OccElement *elements;
	RunLength *currentLength;
	OccElement *currentElem;

	OccScanlineRLE();
	OccScanlineRLE(int dim);
	~OccScanlineRLE();

	void reset();
	OccElement *getNextElement();
	RunLength getNextLength();
	void putNextElement(OccElement *element);
	void putNextLength(RunLength length);
};



class OccGridRLE {

 public:
	enum {CONSTANT_DATA, VARYING_DATA, END_OF_RUN=USHRT_MAX};
	enum {FALSE_DATA_BIT=0x8000};
	static const ushort HIGHEST_BIT = 0x8000;

	int xdim, ydim, zdim;
	float resolution;
	vec3f origin;
	vec3f *sliceOrigins;
	int axis;
	int flip;

	RunLength **lengthAddr;
	ChunkAllocator *lengthChunker;
	RunLength *currentLength;

	OccElement **elementAddr;
	ChunkAllocator *elementChunker;
	OccElement *currentElem;

	OccScanlineRLE *rleScanline;
	OccElement *slice;
	OccElement *otherSlice;
	OccElement *scanline;
	OccElement *defaultElement;
	int transpXZbytesPerScanline;
	uchar *transpXZslice;

	OccElement emptyNoWeight;
	OccElement fullNoWeight;

	OccGridRLE();
	OccGridRLE(int,int,int,int);

	void init(int,int,int,int);
	void freeSpace();

	void copy(OccGridRLE *other);
	void copyParams(OccGridRLE *other);

	int transposeXZ(OccGridRLE *other);
	int transposeXY(OccGridRLE *other);
	int transposeYZ(OccGridRLE *other);
    
	void clear();
	void reset();

	OccElement voxRead (int x, int y, int z);
	void       voxWrite(int x, int y, int z, OccElement &el);

	OccGrid *voxExpand();
	void voxRLE(OccGrid *og);
  
	OccElement *getSlice(char *axis, int sliceNum, int *pxdim, int *pydim);
	OccElement *getScanline(int y, int z, OccElement *line = NULL);
	void putScanline(OccElement *line, int y, int z);
	void copyScanline(OccScanlineRLE *rleScanline, int y, int z);
	OccElement *transposeSlice(int xdim,int ydim);
	OccElement *getElement(int xx, int yy, int zz);
	void runStats(int yy, int zz, int *numRuns, int *numElems);
	int getRunType(RunLength *length);
	void setRunType(RunLength *length, int runType);
	void putNextElement(OccElement *element);
	void putNextLength(RunLength length);
	OccElement *getNextElement();
	RunLength getNextLength();
	void allocNewRun(int y, int z);
	void setScanline(int y, int z);
	int writeDen(char *);
	int write(char *);
	int read(char *);
	int decideType(OccElement *);
	OccScanlineRLE *getRLEScanline(int yy, int zz);
	~OccGridRLE();
};


inline void
OccScanlineRLE::reset()
{
	currentElem = elements;
	currentLength = lengths;
}

inline OccElement *
OccScanlineRLE::getNextElement()
{
	return currentElem++;
}


inline RunLength 
OccScanlineRLE::getNextLength()
{
	return *currentLength++;
}


inline void 
OccScanlineRLE::putNextElement(OccElement *element)
{
	currentElem->value = element->value;
	currentElem->totalWeight = element->totalWeight;
	currentElem++;
}


inline void 
OccScanlineRLE::putNextLength(RunLength length)
{
	*currentLength = length;
	currentLength++;
}


/*
void
OccScanlineRLE::copyScanline(OccScanlineRLE *rleScanline)
{
    int i;
    RunLength length;
    int runType;
    OccElement *element;

    this->reset();
    rleScanline->reset();

    while (TRUE) {
	length = rleScanline->getNextLength();
	this->putNextLength(length);

	runType = getRunType(&length);

	if (runType == OccGridRLE::END_OF_RUN)
	    break;

	if (runType == OccGridRLE::CONSTANT_DATA) {
	    element = rleScanline->getNextElement();
	    this->putNextElement(element);
	}
	else {
	    for (i=0; i<length; i++) {
		element = rleScanline->getNextElement();
		this->putNextElement(element);
	    }
	}
    }
}
*/

inline void
OccGridRLE::putNextElement(OccElement *element)
{
	OccElement *newElem = 
		(OccElement *)this->elementChunker->alloc(sizeof(OccElement));
	newElem->value = element->value;
	newElem->totalWeight = element->totalWeight;
}


inline void
OccGridRLE::putNextLength(RunLength length)
{
	RunLength *newLength = 
		(RunLength *)this->lengthChunker->alloc(sizeof(RunLength));
	*newLength = length;
}


inline OccElement *
OccGridRLE::getNextElement()
{
	return currentElem++;
}

inline RunLength 
OccGridRLE::getNextLength()
{
	return *currentLength++;
}


inline int
OccGridRLE::getRunType(RunLength *length)
{
	int flag;
    

	if (*length == OccGridRLE::END_OF_RUN)
		return OccGridRLE::END_OF_RUN;
    
	flag = *length & OccGridRLE::HIGHEST_BIT;
	*length = *length & ~OccGridRLE::HIGHEST_BIT;
	if (flag) {
		return OccGridRLE::VARYING_DATA;
	} else {
		return OccGridRLE::CONSTANT_DATA;
	}
}


inline void
OccGridRLE::setRunType(RunLength *length, int runType)
{
	if (runType == OccGridRLE::END_OF_RUN)
		*length = OccGridRLE::END_OF_RUN;
	else if (runType == OccGridRLE::VARYING_DATA)
		*length = *length | OccGridRLE::HIGHEST_BIT;

	// else leave it alone
}


inline int
OccGridRLE::decideType(OccElement *element)
{
	if ( (element->value == emptyNoWeight.value &&
				element->totalWeight == emptyNoWeight.totalWeight) ||
			 (element->value == fullNoWeight.value &&
				element->totalWeight == fullNoWeight.totalWeight) ) {

		return OccGridRLE::CONSTANT_DATA;

	} else {

		return OccGridRLE::VARYING_DATA;

	}
}

#endif











