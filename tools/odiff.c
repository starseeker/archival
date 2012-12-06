/*
 *  odiff - Diff utility based on liXDiff
 *  changes from xdiff_test and other files are 
 *  Copyright (C) 2012  Clifford Yapp
 *
 *  LibXDiff by Davide Libenzi ( File Differential Library )
 *  Copyright (C) 2003  Davide Libenzi
 *
 *  This library is free software; you can redistribute it and/or
 *  modify it under the terms of the GNU Lesser General Public
 *  License as published by the Free Software Foundation; either
 *  version 2.1 of the License, or (at your option) any later version.
 *
 *  This library is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 *  Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with this library; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>

#if defined(WIN32) || defined(_WIN32)

#include <io.h>

#define write _write
#define read _read
#define lseek _lseek
#define close _close
#define O_CREAT _O_CREAT
#define O_WRONLY _O_WRONLY
#define O_RDONLY _O_RDONLY
#define off_t long
#define size_t int

#else /* #if defined(WIN32) || defined(_WIN32) */

#include <unistd.h>

#endif /* #if defined(WIN32) || defined(_WIN32) */

#include "popt.h"
#include "xdiff.h"
#include "xmacros.h"
#include "xdiff.h"

#define DBL_RAND() (((double) rand()) / (1.0 + (double) RAND_MAX))

int xdlt_dump_mmfile(char const *fname, mmfile_t *mmf);
int xdlt_load_mmfile(char const *fname, mmfile_t *mf, int binmode);
int xdlt_do_diff(mmfile_t *mf1, mmfile_t *mf2, xpparam_t const *xpp,
		 xdemitconf_t const *xecfg, mmfile_t *mfp);
int xdlt_do_patch(mmfile_t *mfo, mmfile_t *mfp, int mode, mmfile_t *mfr);
long xdlt_gen_line(char *buf, long msize);
int xdlt_create_file(mmfile_t *mf, long size);
int xdlt_change_file(mmfile_t *mfo, mmfile_t *mfr, double rmod, int chmax);
int xdlt_do_bindiff(mmfile_t *mf1, mmfile_t *mf2, bdiffparam_t const *bdp, mmfile_t *mfp);
int xdlt_do_rabdiff(mmfile_t *mf1, mmfile_t *mf2, mmfile_t *mfp);
int xdlt_do_binpatch(mmfile_t *mf, mmfile_t *mfp, mmfile_t *mfr);


#define XDLT_STD_BLKSIZE (1024 * 8)
#define XDLT_MAX_LINE_SIZE 80


static int xdlt_mmfile_outf(void *priv, mmbuffer_t *mb, int nbuf);



int xdlt_dump_mmfile(char const *fname, mmfile_t *mmf) {
	int fd;
	long size;
	char *blk;

	if ((fd = open(fname, O_CREAT | O_WRONLY, 0644)) == -1) {
		perror(fname);
		return -1;
	}

	if ((blk = (char *) xdl_mmfile_first(mmf, &size)) != NULL) {
		do {
			if (write(fd, blk, (size_t) size) != (size_t) size) {
				perror(fname);
				close(fd);
				return -1;
			}
		} while ((blk = (char *) xdl_mmfile_next(mmf, &size)) != NULL);
	}

	close(fd);

	return 0;
}


int xdlt_load_mmfile(char const *fname, mmfile_t *mf, int binmode) {
	int fd;
	long size;
	char *blk;

	if (xdl_init_mmfile(mf, XDLT_STD_BLKSIZE, XDL_MMF_ATOMIC) < 0) {

		return -1;
	}
	if ((fd = open(fname, O_RDONLY)) == -1) {
		perror(fname);
		xdl_free_mmfile(mf);
		return -1;
	}
	size = lseek(fd, 0, SEEK_END);
	lseek(fd, 0, SEEK_SET);
	if (!(blk = (char *) xdl_mmfile_writeallocate(mf, size))) {
		xdl_free_mmfile(mf);
		close(fd);
		return -1;
	}
	if (read(fd, blk, (size_t) size) != (size_t) size) {
		perror(fname);
		xdl_free_mmfile(mf);
		close(fd);
		return -1;
	}
	close(fd);

	return 0;
}


