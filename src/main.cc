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

#include <GLFW/glfw3.h>
#include <iostream>
#ifdef linux
#include <strings.h>
#endif
#ifdef _WIN32
#define strcasecmp _stricmp
#endif
#include <string.h>
#include <stdlib.h>

#include "OccGridRLE.h"
#include "ActiveGrid.h"

#include "fb.h" // the drawing frame buffer
#include "util.h"

FrameBuffer fb;
ActVoxelGrid actGrid;
OccGridRLE *ogSrc;
int sweep = 73; //147; //236; //43; //236; //65;
int sweepMax;

int drawType = 3;
bool useGUI = false;
int nIterations = 10;
char *inFile, *outfile;
unsigned char d1limit = 10, d2limit = 20;
bool propD2 = false;

// structure to hold general information about the window
struct winInfo_t {
	int width, height;
};

winInfo_t winInfo;

void Usage() {
	std::cerr << "Usage: volfill <in.vri> <out.vri> ...  " << std::endl; 
	std::cerr << "-g" << std::endl;
	std::cerr << "-n <number of Iterations>" << std::endl;
	std::cerr << "-d1 <d1 distance>" << std::endl;
	std::cerr << "-d2 <d2 distance>" << std::endl;
	std::cerr << "-p" << std::endl;
	exit(1);
}

// OpenGL display function
void display(GLFWwindow *window)
{
	glClear(GL_COLOR_BUFFER_BIT);
	
	actGrid.draw(&fb, sweep, drawType, 10, 20);
	fb.Draw();

	glfwSwapBuffers(window);
	glFlush();
}

// initialization function
void init(void)
{
	glClearColor(0,0,0,0);
	
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	glOrtho(0.0, 1.0, 0.0, 1.0, -1.0, 1.0);
}

void Keyboard(GLFWwindow *window, int key, int scancode, int action, int mods )
{
	OccGridRLE *ogDst;
	FILE *fp;
	char buffer[500];

	switch (key) {
	case GLFW_KEY_M:
		fp = fopen("movie.list", "wt");
		for (int i=0; i<nIterations; i++) {
			actGrid.blur(d1limit, d2limit);
			display(window);
			sprintf(buffer, "blur.%d.ppm", i+1);
			fb.Write(buffer);
			fprintf(fp, "%s\n", buffer);
		}
		fclose(fp);

		display(window);
		break;
	case GLFW_KEY_L:
		for (int i=0; i<nIterations; i++) { 
			actGrid.blur(d1limit, d2limit);
			PrintResourceUsage("After an Iteration");
		}

		display(window);
		break;
	case GLFW_KEY_B:
		PrintResourceUsage("Before an Iteration");
		actGrid.blur(d1limit, d2limit);
		PrintResourceUsage("After an Iteration");
		display(window);
		break;
	case GLFW_KEY_W:
		std::cerr << "Writing output...";
		ogSrc = new OccGridRLE(1,1,1, CHUNK_SIZE);
		if (!ogSrc->read(inFile)) Usage();

		ogDst = new
			OccGridRLE(ogSrc->xdim,ogSrc->ydim,ogSrc->zdim,CHUNK_SIZE);
		ogDst->origin[0] = ogSrc->origin[0];
		ogDst->origin[1] = ogSrc->origin[1];
		ogDst->origin[2] = ogSrc->origin[2];
		ogDst->resolution = ogSrc->resolution;
		
		actGrid.saveToOccGridRLE(ogSrc, ogDst);
		ogDst->write(outfile);			 
		
		delete ogSrc;
		delete ogDst;

		std::cerr << "Done" << std::endl;

		break;
	case GLFW_KEY_1:
		drawType = 0;
		display(window);
		break;
	case GLFW_KEY_2:
		drawType = 1;
		display(window);
		break;
	case GLFW_KEY_3:
		drawType = 2;
		display(window);
		break;
	case GLFW_KEY_4:
		drawType = 3;
		display(window);
		break;
	case GLFW_KEY_A:
		sweep++;
		if (sweep >= sweepMax)
			sweep = sweepMax - 1;
		display(window);
		break;
	case GLFW_KEY_S:
		sweep--;
		if (sweep < 0)
			sweep = 0;
		display(window);
		break;
	}
}

