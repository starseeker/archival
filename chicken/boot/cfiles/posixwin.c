/* Generated from posixwin.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:12
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: posixwin.scm -output-file posixwin.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
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

static C_TLS C_word lf[517];


/* from k3083 */
static C_word C_fcall stub501(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6) C_regparm;
C_regparm static C_word C_fcall stub501(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5,C_word C_a6){
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

/* from close-handle in k2033 in k983 in k980 in k977 in k974 in k971 */
static C_word C_fcall stub490(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub490(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_truep(C_a0);
C_r=C_fix((C_word)close_handle(t0));
return C_r;}

/* from ##sys#shell-command in k2033 in k983 in k980 in k977 in k974 in k971 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub480(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub480(C_word C_buf){
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

/* from current-process-id in k2033 in k983 in k980 in k977 in k974 in k971 */
static C_word C_fcall stub478(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub478(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from freeargs */
static C_word C_fcall stub454(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub454(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_args();
return C_r;}

/* from k2908 */
static C_word C_fcall stub447(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub447(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from freeargs */
static C_word C_fcall stub402(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub402(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_args();
return C_r;}

/* from k2745 */
static C_word C_fcall stub395(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub395(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from k2544 */
static C_word C_fcall stub346(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub346(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

/* from asctime */
static C_word C_fcall stub332(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub332(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0));
return C_r;}

/* from k2465 */
static C_word C_fcall stub323(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub323(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k2372 */
static C_word C_fcall stub306(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub306(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from k994 */
static C_word C_fcall stub3(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub3(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_973)
static void C_ccall f_973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_976)
static void C_ccall f_976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_979)
static void C_ccall f_979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_982)
static void C_ccall f_982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_985)
static void C_ccall f_985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2035)
static void C_ccall f_2035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4012)
static void C_ccall f_4012(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4009)
static void C_ccall f_4009(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4002)
static void C_ccall f_4002(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3996)
static void C_ccall f_3996(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3990)
static void C_ccall f_3990(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3984)
static void C_ccall f_3984(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3978)
static void C_ccall f_3978(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3972)
static void C_ccall f_3972(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3966)
static void C_ccall f_3966(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3960)
static void C_ccall f_3960(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3954)
static void C_ccall f_3954(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3948)
static void C_ccall f_3948(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3936)
static void C_ccall f_3936(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3930)
static void C_ccall f_3930(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3924)
static void C_ccall f_3924(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3918)
static void C_ccall f_3918(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3912)
static void C_ccall f_3912(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3906)
static void C_ccall f_3906(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3900)
static void C_ccall f_3900(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3894)
static void C_ccall f_3894(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3888)
static void C_ccall f_3888(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3882)
static void C_ccall f_3882(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3876)
static void C_ccall f_3876(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3870)
static void C_ccall f_3870(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3864)
static void C_ccall f_3864(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3858)
static void C_ccall f_3858(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3852)
static void C_ccall f_3852(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3846)
static void C_ccall f_3846(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3840)
static void C_ccall f_3840(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3834)
static void C_ccall f_3834(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3828)
static void C_ccall f_3828(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3822)
static void C_ccall f_3822(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3816)
static void C_ccall f_3816(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3810)
static void C_ccall f_3810(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3798)
static void C_ccall f_3798(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3792)
static void C_ccall f_3792(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3786)
static void C_ccall f_3786(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3780)
static void C_ccall f_3780(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3774)
static void C_ccall f_3774(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3768)
static void C_ccall f_3768(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3762)
static void C_ccall f_3762(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3756)
static void C_ccall f_3756(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3687)
static void C_fcall f_3687(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3693)
static void C_ccall f_3693(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3682)
static void C_fcall f_3682(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3677)
static void C_fcall f_3677(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3532)
static void C_fcall f_3532(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3664)
static void C_ccall f_3664(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3672)
static void C_ccall f_3672(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_3539)
static void C_fcall f_3539(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3652)
static void C_ccall f_3652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3549)
static void C_ccall f_3549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3551)
static void C_fcall f_3551(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3638)
static void C_ccall f_3638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3645)
static void C_ccall f_3645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3632)
static void C_ccall f_3632(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3619)
static void C_ccall f_3619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3605)
static void C_ccall f_3605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3617)
static void C_ccall f_3617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3613)
static void C_ccall f_3613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3597)
static void C_ccall f_3597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3595)
static void C_ccall f_3595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3656)
static void C_ccall f_3656(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3499)
static void C_ccall f_3499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3525)
static void C_ccall f_3525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3510)
static void C_ccall f_3510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3514)
static void C_ccall f_3514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3518)
static void C_ccall f_3518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3522)
static void C_ccall f_3522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3487)
static void C_ccall f_3487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3484)
static void C_ccall f_3484(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3451)
static void C_ccall f_3451(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3461)
static void C_ccall f_3461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3445)
static void C_ccall f_3445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3364)
static void C_fcall f_3364(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3359)
static void C_fcall f_3359(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3354)
static void C_fcall f_3354(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3292)
static void C_ccall f_3292r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3304)
static void C_fcall f_3304(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3299)
static void C_fcall f_3299(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3294)
static void C_fcall f_3294(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3227)
static void C_fcall f_3227(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3286)
static void C_ccall f_3286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3290)
static void C_ccall f_3290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3278)
static void C_ccall f_3278(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3234)
static void C_ccall f_3234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3266)
static void C_ccall f_3266(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3237)
static void C_ccall f_3237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3248)
static void C_ccall f_3248(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3242)
static void C_ccall f_3242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3108)
static void C_ccall f_3108(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_3204)
static void C_fcall f_3204(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3222)
static void C_ccall f_3222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3112)
static void C_ccall f_3112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3171)
static void C_ccall f_3171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3175)
static void C_ccall f_3175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3179)
static void C_ccall f_3179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3183)
static void C_ccall f_3183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3061)
static void C_ccall f_3061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3164)
static void C_ccall f_3164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3144)
static void C_ccall f_3144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3148)
static void C_ccall f_3148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3053)
static void C_ccall f_3053(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3041)
static void C_ccall f_3041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3045)
static void C_ccall f_3045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3012)
static void C_ccall f_3012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3009)
static void C_ccall f_3009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2916)
static void C_ccall f_2916r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2932)
static void C_ccall f_2932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2940)
static void C_fcall f_2940(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2973)
static void C_ccall f_2973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2954)
static void C_ccall f_2954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2957)
static void C_ccall f_2957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2960)
static void C_ccall f_2960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2897)
static C_word C_fcall f_2897(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2753)
static void C_ccall f_2753(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2753)
static void C_ccall f_2753r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2849)
static void C_fcall f_2849(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2844)
static void C_fcall f_2844(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2755)
static void C_fcall f_2755(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2768)
static void C_ccall f_2768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2776)
static void C_fcall f_2776(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2809)
static void C_ccall f_2809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2790)
static void C_ccall f_2790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2793)
static void C_ccall f_2793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2734)
static C_word C_fcall f_2734(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2631)
static void C_fcall f_2631(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2723)
static void C_ccall f_2723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2663)
static void C_ccall f_2663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2665)
static void C_fcall f_2665(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2692)
static void C_ccall f_2692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2646)
static void C_ccall f_2646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2566)
static void C_ccall f_2566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2566)
static void C_ccall f_2566r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2570)
static void C_ccall f_2570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2576)
static void C_ccall f_2576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2520)
static void C_ccall f_2520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2485)
static void C_ccall f_2485(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2492)
static void C_ccall f_2492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2498)
static void C_ccall f_2498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2468)
static void C_ccall f_2468(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2472)
static void C_ccall f_2472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2475)
static void C_ccall f_2475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2449)
static void C_ccall f_2449(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2440)
static void C_ccall f_2440(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2375)
static void C_ccall f_2375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2381)
static void C_fcall f_2381(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2385)
static void C_ccall f_2385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2393)
static void C_fcall f_2393(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2419)
static void C_ccall f_2419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2423)
static void C_ccall f_2423(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2411)
static void C_ccall f_2411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2355)
static void C_ccall f_2355(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2363)
static void C_ccall f_2363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2338)
static void C_ccall f_2338(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2349)
static void C_ccall f_2349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2353)
static void C_ccall f_2353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2308)
static void C_ccall f_2308r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2315)
static void C_fcall f_2315(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2324)
static void C_ccall f_2324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2318)
static void C_ccall f_2318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2273)
static void C_ccall f_2273(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2277)
static void C_ccall f_2277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2306)
static void C_ccall f_2306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2292)
static void C_ccall f_2292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2286)
static void C_ccall f_2286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2271)
static void C_ccall f_2271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2257)
static void C_ccall f_2257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2227)
static void C_fcall f_2227(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2231)
static void C_ccall f_2231(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2243)
static void C_ccall f_2243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2190)
static void C_fcall f_2190(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2198)
static void C_ccall f_2198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2181)
static void C_ccall f_2181(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2175)
static void C_ccall f_2175(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2169)
static void C_ccall f_2169(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2145)
static void C_fcall f_2145(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2167)
static void C_ccall f_2167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2155)
static void C_ccall f_2155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2115)
static void C_ccall f_2115(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2143)
static void C_ccall f_2143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2139)
static void C_ccall f_2139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2131)
static void C_ccall f_2131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2059)
static void C_ccall f_2059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2069)
static void C_ccall f_2069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2046)
static void C_ccall f_2046(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2037)
static void C_ccall f_2037(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1986)
static void C_ccall f_1986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1999)
static void C_ccall f_1999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1990)
static void C_ccall f_1990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1966)
static void C_ccall f_1966(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1966)
static void C_ccall f_1966r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1970)
static void C_ccall f_1970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1976)
static void C_ccall f_1976r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1980)
static void C_ccall f_1980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1960)
static void C_ccall f_1960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1922)
static void C_ccall f_1922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1922)
static void C_ccall f_1922r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1926)
static void C_ccall f_1926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1937)
static void C_ccall f_1937(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1937)
static void C_ccall f_1937r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1941)
static void C_ccall f_1941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1931)
static void C_ccall f_1931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1898)
static void C_ccall f_1898r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1907)
static void C_ccall f_1907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1879)
static void C_ccall f_1879(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1886)
static void C_ccall f_1886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1843)
static void C_ccall f_1843(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1843)
static void C_ccall f_1843r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1874)
static void C_ccall f_1874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1864)
static void C_ccall f_1864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1807)
static void C_ccall f_1807(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1807)
static void C_ccall f_1807r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1838)
static void C_ccall f_1838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1828)
static void C_ccall f_1828(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1821)
static void C_ccall f_1821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1789)
static void C_fcall f_1789(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1793)
static void C_ccall f_1793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1783)
static void C_fcall f_1783(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1771)
static C_word C_fcall f_1771(C_word t0);
C_noret_decl(f_1725)
static void C_ccall f_1725(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1725)
static void C_ccall f_1725r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1729)
static void C_ccall f_1729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1741)
static void C_ccall f_1741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1702)
static void C_ccall f_1702(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1723)
static void C_ccall f_1723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1709)
static void C_ccall f_1709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1542)
static void C_ccall f_1542r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1650)
static void C_fcall f_1650(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1645)
static void C_fcall f_1645(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1544)
static void C_fcall f_1544(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1551)
static void C_ccall f_1551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1554)
static void C_ccall f_1554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1557)
static void C_ccall f_1557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1644)
static void C_ccall f_1644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1561)
static void C_ccall f_1561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1578)
static void C_fcall f_1578(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1588)
static void C_ccall f_1588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1600)
static void C_fcall f_1600(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1610)
static void C_ccall f_1610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1515)
static void C_ccall f_1515(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1540)
static void C_ccall f_1540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1536)
static void C_ccall f_1536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1528)
static void C_ccall f_1528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1488)
static void C_ccall f_1488(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1513)
static void C_ccall f_1513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1509)
static void C_ccall f_1509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1461)
static void C_ccall f_1461(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1474)
static void C_ccall f_1474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1413)
static void C_ccall f_1413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1428)
static void C_ccall f_1428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1419)
static void C_ccall f_1419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1422)
static void C_ccall f_1422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1360)
static void C_ccall f_1360(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1379)
static void C_ccall f_1379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1364)
static void C_ccall f_1364(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1373)
static void C_ccall f_1373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1367)
static void C_ccall f_1367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1331)
static void C_ccall f_1331(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1352)
static void C_ccall f_1352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1338)
static void C_ccall f_1338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1325)
static void C_ccall f_1325(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1329)
static void C_ccall f_1329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1319)
static void C_ccall f_1319(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1323)
static void C_ccall f_1323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1313)
static void C_ccall f_1313(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1307)
static void C_ccall f_1307(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1301)
static void C_ccall f_1301(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1305)
static void C_ccall f_1305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1295)
static void C_ccall f_1295(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1299)
static void C_ccall f_1299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1264)
static void C_ccall f_1264(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1264)
static void C_ccall f_1264r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1271)
static void C_ccall f_1271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1226)
static void C_fcall f_1226(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1259)
static void C_ccall f_1259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1255)
static void C_ccall f_1255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1230)
static void C_ccall f_1230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1239)
static void C_ccall f_1239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1188)
static void C_ccall f_1188(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1195)
static void C_ccall f_1195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1198)
static void C_ccall f_1198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1218)
static void C_ccall f_1218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1201)
static void C_ccall f_1201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1208)
static void C_ccall f_1208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1153)
static void C_ccall f_1153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1168)
static void C_ccall f_1168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1162)
static void C_ccall f_1162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1101)
static void C_ccall f_1101(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1101)
static void C_ccall f_1101r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1111)
static void C_ccall f_1111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1114)
static void C_ccall f_1114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1126)
static void C_ccall f_1126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1117)
static void C_ccall f_1117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1083)
static void C_ccall f_1083(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1096)
static void C_ccall f_1096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1042)
static void C_ccall f_1042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1042)
static void C_ccall f_1042r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1075)
static void C_ccall f_1075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1068)
static void C_ccall f_1068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1062)
static void C_ccall f_1062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_997)
static void C_ccall f_997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_997)
static void C_ccall f_997r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1001)
static void C_ccall f_1001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1012)
static void C_ccall f_1012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1008)
static void C_ccall f_1008(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_3687)
static void C_fcall trf_3687(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3687(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3687(t0,t1);}

C_noret_decl(trf_3682)
static void C_fcall trf_3682(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3682(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3682(t0,t1,t2);}

C_noret_decl(trf_3677)
static void C_fcall trf_3677(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3677(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3677(t0,t1,t2,t3);}

C_noret_decl(trf_3532)
static void C_fcall trf_3532(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3532(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3532(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3539)
static void C_fcall trf_3539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3539(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3539(t0,t1);}

C_noret_decl(trf_3551)
static void C_fcall trf_3551(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3551(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3551(t0,t1,t2,t3);}

C_noret_decl(trf_3364)
static void C_fcall trf_3364(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3364(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3364(t0,t1);}

C_noret_decl(trf_3359)
static void C_fcall trf_3359(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3359(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3359(t0,t1,t2);}

C_noret_decl(trf_3354)
static void C_fcall trf_3354(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3354(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3354(t0,t1,t2,t3);}

C_noret_decl(trf_3304)
static void C_fcall trf_3304(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3304(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3304(t0,t1);}

C_noret_decl(trf_3299)
static void C_fcall trf_3299(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3299(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3299(t0,t1,t2);}

C_noret_decl(trf_3294)
static void C_fcall trf_3294(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3294(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3294(t0,t1,t2,t3);}

C_noret_decl(trf_3227)
static void C_fcall trf_3227(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3227(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3227(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3204)
static void C_fcall trf_3204(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3204(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3204(t0,t1,t2,t3);}

C_noret_decl(trf_2940)
static void C_fcall trf_2940(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2940(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2940(t0,t1,t2,t3);}

C_noret_decl(trf_2849)
static void C_fcall trf_2849(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2849(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2849(t0,t1);}

C_noret_decl(trf_2844)
static void C_fcall trf_2844(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2844(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2844(t0,t1,t2);}

C_noret_decl(trf_2755)
static void C_fcall trf_2755(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2755(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2755(t0,t1,t2);}

C_noret_decl(trf_2776)
static void C_fcall trf_2776(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2776(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2776(t0,t1,t2,t3);}

C_noret_decl(trf_2631)
static void C_fcall trf_2631(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2631(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2631(t0,t1,t2);}

C_noret_decl(trf_2665)
static void C_fcall trf_2665(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2665(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2665(t0,t1,t2);}

C_noret_decl(trf_2381)
static void C_fcall trf_2381(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2381(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2381(t0,t1,t2);}

C_noret_decl(trf_2393)
static void C_fcall trf_2393(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2393(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2393(t0,t1,t2);}

C_noret_decl(trf_2315)
static void C_fcall trf_2315(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2315(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2315(t0,t1);}

C_noret_decl(trf_2227)
static void C_fcall trf_2227(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2227(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2227(t0,t1,t2,t3);}

C_noret_decl(trf_2190)
static void C_fcall trf_2190(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2190(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2190(t0,t1,t2);}

C_noret_decl(trf_2145)
static void C_fcall trf_2145(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2145(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2145(t0,t1,t2,t3);}

C_noret_decl(trf_1789)
static void C_fcall trf_1789(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1789(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1789(t0,t1,t2,t3);}

C_noret_decl(trf_1783)
static void C_fcall trf_1783(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1783(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1783(t0,t1);}

C_noret_decl(trf_1650)
static void C_fcall trf_1650(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1650(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1650(t0,t1);}

C_noret_decl(trf_1645)
static void C_fcall trf_1645(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1645(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1645(t0,t1,t2);}

C_noret_decl(trf_1544)
static void C_fcall trf_1544(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1544(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1544(t0,t1,t2,t3);}

C_noret_decl(trf_1578)
static void C_fcall trf_1578(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1578(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1578(t0,t1);}

C_noret_decl(trf_1600)
static void C_fcall trf_1600(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1600(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1600(t0,t1);}

C_noret_decl(trf_1226)
static void C_fcall trf_1226(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1226(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1226(t0,t1);}

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
if(!C_demand_2(2820)){
C_save(t1);
C_rereclaim2(2820*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,517);
lf[1]=C_static_string(C_heaptop,47,"this function is not available on this platform");
lf[3]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[4]=C_h_intern(&lf[4],13,"string-append");
lf[6]=C_h_intern(&lf[6],15,"\003syssignal-hook");
lf[7]=C_static_string(C_heaptop,3," - ");
lf[8]=C_h_intern(&lf[8],17,"\003syspeek-c-string");
lf[9]=C_h_intern(&lf[9],16,"\003sysupdate-errno");
lf[10]=C_static_lambda_info(C_heaptop,38,"(posix-error type7 loc8 msg9 . args10)");
lf[11]=C_h_intern(&lf[11],15,"\003sysposix-error");
lf[12]=C_h_intern(&lf[12],8,"pipe/buf");
lf[13]=C_h_intern(&lf[13],11,"open/rdonly");
lf[14]=C_h_intern(&lf[14],11,"open/wronly");
lf[15]=C_h_intern(&lf[15],9,"open/rdwr");
lf[16]=C_h_intern(&lf[16],9,"open/read");
lf[17]=C_h_intern(&lf[17],10,"open/write");
lf[18]=C_h_intern(&lf[18],10,"open/creat");
lf[19]=C_h_intern(&lf[19],11,"open/append");
lf[20]=C_h_intern(&lf[20],9,"open/excl");
lf[21]=C_h_intern(&lf[21],10,"open/trunc");
lf[22]=C_h_intern(&lf[22],11,"open/binary");
lf[23]=C_h_intern(&lf[23],9,"open/text");
lf[24]=C_h_intern(&lf[24],10,"perm/irusr");
lf[25]=C_h_intern(&lf[25],10,"perm/iwusr");
lf[26]=C_h_intern(&lf[26],10,"perm/ixusr");
lf[27]=C_h_intern(&lf[27],10,"perm/irgrp");
lf[28]=C_h_intern(&lf[28],10,"perm/iwgrp");
lf[29]=C_h_intern(&lf[29],10,"perm/ixgrp");
lf[30]=C_h_intern(&lf[30],10,"perm/iroth");
lf[31]=C_h_intern(&lf[31],10,"perm/iwoth");
lf[32]=C_h_intern(&lf[32],10,"perm/ixoth");
lf[33]=C_h_intern(&lf[33],10,"perm/irwxu");
lf[34]=C_h_intern(&lf[34],10,"perm/irwxg");
lf[35]=C_h_intern(&lf[35],10,"perm/irwxo");
lf[36]=C_h_intern(&lf[36],9,"file-open");
lf[37]=C_h_intern(&lf[37],11,"\000file-error");
lf[38]=C_static_string(C_heaptop,16,"cannot open file");
lf[39]=C_h_intern(&lf[39],17,"\003sysmake-c-string");
lf[40]=C_h_intern(&lf[40],20,"\003sysexpand-home-path");
lf[41]=C_static_lambda_info(C_heaptop,39,"(file-open filename13 flags14 . mode15)");
lf[42]=C_h_intern(&lf[42],10,"file-close");
lf[43]=C_static_string(C_heaptop,17,"cannot close file");
lf[44]=C_static_lambda_info(C_heaptop,17,"(file-close fd23)");
lf[45]=C_h_intern(&lf[45],11,"make-string");
lf[46]=C_h_intern(&lf[46],9,"file-read");
lf[47]=C_static_string(C_heaptop,21,"cannot read from file");
lf[48]=C_h_intern(&lf[48],11,"\000type-error");
lf[49]=C_static_string(C_heaptop,47,"bad argument type - not a string or byte-vector");
lf[50]=C_static_lambda_info(C_heaptop,34,"(file-read fd27 size28 . buffer29)");
lf[51]=C_h_intern(&lf[51],10,"file-write");
lf[52]=C_static_string(C_heaptop,20,"cannot write to file");
lf[53]=C_static_string(C_heaptop,47,"bad argument type - not a string or byte-vector");
lf[54]=C_static_lambda_info(C_heaptop,35,"(file-write fd37 buffer38 . size39)");
lf[55]=C_h_intern(&lf[55],13,"string-length");
lf[56]=C_h_intern(&lf[56],12,"file-mkstemp");
lf[57]=C_h_intern(&lf[57],13,"\003syssubstring");
lf[58]=C_static_string(C_heaptop,28,"cannot create temporary file");
lf[59]=C_static_lambda_info(C_heaptop,25,"(file-mkstemp template48)");
lf[60]=C_h_intern(&lf[60],8,"seek/set");
lf[61]=C_h_intern(&lf[61],8,"seek/end");
lf[62]=C_h_intern(&lf[62],8,"seek/cur");
lf[64]=C_static_string(C_heaptop,18,"cannot access file");
lf[65]=C_static_string(C_heaptop,42,"bad argument type - not a fixnum or string");
lf[66]=C_static_lambda_info(C_heaptop,19,"(##sys#stat file55)");
lf[67]=C_h_intern(&lf[67],9,"file-stat");
lf[68]=C_h_intern(&lf[68],9,"\003syserror");
lf[69]=C_static_lambda_info(C_heaptop,23,"(file-stat f59 . g5860)");
lf[70]=C_h_intern(&lf[70],9,"file-size");
lf[71]=C_static_lambda_info(C_heaptop,15,"(file-size f66)");
lf[72]=C_h_intern(&lf[72],22,"file-modification-time");
lf[73]=C_static_lambda_info(C_heaptop,28,"(file-modification-time f68)");
lf[74]=C_h_intern(&lf[74],16,"file-access-time");
lf[75]=C_static_lambda_info(C_heaptop,22,"(file-access-time f70)");
lf[76]=C_h_intern(&lf[76],16,"file-change-time");
lf[77]=C_static_lambda_info(C_heaptop,22,"(file-change-time f72)");
lf[78]=C_h_intern(&lf[78],10,"file-owner");
lf[79]=C_static_lambda_info(C_heaptop,16,"(file-owner f74)");
lf[80]=C_h_intern(&lf[80],16,"file-permissions");
lf[81]=C_static_lambda_info(C_heaptop,22,"(file-permissions f76)");
lf[82]=C_h_intern(&lf[82],13,"regular-file\077");
lf[83]=C_h_intern(&lf[83],13,"\003sysfile-info");
lf[84]=C_static_lambda_info(C_heaptop,23,"(regular-file\077 fname78)");
lf[85]=C_h_intern(&lf[85],14,"symbolic-link\077");
lf[86]=C_static_lambda_info(C_heaptop,24,"(symbolic-link\077 fname81)");
lf[87]=C_h_intern(&lf[87],13,"file-position");
lf[88]=C_static_string(C_heaptop,37,"cannot retrieve file position of port");
lf[89]=C_h_intern(&lf[89],6,"stream");
lf[90]=C_static_string(C_heaptop,12,"invalid file");
lf[91]=C_h_intern(&lf[91],5,"port\077");
lf[92]=C_static_lambda_info(C_heaptop,22,"(file-position port83)");
lf[93]=C_h_intern(&lf[93],18,"set-file-position!");
lf[94]=C_static_string(C_heaptop,24,"cannot set file position");
lf[95]=C_static_string(C_heaptop,12,"invalid file");
lf[96]=C_h_intern(&lf[96],13,"\000bounds-error");
lf[97]=C_static_string(C_heaptop,30,"invalid negative port position");
lf[98]=C_static_lambda_info(C_heaptop,44,"(set-file-position! port87 pos88 . whence89)");
lf[99]=C_h_intern(&lf[99],16,"create-directory");
lf[100]=C_static_string(C_heaptop,23,"cannot create directory");
lf[101]=C_static_lambda_info(C_heaptop,25,"(create-directory name95)");
lf[102]=C_h_intern(&lf[102],16,"change-directory");
lf[103]=C_static_string(C_heaptop,31,"cannot change current directory");
lf[104]=C_static_lambda_info(C_heaptop,25,"(change-directory name98)");
lf[105]=C_h_intern(&lf[105],16,"delete-directory");
lf[106]=C_static_string(C_heaptop,23,"cannot delete directory");
lf[107]=C_static_lambda_info(C_heaptop,26,"(delete-directory name101)");
lf[108]=C_h_intern(&lf[108],6,"string");
lf[109]=C_h_intern(&lf[109],9,"directory");
lf[110]=C_static_string(C_heaptop,21,"cannot open directory");
lf[111]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[112]=C_h_intern(&lf[112],16,"\003sysmake-pointer");
lf[113]=C_static_lambda_info(C_heaptop,35,"(body111 spec117 show-dotfiles\077118)");
lf[114]=C_static_lambda_info(C_heaptop,35,"(def-show-dotfiles\077114 %spec109138)");
lf[115]=C_h_intern(&lf[115],17,"current-directory");
lf[116]=C_static_lambda_info(C_heaptop,13,"(def-spec113)");
lf[117]=C_static_lambda_info(C_heaptop,21,"(directory . g107108)");
lf[118]=C_h_intern(&lf[118],10,"directory\077");
lf[119]=C_static_lambda_info(C_heaptop,21,"(directory\077 fname144)");
lf[120]=C_static_string(C_heaptop,33,"cannot retrieve current directory");
lf[121]=C_static_lambda_info(C_heaptop,29,"(current-directory . g148149)");
lf[122]=C_h_intern(&lf[122],5,"\000text");
lf[123]=C_static_lambda_info(C_heaptop,6,"(mode)");
lf[124]=C_static_string(C_heaptop,35,"illegal input/output mode specifier");
lf[125]=C_static_lambda_info(C_heaptop,14,"(badmode m160)");
lf[126]=C_static_string(C_heaptop,16,"cannot open pipe");
lf[127]=C_h_intern(&lf[127],13,"\003sysmake-port");
lf[128]=C_h_intern(&lf[128],21,"\003sysstream-port-class");
lf[129]=C_static_string(C_heaptop,6,"(pipe)");
lf[130]=C_static_lambda_info(C_heaptop,26,"(check cmd161 inp162 r163)");
lf[131]=C_h_intern(&lf[131],15,"open-input-pipe");
lf[132]=C_h_intern(&lf[132],7,"\000binary");
lf[133]=C_static_lambda_info(C_heaptop,31,"(open-input-pipe cmd167 . m168)");
lf[134]=C_h_intern(&lf[134],16,"open-output-pipe");
lf[135]=C_static_lambda_info(C_heaptop,32,"(open-output-pipe cmd173 . m174)");
lf[136]=C_h_intern(&lf[136],16,"close-input-pipe");
lf[137]=C_static_string(C_heaptop,24,"error while closing pipe");
lf[138]=C_h_intern(&lf[138],14,"\003syscheck-port");
lf[139]=C_static_lambda_info(C_heaptop,26,"(close-input-pipe port179)");
lf[140]=C_h_intern(&lf[140],17,"close-output-pipe");
lf[141]=C_h_intern(&lf[141],20,"call-with-input-pipe");
lf[142]=C_static_lambda_info(C_heaptop,7,"(a1906)");
lf[143]=C_static_lambda_info(C_heaptop,20,"(a1912 . results197)");
lf[144]=C_static_lambda_info(C_heaptop,47,"(call-with-input-pipe cmd193 proc194 . mode195)");
lf[145]=C_h_intern(&lf[145],21,"call-with-output-pipe");
lf[146]=C_static_lambda_info(C_heaptop,7,"(a1930)");
lf[147]=C_static_lambda_info(C_heaptop,20,"(a1936 . results203)");
lf[148]=C_static_lambda_info(C_heaptop,48,"(call-with-output-pipe cmd199 proc200 . mode201)");
lf[149]=C_h_intern(&lf[149],20,"with-input-from-pipe");
lf[150]=C_h_intern(&lf[150],18,"\003sysstandard-input");
lf[151]=C_static_lambda_info(C_heaptop,20,"(a1955 . results210)");
lf[152]=C_static_lambda_info(C_heaptop,48,"(with-input-from-pipe cmd205 thunk206 . mode207)");
lf[153]=C_h_intern(&lf[153],19,"with-output-to-pipe");
lf[154]=C_h_intern(&lf[154],19,"\003sysstandard-output");
lf[155]=C_static_lambda_info(C_heaptop,20,"(a1975 . results219)");
lf[156]=C_static_lambda_info(C_heaptop,47,"(with-output-to-pipe cmd214 thunk215 . mode216)");
lf[157]=C_h_intern(&lf[157],11,"create-pipe");
lf[158]=C_static_string(C_heaptop,18,"cannot create pipe");
lf[159]=C_static_lambda_info(C_heaptop,13,"(create-pipe)");
lf[160]=C_h_intern(&lf[160],11,"signal/term");
lf[161]=C_h_intern(&lf[161],10,"signal/int");
lf[162]=C_h_intern(&lf[162],10,"signal/fpe");
lf[163]=C_h_intern(&lf[163],10,"signal/ill");
lf[164]=C_h_intern(&lf[164],11,"signal/segv");
lf[165]=C_h_intern(&lf[165],11,"signal/abrt");
lf[166]=C_h_intern(&lf[166],12,"signal/break");
lf[167]=C_h_intern(&lf[167],11,"signal/alrm");
lf[168]=C_h_intern(&lf[168],11,"signal/chld");
lf[169]=C_h_intern(&lf[169],11,"signal/cont");
lf[170]=C_h_intern(&lf[170],10,"signal/hup");
lf[171]=C_h_intern(&lf[171],9,"signal/io");
lf[172]=C_h_intern(&lf[172],11,"signal/kill");
lf[173]=C_h_intern(&lf[173],11,"signal/pipe");
lf[174]=C_h_intern(&lf[174],11,"signal/prof");
lf[175]=C_h_intern(&lf[175],11,"signal/quit");
lf[176]=C_h_intern(&lf[176],11,"signal/stop");
lf[177]=C_h_intern(&lf[177],11,"signal/trap");
lf[178]=C_h_intern(&lf[178],11,"signal/tstp");
lf[179]=C_h_intern(&lf[179],10,"signal/urg");
lf[180]=C_h_intern(&lf[180],11,"signal/usr1");
lf[181]=C_h_intern(&lf[181],11,"signal/usr2");
lf[182]=C_h_intern(&lf[182],13,"signal/vtalrm");
lf[183]=C_h_intern(&lf[183],12,"signal/winch");
lf[184]=C_h_intern(&lf[184],11,"signal/xcpu");
lf[185]=C_h_intern(&lf[185],11,"signal/xfsz");
lf[186]=C_h_intern(&lf[186],12,"signals-list");
lf[187]=C_h_intern(&lf[187],18,"\003sysinterrupt-hook");
lf[188]=C_h_intern(&lf[188],14,"signal-handler");
lf[189]=C_static_lambda_info(C_heaptop,23,"(signal-handler sig230)");
lf[190]=C_h_intern(&lf[190],19,"set-signal-handler!");
lf[191]=C_static_lambda_info(C_heaptop,36,"(set-signal-handler! sig232 proc233)");
lf[192]=C_static_lambda_info(C_heaptop,41,"(##sys#interrupt-hook reason236 state237)");
lf[193]=C_h_intern(&lf[193],10,"errno/perm");
lf[194]=C_h_intern(&lf[194],11,"errno/noent");
lf[195]=C_h_intern(&lf[195],10,"errno/srch");
lf[196]=C_h_intern(&lf[196],10,"errno/intr");
lf[197]=C_h_intern(&lf[197],8,"errno/io");
lf[198]=C_h_intern(&lf[198],12,"errno/noexec");
lf[199]=C_h_intern(&lf[199],10,"errno/badf");
lf[200]=C_h_intern(&lf[200],11,"errno/child");
lf[201]=C_h_intern(&lf[201],11,"errno/nomem");
lf[202]=C_h_intern(&lf[202],11,"errno/acces");
lf[203]=C_h_intern(&lf[203],11,"errno/fault");
lf[204]=C_h_intern(&lf[204],10,"errno/busy");
lf[205]=C_h_intern(&lf[205],11,"errno/exist");
lf[206]=C_h_intern(&lf[206],12,"errno/notdir");
lf[207]=C_h_intern(&lf[207],11,"errno/isdir");
lf[208]=C_h_intern(&lf[208],11,"errno/inval");
lf[209]=C_h_intern(&lf[209],11,"errno/mfile");
lf[210]=C_h_intern(&lf[210],11,"errno/nospc");
lf[211]=C_h_intern(&lf[211],11,"errno/spipe");
lf[212]=C_h_intern(&lf[212],10,"errno/pipe");
lf[213]=C_h_intern(&lf[213],11,"errno/again");
lf[214]=C_h_intern(&lf[214],10,"errno/rofs");
lf[215]=C_h_intern(&lf[215],10,"errno/nxio");
lf[216]=C_h_intern(&lf[216],10,"errno/2big");
lf[217]=C_h_intern(&lf[217],10,"errno/xdev");
lf[218]=C_h_intern(&lf[218],11,"errno/nodev");
lf[219]=C_h_intern(&lf[219],11,"errno/nfile");
lf[220]=C_h_intern(&lf[220],11,"errno/notty");
lf[221]=C_h_intern(&lf[221],10,"errno/fbig");
lf[222]=C_h_intern(&lf[222],11,"errno/mlink");
lf[223]=C_h_intern(&lf[223],9,"errno/dom");
lf[224]=C_h_intern(&lf[224],11,"errno/range");
lf[225]=C_h_intern(&lf[225],12,"errno/deadlk");
lf[226]=C_h_intern(&lf[226],17,"errno/nametoolong");
lf[227]=C_h_intern(&lf[227],11,"errno/nolck");
lf[228]=C_h_intern(&lf[228],11,"errno/nosys");
lf[229]=C_h_intern(&lf[229],14,"errno/notempty");
lf[230]=C_h_intern(&lf[230],11,"errno/ilseq");
lf[231]=C_h_intern(&lf[231],16,"change-file-mode");
lf[232]=C_static_string(C_heaptop,23,"cannot change file mode");
lf[233]=C_static_lambda_info(C_heaptop,32,"(change-file-mode fname242 m243)");
lf[234]=C_static_lambda_info(C_heaptop,33,"(check filename248 acc249 loc250)");
lf[235]=C_h_intern(&lf[235],17,"file-read-access\077");
lf[236]=C_static_lambda_info(C_heaptop,31,"(file-read-access\077 filename254)");
lf[237]=C_h_intern(&lf[237],18,"file-write-access\077");
lf[238]=C_static_lambda_info(C_heaptop,32,"(file-write-access\077 filename255)");
lf[239]=C_h_intern(&lf[239],20,"file-execute-access\077");
lf[240]=C_static_lambda_info(C_heaptop,34,"(file-execute-access\077 filename256)");
lf[241]=C_h_intern(&lf[241],12,"fileno/stdin");
lf[242]=C_h_intern(&lf[242],13,"fileno/stdout");
lf[243]=C_h_intern(&lf[243],13,"fileno/stderr");
lf[244]=C_h_intern(&lf[244],7,"\000append");
lf[245]=C_static_string(C_heaptop,27,"invalid mode for input file");
lf[246]=C_static_string(C_heaptop,1,"a");
lf[247]=C_static_string(C_heaptop,21,"invalid mode argument");
lf[248]=C_static_string(C_heaptop,1,"r");
lf[249]=C_static_string(C_heaptop,1,"w");
lf[250]=C_static_lambda_info(C_heaptop,18,"(mode inp262 m263)");
lf[251]=C_static_string(C_heaptop,16,"cannot open file");
lf[252]=C_static_string(C_heaptop,8,"(fdport)");
lf[253]=C_static_lambda_info(C_heaptop,25,"(check fd267 inp268 r269)");
lf[254]=C_h_intern(&lf[254],16,"open-input-file*");
lf[255]=C_static_lambda_info(C_heaptop,31,"(open-input-file* fd273 . m274)");
lf[256]=C_h_intern(&lf[256],17,"open-output-file*");
lf[257]=C_static_lambda_info(C_heaptop,32,"(open-output-file* fd276 . m277)");
lf[258]=C_h_intern(&lf[258],12,"port->fileno");
lf[259]=C_static_string(C_heaptop,25,"port has no attached file");
lf[260]=C_static_string(C_heaptop,37,"cannot access file-descriptor of port");
lf[261]=C_h_intern(&lf[261],25,"\003syspeek-unsigned-integer");
lf[262]=C_static_lambda_info(C_heaptop,22,"(port->fileno port282)");
lf[263]=C_h_intern(&lf[263],16,"duplicate-fileno");
lf[264]=C_static_string(C_heaptop,32,"cannot duplicate file descriptor");
lf[265]=C_static_lambda_info(C_heaptop,34,"(duplicate-fileno old287 . new288)");
lf[266]=C_h_intern(&lf[266],6,"setenv");
lf[267]=C_static_lambda_info(C_heaptop,22,"(setenv var295 val296)");
lf[268]=C_h_intern(&lf[268],8,"unsetenv");
lf[269]=C_static_lambda_info(C_heaptop,17,"(unsetenv var300)");
lf[270]=C_h_intern(&lf[270],9,"substring");
lf[271]=C_h_intern(&lf[271],19,"current-environment");
lf[272]=C_static_lambda_info(C_heaptop,11,"(scan j314)");
lf[273]=C_static_lambda_info(C_heaptop,11,"(loop i311)");
lf[274]=C_static_lambda_info(C_heaptop,21,"(current-environment)");
lf[275]=C_h_intern(&lf[275],19,"seconds->local-time");
lf[276]=C_h_intern(&lf[276],18,"\003sysdecode-seconds");
lf[277]=C_static_lambda_info(C_heaptop,29,"(seconds->local-time secs317)");
lf[278]=C_h_intern(&lf[278],17,"seconds->utc-time");
lf[279]=C_static_lambda_info(C_heaptop,27,"(seconds->utc-time secs319)");
lf[280]=C_h_intern(&lf[280],15,"seconds->string");
lf[281]=C_static_string(C_heaptop,32,"cannot convert seconds to string");
lf[282]=C_static_lambda_info(C_heaptop,25,"(seconds->string secs327)");
lf[283]=C_h_intern(&lf[283],12,"time->string");
lf[284]=C_static_string(C_heaptop,28,"cannot time vector to string");
lf[285]=C_static_string(C_heaptop,21,"time vector too short");
lf[286]=C_static_lambda_info(C_heaptop,20,"(time->string tm336)");
lf[287]=C_h_intern(&lf[287],19,"local-time->seconds");
lf[288]=C_h_intern(&lf[288],15,"\003syscons-flonum");
lf[289]=C_static_string(C_heaptop,37,"cannot convert time vector to seconds");
lf[290]=C_static_string(C_heaptop,21,"time vector too short");
lf[291]=C_static_lambda_info(C_heaptop,27,"(local-time->seconds tm341)");
lf[292]=C_h_intern(&lf[292],5,"_exit");
lf[293]=C_h_intern(&lf[293],23,"\003syscleanup-before-exit");
lf[294]=C_static_lambda_info(C_heaptop,17,"(_exit . code349)");
lf[295]=C_h_intern(&lf[295],19,"set-buffering-mode!");
lf[296]=C_static_string(C_heaptop,25,"cannot set buffering mode");
lf[297]=C_h_intern(&lf[297],5,"\000full");
lf[298]=C_h_intern(&lf[298],5,"\000line");
lf[299]=C_h_intern(&lf[299],5,"\000none");
lf[300]=C_static_string(C_heaptop,22,"invalid buffering-mode");
lf[301]=C_static_lambda_info(C_heaptop,47,"(set-buffering-mode! port351 mode352 . size353)");
lf[302]=C_h_intern(&lf[302],12,"glob->regexp");
lf[303]=C_h_intern(&lf[303],13,"make-pathname");
lf[304]=C_h_intern(&lf[304],18,"decompose-pathname");
lf[305]=C_h_intern(&lf[305],4,"glob");
lf[306]=C_static_lambda_info(C_heaptop,7,"(a2645)");
lf[307]=C_h_intern(&lf[307],12,"string-match");
lf[308]=C_static_lambda_info(C_heaptop,11,"(loop f381)");
lf[309]=C_static_string(C_heaptop,1,".");
lf[310]=C_static_string(C_heaptop,1,"*");
lf[311]=C_static_lambda_info(C_heaptop,38,"(a2651 dir368371 file369372 ext370373)");
lf[312]=C_static_lambda_info(C_heaptop,15,"(conc paths366)");
lf[313]=C_static_lambda_info(C_heaptop,17,"(glob . paths364)");
lf[314]=C_h_intern(&lf[314],13,"spawn/overlay");
lf[315]=C_h_intern(&lf[315],10,"spawn/wait");
lf[316]=C_h_intern(&lf[316],12,"spawn/nowait");
lf[317]=C_h_intern(&lf[317],13,"spawn/nowaito");
lf[318]=C_h_intern(&lf[318],12,"spawn/detach");
lf[319]=C_static_lambda_info(C_heaptop,24,"(setarg a393399 a392400)");
lf[320]=C_h_intern(&lf[320],24,"pathname-strip-directory");
lf[321]=C_h_intern(&lf[321],15,"process-execute");
lf[322]=C_static_string(C_heaptop,22,"cannot execute process");
lf[323]=C_static_lambda_info(C_heaptop,18,"(do419 al421 i422)");
lf[324]=C_static_lambda_info(C_heaptop,20,"(body409 arglist415)");
lf[325]=C_static_lambda_info(C_heaptop,31,"(def-envlist412 %arglist407435)");
lf[326]=C_static_lambda_info(C_heaptop,16,"(def-arglist411)");
lf[327]=C_static_lambda_info(C_heaptop,39,"(process-execute filename405 . g404406)");
lf[328]=C_static_lambda_info(C_heaptop,24,"(setarg a445451 a444452)");
lf[329]=C_h_intern(&lf[329],13,"process-spawn");
lf[330]=C_static_string(C_heaptop,22,"cannot execute process");
lf[331]=C_static_lambda_info(C_heaptop,18,"(do461 al463 i464)");
lf[332]=C_static_lambda_info(C_heaptop,48,"(process-spawn mode456 filename457 . arglist458)");
lf[333]=C_h_intern(&lf[333],18,"current-process-id");
lf[334]=C_static_lambda_info(C_heaptop,20,"(current-process-id)");
lf[335]=C_h_intern(&lf[335],17,"\003sysshell-command");
lf[336]=C_static_lambda_info(C_heaptop,21,"(##sys#shell-command)");
lf[337]=C_h_intern(&lf[337],27,"\003sysshell-command-arguments");
lf[338]=C_static_string(C_heaptop,2,"/c");
lf[339]=C_static_lambda_info(C_heaptop,41,"(##sys#shell-command-arguments cmdlin483)");
lf[340]=C_h_intern(&lf[340],6,"getenv");
lf[341]=C_h_intern(&lf[341],11,"process-run");
lf[342]=C_static_lambda_info(C_heaptop,28,"(process-run f486 . args487)");
lf[344]=C_static_lambda_info(C_heaptop,22,"(close-handle a489492)");
lf[345]=C_h_intern(&lf[345],11,"\003sysprocess");
lf[346]=C_h_intern(&lf[346],14,"\000process-error");
lf[347]=C_static_string(C_heaptop,22,"cannot execute process");
lf[348]=C_h_intern(&lf[348],17,"\003sysmake-locative");
lf[349]=C_h_intern(&lf[349],8,"location");
lf[350]=C_h_intern(&lf[350],4,"conc");
lf[351]=C_static_string(C_heaptop,1," ");
lf[352]=C_static_lambda_info(C_heaptop,24,"(loop args531 cmdlin532)");
lf[353]=C_static_lambda_info(C_heaptop,76,"(##sys#process loc522 cmd523 args524 env525 stdoutf526 stdinf527 stderrf528)");
lf[354]=C_static_lambda_info(C_heaptop,7,"(a3241)");
lf[355]=C_static_lambda_info(C_heaptop,34,"(a3247 in573 out574 pid575 err576)");
lf[356]=C_static_lambda_info(C_heaptop,15,"(a3265 g570571)");
lf[357]=C_h_intern(&lf[357],12,"\003sysfor-each");
lf[358]=C_static_lambda_info(C_heaptop,15,"(a3277 g566567)");
lf[359]=C_static_lambda_info(C_heaptop,47,"(%process loc561 err\077562 cmd563 args564 env565)");
lf[360]=C_h_intern(&lf[360],7,"process");
lf[361]=C_static_lambda_info(C_heaptop,24,"(body585 args591 env592)");
lf[362]=C_static_lambda_info(C_heaptop,24,"(def-env588 %args583594)");
lf[363]=C_static_lambda_info(C_heaptop,13,"(def-args587)");
lf[364]=C_static_lambda_info(C_heaptop,26,"(process cmd581 . g580582)");
lf[365]=C_h_intern(&lf[365],8,"process*");
lf[366]=C_static_lambda_info(C_heaptop,24,"(body605 args611 env612)");
lf[367]=C_static_lambda_info(C_heaptop,24,"(def-env608 %args603614)");
lf[368]=C_static_lambda_info(C_heaptop,13,"(def-args607)");
lf[369]=C_static_lambda_info(C_heaptop,27,"(process* cmd601 . g600602)");
lf[370]=C_h_intern(&lf[370],16,"\003sysprocess-wait");
lf[371]=C_static_lambda_info(C_heaptop,37,"(##sys#process-wait pid621 nohang622)");
lf[372]=C_h_intern(&lf[372],12,"process-wait");
lf[373]=C_static_lambda_info(C_heaptop,7,"(a3444)");
lf[374]=C_static_string(C_heaptop,32,"waiting for child process failed");
lf[375]=C_static_lambda_info(C_heaptop,33,"(a3450 epid630 enorm631 ecode632)");
lf[376]=C_static_lambda_info(C_heaptop,31,"(process-wait pid623 . args624)");
lf[377]=C_h_intern(&lf[377],5,"sleep");
lf[378]=C_static_lambda_info(C_heaptop,12,"(sleep t635)");
lf[379]=C_h_intern(&lf[379],13,"get-host-name");
lf[380]=C_static_string(C_heaptop,25,"cannot retrieve host-name");
lf[381]=C_static_lambda_info(C_heaptop,15,"(get-host-name)");
lf[382]=C_h_intern(&lf[382],18,"system-information");
lf[383]=C_static_string(C_heaptop,7,"windows");
lf[384]=C_static_string(C_heaptop,34,"cannot retrieve system-information");
lf[385]=C_static_lambda_info(C_heaptop,20,"(system-information)");
lf[386]=C_h_intern(&lf[386],10,"find-files");
lf[387]=C_static_lambda_info(C_heaptop,13,"(f_3656 x663)");
lf[388]=C_static_string(C_heaptop,1,".");
lf[389]=C_static_string(C_heaptop,2,"..");
lf[390]=C_h_intern(&lf[390],19,"\003sysundefined-value");
lf[391]=C_static_lambda_info(C_heaptop,7,"(a3596)");
lf[392]=C_static_string(C_heaptop,1,"*");
lf[393]=C_static_lambda_info(C_heaptop,7,"(a3604)");
lf[394]=C_static_lambda_info(C_heaptop,7,"(a3618)");
lf[395]=C_h_intern(&lf[395],16,"\003sysdynamic-wind");
lf[396]=C_h_intern(&lf[396],13,"pathname-file");
lf[397]=C_static_lambda_info(C_heaptop,17,"(loop fs665 r666)");
lf[398]=C_static_string(C_heaptop,1,"*");
lf[399]=C_static_lambda_info(C_heaptop,15,"(f_3672 . _661)");
lf[400]=C_static_lambda_info(C_heaptop,15,"(f_3664 . _660)");
lf[401]=C_static_lambda_info(C_heaptop,34,"(body648 action655 id656 limit657)");
lf[402]=C_static_lambda_info(C_heaptop,38,"(def-limit652 %action645680 %id646681)");
lf[403]=C_static_lambda_info(C_heaptop,25,"(def-id651 %action645683)");
lf[404]=C_static_lambda_info(C_heaptop,17,"(a3692 x685 y686)");
lf[405]=C_static_lambda_info(C_heaptop,15,"(def-action650)");
lf[406]=C_static_lambda_info(C_heaptop,48,"(find-files dir642 pred643 . action-id-limit644)");
lf[407]=C_h_intern(&lf[407],17,"change-file-owner");
lf[408]=C_h_intern(&lf[408],5,"error");
lf[409]=C_static_lambda_info(C_heaptop,26,"(change-file-owner . _693)");
lf[410]=C_h_intern(&lf[410],11,"create-fifo");
lf[411]=C_static_lambda_info(C_heaptop,20,"(create-fifo . _695)");
lf[412]=C_h_intern(&lf[412],14,"create-session");
lf[413]=C_static_lambda_info(C_heaptop,23,"(create-session . _696)");
lf[414]=C_h_intern(&lf[414],20,"create-symbolic-link");
lf[415]=C_static_lambda_info(C_heaptop,29,"(create-symbolic-link . _697)");
lf[416]=C_h_intern(&lf[416],26,"current-effective-group-id");
lf[417]=C_static_lambda_info(C_heaptop,35,"(current-effective-group-id . _698)");
lf[418]=C_h_intern(&lf[418],25,"current-effective-user-id");
lf[419]=C_static_lambda_info(C_heaptop,34,"(current-effective-user-id . _699)");
lf[420]=C_h_intern(&lf[420],16,"current-group-id");
lf[421]=C_static_lambda_info(C_heaptop,25,"(current-group-id . _700)");
lf[422]=C_h_intern(&lf[422],15,"current-user-id");
lf[423]=C_static_lambda_info(C_heaptop,24,"(current-user-id . _701)");
lf[424]=C_h_intern(&lf[424],18,"map-file-to-memory");
lf[425]=C_static_lambda_info(C_heaptop,27,"(map-file-to-memory . _702)");
lf[426]=C_h_intern(&lf[426],9,"file-link");
lf[427]=C_static_lambda_info(C_heaptop,18,"(file-link . _703)");
lf[428]=C_h_intern(&lf[428],9,"file-lock");
lf[429]=C_static_lambda_info(C_heaptop,18,"(file-lock . _704)");
lf[430]=C_h_intern(&lf[430],18,"file-lock/blocking");
lf[431]=C_static_lambda_info(C_heaptop,27,"(file-lock/blocking . _705)");
lf[432]=C_h_intern(&lf[432],11,"file-select");
lf[433]=C_static_lambda_info(C_heaptop,20,"(file-select . _706)");
lf[434]=C_h_intern(&lf[434],14,"file-test-lock");
lf[435]=C_static_lambda_info(C_heaptop,23,"(file-test-lock . _707)");
lf[436]=C_h_intern(&lf[436],13,"file-truncate");
lf[437]=C_static_lambda_info(C_heaptop,22,"(file-truncate . _708)");
lf[438]=C_h_intern(&lf[438],11,"file-unlock");
lf[439]=C_static_lambda_info(C_heaptop,20,"(file-unlock . _709)");
lf[440]=C_h_intern(&lf[440],10,"get-groups");
lf[441]=C_static_lambda_info(C_heaptop,19,"(get-groups . _710)");
lf[442]=C_h_intern(&lf[442],17,"group-information");
lf[443]=C_static_lambda_info(C_heaptop,26,"(group-information . _711)");
lf[444]=C_h_intern(&lf[444],17,"initialize-groups");
lf[445]=C_static_lambda_info(C_heaptop,26,"(initialize-groups . _712)");
lf[446]=C_h_intern(&lf[446],27,"local-timezone-abbreviation");
lf[447]=C_static_lambda_info(C_heaptop,36,"(local-timezone-abbreviation . _713)");
lf[448]=C_h_intern(&lf[448],26,"memory-mapped-file-pointer");
lf[449]=C_static_lambda_info(C_heaptop,35,"(memory-mapped-file-pointer . _714)");
lf[450]=C_h_intern(&lf[450],17,"parent-process-id");
lf[451]=C_static_lambda_info(C_heaptop,26,"(parent-process-id . _715)");
lf[452]=C_h_intern(&lf[452],12,"process-fork");
lf[453]=C_static_lambda_info(C_heaptop,21,"(process-fork . _716)");
lf[454]=C_h_intern(&lf[454],16,"process-group-id");
lf[455]=C_static_lambda_info(C_heaptop,25,"(process-group-id . _717)");
lf[456]=C_h_intern(&lf[456],14,"process-signal");
lf[457]=C_static_lambda_info(C_heaptop,23,"(process-signal . _718)");
lf[458]=C_h_intern(&lf[458],18,"read-symbolic-link");
lf[459]=C_static_lambda_info(C_heaptop,27,"(read-symbolic-link . _719)");
lf[460]=C_h_intern(&lf[460],10,"set-alarm!");
lf[461]=C_static_lambda_info(C_heaptop,19,"(set-alarm! . _720)");
lf[462]=C_h_intern(&lf[462],13,"set-group-id!");
lf[463]=C_static_lambda_info(C_heaptop,22,"(set-group-id! . _721)");
lf[464]=C_h_intern(&lf[464],11,"set-groups!");
lf[465]=C_static_lambda_info(C_heaptop,20,"(set-groups! . _722)");
lf[466]=C_h_intern(&lf[466],21,"set-process-group-id!");
lf[467]=C_static_lambda_info(C_heaptop,30,"(set-process-group-id! . _723)");
lf[468]=C_h_intern(&lf[468],19,"set-root-directory!");
lf[469]=C_static_lambda_info(C_heaptop,28,"(set-root-directory! . _724)");
lf[470]=C_h_intern(&lf[470],16,"set-signal-mask!");
lf[471]=C_static_lambda_info(C_heaptop,25,"(set-signal-mask! . _725)");
lf[472]=C_h_intern(&lf[472],12,"set-user-id!");
lf[473]=C_static_lambda_info(C_heaptop,21,"(set-user-id! . _726)");
lf[474]=C_h_intern(&lf[474],11,"signal-mask");
lf[475]=C_static_lambda_info(C_heaptop,20,"(signal-mask . _727)");
lf[476]=C_h_intern(&lf[476],12,"signal-mask!");
lf[477]=C_static_lambda_info(C_heaptop,21,"(signal-mask! . _728)");
lf[478]=C_h_intern(&lf[478],14,"signal-masked\077");
lf[479]=C_static_lambda_info(C_heaptop,23,"(signal-masked\077 . _729)");
lf[480]=C_h_intern(&lf[480],14,"signal-unmask!");
lf[481]=C_static_lambda_info(C_heaptop,23,"(signal-unmask! . _730)");
lf[482]=C_h_intern(&lf[482],13,"terminal-name");
lf[483]=C_static_lambda_info(C_heaptop,22,"(terminal-name . _731)");
lf[484]=C_h_intern(&lf[484],14,"terminal-port\077");
lf[485]=C_static_lambda_info(C_heaptop,23,"(terminal-port\077 . _732)");
lf[486]=C_h_intern(&lf[486],22,"unmap-file-from-memory");
lf[487]=C_static_lambda_info(C_heaptop,31,"(unmap-file-from-memory . _733)");
lf[488]=C_h_intern(&lf[488],16,"user-information");
lf[489]=C_static_lambda_info(C_heaptop,25,"(user-information . _734)");
lf[490]=C_h_intern(&lf[490],17,"utc-time->seconds");
lf[491]=C_static_lambda_info(C_heaptop,26,"(utc-time->seconds . _735)");
lf[492]=C_h_intern(&lf[492],16,"errno/wouldblock");
lf[493]=C_h_intern(&lf[493],5,"fifo\077");
lf[494]=C_static_lambda_info(C_heaptop,12,"(fifo\077 _736)");
lf[495]=C_h_intern(&lf[495],19,"memory-mapped-file\077");
lf[496]=C_static_lambda_info(C_heaptop,26,"(memory-mapped-file\077 _737)");
lf[497]=C_h_intern(&lf[497],13,"map/anonymous");
lf[498]=C_h_intern(&lf[498],8,"map/file");
lf[499]=C_h_intern(&lf[499],9,"map/fixed");
lf[500]=C_h_intern(&lf[500],11,"map/private");
lf[501]=C_h_intern(&lf[501],10,"map/shared");
lf[502]=C_h_intern(&lf[502],10,"open/fsync");
lf[503]=C_h_intern(&lf[503],11,"open/noctty");
lf[504]=C_h_intern(&lf[504],13,"open/nonblock");
lf[505]=C_h_intern(&lf[505],9,"open/sync");
lf[506]=C_h_intern(&lf[506],10,"perm/isgid");
lf[507]=C_h_intern(&lf[507],10,"perm/isuid");
lf[508]=C_h_intern(&lf[508],10,"perm/isvtx");
lf[509]=C_h_intern(&lf[509],9,"prot/exec");
lf[510]=C_h_intern(&lf[510],9,"prot/none");
lf[511]=C_h_intern(&lf[511],9,"prot/read");
lf[512]=C_h_intern(&lf[512],10,"prot/write");
lf[513]=C_h_intern(&lf[513],11,"make-vector");
lf[514]=C_h_intern(&lf[514],17,"register-feature!");
lf[515]=C_h_intern(&lf[515],5,"posix");
lf[516]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,517,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=C_mutate(&lf[2],lf[3]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_973,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t4);}

/* k971 */
static void C_ccall f_973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_973,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_976,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_regex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k974 in k971 */
static void C_ccall f_976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_979,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k977 in k974 in k971 */
static void C_ccall f_979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_979,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_982,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k980 in k977 in k974 in k971 */
static void C_ccall f_982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_982,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_985,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 792  register-feature! */
t3=*((C_word*)lf[514]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[515]);}

/* k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_985(C_word c,C_word t0,C_word t1){
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
C_word ab[154],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_985,2,t0,t1);}
t2=*((C_word*)lf[4]+1);
t3=C_mutate(&lf[5],(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_997,a[2]=t2,a[3]=lf[10],tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[11]+1,lf[5]);
t5=C_mutate((C_word*)lf[12]+1,C_fix((C_word)PIPE_BUF));
t6=C_mutate((C_word*)lf[13]+1,C_fix((C_word)O_RDONLY));
t7=C_mutate((C_word*)lf[14]+1,C_fix((C_word)O_WRONLY));
t8=C_mutate((C_word*)lf[15]+1,C_fix((C_word)O_RDWR));
t9=C_mutate((C_word*)lf[16]+1,C_fix((C_word)O_RDWR));
t10=C_mutate((C_word*)lf[17]+1,C_fix((C_word)O_WRONLY));
t11=C_mutate((C_word*)lf[18]+1,C_fix((C_word)O_CREAT));
t12=C_mutate((C_word*)lf[19]+1,C_fix((C_word)O_APPEND));
t13=C_mutate((C_word*)lf[20]+1,C_fix((C_word)O_EXCL));
t14=C_mutate((C_word*)lf[21]+1,C_fix((C_word)O_TRUNC));
t15=C_mutate((C_word*)lf[22]+1,C_fix((C_word)O_BINARY));
t16=C_mutate((C_word*)lf[23]+1,C_fix((C_word)O_TEXT));
t17=C_mutate((C_word*)lf[24]+1,C_fix((C_word)S_IREAD));
t18=C_mutate((C_word*)lf[25]+1,C_fix((C_word)S_IWRITE));
t19=C_mutate((C_word*)lf[26]+1,C_fix((C_word)S_IEXEC));
t20=C_mutate((C_word*)lf[27]+1,C_fix((C_word)S_IREAD));
t21=C_mutate((C_word*)lf[28]+1,C_fix((C_word)S_IWRITE));
t22=C_mutate((C_word*)lf[29]+1,C_fix((C_word)S_IEXEC));
t23=C_mutate((C_word*)lf[30]+1,C_fix((C_word)S_IREAD));
t24=C_mutate((C_word*)lf[31]+1,C_fix((C_word)S_IWRITE));
t25=C_mutate((C_word*)lf[32]+1,C_fix((C_word)S_IEXEC));
t26=C_mutate((C_word*)lf[33]+1,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t27=C_mutate((C_word*)lf[34]+1,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t28=C_mutate((C_word*)lf[35]+1,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC));
t29=(C_word)C_fixnum_or(C_fix((C_word)S_IREAD),C_fix((C_word)S_IREAD));
t30=(C_word)C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IREAD | S_IWRITE | S_IEXEC),t29);
t31=C_mutate((C_word*)lf[36]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1042,a[2]=t30,a[3]=lf[41],tmp=(C_word)a,a+=4,tmp));
t32=C_mutate((C_word*)lf[42]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1083,a[2]=lf[44],tmp=(C_word)a,a+=3,tmp));
t33=*((C_word*)lf[45]+1);
t34=C_mutate((C_word*)lf[46]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1101,a[2]=t33,a[3]=lf[50],tmp=(C_word)a,a+=4,tmp));
t35=C_mutate((C_word*)lf[51]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1146,a[2]=lf[54],tmp=(C_word)a,a+=3,tmp));
t36=*((C_word*)lf[55]+1);
t37=C_mutate((C_word*)lf[56]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1188,a[2]=t36,a[3]=lf[59],tmp=(C_word)a,a+=4,tmp));
t38=C_mutate((C_word*)lf[60]+1,C_fix((C_word)SEEK_SET));
t39=C_mutate((C_word*)lf[61]+1,C_fix((C_word)SEEK_END));
t40=C_mutate((C_word*)lf[62]+1,C_fix((C_word)SEEK_CUR));
t41=C_mutate(&lf[63],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1226,a[2]=lf[66],tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[67]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1264,a[2]=lf[69],tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[70]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1295,a[2]=lf[71],tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[72]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1301,a[2]=lf[73],tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[74]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1307,a[2]=lf[75],tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[76]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1313,a[2]=lf[77],tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[78]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1319,a[2]=lf[79],tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[80]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1325,a[2]=lf[81],tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[82]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1331,a[2]=lf[84],tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[85]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1354,a[2]=lf[86],tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[87]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1360,a[2]=lf[92],tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[93]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1400,a[2]=lf[98],tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[99]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1461,a[2]=lf[101],tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[102]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1488,a[2]=lf[104],tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[105]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1515,a[2]=lf[107],tmp=(C_word)a,a+=3,tmp));
t56=*((C_word*)lf[4]+1);
t57=*((C_word*)lf[45]+1);
t58=*((C_word*)lf[108]+1);
t59=C_mutate((C_word*)lf[109]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1542,a[2]=t57,a[3]=lf[117],tmp=(C_word)a,a+=4,tmp));
t60=C_mutate((C_word*)lf[118]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1702,a[2]=lf[119],tmp=(C_word)a,a+=3,tmp));
t61=*((C_word*)lf[45]+1);
t62=C_mutate((C_word*)lf[115]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1725,a[2]=t61,a[3]=lf[121],tmp=(C_word)a,a+=4,tmp));
t63=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1771,a[2]=lf[123],tmp=(C_word)a,a+=3,tmp);
t64=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1783,a[2]=lf[125],tmp=(C_word)a,a+=3,tmp);
t65=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1789,a[2]=lf[130],tmp=(C_word)a,a+=3,tmp);
t66=C_mutate((C_word*)lf[131]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1807,a[2]=t64,a[3]=t65,a[4]=t63,a[5]=lf[133],tmp=(C_word)a,a+=6,tmp));
t67=C_mutate((C_word*)lf[134]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1843,a[2]=t64,a[3]=t65,a[4]=t63,a[5]=lf[135],tmp=(C_word)a,a+=6,tmp));
t68=C_mutate((C_word*)lf[136]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1879,a[2]=lf[139],tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[140]+1,*((C_word*)lf[136]+1));
t70=*((C_word*)lf[131]+1);
t71=*((C_word*)lf[134]+1);
t72=*((C_word*)lf[136]+1);
t73=*((C_word*)lf[140]+1);
t74=C_mutate((C_word*)lf[141]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1898,a[2]=t70,a[3]=t72,a[4]=lf[144],tmp=(C_word)a,a+=5,tmp));
t75=C_mutate((C_word*)lf[145]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1922,a[2]=t71,a[3]=t73,a[4]=lf[148],tmp=(C_word)a,a+=5,tmp));
t76=C_mutate((C_word*)lf[149]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1946,a[2]=t70,a[3]=t72,a[4]=lf[152],tmp=(C_word)a,a+=5,tmp));
t77=C_mutate((C_word*)lf[153]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1966,a[2]=t71,a[3]=t73,a[4]=lf[156],tmp=(C_word)a,a+=5,tmp));
t78=C_mutate((C_word*)lf[157]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1986,a[2]=lf[159],tmp=(C_word)a,a+=3,tmp));
t79=C_mutate((C_word*)lf[160]+1,C_fix((C_word)SIGTERM));
t80=C_mutate((C_word*)lf[161]+1,C_fix((C_word)SIGINT));
t81=C_mutate((C_word*)lf[162]+1,C_fix((C_word)SIGFPE));
t82=C_mutate((C_word*)lf[163]+1,C_fix((C_word)SIGILL));
t83=C_mutate((C_word*)lf[164]+1,C_fix((C_word)SIGSEGV));
t84=C_mutate((C_word*)lf[165]+1,C_fix((C_word)SIGABRT));
t85=C_mutate((C_word*)lf[166]+1,C_fix((C_word)SIGBREAK));
t86=C_set_block_item(lf[167],0,C_fix(0));
t87=C_set_block_item(lf[168],0,C_fix(0));
t88=C_set_block_item(lf[169],0,C_fix(0));
t89=C_set_block_item(lf[170],0,C_fix(0));
t90=C_set_block_item(lf[171],0,C_fix(0));
t91=C_set_block_item(lf[172],0,C_fix(0));
t92=C_set_block_item(lf[173],0,C_fix(0));
t93=C_set_block_item(lf[174],0,C_fix(0));
t94=C_set_block_item(lf[175],0,C_fix(0));
t95=C_set_block_item(lf[176],0,C_fix(0));
t96=C_set_block_item(lf[177],0,C_fix(0));
t97=C_set_block_item(lf[178],0,C_fix(0));
t98=C_set_block_item(lf[179],0,C_fix(0));
t99=C_set_block_item(lf[180],0,C_fix(0));
t100=C_set_block_item(lf[181],0,C_fix(0));
t101=C_set_block_item(lf[182],0,C_fix(0));
t102=C_set_block_item(lf[183],0,C_fix(0));
t103=C_set_block_item(lf[184],0,C_fix(0));
t104=C_set_block_item(lf[185],0,C_fix(0));
t105=(C_word)C_a_i_list(&a,7,*((C_word*)lf[160]+1),*((C_word*)lf[161]+1),*((C_word*)lf[162]+1),*((C_word*)lf[163]+1),*((C_word*)lf[164]+1),*((C_word*)lf[165]+1),*((C_word*)lf[166]+1));
t106=C_mutate((C_word*)lf[186]+1,t105);
t107=*((C_word*)lf[187]+1);
t108=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2035,a[2]=((C_word*)t0)[2],a[3]=t107,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1207 make-vector */
t109=*((C_word*)lf[513]+1);
((C_proc4)(void*)(*((C_word*)t109+1)))(4,t109,t108,C_fix(256),C_SCHEME_FALSE);}

/* k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2035(C_word c,C_word t0,C_word t1){
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
C_word ab[291],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2035,2,t0,t1);}
t2=C_mutate((C_word*)lf[188]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2037,a[2]=t1,a[3]=lf[189],tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[190]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2046,a[2]=t1,a[3]=lf[191],tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[187]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2059,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=lf[192],tmp=(C_word)a,a+=5,tmp));
t5=C_mutate((C_word*)lf[193]+1,C_fix((C_word)EPERM));
t6=C_mutate((C_word*)lf[194]+1,C_fix((C_word)ENOENT));
t7=C_mutate((C_word*)lf[195]+1,C_fix((C_word)ESRCH));
t8=C_mutate((C_word*)lf[196]+1,C_fix((C_word)EINTR));
t9=C_mutate((C_word*)lf[197]+1,C_fix((C_word)EIO));
t10=C_mutate((C_word*)lf[198]+1,C_fix((C_word)ENOEXEC));
t11=C_mutate((C_word*)lf[199]+1,C_fix((C_word)EBADF));
t12=C_mutate((C_word*)lf[200]+1,C_fix((C_word)ECHILD));
t13=C_mutate((C_word*)lf[201]+1,C_fix((C_word)ENOMEM));
t14=C_mutate((C_word*)lf[202]+1,C_fix((C_word)EACCES));
t15=C_mutate((C_word*)lf[203]+1,C_fix((C_word)EFAULT));
t16=C_mutate((C_word*)lf[204]+1,C_fix((C_word)EBUSY));
t17=C_mutate((C_word*)lf[205]+1,C_fix((C_word)EEXIST));
t18=C_mutate((C_word*)lf[206]+1,C_fix((C_word)ENOTDIR));
t19=C_mutate((C_word*)lf[207]+1,C_fix((C_word)EISDIR));
t20=C_mutate((C_word*)lf[208]+1,C_fix((C_word)EINVAL));
t21=C_mutate((C_word*)lf[209]+1,C_fix((C_word)EMFILE));
t22=C_mutate((C_word*)lf[210]+1,C_fix((C_word)ENOSPC));
t23=C_mutate((C_word*)lf[211]+1,C_fix((C_word)ESPIPE));
t24=C_mutate((C_word*)lf[212]+1,C_fix((C_word)EPIPE));
t25=C_mutate((C_word*)lf[213]+1,C_fix((C_word)EAGAIN));
t26=C_mutate((C_word*)lf[214]+1,C_fix((C_word)EROFS));
t27=C_mutate((C_word*)lf[215]+1,C_fix((C_word)ENXIO));
t28=C_mutate((C_word*)lf[216]+1,C_fix((C_word)E2BIG));
t29=C_mutate((C_word*)lf[217]+1,C_fix((C_word)EXDEV));
t30=C_mutate((C_word*)lf[218]+1,C_fix((C_word)ENODEV));
t31=C_mutate((C_word*)lf[219]+1,C_fix((C_word)ENFILE));
t32=C_mutate((C_word*)lf[220]+1,C_fix((C_word)ENOTTY));
t33=C_mutate((C_word*)lf[221]+1,C_fix((C_word)EFBIG));
t34=C_mutate((C_word*)lf[222]+1,C_fix((C_word)EMLINK));
t35=C_mutate((C_word*)lf[223]+1,C_fix((C_word)EDOM));
t36=C_mutate((C_word*)lf[224]+1,C_fix((C_word)ERANGE));
t37=C_mutate((C_word*)lf[225]+1,C_fix((C_word)EDEADLK));
t38=C_mutate((C_word*)lf[226]+1,C_fix((C_word)ENAMETOOLONG));
t39=C_mutate((C_word*)lf[227]+1,C_fix((C_word)ENOLCK));
t40=C_mutate((C_word*)lf[228]+1,C_fix((C_word)ENOSYS));
t41=C_mutate((C_word*)lf[229]+1,C_fix((C_word)ENOTEMPTY));
t42=C_mutate((C_word*)lf[230]+1,C_fix((C_word)EILSEQ));
t43=C_mutate((C_word*)lf[231]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2115,a[2]=lf[233],tmp=(C_word)a,a+=3,tmp));
t44=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2145,a[2]=lf[234],tmp=(C_word)a,a+=3,tmp);
t45=C_mutate((C_word*)lf[235]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2169,a[2]=t44,a[3]=lf[236],tmp=(C_word)a,a+=4,tmp));
t46=C_mutate((C_word*)lf[237]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2175,a[2]=t44,a[3]=lf[238],tmp=(C_word)a,a+=4,tmp));
t47=C_mutate((C_word*)lf[239]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2181,a[2]=t44,a[3]=lf[240],tmp=(C_word)a,a+=4,tmp));
t48=C_mutate((C_word*)lf[241]+1,C_fix((C_word)0));
t49=C_mutate((C_word*)lf[242]+1,C_fix((C_word)1));
t50=C_mutate((C_word*)lf[243]+1,C_fix((C_word)2));
t51=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2190,a[2]=lf[250],tmp=(C_word)a,a+=3,tmp);
t52=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2227,a[2]=lf[253],tmp=(C_word)a,a+=3,tmp);
t53=C_mutate((C_word*)lf[254]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2245,a[2]=t51,a[3]=t52,a[4]=lf[255],tmp=(C_word)a,a+=5,tmp));
t54=C_mutate((C_word*)lf[256]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2259,a[2]=t51,a[3]=t52,a[4]=lf[257],tmp=(C_word)a,a+=5,tmp));
t55=C_mutate((C_word*)lf[258]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2273,a[2]=lf[262],tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[263]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2308,a[2]=lf[265],tmp=(C_word)a,a+=3,tmp));
t57=C_mutate((C_word*)lf[266]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2338,a[2]=lf[267],tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[268]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2355,a[2]=lf[269],tmp=(C_word)a,a+=3,tmp));
t59=*((C_word*)lf[270]+1);
t60=C_mutate((C_word*)lf[271]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2375,a[2]=t59,a[3]=lf[274],tmp=(C_word)a,a+=4,tmp));
t61=C_mutate((C_word*)lf[275]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2440,a[2]=lf[277],tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[278]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2449,a[2]=lf[279],tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[280]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2468,a[2]=lf[282],tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[283]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2485,a[2]=lf[286],tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[287]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2513,a[2]=lf[291],tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[292]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2547,a[2]=lf[294],tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[295]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2566,a[2]=lf[301],tmp=(C_word)a,a+=3,tmp));
t68=*((C_word*)lf[302]+1);
t69=*((C_word*)lf[109]+1);
t70=*((C_word*)lf[303]+1);
t71=*((C_word*)lf[304]+1);
t72=C_mutate((C_word*)lf[305]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2625,a[2]=t68,a[3]=t69,a[4]=t70,a[5]=t71,a[6]=lf[313],tmp=(C_word)a,a+=7,tmp));
t73=C_mutate((C_word*)lf[314]+1,C_fix((C_word)P_OVERLAY));
t74=C_mutate((C_word*)lf[315]+1,C_fix((C_word)P_WAIT));
t75=C_mutate((C_word*)lf[316]+1,C_fix((C_word)P_NOWAIT));
t76=C_mutate((C_word*)lf[317]+1,C_fix((C_word)P_NOWAITO));
t77=C_mutate((C_word*)lf[318]+1,C_fix((C_word)P_DETACH));
t78=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2734,a[2]=lf[319],tmp=(C_word)a,a+=3,tmp);
t79=*((C_word*)lf[320]+1);
t80=C_mutate((C_word*)lf[321]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2753,a[2]=t79,a[3]=t78,a[4]=lf[327],tmp=(C_word)a,a+=5,tmp));
t81=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2897,a[2]=lf[328],tmp=(C_word)a,a+=3,tmp);
t82=*((C_word*)lf[320]+1);
t83=C_mutate((C_word*)lf[329]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2916,a[2]=t82,a[3]=t81,a[4]=lf[332],tmp=(C_word)a,a+=5,tmp));
t84=C_mutate((C_word*)lf[333]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3009,a[2]=lf[334],tmp=(C_word)a,a+=3,tmp));
t85=C_mutate((C_word*)lf[335]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3012,a[2]=lf[336],tmp=(C_word)a,a+=3,tmp));
t86=C_mutate((C_word*)lf[337]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3018,a[2]=lf[339],tmp=(C_word)a,a+=3,tmp));
t87=*((C_word*)lf[329]+1);
t88=*((C_word*)lf[340]+1);
t89=C_mutate((C_word*)lf[341]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3024,a[2]=t87,a[3]=lf[342],tmp=(C_word)a,a+=4,tmp));
t90=C_mutate(&lf[343],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3053,a[2]=lf[344],tmp=(C_word)a,a+=3,tmp));
t91=C_mutate((C_word*)lf[345]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3108,a[2]=lf[353],tmp=(C_word)a,a+=3,tmp));
t92=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3227,a[2]=lf[359],tmp=(C_word)a,a+=3,tmp);
t93=C_mutate((C_word*)lf[360]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3292,a[2]=t92,a[3]=lf[364],tmp=(C_word)a,a+=4,tmp));
t94=C_mutate((C_word*)lf[365]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3352,a[2]=t92,a[3]=lf[369],tmp=(C_word)a,a+=4,tmp));
t95=C_mutate((C_word*)lf[370]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3412,a[2]=lf[371],tmp=(C_word)a,a+=3,tmp));
t96=C_mutate((C_word*)lf[372]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3424,a[2]=lf[376],tmp=(C_word)a,a+=3,tmp));
t97=C_mutate((C_word*)lf[377]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3484,a[2]=lf[378],tmp=(C_word)a,a+=3,tmp));
t98=C_mutate((C_word*)lf[379]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3487,a[2]=lf[381],tmp=(C_word)a,a+=3,tmp));
t99=C_mutate((C_word*)lf[382]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3499,a[2]=lf[385],tmp=(C_word)a,a+=3,tmp));
t100=*((C_word*)lf[305]+1);
t101=*((C_word*)lf[307]+1);
t102=*((C_word*)lf[303]+1);
t103=*((C_word*)lf[118]+1);
t104=C_mutate((C_word*)lf[386]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3530,a[2]=t103,a[3]=t102,a[4]=t100,a[5]=t101,a[6]=lf[406],tmp=(C_word)a,a+=7,tmp));
t105=C_mutate((C_word*)lf[407]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3756,a[2]=lf[409],tmp=(C_word)a,a+=3,tmp));
t106=C_mutate((C_word*)lf[410]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3762,a[2]=lf[411],tmp=(C_word)a,a+=3,tmp));
t107=C_mutate((C_word*)lf[412]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3768,a[2]=lf[413],tmp=(C_word)a,a+=3,tmp));
t108=C_mutate((C_word*)lf[414]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3774,a[2]=lf[415],tmp=(C_word)a,a+=3,tmp));
t109=C_mutate((C_word*)lf[416]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3780,a[2]=lf[417],tmp=(C_word)a,a+=3,tmp));
t110=C_mutate((C_word*)lf[418]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3786,a[2]=lf[419],tmp=(C_word)a,a+=3,tmp));
t111=C_mutate((C_word*)lf[420]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3792,a[2]=lf[421],tmp=(C_word)a,a+=3,tmp));
t112=C_mutate((C_word*)lf[422]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3798,a[2]=lf[423],tmp=(C_word)a,a+=3,tmp));
t113=C_mutate((C_word*)lf[424]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3804,a[2]=lf[425],tmp=(C_word)a,a+=3,tmp));
t114=C_mutate((C_word*)lf[426]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3810,a[2]=lf[427],tmp=(C_word)a,a+=3,tmp));
t115=C_mutate((C_word*)lf[428]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3816,a[2]=lf[429],tmp=(C_word)a,a+=3,tmp));
t116=C_mutate((C_word*)lf[430]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3822,a[2]=lf[431],tmp=(C_word)a,a+=3,tmp));
t117=C_mutate((C_word*)lf[432]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3828,a[2]=lf[433],tmp=(C_word)a,a+=3,tmp));
t118=C_mutate((C_word*)lf[434]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3834,a[2]=lf[435],tmp=(C_word)a,a+=3,tmp));
t119=C_mutate((C_word*)lf[436]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3840,a[2]=lf[437],tmp=(C_word)a,a+=3,tmp));
t120=C_mutate((C_word*)lf[438]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3846,a[2]=lf[439],tmp=(C_word)a,a+=3,tmp));
t121=C_mutate((C_word*)lf[440]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3852,a[2]=lf[441],tmp=(C_word)a,a+=3,tmp));
t122=C_mutate((C_word*)lf[442]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3858,a[2]=lf[443],tmp=(C_word)a,a+=3,tmp));
t123=C_mutate((C_word*)lf[444]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3864,a[2]=lf[445],tmp=(C_word)a,a+=3,tmp));
t124=C_mutate((C_word*)lf[446]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3870,a[2]=lf[447],tmp=(C_word)a,a+=3,tmp));
t125=C_mutate((C_word*)lf[448]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3876,a[2]=lf[449],tmp=(C_word)a,a+=3,tmp));
t126=C_mutate((C_word*)lf[450]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3882,a[2]=lf[451],tmp=(C_word)a,a+=3,tmp));
t127=C_mutate((C_word*)lf[452]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3888,a[2]=lf[453],tmp=(C_word)a,a+=3,tmp));
t128=C_mutate((C_word*)lf[454]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3894,a[2]=lf[455],tmp=(C_word)a,a+=3,tmp));
t129=C_mutate((C_word*)lf[456]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3900,a[2]=lf[457],tmp=(C_word)a,a+=3,tmp));
t130=C_mutate((C_word*)lf[458]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3906,a[2]=lf[459],tmp=(C_word)a,a+=3,tmp));
t131=C_mutate((C_word*)lf[460]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3912,a[2]=lf[461],tmp=(C_word)a,a+=3,tmp));
t132=C_mutate((C_word*)lf[462]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3918,a[2]=lf[463],tmp=(C_word)a,a+=3,tmp));
t133=C_mutate((C_word*)lf[464]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3924,a[2]=lf[465],tmp=(C_word)a,a+=3,tmp));
t134=C_mutate((C_word*)lf[466]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3930,a[2]=lf[467],tmp=(C_word)a,a+=3,tmp));
t135=C_mutate((C_word*)lf[468]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3936,a[2]=lf[469],tmp=(C_word)a,a+=3,tmp));
t136=C_mutate((C_word*)lf[470]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3942,a[2]=lf[471],tmp=(C_word)a,a+=3,tmp));
t137=C_mutate((C_word*)lf[472]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3948,a[2]=lf[473],tmp=(C_word)a,a+=3,tmp));
t138=C_mutate((C_word*)lf[474]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3954,a[2]=lf[475],tmp=(C_word)a,a+=3,tmp));
t139=C_mutate((C_word*)lf[476]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3960,a[2]=lf[477],tmp=(C_word)a,a+=3,tmp));
t140=C_mutate((C_word*)lf[478]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3966,a[2]=lf[479],tmp=(C_word)a,a+=3,tmp));
t141=C_mutate((C_word*)lf[480]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3972,a[2]=lf[481],tmp=(C_word)a,a+=3,tmp));
t142=C_mutate((C_word*)lf[482]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3978,a[2]=lf[483],tmp=(C_word)a,a+=3,tmp));
t143=C_mutate((C_word*)lf[484]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3984,a[2]=lf[485],tmp=(C_word)a,a+=3,tmp));
t144=C_mutate((C_word*)lf[486]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3990,a[2]=lf[487],tmp=(C_word)a,a+=3,tmp));
t145=C_mutate((C_word*)lf[488]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3996,a[2]=lf[489],tmp=(C_word)a,a+=3,tmp));
t146=C_mutate((C_word*)lf[490]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4002,a[2]=lf[491],tmp=(C_word)a,a+=3,tmp));
t147=C_set_block_item(lf[492],0,C_fix(0));
t148=C_mutate((C_word*)lf[493]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4009,a[2]=lf[494],tmp=(C_word)a,a+=3,tmp));
t149=C_mutate((C_word*)lf[495]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4012,a[2]=lf[496],tmp=(C_word)a,a+=3,tmp));
t150=C_set_block_item(lf[497],0,C_fix(0));
t151=C_set_block_item(lf[498],0,C_fix(0));
t152=C_set_block_item(lf[499],0,C_fix(0));
t153=C_set_block_item(lf[500],0,C_fix(0));
t154=C_set_block_item(lf[501],0,C_fix(0));
t155=C_set_block_item(lf[502],0,C_fix(0));
t156=C_set_block_item(lf[503],0,C_fix(0));
t157=C_set_block_item(lf[504],0,C_fix(0));
t158=C_set_block_item(lf[505],0,C_fix(0));
t159=C_set_block_item(lf[506],0,C_fix(0));
t160=C_set_block_item(lf[507],0,C_fix(0));
t161=C_set_block_item(lf[508],0,C_fix(0));
t162=C_set_block_item(lf[509],0,C_fix(0));
t163=C_set_block_item(lf[510],0,C_fix(0));
t164=C_set_block_item(lf[511],0,C_fix(0));
t165=C_set_block_item(lf[512],0,C_fix(0));
t166=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t166+1)))(2,t166,C_SCHEME_UNDEFINED);}

/* memory-mapped-file? in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_4012(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4012,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* fifo? in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_4009(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4009,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* utc-time->seconds in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_4002(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4002,2,t0,t1);}
/* posixwin.scm: 1794 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[490],lf[0]);}

/* user-information in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3996(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3996,2,t0,t1);}
/* posixwin.scm: 1793 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[488],lf[0]);}

/* unmap-file-from-memory in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3990(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3990,2,t0,t1);}
/* posixwin.scm: 1792 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[486],lf[0]);}

/* terminal-port? in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3984(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3984,2,t0,t1);}
/* posixwin.scm: 1791 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[484],lf[0]);}

/* terminal-name in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3978(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3978,2,t0,t1);}
/* posixwin.scm: 1790 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[482],lf[0]);}

/* signal-unmask! in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3972(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3972,2,t0,t1);}
/* posixwin.scm: 1789 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[480],lf[0]);}

/* signal-masked? in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3966(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3966,2,t0,t1);}
/* posixwin.scm: 1788 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[478],lf[0]);}

/* signal-mask! in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3960(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3960,2,t0,t1);}
/* posixwin.scm: 1787 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[476],lf[0]);}

/* signal-mask in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3954(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3954,2,t0,t1);}
/* posixwin.scm: 1786 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[474],lf[0]);}

/* set-user-id! in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3948(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3948,2,t0,t1);}
/* posixwin.scm: 1785 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[472],lf[0]);}

/* set-signal-mask! in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3942(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3942,2,t0,t1);}
/* posixwin.scm: 1784 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[470],lf[0]);}

/* set-root-directory! in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3936(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3936,2,t0,t1);}
/* posixwin.scm: 1783 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[468],lf[0]);}

/* set-process-group-id! in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3930(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3930,2,t0,t1);}
/* posixwin.scm: 1782 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[466],lf[0]);}

/* set-groups! in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3924(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3924,2,t0,t1);}
/* posixwin.scm: 1781 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[464],lf[0]);}

/* set-group-id! in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3918(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3918,2,t0,t1);}
/* posixwin.scm: 1780 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[462],lf[0]);}

/* set-alarm! in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3912(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3912,2,t0,t1);}
/* posixwin.scm: 1779 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[460],lf[0]);}

/* read-symbolic-link in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3906(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3906,2,t0,t1);}
/* posixwin.scm: 1778 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[458],lf[0]);}

/* process-signal in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3900(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3900,2,t0,t1);}
/* posixwin.scm: 1777 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[456],lf[0]);}

/* process-group-id in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3894(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3894,2,t0,t1);}
/* posixwin.scm: 1776 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[454],lf[0]);}

/* process-fork in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3888(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3888,2,t0,t1);}
/* posixwin.scm: 1775 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[452],lf[0]);}

/* parent-process-id in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3882(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3882,2,t0,t1);}
/* posixwin.scm: 1774 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[450],lf[0]);}

/* memory-mapped-file-pointer in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3876(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3876,2,t0,t1);}
/* posixwin.scm: 1773 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[448],lf[0]);}

/* local-timezone-abbreviation in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3870(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3870,2,t0,t1);}
/* posixwin.scm: 1772 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[446],lf[0]);}

/* initialize-groups in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3864(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3864,2,t0,t1);}
/* posixwin.scm: 1771 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[444],lf[0]);}

/* group-information in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3858(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3858,2,t0,t1);}
/* posixwin.scm: 1770 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[442],lf[0]);}

/* get-groups in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3852(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3852,2,t0,t1);}
/* posixwin.scm: 1769 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[440],lf[0]);}

/* file-unlock in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3846(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3846,2,t0,t1);}
/* posixwin.scm: 1768 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[438],lf[0]);}

/* file-truncate in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3840(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3840,2,t0,t1);}
/* posixwin.scm: 1767 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[436],lf[0]);}

/* file-test-lock in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3834(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3834,2,t0,t1);}
/* posixwin.scm: 1766 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[434],lf[0]);}

/* file-select in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3828(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3828,2,t0,t1);}
/* posixwin.scm: 1765 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[432],lf[0]);}

/* file-lock/blocking in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3822(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3822,2,t0,t1);}
/* posixwin.scm: 1764 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[430],lf[0]);}

/* file-lock in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3816(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3816,2,t0,t1);}
/* posixwin.scm: 1763 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[428],lf[0]);}

/* file-link in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3810(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3810,2,t0,t1);}
/* posixwin.scm: 1762 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[426],lf[0]);}

/* map-file-to-memory in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3804(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3804,2,t0,t1);}
/* posixwin.scm: 1761 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[424],lf[0]);}

/* current-user-id in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3798(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3798,2,t0,t1);}
/* posixwin.scm: 1760 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[422],lf[0]);}

/* current-group-id in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3792(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3792,2,t0,t1);}
/* posixwin.scm: 1759 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[420],lf[0]);}

/* current-effective-user-id in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3786(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3786,2,t0,t1);}
/* posixwin.scm: 1758 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[418],lf[0]);}

/* current-effective-group-id in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3780(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3780,2,t0,t1);}
/* posixwin.scm: 1757 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[416],lf[0]);}

/* create-symbolic-link in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3774(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3774,2,t0,t1);}
/* posixwin.scm: 1756 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[414],lf[0]);}

/* create-session in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3768(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3768,2,t0,t1);}
/* posixwin.scm: 1755 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[412],lf[0]);}

/* create-fifo in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3762(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3762,2,t0,t1);}
/* posixwin.scm: 1754 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[410],lf[0]);}

/* change-file-owner in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3756(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3756,2,t0,t1);}
/* posixwin.scm: 1753 error */
t2=*((C_word*)lf[408]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[407],lf[0]);}

/* find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3530(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+21)){
C_save_and_reclaim((void*)tr4r,(void*)f_3530r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3530r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3530r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(21);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t2,a[8]=lf[401],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3677,a[2]=t5,a[3]=lf[402],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3682,a[2]=t6,a[3]=lf[403],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3687,a[2]=t7,a[3]=lf[405],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-action650684 */
t9=t8;
f_3687(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-id651682 */
t11=t7;
f_3682(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* def-limit652679 */
t13=t6;
f_3677(t13,t1,t9,t11);}
else{
t13=(C_word)C_i_car(t12);
t14=(C_word)C_i_cdr(t12);
if(C_truep((C_word)C_i_nullp(t14))){
/* body648654 */
t15=t5;
f_3532(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[2],t14);}}}}}

/* def-action650 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_3687(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3687,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3693,a[2]=lf[404],tmp=(C_word)a,a+=3,tmp);
/* def-id651682 */
t3=((C_word*)t0)[2];
f_3682(t3,t1,t2);}

/* a3692 in def-action650 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3693(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3693,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t2,t3));}

/* def-id651 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_3682(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3682,NULL,3,t0,t1,t2);}
/* def-limit652679 */
t3=((C_word*)t0)[2];
f_3677(t3,t1,t2,C_SCHEME_END_OF_LIST);}

/* def-limit652 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_3677(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3677,NULL,4,t0,t1,t2,t3);}
/* body648654 */
t4=((C_word*)t0)[2];
f_3532(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_3532(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3532,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(((C_word*)t0)[7],lf[386]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3539,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=t7,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
t9=t4;
if(C_truep(t9)){
t10=(C_word)C_fixnump(t4);
t11=t8;
f_3539(t11,(C_truep(t10)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3672,a[2]=t4,a[3]=t7,a[4]=lf[399],tmp=(C_word)a,a+=5,tmp):t4));}
else{
t10=t8;
f_3539(t10,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3664,a[2]=lf[400],tmp=(C_word)a,a+=3,tmp));}}

/* f_3664 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3664(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3664,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_3672 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3672(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3672,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]));}

/* k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_3539(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3539,NULL,2,t0,t1);}
t2=(C_word)C_i_stringp(((C_word*)t0)[11]);
t3=(C_truep(t2)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3656,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[10],a[4]=lf[387],tmp=(C_word)a,a+=5,tmp):((C_word*)t0)[11]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3549,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3652,a[2]=t4,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1731 make-pathname */
t6=((C_word*)t0)[7];
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[2],lf[398]);}

/* k3650 in k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1731 glob */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k3547 in k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3549,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3551,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t3,a[10]=lf[397],tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_3551(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* loop in k3547 in k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_3551(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3551,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3570,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=t5,a[11]=t1,a[12]=((C_word*)t0)[9],tmp=(C_word)a,a+=13,tmp);
/* posixwin.scm: 1737 directory? */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t4);}}

/* k3568 in loop in k3547 in k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3570,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3632,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* posixwin.scm: 1738 pathname-file */
t3=*((C_word*)lf[396]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3638,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm: 1744 pproc */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[5]);}}

/* k3636 in k3568 in loop in k3547 in k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3638,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3645,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1744 action */
t3=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* posixwin.scm: 1745 loop */
t2=((C_word*)((C_word*)t0)[7])[1];
f_3551(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k3643 in k3636 in k3568 in loop in k3547 in k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1744 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3551(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3630 in k3568 in loop in k3547 in k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3632(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3632,2,t0,t1);}
if(C_truep((C_truep((C_word)C_i_equalp(t1,lf[388]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t1,lf[389]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posixwin.scm: 1738 loop */
t2=((C_word*)((C_word*)t0)[10])[1];
f_3551(t2,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3585,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* posixwin.scm: 1739 lproc */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}}

/* k3583 in k3630 in k3568 in loop in k3547 in k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3585(C_word c,C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3585,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[9])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3595,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3597,a[2]=t4,a[3]=((C_word*)t0)[9],a[4]=t6,a[5]=lf[391],tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3605,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=lf[393],tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3619,a[2]=t6,a[3]=((C_word*)t0)[9],a[4]=t4,a[5]=lf[394],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1741 ##sys#dynamic-wind */
t11=*((C_word*)lf[395]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t7,t8,t9,t10);}
else{
/* posixwin.scm: 1743 loop */
t2=((C_word*)((C_word*)t0)[8])[1];
f_3551(t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}}

/* a3618 in k3583 in k3630 in k3568 in loop in k3547 in k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3619,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[390]+1));}

/* a3604 in k3583 in k3630 in k3568 in loop in k3547 in k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3613,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3617,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1742 make-pathname */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],lf[392]);}

/* k3615 in a3604 in k3583 in k3630 in k3568 in loop in k3547 in k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1742 glob */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k3611 in a3604 in k3583 in k3630 in k3568 in loop in k3547 in k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1742 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3551(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a3596 in k3583 in k3630 in k3568 in loop in k3547 in k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3597,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[390]+1));}

/* k3593 in k3583 in k3630 in k3568 in loop in k3547 in k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1740 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3551(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_3656 in k3537 in body648 in find-files in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3656(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3656,3,t0,t1,t2);}
/* posixwin.scm: 1729 string-match */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* system-information in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3499,2,t0,t1);}
if(C_truep((C_word)C_sysinfo())){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3510,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3525,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1706 ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k3523 in system-information in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1707 ##sys#error */
t2=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[382],lf[384]);}

/* k3508 in system-information in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3510,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3514,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_osrel),C_fix(0));}

/* k3512 in k3508 in system-information in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3514,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3518,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_osver),C_fix(0));}

/* k3516 in k3512 in k3508 in system-information in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3518,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3522,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_processor),C_fix(0));}

/* k3520 in k3516 in k3512 in k3508 in system-information in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3522,2,t0,t1);}
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,5,lf[383],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* get-host-name in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3487,2,t0,t1);}
if(C_truep((C_word)C_get_hostname())){
/* ##sys#peek-c-string */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,C_mpointer(&a,(void*)C_hostname),C_fix(0));}
else{
/* posixwin.scm: 1699 ##sys#error */
t2=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[379],lf[380]);}}

/* sleep in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3484(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3484,3,t0,t1,t2);}
t3=(C_word)C_sleep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(0));}

/* process-wait in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3424(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_3424r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3424r(t0,t1,t2,t3);}}

static void C_ccall f_3424r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(9);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:(C_word)C_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
if(C_truep((C_word)C_i_nullp(t7))){
t8=(C_word)C_i_check_exact_2(t2,lf[372]);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3445,a[2]=t5,a[3]=t2,a[4]=lf[373],tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3451,a[2]=t2,a[3]=lf[375],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1678 ##sys#call-with-values */
C_call_with_values(4,0,t1,t9,t10);}
else{
/* ##sys#error */
t8=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,lf[2],t7);}}

/* a3450 in process-wait in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3451(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3451,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3461,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1681 ##sys#update-errno */
t7=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
/* posixwin.scm: 1683 values */
C_values(5,0,t1,t2,t3,t4);}}

/* k3459 in a3450 in process-wait in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1682 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[346],lf[372],lf[374],((C_word*)t0)[2]);}

/* a3444 in process-wait in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3445,2,t0,t1);}
/* posixwin.scm: 1678 ##sys#process-wait */
t2=*((C_word*)lf[370]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#process-wait in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3412,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_process_wait(t2,t3))){
/* posixwin.scm: 1671 values */
C_values(5,0,t1,t2,C_SCHEME_TRUE,C_fix((C_word)C_exstatus));}
else{
/* posixwin.scm: 1672 values */
C_values(5,0,t1,C_fix(-1),C_SCHEME_FALSE,C_SCHEME_FALSE);}}

/* process* in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3352(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_3352r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3352r(t0,t1,t2,t3);}}

static void C_ccall f_3352r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(13);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3354,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[366],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3359,a[2]=t4,a[3]=lf[367],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3364,a[2]=t5,a[3]=lf[368],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-args607615 */
t7=t6;
f_3364(t7,t1);}
else{
t7=(C_word)C_i_car(t3);
t8=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t8))){
/* def-env608613 */
t9=t5;
f_3359(t9,t1,t7);}
else{
t9=(C_word)C_i_car(t8);
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
/* body605610 */
t11=t4;
f_3354(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[2],t10);}}}}

/* def-args607 in process* in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_3364(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3364,NULL,2,t0,t1);}
/* def-env608613 */
t2=((C_word*)t0)[2];
f_3359(t2,t1,C_SCHEME_FALSE);}

/* def-env608 in process* in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_3359(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3359,NULL,3,t0,t1,t2);}
/* body605610 */
t3=((C_word*)t0)[2];
f_3354(t3,t1,t2,C_SCHEME_FALSE);}

/* body605 in process* in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_3354(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3354,NULL,4,t0,t1,t2,t3);}
/* posixwin.scm: 1665 %process */
f_3227(t1,lf[365],C_SCHEME_TRUE,((C_word*)t0)[2],t2,t3);}