static int xdlt_mmfile_outf(void *priv, mmbuffer_t *mb, int nbuf) {
	mmfile_t *mmf = priv;

	if (xdl_writem_mmfile(mmf, mb, nbuf) < 0) {

		return -1;
	}

	return 0;
}


int xdlt_do_diff(mmfile_t *mf1, mmfile_t *mf2, xpparam_t const *xpp,
		 xdemitconf_t const *xecfg, mmfile_t *mfp) {
	xdemitcb_t ecb;

	if (xdl_init_mmfile(mfp, XDLT_STD_BLKSIZE, XDL_MMF_ATOMIC) < 0) {

		return -1;
	}
	ecb.priv = mfp;
	ecb.outf = xdlt_mmfile_outf;
	if (xdl_diff(mf1, mf2, xpp, xecfg, &ecb) < 0) {

		xdl_free_mmfile(mfp);
		return -1;
	}

	return 0;
}


int xdlt_do_patch(mmfile_t *mfo, mmfile_t *mfp, int mode, mmfile_t *mfr) {
	xdemitcb_t ecb, rjecb;
	mmfile_t mmfrj;

	if (xdl_init_mmfile(mfr, XDLT_STD_BLKSIZE, XDL_MMF_ATOMIC) < 0) {

		return -1;
	}
	if (xdl_init_mmfile(&mmfrj, XDLT_STD_BLKSIZE, XDL_MMF_ATOMIC) < 0) {

		xdl_free_mmfile(mfr);
		return -1;
	}
	ecb.priv = mfr;
	ecb.outf = xdlt_mmfile_outf;
	rjecb.priv = &mmfrj;
	rjecb.outf = xdlt_mmfile_outf;
	if (xdl_patch(mfo, mfp, mode, &ecb, &rjecb) < 0) {

		xdl_free_mmfile(&mmfrj);
		xdl_free_mmfile(mfr);
		return -1;
	}

	if (mmfrj.fsize > 0) {

#if 1
		xdlt_dump_mmfile("xregr.orig", mfo);
		xdlt_dump_mmfile("xregr.patch", mfp);
		xdlt_dump_mmfile("xregr.rej", &mmfrj);
#endif

		xdl_free_mmfile(&mmfrj);
		xdl_free_mmfile(mfr);
		return -1;
	}
	xdl_free_mmfile(&mmfrj);

	return 0;
}


long xdlt_gen_line(char *buf, long msize) {
	long i, size;
	static const char ab[] =
		"zxcvbnmlkjhgfdsaqwertyuiop"
		"ZXCVBNMLKJHGFDSAQWERTYUIOP"
		"0123456789                ";
	static const int absize = sizeof(ab) - 1;

	if (msize > 0)
		size = rand() % (msize - 1);
	else
		size = -msize - 1;
	for (i = 0; i < size; i++)
		buf[i] = ab[rand() % absize];
	buf[i] = '\n';
	return size + 1;
}


int xdlt_create_file(mmfile_t *mf, long size) {
	long lnsize, csize;
	char *data;

	if (xdl_init_mmfile(mf, XDLT_STD_BLKSIZE, XDL_MMF_ATOMIC) < 0) {

		return -1;
	}
	if (!(data = xdl_mmfile_writeallocate(mf, size))) {

		xdl_free_mmfile(mf);
		return -1;
	}
	for (csize = 0; size - csize > XDLT_MAX_LINE_SIZE;) {
		lnsize = xdlt_gen_line(data, XDLT_MAX_LINE_SIZE);
		data += lnsize;
		csize += lnsize;
	}
	if (csize < size)
		xdlt_gen_line(data, -(size - csize));

	return 0;
}


