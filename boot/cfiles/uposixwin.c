/* Generated from posixwin.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:12
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: posixwin.scm -output-file uposixwin.c -quiet -no-trace -optimize-level 2 -include-path . -no-lambda-info -unsafe -feature unsafe -explicit-use
   unit: posix
*/

#include "chicken.h"

#ifndef WIN32_LEAN_AND_MEAN
# define WIN32_LEAN_AND_MEAN
#endif

/*
MinGW should have winsock2.h and ws2tcpip.h as well.
The CMake build will set HAVE_WINSOCK2_H and HAVE_WS2TCPIP_H.
However, the _MSC_VER test is still needed for vcbuild.bat.
./configure doesn't test for these.  It should, for MinGW.
*/
#if (_MSC_VER > 1300) || (defined(HAVE_WINSOCK2_H) && defined(HAVE_WS2TCPIP_H))
#include <winsock2.h>
#include <ws2tcpip.h>
#else
#include <winsock.h>
#endif

#include <signal.h>
#include <errno.h>
#include <io.h>
#include <stdio.h>
#include <process.h>

static int C_not_implemented(void);
int C_not_implemented() { return -1; }

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <direct.h>

#include <time.h>

#define ARG_MAX 256
#define PIPE_BUF 512

static C_TLS char *C_exec_args[ ARG_MAX ];
static C_TLS struct group *C_group;
static C_TLS int C_pipefds[ 2 ];
static C_TLS time_t C_secs;
static C_TLS struct tm C_tm;
static C_TLS struct stat C_statbuf;

/* pipe handles */
static C_TLS HANDLE C_rd0, C_wr0, C_wr0_, C_rd1, C_wr1, C_rd1_;
static C_TLS HANDLE C_save0, C_save1; /* saved I/O handles */
static C_TLS char C_rdbuf; /* one-char buffer for read */
static C_TLS int C_exstatus;

/* platform information */
static C_TLS char C_hostname[256];
static C_TLS char C_osver[16];
static C_TLS char C_osrel[16];
static C_TLS char C_processor[16];

#define C_mkdir(str)        C_fix(mkdir(C_c_string(str)))
#define C_chdir(str)        C_fix(chdir(C_c_string(str)))
#define C_rmdir(str)        C_fix(rmdir(C_c_string(str)))

#ifndef __WATCOMC__
/* DIRENT stuff */
struct dirent
{
    char *		d_name;
};

typedef struct
{
    struct _finddata_t	fdata;
    int			handle;
    struct dirent	current;
} DIR;

static DIR *opendir(const char *name);
static int closedir(DIR *dir);
static struct dirent *readdir(DIR *dir);

static DIR *opendir(const char *name)
{
    int name_len = strlen(name);
    DIR *dir = (DIR *)malloc(sizeof(DIR));
    char *what;
    if (!dir)
    {
	errno = ENOMEM;
	return NULL;
    }
    what = (char *)malloc(name_len + 3);
    if (!what)
    {
	free(dir);
	errno = ENOMEM;
	return NULL;
    }
    strcpy(what, name);
    if (strchr("\\/", name[name_len - 1]))
	strcat(what, "*");
    else
	strcat(what, "\\*");

    dir->handle = _findfirst(what, &dir->fdata);
    if (dir->handle == -1)
    {
	free(what);
	free(dir);
	return NULL;
    }
    dir->current.d_name = NULL; /* as the first-time indicator */
    free(what);
    return dir;
}

static int closedir(DIR * dir)
{
    if (dir)
    {
	int res = _findclose(dir->handle);
	free(dir);
	return res;
    }
    return -1;
}

static struct dirent *readdir(DIR * dir)
{
    if (dir)
    {
	if (!dir->current.d_name /* first time after opendir */
	     || _findnext(dir->handle, &dir->fdata) != -1)
	{
	    dir->current.d_name = dir->fdata.name;
	    return &dir->current;
	}
    }
    return NULL;
}
#endif /* ifndef __WATCOMC__ */

#ifdef __WATCOMC__
# define mktemp _mktemp
/* there is no P_DETACH in Watcom CRTL */
# define P_DETACH P_NOWAIT
#endif

#define C_opendir(x,h)		C_set_block_item(h, 0, (C_word) opendir(C_c_string(x)))
#define C_closedir(h)   	(closedir((DIR *)C_block_item(h, 0)), C_SCHEME_UNDEFINED)
#define C_readdir(h,e)		C_set_block_item(e, 0, (C_word) readdir((DIR *)C_block_item(h, 0)))
#define C_foundfile(e,b)	(strcpy(C_c_string(b), ((struct dirent *) C_block_item(e, 0))->d_name),	C_fix(strlen(((struct dirent *) C_block_item(e, 0))->d_name)))

#define C_curdir(buf)       (getcwd(C_c_string(buf), 256) ? C_fix(strlen(C_c_string(buf))) : C_SCHEME_FALSE)

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, _popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, _popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)                        C_fix(_pclose(C_port_file(p)))

#define C_set_file_ptr(port, ptr)  (C_set_block_item(port, 0, (C_block_item(ptr, 0))), C_SCHEME_UNDEFINED)

#define C_getpid            getpid
#define C_chmod(fn, m)      C_fix(chmod(C_data_pointer(fn), C_unfix(m)))
#define C_fdopen(a, n, fd, m) C_mpointer(a, fdopen(C_unfix(fd), C_c_string(m)))
#define C_C_fileno(p)       C_fix(fileno(C_port_file(p)))
#define C_dup(x)            C_fix(dup(C_unfix(x)))
#define C_dup2(x, y)        C_fix(dup2(C_unfix(x), C_unfix(y)))
#define C_setvbuf(p, m, s)  C_fix(setvbuf(C_port_file(p), NULL, C_unfix(m), C_unfix(s)))
#define C_access(fn, m)     C_fix(access((char *)C_data_pointer(fn), C_unfix(m)))
#define C_pipe(d)           C_fix(_pipe(C_pipefds, PIPE_BUF, O_BINARY))
#define C_close(fd)         C_fix(close(C_unfix(fd)))

#define C_getenventry(i)   environ[ i ]

#define C_putenv(s)         C_fix(putenv((char *)C_data_pointer(s)))
#define C_stat(fn)          C_fix(stat((char *)C_data_pointer(fn), &C_statbuf))
#define C_fstat(f)          C_fix(fstat(C_unfix(f), &C_statbuf))

static C_word C_fcall C_setenv(C_word x, C_word y);
C_word C_fcall C_setenv(C_word x, C_word y) {
  char *sx = C_data_pointer(x),
       *sy = C_data_pointer(y);
  int n1 = C_strlen(sx), n2 = C_strlen(sy);
  char *buf = (char *)C_malloc(n1 + n2 + 2);
  if(buf == NULL) return(C_fix(0));
  else {
    C_strcpy(buf, sx);
    buf[ n1 ] = '=';
    C_strcpy(buf + n1 + 1, sy);
    return(C_fix(putenv(buf)));
  }
}

static void C_fcall C_set_exec_arg(int i, char *a, int len);
void C_fcall C_set_exec_arg(int i, char *a, int len) {
  char *ptr;
  if(a != NULL) {
    ptr = (char *)C_malloc(len + 1);
    C_memcpy(ptr, a, len);
    ptr[ len ] = '\0';
  }
  else ptr = NULL;
  C_exec_args[ i ] = ptr;
}

static void C_fcall C_free_exec_args();
void C_fcall C_free_exec_args() {
  char **a = C_exec_args;
  while((*a) != NULL) C_free(*(a++));
}

#define C_execvp(f)         C_fix(execvp(C_data_pointer(f), (const char *const *)C_exec_args))

/* MS replacement for the fork-exec pair */
#define C_spawnvp(m, f)	    C_fix(spawnvp(C_unfix(m), C_data_pointer(f), (const char *const *)C_exec_args))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_mkstemp(t)        C_fix(mktemp(C_c_string(t)))

#define C_ftell(p)            C_fix(ftell(C_port_file(p)))
#define C_fseek(p, n, w)      C_mk_nbool(fseek(C_port_file(p), C_unfix(n), C_unfix(w)))
#define C_lseek(fd, o, w)     C_fix(lseek(C_unfix(fd), C_unfix(o), C_unfix(w)))

#define C_ctime(n)          (C_secs = (n), ctime(&C_secs))

#define C_asctime(v)        (memset(&C_tm, 0, sizeof(struct tm)), C_tm.tm_sec = C_unfix(C_block_item(v, 0)), C_tm.tm_min = C_unfix(C_block_item(v, 1)), C_tm.tm_hour = C_unfix(C_block_item(v, 2)), C_tm.tm_mday = C_unfix(C_block_item(v, 3)), C_tm.tm_mon = C_unfix(C_block_item(v, 4)), C_tm.tm_year = C_unfix(C_block_item(v, 5)), C_tm.tm_wday = C_unfix(C_block_item(v, 6)), C_tm.tm_yday = C_unfix(C_block_item(v, 7)), C_tm.tm_isdst = (C_block_item(v, 8) != C_SCHEME_FALSE), asctime(&C_tm) )
#define C_mktime(v)        (memset(&C_tm, 0, sizeof(struct tm)), C_tm.tm_sec = C_unfix(C_block_item(v, 0)), C_tm.tm_min = C_unfix(C_block_item(v, 1)), C_tm.tm_hour = C_unfix(C_block_item(v, 2)), C_tm.tm_mday = C_unfix(C_block_item(v, 3)), C_tm.tm_mon = C_unfix(C_block_item(v, 4)), C_tm.tm_year = C_unfix(C_block_item(v, 5)), C_tm.tm_wday = C_unfix(C_block_item(v, 6)), C_tm.tm_yday = C_unfix(C_block_item(v, 7)), C_tm.tm_isdst = (C_block_item(v, 8) != C_SCHEME_FALSE), (C_temporary_flonum = mktime(&C_tm)) != -1)

/*
  mapping from Win32 error codes to errno
*/

typedef struct
{
    DWORD   win32;
    int	    libc;
} errmap_t;

static errmap_t errmap[] =
{
    {ERROR_INVALID_FUNCTION,      EINVAL},
    {ERROR_FILE_NOT_FOUND,        ENOENT},
    {ERROR_PATH_NOT_FOUND,        ENOENT},
    {ERROR_TOO_MANY_OPEN_FILES,   EMFILE},
    {ERROR_ACCESS_DENIED,         EACCES},
    {ERROR_INVALID_HANDLE,        EBADF},
    {ERROR_ARENA_TRASHED,         ENOMEM},
    {ERROR_NOT_ENOUGH_MEMORY,     ENOMEM},
    {ERROR_INVALID_BLOCK,         ENOMEM},
    {ERROR_BAD_ENVIRONMENT,       E2BIG},
    {ERROR_BAD_FORMAT,            ENOEXEC},
    {ERROR_INVALID_ACCESS,        EINVAL},
    {ERROR_INVALID_DATA,          EINVAL},
    {ERROR_INVALID_DRIVE,         ENOENT},
    {ERROR_CURRENT_DIRECTORY,     EACCES},
    {ERROR_NOT_SAME_DEVICE,       EXDEV},
    {ERROR_NO_MORE_FILES,         ENOENT},
    {ERROR_LOCK_VIOLATION,        EACCES},
    {ERROR_BAD_NETPATH,           ENOENT},
    {ERROR_NETWORK_ACCESS_DENIED, EACCES},
    {ERROR_BAD_NET_NAME,          ENOENT},
    {ERROR_FILE_EXISTS,           EEXIST},
    {ERROR_CANNOT_MAKE,           EACCES},
    {ERROR_FAIL_I24,              EACCES},
    {ERROR_INVALID_PARAMETER,     EINVAL},
    {ERROR_NO_PROC_SLOTS,         EAGAIN},
    {ERROR_DRIVE_LOCKED,          EACCES},
    {ERROR_BROKEN_PIPE,           EPIPE},
    {ERROR_DISK_FULL,             ENOSPC},
    {ERROR_INVALID_TARGET_HANDLE, EBADF},
    {ERROR_INVALID_HANDLE,        EINVAL},
    {ERROR_WAIT_NO_CHILDREN,      ECHILD},
    {ERROR_CHILD_NOT_COMPLETE,    ECHILD},
    {ERROR_DIRECT_ACCESS_HANDLE,  EBADF},
    {ERROR_NEGATIVE_SEEK,         EINVAL},
    {ERROR_SEEK_ON_DEVICE,        EACCES},
    {ERROR_DIR_NOT_EMPTY,         ENOTEMPTY},
    {ERROR_NOT_LOCKED,            EACCES},
    {ERROR_BAD_PATHNAME,          ENOENT},
    {ERROR_MAX_THRDS_REACHED,     EAGAIN},
    {ERROR_LOCK_FAILED,           EACCES},
    {ERROR_ALREADY_EXISTS,        EEXIST},
    {ERROR_FILENAME_EXCED_RANGE,  ENOENT},
    {ERROR_NESTING_NOT_ALLOWED,   EAGAIN},
    {ERROR_NOT_ENOUGH_QUOTA,      ENOMEM},
    {0, 0}
};

static void set_errno(DWORD w32err)
{
    errmap_t *map = errmap;
    for (; errmap->win32; ++map)
    {
	if (errmap->win32 == w32err)
	{
	    errno = errmap->libc;
	    return;
	}
    }
}

/* functions for creating process with redirected I/O */
static int zero_handles()
{
    C_rd0 = C_wr0 = C_wr0_ = INVALID_HANDLE_VALUE;
    C_rd1 = C_wr1 = C_rd1_ = INVALID_HANDLE_VALUE;
    C_save0 = C_save1 = INVALID_HANDLE_VALUE;
    return 1;
}

static int close_handles()
{
    if (C_rd0 != INVALID_HANDLE_VALUE)
	CloseHandle(C_rd0);
    if (C_rd1 != INVALID_HANDLE_VALUE)
	CloseHandle(C_rd1);
    if (C_wr0 != INVALID_HANDLE_VALUE)
	CloseHandle(C_wr0);
    if (C_wr1 != INVALID_HANDLE_VALUE)
	CloseHandle(C_wr1);
    if (C_rd1_ != INVALID_HANDLE_VALUE)
	CloseHandle(C_rd1_);
    if (C_wr0_ != INVALID_HANDLE_VALUE)
	CloseHandle(C_wr0_);
    if (C_save0 != INVALID_HANDLE_VALUE)
    {
	SetStdHandle(STD_INPUT_HANDLE, C_save0);
	CloseHandle(C_save0);
    }
    if (C_save1 != INVALID_HANDLE_VALUE)
    {
	SetStdHandle(STD_OUTPUT_HANDLE, C_save1);
	CloseHandle(C_save1);
    }
    return zero_handles();
}

static int redir_io()
{
    SECURITY_ATTRIBUTES sa;
    sa.nLength = sizeof(SECURITY_ATTRIBUTES);
    sa.bInheritHandle = TRUE;
    sa.lpSecurityDescriptor = NULL;

    zero_handles();

    C_save0 = GetStdHandle(STD_INPUT_HANDLE);
    C_save1 = GetStdHandle(STD_OUTPUT_HANDLE);
    if (!CreatePipe(&C_rd0, &C_wr0, &sa, 0)
	    || !SetStdHandle(STD_INPUT_HANDLE, C_rd0)
	    || !DuplicateHandle(GetCurrentProcess(), C_wr0, GetCurrentProcess(),
		&C_wr0_, 0, FALSE, DUPLICATE_SAME_ACCESS)
	    || !CreatePipe(&C_rd1, &C_wr1, &sa, 0)
	    || !SetStdHandle(STD_OUTPUT_HANDLE, C_wr1)
	    || !DuplicateHandle(GetCurrentProcess(), C_rd1, GetCurrentProcess(),
		&C_rd1_, 0, FALSE, DUPLICATE_SAME_ACCESS))
    {
	set_errno(GetLastError());
	close_handles();
	return 0;
    }

    CloseHandle(C_wr0);
    C_wr0 = INVALID_HANDLE_VALUE;
    CloseHandle(C_rd1);
    C_rd1 = INVALID_HANDLE_VALUE;
    return 1;
}

static int run_process(char *cmdline)
{
    PROCESS_INFORMATION pi;
    STARTUPINFO si;

    ZeroMemory(&pi, sizeof(PROCESS_INFORMATION));
    ZeroMemory(&si, sizeof(STARTUPINFO));
    si.cb = sizeof(STARTUPINFO);

    C_wr0_ = C_rd1_ = INVALID_HANDLE_VALUE; /* these handles are saved */

    if (CreateProcess(NULL, cmdline, NULL, NULL, TRUE, 0, NULL,
		NULL, &si, &pi))
    {
	CloseHandle(pi.hThread);

	SetStdHandle(STD_INPUT_HANDLE, C_save0);
	SetStdHandle(STD_OUTPUT_HANDLE, C_save1);
	C_save0 = C_save1 = INVALID_HANDLE_VALUE;

	CloseHandle(C_rd0);
	CloseHandle(C_wr1);
	C_rd0 = C_wr1 = INVALID_HANDLE_VALUE;
	return (int)pi.hProcess;
    }
    else
    {
	set_errno(GetLastError());
	return 0;
    }
}

static int pipe_write(int hpipe, void* buf, int count)
{
    DWORD done = 0;
    if (WriteFile((HANDLE)hpipe, buf, count, &done, NULL))
	return 1;
    else
    {
	set_errno(GetLastError());
	return 0;
    }
}

static int pipe_read(int hpipe)
{
    DWORD done = 0;
    /* TODO:
    if (!pipe_ready(hpipe))
	go_to_sleep;
    */
    if (ReadFile((HANDLE)hpipe, &C_rdbuf, 1, &done, NULL))
    {
	if (done > 0) /* not EOF yet */
	    return 1;
	else
	    return -1;
    }
    set_errno(GetLastError());
    return 0;
}

static int pipe_ready(int hpipe)
{
    DWORD avail = 0;
    if (PeekNamedPipe((HANDLE)hpipe, NULL, 0, NULL, &avail, NULL) && avail)
	return 1;
    else
    {
	Sleep(0); /* give pipe a chance */
	if (PeekNamedPipe((HANDLE)hpipe, NULL, 0, NULL, &avail, NULL))
	    return (avail > 0);
	else
	    return 0;
    }
}

#define C_zero_handles() C_fix(zero_handles())
#define C_close_handles() C_fix(close_handles())
#define C_redir_io() (redir_io() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_run_process(cmdline) C_fix(run_process(C_c_string(cmdline)))
#define C_pipe_write(h, b, n) (pipe_write(C_unfix(h), C_c_string(b), C_unfix(n)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_pipe_read(h) C_fix(pipe_read(C_unfix(h)))
#define C_pipe_ready(h) (pipe_ready(C_unfix(h)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define close_handle(h) CloseHandle((HANDLE)h)

int process_wait(int h, int t)
{
    if (WaitForSingleObject((HANDLE)h, (t ? 0 : INFINITE)) == WAIT_OBJECT_0)
    {
	DWORD ret;
	if (GetExitCodeProcess((HANDLE)h, &ret))
	{
	    CloseHandle((HANDLE)h);
	    C_exstatus = ret;
	    return 1;
	}
    }
    set_errno(GetLastError());
    return 0;
}

#define C_process_wait(p, t) (process_wait(C_unfix(p), C_truep(t)) ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_sleep(t) (Sleep(C_unfix(t) * 1000), C_SCHEME_UNDEFINED)

int get_hostname()
{
    WSADATA wsa;
    if (WSAStartup(MAKEWORD(1, 1), &wsa) == 0)
    {
	int nok = gethostname(C_hostname, 256);
	WSACleanup();
	return !nok;
    }
    return 0;
}

int sysinfo()
{
    OSVERSIONINFO ovf;
    ZeroMemory(&ovf, sizeof(ovf));
    ovf.dwOSVersionInfoSize = sizeof(ovf);
    if (get_hostname() && GetVersionEx(&ovf))
    {
	SYSTEM_INFO si;
	_snprintf(C_osver, sizeof(C_osver) - 1, "%d.%d.%d",
			   ovf.dwMajorVersion, ovf.dwMinorVersion, ovf.dwBuildNumber);
	switch (ovf.dwPlatformId)
	{
	case VER_PLATFORM_WIN32s:
	    strncpy(C_osrel, "Win32s", sizeof(C_osrel) - 1);
	    break;
	case VER_PLATFORM_WIN32_WINDOWS:
	    strncpy(C_osrel, "Win9x", sizeof(C_osrel) - 1);
	    break;
	case VER_PLATFORM_WIN32_NT:
	default:
	    strncpy(C_osrel, "WinNT", sizeof(C_osrel) - 1);
	    break;
	}
	GetSystemInfo(&si);
	switch (si.wProcessorArchitecture)
	{
    	case PROCESSOR_ARCHITECTURE_INTEL:
	    strncpy(C_processor, "x86", sizeof(C_processor) - 1);
	    break;
#       ifdef PROCESSOR_ARCHITECTURE_IA64
    	case PROCESSOR_ARCHITECTURE_IA64:
	    strncpy(C_processor, "IA64", sizeof(C_processor) - 1);
	    break;
#       endif
#       ifdef PROCESSOR_ARCHITECTURE_AMD64
    	case PROCESSOR_ARCHITECTURE_AMD64:
	    strncpy(C_processor, "x64", sizeof(C_processor) - 1);
	    break;
#       endif
#       ifdef PROCESSOR_ARCHITECTURE_IA32_ON_WIN64
    	case PROCESSOR_ARCHITECTURE_IA32_ON_WIN64:
	    strncpy(C_processor, "WOW64", sizeof(C_processor) - 1);
	    break;
#       endif
    	case PROCESSOR_ARCHITECTURE_UNKNOWN:
	default:
	    strncpy(C_processor, "Unknown", sizeof(C_processor) - 1);
	    break;
	}
	return 1;
    }
    set_errno(GetLastError());
    return 0;
}

#define C_get_hostname() (get_hostname() ? C_SCHEME_TRUE : C_SCHEME_FALSE)
#define C_sysinfo() (sysinfo() ? C_SCHEME_TRUE : C_SCHEME_FALSE)