/* process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3292(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_3292r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3292r(t0,t1,t2,t3);}}

static void C_ccall f_3292r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(13);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3294,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[361],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3299,a[2]=t4,a[3]=lf[362],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3304,a[2]=t5,a[3]=lf[363],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-args587595 */
t7=t6;
f_3304(t7,t1);}
else{
t7=(C_word)C_i_car(t3);
t8=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t8))){
/* def-env588593 */
t9=t5;
f_3299(t9,t1,t7);}
else{
t9=(C_word)C_i_car(t8);
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
/* body585590 */
t11=t4;
f_3294(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[2],t10);}}}}

/* def-args587 in process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_3304(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3304,NULL,2,t0,t1);}
/* def-env588593 */
t2=((C_word*)t0)[2];
f_3299(t2,t1,C_SCHEME_FALSE);}

/* def-env588 in process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_3299(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3299,NULL,3,t0,t1,t2);}
/* body585590 */
t3=((C_word*)t0)[2];
f_3294(t3,t1,t2,C_SCHEME_FALSE);}

/* body585 in process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_3294(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3294,NULL,4,t0,t1,t2,t3);}
/* posixwin.scm: 1662 %process */
f_3227(t1,lf[360],C_SCHEME_FALSE,((C_word*)t0)[2],t2,t3);}