void ProcessArguments(int argc, char *argv[])
{
	for (int i=3; i<argc; i++) {
		if (!strcasecmp(argv[i], "-g"))
			useGUI = true;
		if (!strcasecmp(argv[i], "-n")) {
			if (++i < argc) {
				nIterations = atoi(argv[i]);
			} else 
				Usage();
		}
		if (!strcasecmp(argv[i], "-d1")) {
			if (++i < argc)
				d1limit = atoi(argv[i]);
			else
				Usage();
		}
		if (!strcasecmp(argv[i], "-d2")) {
			if (++i < argc)
				d2limit = atoi(argv[i]);
			else
				Usage();
		}
		if (!strcasecmp(argv[i], "-p")) {
			propD2 = true;
		}
	}
}

int main(int argc, char *argv[]) {
	PrintResourceUsage("At Beginning of program");
	// load the input
	if (argc < 3) Usage();

	// read the in and out files
	inFile = argv[1];
	outfile = argv[2];
	
	ProcessArguments(argc, argv);
	
	ogSrc = new OccGridRLE(1,1,1, CHUNK_SIZE);
	if (!ogSrc->read(inFile)) Usage();
	PrintResourceUsage("After loading grid");
	
	// load in the grid
	actGrid.loadFromOccGridRLE(ogSrc, d2limit);

	winInfo.width = ogSrc->xdim; 
	winInfo.height = ogSrc->ydim;
	
	sweep = ogSrc->zdim / 2;
	sweepMax = ogSrc->zdim;
	
	// delete the old source
	delete ogSrc;

	// initialize distance information based on the OccGridRLE
	actGrid.initDistances(d2limit, propD2);

	PrintResourceUsage("After loading in OccGrid");

	if (useGUI) {		
		// init glfw and the framebuffer
		GLFWwindow* window;
		double t, dt, t_old;

		if( !glfwInit() )
		{
			fprintf( stderr, "Failed to initialize GLFW\n" );
			exit( EXIT_FAILURE );
		}

		glfwWindowHint(GLFW_DEPTH_BITS, 16);

		window = glfwCreateWindow( winInfo.width, winInfo.height, "volfill", NULL, NULL );
		if (!window) {
			glfwTerminate();
			exit (1);
		}
		glfwMakeContextCurrent(window);
		glfwSwapInterval( 1 );

		fb.Init(winInfo.width, winInfo.height);

		init();

		glfwSetTime( 0.0 );

		glfwSetKeyCallback(window, Keyboard);


		/* Main loop */
		for (;;)
		{
			/* Timing */
			t = glfwGetTime();
			dt = t - t_old;
			t_old = t;

			/* Draw one frame */
			display(window);

			/* Swap buffers */
			glfwSwapBuffers(window);
			glfwPollEvents();

			/* Check if we are still running */
			if (glfwWindowShouldClose(window))
				break;
		}

		glfwTerminate();
		exit( EXIT_SUCCESS );

	} else {
		OccGridRLE *ogDst;

		// non graphical version
		for (int i=0; i<nIterations; i++) {
			std::cout << i+1 << ":";
			actGrid.blur(d1limit, d2limit);
			PrintResourceUsage("After an Iteration");
		}
		
		std::cerr << "Writing output...";
		ogSrc = new OccGridRLE(1,1,1, CHUNK_SIZE);
		if (!ogSrc->read(inFile)) Usage();

		ogDst = new
			OccGridRLE(ogSrc->xdim,ogSrc->ydim,ogSrc->zdim,CHUNK_SIZE);
		ogDst->origin[0] = ogSrc->origin[0];
		ogDst->origin[1] = ogSrc->origin[1];
		ogDst->origin[2] = ogSrc->origin[2];
		ogDst->resolution = ogSrc->resolution;
		
		actGrid.saveToOccGridRLE(ogSrc, ogDst);
		ogDst->write(outfile);			 
		
		delete ogSrc;
		delete ogDst;

		std::cerr << "Done" << std::endl;
	}

	return 0;
}