/*
    Spawn a process, either through shell or directly.
    Params:
    cmd         Command to execute.
    env         Environment for the new process (may be NULL).
    handle, stdin, stdout, stderr
                Spawned process info are returned in integers.
                When spawned process shares standard io stream with the parent
                process the respective value in handle, stdin, stdout, stderr
                is -1.
    params      A bitmask controling operation.
                Bit 1: Child & parent share standard input if this bit is set.
                Bit 2: Share standard output if bit is set.
                Bit 3: Share standard error if bit is set.
                (Bit 4: Execute command in shell if bit is set.)

    Returns: nonzero return value indicates failure.
*/
static
int C_process(const char * cmd, const char ** env,
              int * phandle, int * pstdin_fd, int * pstdout_fd, int * pstderr_fd,
              int params)
{
    int exit_code = 0, i = 0;
    const int
        f_share_io[3] = { params & 1, params & 2, params & 4};
#if 0
    const int
        f_use_shell = params & 8;
#endif

    char * buf = NULL;
    const char * invoke_cmd = NULL;
    int io_fds[3]={-1,-1,-1};
    HANDLE
        child_io_handles[3]={NULL,NULL,NULL},
        standard_io_handles[3]={
            GetStdHandle(STD_INPUT_HANDLE),
            GetStdHandle(STD_OUTPUT_HANDLE),
            GetStdHandle(STD_ERROR_HANDLE)};

    const char modes[3]="rww";
    HANDLE cur_process = GetCurrentProcess(), child_process = NULL;

    /****** create io handles & fds ***/

    for (i=0; i<3 && exit_code == 0; ++i)
    {
        if (f_share_io[i])
        {
            exit_code = !DuplicateHandle(
                cur_process, standard_io_handles[i],
                cur_process, &child_io_handles[i],
                0, FALSE, DUPLICATE_SAME_ACCESS);
        }
        else
        {
            HANDLE a, b, parent_end;
            exit_code = !CreatePipe(&a,&b,NULL,0);
            if(0==exit_code)
            {
                if (modes[i]=='r') { child_io_handles[i]=a; parent_end=b; }
                else { parent_end=a; child_io_handles[i]=b; }
            }
            exit_code=(io_fds[i]=_open_osfhandle((long)parent_end,0))<0;
        }
    }

    /****** make handles inheritable */

    for (i=0; i<3 && exit_code == 0; ++i)
        exit_code = !SetHandleInformation(child_io_handles[i], HANDLE_FLAG_INHERIT, -1);

    /****** create command line ******/

#if 0
    if (f_use_shell && exit_code == 0)
    {
        const char * shell = NULL;
        static const char * const fmt = "%s /c %s";

        shell=getenv("COMSPEC");
        if (NULL==shell)
        {
            OSVERSIONINFO ovf;
            ovf.dwOSVersionInfoSize = sizeof(ovf);
            if (GetVersionEx(&ovf) && (ovf.dwPlatformId == VER_PLATFORM_WIN32_NT))
                shell="cmd.exe";
            else
                shell="command.com";
        }

        buf = (char*) malloc(strlen(fmt)+strlen(shell)+strlen(cmd));
        exit_code=(NULL==buf);
        if (0==exit_code) { sprintf(buf,fmt,shell,cmd); invoke_cmd = buf; }
    }
    else
#endif
        invoke_cmd = cmd;

    /****** finally spawn process ****/

    if (0==exit_code)
    {
        PROCESS_INFORMATION pi;
        STARTUPINFO si;

        ZeroMemory(&pi,sizeof pi);
        ZeroMemory(&si,sizeof si);
        si.cb = sizeof si;
        si.dwFlags = STARTF_USESTDHANDLES;
        si.hStdInput = child_io_handles[0];
        si.hStdOutput = child_io_handles[1];
        si.hStdError = child_io_handles[2];

        exit_code = !CreateProcess(
            NULL,(char*)invoke_cmd,NULL,NULL,TRUE,0,(char**)env,NULL,&si,&pi);

        if (0==exit_code)
        {
            child_process=pi.hProcess;
            CloseHandle(pi.hThread);
        }
    }

    /****** cleanup & return *********/

    free(buf);
    for (i=0; i<3; ++i) CloseHandle(child_io_handles[i]);
    if (exit_code != 0)
    {
        for (i=0; i<3; ++i) _close(io_fds[i]);
        set_errno(GetLastError());
    }
    else
    {
        *phandle = (int)child_process;
        *pstdin_fd = io_fds[0];
        *pstdout_fd = io_fds[1];
        *pstderr_fd = io_fds[2];
    }

    return exit_code;
}

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_regex_toplevel)
C_externimport void C_ccall C_regex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[346];


/* from k2833 */
static C_word C_fcall stub456(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6) C_regparm;
C_regparm static C_word C_fcall stub456(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
int *t2=(int *)C_c_pointer_or_null(C_a2);
int *t3=(int *)C_c_pointer_or_null(C_a3);
int *t4=(int *)C_c_pointer_or_null(C_a4);
int *t5=(int *)C_c_pointer_or_null(C_a5);
int t6=(int )C_unfix(C_a6);
C_r=C_fix((C_word)C_process(t0,t1,t2,t3,t4,t5,t6));
return C_r;}