/* %process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_3227(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3227,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t9=(C_word)C_i_check_string_2(((C_word*)t7)[1],t2);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3234,a[2]=t1,a[3]=t3,a[4]=t6,a[5]=t8,a[6]=t7,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t8)[1])){
t11=(C_word)C_i_check_list_2(((C_word*)t8)[1],t2);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3278,a[2]=t2,a[3]=lf[358],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t13=*((C_word*)lf[357]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t10,t12,((C_word*)t8)[1]);}
else{
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3286,a[2]=t10,a[3]=t7,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1650 ##sys#shell-command-arguments */
t12=*((C_word*)lf[337]+1);
((C_proc3)C_retrieve_proc(t12))(3,t12,t11,((C_word*)t7)[1]);}}

/* k3284 in %process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3286,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3290,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1651 ##sys#shell-command */
t4=*((C_word*)lf[335]+1);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k3288 in k3284 in %process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_3234(2,t3,t2);}

/* a3277 in %process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3278(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3278,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_check_string_2(t2,((C_word*)t0)[2]));}

/* k3232 in %process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3234,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3237,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(C_word)C_i_check_list_2(((C_word*)t0)[4],((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3266,a[2]=((C_word*)t0)[7],a[3]=lf[356],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t5=*((C_word*)lf[357]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t4,((C_word*)t0)[4]);}
else{
t3=t2;
f_3237(2,t3,C_SCHEME_UNDEFINED);}}

/* a3265 in k3232 in %process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3266(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3266,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_check_string_2(t2,((C_word*)t0)[2]));}

/* k3235 in k3232 in %process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3237,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3242,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=lf[354],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3248,a[2]=((C_word*)t0)[3],a[3]=lf[355],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1655 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a3247 in k3235 in k3232 in %process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3248(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3248,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(((C_word*)t0)[2])){
/* posixwin.scm: 1658 values */
C_values(6,0,t1,t2,t3,t4,t5);}
else{
/* posixwin.scm: 1659 values */
C_values(5,0,t1,t2,t3,t4);}}