int xdlt_change_file(mmfile_t *mfo, mmfile_t *mfr, double rmod,
		     int chmax) {
	long skipln, lnsize, bsize;
	char const *blk, *cur, *top, *eol;
	char lnbuf[XDLT_MAX_LINE_SIZE + 1];

	if (xdl_init_mmfile(mfr, XDLT_STD_BLKSIZE, XDL_MMF_ATOMIC) < 0) {

		return -1;
	}
	if ((blk = xdl_mmfile_first(mfo, &bsize)) != NULL) {
		for (cur = blk, top = blk + bsize, skipln = 0;;) {
			if (cur >= top) {
				if ((blk = xdl_mmfile_next(mfo, &bsize)) == NULL)
					break;
				cur = blk;
				top = blk + bsize;
			}
			if (!(eol = memchr(cur, '\n', top - cur)))
				eol = top;
			if (!skipln) {
				if (DBL_RAND() < rmod) {
					skipln = rand() % chmax;
					if (rand() & 1) {
						for (; skipln > 0; skipln--) {
							lnsize = xdlt_gen_line(lnbuf, XDLT_MAX_LINE_SIZE);
							if (xdl_write_mmfile(mfr, lnbuf, lnsize) != lnsize) {

								xdl_free_mmfile(mfr);
								return -1;
							}
						}
					}
				} else {
					lnsize = (eol - cur) + 1;
					if (xdl_write_mmfile(mfr, cur, lnsize) != lnsize) {

						xdl_free_mmfile(mfr);
						return -1;
					}
				}
			} else
				skipln--;

			cur = eol + 1;
		}
	}

	return 0;
}

int xdlt_do_bindiff(mmfile_t *mf1, mmfile_t *mf2, bdiffparam_t const *bdp, mmfile_t *mfp) {
	xdemitcb_t ecb;

	if (xdl_init_mmfile(mfp, XDLT_STD_BLKSIZE, XDL_MMF_ATOMIC) < 0) {

		return -1;
	}
	ecb.priv = mfp;
	ecb.outf = xdlt_mmfile_outf;
	if (xdl_bdiff(mf1, mf2, bdp, &ecb) < 0) {

		xdl_free_mmfile(mfp);
		return -1;
	}

	return 0;
}


int xdlt_do_rabdiff(mmfile_t *mf1, mmfile_t *mf2, mmfile_t *mfp) {
	xdemitcb_t ecb;

	if (xdl_init_mmfile(mfp, XDLT_STD_BLKSIZE, XDL_MMF_ATOMIC) < 0) {

		return -1;
	}
	ecb.priv = mfp;
	ecb.outf = xdlt_mmfile_outf;
	if (xdl_rabdiff(mf1, mf2, &ecb) < 0) {

		xdl_free_mmfile(mfp);
		return -1;
	}

	return 0;
}


int xdlt_do_binpatch(mmfile_t *mf, mmfile_t *mfp, mmfile_t *mfr) {
	xdemitcb_t ecb;

	if (xdl_init_mmfile(mfr, XDLT_STD_BLKSIZE, XDL_MMF_ATOMIC) < 0) {

		return -1;
	}
	ecb.priv = mfr;
	ecb.outf = xdlt_mmfile_outf;
	if (xdl_bpatch(mf, mfp, &ecb) < 0) {

		xdl_free_mmfile(mfr);
		return -1;
	}

	return 0;
}


static int xdlt_outf(void *priv, mmbuffer_t *mb, int nbuf) {
	int i;

	for (i = 0; i < nbuf; i++)
		if (!fwrite(mb[i].ptr, mb[i].size, 1, (FILE *) priv))
			return -1;

	return 0;
}


static void *wrap_malloc(void *priv, unsigned int size) {

	return malloc(size);
}


static void wrap_free(void *priv, void *ptr) {

	free(ptr);
}


static void *wrap_realloc(void *priv, void *ptr, unsigned int size) {

	return realloc(ptr, size);
}

void usage(poptContext optCon, int exitcode, char *error, char *addl) {
	poptPrintUsage(optCon, stderr, 0);
	if (error) fprintf(stderr, "%s: %s", error, addl);
	exit(exitcode);
}