/* from close-handle in k1898 in k933 in k930 in k927 in k924 in k921 */
static C_word C_fcall stub445(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub445(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_truep(C_a0);
C_r=C_fix((C_word)close_handle(t0));
return C_r;}

/* from ##sys#shell-command in k1898 in k933 in k930 in k927 in k924 in k921 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub435(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub435(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
    char *ret = getenv("COMSPEC");
    if (ret)
	return (ret);
    else
    {
	OSVERSIONINFO ovf;
	ovf.dwOSVersionInfoSize = sizeof(ovf);
	if (GetVersionEx(&ovf) && (ovf.dwPlatformId == VER_PLATFORM_WIN32_NT))
	    return ("cmd.exe");
	else
	    return ("command.com");
    }
C_return:
#undef return

return C_r;}

/* from current-process-id in k1898 in k933 in k930 in k927 in k924 in k921 */
static C_word C_fcall stub433(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub433(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from freeargs */
static C_word C_fcall stub413(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub413(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_args();
return C_r;}

/* from k2677 */
static C_word C_fcall stub406(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub406(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from freeargs */
static C_word C_fcall stub364(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub364(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_args();
return C_r;}

/* from k2537 */
static C_word C_fcall stub357(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub357(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from ex0 */
static C_word C_fcall stub310(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub310(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

/* from asctime */
static C_word C_fcall stub296(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub296(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0));
return C_r;}

/* from ctime */
static C_word C_fcall stub287(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub287(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from get */
static C_word C_fcall stub272(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub272(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from strerror */
static C_word C_fcall stub3(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub3(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_923)
static void C_ccall f_923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_926)
static void C_ccall f_926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_929)
static void C_ccall f_929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_932)
static void C_ccall f_932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_935)
static void C_ccall f_935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1900)
static void C_ccall f_1900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3715)
static void C_ccall f_3715(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3712)
static void C_ccall f_3712(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3705)
static void C_ccall f_3705(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3699)
static void C_ccall f_3699(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3687)
static void C_ccall f_3687(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3681)
static void C_ccall f_3681(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3675)
static void C_ccall f_3675(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3669)
static void C_ccall f_3669(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3663)
static void C_ccall f_3663(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3651)
static void C_ccall f_3651(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3645)
static void C_ccall f_3645(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3639)
static void C_ccall f_3639(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3633)
static void C_ccall f_3633(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3627)
static void C_ccall f_3627(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3615)
static void C_ccall f_3615(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3609)
static void C_ccall f_3609(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3603)
static void C_ccall f_3603(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3597)
static void C_ccall f_3597(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3591)
static void C_ccall f_3591(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3573)
static void C_ccall f_3573(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3567)
static void C_ccall f_3567(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3561)
static void C_ccall f_3561(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3555)
static void C_ccall f_3555(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3549)
static void C_ccall f_3549(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3543)
static void C_ccall f_3543(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3537)
static void C_ccall f_3537(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3531)
static void C_ccall f_3531(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3525)
static void C_ccall f_3525(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3519)
static void C_ccall f_3519(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3513)
static void C_ccall f_3513(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3507)
static void C_ccall f_3507(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3501)
static void C_ccall f_3501(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3495)
static void C_ccall f_3495(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3489)
static void C_ccall f_3489(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3483)
static void C_ccall f_3483(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3477)
static void C_ccall f_3477(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3471)
static void C_ccall f_3471(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3465)
static void C_ccall f_3465(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3459)
static void C_ccall f_3459(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3239)
static void C_ccall f_3239r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3393)
static void C_fcall f_3393(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3399)
static void C_ccall f_3399(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3388)
static void C_fcall f_3388(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3383)
static void C_fcall f_3383(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3241)
static void C_fcall f_3241(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3370)
static void C_ccall f_3370(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3378)
static void C_ccall f_3378(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3245)
static void C_fcall f_3245(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3358)
static void C_ccall f_3358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3255)
static void C_ccall f_3255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3257)
static void C_fcall f_3257(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3276)
static void C_ccall f_3276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3344)
static void C_ccall f_3344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3351)
static void C_ccall f_3351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3325)
static void C_ccall f_3325(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3323)
static void C_ccall f_3323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3319)
static void C_ccall f_3319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3301)
static void C_ccall f_3301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3362)
static void C_ccall f_3362(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3208)
static void C_ccall f_3208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3234)
static void C_ccall f_3234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3219)
static void C_ccall f_3219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3227)
static void C_ccall f_3227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3231)
static void C_ccall f_3231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3196)
static void C_ccall f_3196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3193)
static void C_ccall f_3193(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3139)
static void C_ccall f_3139(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3139)
static void C_ccall f_3139r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3160)
static void C_ccall f_3160(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3170)
static void C_ccall f_3170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3154)
static void C_ccall f_3154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3127)
static void C_ccall f_3127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3082)
static void C_fcall f_3082(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3077)
static void C_fcall f_3077(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3072)
static void C_fcall f_3072(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3025)
static void C_fcall f_3025(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3020)
static void C_fcall f_3020(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3015)
static void C_fcall f_3015(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2957)
static void C_fcall f_2957(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3007)
static void C_ccall f_3007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2999)
static void C_ccall f_2999(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2961)
static void C_ccall f_2961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2990)
static void C_ccall f_2990(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2975)
static void C_ccall f_2975(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2854)
static void C_ccall f_2854(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_2934)
static void C_fcall f_2934(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2952)
static void C_ccall f_2952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2858)
static void C_ccall f_2858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2815)
static void C_ccall f_2815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2894)
static void C_ccall f_2894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2874)
static void C_ccall f_2874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2878)
static void C_ccall f_2878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2882)
static void C_ccall f_2882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2778)
static void C_ccall f_2778(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2778)
static void C_ccall f_2778r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2795)
static void C_ccall f_2795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2799)
static void C_ccall f_2799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2772)
static void C_ccall f_2772(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2766)
static void C_ccall f_2766(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2763)
static void C_ccall f_2763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2689)
static void C_ccall f_2689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2697)
static void C_fcall f_2697(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2730)
static void C_ccall f_2730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2711)
static void C_ccall f_2711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2717)
static void C_ccall f_2717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2674)
static C_word C_fcall f_2674(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2542)
static void C_ccall f_2542(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2542)
static void C_ccall f_2542r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2629)
static void C_fcall f_2629(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2624)
static void C_fcall f_2624(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2544)
static void C_fcall f_2544(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2559)
static void C_fcall f_2559(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2592)
static void C_ccall f_2592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2573)
static void C_ccall f_2573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2534)
static C_word C_fcall f_2534(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2425)
static void C_ccall f_2425(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2425)
static void C_ccall f_2425r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2431)
static void C_fcall f_2431(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2452)
static void C_ccall f_2452(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2523)
static void C_ccall f_2523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2463)
static void C_ccall f_2463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2465)
static void C_fcall f_2465(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2482)
static void C_ccall f_2482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2496)
static void C_ccall f_2496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2372)
static void C_ccall f_2372(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2372)
static void C_ccall f_2372r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2379)
static void C_ccall f_2379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2353)
static void C_ccall f_2353(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2353)
static void C_ccall f_2353r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2323)
static void C_ccall f_2323(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2295)
static void C_ccall f_2295(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2302)
static void C_ccall f_2302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2278)
static void C_ccall f_2278(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2282)
static void C_ccall f_2282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2285)
static void C_ccall f_2285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2267)
static void C_ccall f_2267(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2196)
static void C_ccall f_2196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2202)
static void C_fcall f_2202(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2206)
static void C_ccall f_2206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2214)
static void C_fcall f_2214(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2240)
static void C_ccall f_2240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2244)
static void C_ccall f_2244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2232)
static void C_ccall f_2232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2184)
static void C_ccall f_2184(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2173)
static void C_ccall f_2173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2178)
static void C_ccall f_2178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2182)
static void C_ccall f_2182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2149)
static void C_ccall f_2149r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2153)
static void C_fcall f_2153(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2162)
static void C_ccall f_2162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2156)
static void C_ccall f_2156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2117)
static void C_ccall f_2117(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2147)
static void C_ccall f_2147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2133)
static void C_ccall f_2133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2127)
static void C_ccall f_2127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2106)
static void C_ccall f_2106(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2106)
static void C_ccall f_2106r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2115)
static void C_ccall f_2115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2095)
static void C_ccall f_2095r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2104)
static void C_ccall f_2104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2077)
static void C_fcall f_2077(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2081)
static void C_ccall f_2081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2040)
static void C_fcall f_2040(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2048)
static void C_ccall f_2048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2031)
static void C_ccall f_2031(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2025)
static void C_ccall f_2025(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2019)
static void C_ccall f_2019(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1998)
static void C_fcall f_1998(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2017)
static void C_ccall f_2017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2013)
static void C_ccall f_2013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2005)
static void C_ccall f_2005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1996)
static void C_ccall f_1996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1992)
static void C_ccall f_1992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1984)
static void C_ccall f_1984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1918)
static void C_ccall f_1918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1928)
static void C_ccall f_1928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1851)
static void C_ccall f_1851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1864)
static void C_ccall f_1864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1855)
static void C_ccall f_1855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1831)
static void C_ccall f_1831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1831)
static void C_ccall f_1831r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1835)
static void C_ccall f_1835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1841)
static void C_ccall f_1841r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1845)
static void C_ccall f_1845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1811)
static void C_ccall f_1811r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1815)
static void C_ccall f_1815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1825)
static void C_ccall f_1825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1787)
static void C_ccall f_1787(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1787)
static void C_ccall f_1787r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1791)
static void C_ccall f_1791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1806)
static void C_ccall f_1806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1796)
static void C_ccall f_1796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1767)
static void C_ccall f_1767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1778)
static void C_ccall f_1778(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1778)
static void C_ccall f_1778r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1782)
static void C_ccall f_1782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1772)
static void C_ccall f_1772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1747)
static void C_ccall f_1747(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1751)
static void C_ccall f_1751(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1714)
static void C_ccall f_1714(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1714)
static void C_ccall f_1714r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1742)
static void C_ccall f_1742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1725)
static void C_ccall f_1725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1681)
static void C_ccall f_1681(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1681)
static void C_ccall f_1681r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1709)
static void C_ccall f_1709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1699)
static void C_ccall f_1699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1692)
static void C_ccall f_1692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1663)
static void C_fcall f_1663(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1667)
static void C_ccall f_1667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1679)
static void C_ccall f_1679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1657)
static void C_fcall f_1657(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1645)
static C_word C_fcall f_1645(C_word t0);
C_noret_decl(f_1606)
static void C_ccall f_1606(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1606)
static void C_ccall f_1606r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1619)
static void C_ccall f_1619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1586)
static void C_ccall f_1586(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1604)
static void C_ccall f_1604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1590)
static void C_ccall f_1590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1537)
static void C_fcall f_1537(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1545)
static void C_ccall f_1545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1532)
static void C_fcall f_1532(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1434)
static void C_fcall f_1434(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1438)
static void C_ccall f_1438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1531)
static void C_ccall f_1531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1448)
static void C_ccall f_1448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1465)
static void C_fcall f_1465(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1475)
static void C_ccall f_1475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1487)
static void C_fcall f_1487(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1497)
static void C_ccall f_1497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1457)
static void C_ccall f_1457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1408)
static void C_ccall f_1408(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1430)
static void C_ccall f_1430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1426)
static void C_ccall f_1426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1418)
static void C_ccall f_1418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1406)
static void C_ccall f_1406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1394)
static void C_ccall f_1394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1360)
static void C_ccall f_1360(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1382)
static void C_ccall f_1382(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1378)
static void C_ccall f_1378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1370)
static void C_ccall f_1370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1305)
static void C_ccall f_1305(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1305)
static void C_ccall f_1305r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1312)
static void C_ccall f_1312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1327)
static void C_ccall f_1327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1318)
static void C_ccall f_1318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1321)
static void C_ccall f_1321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1284)
static void C_ccall f_1284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1269)
static void C_ccall f_1269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1278)
static void C_ccall f_1278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1272)
static void C_ccall f_1272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1262)
static void C_ccall f_1262(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1242)
static void C_ccall f_1242(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1260)
static void C_ccall f_1260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1246)
static void C_ccall f_1246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1236)
static void C_ccall f_1236(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1240)
static void C_ccall f_1240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1230)
static void C_ccall f_1230(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1234)
static void C_ccall f_1234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1224)
static void C_ccall f_1224(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1218)
static void C_ccall f_1218(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1222)
static void C_ccall f_1222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1212)
static void C_ccall f_1212(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1216)
static void C_ccall f_1216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1206)
static void C_ccall f_1206(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1210)
static void C_ccall f_1210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1182)
static void C_ccall f_1182(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1182)
static void C_ccall f_1182r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1189)
static void C_ccall f_1189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1144)
static void C_fcall f_1144(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1177)
static void C_ccall f_1177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1173)
static void C_ccall f_1173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1148)
static void C_ccall f_1148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1157)
static void C_ccall f_1157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1109)
static void C_ccall f_1109(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1116)
static void C_ccall f_1116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1136)
static void C_ccall f_1136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1119)
static void C_ccall f_1119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1126)
static void C_ccall f_1126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1073)
static void C_ccall f_1073(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1073)
static void C_ccall f_1073r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1077)
static void C_ccall f_1077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1089)
static void C_ccall f_1089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1083)
static void C_ccall f_1083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1034)
static void C_ccall f_1034(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1034)
static void C_ccall f_1034r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1041)
static void C_ccall f_1041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1053)
static void C_ccall f_1053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1044)
static void C_ccall f_1044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1019)
static void C_ccall f_1019(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1029)
static void C_ccall f_1029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1011)
static void C_ccall f_1011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_995)
static void C_ccall f_995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1004)
static void C_ccall f_1004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_998)
static void C_ccall f_998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_942)
static void C_ccall f_942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_942)
static void C_ccall f_942r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_946)
static void C_ccall f_946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_957)
static void C_ccall f_957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_953)
static void C_ccall f_953(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_3393)
static void C_fcall trf_3393(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3393(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3393(t0,t1);}

C_noret_decl(trf_3388)
static void C_fcall trf_3388(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3388(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3388(t0,t1,t2);}

C_noret_decl(trf_3383)
static void C_fcall trf_3383(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3383(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3383(t0,t1,t2,t3);}

C_noret_decl(trf_3241)
static void C_fcall trf_3241(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3241(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3241(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3245)
static void C_fcall trf_3245(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3245(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3245(t0,t1);}

C_noret_decl(trf_3257)
static void C_fcall trf_3257(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3257(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3257(t0,t1,t2,t3);}

C_noret_decl(trf_3082)
static void C_fcall trf_3082(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3082(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3082(t0,t1);}

C_noret_decl(trf_3077)
static void C_fcall trf_3077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3077(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3077(t0,t1,t2);}

C_noret_decl(trf_3072)
static void C_fcall trf_3072(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3072(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3072(t0,t1,t2,t3);}

C_noret_decl(trf_3025)
static void C_fcall trf_3025(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3025(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3025(t0,t1);}

C_noret_decl(trf_3020)
static void C_fcall trf_3020(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3020(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3020(t0,t1,t2);}

C_noret_decl(trf_3015)
static void C_fcall trf_3015(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3015(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3015(t0,t1,t2,t3);}

C_noret_decl(trf_2957)
static void C_fcall trf_2957(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2957(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2957(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2934)
static void C_fcall trf_2934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2934(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2934(t0,t1,t2,t3);}

C_noret_decl(trf_2697)
static void C_fcall trf_2697(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2697(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2697(t0,t1,t2,t3);}

C_noret_decl(trf_2629)
static void C_fcall trf_2629(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2629(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2629(t0,t1);}

C_noret_decl(trf_2624)
static void C_fcall trf_2624(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2624(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2624(t0,t1,t2);}

C_noret_decl(trf_2544)
static void C_fcall trf_2544(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2544(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2544(t0,t1,t2);}

C_noret_decl(trf_2559)
static void C_fcall trf_2559(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2559(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2559(t0,t1,t2,t3);}

C_noret_decl(trf_2431)
static void C_fcall trf_2431(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2431(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2431(t0,t1,t2);}

C_noret_decl(trf_2465)
static void C_fcall trf_2465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2465(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2465(t0,t1,t2);}

C_noret_decl(trf_2202)
static void C_fcall trf_2202(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2202(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2202(t0,t1,t2);}

C_noret_decl(trf_2214)
static void C_fcall trf_2214(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2214(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2214(t0,t1,t2);}

C_noret_decl(trf_2153)
static void C_fcall trf_2153(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2153(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2153(t0,t1);}

C_noret_decl(trf_2077)
static void C_fcall trf_2077(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2077(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2077(t0,t1,t2,t3);}

C_noret_decl(trf_2040)
static void C_fcall trf_2040(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2040(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2040(t0,t1,t2);}

C_noret_decl(trf_1998)
static void C_fcall trf_1998(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1998(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1998(t0,t1,t2);}

C_noret_decl(trf_1663)
static void C_fcall trf_1663(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1663(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1663(t0,t1,t2,t3);}

C_noret_decl(trf_1657)
static void C_fcall trf_1657(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1657(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1657(t0,t1);}

C_noret_decl(trf_1537)
static void C_fcall trf_1537(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1537(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1537(t0,t1);}

C_noret_decl(trf_1532)
static void C_fcall trf_1532(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1532(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1532(t0,t1,t2);}

C_noret_decl(trf_1434)
static void C_fcall trf_1434(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1434(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1434(t0,t1,t2,t3);}

C_noret_decl(trf_1465)
static void C_fcall trf_1465(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1465(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1465(t0,t1);}

C_noret_decl(trf_1487)
static void C_fcall trf_1487(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1487(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1487(t0,t1);}

C_noret_decl(trf_1144)
static void C_fcall trf_1144(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1144(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1144(t0,t1);}

C_noret_decl(tr9)
static void C_fcall tr9(C_proc9 k) C_regparm C_noret;
C_regparm static void C_fcall tr9(C_proc9 k){
C_word t8=C_pick(0);
C_word t7=C_pick(1);
C_word t6=C_pick(2);
C_word t5=C_pick(3);
C_word t4=C_pick(4);
C_word t3=C_pick(5);
C_word t2=C_pick(6);
C_word t1=C_pick(7);
C_word t0=C_pick(8);
C_adjust_stack(-9);
(k)(9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}

C_noret_decl(tr6)
static void C_fcall tr6(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6(C_proc6 k){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
(k)(6,t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr5)
static void C_fcall tr5(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5(C_proc5 k){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
(k)(5,t0,t1,t2,t3,t4);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr5r)
static void C_fcall tr5r(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5r(C_proc5 k){
int n;
C_word *a,t5;
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
n=C_rest_count(0);
a=C_alloc(n*3);
t5=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr2r)
static void C_fcall tr2r(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2r(C_proc2 k){
int n;
C_word *a,t2;
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
n=C_rest_count(0);
a=C_alloc(n*3);
t2=C_restore_rest(a,n);
(k)(t0,t1,t2);}

C_noret_decl(tr3r)
static void C_fcall tr3r(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3r(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n*3);
t3=C_restore_rest(a,n);
(k)(t0,t1,t2,t3);}

C_noret_decl(tr4r)
static void C_fcall tr4r(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4r(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n*3);
t4=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4);}

C_noret_decl(tr2rv)
static void C_fcall tr2rv(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2rv(C_proc2 k){
int n;
C_word *a,t2;
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
n=C_rest_count(0);
a=C_alloc(n+1);
t2=C_restore_rest_vector(a,n);
(k)(t0,t1,t2);}

C_noret_decl(tr4rv)
static void C_fcall tr4rv(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4rv(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n+1);
t4=C_restore_rest_vector(a,n);
(k)(t0,t1,t2,t3,t4);}

C_noret_decl(tr3rv)
static void C_fcall tr3rv(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3rv(C_proc3 k){
int n;
C_word *a,t3;
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
n=C_rest_count(0);
a=C_alloc(n+1);
t3=C_restore_rest_vector(a,n);
(k)(t0,t1,t2,t3);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_posix_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("posix_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(2810)){
C_save(t1);
C_rereclaim2(2810*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,346);
lf[1]=C_static_string(C_heaptop,47,"this function is not available on this platform");
lf[3]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[4]=C_h_intern(&lf[4],13,"string-append");
lf[6]=C_h_intern(&lf[6],15,"\003syssignal-hook");
lf[7]=C_static_string(C_heaptop,3," - ");
lf[8]=C_h_intern(&lf[8],17,"\003syspeek-c-string");
lf[9]=C_h_intern(&lf[9],16,"\003sysupdate-errno");
lf[10]=C_h_intern(&lf[10],15,"\003sysposix-error");
lf[11]=C_h_intern(&lf[11],8,"pipe/buf");
lf[12]=C_h_intern(&lf[12],11,"open/rdonly");
lf[13]=C_h_intern(&lf[13],11,"open/wronly");
lf[14]=C_h_intern(&lf[14],9,"open/rdwr");
lf[15]=C_h_intern(&lf[15],9,"open/read");
lf[16]=C_h_intern(&lf[16],10,"open/write");
lf[17]=C_h_intern(&lf[17],10,"open/creat");
lf[18]=C_h_intern(&lf[18],11,"open/append");
lf[19]=C_h_intern(&lf[19],9,"open/excl");
lf[20]=C_h_intern(&lf[20],10,"open/trunc");
lf[21]=C_h_intern(&lf[21],11,"open/binary");
lf[22]=C_h_intern(&lf[22],9,"open/text");
lf[23]=C_h_intern(&lf[23],10,"perm/irusr");
lf[24]=C_h_intern(&lf[24],10,"perm/iwusr");
lf[25]=C_h_intern(&lf[25],10,"perm/ixusr");
lf[26]=C_h_intern(&lf[26],10,"perm/irgrp");
lf[27]=C_h_intern(&lf[27],10,"perm/iwgrp");
lf[28]=C_h_intern(&lf[28],10,"perm/ixgrp");
lf[29]=C_h_intern(&lf[29],10,"perm/iroth");
lf[30]=C_h_intern(&lf[30],10,"perm/iwoth");
lf[31]=C_h_intern(&lf[31],10,"perm/ixoth");
lf[32]=C_h_intern(&lf[32],10,"perm/irwxu");
lf[33]=C_h_intern(&lf[33],10,"perm/irwxg");
lf[34]=C_h_intern(&lf[34],10,"perm/irwxo");
lf[35]=C_h_intern(&lf[35],9,"file-open");
lf[36]=C_h_intern(&lf[36],11,"\000file-error");
lf[37]=C_static_string(C_heaptop,16,"cannot open file");
lf[38]=C_h_intern(&lf[38],17,"\003sysmake-c-string");
lf[39]=C_h_intern(&lf[39],20,"\003sysexpand-home-path");
lf[40]=C_h_intern(&lf[40],10,"file-close");
lf[41]=C_static_string(C_heaptop,17,"cannot close file");
lf[42]=C_h_intern(&lf[42],11,"make-string");
lf[43]=C_h_intern(&lf[43],9,"file-read");
lf[44]=C_static_string(C_heaptop,21,"cannot read from file");
lf[45]=C_h_intern(&lf[45],11,"\000type-error");
lf[46]=C_static_string(C_heaptop,47,"bad argument type - not a string or byte-vector");
lf[47]=C_h_intern(&lf[47],10,"file-write");
lf[48]=C_static_string(C_heaptop,20,"cannot write to file");
lf[49]=C_static_string(C_heaptop,47,"bad argument type - not a string or byte-vector");
lf[50]=C_h_intern(&lf[50],13,"string-length");
lf[51]=C_h_intern(&lf[51],12,"file-mkstemp");
lf[52]=C_h_intern(&lf[52],13,"\003syssubstring");
lf[53]=C_static_string(C_heaptop,28,"cannot create temporary file");
lf[54]=C_h_intern(&lf[54],8,"seek/set");
lf[55]=C_h_intern(&lf[55],8,"seek/end");
lf[56]=C_h_intern(&lf[56],8,"seek/cur");
lf[58]=C_static_string(C_heaptop,18,"cannot access file");
lf[59]=C_static_string(C_heaptop,42,"bad argument type - not a fixnum or string");
lf[60]=C_h_intern(&lf[60],9,"file-stat");
lf[61]=C_h_intern(&lf[61],9,"file-size");
lf[62]=C_h_intern(&lf[62],22,"file-modification-time");
lf[63]=C_h_intern(&lf[63],16,"file-access-time");
lf[64]=C_h_intern(&lf[64],16,"file-change-time");
lf[65]=C_h_intern(&lf[65],10,"file-owner");
lf[66]=C_h_intern(&lf[66],16,"file-permissions");
lf[67]=C_h_intern(&lf[67],13,"regular-file\077");
lf[68]=C_h_intern(&lf[68],13,"\003sysfile-info");
lf[69]=C_h_intern(&lf[69],14,"symbolic-link\077");
lf[70]=C_h_intern(&lf[70],13,"file-position");
lf[71]=C_static_string(C_heaptop,37,"cannot retrieve file position of port");
lf[72]=C_h_intern(&lf[72],6,"stream");
lf[73]=C_static_string(C_heaptop,12,"invalid file");
lf[74]=C_h_intern(&lf[74],5,"port\077");
lf[75]=C_h_intern(&lf[75],18,"set-file-position!");
lf[76]=C_static_string(C_heaptop,24,"cannot set file position");
lf[77]=C_static_string(C_heaptop,12,"invalid file");
lf[78]=C_h_intern(&lf[78],13,"\000bounds-error");
lf[79]=C_static_string(C_heaptop,30,"invalid negative port position");
lf[80]=C_h_intern(&lf[80],16,"create-directory");
lf[81]=C_static_string(C_heaptop,23,"cannot create directory");
lf[82]=C_h_intern(&lf[82],16,"change-directory");
lf[83]=C_static_string(C_heaptop,31,"cannot change current directory");
lf[84]=C_h_intern(&lf[84],16,"delete-directory");
lf[85]=C_static_string(C_heaptop,23,"cannot delete directory");
lf[86]=C_h_intern(&lf[86],6,"string");
lf[87]=C_h_intern(&lf[87],9,"directory");
lf[88]=C_static_string(C_heaptop,21,"cannot open directory");
lf[89]=C_h_intern(&lf[89],16,"\003sysmake-pointer");
lf[90]=C_h_intern(&lf[90],17,"current-directory");
lf[91]=C_h_intern(&lf[91],10,"directory\077");
lf[92]=C_static_string(C_heaptop,33,"cannot retrieve current directory");
lf[93]=C_h_intern(&lf[93],5,"\000text");
lf[94]=C_h_intern(&lf[94],9,"\003syserror");
lf[95]=C_static_string(C_heaptop,35,"illegal input/output mode specifier");
lf[96]=C_static_string(C_heaptop,16,"cannot open pipe");
lf[97]=C_h_intern(&lf[97],13,"\003sysmake-port");
lf[98]=C_h_intern(&lf[98],21,"\003sysstream-port-class");
lf[99]=C_static_string(C_heaptop,6,"(pipe)");
lf[100]=C_h_intern(&lf[100],15,"open-input-pipe");
lf[101]=C_h_intern(&lf[101],7,"\000binary");
lf[102]=C_h_intern(&lf[102],16,"open-output-pipe");
lf[103]=C_h_intern(&lf[103],16,"close-input-pipe");
lf[104]=C_static_string(C_heaptop,24,"error while closing pipe");
lf[105]=C_h_intern(&lf[105],17,"close-output-pipe");
lf[106]=C_h_intern(&lf[106],20,"call-with-input-pipe");
lf[107]=C_h_intern(&lf[107],21,"call-with-output-pipe");
lf[108]=C_h_intern(&lf[108],20,"with-input-from-pipe");
lf[109]=C_h_intern(&lf[109],18,"\003sysstandard-input");
lf[110]=C_h_intern(&lf[110],19,"with-output-to-pipe");
lf[111]=C_h_intern(&lf[111],19,"\003sysstandard-output");
lf[112]=C_h_intern(&lf[112],11,"create-pipe");
lf[113]=C_static_string(C_heaptop,18,"cannot create pipe");
lf[114]=C_h_intern(&lf[114],11,"signal/term");
lf[115]=C_h_intern(&lf[115],10,"signal/int");
lf[116]=C_h_intern(&lf[116],10,"signal/fpe");
lf[117]=C_h_intern(&lf[117],10,"signal/ill");
lf[118]=C_h_intern(&lf[118],11,"signal/segv");
lf[119]=C_h_intern(&lf[119],11,"signal/abrt");
lf[120]=C_h_intern(&lf[120],12,"signal/break");
lf[121]=C_h_intern(&lf[121],11,"signal/alrm");
lf[122]=C_h_intern(&lf[122],11,"signal/chld");
lf[123]=C_h_intern(&lf[123],11,"signal/cont");
lf[124]=C_h_intern(&lf[124],10,"signal/hup");
lf[125]=C_h_intern(&lf[125],9,"signal/io");
lf[126]=C_h_intern(&lf[126],11,"signal/kill");
lf[127]=C_h_intern(&lf[127],11,"signal/pipe");
lf[128]=C_h_intern(&lf[128],11,"signal/prof");
lf[129]=C_h_intern(&lf[129],11,"signal/quit");
lf[130]=C_h_intern(&lf[130],11,"signal/stop");
lf[131]=C_h_intern(&lf[131],11,"signal/trap");
lf[132]=C_h_intern(&lf[132],11,"signal/tstp");
lf[133]=C_h_intern(&lf[133],10,"signal/urg");
lf[134]=C_h_intern(&lf[134],11,"signal/usr1");
lf[135]=C_h_intern(&lf[135],11,"signal/usr2");
lf[136]=C_h_intern(&lf[136],13,"signal/vtalrm");
lf[137]=C_h_intern(&lf[137],12,"signal/winch");
lf[138]=C_h_intern(&lf[138],11,"signal/xcpu");
lf[139]=C_h_intern(&lf[139],11,"signal/xfsz");
lf[140]=C_h_intern(&lf[140],12,"signals-list");
lf[141]=C_h_intern(&lf[141],18,"\003sysinterrupt-hook");
lf[142]=C_h_intern(&lf[142],14,"signal-handler");
lf[143]=C_h_intern(&lf[143],19,"set-signal-handler!");
lf[144]=C_h_intern(&lf[144],10,"errno/perm");
lf[145]=C_h_intern(&lf[145],11,"errno/noent");
lf[146]=C_h_intern(&lf[146],10,"errno/srch");
lf[147]=C_h_intern(&lf[147],10,"errno/intr");
lf[148]=C_h_intern(&lf[148],8,"errno/io");
lf[149]=C_h_intern(&lf[149],12,"errno/noexec");
lf[150]=C_h_intern(&lf[150],10,"errno/badf");
lf[151]=C_h_intern(&lf[151],11,"errno/child");
lf[152]=C_h_intern(&lf[152],11,"errno/nomem");
lf[153]=C_h_intern(&lf[153],11,"errno/acces");
lf[154]=C_h_intern(&lf[154],11,"errno/fault");
lf[155]=C_h_intern(&lf[155],10,"errno/busy");
lf[156]=C_h_intern(&lf[156],11,"errno/exist");
lf[157]=C_h_intern(&lf[157],12,"errno/notdir");
lf[158]=C_h_intern(&lf[158],11,"errno/isdir");
lf[159]=C_h_intern(&lf[159],11,"errno/inval");
lf[160]=C_h_intern(&lf[160],11,"errno/mfile");
lf[161]=C_h_intern(&lf[161],11,"errno/nospc");
lf[162]=C_h_intern(&lf[162],11,"errno/spipe");
lf[163]=C_h_intern(&lf[163],10,"errno/pipe");
lf[164]=C_h_intern(&lf[164],11,"errno/again");
lf[165]=C_h_intern(&lf[165],10,"errno/rofs");
lf[166]=C_h_intern(&lf[166],10,"errno/nxio");
lf[167]=C_h_intern(&lf[167],10,"errno/2big");
lf[168]=C_h_intern(&lf[168],10,"errno/xdev");
lf[169]=C_h_intern(&lf[169],11,"errno/nodev");
lf[170]=C_h_intern(&lf[170],11,"errno/nfile");
lf[171]=C_h_intern(&lf[171],11,"errno/notty");
lf[172]=C_h_intern(&lf[172],10,"errno/fbig");
lf[173]=C_h_intern(&lf[173],11,"errno/mlink");
lf[174]=C_h_intern(&lf[174],9,"errno/dom");
lf[175]=C_h_intern(&lf[175],11,"errno/range");
lf[176]=C_h_intern(&lf[176],12,"errno/deadlk");
lf[177]=C_h_intern(&lf[177],17,"errno/nametoolong");
lf[178]=C_h_intern(&lf[178],11,"errno/nolck");
lf[179]=C_h_intern(&lf[179],11,"errno/nosys");
lf[180]=C_h_intern(&lf[180],14,"errno/notempty");
lf[181]=C_h_intern(&lf[181],11,"errno/ilseq");
lf[182]=C_h_intern(&lf[182],16,"change-file-mode");
lf[183]=C_static_string(C_heaptop,23,"cannot change file mode");
lf[184]=C_h_intern(&lf[184],17,"file-read-access\077");
lf[185]=C_h_intern(&lf[185],18,"file-write-access\077");
lf[186]=C_h_intern(&lf[186],20,"file-execute-access\077");
lf[187]=C_h_intern(&lf[187],12,"fileno/stdin");
lf[188]=C_h_intern(&lf[188],13,"fileno/stdout");
lf[189]=C_h_intern(&lf[189],13,"fileno/stderr");
lf[190]=C_h_intern(&lf[190],7,"\000append");
lf[191]=C_static_string(C_heaptop,27,"invalid mode for input file");
lf[192]=C_static_string(C_heaptop,1,"a");
lf[193]=C_static_string(C_heaptop,21,"invalid mode argument");
lf[194]=C_static_string(C_heaptop,1,"r");
lf[195]=C_static_string(C_heaptop,1,"w");
lf[196]=C_static_string(C_heaptop,16,"cannot open file");
lf[197]=C_static_string(C_heaptop,8,"(fdport)");
lf[198]=C_h_intern(&lf[198],16,"open-input-file*");
lf[199]=C_h_intern(&lf[199],17,"open-output-file*");
lf[200]=C_h_intern(&lf[200],12,"port->fileno");
lf[201]=C_static_string(C_heaptop,25,"port has no attached file");
lf[202]=C_static_string(C_heaptop,37,"cannot access file-descriptor of port");
lf[203]=C_h_intern(&lf[203],25,"\003syspeek-unsigned-integer");
lf[204]=C_h_intern(&lf[204],16,"duplicate-fileno");
lf[205]=C_static_string(C_heaptop,32,"cannot duplicate file descriptor");
lf[206]=C_h_intern(&lf[206],6,"setenv");
lf[207]=C_h_intern(&lf[207],8,"unsetenv");
lf[208]=C_h_intern(&lf[208],9,"substring");
lf[209]=C_h_intern(&lf[209],19,"current-environment");
lf[210]=C_h_intern(&lf[210],19,"seconds->local-time");
lf[211]=C_h_intern(&lf[211],18,"\003sysdecode-seconds");
lf[212]=C_h_intern(&lf[212],17,"seconds->utc-time");
lf[213]=C_h_intern(&lf[213],15,"seconds->string");
lf[214]=C_static_string(C_heaptop,32,"cannot convert seconds to string");
lf[215]=C_h_intern(&lf[215],12,"time->string");
lf[216]=C_static_string(C_heaptop,28,"cannot time vector to string");
lf[217]=C_static_string(C_heaptop,21,"time vector too short");
lf[218]=C_h_intern(&lf[218],19,"local-time->seconds");
lf[219]=C_h_intern(&lf[219],15,"\003syscons-flonum");
lf[220]=C_static_string(C_heaptop,37,"cannot convert time vector to seconds");
lf[221]=C_static_string(C_heaptop,21,"time vector too short");
lf[222]=C_h_intern(&lf[222],5,"_exit");
lf[223]=C_h_intern(&lf[223],23,"\003syscleanup-before-exit");
lf[224]=C_h_intern(&lf[224],19,"set-buffering-mode!");
lf[225]=C_static_string(C_heaptop,25,"cannot set buffering mode");
lf[226]=C_h_intern(&lf[226],5,"\000full");
lf[227]=C_h_intern(&lf[227],5,"\000line");
lf[228]=C_h_intern(&lf[228],5,"\000none");
lf[229]=C_static_string(C_heaptop,22,"invalid buffering-mode");
lf[230]=C_h_intern(&lf[230],12,"glob->regexp");
lf[231]=C_h_intern(&lf[231],13,"make-pathname");
lf[232]=C_h_intern(&lf[232],18,"decompose-pathname");
lf[233]=C_h_intern(&lf[233],4,"glob");
lf[234]=C_h_intern(&lf[234],12,"string-match");
lf[235]=C_static_string(C_heaptop,1,".");
lf[236]=C_static_string(C_heaptop,1,"*");
lf[237]=C_h_intern(&lf[237],13,"spawn/overlay");
lf[238]=C_h_intern(&lf[238],10,"spawn/wait");
lf[239]=C_h_intern(&lf[239],12,"spawn/nowait");
lf[240]=C_h_intern(&lf[240],13,"spawn/nowaito");
lf[241]=C_h_intern(&lf[241],12,"spawn/detach");
lf[242]=C_h_intern(&lf[242],24,"pathname-strip-directory");
lf[243]=C_h_intern(&lf[243],15,"process-execute");
lf[244]=C_static_string(C_heaptop,22,"cannot execute process");
lf[245]=C_h_intern(&lf[245],13,"process-spawn");
lf[246]=C_static_string(C_heaptop,22,"cannot execute process");
lf[247]=C_h_intern(&lf[247],18,"current-process-id");
lf[248]=C_h_intern(&lf[248],17,"\003sysshell-command");
lf[249]=C_h_intern(&lf[249],27,"\003sysshell-command-arguments");
lf[250]=C_static_string(C_heaptop,2,"/c");
lf[251]=C_h_intern(&lf[251],6,"getenv");
lf[252]=C_h_intern(&lf[252],11,"process-run");
lf[254]=C_h_intern(&lf[254],11,"\003sysprocess");
lf[255]=C_h_intern(&lf[255],14,"\000process-error");
lf[256]=C_static_string(C_heaptop,22,"cannot execute process");
lf[257]=C_h_intern(&lf[257],17,"\003sysmake-locative");
lf[258]=C_h_intern(&lf[258],8,"location");
lf[259]=C_h_intern(&lf[259],4,"conc");
lf[260]=C_static_string(C_heaptop,1," ");
lf[261]=C_h_intern(&lf[261],12,"\003sysfor-each");
lf[262]=C_h_intern(&lf[262],7,"process");
lf[263]=C_h_intern(&lf[263],8,"process*");
lf[264]=C_h_intern(&lf[264],16,"\003sysprocess-wait");
lf[265]=C_h_intern(&lf[265],12,"process-wait");
lf[266]=C_static_string(C_heaptop,32,"waiting for child process failed");
lf[267]=C_h_intern(&lf[267],5,"sleep");
lf[268]=C_h_intern(&lf[268],13,"get-host-name");
lf[269]=C_static_string(C_heaptop,25,"cannot retrieve host-name");
lf[270]=C_h_intern(&lf[270],18,"system-information");
lf[271]=C_static_string(C_heaptop,7,"windows");
lf[272]=C_static_string(C_heaptop,34,"cannot retrieve system-information");
lf[273]=C_h_intern(&lf[273],10,"find-files");
lf[274]=C_static_string(C_heaptop,1,".");
lf[275]=C_static_string(C_heaptop,2,"..");
lf[276]=C_h_intern(&lf[276],19,"\003sysundefined-value");
lf[277]=C_static_string(C_heaptop,1,"*");
lf[278]=C_h_intern(&lf[278],16,"\003sysdynamic-wind");
lf[279]=C_h_intern(&lf[279],13,"pathname-file");
lf[280]=C_static_string(C_heaptop,1,"*");
lf[281]=C_h_intern(&lf[281],17,"change-file-owner");
lf[282]=C_h_intern(&lf[282],5,"error");
lf[283]=C_h_intern(&lf[283],11,"create-fifo");
lf[284]=C_h_intern(&lf[284],14,"create-session");
lf[285]=C_h_intern(&lf[285],20,"create-symbolic-link");
lf[286]=C_h_intern(&lf[286],26,"current-effective-group-id");
lf[287]=C_h_intern(&lf[287],25,"current-effective-user-id");
lf[288]=C_h_intern(&lf[288],16,"current-group-id");
lf[289]=C_h_intern(&lf[289],15,"current-user-id");
lf[290]=C_h_intern(&lf[290],18,"map-file-to-memory");
lf[291]=C_h_intern(&lf[291],9,"file-link");
lf[292]=C_h_intern(&lf[292],9,"file-lock");
lf[293]=C_h_intern(&lf[293],18,"file-lock/blocking");
lf[294]=C_h_intern(&lf[294],11,"file-select");
lf[295]=C_h_intern(&lf[295],14,"file-test-lock");
lf[296]=C_h_intern(&lf[296],13,"file-truncate");
lf[297]=C_h_intern(&lf[297],11,"file-unlock");
lf[298]=C_h_intern(&lf[298],10,"get-groups");
lf[299]=C_h_intern(&lf[299],17,"group-information");
lf[300]=C_h_intern(&lf[300],17,"initialize-groups");
lf[301]=C_h_intern(&lf[301],27,"local-timezone-abbreviation");
lf[302]=C_h_intern(&lf[302],26,"memory-mapped-file-pointer");
lf[303]=C_h_intern(&lf[303],17,"parent-process-id");
lf[304]=C_h_intern(&lf[304],12,"process-fork");
lf[305]=C_h_intern(&lf[305],16,"process-group-id");
lf[306]=C_h_intern(&lf[306],14,"process-signal");
lf[307]=C_h_intern(&lf[307],18,"read-symbolic-link");
lf[308]=C_h_intern(&lf[308],10,"set-alarm!");
lf[309]=C_h_intern(&lf[309],13,"set-group-id!");
lf[310]=C_h_intern(&lf[310],11,"set-groups!");
lf[311]=C_h_intern(&lf[311],21,"set-process-group-id!");
lf[312]=C_h_intern(&lf[312],19,"set-root-directory!");
lf[313]=C_h_intern(&lf[313],16,"set-signal-mask!");
lf[314]=C_h_intern(&lf[314],12,"set-user-id!");
lf[315]=C_h_intern(&lf[315],11,"signal-mask");
lf[316]=C_h_intern(&lf[316],12,"signal-mask!");
lf[317]=C_h_intern(&lf[317],14,"signal-masked\077");
lf[318]=C_h_intern(&lf[318],14,"signal-unmask!");
lf[319]=C_h_intern(&lf[319],13,"terminal-name");
lf[320]=C_h_intern(&lf[320],14,"terminal-port\077");
lf[321]=C_h_intern(&lf[321],22,"unmap-file-from-memory");
lf[322]=C_h_intern(&lf[322],16,"user-information");
lf[323]=C_h_intern(&lf[323],17,"utc-time->seconds");
lf[324]=C_h_intern(&lf[324],16,"errno/wouldblock");
lf[325]=C_h_intern(&lf[325],5,"fifo\077");
lf[326]=C_h_intern(&lf[326],19,"memory-mapped-file\077");
lf[327]=C_h_intern(&lf[327],13,"map/anonymous");
lf[328]=C_h_intern(&lf[328],8,"map/file");
lf[329]=C_h_intern(&lf[329],9,"map/fixed");
lf[330]=C_h_intern(&lf[330],11,"map/private");
lf[331]=C_h_intern(&lf[331],10,"map/shared");
lf[332]=C_h_intern(&lf[332],10,"open/fsync");
lf[333]=C_h_intern(&lf[333],11,"open/noctty");
lf[334]=C_h_intern(&lf[334],13,"open/nonblock");
lf[335]=C_h_intern(&lf[335],9,"open/sync");
lf[336]=C_h_intern(&lf[336],10,"perm/isgid");
lf[337]=C_h_intern(&lf[337],10,"perm/isuid");
lf[338]=C_h_intern(&lf[338],10,"perm/isvtx");
lf[339]=C_h_intern(&lf[339],9,"prot/exec");
lf[340]=C_h_intern(&lf[340],9,"prot/none");
lf[341]=C_h_intern(&lf[341],9,"prot/read");
lf[342]=C_h_intern(&lf[342],10,"prot/write");
lf[343]=C_h_intern(&lf[343],11,"make-vector");
lf[344]=C_h_intern(&lf[344],17,"register-feature!");
lf[345]=C_h_intern(&lf[345],5,"posix");
C_register_lf2(lf,346,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=C_mutate(&lf[2],lf[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_923,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t4);}

/* k921 */
static void C_ccall f_923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_923,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_926,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_regex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k924 in k921 */
static void C_ccall f_926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_926,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_929,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k927 in k924 in k921 */
static void C_ccall f_929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_929,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_932,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k930 in k927 in k924 in k921 */
static void C_ccall f_932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_932,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_935,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 792  register-feature! */
t3=*((C_word*)lf[344]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[345]);}

/* k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word ab[119],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_935,2,t0,t1);}
t2=*((C_word*)lf[4]+1);
t3=C_mutate(&lf[5],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_942,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[10]+1,lf[5]);
t5=C_mutate((C_word*)lf[11]+1,C_fix((C_word)PIPE_BUF));
t6=C_mutate((C_word*)lf[12]+1,C_fix((C_word)O_RDONLY));
t7=C_mutate((C_word*)lf[13]+1,C_fix((C_word)O_WRONLY));
t8=C_mutate((C_word*)lf[14]+1,C_fix((C_word)O_RDWR));
t9=C_mutate((C_word*)lf[15]+1,C_fix((C_word)O_RDWR));
t10=C_mutate((C_word*)lf[16]+1,C_fix((C_word)O_WRONLY));
t11=C_mutate((C_word*)lf[17]+1,C_fix((C_word)O_CREAT));
t12=C_mutate((C_word*)lf[18]+1,C_fix((C_word)O_APPEND));
t13=C_mutate((C_word*)lf[19]+1,C_fix((C_word)O_EXCL));
t14=C_mutate((C_word*)lf[20]+1,C_fix((C_word)O_TRUNC));
t15=C_mutate((C_word*)lf[21]+1,C_fix((C_word)O_BINARY));
t16=C_mutate((C_word*)lf[22]+1,C_fix((C_word)O_TEXT));
t17=C_mutate((C_word*)lf[23]+1,C_fix((C_word)S_IREAD));
t18=C_mutate((C_word*)lf[24]+1,C_fix((C_word)S_IWRITE));
t19=C_mutate((C_word*)lf[25]+1,C_fix((C_word)S_IEXEC));
t20=C_mutate((C_word*)lf[26]+1,C_fix((C_word)S_IREAD));
t21=C_mutate((C_word*)lf[27]+1,C_fix((C_word)S_IWRITE));
t22=C_mutate((C_word*)lf[28]+1,C_fix((C_word)S_IEXEC));
t23=C_mutate((C_word*)lf[29]+1,C_fix((C_word)S_IREAD));
t24=C_mutate((C_word*)lf[30]+1,C_fix((C_word)S_IWRITE));
t25=C_mutate((C_word*)lf[31]+1,C_fix((C_word)S_IEXEC));
t26=C_mutate((C_word*)lf[32]+1,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t27=C_mutate((C_word*)lf[33]+1,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t28=C_mutate((C_word*)lf[34]+1,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t29=(C_word)C_u_fixnum_or(C_fix((C_word)S_IREAD),C_fix((C_word)S_IREAD));
t30=(C_word)C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC),t29);
t31=C_mutate((C_word*)lf[35]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_987,a[2]=t30,tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[40]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1019,tmp=(C_word)a,a+=2,tmp));
t33=*((C_word*)lf[42]+1);
t34=C_mutate((C_word*)lf[43]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1034,a[2]=t33,tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[47]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1073,tmp=(C_word)a,a+=2,tmp));
t36=*((C_word*)lf[50]+1);
t37=C_mutate((C_word*)lf[51]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1109,a[2]=t36,tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[54]+1,C_fix((C_word)SEEK_SET));
t39=C_mutate((C_word*)lf[55]+1,C_fix((C_word)SEEK_END));
t40=C_mutate((C_word*)lf[56]+1,C_fix((C_word)SEEK_CUR));
t41=C_mutate(&lf[57],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1144,tmp=(C_word)a,a+=2,tmp));
t42=C_mutate((C_word*)lf[60]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1182,tmp=(C_word)a,a+=2,tmp));
t43=C_mutate((C_word*)lf[61]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1206,tmp=(C_word)a,a+=2,tmp));
t44=C_mutate((C_word*)lf[62]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1212,tmp=(C_word)a,a+=2,tmp));
t45=C_mutate((C_word*)lf[63]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1218,tmp=(C_word)a,a+=2,tmp));
t46=C_mutate((C_word*)lf[64]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1224,tmp=(C_word)a,a+=2,tmp));
t47=C_mutate((C_word*)lf[65]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1230,tmp=(C_word)a,a+=2,tmp));
t48=C_mutate((C_word*)lf[66]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1236,tmp=(C_word)a,a+=2,tmp));
t49=C_mutate((C_word*)lf[67]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1242,tmp=(C_word)a,a+=2,tmp));
t50=C_mutate((C_word*)lf[69]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1262,tmp=(C_word)a,a+=2,tmp));
t51=C_mutate((C_word*)lf[70]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1265,tmp=(C_word)a,a+=2,tmp));
t52=C_mutate((C_word*)lf[75]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1305,tmp=(C_word)a,a+=2,tmp));
t53=C_mutate((C_word*)lf[80]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1360,tmp=(C_word)a,a+=2,tmp));
t54=C_mutate((C_word*)lf[82]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1384,tmp=(C_word)a,a+=2,tmp));
t55=C_mutate((C_word*)lf[84]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1408,tmp=(C_word)a,a+=2,tmp));
t56=*((C_word*)lf[4]+1);
t57=*((C_word*)lf[42]+1);
t58=*((C_word*)lf[86]+1);
t59=C_mutate((C_word*)lf[87]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1432,a[2]=t57,tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[91]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1586,tmp=(C_word)a,a+=2,tmp));
t61=*((C_word*)lf[42]+1);
t62=C_mutate((C_word*)lf[90]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1606,a[2]=t61,tmp=(C_word)a,a+=3,tmp));
t63=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1645,tmp=(C_word)a,a+=2,tmp);
t64=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1657,tmp=(C_word)a,a+=2,tmp);
t65=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1663,tmp=(C_word)a,a+=2,tmp);
t66=C_mutate((C_word*)lf[100]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1681,a[2]=t64,a[3]=t65,a[4]=t63,tmp=(C_word)a,a+=5,tmp));
t67=C_mutate((C_word*)lf[102]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1714,a[2]=t64,a[3]=t65,a[4]=t63,tmp=(C_word)a,a+=5,tmp));
t68=C_mutate((C_word*)lf[103]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1747,tmp=(C_word)a,a+=2,tmp));
t69=C_mutate((C_word*)lf[105]+1,*((C_word*)lf[103]+1));
t70=*((C_word*)lf[100]+1);
t71=*((C_word*)lf[102]+1);
t72=*((C_word*)lf[103]+1);
t73=*((C_word*)lf[105]+1);
t74=C_mutate((C_word*)lf[106]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1763,a[2]=t70,a[3]=t72,tmp=(C_word)a,a+=4,tmp));
t75=C_mutate((C_word*)lf[107]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1787,a[2]=t71,a[3]=t73,tmp=(C_word)a,a+=4,tmp));
t76=C_mutate((C_word*)lf[108]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1811,a[2]=t70,a[3]=t72,tmp=(C_word)a,a+=4,tmp));
t77=C_mutate((C_word*)lf[110]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1831,a[2]=t71,a[3]=t73,tmp=(C_word)a,a+=4,tmp));
t78=C_mutate((C_word*)lf[112]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1851,tmp=(C_word)a,a+=2,tmp));
t79=C_mutate((C_word*)lf[114]+1,C_fix((C_word)SIGTERM));
t80=C_mutate((C_word*)lf[115]+1,C_fix((C_word)SIGINT));
t81=C_mutate((C_word*)lf[116]+1,C_fix((C_word)SIGFPE));
t82=C_mutate((C_word*)lf[117]+1,C_fix((C_word)SIGILL));
t83=C_mutate((C_word*)lf[118]+1,C_fix((C_word)SIGSEGV));
t84=C_mutate((C_word*)lf[119]+1,C_fix((C_word)SIGABRT));
t85=C_mutate((C_word*)lf[120]+1,C_fix((C_word)SIGBREAK));
t86=C_set_block_item(lf[121],0,C_fix(0));
t87=C_set_block_item(lf[122],0,C_fix(0));
t88=C_set_block_item(lf[123],0,C_fix(0));
t89=C_set_block_item(lf[124],0,C_fix(0));
t90=C_set_block_item(lf[125],0,C_fix(0));
t91=C_set_block_item(lf[126],0,C_fix(0));
t92=C_set_block_item(lf[127],0,C_fix(0));
t93=C_set_block_item(lf[128],0,C_fix(0));
t94=C_set_block_item(lf[129],0,C_fix(0));
t95=C_set_block_item(lf[130],0,C_fix(0));
t96=C_set_block_item(lf[131],0,C_fix(0));
t97=C_set_block_item(lf[132],0,C_fix(0));
t98=C_set_block_item(lf[133],0,C_fix(0));
t99=C_set_block_item(lf[134],0,C_fix(0));
t100=C_set_block_item(lf[135],0,C_fix(0));
t101=C_set_block_item(lf[136],0,C_fix(0));
t102=C_set_block_item(lf[137],0,C_fix(0));
t103=C_set_block_item(lf[138],0,C_fix(0));
t104=C_set_block_item(lf[139],0,C_fix(0));
t105=(C_word)C_a_i_list(&a,7,*((C_word*)lf[114]+1),*((C_word*)lf[115]+1),*((C_word*)lf[116]+1),*((C_word*)lf[117]+1),*((C_word*)lf[118]+1),*((C_word*)lf[119]+1),*((C_word*)lf[120]+1));
t106=C_mutate((C_word*)lf[140]+1,t105);
t107=*((C_word*)lf[141]+1);
t108=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1900,a[2]=((C_word*)t0)[2],a[3]=t107,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1207 make-vector */
t109=*((C_word*)lf[343]+1);
((C_proc4)(void*)(*((C_word*)t109+1)))(4,t109,t108,C_fix(256),C_SCHEME_FALSE);}

/* k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word t34;
C_word t35;
C_word t36;
C_word t37;
C_word t38;
C_word t39;
C_word t40;
C_word t41;
C_word t42;
C_word t43;
C_word t44;
C_word t45;
C_word t46;
C_word t47;
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word t99;
C_word t100;
C_word t101;
C_word t102;
C_word t103;
C_word t104;
C_word t105;
C_word t106;
C_word t107;
C_word t108;
C_word t109;
C_word t110;
C_word t111;
C_word t112;
C_word t113;
C_word t114;
C_word t115;
C_word t116;
C_word t117;
C_word t118;
C_word t119;
C_word t120;
C_word t121;
C_word t122;
C_word t123;
C_word t124;
C_word t125;
C_word t126;
C_word t127;
C_word t128;
C_word t129;
C_word t130;
C_word t131;
C_word t132;
C_word t133;
C_word t134;
C_word t135;
C_word t136;
C_word t137;
C_word t138;
C_word t139;
C_word t140;
C_word t141;
C_word t142;
C_word t143;
C_word t144;
C_word t145;
C_word t146;
C_word t147;
C_word t148;
C_word t149;
C_word t150;
C_word t151;
C_word t152;
C_word t153;
C_word t154;
C_word t155;
C_word t156;
C_word t157;
C_word t158;
C_word t159;
C_word t160;
C_word t161;
C_word t162;
C_word t163;
C_word t164;
C_word t165;
C_word t166;
C_word ab[203],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1900,2,t0,t1);}
t2=C_mutate((C_word*)lf[142]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1902,a[2]=t1,tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[143]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1908,a[2]=t1,tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[141]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1918,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[144]+1,C_fix((C_word)EPERM));
t6=C_mutate((C_word*)lf[145]+1,C_fix((C_word)ENOENT));
t7=C_mutate((C_word*)lf[146]+1,C_fix((C_word)ESRCH));
t8=C_mutate((C_word*)lf[147]+1,C_fix((C_word)EINTR));
t9=C_mutate((C_word*)lf[148]+1,C_fix((C_word)EIO));
t10=C_mutate((C_word*)lf[149]+1,C_fix((C_word)ENOEXEC));
t11=C_mutate((C_word*)lf[150]+1,C_fix((C_word)EBADF));
t12=C_mutate((C_word*)lf[151]+1,C_fix((C_word)ECHILD));
t13=C_mutate((C_word*)lf[152]+1,C_fix((C_word)ENOMEM));
t14=C_mutate((C_word*)lf[153]+1,C_fix((C_word)EACCES));
t15=C_mutate((C_word*)lf[154]+1,C_fix((C_word)EFAULT));
t16=C_mutate((C_word*)lf[155]+1,C_fix((C_word)EBUSY));
t17=C_mutate((C_word*)lf[156]+1,C_fix((C_word)EEXIST));
t18=C_mutate((C_word*)lf[157]+1,C_fix((C_word)ENOTDIR));
t19=C_mutate((C_word*)lf[158]+1,C_fix((C_word)EISDIR));
t20=C_mutate((C_word*)lf[159]+1,C_fix((C_word)EINVAL));
t21=C_mutate((C_word*)lf[160]+1,C_fix((C_word)EMFILE));
t22=C_mutate((C_word*)lf[161]+1,C_fix((C_word)ENOSPC));
t23=C_mutate((C_word*)lf[162]+1,C_fix((C_word)ESPIPE));
t24=C_mutate((C_word*)lf[163]+1,C_fix((C_word)EPIPE));
t25=C_mutate((C_word*)lf[164]+1,C_fix((C_word)EAGAIN));
t26=C_mutate((C_word*)lf[165]+1,C_fix((C_word)EROFS));
t27=C_mutate((C_word*)lf[166]+1,C_fix((C_word)ENXIO));
t28=C_mutate((C_word*)lf[167]+1,C_fix((C_word)E2BIG));
t29=C_mutate((C_word*)lf[168]+1,C_fix((C_word)EXDEV));
t30=C_mutate((C_word*)lf[169]+1,C_fix((C_word)ENODEV));
t31=C_mutate((C_word*)lf[170]+1,C_fix((C_word)ENFILE));
t32=C_mutate((C_word*)lf[171]+1,C_fix((C_word)ENOTTY));
t33=C_mutate((C_word*)lf[172]+1,C_fix((C_word)EFBIG));
t34=C_mutate((C_word*)lf[173]+1,C_fix((C_word)EMLINK));
t35=C_mutate((C_word*)lf[174]+1,C_fix((C_word)EDOM));
t36=C_mutate((C_word*)lf[175]+1,C_fix((C_word)ERANGE));
t37=C_mutate((C_word*)lf[176]+1,C_fix((C_word)EDEADLK));
t38=C_mutate((C_word*)lf[177]+1,C_fix((C_word)ENAMETOOLONG));
t39=C_mutate((C_word*)lf[178]+1,C_fix((C_word)ENOLCK));
t40=C_mutate((C_word*)lf[179]+1,C_fix((C_word)ENOSYS));
t41=C_mutate((C_word*)lf[180]+1,C_fix((C_word)ENOTEMPTY));
t42=C_mutate((C_word*)lf[181]+1,C_fix((C_word)EILSEQ));
t43=C_mutate((C_word*)lf[182]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1974,tmp=(C_word)a,a+=2,tmp));
t44=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1998,tmp=(C_word)a,a+=2,tmp);
t45=C_mutate((C_word*)lf[184]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2019,a[2]=t44,tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[185]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2025,a[2]=t44,tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[186]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2031,a[2]=t44,tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[187]+1,C_fix((C_word)0));
t49=C_mutate((C_word*)lf[188]+1,C_fix((C_word)1));
t50=C_mutate((C_word*)lf[189]+1,C_fix((C_word)2));
t51=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2040,tmp=(C_word)a,a+=2,tmp);
t52=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2077,tmp=(C_word)a,a+=2,tmp);
t53=C_mutate((C_word*)lf[198]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2095,a[2]=t51,a[3]=t52,tmp=(C_word)a,a+=4,tmp));
t54=C_mutate((C_word*)lf[199]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2106,a[2]=t51,a[3]=t52,tmp=(C_word)a,a+=4,tmp));
t55=C_mutate((C_word*)lf[200]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2117,tmp=(C_word)a,a+=2,tmp));
t56=C_mutate((C_word*)lf[204]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2149,tmp=(C_word)a,a+=2,tmp));
t57=C_mutate((C_word*)lf[206]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2173,tmp=(C_word)a,a+=2,tmp));
t58=C_mutate((C_word*)lf[207]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2184,tmp=(C_word)a,a+=2,tmp));
t59=*((C_word*)lf[208]+1);
t60=C_mutate((C_word*)lf[209]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2196,a[2]=t59,tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[210]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2261,tmp=(C_word)a,a+=2,tmp));
t62=C_mutate((C_word*)lf[212]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2267,tmp=(C_word)a,a+=2,tmp));
t63=C_mutate((C_word*)lf[213]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2278,tmp=(C_word)a,a+=2,tmp));
t64=C_mutate((C_word*)lf[215]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2295,tmp=(C_word)a,a+=2,tmp));
t65=C_mutate((C_word*)lf[218]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2323,tmp=(C_word)a,a+=2,tmp));
t66=C_mutate((C_word*)lf[222]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2353,tmp=(C_word)a,a+=2,tmp));
t67=C_mutate((C_word*)lf[224]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2372,tmp=(C_word)a,a+=2,tmp));
t68=*((C_word*)lf[230]+1);
t69=*((C_word*)lf[87]+1);
t70=*((C_word*)lf[231]+1);
t71=*((C_word*)lf[232]+1);
t72=C_mutate((C_word*)lf[233]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2425,a[2]=t68,a[3]=t69,a[4]=t70,a[5]=t71,tmp=(C_word)a,a+=6,tmp));
t73=C_mutate((C_word*)lf[237]+1,C_fix((C_word)P_OVERLAY));
t74=C_mutate((C_word*)lf[238]+1,C_fix((C_word)P_WAIT));
t75=C_mutate((C_word*)lf[239]+1,C_fix((C_word)P_NOWAIT));
t76=C_mutate((C_word*)lf[240]+1,C_fix((C_word)P_NOWAITO));
t77=C_mutate((C_word*)lf[241]+1,C_fix((C_word)P_DETACH));
t78=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2534,tmp=(C_word)a,a+=2,tmp);
t79=*((C_word*)lf[242]+1);
t80=C_mutate((C_word*)lf[243]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2542,a[2]=t79,a[3]=t78,tmp=(C_word)a,a+=4,tmp));
t81=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2674,tmp=(C_word)a,a+=2,tmp);
t82=*((C_word*)lf[242]+1);
t83=C_mutate((C_word*)lf[245]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2682,a[2]=t82,a[3]=t81,tmp=(C_word)a,a+=4,tmp));
t84=C_mutate((C_word*)lf[247]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2763,tmp=(C_word)a,a+=2,tmp));
t85=C_mutate((C_word*)lf[248]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2766,tmp=(C_word)a,a+=2,tmp));
t86=C_mutate((C_word*)lf[249]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2772,tmp=(C_word)a,a+=2,tmp));
t87=*((C_word*)lf[245]+1);
t88=*((C_word*)lf[251]+1);
t89=C_mutate((C_word*)lf[252]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2778,a[2]=t87,tmp=(C_word)a,a+=3,tmp));
t90=C_mutate(&lf[253],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2807,tmp=(C_word)a,a+=2,tmp));
t91=C_mutate((C_word*)lf[254]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2854,tmp=(C_word)a,a+=2,tmp));
t92=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2957,tmp=(C_word)a,a+=2,tmp);
t93=C_mutate((C_word*)lf[262]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3013,a[2]=t92,tmp=(C_word)a,a+=3,tmp));
t94=C_mutate((C_word*)lf[263]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3070,a[2]=t92,tmp=(C_word)a,a+=3,tmp));
t95=C_mutate((C_word*)lf[264]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3127,tmp=(C_word)a,a+=2,tmp));
t96=C_mutate((C_word*)lf[265]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3139,tmp=(C_word)a,a+=2,tmp));
t97=C_mutate((C_word*)lf[267]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3193,tmp=(C_word)a,a+=2,tmp));
t98=C_mutate((C_word*)lf[268]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3196,tmp=(C_word)a,a+=2,tmp));
t99=C_mutate((C_word*)lf[270]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3208,tmp=(C_word)a,a+=2,tmp));
t100=*((C_word*)lf[233]+1);
t101=*((C_word*)lf[234]+1);
t102=*((C_word*)lf[231]+1);
t103=*((C_word*)lf[91]+1);
t104=C_mutate((C_word*)lf[273]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3239,a[2]=t103,a[3]=t102,a[4]=t100,a[5]=t101,tmp=(C_word)a,a+=6,tmp));
t105=C_mutate((C_word*)lf[281]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3459,tmp=(C_word)a,a+=2,tmp));
t106=C_mutate((C_word*)lf[283]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3465,tmp=(C_word)a,a+=2,tmp));
t107=C_mutate((C_word*)lf[284]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3471,tmp=(C_word)a,a+=2,tmp));
t108=C_mutate((C_word*)lf[285]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3477,tmp=(C_word)a,a+=2,tmp));
t109=C_mutate((C_word*)lf[286]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3483,tmp=(C_word)a,a+=2,tmp));
t110=C_mutate((C_word*)lf[287]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3489,tmp=(C_word)a,a+=2,tmp));
t111=C_mutate((C_word*)lf[288]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3495,tmp=(C_word)a,a+=2,tmp));
t112=C_mutate((C_word*)lf[289]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3501,tmp=(C_word)a,a+=2,tmp));
t113=C_mutate((C_word*)lf[290]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3507,tmp=(C_word)a,a+=2,tmp));
t114=C_mutate((C_word*)lf[291]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3513,tmp=(C_word)a,a+=2,tmp));
t115=C_mutate((C_word*)lf[292]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3519,tmp=(C_word)a,a+=2,tmp));
t116=C_mutate((C_word*)lf[293]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3525,tmp=(C_word)a,a+=2,tmp));
t117=C_mutate((C_word*)lf[294]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3531,tmp=(C_word)a,a+=2,tmp));
t118=C_mutate((C_word*)lf[295]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3537,tmp=(C_word)a,a+=2,tmp));
t119=C_mutate((C_word*)lf[296]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3543,tmp=(C_word)a,a+=2,tmp));
t120=C_mutate((C_word*)lf[297]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3549,tmp=(C_word)a,a+=2,tmp));
t121=C_mutate((C_word*)lf[298]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3555,tmp=(C_word)a,a+=2,tmp));
t122=C_mutate((C_word*)lf[299]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3561,tmp=(C_word)a,a+=2,tmp));
t123=C_mutate((C_word*)lf[300]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3567,tmp=(C_word)a,a+=2,tmp));
t124=C_mutate((C_word*)lf[301]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3573,tmp=(C_word)a,a+=2,tmp));
t125=C_mutate((C_word*)lf[302]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3579,tmp=(C_word)a,a+=2,tmp));
t126=C_mutate((C_word*)lf[303]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3585,tmp=(C_word)a,a+=2,tmp));
t127=C_mutate((C_word*)lf[304]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3591,tmp=(C_word)a,a+=2,tmp));
t128=C_mutate((C_word*)lf[305]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3597,tmp=(C_word)a,a+=2,tmp));
t129=C_mutate((C_word*)lf[306]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3603,tmp=(C_word)a,a+=2,tmp));
t130=C_mutate((C_word*)lf[307]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3609,tmp=(C_word)a,a+=2,tmp));
t131=C_mutate((C_word*)lf[308]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3615,tmp=(C_word)a,a+=2,tmp));
t132=C_mutate((C_word*)lf[309]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3621,tmp=(C_word)a,a+=2,tmp));
t133=C_mutate((C_word*)lf[310]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3627,tmp=(C_word)a,a+=2,tmp));
t134=C_mutate((C_word*)lf[311]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3633,tmp=(C_word)a,a+=2,tmp));
t135=C_mutate((C_word*)lf[312]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3639,tmp=(C_word)a,a+=2,tmp));
t136=C_mutate((C_word*)lf[313]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3645,tmp=(C_word)a,a+=2,tmp));
t137=C_mutate((C_word*)lf[314]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3651,tmp=(C_word)a,a+=2,tmp));
t138=C_mutate((C_word*)lf[315]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3657,tmp=(C_word)a,a+=2,tmp));
t139=C_mutate((C_word*)lf[316]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3663,tmp=(C_word)a,a+=2,tmp));
t140=C_mutate((C_word*)lf[317]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3669,tmp=(C_word)a,a+=2,tmp));
t141=C_mutate((C_word*)lf[318]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3675,tmp=(C_word)a,a+=2,tmp));
t142=C_mutate((C_word*)lf[319]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3681,tmp=(C_word)a,a+=2,tmp));
t143=C_mutate((C_word*)lf[320]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3687,tmp=(C_word)a,a+=2,tmp));
t144=C_mutate((C_word*)lf[321]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3693,tmp=(C_word)a,a+=2,tmp));
t145=C_mutate((C_word*)lf[322]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3699,tmp=(C_word)a,a+=2,tmp));
t146=C_mutate((C_word*)lf[323]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3705,tmp=(C_word)a,a+=2,tmp));
t147=C_set_block_item(lf[324],0,C_fix(0));
t148=C_mutate((C_word*)lf[325]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3712,tmp=(C_word)a,a+=2,tmp));
t149=C_mutate((C_word*)lf[326]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3715,tmp=(C_word)a,a+=2,tmp));
t150=C_set_block_item(lf[327],0,C_fix(0));
t151=C_set_block_item(lf[328],0,C_fix(0));
t152=C_set_block_item(lf[329],0,C_fix(0));
t153=C_set_block_item(lf[330],0,C_fix(0));
t154=C_set_block_item(lf[331],0,C_fix(0));
t155=C_set_block_item(lf[332],0,C_fix(0));
t156=C_set_block_item(lf[333],0,C_fix(0));
t157=C_set_block_item(lf[334],0,C_fix(0));
t158=C_set_block_item(lf[335],0,C_fix(0));
t159=C_set_block_item(lf[336],0,C_fix(0));
t160=C_set_block_item(lf[337],0,C_fix(0));
t161=C_set_block_item(lf[338],0,C_fix(0));
t162=C_set_block_item(lf[339],0,C_fix(0));
t163=C_set_block_item(lf[340],0,C_fix(0));
t164=C_set_block_item(lf[341],0,C_fix(0));
t165=C_set_block_item(lf[342],0,C_fix(0));
t166=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t166+1)))(2,t166,C_SCHEME_UNDEFINED);}

/* memory-mapped-file? in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3715(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3715,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* fifo? in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3712(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3712,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* utc-time->seconds in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3705(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3705,2,t0,t1);}
/* posixwin.scm: 1794 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[323],lf[0]);}

/* user-information in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3699(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3699,2,t0,t1);}
/* posixwin.scm: 1793 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[322],lf[0]);}

/* unmap-file-from-memory in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3693(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3693,2,t0,t1);}
/* posixwin.scm: 1792 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[321],lf[0]);}

/* terminal-port? in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3687(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3687,2,t0,t1);}
/* posixwin.scm: 1791 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[320],lf[0]);}

/* terminal-name in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3681(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3681,2,t0,t1);}
/* posixwin.scm: 1790 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[319],lf[0]);}

/* signal-unmask! in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3675(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3675,2,t0,t1);}
/* posixwin.scm: 1789 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[318],lf[0]);}

/* signal-masked? in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3669(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3669,2,t0,t1);}
/* posixwin.scm: 1788 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[317],lf[0]);}

/* signal-mask! in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3663(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3663,2,t0,t1);}
/* posixwin.scm: 1787 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[316],lf[0]);}

/* signal-mask in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3657(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3657,2,t0,t1);}
/* posixwin.scm: 1786 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[315],lf[0]);}

/* set-user-id! in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3651(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3651,2,t0,t1);}
/* posixwin.scm: 1785 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[314],lf[0]);}

/* set-signal-mask! in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3645(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3645,2,t0,t1);}
/* posixwin.scm: 1784 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[313],lf[0]);}

/* set-root-directory! in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3639(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3639,2,t0,t1);}
/* posixwin.scm: 1783 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[312],lf[0]);}

/* set-process-group-id! in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3633(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3633,2,t0,t1);}
/* posixwin.scm: 1782 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[311],lf[0]);}

/* set-groups! in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3627(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3627,2,t0,t1);}
/* posixwin.scm: 1781 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[310],lf[0]);}

/* set-group-id! in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3621(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3621,2,t0,t1);}
/* posixwin.scm: 1780 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[309],lf[0]);}

/* set-alarm! in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3615(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3615,2,t0,t1);}
/* posixwin.scm: 1779 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[308],lf[0]);}

/* read-symbolic-link in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3609(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3609,2,t0,t1);}
/* posixwin.scm: 1778 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[307],lf[0]);}

/* process-signal in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3603(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3603,2,t0,t1);}
/* posixwin.scm: 1777 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[306],lf[0]);}

/* process-group-id in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3597(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3597,2,t0,t1);}
/* posixwin.scm: 1776 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[305],lf[0]);}

/* process-fork in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3591(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3591,2,t0,t1);}
/* posixwin.scm: 1775 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[304],lf[0]);}

/* parent-process-id in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3585(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3585,2,t0,t1);}
/* posixwin.scm: 1774 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[303],lf[0]);}

/* memory-mapped-file-pointer in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3579(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3579,2,t0,t1);}
/* posixwin.scm: 1773 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[302],lf[0]);}

/* local-timezone-abbreviation in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3573(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3573,2,t0,t1);}
/* posixwin.scm: 1772 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[301],lf[0]);}

/* initialize-groups in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3567(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3567,2,t0,t1);}
/* posixwin.scm: 1771 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[300],lf[0]);}

/* group-information in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3561(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3561,2,t0,t1);}
/* posixwin.scm: 1770 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[299],lf[0]);}

/* get-groups in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3555(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3555,2,t0,t1);}
/* posixwin.scm: 1769 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[298],lf[0]);}

/* file-unlock in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3549(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3549,2,t0,t1);}
/* posixwin.scm: 1768 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[297],lf[0]);}

/* file-truncate in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3543(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3543,2,t0,t1);}
/* posixwin.scm: 1767 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[296],lf[0]);}

/* file-test-lock in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3537(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3537,2,t0,t1);}
/* posixwin.scm: 1766 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[295],lf[0]);}

/* file-select in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3531(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3531,2,t0,t1);}
/* posixwin.scm: 1765 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[294],lf[0]);}

/* file-lock/blocking in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3525(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3525,2,t0,t1);}
/* posixwin.scm: 1764 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[293],lf[0]);}

/* file-lock in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3519(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3519,2,t0,t1);}
/* posixwin.scm: 1763 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[292],lf[0]);}

/* file-link in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3513(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3513,2,t0,t1);}
/* posixwin.scm: 1762 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[291],lf[0]);}

/* map-file-to-memory in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3507(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3507,2,t0,t1);}
/* posixwin.scm: 1761 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[290],lf[0]);}

/* current-user-id in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3501(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3501,2,t0,t1);}
/* posixwin.scm: 1760 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[289],lf[0]);}

/* current-group-id in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3495(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3495,2,t0,t1);}
/* posixwin.scm: 1759 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[288],lf[0]);}

/* current-effective-user-id in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3489(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3489,2,t0,t1);}
/* posixwin.scm: 1758 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[287],lf[0]);}

/* current-effective-group-id in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3483(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3483,2,t0,t1);}
/* posixwin.scm: 1757 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[286],lf[0]);}

/* create-symbolic-link in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3477(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3477,2,t0,t1);}
/* posixwin.scm: 1756 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[285],lf[0]);}

/* create-session in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3471(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3471,2,t0,t1);}
/* posixwin.scm: 1755 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[284],lf[0]);}

/* create-fifo in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3465(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3465,2,t0,t1);}
/* posixwin.scm: 1754 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[283],lf[0]);}

/* change-file-owner in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3459(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3459,2,t0,t1);}
/* posixwin.scm: 1753 error */
t2=*((C_word*)lf[282]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[281],lf[0]);}

/* find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_3239r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3239r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3239r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3241,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3383,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3388,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3393,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-action601634 */
t9=t8;
f_3393(t9,t1);}
else{
t9=(C_word)C_u_i_car(t4);
t10=(C_word)C_slot(t4,C_fix(1));
if(C_truep((C_word)C_i_nullp(t10))){
/* def-id602632 */
t11=t7;
f_3388(t11,t1,t9);}
else{
t11=(C_word)C_u_i_car(t10);
t12=(C_word)C_slot(t10,C_fix(1));
if(C_truep((C_word)C_i_nullp(t12))){
/* def-limit603629 */
t13=t6;
f_3383(t13,t1,t9,t11);}
else{
t13=(C_word)C_u_i_car(t12);
t14=(C_word)C_slot(t12,C_fix(1));
/* body599605 */
t15=t5;
f_3241(t15,t1,t9,t11,t13);}}}}

/* def-action601 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_3393(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3393,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3399,tmp=(C_word)a,a+=2,tmp);
/* def-id602632 */
t3=((C_word*)t0)[2];
f_3388(t3,t1,t2);}

/* a3398 in def-action601 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3399(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3399,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t2,t3));}

/* def-id602 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_3388(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3388,NULL,3,t0,t1,t2);}
/* def-limit603629 */
t3=((C_word*)t0)[2];
f_3383(t3,t1,t2,C_SCHEME_END_OF_LIST);}

/* def-limit603 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_3383(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3383,NULL,4,t0,t1,t2,t3);}
/* body599605 */
t4=((C_word*)t0)[2];
f_3241(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_3241(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3241,NULL,5,t0,t1,t2,t3,t4);}
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3245,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t6,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t8=t4;
if(C_truep(t8)){
t9=(C_word)C_fixnump(t4);
t10=t7;
f_3245(t10,(C_truep(t9)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3378,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp):t4));}
else{
t9=t7;
f_3245(t9,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3370,tmp=(C_word)a,a+=2,tmp));}}

/* f_3370 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3370(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3370,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_3378 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3378(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3378,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]));}

/* k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_3245(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3245,NULL,2,t0,t1);}
t2=(C_word)C_i_stringp(((C_word*)t0)[11]);
t3=(C_truep(t2)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3362,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp):((C_word*)t0)[11]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3255,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3358,a[2]=t4,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1731 make-pathname */
t6=((C_word*)t0)[7];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[2],lf[280]);}

/* k3356 in k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1731 glob */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3253 in k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3255,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3257,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t3,tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_3257(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* loop in k3253 in k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_3257(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3257,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3276,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=t5,a[11]=t1,a[12]=((C_word*)t0)[9],tmp=(C_word)a,a+=13,tmp);
/* posixwin.scm: 1737 directory? */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}}

/* k3274 in loop in k3253 in k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3276,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3338,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm: 1738 pathname-file */
t3=*((C_word*)lf[279]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3344,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm: 1744 pproc */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}}

/* k3342 in k3274 in loop in k3253 in k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3344,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3351,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1744 action */
t3=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* posixwin.scm: 1745 loop */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3257(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k3349 in k3342 in k3274 in loop in k3253 in k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1744 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3257(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3336 in k3274 in loop in k3253 in k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3338,2,t0,t1);}
if(C_truep((C_truep((C_word)C_i_equalp(t1,lf[274]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t1,lf[275]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posixwin.scm: 1738 loop */
t2=((C_word*)((C_word*)t0)[10])[1];
f_3257(t2,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3291,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* posixwin.scm: 1739 lproc */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}

/* k3289 in k3336 in k3274 in loop in k3253 in k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3291,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_plus(((C_word*)((C_word*)t0)[9])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3301,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3303,a[2]=t4,a[3]=((C_word*)t0)[9],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3311,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3325,a[2]=t6,a[3]=((C_word*)t0)[9],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1741 ##sys#dynamic-wind */
t11=*((C_word*)lf[278]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t7,t8,t9,t10);}
else{
/* posixwin.scm: 1743 loop */
t2=((C_word*)((C_word*)t0)[8])[1];
f_3257(t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}}

/* a3324 in k3289 in k3336 in k3274 in loop in k3253 in k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3325(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3325,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[276]+1));}

/* a3310 in k3289 in k3336 in k3274 in loop in k3253 in k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3319,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3323,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1742 make-pathname */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],lf[277]);}

/* k3321 in a3310 in k3289 in k3336 in k3274 in loop in k3253 in k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1742 glob */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3317 in a3310 in k3289 in k3336 in k3274 in loop in k3253 in k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1742 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3257(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a3302 in k3289 in k3336 in k3274 in loop in k3253 in k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3303,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[276]+1));}

/* k3299 in k3289 in k3336 in k3274 in loop in k3253 in k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1740 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3257(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_3362 in k3243 in body599 in find-files in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3362(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3362,3,t0,t1,t2);}
/* posixwin.scm: 1729 string-match */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[2],t2);}

/* system-information in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3208,2,t0,t1);}
if(C_truep((C_word)C_sysinfo())){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3219,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3234,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1706 ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3232 in system-information in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1707 ##sys#error */
t2=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[270],lf[272]);}

/* k3217 in system-information in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3219,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3223,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_osrel),C_fix(0));}

/* k3221 in k3217 in system-information in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3223,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3227,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_osver),C_fix(0));}

/* k3225 in k3221 in k3217 in system-information in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3227,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3231,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_processor),C_fix(0));}

/* k3229 in k3225 in k3221 in k3217 in system-information in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3231,2,t0,t1);}
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,5,lf[271],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* get-host-name in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3196,2,t0,t1);}
if(C_truep((C_word)C_get_hostname())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
/* posixwin.scm: 1699 ##sys#error */
t2=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[268],lf[269]);}}

/* sleep in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3193(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3193,3,t0,t1,t2);}
t3=(C_word)C_sleep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(0));}

/* process-wait in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3139(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3139r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3139r(t0,t1,t2,t3);}}

static void C_ccall f_3139r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(7);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:(C_word)C_u_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t3,C_fix(1)));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3154,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3160,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1678 ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t8,t9);}

/* a3159 in process-wait in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3160(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3160,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3170,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1681 ##sys#update-errno */
t7=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
/* posixwin.scm: 1683 values */
C_values(5,0,t1,t2,t3,t4);}}

/* k3168 in a3159 in process-wait in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1682 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[255],lf[265],lf[266],((C_word*)t0)[2]);}

/* a3153 in process-wait in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3154,2,t0,t1);}
/* posixwin.scm: 1678 ##sys#process-wait */
t2=*((C_word*)lf[264]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#process-wait in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3127,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_process_wait(t2,t3))){
/* posixwin.scm: 1671 values */
C_values(5,0,t1,t2,C_SCHEME_TRUE,C_fix((C_word)C_exstatus));}
else{
/* posixwin.scm: 1672 values */
C_values(5,0,t1,C_fix(-1),C_SCHEME_FALSE,C_SCHEME_FALSE);}}

/* process* in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3070(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3070r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3070r(t0,t1,t2,t3);}}

static void C_ccall f_3070r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(10);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3072,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3077,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3082,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-args559567 */
t7=t6;
f_3082(t7,t1);}
else{
t7=(C_word)C_u_i_car(t3);
t8=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t8))){
/* def-env560565 */
t9=t5;
f_3077(t9,t1,t7);}
else{
t9=(C_word)C_u_i_car(t8);
t10=(C_word)C_slot(t8,C_fix(1));
/* body557562 */
t11=t4;
f_3072(t11,t1,t7,t9);}}}

/* def-args559 in process* in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_3082(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3082,NULL,2,t0,t1);}
/* def-env560565 */
t2=((C_word*)t0)[2];
f_3077(t2,t1,C_SCHEME_FALSE);}

/* def-env560 in process* in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_3077(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3077,NULL,3,t0,t1,t2);}
/* body557562 */
t3=((C_word*)t0)[2];
f_3072(t3,t1,t2,C_SCHEME_FALSE);}

/* body557 in process* in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_3072(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3072,NULL,4,t0,t1,t2,t3);}
/* posixwin.scm: 1665 %process */
f_2957(t1,lf[263],C_SCHEME_TRUE,((C_word*)t0)[2],t2,t3);}

/* process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3013(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3013r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3013r(t0,t1,t2,t3);}}

static void C_ccall f_3013r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(10);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3015,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3020,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3025,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-args539547 */
t7=t6;
f_3025(t7,t1);}
else{
t7=(C_word)C_u_i_car(t3);
t8=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t8))){
/* def-env540545 */
t9=t5;
f_3020(t9,t1,t7);}
else{
t9=(C_word)C_u_i_car(t8);
t10=(C_word)C_slot(t8,C_fix(1));
/* body537542 */
t11=t4;
f_3015(t11,t1,t7,t9);}}}

/* def-args539 in process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_3025(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3025,NULL,2,t0,t1);}
/* def-env540545 */
t2=((C_word*)t0)[2];
f_3020(t2,t1,C_SCHEME_FALSE);}

/* def-env540 in process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_3020(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3020,NULL,3,t0,t1,t2);}
/* body537542 */
t3=((C_word*)t0)[2];
f_3015(t3,t1,t2,C_SCHEME_FALSE);}

/* body537 in process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_3015(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3015,NULL,4,t0,t1,t2,t3);}
/* posixwin.scm: 1662 %process */
f_2957(t1,lf[262],C_SCHEME_FALSE,((C_word*)t0)[2],t2,t3);}

/* %process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_2957(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2957,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2961,a[2]=t1,a[3]=t3,a[4]=t6,a[5]=t8,a[6]=t7,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t8)[1])){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2999,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* for-each */
t11=*((C_word*)lf[261]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,((C_word*)t8)[1]);}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3007,a[2]=t9,a[3]=t7,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1650 ##sys#shell-command-arguments */
t11=*((C_word*)lf[249]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,((C_word*)t7)[1]);}}