/* a3241 in k3235 in k3232 in %process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3242,2,t0,t1);}
/* posixwin.scm: 1656 ##sys#process */
t2=*((C_word*)lf[345]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,t1,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* ##sys#process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3108(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[14],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_3108,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3112,a[2]=t2,a[3]=t6,a[4]=t7,a[5]=t8,a[6]=t1,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3204,a[2]=t11,a[3]=lf[352],tmp=(C_word)a,a+=4,tmp));
t13=((C_word*)t11)[1];
f_3204(t13,t9,t4,t3);}
else{
t10=t9;
f_3112(2,t10,t3);}}

/* loop in ##sys#process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_3204(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3204,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3222,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_car(t2);
/* posixwin.scm: 1622 conc */
t7=*((C_word*)lf[350]+1);
((C_proc5)C_retrieve_proc(t7))(5,t7,t5,t3,lf[351],t6);}}

/* k3220 in loop in ##sys#process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1622 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_3204(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3110 in ##sys#process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3112(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3112,2,t0,t1);}
t2=(C_word)C_a_i_bytevector(&a,1,C_fix(1));
t3=(C_word)C_i_foreign_fixnum_argumentp(C_fix(-1));
t4=((*(int *)C_data_pointer(t2))=C_unfix(t3),C_SCHEME_UNDEFINED);
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(1));
t6=(C_word)C_i_foreign_fixnum_argumentp(C_fix(-1));
t7=((*(int *)C_data_pointer(t5))=C_unfix(t6),C_SCHEME_UNDEFINED);
t8=(C_word)C_a_i_bytevector(&a,1,C_fix(1));
t9=(C_word)C_i_foreign_fixnum_argumentp(C_fix(-1));
t10=((*(int *)C_data_pointer(t8))=C_unfix(t9),C_SCHEME_UNDEFINED);
t11=(C_word)C_a_i_bytevector(&a,1,C_fix(1));
t12=(C_word)C_i_foreign_fixnum_argumentp(C_fix(-1));
t13=((*(int *)C_data_pointer(t11))=C_unfix(t12),C_SCHEME_UNDEFINED);
t14=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3171,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=((C_word*)t0)[4],a[7]=t11,a[8]=((C_word*)t0)[5],a[9]=t2,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
/* ##sys#make-locative */
t15=*((C_word*)lf[348]+1);
((C_proc6)C_retrieve_proc(t15))(6,t15,t14,t2,C_fix(0),C_SCHEME_FALSE,lf[349]);}

