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

#include <iostream>
#include <stdio.h>

#ifdef linux
# include <sys/time.h>
# include <sys/resource.h>
# include <unistd.h>
#endif

void PrintResourceUsage(const char *msg) {

#ifdef linux   
	std::cerr << "volfill info: " << msg << ":";
	
	struct rusage ru;
	getrusage(RUSAGE_SELF, &ru);
	char buf[100];
	sprintf(buf, " user %ld.%.1lds system %ld.%.1lds", ru.ru_utime.tv_sec,
					ru.ru_utime.tv_usec / 100000, ru.ru_stime.tv_sec, 
					ru.ru_stime.tv_usec / 100000);
	
	std::cerr << buf;
	sprintf(buf, "ps h -o vsize -p %d", getpid());
	FILE *p = popen(buf, "r");
	int vsize;
	fscanf(p, "%d", &vsize);
	fclose(p);
	sprintf(buf, " vsize %.2fMB", vsize / 1024.0);

	std::cerr << buf << std::endl;
#endif // linux   
}