/* k3005 in %process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3007,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3011,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1651 ##sys#shell-command */
t4=*((C_word*)lf[248]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3009 in k3005 in %process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_3011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2961(2,t3,t2);}

/* a2998 in %process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2999(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2999,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_check_string_2(t2,((C_word*)t0)[2]));}

/* k2959 in %process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2961,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2964,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2990,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[261]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}
else{
t3=t2;
f_2964(2,t3,C_SCHEME_UNDEFINED);}}

/* a2989 in k2959 in %process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2990(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2990,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_check_string_2(t2,((C_word*)t0)[2]));}

/* k2962 in k2959 in %process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2964,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2969,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2975,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1655 ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2974 in k2962 in k2959 in %process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2975(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_2975,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(((C_word*)t0)[2])){
/* posixwin.scm: 1658 values */
C_values(6,0,t1,t2,t3,t4,t5);}
else{
/* posixwin.scm: 1659 values */
C_values(5,0,t1,t2,t3,t4);}}

/* a2968 in k2962 in k2959 in %process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2969,2,t0,t1);}
/* posixwin.scm: 1656 ##sys#process */
t2=*((C_word*)lf[254]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,t1,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* ##sys#process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2854(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_2854,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2858,a[2]=t2,a[3]=t6,a[4]=t7,a[5]=t8,a[6]=t1,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2934,a[2]=t11,tmp=(C_word)a,a+=3,tmp));
t13=((C_word*)t11)[1];
f_2934(t13,t9,t4,t3);}
else{
t10=t9;
f_2858(2,t10,t3);}}