/* k3169 in k3110 in ##sys#process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3171,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_3175,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* ##sys#make-locative */
t3=*((C_word*)lf[348]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,((C_word*)t0)[5],C_fix(0),C_SCHEME_FALSE,lf[349]);}

/* k3173 in k3169 in k3110 in ##sys#process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3175,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_3179,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* ##sys#make-locative */
t3=*((C_word*)lf[348]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,((C_word*)t0)[3],C_fix(0),C_SCHEME_FALSE,lf[349]);}

/* k3177 in k3173 in k3169 in k3110 in ##sys#process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3179,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_3183,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* ##sys#make-locative */
t3=*((C_word*)lf[348]+1);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,((C_word*)t0)[7],C_fix(0),C_SCHEME_FALSE,lf[349]);}

/* k3181 in k3177 in k3173 in k3169 in k3110 in ##sys#process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3183,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_3187,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],tmp=(C_word)a,a+=17,tmp);
t3=(C_truep(((C_word*)t0)[6])?C_fix(0):C_fix(1));
t4=(C_truep(((C_word*)t0)[4])?C_fix(0):C_fix(2));
t5=(C_truep(((C_word*)t0)[8])?C_fix(0):C_fix(4));
/* posixwin.scm: 1629 + */
C_plus(5,0,t2,t3,t4,t5);}

/* k3185 in k3181 in k3177 in k3173 in k3169 in k3110 in ##sys#process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3187(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3187,2,t0,t1);}
t2=((C_word*)t0)[16];
t3=((C_word*)t0)[15];
t4=((C_word*)t0)[14];
t5=((C_word*)t0)[13];
t6=((C_word*)t0)[12];
t7=((C_word*)t0)[11];
t8=(*a=C_CLOSURE_TYPE|17,a[1]=(C_word)f_3061,a[2]=((C_word*)t0)[16],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=t1,a[13]=t7,a[14]=t6,a[15]=t5,a[16]=t4,a[17]=t3,tmp=(C_word)a,a+=18,tmp);
if(C_truep(t2)){
t9=(C_word)C_i_foreign_string_argumentp(t2);
/* ##sys#make-c-string */
t10=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
t9=t8;
f_3061(2,t9,C_SCHEME_FALSE);}}