int main(int argc, const char **argv) {
	int ctxlen = 3, bsize = 16, do_diff = 0, do_patch = 0, do_bdiff = 0, do_bpatch = 0, do_rabdiff = 0;
	int optvalidate = 0;
	int file_argc = 0;
	const char **file_argv = NULL;
	const char *file1;
	const char *file2;
	const char *in_file_string = NULL;
	const char *out_file_string = NULL;
	poptContext optCon;
	memallocator_t malt;
	mmfile_t mf1, mf2;
	xpparam_t xpp;
	xdemitconf_t xecfg;
	bdiffparam_t bdp;
	xdemitcb_t ecb, rjecb;

        /* Define options */
	struct poptOption optionsTable[] = {
		{ "diff", 'd', 0, &do_diff, 0, "text diff" },
		{ "in-file-str", 'x', POPT_ARG_STRING, &in_file_string, 0, "input file id" },
		{ "out-file-str", 'y', POPT_ARG_STRING, &out_file_string, 0, "output file id" },
		{ "bdiff", 'b', 0, &do_bdiff, 0, "binary diff" },
		{ "patch", 'p', 0, &do_patch, 0, "text patch" },
		{ "bpatch", 'q', 0, &do_bpatch, 0, "binary patch" },
		{ "rabdiff", 'r', 0, &do_rabdiff, 0, "rabinary diff" },
		{ "context-lines", 'C', POPT_ARG_INT, &ctxlen, 0, "number of context lines when performing diff"},
		{ "bcontext-size", 'B', POPT_ARG_INT, &bsize, 0, "size of binary context when performing binary diff"},
		POPT_AUTOHELP
		{ NULL, 0, 0, NULL, 0 }
	};

        optCon = poptGetContext(NULL, argc, argv, optionsTable, 0);
        if (argc < 4) {
		poptPrintUsage(optCon, stderr, 0);
		return 1;
	}

        /* Process options */
        (void)poptGetNextOpt(optCon);

        /* Sanity check options */
        optvalidate = do_diff + do_patch + do_bdiff + do_bpatch + do_rabdiff;
	if (optvalidate > 1) {
		poptPrintUsage(optCon, stderr, 0);
		return 1;
	}

        /* files are supplied without marking options - retrieve from remaining args */
        file_argv = poptGetArgs(optCon);
        while (file_argv[file_argc] != NULL) {
	   file_argc++;
	}
        if (file_argc > 2) {
		poptPrintUsage(optCon, stderr, 0);
		return 1;
	}
        file1 = file_argv[0];
        file2 = file_argv[1];


	malt.priv = NULL;
	malt.malloc = wrap_malloc;
	malt.free = wrap_free;
	malt.realloc = wrap_realloc;
	xdl_set_allocator(&malt);


	xpp.flags = 0;
	xecfg.ctxlen = ctxlen;
	bdp.bsize = bsize;
	if (xdlt_load_mmfile(file1, &mf1, do_bdiff || do_bpatch) < 0) {

		return 2;
	}
	if (xdlt_load_mmfile(file2, &mf2, do_bdiff || do_bpatch) < 0) {

		xdl_free_mmfile(&mf1);
		return 2;
	}
	if (do_diff) {
	        if(in_file_string) printf("--- %s\n", in_file_string);
	        if(out_file_string) printf("+++ %s\n", out_file_string);
		ecb.priv = stdout;
		ecb.outf = xdlt_outf;

		if (xdl_diff(&mf1, &mf2, &xpp, &xecfg, &ecb) < 0) {

			xdl_free_mmfile(&mf2);
			xdl_free_mmfile(&mf1);
			return 3;
		}
	} else if (do_bdiff) {
		ecb.priv = stdout;
		ecb.outf = xdlt_outf;
		if (xdl_bdiff(&mf1, &mf2, &bdp, &ecb) < 0) {

			xdl_free_mmfile(&mf2);
			xdl_free_mmfile(&mf1);
			return 4;
		}
	} else if (do_rabdiff) {
		ecb.priv = stdout;
		ecb.outf = xdlt_outf;
		if (xdl_rabdiff(&mf1, &mf2, &ecb) < 0) {

			xdl_free_mmfile(&mf2);
			xdl_free_mmfile(&mf1);
			return 4;
		}
	} else if (do_bpatch) {
		ecb.priv = stdout;
		ecb.outf = xdlt_outf;
		if (xdl_bpatch(&mf1, &mf2, &ecb) < 0) {

			xdl_free_mmfile(&mf2);
			xdl_free_mmfile(&mf1);
			return 5;
		}
	} else if (do_patch) {
		ecb.priv = stdout;
		ecb.outf = xdlt_outf;
		rjecb.priv = stderr;
		rjecb.outf = xdlt_outf;
		if (xdl_patch(&mf1, &mf2, XDL_PATCH_NORMAL, &ecb, &rjecb) < 0) {

			xdl_free_mmfile(&mf2);
			xdl_free_mmfile(&mf1);
			return 6;
		}
	}
	xdl_free_mmfile(&mf2);
	xdl_free_mmfile(&mf1);

	return 0;
}