/* loop in ##sys#process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_2934(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2934,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2952,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_u_i_car(t2);
/* posixwin.scm: 1622 conc */
t7=*((C_word*)lf[259]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,t3,lf[260],t6);}}

/* k2950 in loop in ##sys#process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1622 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2934(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2856 in ##sys#process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2858,2,t0,t1);}
t2=(C_word)C_a_i_bytevector(&a,1,C_fix(1));
t3=((*(int *)C_data_pointer(t2))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(1));
t5=((*(int *)C_data_pointer(t4))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t6=(C_word)C_a_i_bytevector(&a,1,C_fix(1));
t7=((*(int *)C_data_pointer(t6))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t8=(C_word)C_a_i_bytevector(&a,1,C_fix(1));
t9=((*(int *)C_data_pointer(t8))=C_unfix(C_fix(-1)),C_SCHEME_UNDEFINED);
t10=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_2901,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=t8,a[8]=((C_word*)t0)[5],a[9]=t2,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
/* ##sys#make-locative */
t11=*((C_word*)lf[257]+1);
((C_proc6)(void*)(*((C_word*)t11+1)))(6,t11,t10,t2,C_fix(0),C_SCHEME_FALSE,lf[258]);}

/* k2899 in k2856 in ##sys#process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2905,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* ##sys#make-locative */
t3=*((C_word*)lf[257]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[5],C_fix(0),C_SCHEME_FALSE,lf[258]);}