/* k3059 in k3185 in k3181 in k3177 in k3173 in k3169 in k3110 in ##sys#process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3061(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3061,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[17])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[17]):C_SCHEME_FALSE);
t3=(C_truep(((C_word*)t0)[16])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[16]):C_SCHEME_FALSE);
t4=(C_truep(((C_word*)t0)[15])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[15]):C_SCHEME_FALSE);
t5=(C_truep(((C_word*)t0)[14])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[14]):C_SCHEME_FALSE);
t6=(C_truep(((C_word*)t0)[13])?(C_word)C_i_foreign_pointer_argumentp(((C_word*)t0)[13]):C_SCHEME_FALSE);
t7=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[12]);
t8=(C_word)stub501(C_SCHEME_UNDEFINED,t1,t2,t3,t4,t5,t6,t7);
t9=(C_word)C_eqp(C_fix(0),t8);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3144,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[5])){
/* posixwin.scm: 1632 open-input-file* */
t11=*((C_word*)lf[254]+1);
((C_proc3)C_retrieve_proc(t11))(3,t11,t10,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[4]))));}
else{
t11=t10;
f_3144(2,t11,C_SCHEME_FALSE);}}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3164,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1637 ##sys#update-errno */
t11=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}}

/* k3162 in k3059 in k3185 in k3181 in k3177 in k3173 in k3169 in k3110 in ##sys#process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1638 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[346],((C_word*)t0)[3],lf[347],((C_word*)t0)[2]);}

/* k3142 in k3059 in k3185 in k3181 in k3177 in k3173 in k3169 in k3110 in ##sys#process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3144,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3148,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm: 1633 open-output-file* */
t3=*((C_word*)lf[256]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))));}
else{
t3=t2;
f_3148(2,t3,C_SCHEME_FALSE);}}

/* k3146 in k3142 in k3059 in k3185 in k3181 in k3177 in k3173 in k3169 in k3110 in ##sys#process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3148,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3152,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
/* posixwin.scm: 1635 open-input-file* */
t3=*((C_word*)lf[254]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))));}
else{
t3=t2;
f_3152(2,t3,C_SCHEME_FALSE);}}

/* k3150 in k3146 in k3142 in k3059 in k3185 in k3181 in k3177 in k3173 in k3169 in k3110 in ##sys#process in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1631 values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],C_fix((C_word)*((int *)C_data_pointer(((C_word*)t0)[2]))),t1);}

/* close-handle in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3053(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3053,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub490(C_SCHEME_UNDEFINED,t2));}

/* process-run in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3024(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_3024r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_3024r(t0,t1,t2,t3);}}

static void C_ccall f_3024r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t5)){
/* posixwin.scm: 1597 process-spawn */
t6=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t6))(5,t6,t1,*((C_word*)lf[316]+1),t2,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3041,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1598 ##sys#shell-command */
t7=*((C_word*)lf[335]+1);
((C_proc2)C_retrieve_proc(t7))(2,t7,t6);}}

/* k3039 in process-run in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3041,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3045,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1598 ##sys#shell-command-arguments */
t3=*((C_word*)lf[337]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k3043 in k3039 in process-run in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1598 process-spawn */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],*((C_word*)lf[316]+1),((C_word*)t0)[2],t1);}

/* ##sys#shell-command-arguments in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3018(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3018,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[338],t2));}

/* ##sys#shell-command in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3012,2,t0,t1);}
t2=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,(C_word)stub480(t2),C_fix(0));}

/* current-process-id in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_3009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3009,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub478(C_SCHEME_UNDEFINED));}

/* process-spawn in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2916(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2916r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2916r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2916r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(7);
t5=(C_word)C_i_check_exact_2(t2,lf[329]);
t6=(C_word)C_i_check_string_2(t3,lf[329]);
t7=(C_word)C_notvemptyp(t4);
t8=(C_truep(t7)?(C_word)C_i_vector_ref(t4,C_fix(0)):C_SCHEME_END_OF_LIST);
t9=(C_word)C_i_check_list_2(t8,lf[329]);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2932,a[2]=t8,a[3]=t1,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm: 1552 pathname-strip-directory */
t11=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t11))(3,t11,t10,t3);}

/* k2930 in process-spawn in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2932,2,t0,t1);}
t2=(C_word)C_block_size(t1);
t3=f_2897(C_fix(0),t1,t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2940,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=lf[331],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2940(t7,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(1));}

/* do461 in k2930 in process-spawn in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_2940(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t16;
C_word *a;
loop:
a=C_alloc(8);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2940,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=f_2897(t3,C_SCHEME_FALSE,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2954,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2973,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1559 ##sys#expand-home-path */
t7=*((C_word*)lf[40]+1);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[3]);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_check_string_2(t4,lf[329]);
t6=(C_word)C_block_size(t4);
t7=f_2897(t3,t4,t6);
t8=(C_word)C_i_cdr(t2);
t9=(C_word)C_fixnum_plus(t3,C_fix(1));
t14=t1;
t15=t8;
t16=t9;
t1=t14;
t2=t15;
t3=t16;
goto loop;}}

/* k2971 in do461 in k2930 in process-spawn in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1559 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2952 in do461 in k2930 in process-spawn in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2954,2,t0,t1);}
t2=(C_word)C_spawnvp(((C_word*)t0)[4],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2957,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1560 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2955 in k2952 in do461 in k2930 in process-spawn in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2960,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[3],C_fix(-1));
if(C_truep(t3)){
t4=(C_word)stub454(C_SCHEME_UNDEFINED);
/* posixwin.scm: 1563 ##sys#error */
t5=*((C_word*)lf[68]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[329],lf[330],((C_word*)t0)[2]);}
else{
t4=t2;
f_2960(2,t4,C_SCHEME_UNDEFINED);}}

/* k2958 in k2955 in k2952 in do461 in k2930 in process-spawn in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* setarg in k2033 in k983 in k980 in k977 in k974 in k971 */
static C_word C_fcall f_2897(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t4=(C_word)C_i_foreign_fixnum_argumentp(t1);
t5=(C_truep(t2)?(C_word)C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=(C_word)C_i_foreign_fixnum_argumentp(t3);
return((C_word)stub447(C_SCHEME_UNDEFINED,t4,t5,t6));}

/* process-execute in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2753(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+14)){
C_save_and_reclaim((void*)tr3r,(void*)f_2753r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2753r(t0,t1,t2,t3);}}

static void C_ccall f_2753r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(14);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2755,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=lf[324],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2844,a[2]=t4,a[3]=lf[325],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2849,a[2]=t5,a[3]=lf[326],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-arglist411436 */
t7=t6;
f_2849(t7,t1);}
else{
t7=(C_word)C_i_car(t3);
t8=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t8))){
/* def-envlist412434 */
t9=t5;
f_2844(t9,t1,t7);}
else{
t9=(C_word)C_i_car(t8);
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
/* body409414 */
t11=t4;
f_2755(t11,t1,t7);}
else{
/* ##sys#error */
t11=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[2],t10);}}}}

/* def-arglist411 in process-execute in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_2849(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2849,NULL,2,t0,t1);}
/* def-envlist412434 */
t2=((C_word*)t0)[2];
f_2844(t2,t1,C_SCHEME_END_OF_LIST);}

/* def-envlist412 in process-execute in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_2844(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2844,NULL,3,t0,t1,t2);}
/* body409414 */
t3=((C_word*)t0)[2];
f_2755(t3,t1,t2);}

/* body409 in process-execute in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_2755(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2755,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(((C_word*)t0)[4],lf[321]);
t4=(C_word)C_i_pairp(t2);
t5=(C_truep(t4)?(C_word)C_i_car(t2):C_SCHEME_END_OF_LIST);
t6=(C_word)C_i_check_list_2(t5,lf[321]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2768,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1528 pathname-strip-directory */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,((C_word*)t0)[4]);}

/* k2766 in body409 in process-execute in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2768,2,t0,t1);}
t2=(C_word)C_block_size(t1);
t3=f_2734(C_fix(0),t1,t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2776,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=lf[323],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2776(t7,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(1));}

/* do419 in k2766 in body409 in process-execute in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_2776(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t16;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2776,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=f_2734(t3,C_SCHEME_FALSE,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2790,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2809,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1534 ##sys#expand-home-path */
t7=*((C_word*)lf[40]+1);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[3]);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_check_string_2(t4,lf[321]);
t6=(C_word)C_block_size(t4);
t7=f_2734(t3,t4,t6);
t8=(C_word)C_i_cdr(t2);
t9=(C_word)C_fixnum_plus(t3,C_fix(1));
t14=t1;
t15=t8;
t16=t9;
t1=t14;
t2=t15;
t3=t16;
goto loop;}}

/* k2807 in do419 in k2766 in body409 in process-execute in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2809(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1534 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2788 in do419 in k2766 in body409 in process-execute in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2790,2,t0,t1);}
t2=(C_word)C_execvp(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1535 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k2791 in k2788 in do419 in k2766 in body409 in process-execute in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[4],C_fix(-1));
if(C_truep(t2)){
t3=(C_word)stub402(C_SCHEME_UNDEFINED);
/* posixwin.scm: 1538 ##sys#error */
t4=*((C_word*)lf[68]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],lf[321],lf[322],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* setarg in k2033 in k983 in k980 in k977 in k974 in k971 */
static C_word C_fcall f_2734(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t4=(C_word)C_i_foreign_fixnum_argumentp(t1);
t5=(C_truep(t2)?(C_word)C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=(C_word)C_i_foreign_fixnum_argumentp(t3);
return((C_word)stub395(C_SCHEME_UNDEFINED,t4,t5,t6));}

/* glob in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2625(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr2r,(void*)f_2625r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2625r(t0,t1,t2);}}

static void C_ccall f_2625r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(10);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2631,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=lf[312],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_2631(t6,t1,t2);}

/* conc in glob in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_2631(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2631,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2646,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=lf[306],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2652,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=lf[311],tmp=(C_word)a,a+=8,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a2651 in conc in glob in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2652(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2652,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2656,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2723,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(C_truep(t3)?t3:lf[310]);
/* posixwin.scm: 1498 make-pathname */
t8=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t8))(5,t8,t6,C_SCHEME_FALSE,t7,t4);}

/* k2721 in a2651 in conc in glob in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1498 glob->regexp */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2654 in a2651 in conc in glob in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2656,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2663,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[4]:lf[309]);
/* posixwin.scm: 1499 directory */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* k2661 in k2654 in a2651 in conc in glob in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2663,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2665,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=lf[308],tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_2665(t5,((C_word*)t0)[2],t1);}

/* loop in k2661 in k2654 in a2651 in conc in glob in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_2665(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2665,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* posixwin.scm: 1500 conc */
t4=((C_word*)((C_word*)t0)[6])[1];
f_2631(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2682,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_car(t2);
/* posixwin.scm: 1501 string-match */
t5=*((C_word*)lf[307]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,((C_word*)t0)[2],t4);}}

/* k2680 in loop in k2661 in k2654 in a2651 in conc in glob in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2682,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2692,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_car(t1);
/* posixwin.scm: 1502 make-pathname */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[2],t3);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* posixwin.scm: 1503 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2665(t3,((C_word*)t0)[6],t2);}}

/* k2690 in k2680 in loop in k2661 in k2654 in a2651 in conc in glob in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2692,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2696,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* posixwin.scm: 1502 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2665(t4,t2,t3);}

/* k2694 in k2690 in k2680 in loop in k2661 in k2654 in a2651 in conc in glob in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2696,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a2645 in conc in glob in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2646,2,t0,t1);}
/* posixwin.scm: 1497 decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* set-buffering-mode! in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2566r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2566r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2566r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2570,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1471 ##sys#check-port */
t6=*((C_word*)lf[138]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,lf[295]);}

/* k2568 in set-buffering-mode! in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2570,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[5]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(0)):C_fix((C_word)BUFSIZ));
t4=((C_word*)t0)[4];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2576,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(t4,lf[297]);
if(C_truep(t6)){
t7=t5;
f_2576(2,t7,C_fix((C_word)_IOFBF));}
else{
t7=(C_word)C_eqp(t4,lf[298]);
if(C_truep(t7)){
t8=t5;
f_2576(2,t8,C_fix((C_word)_IOLBF));}
else{
t8=(C_word)C_eqp(t4,lf[299]);
if(C_truep(t8)){
t9=t5;
f_2576(2,t9,C_fix((C_word)_IONBF));}
else{
/* posixwin.scm: 1477 ##sys#error */
t9=*((C_word*)lf[68]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t5,lf[295],lf[300],((C_word*)t0)[4],((C_word*)t0)[3]);}}}}

/* k2574 in k2568 in set-buffering-mode! in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[4],lf[295]);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(7));
t4=(C_word)C_eqp(lf[89],t3);
t5=(C_truep(t4)?(C_word)C_setvbuf(((C_word*)t0)[3],t1,((C_word*)t0)[4]):C_fix(-1));
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(0)))){
/* posixwin.scm: 1483 ##sys#error */
t6=*((C_word*)lf[68]+1);
((C_proc7)(void*)(*((C_word*)t6+1)))(7,t6,((C_word*)t0)[2],lf[295],lf[296],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}
else{
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}

/* _exit in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2547(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2rv,(void*)f_2547r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_2547r(t0,t1,t2);}}

static void C_ccall f_2547r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2551,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1461 ##sys#cleanup-before-exit */
t4=*((C_word*)lf[293]+1);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k2549 in _exit in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_notvemptyp(((C_word*)t0)[3]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[3],C_fix(0)):C_fix(0));
t4=((C_word*)t0)[2];
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=t4;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub346(C_SCHEME_UNDEFINED,t5));}

/* local-time->seconds in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2513(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2513,3,t0,t1,t2);}
t3=(C_word)C_i_check_vector_2(t2,lf[287]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2520,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(10)))){
/* posixwin.scm: 1449 ##sys#error */
t6=*((C_word*)lf[68]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[287],lf[290],t2);}
else{
t6=t4;
f_2520(2,t6,C_SCHEME_UNDEFINED);}}

/* k2518 in local-time->seconds in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_mktime(((C_word*)t0)[3]))){
/* posixwin.scm: 1451 ##sys#cons-flonum */
t2=*((C_word*)lf[288]+1);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}
else{
/* posixwin.scm: 1452 ##sys#error */
t2=*((C_word*)lf[68]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[287],lf[289],((C_word*)t0)[3]);}}

/* time->string in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2485(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2485,3,t0,t1,t2);}
t3=(C_word)C_i_check_vector_2(t2,lf[283]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2492,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(10)))){
/* posixwin.scm: 1442 ##sys#error */
t6=*((C_word*)lf[68]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[283],lf[285],t2);}
else{
t6=t4;
f_2492(2,t6,C_SCHEME_UNDEFINED);}}

/* k2490 in time->string in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2492,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2495,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,(C_word)stub332(t4,t3),C_fix(0));}

/* k2493 in k2490 in time->string in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2495,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2498,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_2498(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 1444 ##sys#error */
t3=*((C_word*)lf[68]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[283],lf[284],((C_word*)t0)[2]);}}

/* k2496 in k2493 in k2490 in time->string in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* seconds->string in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2468(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2468,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2472,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t6=(C_word)C_i_foreign_integer_argumentp(t4);
t7=(C_word)stub323(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k2470 in seconds->string in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2472,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2475,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_2475(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 1435 ##sys#error */
t3=*((C_word*)lf[68]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[280],lf[281],((C_word*)t0)[2]);}}

/* k2473 in k2470 in seconds->string in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* seconds->utc-time in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2449(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2449,3,t0,t1,t2);}
t3=(C_word)C_i_check_number_2(t2,lf[278]);
/* posixwin.scm: 1429 ##sys#decode-seconds */
t4=*((C_word*)lf[276]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,C_SCHEME_TRUE);}

/* seconds->local-time in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2440(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2440,3,t0,t1,t2);}
t3=(C_word)C_i_check_number_2(t2,lf[275]);
/* posixwin.scm: 1425 ##sys#decode-seconds */
t4=*((C_word*)lf[276]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t2,C_SCHEME_FALSE);}

/* current-environment in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2375,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2381,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=lf[273],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2381(t5,t1,C_fix(0));}

/* loop in current-environment in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_2381(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2381,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2385,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t6=(C_word)C_i_foreign_fixnum_argumentp(t4);
t7=(C_word)stub306(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k2383 in loop in current-environment in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2385,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2393,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=lf[272],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2393(t5,((C_word*)t0)[2],C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* scan in k2383 in loop in current-environment in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_2393(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2393,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(C_make_character(61),(C_word)C_subchar(((C_word*)t0)[6],t2));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2419,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm: 1417 substring */
t5=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[6],C_fix(0),t2);}
else{
t4=(C_word)C_fixnum_plus(t2,C_fix(1));
/* posixwin.scm: 1418 scan */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}

/* k2417 in scan in k2383 in loop in current-environment in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2419,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2423,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=(C_word)C_block_size(((C_word*)t0)[3]);
/* posixwin.scm: 1417 substring */
t5=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t5))(5,t5,t2,((C_word*)t0)[3],t3,t4);}

/* k2421 in k2417 in scan in k2383 in loop in current-environment in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2423(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2423,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2411,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm: 1417 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_2381(t5,t3,t4);}

/* k2409 in k2421 in k2417 in scan in k2383 in loop in current-environment in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2411,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* unsetenv in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2355(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2355,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[268]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2363,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1405 ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2361 in unsetenv in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_putenv(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* setenv in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2338(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2338,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[266]);
t5=(C_word)C_i_check_string_2(t3,lf[266]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2349,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1400 ##sys#make-c-string */
t7=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k2347 in setenv in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2349,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2353,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1400 ##sys#make-c-string */
t3=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k2351 in k2347 in setenv in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_setenv(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* duplicate-fileno in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2308(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3rv,(void*)f_2308r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_2308r(t0,t1,t2,t3);}}

static void C_ccall f_2308r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=(C_word)C_i_check_exact_2(t2,*((C_word*)lf[263]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2315,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_vemptyp(t3))){
t6=t5;
f_2315(t6,(C_word)C_dup(t2));}
else{
t6=(C_word)C_i_vector_ref(t3,C_fix(0));
t7=(C_word)C_i_check_exact_2(t6,lf[263]);
t8=t5;
f_2315(t8,(C_word)C_dup2(t2,t6));}}

/* k2313 in duplicate-fileno in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_2315(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2315,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2318,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2324,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1390 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_2318(2,t3,C_SCHEME_UNDEFINED);}}

/* k2322 in k2313 in duplicate-fileno in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1391 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[263],lf[264],((C_word*)t0)[2]);}

/* k2316 in k2313 in duplicate-fileno in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* port->fileno in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2273(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2273,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2277,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1372 ##sys#check-port */
t4=*((C_word*)lf[138]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[258]);}

/* k2275 in port->fileno in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2277,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2306,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1373 ##sys#peek-unsigned-integer */
t3=*((C_word*)lf[261]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_fix(0));}

/* k2304 in k2275 in port->fileno in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2306,2,t0,t1);}
if(C_truep((C_word)C_i_zerop(t1))){
/* posixwin.scm: 1379 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[48],lf[258],lf[259],((C_word*)t0)[2]);}
else{
t2=(C_word)C_C_fileno(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2286,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2292,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1376 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_2286(2,t4,C_SCHEME_UNDEFINED);}}}

/* k2290 in k2304 in k2275 in port->fileno in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1377 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[258],lf[260],((C_word*)t0)[2]);}

/* k2284 in k2304 in k2275 in port->fileno in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* open-output-file* in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2259(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2259r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2259r(t0,t1,t2,t3);}}

static void C_ccall f_2259r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_exact_2(t2,lf[256]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2271,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1368 mode */
f_2190(t5,C_SCHEME_FALSE,t3);}

/* k2269 in open-output-file* in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2271,2,t0,t1);}
t2=(C_word)C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixwin.scm: 1368 check */
f_2227(((C_word*)t0)[2],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* open-input-file* in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2245(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_2245r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2245r(t0,t1,t2,t3);}}

static void C_ccall f_2245r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_exact_2(t2,lf[254]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2257,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1364 mode */
f_2190(t5,C_SCHEME_TRUE,t3);}

/* k2255 in open-input-file* in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2257,2,t0,t1);}
t2=(C_word)C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixwin.scm: 1364 check */
f_2227(((C_word*)t0)[2],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* check in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_2227(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2227,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2231,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1355 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k2229 in check in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2231(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2231,2,t0,t1);}
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[5]))){
/* posixwin.scm: 1357 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[37],lf[251],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2243,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1358 ##sys#make-port */
t3=*((C_word*)lf[127]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[2],*((C_word*)lf[128]+1),lf[252],lf[89]);}}

/* k2241 in k2229 in check in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* mode in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_2190(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2190,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2198,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_i_car(t3);
t6=(C_word)C_eqp(t5,lf[244]);
if(C_truep(t6)){
t7=t2;
if(C_truep(t7)){
/* posixwin.scm: 1350 ##sys#error */
t8=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,lf[245],t5);}
else{
t8=t4;
f_2198(2,t8,lf[246]);}}
else{
/* posixwin.scm: 1351 ##sys#error */
t7=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,lf[247],t5);}}
else{
t5=t4;
f_2198(2,t5,(C_truep(t2)?lf[248]:lf[249]));}}

/* k2196 in mode in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1346 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* file-execute-access? in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2181(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2181,3,t0,t1,t2);}
/* posixwin.scm: 1330 check */
f_2145(t1,t2,C_fix((C_word)2),lf[239]);}

/* file-write-access? in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2175(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2175,3,t0,t1,t2);}
/* posixwin.scm: 1329 check */
f_2145(t1,t2,C_fix((C_word)4),lf[237]);}

