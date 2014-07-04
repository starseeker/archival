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

#include "ChunkAllocator.h"

ChunkAllocator::ChunkAllocator()
{
    this->chunkSize = 0;
    this->chunkList = NULL;
    this->currentChunk = NULL;
    this->currentAddr = NULL;
    this->countInChunk = 0;
}


ChunkAllocator::ChunkAllocator(int chunkSize)
{
    this->chunkSize = chunkSize;

    this->chunkList = new ChunkLink(chunkSize);
    //printf("\nAllocating new chunk.\n");

    this->currentChunk = this->chunkList;
    this->currentAddr = this->chunkList->chunk;
    this->countInChunk = 0;
}


uchar *
ChunkAllocator::alloc(int num)
{
    this->newChunkIfNeeded(num);
    uchar *addr = this->currentAddr;
    this->currentAddr += num;
    this->countInChunk += num;
    return addr;
}


void
ChunkAllocator::newChunkIfNeeded(int num)
{
	if (num+this->countInChunk > this->chunkSize) {
		if (this->currentChunk->next == NULL) {
	    //printf("\nAllocating new chunk.\n");
	    this->currentChunk->next = new ChunkLink(chunkSize);
		}
		this->currentChunk = this->currentChunk->next;
		this->countInChunk = 0;
		this->currentAddr = this->currentChunk->chunk;
	}
}


void
ChunkAllocator::reset()
{
    this->currentChunk = this->chunkList;
    this->currentAddr = this->chunkList->chunk;
    this->countInChunk = 0;
}


ChunkAllocator::~ChunkAllocator()
{
    ChunkLink *chunk, *nextChunk;
    
    chunk = this->chunkList;
    while (chunk != NULL) {
	nextChunk = chunk->next;
	delete chunk;
	chunk = nextChunk;
    }
}