/* k2903 in k2899 in k2856 in ##sys#process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2905,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2909,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* ##sys#make-locative */
t3=*((C_word*)lf[257]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[3],C_fix(0),C_SCHEME_FALSE,lf[258]);}

/* k2907 in k2903 in k2899 in k2856 in ##sys#process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2909,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_2913,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* ##sys#make-locative */
t3=*((C_word*)lf[257]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[7],C_fix(0),C_SCHEME_FALSE,lf[258]);}

/* k2911 in k2907 in k2903 in k2899 in k2856 in ##sys#process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2917,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t3=(C_truep(((C_word*)t0)[6])?C_fix(0):C_fix(1));
t4=(C_truep(((C_word*)t0)[4])?C_fix(0):C_fix(2));
t5=(C_truep(((C_word*)t0)[8])?C_fix(0):C_fix(4));
/* posixwin.scm: 1629 + */
C_plus(5,0,t2,t3,t4,t5);}

/* k2915 in k2911 in k2907 in k2903 in k2899 in k2856 in ##sys#process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2917,2,t0,t1);}
t2=((C_word*)t0)[16];
t3=((C_word*)t0)[15];
t4=((C_word*)t0)[14];
t5=((C_word*)t0)[13];
t6=((C_word*)t0)[12];
t7=((C_word*)t0)[11];
t8=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_2815,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=t1,a[13]=t7,a[14]=t6,a[15]=t5,a[16]=t4,a[17]=t3,tmp=(C_word)a,a+=18,tmp);
if(C_truep(t2)){
/* ##sys#make-c-string */
t9=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}
else{
t9=t8;
f_2815(2,t9,C_SCHEME_FALSE);}}

/* k2813 in k2915 in k2911 in k2907 in k2903 in k2899 in k2856 in ##sys#process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2815,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[17])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[17]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[16])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[16]):C_SCHEME_FALSE);
t4=(C_truep(((C_word*)t0)[15])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[15]):C_SCHEME_FALSE);
t5=(C_truep(((C_word*)t0)[14])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[14]):C_SCHEME_FALSE);
t6=(C_truep(((C_word*)t0)[13])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[13]):C_SCHEME_FALSE);
t7=(C_word)stub456(C_SCHEME_UNDEFINED,t1,t2,t3,t4,t5,t6,((C_word*)t0)[12]);
t8=(C_word)C_eqp(C_fix(0),t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2874,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixwin.scm: 1632 open-input-file* */
t10=*((C_word*)lf[198]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[4]))));}
else{
t10=t9;
f_2874(2,t10,C_SCHEME_FALSE);}}
else{
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2894,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1637 ##sys#update-errno */
t10=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}}

/* k2892 in k2813 in k2915 in k2911 in k2907 in k2903 in k2899 in k2856 in ##sys#process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1638 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[255],((C_word*)t0)[3],lf[256],((C_word*)t0)[2]);}

/* k2872 in k2813 in k2915 in k2911 in k2907 in k2903 in k2899 in k2856 in ##sys#process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2874,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2878,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm: 1633 open-output-file* */
t3=*((C_word*)lf[199]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))));}
else{
t3=t2;
f_2878(2,t3,C_SCHEME_FALSE);}}

/* k2876 in k2872 in k2813 in k2915 in k2911 in k2907 in k2903 in k2899 in k2856 in ##sys#process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2878,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2882,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm: 1635 open-input-file* */
t3=*((C_word*)lf[198]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))));}
else{
t3=t2;
f_2882(2,t3,C_SCHEME_FALSE);}}

/* k2880 in k2876 in k2872 in k2813 in k2915 in k2911 in k2907 in k2903 in k2899 in k2856 in ##sys#process in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1631 values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))),t1);}

/* close-handle in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2807(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2807,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub445(C_SCHEME_UNDEFINED,t2));}

/* process-run in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2778(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2778r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2778r(t0,t1,t2,t3);}}

static void C_ccall f_2778r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_slot(t3,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t5)){
/* posixwin.scm: 1597 process-spawn */
t6=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,*((C_word*)lf[239]+1),t2,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2795,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1598 ##sys#shell-command */
t7=*((C_word*)lf[248]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}

/* k2793 in process-run in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2795,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2799,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1598 ##sys#shell-command-arguments */
t3=*((C_word*)lf[249]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2797 in k2793 in process-run in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1598 process-spawn */
t2=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],*((C_word*)lf[239]+1),((C_word*)t0)[2],t1);}

/* ##sys#shell-command-arguments in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2772(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2772,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[250],t2));}

/* ##sys#shell-command in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2766(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2766,2,t0,t1);}
t2=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,(C_word)stub435(t2),C_fix(0));}

/* current-process-id in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2763,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub433(C_SCHEME_UNDEFINED));}

/* process-spawn in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2682(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2682r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2682r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2682r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(7);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_slot(t4,C_fix(0)):C_SCHEME_END_OF_LIST);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2689,a[2]=t6,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm: 1552 pathname-strip-directory */
t8=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}

/* k2687 in process-spawn in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2689,2,t0,t1);}
t2=(C_word)C_block_size(t1);
t3=f_2674(C_fix(0),t1,t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2697,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2697(t7,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(1));}

/* do420 in k2687 in process-spawn in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_2697(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2697,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=f_2674(t3,C_SCHEME_FALSE,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2711,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2730,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1559 ##sys#expand-home-path */
t7=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[3]);}
else{
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_block_size(t4);
t6=f_2674(t3,t4,t5);
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_u_fixnum_plus(t3,C_fix(1));
t13=t1;
t14=t7;
t15=t8;
t1=t13;
t2=t14;
t3=t15;
goto loop;}}

/* k2728 in do420 in k2687 in process-spawn in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1559 ##sys#make-c-string */
t2=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2709 in do420 in k2687 in process-spawn in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2711,2,t0,t1);}
t2=(C_word)C_spawnvp(((C_word*)t0)[4],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2714,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1560 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2712 in k2709 in do420 in k2687 in process-spawn in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2714,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2717,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[3],C_fix(-1));
if(C_truep(t3)){
t4=(C_word)stub413(C_SCHEME_UNDEFINED);
/* posixwin.scm: 1563 ##sys#error */
t5=*((C_word*)lf[94]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[245],lf[246],((C_word*)t0)[2]);}
else{
t4=t2;
f_2717(2,t4,C_SCHEME_UNDEFINED);}}

/* k2715 in k2712 in k2709 in do420 in k2687 in process-spawn in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* setarg in k1898 in k933 in k930 in k927 in k924 in k921 */
static C_word C_fcall f_2674(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
t4=(C_truep(t2)?t2:C_SCHEME_FALSE);
return((C_word)stub406(C_SCHEME_UNDEFINED,t1,t4,t3));}

/* process-execute in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2542(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_2542r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2542r(t0,t1,t2,t3);}}

static void C_ccall f_2542r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(11);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2624,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2629,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-arglist373395 */
t7=t6;
f_2629(t7,t1);}
else{
t7=(C_word)C_u_i_car(t3);
t8=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t8))){
/* def-envlist374393 */
t9=t5;
f_2624(t9,t1,t7);}
else{
t9=(C_word)C_u_i_car(t8);
t10=(C_word)C_slot(t8,C_fix(1));
/* body371376 */
t11=t4;
f_2544(t11,t1,t7);}}}

/* def-arglist373 in process-execute in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_2629(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2629,NULL,2,t0,t1);}
/* def-envlist374393 */
t2=((C_word*)t0)[2];
f_2624(t2,t1,C_SCHEME_END_OF_LIST);}

/* def-envlist374 in process-execute in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_2624(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2624,NULL,3,t0,t1,t2);}
/* body371376 */
t3=((C_word*)t0)[2];
f_2544(t3,t1,t2);}

/* body371 in process-execute in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_2544(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2544,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_pairp(t2);
t4=(C_truep(t3)?(C_word)C_u_i_car(t2):C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2551,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1528 pathname-strip-directory */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[3]);}

/* k2549 in body371 in process-execute in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2551,2,t0,t1);}
t2=(C_word)C_block_size(t1);
t3=f_2534(C_fix(0),t1,t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2559,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_2559(t7,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(1));}

/* do381 in k2549 in body371 in process-execute in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_2559(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word t15;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2559,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=f_2534(t3,C_SCHEME_FALSE,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2573,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2592,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1534 ##sys#expand-home-path */
t7=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[3]);}
else{
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_block_size(t4);
t6=f_2534(t3,t4,t5);
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_u_fixnum_plus(t3,C_fix(1));
t13=t1;
t14=t7;
t15=t8;
t1=t13;
t2=t14;
t3=t15;
goto loop;}}

/* k2590 in do381 in k2549 in body371 in process-execute in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1534 ##sys#make-c-string */
t2=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2571 in do381 in k2549 in body371 in process-execute in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2573,2,t0,t1);}
t2=(C_word)C_execvp(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1535 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2574 in k2571 in do381 in k2549 in body371 in process-execute in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[4],C_fix(-1));
if(C_truep(t2)){
t3=(C_word)stub364(C_SCHEME_UNDEFINED);
/* posixwin.scm: 1538 ##sys#error */
t4=*((C_word*)lf[94]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],lf[243],lf[244],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* setarg in k1898 in k933 in k930 in k927 in k924 in k921 */
static C_word C_fcall f_2534(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
t4=(C_truep(t2)?t2:C_SCHEME_FALSE);
return((C_word)stub357(C_SCHEME_UNDEFINED,t1,t4,t3));}

/* glob in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2425(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_2425r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2425r(t0,t1,t2);}}

static void C_ccall f_2425r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2431,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2431(t6,t1,t2);}

/* conc in glob in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_2431(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2431,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2446,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2452,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}}

/* a2451 in conc in glob in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2452(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2452,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2456,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2523,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(C_truep(t3)?t3:lf[236]);
/* posixwin.scm: 1498 make-pathname */
t8=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t6,C_SCHEME_FALSE,t7,t4);}

/* k2521 in a2451 in conc in glob in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1498 glob->regexp */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2454 in a2451 in conc in glob in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2463,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[4]:lf[235]);
/* posixwin.scm: 1499 directory */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k2461 in k2454 in a2451 in conc in glob in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2463,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2465,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2465(t5,((C_word*)t0)[2],t1);}

/* loop in k2461 in k2454 in a2451 in conc in glob in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_2465(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2465,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
/* posixwin.scm: 1500 conc */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2431(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2482,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_u_i_car(t2);
/* posixwin.scm: 1501 string-match */
t5=*((C_word*)lf[234]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[2],t4);}}

/* k2480 in loop in k2461 in k2454 in a2451 in conc in glob in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2482,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2492,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_u_i_car(t1);
/* posixwin.scm: 1502 make-pathname */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}
else{
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* posixwin.scm: 1503 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2465(t3,((C_word*)t0)[6],t2);}}

/* k2490 in k2480 in loop in k2461 in k2454 in a2451 in conc in glob in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2492,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2496,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm: 1502 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2465(t4,t2,t3);}

/* k2494 in k2490 in k2480 in loop in k2461 in k2454 in a2451 in conc in glob in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2496,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a2445 in conc in glob in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2446,2,t0,t1);}
/* posixwin.scm: 1497 decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* set-buffering-mode! in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2372(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2372r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2372r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2372r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(5);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_slot(t4,C_fix(0)):C_fix((C_word)BUFSIZ));
t7=t3;
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2379,a[2]=t1,a[3]=t6,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_eqp(t7,lf[226]);
if(C_truep(t9)){
t10=t8;
f_2379(2,t10,C_fix((C_word)_IOFBF));}
else{
t10=(C_word)C_eqp(t7,lf[227]);
if(C_truep(t10)){
t11=t8;
f_2379(2,t11,C_fix((C_word)_IOLBF));}
else{
t11=(C_word)C_eqp(t7,lf[228]);
if(C_truep(t11)){
t12=t8;
f_2379(2,t12,C_fix((C_word)_IONBF));}
else{
/* posixwin.scm: 1477 ##sys#error */
t12=*((C_word*)lf[94]+1);
((C_proc6)(void*)(*((C_word*)t12+1)))(6,t12,t8,lf[224],lf[229],t3,t2);}}}}

/* k2377 in set-buffering-mode! in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(7));
t3=(C_word)C_eqp(lf[72],t2);
t4=(C_truep(t3)?(C_word)C_setvbuf(((C_word*)t0)[4],t1,((C_word*)t0)[3]):C_fix(-1));
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
/* posixwin.scm: 1483 ##sys#error */
t5=*((C_word*)lf[94]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,((C_word*)t0)[2],lf[224],lf[225],((C_word*)t0)[4],t1,((C_word*)t0)[3]);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* _exit in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2353(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2rv,(void*)f_2353r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_2353r(t0,t1,t2);}}

static void C_ccall f_2353r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2357,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1461 ##sys#cleanup-before-exit */
t4=*((C_word*)lf[223]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2355 in _exit in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_notvemptyp(((C_word*)t0)[3]);
t3=(C_truep(t2)?(C_word)C_slot(((C_word*)t0)[3],C_fix(0)):C_fix(0));
t4=((C_word*)t0)[2];
t5=t4;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub310(C_SCHEME_UNDEFINED,t3));}

/* local-time->seconds in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2323(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2323,3,t0,t1,t2);}
t3=(C_word)C_i_check_vector_2(t2,lf[218]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2330,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(10)))){
/* posixwin.scm: 1449 ##sys#error */
t6=*((C_word*)lf[94]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[218],lf[221],t2);}
else{
t6=t4;
f_2330(2,t6,C_SCHEME_UNDEFINED);}}

/* k2328 in local-time->seconds in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_mktime(((C_word*)t0)[3]))){
/* posixwin.scm: 1451 ##sys#cons-flonum */
t2=*((C_word*)lf[219]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
/* posixwin.scm: 1452 ##sys#error */
t2=*((C_word*)lf[94]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[218],lf[220],((C_word*)t0)[3]);}}

/* time->string in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2295(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2295,3,t0,t1,t2);}
t3=(C_word)C_i_check_vector_2(t2,lf[215]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2302,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(10)))){
/* posixwin.scm: 1442 ##sys#error */
t6=*((C_word*)lf[94]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[215],lf[217],t2);}
else{
t6=t4;
f_2302(2,t6,C_SCHEME_UNDEFINED);}}

/* k2300 in time->string in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2302,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2305,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,(C_word)stub296(t4,t3),C_fix(0));}

/* k2303 in k2300 in time->string in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2308,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_2308(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 1444 ##sys#error */
t3=*((C_word*)lf[94]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[215],lf[216],((C_word*)t0)[2]);}}

/* k2306 in k2303 in k2300 in time->string in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* seconds->string in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2278(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2278,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2282,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,(C_word)stub287(t5,t4),C_fix(0));}

/* k2280 in seconds->string in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2282,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2285,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_2285(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 1435 ##sys#error */
t3=*((C_word*)lf[94]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[213],lf[214],((C_word*)t0)[2]);}}

/* k2283 in k2280 in seconds->string in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* seconds->utc-time in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2267(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2267,3,t0,t1,t2);}
/* posixwin.scm: 1429 ##sys#decode-seconds */
t3=*((C_word*)lf[211]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_SCHEME_TRUE);}

/* seconds->local-time in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2261(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2261,3,t0,t1,t2);}
/* posixwin.scm: 1425 ##sys#decode-seconds */
t3=*((C_word*)lf[211]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_SCHEME_FALSE);}

/* current-environment in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2196,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2202,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2202(t5,t1,C_fix(0));}

/* loop in current-environment in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_2202(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2202,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2206,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,(C_word)stub272(t5,t4),C_fix(0));}

/* k2204 in loop in current-environment in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2206,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2214,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2214(t5,((C_word*)t0)[2],C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* scan in k2204 in loop in current-environment in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_2214(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2214,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(C_make_character(61),(C_word)C_subchar(((C_word*)t0)[6],t2));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2240,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm: 1417 substring */
t5=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[6],C_fix(0),t2);}
else{
t4=(C_word)C_u_fixnum_plus(t2,C_fix(1));
/* posixwin.scm: 1418 scan */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}

/* k2238 in scan in k2204 in loop in current-environment in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2240,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2244,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=(C_word)C_block_size(((C_word*)t0)[3]);
/* posixwin.scm: 1417 substring */
t5=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,((C_word*)t0)[3],t3,t4);}

/* k2242 in k2238 in scan in k2204 in loop in current-environment in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2244,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2232,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm: 1417 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2202(t5,t3,t4);}

/* k2230 in k2242 in k2238 in scan in k2204 in loop in current-environment in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2232,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* unsetenv in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2184(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2184,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2189,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1405 ##sys#make-c-string */
t4=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2187 in unsetenv in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_putenv(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* setenv in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2173,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2178,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1400 ##sys#make-c-string */
t5=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2176 in setenv in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2178,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2182,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1400 ##sys#make-c-string */
t3=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2180 in k2176 in setenv in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_setenv(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* duplicate-fileno in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2149(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2149r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2149r(t0,t1,t2,t3);}}

static void C_ccall f_2149r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2153,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_vemptyp(t3))){
t5=t4;
f_2153(t5,(C_word)C_dup(t2));}
else{
t5=(C_word)C_slot(t3,C_fix(0));
t6=t4;
f_2153(t6,(C_word)C_dup2(t2,t5));}}