/* file-read-access? in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2169(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2169,3,t0,t1,t2);}
/* posixwin.scm: 1328 check */
f_2145(t1,t2,C_fix((C_word)2),lf[235]);}

/* check in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_2145(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2145,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2163,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2167,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1325 ##sys#expand-home-path */
t8=*((C_word*)lf[40]+1);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t2);}

/* k2165 in check in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1325 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2161 in check in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2163,2,t0,t1);}
t2=(C_word)C_access(t1,((C_word*)t0)[3]);
t3=(C_word)C_eqp(C_fix(0),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2155,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_2155(2,t5,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 1326 ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2153 in k2161 in check in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* change-file-mode in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2115(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2115,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[231]);
t5=(C_word)C_i_check_exact_2(t3,lf[231]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2139,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2143,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1314 ##sys#expand-home-path */
t8=*((C_word*)lf[40]+1);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t2);}

/* k2141 in change-file-mode in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1314 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2137 in change-file-mode in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2139,2,t0,t1);}
t2=(C_word)C_chmod(t1,((C_word*)t0)[4]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2131,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1315 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k2129 in k2137 in change-file-mode in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1316 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[37],lf[231],lf[232],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#interrupt-hook in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2059,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2069,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1222 h */
t6=t4;
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}
else{
/* posixwin.scm: 1224 oldhook */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k2067 in ##sys#interrupt-hook in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1223 ##sys#context-switch */
C_context_switch(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set-signal-handler! in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2046(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2046,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t2,lf[190]);
t5=(C_truep(t3)?t2:C_SCHEME_FALSE);
t6=(C_word)C_establish_signal_handler(t2,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_vector_set(((C_word*)t0)[2],t2,t3));}

/* signal-handler in k2033 in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_2037(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2037,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[188]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(((C_word*)t0)[2],t2));}

/* create-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1986,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1990,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_pipe(C_SCHEME_FALSE),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1999,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1159 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_1990(2,t3,C_SCHEME_UNDEFINED);}}

/* k1997 in create-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1160 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[37],lf[157],lf[158]);}

/* k1988 in create-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1161 values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}

/* with-output-to-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1966(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_1966r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1966r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1966r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[154]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1970,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k1968 in with-output-to-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1970,2,t0,t1);}
t2=C_mutate((C_word*)lf[154]+1,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1976,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=lf[155],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1144 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a1975 in k1968 in with-output-to-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1976(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_1976r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1976r(t0,t1,t2);}}

static void C_ccall f_1976r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1980,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1146 close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k1978 in a1975 in k1968 in with-output-to-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[154]+1,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* with-input-from-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1946(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_1946r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1946r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1946r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[150]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1950,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k1948 in with-input-from-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1950,2,t0,t1);}
t2=C_mutate((C_word*)lf[150]+1,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1956,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=lf[151],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1134 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a1955 in k1948 in with-input-from-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1956(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_1956r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1956r(t0,t1,t2);}}

static void C_ccall f_1956r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1960,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1136 close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k1958 in a1955 in k1948 in with-input-from-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[150]+1,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* call-with-output-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_1922r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1922r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1922r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1926,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k1924 in call-with-output-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1926,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1931,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=lf[146],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1937,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=lf[147],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1124 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a1936 in k1924 in call-with-output-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1937(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1937r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1937r(t0,t1,t2);}}

static void C_ccall f_1937r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1941,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1127 close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k1939 in a1936 in k1924 in call-with-output-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a1930 in k1924 in call-with-output-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1931,2,t0,t1);}
/* posixwin.scm: 1125 proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* call-with-input-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1898(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_1898r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1898r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1898r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1902,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k1900 in call-with-input-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1902,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1907,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=lf[142],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1913,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=lf[143],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1116 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a1912 in k1900 in call-with-input-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1913(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1913r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1913r(t0,t1,t2);}}

static void C_ccall f_1913r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1917,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1119 close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k1915 in a1912 in k1900 in call-with-input-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a1906 in k1900 in call-with-input-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1907,2,t0,t1);}
/* posixwin.scm: 1117 proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* close-input-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1879(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1879,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1883,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1103 ##sys#check-port */
t4=*((C_word*)lf[138]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[136]);}

/* k1881 in close-input-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1883,2,t0,t1);}
t2=(C_word)close_pipe(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1886,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1105 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1884 in k1881 in close-input-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t2)){
/* posixwin.scm: 1106 ##sys#signal-hook */
t3=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[3],lf[37],lf[136],lf[137],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* open-output-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1843(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_1843r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1843r(t0,t1,t2,t3);}}

static void C_ccall f_1843r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(C_word)C_i_check_string_2(t2,lf[134]);
t5=f_1771(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1857,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_eqp(t5,lf[122]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1864,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1098 ##sys#make-c-string */
t9=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}
else{
t8=(C_word)C_eqp(t5,lf[132]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1874,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1099 ##sys#make-c-string */
t10=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
/* posixwin.scm: 1100 badmode */
f_1783(t6,t5);}}}

/* k1872 in open-output-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1874,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1857(2,t2,(C_word)open_binary_output_pipe(&a,1,t1));}

/* k1862 in open-output-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1864,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1857(2,t2,(C_word)open_text_output_pipe(&a,1,t1));}

/* k1855 in open-output-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1095 check */
f_1789(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* open-input-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1807(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_1807r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1807r(t0,t1,t2,t3);}}

static void C_ccall f_1807r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(C_word)C_i_check_string_2(t2,lf[131]);
t5=f_1771(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1821,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_eqp(t5,lf[122]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1828,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1088 ##sys#make-c-string */
t9=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}
else{
t8=(C_word)C_eqp(t5,lf[132]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1838,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1089 ##sys#make-c-string */
t10=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
/* posixwin.scm: 1090 badmode */
f_1783(t6,t5);}}}

/* k1836 in open-input-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1838,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1821(2,t2,(C_word)open_binary_input_pipe(&a,1,t1));}

/* k1826 in open-input-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1828(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1828,2,t0,t1);}
t2=((C_word*)t0)[2];
f_1821(2,t2,(C_word)open_text_input_pipe(&a,1,t1));}

/* k1819 in open-input-pipe in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1085 check */
f_1789(((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* check in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_1789(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1789,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1793,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1075 ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k1791 in check in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1793,2,t0,t1);}
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[5]))){
/* posixwin.scm: 1077 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[37],lf[126],((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1805,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1078 ##sys#make-port */
t3=*((C_word*)lf[127]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[2],*((C_word*)lf[128]+1),lf[129],lf[89]);}}

/* k1803 in k1791 in check in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* badmode in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_1783(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1783,NULL,2,t1,t2);}
/* posixwin.scm: 1073 ##sys#error */
t3=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[124],t2);}

/* mode in k983 in k980 in k977 in k974 in k971 */
static C_word C_fcall f_1771(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_pairp(t1);
return((C_truep(t2)?(C_word)C_slot(t1,C_fix(0)):lf[122]));}

/* current-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1725(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_1725r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1725r(t0,t1,t2);}}

static void C_ccall f_1725r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1729,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_1729(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_1729(2,t5,(C_word)C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[2],t2);}}}

/* k1727 in current-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1729,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm: 1060 change-directory */
t2=*((C_word*)lf[102]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1738,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1061 make-string */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_fix(256));}}

/* k1736 in k1727 in current-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1738,2,t0,t1);}
t2=(C_word)C_curdir(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1741,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1063 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1739 in k1736 in k1727 in current-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* posixwin.scm: 1065 ##sys#substring */
t2=*((C_word*)lf[57]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),((C_word*)t0)[4]);}
else{
/* posixwin.scm: 1066 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[37],lf[115],lf[120]);}}

/* directory? in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1702(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1702,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[118]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1709,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1723,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1053 ##sys#expand-home-path */
t6=*((C_word*)lf[40]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k1721 in directory? in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1053 ##sys#file-info */
t2=*((C_word*)lf[83]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1707 in directory? in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1709(C_word c,C_word t0,C_word t1){
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

/* directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1542(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_1542r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1542r(t0,t1,t2);}}

static void C_ccall f_1542r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(12);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1544,a[2]=((C_word*)t0)[2],a[3]=lf[113],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1645,a[2]=t3,a[3]=lf[114],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1650,a[2]=t4,a[3]=lf[116],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-spec113139 */
t6=t5;
f_1650(t6,t1);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t7))){
/* def-show-dotfiles?114137 */
t8=t4;
f_1645(t8,t1,t6);}
else{
t8=(C_word)C_i_car(t7);
t9=(C_word)C_i_cdr(t7);
if(C_truep((C_word)C_i_nullp(t9))){
/* body111116 */
t10=t3;
f_1544(t10,t1,t6,t8);}
else{
/* ##sys#error */
t10=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,lf[2],t9);}}}}

/* def-spec113 in directory in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_1650(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1650,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1658,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1024 current-directory */
t3=*((C_word*)lf[115]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1656 in def-spec113 in directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* def-show-dotfiles?114137 */
t2=((C_word*)t0)[3];
f_1645(t2,((C_word*)t0)[2],t1);}

/* def-show-dotfiles?114 in directory in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_1645(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1645,NULL,3,t0,t1,t2);}
/* body111116 */
t3=((C_word*)t0)[2];
f_1544(t3,t1,t2,C_SCHEME_FALSE);}

/* body111 in directory in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_1544(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1544,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[109]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1551,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 1026 make-string */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,C_fix(256));}

/* k1549 in body111 in directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1551,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1554,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1027 ##sys#make-pointer */
t3=*((C_word*)lf[112]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1552 in k1549 in body111 in directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1557,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixwin.scm: 1028 ##sys#make-pointer */
t3=*((C_word*)lf[112]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1555 in k1552 in k1549 in body111 in directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1557,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1561,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1644,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1029 ##sys#expand-home-path */
t4=*((C_word*)lf[40]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}

/* k1642 in k1555 in k1552 in k1549 in body111 in directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1029 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1559 in k1555 in k1552 in k1549 in body111 in directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1561,2,t0,t1);}
t2=(C_word)C_opendir(t1,((C_word*)t0)[7]);
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[7]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1570,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1032 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1578,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=lf[111],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_1578(t6,((C_word*)t0)[6]);}}

/* loop in k1559 in k1555 in k1552 in k1549 in body111 in directory in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_1578(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1578,NULL,2,t0,t1);}
t2=(C_word)C_readdir(((C_word*)t0)[6],((C_word*)t0)[5]);
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[5]))){
t3=(C_word)C_closedir(((C_word*)t0)[6]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_foundfile(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1588,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 1041 ##sys#substring */
t5=*((C_word*)lf[57]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[4],C_fix(0),t3);}}

/* k1586 in loop in k1559 in k1555 in k1552 in k1549 in body111 in directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1588(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1588,2,t0,t1);}
t2=(C_word)C_i_string_ref(t1,C_fix(0));
t3=(C_word)C_i_greaterp(((C_word*)t0)[5],C_fix(1));
t4=(C_truep(t3)?(C_word)C_i_string_ref(t1,C_fix(1)):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1600,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(t2,C_make_character(46));
if(C_truep(t6)){
t7=(C_word)C_i_not(t4);
if(C_truep(t7)){
t8=t5;
f_1600(t8,t7);}
else{
t8=(C_word)C_eqp(t4,C_make_character(46));
t9=(C_truep(t8)?(C_word)C_eqp(((C_word*)t0)[5],C_fix(2)):C_SCHEME_FALSE);
t10=t5;
f_1600(t10,(C_truep(t9)?t9:(C_word)C_i_not(((C_word*)t0)[2])));}}
else{
t7=t5;
f_1600(t7,C_SCHEME_FALSE);}}

/* k1598 in k1586 in loop in k1559 in k1555 in k1552 in k1549 in body111 in directory in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_1600(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1600,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posixwin.scm: 1048 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1578(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1610,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1049 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1578(t3,t2);}}

/* k1608 in k1598 in k1586 in loop in k1559 in k1555 in k1552 in k1549 in body111 in directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1610,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k1568 in k1559 in k1555 in k1552 in k1549 in body111 in directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1033 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[109],lf[110],((C_word*)t0)[2]);}

/* delete-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1515(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1515,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[105]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1536,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1540,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1016 ##sys#expand-home-path */
t6=*((C_word*)lf[40]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k1538 in delete-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1016 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1534 in delete-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1536,2,t0,t1);}
t2=(C_word)C_rmdir(t1);
if(C_truep((C_word)C_i_zerop(t2))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1528,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1017 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1526 in k1534 in delete-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1018 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[105],lf[106],((C_word*)t0)[2]);}

/* change-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1488(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1488,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[102]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1509,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1513,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1009 ##sys#expand-home-path */
t6=*((C_word*)lf[40]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k1511 in change-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1009 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1507 in change-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1509,2,t0,t1);}
t2=(C_word)C_chdir(t1);
if(C_truep((C_word)C_i_zerop(t2))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1010 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1499 in k1507 in change-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1011 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[102],lf[103],((C_word*)t0)[2]);}

/* create-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1461(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1461,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[99]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1482,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1486,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 1002 ##sys#expand-home-path */
t6=*((C_word*)lf[40]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k1484 in create-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1002 ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1480 in create-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1482,2,t0,t1);}
t2=(C_word)C_mkdir(t1);
if(C_truep((C_word)C_i_zerop(t2))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1474,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 1003 ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}

/* k1472 in k1480 in create-directory in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 1004 ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[99],lf[100],((C_word*)t0)[2]);}

/* set-file-position! in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1400(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1400r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1400r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1400r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(6);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_i_vector_ref(t4,C_fix(0)):C_fix((C_word)SEEK_SET));
t7=(C_word)C_i_check_exact_2(t3,lf[93]);
t8=(C_word)C_i_check_exact_2(t6,lf[93]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1413,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
/* posixwin.scm: 987  ##sys#signal-hook */
t10=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t10+1)))(7,t10,t9,lf[96],lf[93],lf[97],t3,t2);}
else{
t10=t9;
f_1413(2,t10,C_SCHEME_UNDEFINED);}}

/* k1411 in set-file-position! in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1419,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1428,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 988  port? */
t4=*((C_word*)lf[91]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}

/* k1426 in k1411 in set-file-position! in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(7));
t3=(C_word)C_eqp(t2,lf[89]);
t4=((C_word*)t0)[4];
f_1419(2,t4,(C_truep(t3)?(C_word)C_fseek(((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2]):C_SCHEME_FALSE));}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[5]))){
t2=((C_word*)t0)[4];
f_1419(2,t2,(C_word)C_lseek(((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2]));}
else{
/* posixwin.scm: 992  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[48],lf[93],lf[95],((C_word*)t0)[5]);}}}

/* k1417 in k1411 in set-file-position! in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1419,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1422,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 993  ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1420 in k1417 in k1411 in set-file-position! in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 994  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[37],lf[93],lf[94],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* file-position in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1360(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1360,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1364,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1379,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 971  port? */
t5=*((C_word*)lf[91]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k1377 in file-position in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(7));
t3=(C_word)C_eqp(t2,lf[89]);
t4=((C_word*)t0)[2];
f_1364(2,t4,(C_truep(t3)?(C_word)C_ftell(((C_word*)t0)[3]):C_fix(-1)));}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
f_1364(2,t2,(C_word)C_lseek(((C_word*)t0)[3],C_fix(0),C_fix((C_word)SEEK_CUR)));}
else{
/* posixwin.scm: 976  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[48],lf[87],lf[90],((C_word*)t0)[3]);}}}

/* k1362 in file-position in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1364(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1364,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1367,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1373,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 978  ##sys#update-errno */
t4=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_1367(2,t3,C_SCHEME_UNDEFINED);}}

/* k1371 in k1362 in file-position in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 979  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[87],lf[88],((C_word*)t0)[2]);}

/* k1365 in k1362 in file-position in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* symbolic-link? in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1354(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1354,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[85]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}

/* regular-file? in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1331(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1331,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[82]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1338,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1352,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 962  ##sys#expand-home-path */
t6=*((C_word*)lf[40]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k1350 in regular-file? in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 962  ##sys#file-info */
t2=*((C_word*)lf[83]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1336 in regular-file? in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1338(C_word c,C_word t0,C_word t1){
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

/* file-permissions in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1325(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1325,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1329,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 958  ##sys#stat */
f_1226(t3,t2);}

/* k1327 in file-permissions in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode));}

/* file-owner in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1319(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1319,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1323,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 957  ##sys#stat */
f_1226(t3,t2);}

/* k1321 in file-owner in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid));}

/* file-change-time in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1313(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1313,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1317,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 956  ##sys#stat */
f_1226(t3,t2);}

/* k1315 in file-change-time in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1317,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_ctime));}

/* file-access-time in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1307(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1307,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1311,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 955  ##sys#stat */
f_1226(t3,t2);}

/* k1309 in file-access-time in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1311,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_atime));}

/* file-modification-time in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1301(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1301,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1305,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 954  ##sys#stat */
f_1226(t3,t2);}

/* k1303 in file-modification-time in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1305,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_mtime));}

/* file-size in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1295(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1295,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1299,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 953  ##sys#stat */
f_1226(t3,t2);}

/* k1297 in file-size in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_size));}

/* file-stat in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1264(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1264r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1264r(t0,t1,t2,t3);}}

static void C_ccall f_1264r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1268,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_1268(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_1268(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[2],t3);}}}

/* k1266 in file-stat in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1271,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 947  ##sys#stat */
f_1226(t2,((C_word*)t0)[2]);}

/* k1269 in k1266 in file-stat in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1271,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(0),C_fix(0),C_fix(0),C_fix(0)));}

/* ##sys#stat in k983 in k980 in k977 in k974 in k971 */
static void C_fcall f_1226(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1226,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1230,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t4=t3;
f_1230(2,t4,(C_word)C_fstat(t2));}
else{
if(C_truep((C_word)C_i_stringp(t2))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1255,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1259,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 940  ##sys#expand-home-path */
t6=*((C_word*)lf[40]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}
else{
/* posixwin.scm: 941  ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t3,lf[48],lf[65],t2);}}}

/* k1257 in ##sys#stat in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 940  ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1253 in ##sys#stat in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1230(2,t2,(C_word)C_stat(t1));}

/* k1228 in ##sys#stat in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1230,2,t0,t1);}
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1239,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 943  ##sys#update-errno */
t3=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1237 in k1228 in ##sys#stat in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 944  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[37],lf[64],((C_word*)t0)[2]);}

/* file-mkstemp in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1188(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1188,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[56]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1195,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 909  ##sys#make-c-string */
t5=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1193 in file-mkstemp in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1195,2,t0,t1);}
t2=(C_word)C_mkstemp(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1198,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 911  string-length */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t1);}

/* k1196 in k1193 in file-mkstemp in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1198,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1201,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_eqp(C_fix(-1),((C_word*)t0)[4]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1218,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 913  ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t2;
f_1201(2,t4,C_SCHEME_UNDEFINED);}}

/* k1216 in k1196 in k1193 in file-mkstemp in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 914  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[56],lf[58],((C_word*)t0)[2]);}

/* k1199 in k1196 in k1193 in file-mkstemp in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1201,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1208,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* posixwin.scm: 915  ##sys#substring */
t4=*((C_word*)lf[57]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,((C_word*)t0)[2],C_fix(0),t3);}

/* k1206 in k1199 in k1196 in k1193 in file-mkstemp in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 915  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* file-write in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1146(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1146r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1146r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1146r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t5=(C_word)C_i_check_exact_2(t2,lf[51]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1153,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t7=(C_truep((C_word)C_blockp(t3))?(C_word)C_byteblockp(t3):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=t6;
f_1153(2,t8,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 896  ##sys#signal-hook */
t8=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t6,lf[48],lf[51],lf[53],t3);}}

/* k1151 in file-write in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1153,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[5]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(0)):(C_word)C_block_size(((C_word*)t0)[4]));
t4=(C_word)C_i_check_exact_2(t3,lf[51]);
t5=(C_word)C_write(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1162,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1168,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 901  ##sys#update-errno */
t9=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=t6;
f_1162(2,t8,C_SCHEME_UNDEFINED);}}

/* k1166 in k1151 in file-write in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 902  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[37],lf[51],lf[52],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1160 in k1151 in file-write in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-read in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1101(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1101r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1101r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1101r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(C_word)C_i_check_exact_2(t2,lf[46]);
t6=(C_word)C_i_check_exact_2(t3,lf[46]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1111,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_notvemptyp(t4))){
t8=t7;
f_1111(2,t8,(C_word)C_i_vector_ref(t4,C_fix(0)));}
else{
/* posixwin.scm: 883  make-string */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}}

/* k1109 in file-read in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1114,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(C_truep((C_word)C_blockp(t1))?(C_word)C_byteblockp(t1):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t2;
f_1114(2,t4,C_SCHEME_UNDEFINED);}
else{
/* posixwin.scm: 885  ##sys#signal-hook */
t4=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,lf[48],lf[46],lf[49],t1);}}

/* k1112 in k1109 in file-read in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1114,2,t0,t1);}
t2=(C_word)C_read(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1117,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1126,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* posixwin.scm: 888  ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t3;
f_1117(2,t5,C_SCHEME_UNDEFINED);}}

/* k1124 in k1112 in k1109 in file-read in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 889  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[37],lf[46],lf[47],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1115 in k1112 in k1109 in file-read in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1117,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* file-close in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1083(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1083,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[42]);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_close(t2),C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1096,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixwin.scm: 875  ##sys#update-errno */
t5=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k1094 in file-close in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 876  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[37],lf[42],lf[43],((C_word*)t0)[2]);}

/* file-open in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1042r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1042r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1042r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(9);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_i_vector_ref(t4,C_fix(0)):((C_word*)t0)[2]);
t7=(C_word)C_i_check_string_2(t2,lf[36]);
t8=(C_word)C_i_check_exact_2(t3,lf[36]);
t9=(C_word)C_i_check_exact_2(t6,lf[36]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1059,a[2]=t2,a[3]=t1,a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1075,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* posixwin.scm: 865  ##sys#expand-home-path */
t12=*((C_word*)lf[40]+1);
((C_proc3)C_retrieve_proc(t12))(3,t12,t11,t2);}