/* k2151 in duplicate-fileno in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_2153(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2153,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2156,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2162,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1390 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_2156(2,t3,C_SCHEME_UNDEFINED);}}

/* k2160 in k2151 in duplicate-fileno in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1391 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[36],lf[204],lf[205],((C_word*)t0)[2]);}

/* k2154 in k2151 in duplicate-fileno in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* port->fileno in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2117(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2117,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2147,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1373 ##sys#peek-unsigned-integer */
t4=*((C_word*)lf[203]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_fix(0));}

/* k2145 in port->fileno in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2147,2,t0,t1);}
if(C_truep((C_word)C_i_zerop(t1))){
/* posixwin.scm: 1379 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[45],lf[200],lf[201],((C_word*)t0)[2]);}
else{
t2=(C_word)C_C_fileno(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2127,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2133,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1376 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_2127(2,t4,C_SCHEME_UNDEFINED);}}}

/* k2131 in k2145 in port->fileno in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1377 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[36],lf[200],lf[202],((C_word*)t0)[2]);}

/* k2125 in k2145 in port->fileno in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* open-output-file* in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2106(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2106r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2106r(t0,t1,t2,t3);}}

static void C_ccall f_2106r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2115,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1368 mode */
f_2040(t4,C_SCHEME_FALSE,t3);}

/* k2113 in open-output-file* in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2115,2,t0,t1);}
t2=(C_word)C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixwin.scm: 1368 check */
f_2077(((C_word*)t0)[2],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* open-input-file* in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2095(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2095r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2095r(t0,t1,t2,t3);}}

static void C_ccall f_2095r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2104,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1364 mode */
f_2040(t4,C_SCHEME_TRUE,t3);}

/* k2102 in open-input-file* in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2104,2,t0,t1);}
t2=(C_word)C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixwin.scm: 1364 check */
f_2077(((C_word*)t0)[2],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* check in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_2077(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2077,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2081,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1355 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k2079 in check in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2081,2,t0,t1);}
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[5]))){
/* posixwin.scm: 1357 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[36],lf[196],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2093,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1358 ##sys#make-port */
t3=*((C_word*)lf[97]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[2],*((C_word*)lf[98]+1),lf[197],lf[72]);}}

/* k2091 in k2079 in check in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2093(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* mode in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_2040(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2040,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2048,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_u_i_car(t3);
t6=(C_word)C_eqp(t5,lf[190]);
if(C_truep(t6)){
t7=t2;
if(C_truep(t7)){
/* posixwin.scm: 1350 ##sys#error */
t8=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,lf[191],t5);}
else{
t8=t4;
f_2048(2,t8,lf[192]);}}
else{
/* posixwin.scm: 1351 ##sys#error */
t7=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,lf[193],t5);}}
else{
t5=t4;
f_2048(2,t5,(C_truep(t2)?lf[194]:lf[195]));}}

/* k2046 in mode in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1346 ##sys#make-c-string */
t2=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* file-execute-access? in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2031(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2031,3,t0,t1,t2);}
/* posixwin.scm: 1330 check */
f_1998(t1,t2,C_fix((C_word)2));}

/* file-write-access? in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2025(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2025,3,t0,t1,t2);}
/* posixwin.scm: 1329 check */
f_1998(t1,t2,C_fix((C_word)4));}

/* file-read-access? in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2019(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2019,3,t0,t1,t2);}
/* posixwin.scm: 1328 check */
f_1998(t1,t2,C_fix((C_word)2));}

/* check in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_1998(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1998,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2013,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2017,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1325 ##sys#expand-home-path */
t6=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k2015 in check in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1325 ##sys#make-c-string */
t2=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2011 in check in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2013,2,t0,t1);}
t2=(C_word)C_access(t1,((C_word*)t0)[3]);
t3=(C_word)C_eqp(C_fix(0),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2005,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_2005(2,t5,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 1326 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2003 in k2011 in check in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_2005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* change-file-mode in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1974(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1974,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1992,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1996,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1314 ##sys#expand-home-path */
t6=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k1994 in change-file-mode in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1314 ##sys#make-c-string */
t2=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1990 in change-file-mode in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1992,2,t0,t1);}
t2=(C_word)C_chmod(t1,((C_word*)t0)[4]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1984,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1315 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k1982 in k1990 in change-file-mode in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1316 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[36],lf[182],lf[183],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#interrupt-hook in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1918,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1928,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1222 h */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
/* posixwin.scm: 1224 oldhook */
t5=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t3);}}

/* k1926 in ##sys#interrupt-hook in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1223 ##sys#context-switch */
C_context_switch(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set-signal-handler! in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1908(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1908,4,t0,t1,t2,t3);}
t4=(C_truep(t3)?t2:C_SCHEME_FALSE);
t5=(C_word)C_establish_signal_handler(t2,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_setslot(((C_word*)t0)[2],t2,t3));}

/* signal-handler in k1898 in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1902(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1902,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(((C_word*)t0)[2],t2));}

/* create-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1851,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1855,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_pipe(C_SCHEME_FALSE),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1864,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1159 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_1855(2,t3,C_SCHEME_UNDEFINED);}}

/* k1862 in create-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1160 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[36],lf[112],lf[113]);}

/* k1853 in create-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1161 values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}

/* with-output-to-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1831(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_1831r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1831r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1831r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[111]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1835,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k1833 in with-output-to-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1835,2,t0,t1);}
t2=C_mutate((C_word*)lf[111]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1841,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1144 ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a1840 in k1833 in with-output-to-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1841(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_1841r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1841r(t0,t1,t2);}}

static void C_ccall f_1841r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1845,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1146 close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k1843 in a1840 in k1833 in with-output-to-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[111]+1,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* with-input-from-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1811(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_1811r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1811r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1811r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[109]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1815,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k1813 in with-input-from-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1815,2,t0,t1);}
t2=C_mutate((C_word*)lf[109]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1821,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1134 ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a1820 in k1813 in with-input-from-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1821(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_1821r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1821r(t0,t1,t2);}}

static void C_ccall f_1821r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1825,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1136 close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k1823 in a1820 in k1813 in with-input-from-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[109]+1,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* call-with-output-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1787(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_1787r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1787r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1787r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1791,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k1789 in call-with-output-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1791,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1796,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1802,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1124 ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a1801 in k1789 in call-with-output-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1802(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1802r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1802r(t0,t1,t2);}}

static void C_ccall f_1802r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1806,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1127 close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k1804 in a1801 in k1789 in call-with-output-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a1795 in k1789 in call-with-output-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1796,2,t0,t1);}
/* posixwin.scm: 1125 proc */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* call-with-input-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1763(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_1763r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1763r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1763r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1767,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k1765 in call-with-input-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1772,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1778,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1116 ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a1777 in k1765 in call-with-input-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1778(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1778r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1778r(t0,t1,t2);}}

static void C_ccall f_1778r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1782,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1119 close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k1780 in a1777 in k1765 in call-with-input-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a1771 in k1765 in call-with-input-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1772,2,t0,t1);}
/* posixwin.scm: 1117 proc */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* close-input-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1747(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1747,3,t0,t1,t2);}
t3=(C_word)close_pipe(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1751,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1105 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k1749 in close-input-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1751(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t2)){
/* posixwin.scm: 1106 ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[3],lf[36],lf[103],lf[104],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* open-output-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1714(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_1714r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1714r(t0,t1,t2,t3);}}

static void C_ccall f_1714r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(11);
t4=f_1645(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1725,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(t4,lf[93]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1732,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1098 ##sys#make-c-string */
t8=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=(C_word)C_eqp(t4,lf[101]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1742,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1099 ##sys#make-c-string */
t9=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}
else{
/* posixwin.scm: 1100 badmode */
f_1657(t5,t4);}}}

/* k1740 in open-output-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1742,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1725(2,t2,(C_word)open_binary_output_pipe(&a,1,t1));}

/* k1730 in open-output-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1732,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1725(2,t2,(C_word)open_text_output_pipe(&a,1,t1));}

/* k1723 in open-output-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1095 check */
f_1663(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* open-input-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1681(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_1681r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1681r(t0,t1,t2,t3);}}

static void C_ccall f_1681r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(11);
t4=f_1645(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1692,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(t4,lf[93]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1699,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1088 ##sys#make-c-string */
t8=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=(C_word)C_eqp(t4,lf[101]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1709,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1089 ##sys#make-c-string */
t9=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}
else{
/* posixwin.scm: 1090 badmode */
f_1657(t5,t4);}}}

/* k1707 in open-input-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1709,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1692(2,t2,(C_word)open_binary_input_pipe(&a,1,t1));}

/* k1697 in open-input-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1699,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1692(2,t2,(C_word)open_text_input_pipe(&a,1,t1));}

/* k1690 in open-input-pipe in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1085 check */
f_1663(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* check in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_1663(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1663,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1667,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1075 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k1665 in check in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1667,2,t0,t1);}
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[5]))){
/* posixwin.scm: 1077 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[36],lf[96],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1679,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1078 ##sys#make-port */
t3=*((C_word*)lf[97]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[2],*((C_word*)lf[98]+1),lf[99],lf[72]);}}

/* k1677 in k1665 in check in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* badmode in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_1657(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1657,NULL,2,t1,t2);}
/* posixwin.scm: 1073 ##sys#error */
t3=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[95],t2);}

/* mode in k933 in k930 in k927 in k924 in k921 */
static C_word C_fcall f_1645(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
t2=(C_word)C_i_pairp(t1);
return((C_truep(t2)?(C_word)C_slot(t1,C_fix(0)):lf[93]));}

/* current-directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1606(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2rv,(void*)f_1606r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_1606r(t0,t1,t2);}}

static void C_ccall f_1606r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(3);
t3=(C_word)C_vemptyp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:(C_word)C_slot(t2,C_fix(0)));
if(C_truep(t4)){
/* posixwin.scm: 1060 change-directory */
t5=*((C_word*)lf[82]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1619,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1061 make-string */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,C_fix(256));}}

/* k1617 in current-directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1619,2,t0,t1);}
t2=(C_word)C_curdir(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1622,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1063 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1620 in k1617 in current-directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* posixwin.scm: 1065 ##sys#substring */
t2=*((C_word*)lf[52]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),((C_word*)t0)[4]);}
else{
/* posixwin.scm: 1066 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[36],lf[90],lf[92]);}}

/* directory? in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1586(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1586,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1590,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1604,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1053 ##sys#expand-home-path */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1602 in directory? in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1053 ##sys#file-info */
t2=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1588 in directory? in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(t1,C_fix(4));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_eqp(C_fix(1),t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1432(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_1432r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1432r(t0,t1,t2);}}

static void C_ccall f_1432r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(9);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1434,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1532,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1537,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-spec97122 */
t6=t5;
f_1537(t6,t1);}
else{
t6=(C_word)C_u_i_car(t2);
t7=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t7))){
/* def-show-dotfiles?98120 */
t8=t4;
f_1532(t8,t1,t6);}
else{
t8=(C_word)C_u_i_car(t7);
t9=(C_word)C_slot(t7,C_fix(1));
/* body95100 */
t10=t3;
f_1434(t10,t1,t6,t8);}}}

/* def-spec97 in directory in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_1537(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1537,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1545,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1024 current-directory */
t3=*((C_word*)lf[90]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1543 in def-spec97 in directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* def-show-dotfiles?98120 */
t2=((C_word*)t0)[3];
f_1532(t2,((C_word*)t0)[2],t1);}

/* def-show-dotfiles?98 in directory in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_1532(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1532,NULL,3,t0,t1,t2);}
/* body95100 */
t3=((C_word*)t0)[2];
f_1434(t3,t1,t2,C_SCHEME_FALSE);}

/* body95 in directory in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_1434(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1434,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1438,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1026 make-string */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_fix(256));}

/* k1436 in body95 in directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1438,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1441,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1027 ##sys#make-pointer */
t3=*((C_word*)lf[89]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1439 in k1436 in body95 in directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1441,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1444,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm: 1028 ##sys#make-pointer */
t3=*((C_word*)lf[89]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1442 in k1439 in k1436 in body95 in directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1448,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1531,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1029 ##sys#expand-home-path */
t4=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k1529 in k1442 in k1439 in k1436 in body95 in directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1029 ##sys#make-c-string */
t2=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1446 in k1442 in k1439 in k1436 in body95 in directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1448,2,t0,t1);}
t2=(C_word)C_opendir(t1,((C_word*)t0)[7]);
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[7]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1457,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1032 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1465,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1465(t6,((C_word*)t0)[6]);}}

/* loop in k1446 in k1442 in k1439 in k1436 in body95 in directory in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_1465(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1465,NULL,2,t0,t1);}
t2=(C_word)C_readdir(((C_word*)t0)[6],((C_word*)t0)[5]);
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[5]))){
t3=(C_word)C_closedir(((C_word*)t0)[6]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_foundfile(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1475,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1041 ##sys#substring */
t5=*((C_word*)lf[52]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[4],C_fix(0),t3);}}

/* k1473 in loop in k1446 in k1442 in k1439 in k1436 in body95 in directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1475,2,t0,t1);}
t2=(C_word)C_subchar(t1,C_fix(0));
t3=(C_word)C_i_greaterp(((C_word*)t0)[5],C_fix(1));
t4=(C_truep(t3)?(C_word)C_subchar(t1,C_fix(1)):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1487,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(t2,C_make_character(46));
if(C_truep(t6)){
t7=(C_word)C_i_not(t4);
if(C_truep(t7)){
t8=t5;
f_1487(t8,t7);}
else{
t8=(C_word)C_eqp(t4,C_make_character(46));
t9=(C_truep(t8)?(C_word)C_eqp(((C_word*)t0)[5],C_fix(2)):C_SCHEME_FALSE);
t10=t5;
f_1487(t10,(C_truep(t9)?t9:(C_word)C_i_not(((C_word*)t0)[2])));}}
else{
t7=t5;
f_1487(t7,C_SCHEME_FALSE);}}

/* k1485 in k1473 in loop in k1446 in k1442 in k1439 in k1436 in body95 in directory in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_1487(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1487,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm: 1048 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1465(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1049 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1465(t3,t2);}}

/* k1495 in k1485 in k1473 in loop in k1446 in k1442 in k1439 in k1436 in body95 in directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1497,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k1455 in k1446 in k1442 in k1439 in k1436 in body95 in directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1033 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[36],lf[87],lf[88],((C_word*)t0)[2]);}

/* delete-directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1408(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1408,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1426,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1430,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1016 ##sys#expand-home-path */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1428 in delete-directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1016 ##sys#make-c-string */
t2=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1424 in delete-directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1426,2,t0,t1);}
t2=(C_word)C_rmdir(t1);
if(C_truep((C_word)C_i_zerop(t2))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1418,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1017 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1416 in k1424 in delete-directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1018 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[36],lf[84],lf[85],((C_word*)t0)[2]);}

/* change-directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1384(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1384,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1402,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1406,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1009 ##sys#expand-home-path */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1404 in change-directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1009 ##sys#make-c-string */
t2=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1400 in change-directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1402,2,t0,t1);}
t2=(C_word)C_chdir(t1);
if(C_truep((C_word)C_i_zerop(t2))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1394,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1010 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1392 in k1400 in change-directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1011 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[36],lf[82],lf[83],((C_word*)t0)[2]);}

/* create-directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1360(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1360,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1378,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1382,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1002 ##sys#expand-home-path */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1380 in create-directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1382(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1002 ##sys#make-c-string */
t2=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1376 in create-directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1378,2,t0,t1);}
t2=(C_word)C_mkdir(t1);
if(C_truep((C_word)C_i_zerop(t2))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1370,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1003 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1368 in k1376 in create-directory in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1004 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[36],lf[80],lf[81],((C_word*)t0)[2]);}

/* set-file-position! in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1305(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1305r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1305r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1305r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_slot(t4,C_fix(0)):C_fix((C_word)SEEK_SET));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1312,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
/* posixwin.scm: 987  ##sys#signal-hook */
t8=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t8+1)))(7,t8,t7,lf[78],lf[75],lf[79],t3,t2);}
else{
t8=t7;
f_1312(2,t8,C_SCHEME_UNDEFINED);}}

/* k1310 in set-file-position! in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1318,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1327,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 988  port? */
t4=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k1325 in k1310 in set-file-position! in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(7));
t3=(C_word)C_eqp(t2,lf[72]);
t4=((C_word*)t0)[4];
f_1318(2,t4,(C_truep(t3)?(C_word)C_fseek(((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2]):C_SCHEME_FALSE));}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[5]))){
t2=((C_word*)t0)[4];
f_1318(2,t2,(C_word)C_lseek(((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2]));}
else{
/* posixwin.scm: 992  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[45],lf[75],lf[77],((C_word*)t0)[5]);}}}

/* k1316 in k1310 in set-file-position! in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1318,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1321,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 993  ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1319 in k1316 in k1310 in set-file-position! in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 994  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[36],lf[75],lf[76],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* file-position in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1265(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1265,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1269,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1284,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 971  port? */
t5=*((C_word*)lf[74]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1282 in file-position in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(7));
t3=(C_word)C_eqp(t2,lf[72]);
t4=((C_word*)t0)[2];
f_1269(2,t4,(C_truep(t3)?(C_word)C_ftell(((C_word*)t0)[3]):C_fix(-1)));}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
f_1269(2,t2,(C_word)C_lseek(((C_word*)t0)[3],C_fix(0),C_fix((C_word)SEEK_CUR)));}
else{
/* posixwin.scm: 976  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[45],lf[70],lf[73],((C_word*)t0)[3]);}}}

/* k1267 in file-position in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1269,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1272,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1278,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 978  ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_1272(2,t3,C_SCHEME_UNDEFINED);}}

/* k1276 in k1267 in file-position in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 979  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[36],lf[70],lf[71],((C_word*)t0)[2]);}

/* k1270 in k1267 in file-position in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* symbolic-link? in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1262(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1262,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* regular-file? in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1242(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1242,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1246,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1260,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 962  ##sys#expand-home-path */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1258 in regular-file? in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 962  ##sys#file-info */
t2=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1244 in regular-file? in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(t1,C_fix(4));
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_eqp(C_fix(0),t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* file-permissions in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1236(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1236,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1240,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 958  ##sys#stat */
f_1144(t3,t2);}

/* k1238 in file-permissions in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode));}

/* file-owner in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1230(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1230,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1234,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 957  ##sys#stat */
f_1144(t3,t2);}

/* k1232 in file-owner in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid));}

/* file-change-time in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1224(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1224,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1228,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 956  ##sys#stat */
f_1144(t3,t2);}

/* k1226 in file-change-time in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1228,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_ctime));}

/* file-access-time in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1218(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1218,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1222,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 955  ##sys#stat */
f_1144(t3,t2);}

/* k1220 in file-access-time in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1222,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_atime));}

/* file-modification-time in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1212(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1212,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1216,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 954  ##sys#stat */
f_1144(t3,t2);}

/* k1214 in file-modification-time in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1216,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_mtime));}

/* file-size in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1206(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1206,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1210,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 953  ##sys#stat */
f_1144(t3,t2);}

/* k1208 in file-size in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_size));}

/* file-stat in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1182(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1182r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1182r(t0,t1,t2,t3);}}

static void C_ccall f_1182r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:(C_word)C_slot(t3,C_fix(0)));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1189,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 947  ##sys#stat */
f_1144(t6,t2);}

/* k1187 in file-stat in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1189,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(0),C_fix(0),C_fix(0),C_fix(0)));}

/* ##sys#stat in k933 in k930 in k927 in k924 in k921 */
static void C_fcall f_1144(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1144,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1148,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t4=t3;
f_1148(2,t4,(C_word)C_fstat(t2));}
else{
if(C_truep((C_word)C_i_stringp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1173,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1177,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 940  ##sys#expand-home-path */
t6=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
/* posixwin.scm: 941  ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[45],lf[59],t2);}}}

/* k1175 in ##sys#stat in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 940  ##sys#make-c-string */
t2=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1171 in ##sys#stat in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1148(2,t2,(C_word)C_stat(t1));}

/* k1146 in ##sys#stat in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1148,2,t0,t1);}
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 943  ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1155 in k1146 in ##sys#stat in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 944  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[36],lf[58],((C_word*)t0)[2]);}

/* file-mkstemp in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1109(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1109,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1113,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 909  ##sys#make-c-string */
t4=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1111 in file-mkstemp in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1113,2,t0,t1);}
t2=(C_word)C_mkstemp(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1116,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 911  string-length */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}

/* k1114 in k1111 in file-mkstemp in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1116,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1119,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1136,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 913  ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t2;
f_1119(2,t4,C_SCHEME_UNDEFINED);}}

/* k1134 in k1114 in k1111 in file-mkstemp in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 914  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[36],lf[51],lf[53],((C_word*)t0)[2]);}

/* k1117 in k1114 in k1111 in file-mkstemp in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1119,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1126,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm: 915  ##sys#substring */
t4=*((C_word*)lf[52]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[2],C_fix(0),t3);}

/* k1124 in k1117 in k1114 in k1111 in file-mkstemp in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 915  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* file-write in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1073(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1073r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1073r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1073r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1077,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(C_truep((C_word)C_blockp(t3))?(C_word)C_byteblockp(t3):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=t5;
f_1077(2,t7,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 896  ##sys#signal-hook */
t7=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t5,lf[45],lf[47],lf[49],t3);}}

/* k1075 in file-write in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1077,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[5]);
t3=(C_truep(t2)?(C_word)C_slot(((C_word*)t0)[5],C_fix(0)):(C_word)C_block_size(((C_word*)t0)[4]));
t4=(C_word)C_write(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1083,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_eqp(C_fix(-1),t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1089,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 901  ##sys#update-errno */
t8=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=t5;
f_1083(2,t7,C_SCHEME_UNDEFINED);}}

/* k1087 in k1075 in file-write in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1089(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 902  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[36],lf[47],lf[48],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1081 in k1075 in file-write in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-read in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1034(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1034r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1034r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1034r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1038,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_notvemptyp(t4))){
t6=t5;
f_1038(2,t6,(C_word)C_slot(t4,C_fix(0)));}
else{
/* posixwin.scm: 883  make-string */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}}

/* k1036 in file-read in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1038,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1041,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(C_truep((C_word)C_blockp(t1))?(C_word)C_byteblockp(t1):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t2;
f_1041(2,t4,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 885  ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,lf[45],lf[43],lf[46],t1);}}

/* k1039 in k1036 in file-read in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1041,2,t0,t1);}
t2=(C_word)C_read(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1044,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1053,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 888  ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t3;
f_1044(2,t5,C_SCHEME_UNDEFINED);}}

/* k1051 in k1039 in k1036 in file-read in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 889  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[36],lf[43],lf[44],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1042 in k1039 in k1036 in file-read in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1044,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* file-close in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1019(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1019,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_lessp((C_word)C_close(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1029,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 875  ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k1027 in file-close in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 876  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[36],lf[40],lf[41],((C_word*)t0)[2]);}

/* file-open in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_987(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4rv,(void*)f_987r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_987r(t0,t1,t2,t3,t4);}}

static void C_ccall f_987r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(9);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_slot(t4,C_fix(0)):((C_word*)t0)[2]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_995,a[2]=t2,a[3]=t1,a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1011,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 865  ##sys#expand-home-path */
t9=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}

/* k1009 in file-open in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 865  ##sys#make-c-string */
t2=*((C_word*)lf[38]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k993 in file-open in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_995,2,t0,t1);}
t2=(C_word)C_open(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_998,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1004,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 867  ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t3;
f_998(2,t5,C_SCHEME_UNDEFINED);}}

/* k1002 in k993 in file-open in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_1004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 868  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[5],lf[36],lf[35],lf[37],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k996 in k993 in file-open in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* posix-error in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_942r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_942r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_942r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_946,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm: 798  ##sys#update-errno */
t7=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k944 in posix-error in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_946,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_953,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_957,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,(C_word)stub3(t4,t1),C_fix(0));}

/* k955 in k944 in posix-error in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 799  string-append */
t2=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[7],t1);}

/* k951 in k944 in posix-error in k933 in k930 in k927 in k924 in k921 */
static void C_ccall f_953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(7,0,((C_word*)t0)[5],*((C_word*)lf[6]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[343] = {
{"toplevelposixwin.scm",(void*)C_posix_toplevel},
{"f_923posixwin.scm",(void*)f_923},
{"f_926posixwin.scm",(void*)f_926},
{"f_929posixwin.scm",(void*)f_929},
{"f_932posixwin.scm",(void*)f_932},
{"f_935posixwin.scm",(void*)f_935},
{"f_1900posixwin.scm",(void*)f_1900},
{"f_3715posixwin.scm",(void*)f_3715},
{"f_3712posixwin.scm",(void*)f_3712},
{"f_3705posixwin.scm",(void*)f_3705},
{"f_3699posixwin.scm",(void*)f_3699},
{"f_3693posixwin.scm",(void*)f_3693},
{"f_3687posixwin.scm",(void*)f_3687},
{"f_3681posixwin.scm",(void*)f_3681},
{"f_3675posixwin.scm",(void*)f_3675},
{"f_3669posixwin.scm",(void*)f_3669},
{"f_3663posixwin.scm",(void*)f_3663},
{"f_3657posixwin.scm",(void*)f_3657},
{"f_3651posixwin.scm",(void*)f_3651},
{"f_3645posixwin.scm",(void*)f_3645},
{"f_3639posixwin.scm",(void*)f_3639},
{"f_3633posixwin.scm",(void*)f_3633},
{"f_3627posixwin.scm",(void*)f_3627},
{"f_3621posixwin.scm",(void*)f_3621},
{"f_3615posixwin.scm",(void*)f_3615},
{"f_3609posixwin.scm",(void*)f_3609},
{"f_3603posixwin.scm",(void*)f_3603},
{"f_3597posixwin.scm",(void*)f_3597},
{"f_3591posixwin.scm",(void*)f_3591},
{"f_3585posixwin.scm",(void*)f_3585},
{"f_3579posixwin.scm",(void*)f_3579},
{"f_3573posixwin.scm",(void*)f_3573},
{"f_3567posixwin.scm",(void*)f_3567},
{"f_3561posixwin.scm",(void*)f_3561},
{"f_3555posixwin.scm",(void*)f_3555},
{"f_3549posixwin.scm",(void*)f_3549},
{"f_3543posixwin.scm",(void*)f_3543},
{"f_3537posixwin.scm",(void*)f_3537},
{"f_3531posixwin.scm",(void*)f_3531},
{"f_3525posixwin.scm",(void*)f_3525},
{"f_3519posixwin.scm",(void*)f_3519},
{"f_3513posixwin.scm",(void*)f_3513},
{"f_3507posixwin.scm",(void*)f_3507},
{"f_3501posixwin.scm",(void*)f_3501},
{"f_3495posixwin.scm",(void*)f_3495},
{"f_3489posixwin.scm",(void*)f_3489},
{"f_3483posixwin.scm",(void*)f_3483},
{"f_3477posixwin.scm",(void*)f_3477},
{"f_3471posixwin.scm",(void*)f_3471},
{"f_3465posixwin.scm",(void*)f_3465},
{"f_3459posixwin.scm",(void*)f_3459},
{"f_3239posixwin.scm",(void*)f_3239},
{"f_3393posixwin.scm",(void*)f_3393},
{"f_3399posixwin.scm",(void*)f_3399},
{"f_3388posixwin.scm",(void*)f_3388},
{"f_3383posixwin.scm",(void*)f_3383},
{"f_3241posixwin.scm",(void*)f_3241},
{"f_3370posixwin.scm",(void*)f_3370},
{"f_3378posixwin.scm",(void*)f_3378},
{"f_3245posixwin.scm",(void*)f_3245},
{"f_3358posixwin.scm",(void*)f_3358},
{"f_3255posixwin.scm",(void*)f_3255},
{"f_3257posixwin.scm",(void*)f_3257},
{"f_3276posixwin.scm",(void*)f_3276},
{"f_3344posixwin.scm",(void*)f_3344},
{"f_3351posixwin.scm",(void*)f_3351},
{"f_3338posixwin.scm",(void*)f_3338},
{"f_3291posixwin.scm",(void*)f_3291},
{"f_3325posixwin.scm",(void*)f_3325},
{"f_3311posixwin.scm",(void*)f_3311},
{"f_3323posixwin.scm",(void*)f_3323},
{"f_3319posixwin.scm",(void*)f_3319},
{"f_3303posixwin.scm",(void*)f_3303},
{"f_3301posixwin.scm",(void*)f_3301},
{"f_3362posixwin.scm",(void*)f_3362},
{"f_3208posixwin.scm",(void*)f_3208},
{"f_3234posixwin.scm",(void*)f_3234},
{"f_3219posixwin.scm",(void*)f_3219},
{"f_3223posixwin.scm",(void*)f_3223},
{"f_3227posixwin.scm",(void*)f_3227},
{"f_3231posixwin.scm",(void*)f_3231},
{"f_3196posixwin.scm",(void*)f_3196},
{"f_3193posixwin.scm",(void*)f_3193},
{"f_3139posixwin.scm",(void*)f_3139},
{"f_3160posixwin.scm",(void*)f_3160},
{"f_3170posixwin.scm",(void*)f_3170},
{"f_3154posixwin.scm",(void*)f_3154},
{"f_3127posixwin.scm",(void*)f_3127},
{"f_3070posixwin.scm",(void*)f_3070},
{"f_3082posixwin.scm",(void*)f_3082},
{"f_3077posixwin.scm",(void*)f_3077},
{"f_3072posixwin.scm",(void*)f_3072},
{"f_3013posixwin.scm",(void*)f_3013},
{"f_3025posixwin.scm",(void*)f_3025},
{"f_3020posixwin.scm",(void*)f_3020},
{"f_3015posixwin.scm",(void*)f_3015},
{"f_2957posixwin.scm",(void*)f_2957},
{"f_3007posixwin.scm",(void*)f_3007},
{"f_3011posixwin.scm",(void*)f_3011},
{"f_2999posixwin.scm",(void*)f_2999},
{"f_2961posixwin.scm",(void*)f_2961},
{"f_2990posixwin.scm",(void*)f_2990},
{"f_2964posixwin.scm",(void*)f_2964},
{"f_2975posixwin.scm",(void*)f_2975},
{"f_2969posixwin.scm",(void*)f_2969},
{"f_2854posixwin.scm",(void*)f_2854},
{"f_2934posixwin.scm",(void*)f_2934},
{"f_2952posixwin.scm",(void*)f_2952},
{"f_2858posixwin.scm",(void*)f_2858},
{"f_2901posixwin.scm",(void*)f_2901},
{"f_2905posixwin.scm",(void*)f_2905},
{"f_2909posixwin.scm",(void*)f_2909},
{"f_2913posixwin.scm",(void*)f_2913},
{"f_2917posixwin.scm",(void*)f_2917},
{"f_2815posixwin.scm",(void*)f_2815},
{"f_2894posixwin.scm",(void*)f_2894},
{"f_2874posixwin.scm",(void*)f_2874},
{"f_2878posixwin.scm",(void*)f_2878},
{"f_2882posixwin.scm",(void*)f_2882},
{"f_2807posixwin.scm",(void*)f_2807},
{"f_2778posixwin.scm",(void*)f_2778},
{"f_2795posixwin.scm",(void*)f_2795},
{"f_2799posixwin.scm",(void*)f_2799},
{"f_2772posixwin.scm",(void*)f_2772},
{"f_2766posixwin.scm",(void*)f_2766},
{"f_2763posixwin.scm",(void*)f_2763},
{"f_2682posixwin.scm",(void*)f_2682},
{"f_2689posixwin.scm",(void*)f_2689},
{"f_2697posixwin.scm",(void*)f_2697},
{"f_2730posixwin.scm",(void*)f_2730},
{"f_2711posixwin.scm",(void*)f_2711},
{"f_2714posixwin.scm",(void*)f_2714},
{"f_2717posixwin.scm",(void*)f_2717},
{"f_2674posixwin.scm",(void*)f_2674},
{"f_2542posixwin.scm",(void*)f_2542},
{"f_2629posixwin.scm",(void*)f_2629},
{"f_2624posixwin.scm",(void*)f_2624},
{"f_2544posixwin.scm",(void*)f_2544},
{"f_2551posixwin.scm",(void*)f_2551},
{"f_2559posixwin.scm",(void*)f_2559},
{"f_2592posixwin.scm",(void*)f_2592},
{"f_2573posixwin.scm",(void*)f_2573},
{"f_2576posixwin.scm",(void*)f_2576},
{"f_2534posixwin.scm",(void*)f_2534},
{"f_2425posixwin.scm",(void*)f_2425},
{"f_2431posixwin.scm",(void*)f_2431},
{"f_2452posixwin.scm",(void*)f_2452},
{"f_2523posixwin.scm",(void*)f_2523},
{"f_2456posixwin.scm",(void*)f_2456},
{"f_2463posixwin.scm",(void*)f_2463},
{"f_2465posixwin.scm",(void*)f_2465},
{"f_2482posixwin.scm",(void*)f_2482},
{"f_2492posixwin.scm",(void*)f_2492},
{"f_2496posixwin.scm",(void*)f_2496},
{"f_2446posixwin.scm",(void*)f_2446},
{"f_2372posixwin.scm",(void*)f_2372},
{"f_2379posixwin.scm",(void*)f_2379},
{"f_2353posixwin.scm",(void*)f_2353},
{"f_2357posixwin.scm",(void*)f_2357},
{"f_2323posixwin.scm",(void*)f_2323},
{"f_2330posixwin.scm",(void*)f_2330},
{"f_2295posixwin.scm",(void*)f_2295},
{"f_2302posixwin.scm",(void*)f_2302},
{"f_2305posixwin.scm",(void*)f_2305},
{"f_2308posixwin.scm",(void*)f_2308},
{"f_2278posixwin.scm",(void*)f_2278},
{"f_2282posixwin.scm",(void*)f_2282},
{"f_2285posixwin.scm",(void*)f_2285},
{"f_2267posixwin.scm",(void*)f_2267},
{"f_2261posixwin.scm",(void*)f_2261},
{"f_2196posixwin.scm",(void*)f_2196},
{"f_2202posixwin.scm",(void*)f_2202},
{"f_2206posixwin.scm",(void*)f_2206},
{"f_2214posixwin.scm",(void*)f_2214},
{"f_2240posixwin.scm",(void*)f_2240},
{"f_2244posixwin.scm",(void*)f_2244},
{"f_2232posixwin.scm",(void*)f_2232},
{"f_2184posixwin.scm",(void*)f_2184},
{"f_2189posixwin.scm",(void*)f_2189},
{"f_2173posixwin.scm",(void*)f_2173},
{"f_2178posixwin.scm",(void*)f_2178},
{"f_2182posixwin.scm",(void*)f_2182},
{"f_2149posixwin.scm",(void*)f_2149},
{"f_2153posixwin.scm",(void*)f_2153},
{"f_2162posixwin.scm",(void*)f_2162},
{"f_2156posixwin.scm",(void*)f_2156},
{"f_2117posixwin.scm",(void*)f_2117},
{"f_2147posixwin.scm",(void*)f_2147},
{"f_2133posixwin.scm",(void*)f_2133},
{"f_2127posixwin.scm",(void*)f_2127},
{"f_2106posixwin.scm",(void*)f_2106},
{"f_2115posixwin.scm",(void*)f_2115},
{"f_2095posixwin.scm",(void*)f_2095},
{"f_2104posixwin.scm",(void*)f_2104},
{"f_2077posixwin.scm",(void*)f_2077},
{"f_2081posixwin.scm",(void*)f_2081},
{"f_2093posixwin.scm",(void*)f_2093},
{"f_2040posixwin.scm",(void*)f_2040},
{"f_2048posixwin.scm",(void*)f_2048},
{"f_2031posixwin.scm",(void*)f_2031},
{"f_2025posixwin.scm",(void*)f_2025},
{"f_2019posixwin.scm",(void*)f_2019},
{"f_1998posixwin.scm",(void*)f_1998},
{"f_2017posixwin.scm",(void*)f_2017},
{"f_2013posixwin.scm",(void*)f_2013},
{"f_2005posixwin.scm",(void*)f_2005},
{"f_1974posixwin.scm",(void*)f_1974},
{"f_1996posixwin.scm",(void*)f_1996},
{"f_1992posixwin.scm",(void*)f_1992},
{"f_1984posixwin.scm",(void*)f_1984},
{"f_1918posixwin.scm",(void*)f_1918},
{"f_1928posixwin.scm",(void*)f_1928},
{"f_1908posixwin.scm",(void*)f_1908},
{"f_1902posixwin.scm",(void*)f_1902},
{"f_1851posixwin.scm",(void*)f_1851},
{"f_1864posixwin.scm",(void*)f_1864},
{"f_1855posixwin.scm",(void*)f_1855},
{"f_1831posixwin.scm",(void*)f_1831},
{"f_1835posixwin.scm",(void*)f_1835},
{"f_1841posixwin.scm",(void*)f_1841},
{"f_1845posixwin.scm",(void*)f_1845},
{"f_1811posixwin.scm",(void*)f_1811},
{"f_1815posixwin.scm",(void*)f_1815},
{"f_1821posixwin.scm",(void*)f_1821},
{"f_1825posixwin.scm",(void*)f_1825},
{"f_1787posixwin.scm",(void*)f_1787},
{"f_1791posixwin.scm",(void*)f_1791},
{"f_1802posixwin.scm",(void*)f_1802},
{"f_1806posixwin.scm",(void*)f_1806},
{"f_1796posixwin.scm",(void*)f_1796},
{"f_1763posixwin.scm",(void*)f_1763},
{"f_1767posixwin.scm",(void*)f_1767},
{"f_1778posixwin.scm",(void*)f_1778},
{"f_1782posixwin.scm",(void*)f_1782},
{"f_1772posixwin.scm",(void*)f_1772},
{"f_1747posixwin.scm",(void*)f_1747},
{"f_1751posixwin.scm",(void*)f_1751},
{"f_1714posixwin.scm",(void*)f_1714},
{"f_1742posixwin.scm",(void*)f_1742},
{"f_1732posixwin.scm",(void*)f_1732},
{"f_1725posixwin.scm",(void*)f_1725},
{"f_1681posixwin.scm",(void*)f_1681},
{"f_1709posixwin.scm",(void*)f_1709},
{"f_1699posixwin.scm",(void*)f_1699},
{"f_1692posixwin.scm",(void*)f_1692},
{"f_1663posixwin.scm",(void*)f_1663},
{"f_1667posixwin.scm",(void*)f_1667},
{"f_1679posixwin.scm",(void*)f_1679},
{"f_1657posixwin.scm",(void*)f_1657},
{"f_1645posixwin.scm",(void*)f_1645},
{"f_1606posixwin.scm",(void*)f_1606},
{"f_1619posixwin.scm",(void*)f_1619},
{"f_1622posixwin.scm",(void*)f_1622},
{"f_1586posixwin.scm",(void*)f_1586},
{"f_1604posixwin.scm",(void*)f_1604},
{"f_1590posixwin.scm",(void*)f_1590},
{"f_1432posixwin.scm",(void*)f_1432},
{"f_1537posixwin.scm",(void*)f_1537},
{"f_1545posixwin.scm",(void*)f_1545},
{"f_1532posixwin.scm",(void*)f_1532},
{"f_1434posixwin.scm",(void*)f_1434},
{"f_1438posixwin.scm",(void*)f_1438},
{"f_1441posixwin.scm",(void*)f_1441},
{"f_1444posixwin.scm",(void*)f_1444},
{"f_1531posixwin.scm",(void*)f_1531},
{"f_1448posixwin.scm",(void*)f_1448},
{"f_1465posixwin.scm",(void*)f_1465},
{"f_1475posixwin.scm",(void*)f_1475},
{"f_1487posixwin.scm",(void*)f_1487},
{"f_1497posixwin.scm",(void*)f_1497},
{"f_1457posixwin.scm",(void*)f_1457},
{"f_1408posixwin.scm",(void*)f_1408},
{"f_1430posixwin.scm",(void*)f_1430},
{"f_1426posixwin.scm",(void*)f_1426},
{"f_1418posixwin.scm",(void*)f_1418},
{"f_1384posixwin.scm",(void*)f_1384},
{"f_1406posixwin.scm",(void*)f_1406},
{"f_1402posixwin.scm",(void*)f_1402},
{"f_1394posixwin.scm",(void*)f_1394},
{"f_1360posixwin.scm",(void*)f_1360},
{"f_1382posixwin.scm",(void*)f_1382},
{"f_1378posixwin.scm",(void*)f_1378},
{"f_1370posixwin.scm",(void*)f_1370},
{"f_1305posixwin.scm",(void*)f_1305},
{"f_1312posixwin.scm",(void*)f_1312},
{"f_1327posixwin.scm",(void*)f_1327},
{"f_1318posixwin.scm",(void*)f_1318},
{"f_1321posixwin.scm",(void*)f_1321},
{"f_1265posixwin.scm",(void*)f_1265},
{"f_1284posixwin.scm",(void*)f_1284},
{"f_1269posixwin.scm",(void*)f_1269},
{"f_1278posixwin.scm",(void*)f_1278},
{"f_1272posixwin.scm",(void*)f_1272},
{"f_1262posixwin.scm",(void*)f_1262},
{"f_1242posixwin.scm",(void*)f_1242},
{"f_1260posixwin.scm",(void*)f_1260},
{"f_1246posixwin.scm",(void*)f_1246},
{"f_1236posixwin.scm",(void*)f_1236},
{"f_1240posixwin.scm",(void*)f_1240},
{"f_1230posixwin.scm",(void*)f_1230},
{"f_1234posixwin.scm",(void*)f_1234},
{"f_1224posixwin.scm",(void*)f_1224},
{"f_1228posixwin.scm",(void*)f_1228},
{"f_1218posixwin.scm",(void*)f_1218},
{"f_1222posixwin.scm",(void*)f_1222},
{"f_1212posixwin.scm",(void*)f_1212},
{"f_1216posixwin.scm",(void*)f_1216},
{"f_1206posixwin.scm",(void*)f_1206},
{"f_1210posixwin.scm",(void*)f_1210},
{"f_1182posixwin.scm",(void*)f_1182},
{"f_1189posixwin.scm",(void*)f_1189},
{"f_1144posixwin.scm",(void*)f_1144},
{"f_1177posixwin.scm",(void*)f_1177},
{"f_1173posixwin.scm",(void*)f_1173},
{"f_1148posixwin.scm",(void*)f_1148},
{"f_1157posixwin.scm",(void*)f_1157},
{"f_1109posixwin.scm",(void*)f_1109},
{"f_1113posixwin.scm",(void*)f_1113},
{"f_1116posixwin.scm",(void*)f_1116},
{"f_1136posixwin.scm",(void*)f_1136},
{"f_1119posixwin.scm",(void*)f_1119},
{"f_1126posixwin.scm",(void*)f_1126},
{"f_1073posixwin.scm",(void*)f_1073},
{"f_1077posixwin.scm",(void*)f_1077},
{"f_1089posixwin.scm",(void*)f_1089},
{"f_1083posixwin.scm",(void*)f_1083},
{"f_1034posixwin.scm",(void*)f_1034},
{"f_1038posixwin.scm",(void*)f_1038},
{"f_1041posixwin.scm",(void*)f_1041},
{"f_1053posixwin.scm",(void*)f_1053},
{"f_1044posixwin.scm",(void*)f_1044},
{"f_1019posixwin.scm",(void*)f_1019},
{"f_1029posixwin.scm",(void*)f_1029},
{"f_987posixwin.scm",(void*)f_987},
{"f_1011posixwin.scm",(void*)f_1011},
{"f_995posixwin.scm",(void*)f_995},
{"f_1004posixwin.scm",(void*)f_1004},
{"f_998posixwin.scm",(void*)f_998},
{"f_942posixwin.scm",(void*)f_942},
{"f_946posixwin.scm",(void*)f_946},
{"f_957posixwin.scm",(void*)f_957},
{"f_953posixwin.scm",(void*)f_953},
{NULL,NULL}};
#endif

static C_PTABLE_ENTRY *create_ptable(void){
#ifdef C_ENABLE_PTABLES
return ptable;
#else
return NULL;
#endif
}
/* end of file */