/* k1073 in file-open in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 865  ##sys#make-c-string */
t2=*((C_word*)lf[39]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1057 in file-open in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1059,2,t0,t1);}
t2=(C_word)C_open(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1062,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1068,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixwin.scm: 867  ##sys#update-errno */
t6=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t3;
f_1062(2,t5,C_SCHEME_UNDEFINED);}}

/* k1066 in k1057 in file-open in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 868  ##sys#signal-hook */
t2=*((C_word*)lf[6]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[5],lf[37],lf[36],lf[38],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1060 in k1057 in file-open in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* posix-error in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_997(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_997r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_997r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_997r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1001,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixwin.scm: 798  ##sys#update-errno */
t7=*((C_word*)lf[9]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k999 in posix-error in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1001,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1008,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1012,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_word)C_i_foreign_fixnum_argumentp(t1);
t6=(C_word)stub3(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k1010 in k999 in posix-error in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixwin.scm: 799  string-append */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[7],t1);}

/* k1006 in k999 in posix-error in k983 in k980 in k977 in k974 in k971 */
static void C_ccall f_1008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(7,0,((C_word*)t0)[5],*((C_word*)lf[6]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[348] = {
{"toplevelposixwin.scm",(void*)C_posix_toplevel},
{"f_973posixwin.scm",(void*)f_973},
{"f_976posixwin.scm",(void*)f_976},
{"f_979posixwin.scm",(void*)f_979},
{"f_982posixwin.scm",(void*)f_982},
{"f_985posixwin.scm",(void*)f_985},
{"f_2035posixwin.scm",(void*)f_2035},
{"f_4012posixwin.scm",(void*)f_4012},
{"f_4009posixwin.scm",(void*)f_4009},
{"f_4002posixwin.scm",(void*)f_4002},
{"f_3996posixwin.scm",(void*)f_3996},
{"f_3990posixwin.scm",(void*)f_3990},
{"f_3984posixwin.scm",(void*)f_3984},
{"f_3978posixwin.scm",(void*)f_3978},
{"f_3972posixwin.scm",(void*)f_3972},
{"f_3966posixwin.scm",(void*)f_3966},
{"f_3960posixwin.scm",(void*)f_3960},
{"f_3954posixwin.scm",(void*)f_3954},
{"f_3948posixwin.scm",(void*)f_3948},
{"f_3942posixwin.scm",(void*)f_3942},
{"f_3936posixwin.scm",(void*)f_3936},
{"f_3930posixwin.scm",(void*)f_3930},
{"f_3924posixwin.scm",(void*)f_3924},
{"f_3918posixwin.scm",(void*)f_3918},
{"f_3912posixwin.scm",(void*)f_3912},
{"f_3906posixwin.scm",(void*)f_3906},
{"f_3900posixwin.scm",(void*)f_3900},
{"f_3894posixwin.scm",(void*)f_3894},
{"f_3888posixwin.scm",(void*)f_3888},
{"f_3882posixwin.scm",(void*)f_3882},
{"f_3876posixwin.scm",(void*)f_3876},
{"f_3870posixwin.scm",(void*)f_3870},
{"f_3864posixwin.scm",(void*)f_3864},
{"f_3858posixwin.scm",(void*)f_3858},
{"f_3852posixwin.scm",(void*)f_3852},
{"f_3846posixwin.scm",(void*)f_3846},
{"f_3840posixwin.scm",(void*)f_3840},
{"f_3834posixwin.scm",(void*)f_3834},
{"f_3828posixwin.scm",(void*)f_3828},
{"f_3822posixwin.scm",(void*)f_3822},
{"f_3816posixwin.scm",(void*)f_3816},
{"f_3810posixwin.scm",(void*)f_3810},
{"f_3804posixwin.scm",(void*)f_3804},
{"f_3798posixwin.scm",(void*)f_3798},
{"f_3792posixwin.scm",(void*)f_3792},
{"f_3786posixwin.scm",(void*)f_3786},
{"f_3780posixwin.scm",(void*)f_3780},
{"f_3774posixwin.scm",(void*)f_3774},
{"f_3768posixwin.scm",(void*)f_3768},
{"f_3762posixwin.scm",(void*)f_3762},
{"f_3756posixwin.scm",(void*)f_3756},
{"f_3530posixwin.scm",(void*)f_3530},
{"f_3687posixwin.scm",(void*)f_3687},
{"f_3693posixwin.scm",(void*)f_3693},
{"f_3682posixwin.scm",(void*)f_3682},
{"f_3677posixwin.scm",(void*)f_3677},
{"f_3532posixwin.scm",(void*)f_3532},
{"f_3664posixwin.scm",(void*)f_3664},
{"f_3672posixwin.scm",(void*)f_3672},
{"f_3539posixwin.scm",(void*)f_3539},
{"f_3652posixwin.scm",(void*)f_3652},
{"f_3549posixwin.scm",(void*)f_3549},
{"f_3551posixwin.scm",(void*)f_3551},
{"f_3570posixwin.scm",(void*)f_3570},
{"f_3638posixwin.scm",(void*)f_3638},
{"f_3645posixwin.scm",(void*)f_3645},
{"f_3632posixwin.scm",(void*)f_3632},
{"f_3585posixwin.scm",(void*)f_3585},
{"f_3619posixwin.scm",(void*)f_3619},
{"f_3605posixwin.scm",(void*)f_3605},
{"f_3617posixwin.scm",(void*)f_3617},
{"f_3613posixwin.scm",(void*)f_3613},
{"f_3597posixwin.scm",(void*)f_3597},
{"f_3595posixwin.scm",(void*)f_3595},
{"f_3656posixwin.scm",(void*)f_3656},
{"f_3499posixwin.scm",(void*)f_3499},
{"f_3525posixwin.scm",(void*)f_3525},
{"f_3510posixwin.scm",(void*)f_3510},
{"f_3514posixwin.scm",(void*)f_3514},
{"f_3518posixwin.scm",(void*)f_3518},
{"f_3522posixwin.scm",(void*)f_3522},
{"f_3487posixwin.scm",(void*)f_3487},
{"f_3484posixwin.scm",(void*)f_3484},
{"f_3424posixwin.scm",(void*)f_3424},
{"f_3451posixwin.scm",(void*)f_3451},
{"f_3461posixwin.scm",(void*)f_3461},
{"f_3445posixwin.scm",(void*)f_3445},
{"f_3412posixwin.scm",(void*)f_3412},
{"f_3352posixwin.scm",(void*)f_3352},
{"f_3364posixwin.scm",(void*)f_3364},
{"f_3359posixwin.scm",(void*)f_3359},
{"f_3354posixwin.scm",(void*)f_3354},
{"f_3292posixwin.scm",(void*)f_3292},
{"f_3304posixwin.scm",(void*)f_3304},
{"f_3299posixwin.scm",(void*)f_3299},
{"f_3294posixwin.scm",(void*)f_3294},
{"f_3227posixwin.scm",(void*)f_3227},
{"f_3286posixwin.scm",(void*)f_3286},
{"f_3290posixwin.scm",(void*)f_3290},
{"f_3278posixwin.scm",(void*)f_3278},
{"f_3234posixwin.scm",(void*)f_3234},
{"f_3266posixwin.scm",(void*)f_3266},
{"f_3237posixwin.scm",(void*)f_3237},
{"f_3248posixwin.scm",(void*)f_3248},
{"f_3242posixwin.scm",(void*)f_3242},
{"f_3108posixwin.scm",(void*)f_3108},
{"f_3204posixwin.scm",(void*)f_3204},
{"f_3222posixwin.scm",(void*)f_3222},
{"f_3112posixwin.scm",(void*)f_3112},
{"f_3171posixwin.scm",(void*)f_3171},
{"f_3175posixwin.scm",(void*)f_3175},
{"f_3179posixwin.scm",(void*)f_3179},
{"f_3183posixwin.scm",(void*)f_3183},
{"f_3187posixwin.scm",(void*)f_3187},
{"f_3061posixwin.scm",(void*)f_3061},
{"f_3164posixwin.scm",(void*)f_3164},
{"f_3144posixwin.scm",(void*)f_3144},
{"f_3148posixwin.scm",(void*)f_3148},
{"f_3152posixwin.scm",(void*)f_3152},
{"f_3053posixwin.scm",(void*)f_3053},
{"f_3024posixwin.scm",(void*)f_3024},
{"f_3041posixwin.scm",(void*)f_3041},
{"f_3045posixwin.scm",(void*)f_3045},
{"f_3018posixwin.scm",(void*)f_3018},
{"f_3012posixwin.scm",(void*)f_3012},
{"f_3009posixwin.scm",(void*)f_3009},
{"f_2916posixwin.scm",(void*)f_2916},
{"f_2932posixwin.scm",(void*)f_2932},
{"f_2940posixwin.scm",(void*)f_2940},
{"f_2973posixwin.scm",(void*)f_2973},
{"f_2954posixwin.scm",(void*)f_2954},
{"f_2957posixwin.scm",(void*)f_2957},
{"f_2960posixwin.scm",(void*)f_2960},
{"f_2897posixwin.scm",(void*)f_2897},
{"f_2753posixwin.scm",(void*)f_2753},
{"f_2849posixwin.scm",(void*)f_2849},
{"f_2844posixwin.scm",(void*)f_2844},
{"f_2755posixwin.scm",(void*)f_2755},
{"f_2768posixwin.scm",(void*)f_2768},
{"f_2776posixwin.scm",(void*)f_2776},
{"f_2809posixwin.scm",(void*)f_2809},
{"f_2790posixwin.scm",(void*)f_2790},
{"f_2793posixwin.scm",(void*)f_2793},
{"f_2734posixwin.scm",(void*)f_2734},
{"f_2625posixwin.scm",(void*)f_2625},
{"f_2631posixwin.scm",(void*)f_2631},
{"f_2652posixwin.scm",(void*)f_2652},
{"f_2723posixwin.scm",(void*)f_2723},
{"f_2656posixwin.scm",(void*)f_2656},
{"f_2663posixwin.scm",(void*)f_2663},
{"f_2665posixwin.scm",(void*)f_2665},
{"f_2682posixwin.scm",(void*)f_2682},
{"f_2692posixwin.scm",(void*)f_2692},
{"f_2696posixwin.scm",(void*)f_2696},
{"f_2646posixwin.scm",(void*)f_2646},
{"f_2566posixwin.scm",(void*)f_2566},
{"f_2570posixwin.scm",(void*)f_2570},
{"f_2576posixwin.scm",(void*)f_2576},
{"f_2547posixwin.scm",(void*)f_2547},
{"f_2551posixwin.scm",(void*)f_2551},
{"f_2513posixwin.scm",(void*)f_2513},
{"f_2520posixwin.scm",(void*)f_2520},
{"f_2485posixwin.scm",(void*)f_2485},
{"f_2492posixwin.scm",(void*)f_2492},
{"f_2495posixwin.scm",(void*)f_2495},
{"f_2498posixwin.scm",(void*)f_2498},
{"f_2468posixwin.scm",(void*)f_2468},
{"f_2472posixwin.scm",(void*)f_2472},
{"f_2475posixwin.scm",(void*)f_2475},
{"f_2449posixwin.scm",(void*)f_2449},
{"f_2440posixwin.scm",(void*)f_2440},
{"f_2375posixwin.scm",(void*)f_2375},
{"f_2381posixwin.scm",(void*)f_2381},
{"f_2385posixwin.scm",(void*)f_2385},
{"f_2393posixwin.scm",(void*)f_2393},
{"f_2419posixwin.scm",(void*)f_2419},
{"f_2423posixwin.scm",(void*)f_2423},
{"f_2411posixwin.scm",(void*)f_2411},
{"f_2355posixwin.scm",(void*)f_2355},
{"f_2363posixwin.scm",(void*)f_2363},
{"f_2338posixwin.scm",(void*)f_2338},
{"f_2349posixwin.scm",(void*)f_2349},
{"f_2353posixwin.scm",(void*)f_2353},
{"f_2308posixwin.scm",(void*)f_2308},
{"f_2315posixwin.scm",(void*)f_2315},
{"f_2324posixwin.scm",(void*)f_2324},
{"f_2318posixwin.scm",(void*)f_2318},
{"f_2273posixwin.scm",(void*)f_2273},
{"f_2277posixwin.scm",(void*)f_2277},
{"f_2306posixwin.scm",(void*)f_2306},
{"f_2292posixwin.scm",(void*)f_2292},
{"f_2286posixwin.scm",(void*)f_2286},
{"f_2259posixwin.scm",(void*)f_2259},
{"f_2271posixwin.scm",(void*)f_2271},
{"f_2245posixwin.scm",(void*)f_2245},
{"f_2257posixwin.scm",(void*)f_2257},
{"f_2227posixwin.scm",(void*)f_2227},
{"f_2231posixwin.scm",(void*)f_2231},
{"f_2243posixwin.scm",(void*)f_2243},
{"f_2190posixwin.scm",(void*)f_2190},
{"f_2198posixwin.scm",(void*)f_2198},
{"f_2181posixwin.scm",(void*)f_2181},
{"f_2175posixwin.scm",(void*)f_2175},
{"f_2169posixwin.scm",(void*)f_2169},
{"f_2145posixwin.scm",(void*)f_2145},
{"f_2167posixwin.scm",(void*)f_2167},
{"f_2163posixwin.scm",(void*)f_2163},
{"f_2155posixwin.scm",(void*)f_2155},
{"f_2115posixwin.scm",(void*)f_2115},
{"f_2143posixwin.scm",(void*)f_2143},
{"f_2139posixwin.scm",(void*)f_2139},
{"f_2131posixwin.scm",(void*)f_2131},
{"f_2059posixwin.scm",(void*)f_2059},
{"f_2069posixwin.scm",(void*)f_2069},
{"f_2046posixwin.scm",(void*)f_2046},
{"f_2037posixwin.scm",(void*)f_2037},
{"f_1986posixwin.scm",(void*)f_1986},
{"f_1999posixwin.scm",(void*)f_1999},
{"f_1990posixwin.scm",(void*)f_1990},
{"f_1966posixwin.scm",(void*)f_1966},
{"f_1970posixwin.scm",(void*)f_1970},
{"f_1976posixwin.scm",(void*)f_1976},
{"f_1980posixwin.scm",(void*)f_1980},
{"f_1946posixwin.scm",(void*)f_1946},
{"f_1950posixwin.scm",(void*)f_1950},
{"f_1956posixwin.scm",(void*)f_1956},
{"f_1960posixwin.scm",(void*)f_1960},
{"f_1922posixwin.scm",(void*)f_1922},
{"f_1926posixwin.scm",(void*)f_1926},
{"f_1937posixwin.scm",(void*)f_1937},
{"f_1941posixwin.scm",(void*)f_1941},
{"f_1931posixwin.scm",(void*)f_1931},
{"f_1898posixwin.scm",(void*)f_1898},
{"f_1902posixwin.scm",(void*)f_1902},
{"f_1913posixwin.scm",(void*)f_1913},
{"f_1917posixwin.scm",(void*)f_1917},
{"f_1907posixwin.scm",(void*)f_1907},
{"f_1879posixwin.scm",(void*)f_1879},
{"f_1883posixwin.scm",(void*)f_1883},
{"f_1886posixwin.scm",(void*)f_1886},
{"f_1843posixwin.scm",(void*)f_1843},
{"f_1874posixwin.scm",(void*)f_1874},
{"f_1864posixwin.scm",(void*)f_1864},
{"f_1857posixwin.scm",(void*)f_1857},
{"f_1807posixwin.scm",(void*)f_1807},
{"f_1838posixwin.scm",(void*)f_1838},
{"f_1828posixwin.scm",(void*)f_1828},
{"f_1821posixwin.scm",(void*)f_1821},
{"f_1789posixwin.scm",(void*)f_1789},
{"f_1793posixwin.scm",(void*)f_1793},
{"f_1805posixwin.scm",(void*)f_1805},
{"f_1783posixwin.scm",(void*)f_1783},
{"f_1771posixwin.scm",(void*)f_1771},
{"f_1725posixwin.scm",(void*)f_1725},
{"f_1729posixwin.scm",(void*)f_1729},
{"f_1738posixwin.scm",(void*)f_1738},
{"f_1741posixwin.scm",(void*)f_1741},
{"f_1702posixwin.scm",(void*)f_1702},
{"f_1723posixwin.scm",(void*)f_1723},
{"f_1709posixwin.scm",(void*)f_1709},
{"f_1542posixwin.scm",(void*)f_1542},
{"f_1650posixwin.scm",(void*)f_1650},
{"f_1658posixwin.scm",(void*)f_1658},
{"f_1645posixwin.scm",(void*)f_1645},
{"f_1544posixwin.scm",(void*)f_1544},
{"f_1551posixwin.scm",(void*)f_1551},
{"f_1554posixwin.scm",(void*)f_1554},
{"f_1557posixwin.scm",(void*)f_1557},
{"f_1644posixwin.scm",(void*)f_1644},
{"f_1561posixwin.scm",(void*)f_1561},
{"f_1578posixwin.scm",(void*)f_1578},
{"f_1588posixwin.scm",(void*)f_1588},
{"f_1600posixwin.scm",(void*)f_1600},
{"f_1610posixwin.scm",(void*)f_1610},
{"f_1570posixwin.scm",(void*)f_1570},
{"f_1515posixwin.scm",(void*)f_1515},
{"f_1540posixwin.scm",(void*)f_1540},
{"f_1536posixwin.scm",(void*)f_1536},
{"f_1528posixwin.scm",(void*)f_1528},
{"f_1488posixwin.scm",(void*)f_1488},
{"f_1513posixwin.scm",(void*)f_1513},
{"f_1509posixwin.scm",(void*)f_1509},
{"f_1501posixwin.scm",(void*)f_1501},
{"f_1461posixwin.scm",(void*)f_1461},
{"f_1486posixwin.scm",(void*)f_1486},
{"f_1482posixwin.scm",(void*)f_1482},
{"f_1474posixwin.scm",(void*)f_1474},
{"f_1400posixwin.scm",(void*)f_1400},
{"f_1413posixwin.scm",(void*)f_1413},
{"f_1428posixwin.scm",(void*)f_1428},
{"f_1419posixwin.scm",(void*)f_1419},
{"f_1422posixwin.scm",(void*)f_1422},
{"f_1360posixwin.scm",(void*)f_1360},
{"f_1379posixwin.scm",(void*)f_1379},
{"f_1364posixwin.scm",(void*)f_1364},
{"f_1373posixwin.scm",(void*)f_1373},
{"f_1367posixwin.scm",(void*)f_1367},
{"f_1354posixwin.scm",(void*)f_1354},
{"f_1331posixwin.scm",(void*)f_1331},
{"f_1352posixwin.scm",(void*)f_1352},
{"f_1338posixwin.scm",(void*)f_1338},
{"f_1325posixwin.scm",(void*)f_1325},
{"f_1329posixwin.scm",(void*)f_1329},
{"f_1319posixwin.scm",(void*)f_1319},
{"f_1323posixwin.scm",(void*)f_1323},
{"f_1313posixwin.scm",(void*)f_1313},
{"f_1317posixwin.scm",(void*)f_1317},
{"f_1307posixwin.scm",(void*)f_1307},
{"f_1311posixwin.scm",(void*)f_1311},
{"f_1301posixwin.scm",(void*)f_1301},
{"f_1305posixwin.scm",(void*)f_1305},
{"f_1295posixwin.scm",(void*)f_1295},
{"f_1299posixwin.scm",(void*)f_1299},
{"f_1264posixwin.scm",(void*)f_1264},
{"f_1268posixwin.scm",(void*)f_1268},
{"f_1271posixwin.scm",(void*)f_1271},
{"f_1226posixwin.scm",(void*)f_1226},
{"f_1259posixwin.scm",(void*)f_1259},
{"f_1255posixwin.scm",(void*)f_1255},
{"f_1230posixwin.scm",(void*)f_1230},
{"f_1239posixwin.scm",(void*)f_1239},
{"f_1188posixwin.scm",(void*)f_1188},
{"f_1195posixwin.scm",(void*)f_1195},
{"f_1198posixwin.scm",(void*)f_1198},
{"f_1218posixwin.scm",(void*)f_1218},
{"f_1201posixwin.scm",(void*)f_1201},
{"f_1208posixwin.scm",(void*)f_1208},
{"f_1146posixwin.scm",(void*)f_1146},
{"f_1153posixwin.scm",(void*)f_1153},
{"f_1168posixwin.scm",(void*)f_1168},
{"f_1162posixwin.scm",(void*)f_1162},
{"f_1101posixwin.scm",(void*)f_1101},
{"f_1111posixwin.scm",(void*)f_1111},
{"f_1114posixwin.scm",(void*)f_1114},
{"f_1126posixwin.scm",(void*)f_1126},
{"f_1117posixwin.scm",(void*)f_1117},
{"f_1083posixwin.scm",(void*)f_1083},
{"f_1096posixwin.scm",(void*)f_1096},
{"f_1042posixwin.scm",(void*)f_1042},
{"f_1075posixwin.scm",(void*)f_1075},
{"f_1059posixwin.scm",(void*)f_1059},
{"f_1068posixwin.scm",(void*)f_1068},
{"f_1062posixwin.scm",(void*)f_1062},
{"f_997posixwin.scm",(void*)f_997},
{"f_1001posixwin.scm",(void*)f_1001},
{"f_1012posixwin.scm",(void*)f_1012},
{"f_1008posixwin.scm",(void*)f_1008},
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
