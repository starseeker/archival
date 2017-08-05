/* Generated from posixunix.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:16
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: posixunix.scm -output-file posixunix.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: posix
*/

#include "chicken.h"

#include <signal.h>
#include <errno.h>

static int C_not_implemented(void);
int C_not_implemented() { return -1; }

static C_TLS int C_wait_status;

#include <unistd.h>
#include <sys/types.h>
#include <sys/time.h>
#include <sys/wait.h>
#include <sys/utsname.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <dirent.h>
#include <pwd.h>

#ifdef ECOS
#include <cyg/posix/signal.h>
#endif

#ifdef HAVE_GRP_H
#include <grp.h>
#endif

#include <sys/mman.h>
#include <time.h>

#ifndef O_FSYNC
# define O_FSYNC O_SYNC
#endif

#ifndef PIPE_BUF
# ifdef __CYGWIN__
#  define PIPE_BUF       _POSIX_PIPE_BUF
# else
#  define PIPE_BUF 1024
# endif
#endif

#ifndef O_BINARY
# define O_BINARY        0
#endif
#ifndef O_TEXT
# define O_TEXT          0
#endif

#ifndef ARG_MAX
# define ARG_MAX 256
#endif

#ifndef MAP_FILE
# define MAP_FILE    0
#endif

#ifndef MAP_ANON
# define MAP_ANON    0
#endif

#if defined(HAVE_CRT_EXTERNS_H)
# include <crt_externs.h>
# define C_getenventry(i)       ((*_NSGetEnviron())[ i ])
#elif defined(C_MACOSX)
# define C_getenventry(i)       NULL
#else
extern char **environ;
# define C_getenventry(i)       (environ[ i ])
#endif

#ifndef ENV_MAX
# define ENV_MAX        1024
#endif

static C_TLS char *C_exec_args[ ARG_MAX ];
static C_TLS char *C_exec_env[ ENV_MAX ];
static C_TLS struct utsname C_utsname;
static C_TLS struct flock C_flock;
static C_TLS DIR *temphandle;
#ifndef ECOS
static C_TLS struct passwd *C_user;
#ifdef HAVE_GRP_H
static C_TLS struct group *C_group;
#else
struct C_fake_group {
  int gr_gid;
  int gr_mem[ 1 ];
  char *gr_name;
  char *gr_passwd;
};
static C_TLS struct C_fake_group *C_group;
#endif
static C_TLS int C_pipefds[ 2 ];
#endif
static C_TLS time_t C_secs;
static C_TLS struct tm C_tm;
static C_TLS fd_set C_fd_sets[ 2 ];
static C_TLS struct timeval C_timeval;
static C_TLS char C_hostbuf[ 256 ];
static C_TLS struct stat C_statbuf;

#define C_mkdir(str)        C_fix(mkdir(C_c_string(str), S_IRWXU | S_IRWXG | S_IRWXO))
#define C_chdir(str)        C_fix(chdir(C_c_string(str)))
#define C_rmdir(str)        C_fix(rmdir(C_c_string(str)))

#define C_opendir(x,h)          C_set_block_item(h, 0, (C_word) opendir(C_c_string(x)))
#define C_closedir(h)           (closedir((DIR *)C_block_item(h, 0)), C_SCHEME_UNDEFINED)
#define C_readdir(h,e)          C_set_block_item(e, 0, (C_word) readdir((DIR *)C_block_item(h, 0)))
#define C_foundfile(e,b)        (strcpy(C_c_string(b), ((struct dirent *) C_block_item(e, 0))->d_name), C_fix(strlen(((struct dirent *) C_block_item(e, 0))->d_name)))

#define C_curdir(buf)       (getcwd(C_c_string(buf), 256) ? C_fix(strlen(C_c_string(buf))) : C_SCHEME_FALSE)

#define open_binary_input_pipe(a, n, name)   C_mpointer(a, popen(C_c_string(name), "r"))
#define open_text_input_pipe(a, n, name)     open_binary_input_pipe(a, n, name)
#define open_binary_output_pipe(a, n, name)  C_mpointer(a, popen(C_c_string(name), "w"))
#define open_text_output_pipe(a, n, name)    open_binary_output_pipe(a, n, name)
#define close_pipe(p)                        C_fix(pclose(C_port_file(p)))

#define C_set_file_ptr(port, ptr)  (C_set_block_item(port, 0, (C_block_item(ptr, 0))), C_SCHEME_UNDEFINED)

#ifndef ECOS
#define C_fork              fork
#define C_waitpid(id, o)    C_fix(waitpid(C_unfix(id), &C_wait_status, C_unfix(o)))
#define C_getpid            getpid
#define C_getppid           getppid
#define C_kill(id, s)       C_fix(kill(C_unfix(id), C_unfix(s)))
#define C_getuid            getuid
#define C_getgid            getgid
#define C_geteuid           geteuid
#define C_getegid           getegid
#define C_chown(fn, u, g)   C_fix(chown(C_data_pointer(fn), C_unfix(u), C_unfix(g)))
#define C_chmod(fn, m)      C_fix(chmod(C_data_pointer(fn), C_unfix(m)))
#define C_setuid(id)        C_fix(setuid(C_unfix(id)))
#define C_setgid(id)        C_fix(setgid(C_unfix(id)))
#define C_setsid(dummy)     C_fix(setsid())
#define C_setpgid(x, y)     C_fix(setpgid(C_unfix(x), C_unfix(y)))
#define C_getpgid(x)        C_fix(getpgid(C_unfix(x)))
#define C_symlink(o, n)     C_fix(symlink(C_data_pointer(o), C_data_pointer(n)))
#define C_readlink(f, b)    C_fix(readlink(C_data_pointer(f), C_data_pointer(b), FILENAME_MAX))
#define C_getpwnam(n)       C_mk_bool((C_user = getpwnam((char *)C_data_pointer(n))) != NULL)
#define C_getpwuid(u)       C_mk_bool((C_user = getpwuid(C_unfix(u))) != NULL)
#ifdef HAVE_GRP_H
#define C_getgrnam(n)       C_mk_bool((C_group = getgrnam((char *)C_data_pointer(n))) != NULL)
#define C_getgrgid(u)       C_mk_bool((C_group = getgrgid(C_unfix(u))) != NULL)
#else
#define C_getgrnam(n)       C_SCHEME_FALSE
#define C_getgrgid(n)       C_SCHEME_FALSE
#endif
#define C_pipe(d)           C_fix(pipe(C_pipefds))
#define C_truncate(f, n)    C_fix(truncate((char *)C_data_pointer(f), C_num_to_int(n)))
#define C_ftruncate(f, n)   C_fix(ftruncate(C_unfix(f), C_num_to_int(n)))
#endif
#define C_uname             C_fix(uname(&C_utsname))
#define C_fdopen(a, n, fd, m) C_mpointer(a, fdopen(C_unfix(fd), C_c_string(m)))
#define C_C_fileno(p)       C_fix(fileno(C_port_file(p)))
#define C_dup(x)            C_fix(dup(C_unfix(x)))
#define C_dup2(x, y)        C_fix(dup2(C_unfix(x), C_unfix(y)))
#define C_alarm             alarm
#define C_setvbuf(p, m, s)  C_fix(setvbuf(C_port_file(p), NULL, C_unfix(m), C_unfix(s)))
#define C_access(fn, m)     C_fix(access((char *)C_data_pointer(fn), C_unfix(m)))
#define C_close(fd)         C_fix(close(C_unfix(fd)))
#define C_sleep             sleep

#define C_putenv(s)         C_fix(putenv((char *)C_data_pointer(s)))
#define C_stat(fn)          C_fix(stat((char *)C_data_pointer(fn), &C_statbuf))
#define C_lstat(fn)         C_fix(lstat((char *)C_data_pointer(fn), &C_statbuf))
#define C_fstat(f)          C_fix(fstat(C_unfix(f), &C_statbuf))

#define C_islink            ((C_statbuf.st_mode & S_IFMT) == S_IFLNK)
#define C_isreg             ((C_statbuf.st_mode & S_IFMT) == S_IFREG)

#ifdef C_GNU_ENV
# define C_setenv(x, y)     C_fix(setenv((char *)C_data_pointer(x), (char *)C_data_pointer(y), 1))
#else
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
#endif

static void C_fcall C_set_arg_string(char **where, int i, char *a, int len) {
  char *ptr;
  if(a != NULL) {
    ptr = (char *)C_malloc(len + 1);
    C_memcpy(ptr, a, len);
    ptr[ len ] = '\0';
  }
  else ptr = NULL;
  where[ i ] = ptr;
}

static void C_fcall C_free_exec_args() {
  char **a = C_exec_args;
  while((*a) != NULL) C_free(*(a++));
}

static void C_fcall C_free_exec_env() {
  char **a = C_exec_env;
  while((*a) != NULL) C_free(*(a++));
}

#define C_set_exec_arg(i, a, len)      C_set_arg_string(C_exec_args, i, a, len)
#define C_set_exec_env(i, a, len)      C_set_arg_string(C_exec_env, i, a, len)

#define C_execvp(f)         C_fix(execvp(C_data_pointer(f), C_exec_args))
#define C_execve(f)         C_fix(execve(C_data_pointer(f), C_exec_args, C_exec_env))

#if defined(__FreeBSD__) || defined(C_MACOSX) || defined(__NetBSD__) || defined(__OpenBSD__) || defined(__sgi__) || defined(sgi) || defined(__DragonFly__) || defined(__SUNPRO_C)
static C_TLS int C_uw;
# define C_WIFEXITED(n)      (C_uw = C_unfix(n), C_mk_bool(WIFEXITED(C_uw)))
# define C_WIFSIGNALED(n)    (C_uw = C_unfix(n), C_mk_bool(WIFSIGNALED(C_uw)))
# define C_WIFSTOPPED(n)     (C_uw = C_unfix(n), C_mk_bool(WIFSTOPPED(C_uw)))
# define C_WEXITSTATUS(n)    (C_uw = C_unfix(n), C_fix(WEXITSTATUS(C_uw)))
# define C_WTERMSIG(n)       (C_uw = C_unfix(n), C_fix(WTERMSIG(C_uw)))
# define C_WSTOPSIG(n)       (C_uw = C_unfix(n), C_fix(WSTOPSIG(C_uw)))
#else
# define C_WIFEXITED(n)      C_mk_bool(WIFEXITED(C_unfix(n)))
# define C_WIFSIGNALED(n)    C_mk_bool(WIFSIGNALED(C_unfix(n)))
# define C_WIFSTOPPED(n)     C_mk_bool(WIFSTOPPED(C_unfix(n)))
# define C_WEXITSTATUS(n)    C_fix(WEXITSTATUS(C_unfix(n)))
# define C_WTERMSIG(n)       C_fix(WTERMSIG(C_unfix(n)))
# define C_WSTOPSIG(n)       C_fix(WSTOPSIG(C_unfix(n)))
#endif

#ifdef __CYGWIN__
# define C_mkfifo(fn, m)    C_fix(-1);
#else
# define C_mkfifo(fn, m)    C_fix(mkfifo((char *)C_data_pointer(fn), C_unfix(m)))
#endif

#define C_flock_setup(t, s, n) (C_flock.l_type = C_unfix(t), C_flock.l_start = C_num_to_int(s), C_flock.l_whence = SEEK_SET, C_flock.l_len = C_num_to_int(n), C_SCHEME_UNDEFINED)
#define C_flock_test(p)     (fcntl(fileno(C_port_file(p)), F_GETLK, &C_flock) >= 0 ? (C_flock.l_type == F_UNLCK ? C_fix(0) : C_fix(C_flock.l_pid)) : C_SCHEME_FALSE)
#define C_flock_lock(p)     C_fix(fcntl(fileno(C_port_file(p)), F_SETLK, &C_flock))
#define C_flock_lockw(p)    C_fix(fcntl(fileno(C_port_file(p)), F_SETLKW, &C_flock))

#ifndef FILENAME_MAX
# define FILENAME_MAX          1024
#endif

static C_TLS sigset_t C_sigset;
#define C_sigemptyset(d)    (sigemptyset(&C_sigset), C_SCHEME_UNDEFINED)
#define C_sigaddset(s)      (sigaddset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigdelset(s)      (sigdelset(&C_sigset, C_unfix(s)), C_SCHEME_UNDEFINED)
#define C_sigismember(s)    C_mk_bool(sigismember(&C_sigset, C_unfix(s)))
#define C_sigprocmask_set(d)        C_fix(sigprocmask(SIG_SETMASK, &C_sigset, NULL))
#define C_sigprocmask_block(d)      C_fix(sigprocmask(SIG_BLOCK, &C_sigset, NULL))
#define C_sigprocmask_unblock(d)    C_fix(sigprocmask(SIG_UNBLOCK, &C_sigset, NULL))

#define C_open(fn, fl, m)   C_fix(open(C_c_string(fn), C_unfix(fl), C_unfix(m)))
#define C_read(fd, b, n)    C_fix(read(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_write(fd, b, n)   C_fix(write(C_unfix(fd), C_data_pointer(b), C_unfix(n)))
#define C_mkstemp(t)        C_fix(mkstemp(C_c_string(t)))

#define C_ftell(p)            C_fix(ftell(C_port_file(p)))
#define C_fseek(p, n, w)      C_mk_nbool(fseek(C_port_file(p), C_unfix(n), C_unfix(w)))
#define C_lseek(fd, o, w)     C_fix(lseek(C_unfix(fd), C_unfix(o), C_unfix(w)))

#define C_zero_fd_set(i)      FD_ZERO(&C_fd_sets[ i ])
#define C_set_fd_set(i, fd)   FD_SET(fd, &C_fd_sets[ i ])
#define C_test_fd_set(i, fd)  FD_ISSET(fd, &C_fd_sets[ i ])
#define C_C_select(m)         C_fix(select(C_unfix(m), &C_fd_sets[ 0 ], &C_fd_sets[ 1 ], NULL, NULL))
#define C_C_select_t(m, t)    (C_timeval.tv_sec = C_unfix(t), C_timeval.tv_usec = 0, C_fix(select(C_unfix(m), &C_fd_sets[ 0 ], &C_fd_sets[ 1 ], NULL, &C_timeval)))

#define C_ctime(n)          (C_secs = (n), ctime(&C_secs))

#if defined(__CYGWIN__) || defined(__SVR4)
/* Seen here: http://lists.samba.org/archive/samba-technical/2002-November/025571.html */

time_t timegm(struct tm *t)
{
  time_t tl, tb;
  struct tm *tg;

  tl = mktime (t);
  if (tl == -1)
    {
      t->tm_hour--;
      tl = mktime (t);
      if (tl == -1)
        return -1; /* can't deal with output from strptime */
      tl += 3600;
    }
  tg = gmtime (&tl);
  tg->tm_isdst = 0;
  tb = mktime (tg);
  if (tb == -1)
    {
      tg->tm_hour--;
      tb = mktime (tg);
      if (tb == -1)
        return -1; /* can't deal with output from gmtime */
      tb += 3600;
    }
  return (tl - (tb - tl));
}
#endif

#if !defined(C_GNU_ENV) || defined(__CYGWIN__) || defined(__uClinux__)
# define C_asctime(v)        (memset(&C_tm, 0, sizeof(struct tm)), C_tm.tm_sec = C_unfix(C_block_item(v, 0)), C_tm.tm_min = C_unfix(C_block_item(v, 1)), C_tm.tm_hour = C_unfix(C_block_item(v, 2)), C_tm.tm_mday = C_unfix(C_block_item(v, 3)), C_tm.tm_mon = C_unfix(C_block_item(v, 4)), C_tm.tm_year = C_unfix(C_block_item(v, 5)), C_tm.tm_wday = C_unfix(C_block_item(v, 6)), C_tm.tm_yday = C_unfix(C_block_item(v, 7)), C_tm.tm_isdst = (C_block_item(v, 8) != C_SCHEME_FALSE), asctime(&C_tm) )
# define C_mktime(v)        (memset(&C_tm, 0, sizeof(struct tm)), C_tm.tm_sec = C_unfix(C_block_item(v, 0)), C_tm.tm_min = C_unfix(C_block_item(v, 1)), C_tm.tm_hour = C_unfix(C_block_item(v, 2)), C_tm.tm_mday = C_unfix(C_block_item(v, 3)), C_tm.tm_mon = C_unfix(C_block_item(v, 4)), C_tm.tm_year = C_unfix(C_block_item(v, 5)), C_tm.tm_wday = C_unfix(C_block_item(v, 6)), C_tm.tm_yday = C_unfix(C_block_item(v, 7)), C_tm.tm_isdst = (C_block_item(v, 8) != C_SCHEME_FALSE), (C_temporary_flonum = mktime(&C_tm)) != -1)
# define C_timegm(v)        (memset(&C_tm, 0, sizeof(struct tm)), C_tm.tm_sec = C_unfix(C_block_item(v, 0)), C_tm.tm_min = C_unfix(C_block_item(v, 1)), C_tm.tm_hour = C_unfix(C_block_item(v, 2)), C_tm.tm_mday = C_unfix(C_block_item(v, 3)), C_tm.tm_mon = C_unfix(C_block_item(v, 4)), C_tm.tm_year = C_unfix(C_block_item(v, 5)), C_tm.tm_wday = C_unfix(C_block_item(v, 6)), C_tm.tm_yday = C_unfix(C_block_item(v, 7)), C_tm.tm_isdst = (C_block_item(v, 8) != C_SCHEME_FALSE), (C_temporary_flonum = timegm(&C_tm)) != -1)
#else
# define C_asctime(v)        (memset(&C_tm, 0, sizeof(struct tm)), C_tm.tm_sec = C_unfix(C_block_item(v, 0)), C_tm.tm_min = C_unfix(C_block_item(v, 1)), C_tm.tm_hour = C_unfix(C_block_item(v, 2)), C_tm.tm_mday = C_unfix(C_block_item(v, 3)), C_tm.tm_mon = C_unfix(C_block_item(v, 4)), C_tm.tm_year = C_unfix(C_block_item(v, 5)), C_tm.tm_wday = C_unfix(C_block_item(v, 6)), C_tm.tm_yday = C_unfix(C_block_item(v, 7)), C_tm.tm_isdst = (C_block_item(v, 8) != C_SCHEME_FALSE), C_tm.tm_gmtoff = C_unfix(C_block_item(v, 9)), asctime(&C_tm) )
# define C_mktime(v)        (memset(&C_tm, 0, sizeof(struct tm)), C_tm.tm_sec = C_unfix(C_block_item(v, 0)), C_tm.tm_min = C_unfix(C_block_item(v, 1)), C_tm.tm_hour = C_unfix(C_block_item(v, 2)), C_tm.tm_mday = C_unfix(C_block_item(v, 3)), C_tm.tm_mon = C_unfix(C_block_item(v, 4)), C_tm.tm_year = C_unfix(C_block_item(v, 5)), C_tm.tm_wday = C_unfix(C_block_item(v, 6)), C_tm.tm_yday = C_unfix(C_block_item(v, 7)), C_tm.tm_isdst = (C_block_item(v, 8) != C_SCHEME_FALSE), C_tm.tm_gmtoff = C_unfix(C_block_item(v, 9)), (C_temporary_flonum = mktime(&C_tm)) != -1)
# define C_timegm(v)        (memset(&C_tm, 0, sizeof(struct tm)), C_tm.tm_sec = C_unfix(C_block_item(v, 0)), C_tm.tm_min = C_unfix(C_block_item(v, 1)), C_tm.tm_hour = C_unfix(C_block_item(v, 2)), C_tm.tm_mday = C_unfix(C_block_item(v, 3)), C_tm.tm_mon = C_unfix(C_block_item(v, 4)), C_tm.tm_year = C_unfix(C_block_item(v, 5)), C_tm.tm_wday = C_unfix(C_block_item(v, 6)), C_tm.tm_yday = C_unfix(C_block_item(v, 7)), C_tm.tm_isdst = (C_block_item(v, 8) != C_SCHEME_FALSE), C_tm.tm_gmtoff = C_unfix(C_block_item(v, 9)), (C_temporary_flonum = timegm(&C_tm)) != -1)
#endif

#ifndef ECOS
static gid_t *C_groups = NULL;

#define C_get_gid(n)      C_fix(C_groups[ C_unfix(n) ])
#define C_set_gid(n, id)  (C_groups[ C_unfix(n) ] = C_unfix(id), C_SCHEME_UNDEFINED)
#define C_set_groups(n)   C_fix(setgroups(C_unfix(n), C_groups))
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_regex_toplevel)
C_externimport void C_ccall C_regex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[633];


/* from k6171 in set-root-directory! in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall stub1211(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1211(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_r=C_fix((C_word)chroot(t0));
return C_r;}

/* from k5425 */
static C_word C_fcall stub972(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub972(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_sleep(t0));
return C_r;}

/* from parent-process-id in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall stub969(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub969(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getppid());
return C_r;}

/* from current-process-id in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall stub967(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub967(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from freeenv */
static C_word C_fcall stub899(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub899(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_env();
return C_r;}

/* from k5134 */
static C_word C_fcall stub892(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub892(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_env(t0,t1,t2);
return C_r;}

/* from freeargs */
static C_word C_fcall stub887(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub887(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_args();
return C_r;}

/* from k5115 */
static C_word C_fcall stub880(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub880(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from k5091 */
static C_word C_fcall stub868(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub868(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

/* from fork */
static C_word C_fcall stub863(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub863(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_fork());
return C_r;}

/* from getit */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub826(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub826(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
if(gethostname(C_hostbuf, 256) == -1) return(NULL);
              else return(C_hostbuf);
C_return:
#undef return

return C_r;}

/* from k4911 */
static C_word C_fcall stub818(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub818(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)ttyname(t0));
return C_r;}

/* from k4822 */
static C_word C_fcall stub801(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub801(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_alarm(t0));
return C_r;}

/* from k4797 */
static C_word C_fcall stub795(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub795(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

/* from local-timezone-abbreviation in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub790(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub790(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;

#if !defined(__CYGWIN__) && !defined(__SVR4) && !defined(__uClinux__) && !defined(__hpux__)
time_t clock = (time_t)0;struct tm *ltm = C_localtime(&clock);char *z = ltm ? (char *)ltm->tm_zone : 0;
#else
char *z = (daylight ? tzname[1] : tzname[0]);
#endif
return(z);
C_return:
#undef return

return C_r;}

/* from asctime */
static C_word C_fcall stub775(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub775(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0));
return C_r;}

/* from k4684 */
static C_word C_fcall stub766(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub766(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k4603 */
static C_word C_fcall stub735(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub735(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
C_r=C_fix((C_word)munmap(t0,t1));
return C_r;}

/* from k4541 */
static C_word C_fcall stub710(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5) C_regparm;
C_regparm static C_word C_fcall stub710(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
int t5=(int )C_num_to_int(C_a5);
C_r=C_mpointer_or_false(&C_a,(void*)mmap(t0,t1,t2,t3,t4,t5));
return C_r;}

/* from k4441 */
static C_word C_fcall stub688(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub688(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from k3422 in k3418 in file-link in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall stub459(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub459(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
C_r=C_fix((C_word)link(t0,t1));
return C_r;}

/* from a6221 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall stub418(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub418(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getgid());
return C_r;}

/* from a6224 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall stub414(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub414(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getuid());
return C_r;}

/* from current-effective-group-id in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall stub410(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub410(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getegid());
return C_r;}

/* from current-effective-user-id in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall stub408(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub408(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_geteuid());
return C_r;}

/* from k3094 */
static C_word C_fcall stub379(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub379(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)initgroups(t0,t1));
return C_r;}

/* from k2963 */
#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_return; C_cblockend
static C_word C_fcall stub352(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub352(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
if(C_groups != NULL) C_free(C_groups);C_groups = (gid_t *)C_malloc(sizeof(gid_t) * n);if(C_groups == NULL) return(0);else return(1);
C_return:
#undef return

return C_r;}

/* from k2956 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub348(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub348(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
return(getgroups(n, C_groups));
C_return:
#undef return

return C_r;}

/* from k2895 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub336(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub336(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
return(C_group->gr_mem[ i ]);
C_return:
#undef return

return C_r;}

/* from k1742 */
static C_word C_fcall stub92(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub92(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_mk_bool(C_test_fd_set(t0,t1));
return C_r;}

/* from k1732 */
static C_word C_fcall stub86(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub86(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_set_fd_set(t0,t1);
return C_r;}

/* from k1722 */
static C_word C_fcall stub81(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub81(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_zero_fd_set(t0);
return C_r;}

/* from k1504 */
static C_word C_fcall stub24(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub24(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
long t2=(long )C_num_to_long(C_a2);
C_r=C_fix((C_word)fcntl(t0,t1,t2));
return C_r;}

/* from k1453 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub17(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub17(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
fd_set in;struct timeval tm;FD_ZERO(&in);FD_SET(fd, &in);tm.tv_sec = tm.tv_usec = 0;if(select(fd + 1, &in, NULL, NULL, &tm) == -1) return(-1);else return(FD_ISSET(fd, &in) ? 1 : 0);
C_return:
#undef return

return C_r;}

/* from k1446 */
#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_return; C_cblockend
static C_word C_fcall stub13(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub13(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);if(val == -1) return(0);return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_return:
#undef return

return C_r;}

/* from k1422 */
static C_word C_fcall stub3(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub3(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

C_noret_decl(C_posix_toplevel)
C_externexport void C_ccall C_posix_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1401)
static void C_ccall f_1401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1407)
static void C_ccall f_1407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1410)
static void C_ccall f_1410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1413)
static void C_ccall f_1413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6234)
static void C_ccall f_6234(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6250)
static void C_ccall f_6250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6238)
static void C_ccall f_6238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6241)
static void C_ccall f_6241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2120)
static void C_ccall f_2120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2671)
static void C_ccall f_2671(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6228)
static void C_ccall f_6228(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2806)
static void C_ccall f_2806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6225)
static void C_ccall f_6225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3248)
static void C_ccall f_3248(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6222)
static void C_ccall f_6222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3267)
static void C_ccall f_3267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6204)
static void C_ccall f_6204(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6217)
static void C_ccall f_6217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6211)
static void C_ccall f_6211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3349)
static void C_ccall f_3349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6181)
static void C_ccall f_6181(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6173)
static void C_ccall f_6173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5942)
static void C_ccall f_5942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5942)
static void C_ccall f_5942r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_6099)
static void C_fcall f_6099(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6105)
static void C_ccall f_6105(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6094)
static void C_fcall f_6094(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6089)
static void C_fcall f_6089(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5944)
static void C_fcall f_5944(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6076)
static void C_ccall f_6076(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6084)
static void C_ccall f_6084(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5951)
static void C_fcall f_5951(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6064)
static void C_ccall f_6064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5961)
static void C_ccall f_5961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5963)
static void C_fcall f_5963(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5982)
static void C_ccall f_5982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6050)
static void C_ccall f_6050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6057)
static void C_ccall f_6057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6044)
static void C_ccall f_6044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5997)
static void C_ccall f_5997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6031)
static void C_ccall f_6031(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6017)
static void C_ccall f_6017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6029)
static void C_ccall f_6029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6025)
static void C_ccall f_6025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6009)
static void C_ccall f_6009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6007)
static void C_ccall f_6007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6068)
static void C_ccall f_6068(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5882)
static void C_ccall f_5882(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5882)
static void C_ccall f_5882r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5894)
static void C_fcall f_5894(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5889)
static void C_fcall f_5889(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5884)
static void C_fcall f_5884(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5822)
static void C_ccall f_5822(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5822)
static void C_ccall f_5822r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5834)
static void C_fcall f_5834(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5829)
static void C_fcall f_5829(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5824)
static void C_fcall f_5824(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5757)
static void C_fcall f_5757(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5816)
static void C_ccall f_5816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5820)
static void C_ccall f_5820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5808)
static void C_ccall f_5808(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5764)
static void C_ccall f_5764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5796)
static void C_ccall f_5796(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5767)
static void C_ccall f_5767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5778)
static void C_ccall f_5778(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5772)
static void C_ccall f_5772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5701)
static void C_ccall f_5701(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_5713)
static void C_ccall f_5713(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5744)
static void C_ccall f_5744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5724)
static void C_ccall f_5724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5740)
static void C_ccall f_5740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5728)
static void C_ccall f_5728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5736)
static void C_ccall f_5736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5732)
static void C_ccall f_5732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5707)
static void C_ccall f_5707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5690)
static void C_fcall f_5690(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5694)
static void C_ccall f_5694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5679)
static void C_fcall f_5679(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5683)
static void C_ccall f_5683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5618)
static void C_fcall f_5618(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_5622)
static void C_ccall f_5622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5625)
static void C_ccall f_5625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5628)
static void C_ccall f_5628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5657)
static void C_ccall f_5657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5661)
static void C_ccall f_5661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5664)
static void C_ccall f_5664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5667)
static void C_ccall f_5667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5655)
static void C_ccall f_5655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5629)
static C_word C_fcall f_5629(C_word *a,C_word t0);
C_noret_decl(f_5601)
static void C_fcall f_5601(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5614)
static void C_ccall f_5614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5523)
static void C_ccall f_5523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5584)
static void C_fcall f_5584(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5597)
static void C_ccall f_5597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5600)
static void C_ccall f_5600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5564)
static void C_fcall f_5564(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5579)
static void C_ccall f_5579(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5573)
static void C_ccall f_5573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5527)
static void C_fcall f_5527(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5550)
static void C_ccall f_5550(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5544)
static void C_ccall f_5544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5471)
static void C_ccall f_5471(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5471)
static void C_ccall f_5471r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5478)
static void C_ccall f_5478(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5497)
static void C_ccall f_5497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5501)
static void C_ccall f_5501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5465)
static void C_ccall f_5465(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5456)
static void C_ccall f_5456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5460)
static void C_ccall f_5460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5429)
static void C_ccall f_5429(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5429)
static void C_ccall f_5429r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5422)
static void C_ccall f_5422(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5419)
static void C_ccall f_5419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5416)
static void C_ccall f_5416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5338)
static void C_ccall f_5338(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5338)
static void C_ccall f_5338r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5374)
static void C_ccall f_5374(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5368)
static void C_ccall f_5368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5321)
static void C_ccall f_5321(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5142)
static void C_ccall f_5142(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5142)
static void C_ccall f_5142r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5273)
static void C_fcall f_5273(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5268)
static void C_fcall f_5268(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5144)
static void C_fcall f_5144(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5154)
static void C_ccall f_5154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5162)
static void C_fcall f_5162(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5205)
static C_word C_fcall f_5205(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5175)
static void C_fcall f_5175(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5200)
static void C_ccall f_5200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5178)
static void C_ccall f_5178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5123)
static C_word C_fcall f_5123(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5104)
static C_word C_fcall f_5104(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5062)
static void C_ccall f_5062(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5062)
static void C_ccall f_5062r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_5084)
static void C_ccall f_5084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5088)
static void C_ccall f_5088(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4962)
static void C_fcall f_4962(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4983)
static void C_ccall f_4983(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5054)
static void C_ccall f_5054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4987)
static void C_ccall f_4987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4994)
static void C_ccall f_4994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4996)
static void C_fcall f_4996(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5013)
static void C_ccall f_5013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5023)
static void C_ccall f_5023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5027)
static void C_ccall f_5027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4977)
static void C_ccall f_4977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4944)
static void C_ccall f_4944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4948)
static void C_ccall f_4948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4951)
static void C_ccall f_4951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4914)
static void C_ccall f_4914(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4918)
static void C_ccall f_4918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4921)
static void C_ccall f_4921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4885)
static void C_ccall f_4885(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4889)
static void C_ccall f_4889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4892)
static void C_ccall f_4892(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4826)
static void C_ccall f_4826(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4826)
static void C_ccall f_4826r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4830)
static void C_ccall f_4830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4836)
static void C_ccall f_4836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4819)
static void C_ccall f_4819(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4800)
static void C_ccall f_4800(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4800)
static void C_ccall f_4800r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4804)
static void C_ccall f_4804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4788)
static void C_ccall f_4788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4760)
static void C_ccall f_4760(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4767)
static void C_ccall f_4767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4732)
static void C_ccall f_4732(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4739)
static void C_ccall f_4739(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4704)
static void C_ccall f_4704(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4714)
static void C_ccall f_4714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4717)
static void C_ccall f_4717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4687)
static void C_ccall f_4687(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4691)
static void C_ccall f_4691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4694)
static void C_ccall f_4694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4668)
static void C_ccall f_4668(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4659)
static void C_ccall f_4659(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4653)
static void C_ccall f_4653(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4644)
static void C_ccall f_4644(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4609)
static void C_ccall f_4609(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4609)
static void C_ccall f_4609r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4547)
static void C_ccall f_4547(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...) C_noret;
C_noret_decl(f_4547)
static void C_ccall f_4547r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t8) C_noret;
C_noret_decl(f_4551)
static void C_ccall f_4551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4557)
static void C_ccall f_4557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4576)
static void C_ccall f_4576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4563)
static void C_ccall f_4563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4444)
static void C_ccall f_4444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4450)
static void C_fcall f_4450(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4454)
static void C_ccall f_4454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4462)
static void C_fcall f_4462(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4488)
static void C_ccall f_4488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4492)
static void C_ccall f_4492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4424)
static void C_ccall f_4424(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4432)
static void C_ccall f_4432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4407)
static void C_ccall f_4407(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4418)
static void C_ccall f_4418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4422)
static void C_ccall f_4422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4381)
static void C_ccall f_4381(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4405)
static void C_ccall f_4405(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4388)
static void C_ccall f_4388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4338)
static void C_ccall f_4338(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4338)
static void C_ccall f_4338r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4345)
static void C_fcall f_4345(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4362)
static void C_ccall f_4362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4310)
static void C_ccall f_4310(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4288)
static void C_ccall f_4288(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4288)
static void C_ccall f_4288r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4292)
static void C_ccall f_4292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4273)
static void C_ccall f_4273(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4273)
static void C_ccall f_4273r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4277)
static void C_ccall f_4277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4240)
static void C_fcall f_4240(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4166)
static void C_fcall f_4166(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4188)
static void C_ccall f_4188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4194)
static void C_fcall f_4194(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4127)
static void C_ccall f_4127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4155)
static void C_ccall f_4155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4151)
static void C_ccall f_4151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4144)
static void C_ccall f_4144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3888)
static void C_ccall f_3888(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3888)
static void C_ccall f_3888r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_4079)
static void C_fcall f_4079(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4068)
static void C_fcall f_4068(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4074)
static void C_ccall f_4074(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3890)
static void C_fcall f_3890(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3997)
static void C_ccall f_3997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3998)
static void C_ccall f_3998(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4015)
static void C_fcall f_4015(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4025)
static void C_ccall f_4025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3983)
static void C_ccall f_3983(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3939)
static void C_fcall f_3939(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3975)
static void C_ccall f_3975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3954)
static void C_ccall f_3954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3964)
static void C_ccall f_3964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3948)
static void C_ccall f_3948(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3943)
static void C_ccall f_3943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3946)
static void C_ccall f_3946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3893)
static void C_fcall f_3893(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3928)
static void C_ccall f_3928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3909)
static void C_ccall f_3909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3616)
static void C_ccall f_3616(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3616)
static void C_ccall f_3616r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_3825)
static void C_fcall f_3825(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3814)
static void C_fcall f_3814(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3820)
static void C_ccall f_3820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3809)
static void C_fcall f_3809(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3618)
static void C_fcall f_3618(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3625)
static void C_ccall f_3625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3782)
static void C_ccall f_3782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3786)
static void C_ccall f_3786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3761)
static void C_ccall f_3761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3771)
static void C_ccall f_3771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3749)
static void C_ccall f_3749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3736)
static void C_ccall f_3736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3740)
static void C_ccall f_3740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3731)
static void C_ccall f_3731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3734)
static void C_ccall f_3734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3649)
static void C_fcall f_3649(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3661)
static void C_fcall f_3661(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3698)
static void C_ccall f_3698(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3707)
static void C_ccall f_3707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3677)
static void C_ccall f_3677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3680)
static void C_ccall f_3680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3641)
static C_word C_fcall f_3641(C_word t0);
C_noret_decl(f_3626)
static void C_fcall f_3626(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3640)
static void C_ccall f_3640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3589)
static void C_ccall f_3589(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3589)
static void C_ccall f_3589r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3596)
static void C_fcall f_3596(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3599)
static void C_ccall f_3599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3544)
static void C_ccall f_3544(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3583)
static void C_ccall f_3583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3530)
static void C_ccall f_3530r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3542)
static void C_ccall f_3542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3516)
static void C_ccall f_3516(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3516)
static void C_ccall f_3516r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3528)
static void C_ccall f_3528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3501)
static void C_fcall f_3501(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3514)
static void C_ccall f_3514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3464)
static void C_fcall f_3464(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3472)
static void C_ccall f_3472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3439)
static void C_ccall f_3439(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3420)
static void C_ccall f_3420(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3424)
static void C_ccall f_3424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3389)
static void C_ccall f_3389(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3413)
static void C_ccall f_3413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3397)
static void C_ccall f_3397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3400)
static void C_ccall f_3400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3351)
static void C_ccall f_3351(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3384)
static void C_ccall f_3384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3372)
static void C_ccall f_3372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3380)
static void C_ccall f_3380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3376)
static void C_ccall f_3376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3326)
static void C_ccall f_3326(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3342)
static void C_ccall f_3342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3321)
static void C_ccall f_3321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3315)
static void C_ccall f_3315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3305)
static void C_ccall f_3305(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3299)
static void C_ccall f_3299(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3293)
static void C_ccall f_3293(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3269)
static void C_fcall f_3269(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3287)
static void C_ccall f_3287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3279)
static void C_ccall f_3279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3250)
static void C_ccall f_3250(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3260)
static void C_ccall f_3260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3231)
static void C_ccall f_3231(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3241)
static void C_ccall f_3241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3228)
static void C_ccall f_3228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3225)
static void C_ccall f_3225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3195)
static void C_ccall f_3195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3223)
static void C_ccall f_3223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3219)
static void C_ccall f_3219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3193)
static void C_ccall f_3193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3189)
static void C_ccall f_3189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3104)
static void C_ccall f_3104(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3034)
static void C_ccall f_3034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3039)
static void C_fcall f_3039(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2967)
static void C_ccall f_2967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3025)
static void C_ccall f_3025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2971)
static void C_ccall f_2971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2974)
static void C_ccall f_2974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2977)
static void C_ccall f_2977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2982)
static void C_fcall f_2982(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2996)
static void C_ccall f_2996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2960)
static C_word C_fcall f_2960(C_word t0);
C_noret_decl(f_2899)
static void C_ccall f_2899(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2951)
static void C_ccall f_2951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2903)
static void C_fcall f_2903(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2923)
static void C_fcall f_2923(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2937)
static void C_ccall f_2937(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2921)
static void C_ccall f_2921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2886)
static void C_ccall f_2886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2850)
static void C_fcall f_2850(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2860)
static void C_ccall f_2860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2868)
static void C_ccall f_2868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2872)
static void C_ccall f_2872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2876)
static void C_ccall f_2876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2808)
static void C_ccall f_2808(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2841)
static void C_ccall f_2841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2812)
static void C_ccall f_2812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2819)
static void C_ccall f_2819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2823)
static void C_ccall f_2823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2827)
static void C_ccall f_2827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2790)
static void C_ccall f_2790(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2775)
static void C_ccall f_2775(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2769)
static void C_ccall f_2769(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2743)
static void C_fcall f_2743(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2713)
static void C_ccall f_2713(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2731)
static void C_ccall f_2731(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2695)
static void C_ccall f_2695(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2705)
static void C_ccall f_2705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2682)
static void C_ccall f_2682(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2673)
static void C_ccall f_2673(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2626)
static void C_ccall f_2626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2630)
static void C_ccall f_2630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2616)
static void C_ccall f_2616(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2616)
static void C_ccall f_2616r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2586)
static void C_ccall f_2586(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2586)
static void C_ccall f_2586r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2596)
static void C_ccall f_2596r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2562)
static void C_ccall f_2562r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2566)
static void C_ccall f_2566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2577)
static void C_ccall f_2577(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2577)
static void C_ccall f_2577r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2581)
static void C_ccall f_2581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2542)
static void C_ccall f_2542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2557)
static void C_ccall f_2557(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2547)
static void C_ccall f_2547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2522)
static void C_ccall f_2522(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2526)
static void C_ccall f_2526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2486)
static void C_ccall f_2486(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2486)
static void C_ccall f_2486r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2517)
static void C_ccall f_2517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2507)
static void C_ccall f_2507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2500)
static void C_ccall f_2500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2450)
static void C_ccall f_2450(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2450)
static void C_ccall f_2450r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2471)
static void C_ccall f_2471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2464)
static void C_ccall f_2464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2435)
static void C_fcall f_2435(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2448)
static void C_ccall f_2448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2429)
static void C_fcall f_2429(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2417)
static C_word C_fcall f_2417(C_word t0);
C_noret_decl(f_2374)
static void C_ccall f_2374(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2374)
static void C_ccall f_2374r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2387)
static void C_ccall f_2387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2351)
static void C_ccall f_2351(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2372)
static void C_ccall f_2372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2299)
static void C_fcall f_2299(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2307)
static void C_ccall f_2307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2294)
static void C_fcall f_2294(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2196)
static void C_fcall f_2196(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2203)
static void C_ccall f_2203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2206)
static void C_ccall f_2206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2209)
static void C_ccall f_2209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2213)
static void C_ccall f_2213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2227)
static void C_fcall f_2227(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2249)
static void C_fcall f_2249(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2170)
static void C_ccall f_2170(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2192)
static void C_ccall f_2192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2188)
static void C_ccall f_2188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2146)
static void C_ccall f_2146(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2168)
static void C_ccall f_2168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2164)
static void C_ccall f_2164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2122)
static void C_ccall f_2122(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2144)
static void C_ccall f_2144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2140)
static void C_ccall f_2140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2060)
static void C_ccall f_2060(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2060)
static void C_ccall f_2060r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2073)
static void C_ccall f_2073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2085)
static void C_ccall f_2085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2079)
static void C_ccall f_2079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2051)
static void C_ccall f_2051(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2058)
static void C_ccall f_2058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2049)
static void C_ccall f_2049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2036)
static void C_ccall f_2036(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2040)
static void C_ccall f_2040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2034)
static void C_ccall f_2034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2024)
static void C_ccall f_2024(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2028)
static void C_ccall f_2028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2018)
static void C_ccall f_2018(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2022)
static void C_ccall f_2022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2016)
static void C_ccall f_2016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2006)
static void C_ccall f_2006(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1985)
static void C_ccall f_1985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1978)
static void C_ccall f_1978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1937)
static void C_fcall f_1937(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1969)
static void C_ccall f_1969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1962)
static void C_ccall f_1962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1941)
static void C_ccall f_1941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1918)
static void C_ccall f_1918(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1761)
static void C_ccall f_1761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1892)
static void C_ccall f_1892(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1767)
static void C_ccall f_1767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1770)
static void C_fcall f_1770(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1852)
static void C_ccall f_1852(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1809)
static void C_fcall f_1809(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1827)
static void C_ccall f_1827(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1825)
static void C_ccall f_1825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1813)
static void C_fcall f_1813(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1735)
static C_word C_fcall f_1735(C_word t0,C_word t1);
C_noret_decl(f_1725)
static C_word C_fcall f_1725(C_word t0,C_word t1);
C_noret_decl(f_1719)
static C_word C_fcall f_1719(C_word t0);
C_noret_decl(f_1687)
static void C_ccall f_1687(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1694)
static void C_ccall f_1694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1707)
static void C_ccall f_1707(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1648)
static void C_ccall f_1648(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1648)
static void C_ccall f_1648r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1664)
static void C_ccall f_1664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1606)
static void C_ccall f_1606(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1606)
static void C_ccall f_1606r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1616)
static void C_ccall f_1616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1619)
static void C_ccall f_1619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1622)
static void C_ccall f_1622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1591)
static void C_ccall f_1591(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1553)
static void C_ccall f_1553(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1553)
static void C_ccall f_1553r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1583)
static void C_ccall f_1583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1573)
static void C_ccall f_1573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1511)
static void C_ccall f_1511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1450)
static void C_ccall f_1450(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1443)
static void C_ccall f_1443(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1425)
static void C_ccall f_1425(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_1425)
static void C_ccall f_1425r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1429)
static void C_ccall f_1429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1440)
static void C_ccall f_1440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1436)
static void C_ccall f_1436(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_6099)
static void C_fcall trf_6099(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6099(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6099(t0,t1);}

C_noret_decl(trf_6094)
static void C_fcall trf_6094(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6094(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6094(t0,t1,t2);}

C_noret_decl(trf_6089)
static void C_fcall trf_6089(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6089(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6089(t0,t1,t2,t3);}

C_noret_decl(trf_5944)
static void C_fcall trf_5944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5944(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5944(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5951)
static void C_fcall trf_5951(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5951(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5951(t0,t1);}

C_noret_decl(trf_5963)
static void C_fcall trf_5963(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5963(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5963(t0,t1,t2,t3);}

C_noret_decl(trf_5894)
static void C_fcall trf_5894(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5894(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5894(t0,t1);}

C_noret_decl(trf_5889)
static void C_fcall trf_5889(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5889(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5889(t0,t1,t2);}

C_noret_decl(trf_5884)
static void C_fcall trf_5884(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5884(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5884(t0,t1,t2,t3);}

C_noret_decl(trf_5834)
static void C_fcall trf_5834(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5834(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5834(t0,t1);}

C_noret_decl(trf_5829)
static void C_fcall trf_5829(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5829(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5829(t0,t1,t2);}

C_noret_decl(trf_5824)
static void C_fcall trf_5824(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5824(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5824(t0,t1,t2,t3);}

C_noret_decl(trf_5757)
static void C_fcall trf_5757(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5757(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5757(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5690)
static void C_fcall trf_5690(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5690(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5690(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5679)
static void C_fcall trf_5679(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5679(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5679(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5618)
static void C_fcall trf_5618(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5618(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_5618(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_5601)
static void C_fcall trf_5601(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5601(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5601(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5584)
static void C_fcall trf_5584(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5584(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5584(t0,t1,t2,t3);}

C_noret_decl(trf_5564)
static void C_fcall trf_5564(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5564(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5564(t0,t1,t2);}

C_noret_decl(trf_5527)
static void C_fcall trf_5527(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5527(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_5527(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_5273)
static void C_fcall trf_5273(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5273(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5273(t0,t1);}

C_noret_decl(trf_5268)
static void C_fcall trf_5268(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5268(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5268(t0,t1,t2);}

C_noret_decl(trf_5144)
static void C_fcall trf_5144(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5144(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5144(t0,t1,t2,t3);}

C_noret_decl(trf_5162)
static void C_fcall trf_5162(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5162(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5162(t0,t1,t2,t3);}

C_noret_decl(trf_5175)
static void C_fcall trf_5175(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5175(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5175(t0,t1);}

C_noret_decl(trf_4962)
static void C_fcall trf_4962(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4962(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4962(t0,t1,t2);}

C_noret_decl(trf_4996)
static void C_fcall trf_4996(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4996(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4996(t0,t1,t2);}

C_noret_decl(trf_4450)
static void C_fcall trf_4450(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4450(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4450(t0,t1,t2);}

C_noret_decl(trf_4462)
static void C_fcall trf_4462(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4462(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4462(t0,t1,t2);}

C_noret_decl(trf_4345)
static void C_fcall trf_4345(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4345(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4345(t0,t1);}

C_noret_decl(trf_4240)
static void C_fcall trf_4240(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4240(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4240(t0,t1,t2,t3);}

C_noret_decl(trf_4166)
static void C_fcall trf_4166(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4166(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4166(t0,t1,t2,t3);}

C_noret_decl(trf_4194)
static void C_fcall trf_4194(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4194(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4194(t0,t1);}

C_noret_decl(trf_4079)
static void C_fcall trf_4079(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4079(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4079(t0,t1);}

C_noret_decl(trf_4068)
static void C_fcall trf_4068(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4068(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4068(t0,t1,t2);}

C_noret_decl(trf_3890)
static void C_fcall trf_3890(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3890(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3890(t0,t1,t2,t3);}

C_noret_decl(trf_4015)
static void C_fcall trf_4015(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4015(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_4015(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3939)
static void C_fcall trf_3939(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3939(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3939(t0,t1);}

C_noret_decl(trf_3893)
static void C_fcall trf_3893(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3893(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3893(t0,t1,t2,t3);}

C_noret_decl(trf_3825)
static void C_fcall trf_3825(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3825(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3825(t0,t1);}

C_noret_decl(trf_3814)
static void C_fcall trf_3814(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3814(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3814(t0,t1,t2);}

C_noret_decl(trf_3809)
static void C_fcall trf_3809(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3809(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3809(t0,t1,t2,t3);}

C_noret_decl(trf_3618)
static void C_fcall trf_3618(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3618(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3618(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3649)
static void C_fcall trf_3649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3649(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3649(t0,t1);}

C_noret_decl(trf_3661)
static void C_fcall trf_3661(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3661(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3661(t0,t1);}

C_noret_decl(trf_3626)
static void C_fcall trf_3626(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3626(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3626(t0,t1);}

C_noret_decl(trf_3596)
static void C_fcall trf_3596(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3596(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3596(t0,t1);}

C_noret_decl(trf_3501)
static void C_fcall trf_3501(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3501(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3501(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3464)
static void C_fcall trf_3464(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3464(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3464(t0,t1,t2);}

C_noret_decl(trf_3269)
static void C_fcall trf_3269(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3269(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3269(t0,t1,t2,t3);}

C_noret_decl(trf_3039)
static void C_fcall trf_3039(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3039(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3039(t0,t1,t2,t3);}

C_noret_decl(trf_2982)
static void C_fcall trf_2982(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2982(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2982(t0,t1,t2);}

C_noret_decl(trf_2903)
static void C_fcall trf_2903(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2903(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2903(t0,t1);}

C_noret_decl(trf_2923)
static void C_fcall trf_2923(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2923(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2923(t0,t1,t2);}

C_noret_decl(trf_2850)
static void C_fcall trf_2850(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2850(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2850(t0,t1);}

C_noret_decl(trf_2743)
static void C_fcall trf_2743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2743(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2743(t0,t1,t2,t3);}

C_noret_decl(trf_2435)
static void C_fcall trf_2435(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2435(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2435(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2429)
static void C_fcall trf_2429(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2429(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2429(t0,t1);}

C_noret_decl(trf_2299)
static void C_fcall trf_2299(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2299(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2299(t0,t1);}

C_noret_decl(trf_2294)
static void C_fcall trf_2294(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2294(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2294(t0,t1,t2);}

C_noret_decl(trf_2196)
static void C_fcall trf_2196(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2196(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2196(t0,t1,t2,t3);}

C_noret_decl(trf_2227)
static void C_fcall trf_2227(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2227(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2227(t0,t1);}

C_noret_decl(trf_2249)
static void C_fcall trf_2249(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2249(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2249(t0,t1);}

C_noret_decl(trf_1937)
static void C_fcall trf_1937(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1937(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1937(t0,t1,t2,t3);}

C_noret_decl(trf_1770)
static void C_fcall trf_1770(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1770(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1770(t0,t1);}

C_noret_decl(trf_1809)
static void C_fcall trf_1809(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1809(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1809(t0,t1);}

C_noret_decl(trf_1813)
static void C_fcall trf_1813(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1813(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1813(t0,t1);}

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

C_noret_decl(tr7rv)
static void C_fcall tr7rv(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7rv(C_proc7 k){
int n;
C_word *a,t7;
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
n=C_rest_count(0);
a=C_alloc(n+1);
t7=C_restore_rest_vector(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6,t7);}

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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("posix_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(3000)){
C_save(t1);
C_rereclaim2(3000*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,633);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[2]=C_h_intern(&lf[2],13,"string-append");
lf[4]=C_h_intern(&lf[4],15,"\003syssignal-hook");
lf[5]=C_static_string(C_heaptop,3," - ");
lf[6]=C_h_intern(&lf[6],17,"\003syspeek-c-string");
lf[7]=C_h_intern(&lf[7],16,"\003sysupdate-errno");
lf[8]=C_static_lambda_info(C_heaptop,38,"(posix-error type7 loc8 msg9 . args10)");
lf[9]=C_h_intern(&lf[9],15,"\003sysposix-error");
lf[10]=C_h_intern(&lf[10],21,"\003sysfile-nonblocking!");
lf[11]=C_static_lambda_info(C_heaptop,31,"(##sys#file-nonblocking! a1215)");
lf[12]=C_h_intern(&lf[12],19,"\003sysfile-select-one");
lf[13]=C_static_lambda_info(C_heaptop,29,"(##sys#file-select-one a1619)");
lf[14]=C_h_intern(&lf[14],8,"pipe/buf");
lf[15]=C_h_intern(&lf[15],11,"fcntl/dupfd");
lf[16]=C_h_intern(&lf[16],11,"fcntl/getfd");
lf[17]=C_h_intern(&lf[17],11,"fcntl/setfd");
lf[18]=C_h_intern(&lf[18],11,"fcntl/getfl");
lf[19]=C_h_intern(&lf[19],11,"fcntl/setfl");
lf[20]=C_h_intern(&lf[20],11,"open/rdonly");
lf[21]=C_h_intern(&lf[21],11,"open/wronly");
lf[22]=C_h_intern(&lf[22],9,"open/rdwr");
lf[23]=C_h_intern(&lf[23],9,"open/read");
lf[24]=C_h_intern(&lf[24],10,"open/write");
lf[25]=C_h_intern(&lf[25],10,"open/creat");
lf[26]=C_h_intern(&lf[26],11,"open/append");
lf[27]=C_h_intern(&lf[27],9,"open/excl");
lf[28]=C_h_intern(&lf[28],11,"open/noctty");
lf[29]=C_h_intern(&lf[29],13,"open/nonblock");
lf[30]=C_h_intern(&lf[30],10,"open/trunc");
lf[31]=C_h_intern(&lf[31],9,"open/sync");
lf[32]=C_h_intern(&lf[32],10,"open/fsync");
lf[33]=C_h_intern(&lf[33],11,"open/binary");
lf[34]=C_h_intern(&lf[34],9,"open/text");
lf[35]=C_h_intern(&lf[35],10,"perm/irusr");
lf[36]=C_h_intern(&lf[36],10,"perm/iwusr");
lf[37]=C_h_intern(&lf[37],10,"perm/ixusr");
lf[38]=C_h_intern(&lf[38],10,"perm/irgrp");
lf[39]=C_h_intern(&lf[39],10,"perm/iwgrp");
lf[40]=C_h_intern(&lf[40],10,"perm/ixgrp");
lf[41]=C_h_intern(&lf[41],10,"perm/iroth");
lf[42]=C_h_intern(&lf[42],10,"perm/iwoth");
lf[43]=C_h_intern(&lf[43],10,"perm/ixoth");
lf[44]=C_h_intern(&lf[44],10,"perm/irwxu");
lf[45]=C_h_intern(&lf[45],10,"perm/irwxg");
lf[46]=C_h_intern(&lf[46],10,"perm/irwxo");
lf[47]=C_h_intern(&lf[47],10,"perm/isvtx");
lf[48]=C_h_intern(&lf[48],10,"perm/isuid");
lf[49]=C_h_intern(&lf[49],10,"perm/isgid");
lf[50]=C_h_intern(&lf[50],12,"file-control");
lf[51]=C_h_intern(&lf[51],11,"\000file-error");
lf[52]=C_static_string(C_heaptop,19,"cannot control file");
lf[53]=C_h_intern(&lf[53],9,"\003syserror");
lf[54]=C_static_lambda_info(C_heaptop,33,"(file-control fd30 cmd31 . g2932)");
lf[55]=C_h_intern(&lf[55],9,"file-open");
lf[56]=C_static_string(C_heaptop,16,"cannot open file");
lf[57]=C_h_intern(&lf[57],17,"\003sysmake-c-string");
lf[58]=C_h_intern(&lf[58],20,"\003sysexpand-home-path");
lf[59]=C_static_lambda_info(C_heaptop,39,"(file-open filename41 flags42 . mode43)");
lf[60]=C_h_intern(&lf[60],10,"file-close");
lf[61]=C_static_string(C_heaptop,17,"cannot close file");
lf[62]=C_static_lambda_info(C_heaptop,17,"(file-close fd50)");
lf[63]=C_h_intern(&lf[63],11,"make-string");
lf[64]=C_h_intern(&lf[64],9,"file-read");
lf[65]=C_static_string(C_heaptop,21,"cannot read from file");
lf[66]=C_h_intern(&lf[66],11,"\000type-error");
lf[67]=C_static_string(C_heaptop,47,"bad argument type - not a string or byte-vector");
lf[68]=C_static_lambda_info(C_heaptop,34,"(file-read fd53 size54 . buffer55)");
lf[69]=C_h_intern(&lf[69],10,"file-write");
lf[70]=C_static_string(C_heaptop,20,"cannot write to file");
lf[71]=C_static_string(C_heaptop,47,"bad argument type - not a string or byte-vector");
lf[72]=C_static_lambda_info(C_heaptop,35,"(file-write fd62 buffer63 . size64)");
lf[73]=C_h_intern(&lf[73],12,"file-mkstemp");
lf[74]=C_h_intern(&lf[74],13,"\003syssubstring");
lf[75]=C_static_string(C_heaptop,28,"cannot create temporary file");
lf[76]=C_static_lambda_info(C_heaptop,25,"(file-mkstemp template71)");
lf[77]=C_static_lambda_info(C_heaptop,9,"(fd_zero)");
lf[78]=C_static_lambda_info(C_heaptop,14,"(fd_set a8489)");
lf[79]=C_static_lambda_info(C_heaptop,15,"(fd_test a9095)");
lf[80]=C_h_intern(&lf[80],11,"file-select");
lf[81]=C_static_string(C_heaptop,6,"failed");
lf[82]=C_static_lambda_info(C_heaptop,13,"(a1826 fd121)");
lf[83]=C_h_intern(&lf[83],12,"\003sysfor-each");
lf[84]=C_static_lambda_info(C_heaptop,13,"(a1851 fd118)");
lf[85]=C_static_lambda_info(C_heaptop,13,"(a1891 fd111)");
lf[86]=C_static_lambda_info(C_heaptop,13,"(a1917 fd104)");
lf[87]=C_static_lambda_info(C_heaptop,39,"(file-select fdsr96 fdsw97 . timeout98)");
lf[88]=C_h_intern(&lf[88],8,"seek/set");
lf[89]=C_h_intern(&lf[89],8,"seek/end");
lf[90]=C_h_intern(&lf[90],8,"seek/cur");
lf[92]=C_static_string(C_heaptop,18,"cannot access file");
lf[93]=C_static_string(C_heaptop,42,"bad argument type - not a fixnum or string");
lf[94]=C_static_lambda_info(C_heaptop,35,"(##sys#stat file127 link128 loc129)");
lf[95]=C_h_intern(&lf[95],9,"file-stat");
lf[96]=C_static_lambda_info(C_heaptop,26,"(file-stat f132 . link133)");
lf[97]=C_h_intern(&lf[97],9,"file-size");
lf[98]=C_static_lambda_info(C_heaptop,16,"(file-size f137)");
lf[99]=C_h_intern(&lf[99],22,"file-modification-time");
lf[100]=C_static_lambda_info(C_heaptop,29,"(file-modification-time f139)");
lf[101]=C_h_intern(&lf[101],16,"file-access-time");
lf[102]=C_static_lambda_info(C_heaptop,23,"(file-access-time f141)");
lf[103]=C_h_intern(&lf[103],16,"file-change-time");
lf[104]=C_static_lambda_info(C_heaptop,23,"(file-change-time f143)");
lf[105]=C_h_intern(&lf[105],10,"file-owner");
lf[106]=C_static_lambda_info(C_heaptop,17,"(file-owner f145)");
lf[107]=C_h_intern(&lf[107],16,"file-permissions");
lf[108]=C_static_lambda_info(C_heaptop,23,"(file-permissions f147)");
lf[109]=C_h_intern(&lf[109],13,"regular-file\077");
lf[110]=C_static_lambda_info(C_heaptop,24,"(regular-file\077 fname149)");
lf[111]=C_h_intern(&lf[111],14,"symbolic-link\077");
lf[112]=C_static_lambda_info(C_heaptop,25,"(symbolic-link\077 fname153)");
lf[113]=C_h_intern(&lf[113],18,"set-file-position!");
lf[114]=C_static_string(C_heaptop,24,"cannot set file position");
lf[115]=C_h_intern(&lf[115],6,"stream");
lf[116]=C_static_string(C_heaptop,12,"invalid file");
lf[117]=C_h_intern(&lf[117],5,"port\077");
lf[118]=C_h_intern(&lf[118],13,"\000bounds-error");
lf[119]=C_static_string(C_heaptop,30,"invalid negative port position");
lf[120]=C_static_lambda_info(C_heaptop,47,"(set-file-position! port157 pos158 . whence159)");
lf[121]=C_h_intern(&lf[121],13,"file-position");
lf[122]=C_h_intern(&lf[122],16,"create-directory");
lf[123]=C_static_string(C_heaptop,23,"cannot create directory");
lf[124]=C_static_lambda_info(C_heaptop,26,"(create-directory name167)");
lf[125]=C_h_intern(&lf[125],16,"change-directory");
lf[126]=C_static_string(C_heaptop,31,"cannot change current directory");
lf[127]=C_static_lambda_info(C_heaptop,26,"(change-directory name169)");
lf[128]=C_h_intern(&lf[128],16,"delete-directory");
lf[129]=C_static_string(C_heaptop,23,"cannot delete directory");
lf[130]=C_static_lambda_info(C_heaptop,26,"(delete-directory name171)");
lf[131]=C_h_intern(&lf[131],6,"string");
lf[132]=C_h_intern(&lf[132],9,"directory");
lf[133]=C_static_string(C_heaptop,21,"cannot open directory");
lf[134]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[135]=C_h_intern(&lf[135],16,"\003sysmake-pointer");
lf[136]=C_static_lambda_info(C_heaptop,35,"(body180 spec186 show-dotfiles\077187)");
lf[137]=C_static_lambda_info(C_heaptop,35,"(def-show-dotfiles\077183 %spec178206)");
lf[138]=C_h_intern(&lf[138],17,"current-directory");
lf[139]=C_static_lambda_info(C_heaptop,13,"(def-spec182)");
lf[140]=C_static_lambda_info(C_heaptop,21,"(directory . g176177)");
lf[141]=C_h_intern(&lf[141],10,"directory\077");
lf[142]=C_h_intern(&lf[142],13,"\003sysfile-info");
lf[143]=C_static_lambda_info(C_heaptop,21,"(directory\077 fname212)");
lf[144]=C_static_string(C_heaptop,33,"cannot retrieve current directory");
lf[145]=C_static_lambda_info(C_heaptop,29,"(current-directory . g216217)");
lf[146]=C_h_intern(&lf[146],5,"\000text");
lf[147]=C_static_lambda_info(C_heaptop,6,"(mode)");
lf[148]=C_static_string(C_heaptop,35,"illegal input/output mode specifier");
lf[149]=C_static_lambda_info(C_heaptop,14,"(badmode m227)");
lf[150]=C_static_string(C_heaptop,16,"cannot open pipe");
lf[151]=C_h_intern(&lf[151],13,"\003sysmake-port");
lf[152]=C_h_intern(&lf[152],21,"\003sysstream-port-class");
lf[153]=C_static_string(C_heaptop,6,"(pipe)");
lf[154]=C_static_lambda_info(C_heaptop,33,"(check loc228 cmd229 inp230 r231)");
lf[155]=C_h_intern(&lf[155],15,"open-input-pipe");
lf[156]=C_h_intern(&lf[156],7,"\000binary");
lf[157]=C_static_lambda_info(C_heaptop,31,"(open-input-pipe cmd234 . m235)");
lf[158]=C_h_intern(&lf[158],16,"open-output-pipe");
lf[159]=C_static_lambda_info(C_heaptop,32,"(open-output-pipe cmd240 . m241)");
lf[160]=C_h_intern(&lf[160],16,"close-input-pipe");
lf[161]=C_h_intern(&lf[161],23,"close-input/output-pipe");
lf[162]=C_static_string(C_heaptop,24,"error while closing pipe");
lf[163]=C_h_intern(&lf[163],14,"\003syscheck-port");
lf[164]=C_static_lambda_info(C_heaptop,26,"(close-input-pipe port246)");
lf[165]=C_h_intern(&lf[165],17,"close-output-pipe");
lf[166]=C_h_intern(&lf[166],20,"call-with-input-pipe");
lf[167]=C_static_lambda_info(C_heaptop,7,"(a2546)");
lf[168]=C_static_lambda_info(C_heaptop,20,"(a2552 . results264)");
lf[169]=C_static_lambda_info(C_heaptop,47,"(call-with-input-pipe cmd260 proc261 . mode262)");
lf[170]=C_h_intern(&lf[170],21,"call-with-output-pipe");
lf[171]=C_static_lambda_info(C_heaptop,7,"(a2570)");
lf[172]=C_static_lambda_info(C_heaptop,20,"(a2576 . results270)");
lf[173]=C_static_lambda_info(C_heaptop,48,"(call-with-output-pipe cmd266 proc267 . mode268)");
lf[174]=C_h_intern(&lf[174],20,"with-input-from-pipe");
lf[175]=C_h_intern(&lf[175],18,"\003sysstandard-input");
lf[176]=C_static_lambda_info(C_heaptop,20,"(a2595 . results277)");
lf[177]=C_static_lambda_info(C_heaptop,48,"(with-input-from-pipe cmd272 thunk273 . mode274)");
lf[178]=C_h_intern(&lf[178],19,"with-output-to-pipe");
lf[179]=C_h_intern(&lf[179],19,"\003sysstandard-output");
lf[180]=C_static_lambda_info(C_heaptop,20,"(a2615 . results286)");
lf[181]=C_static_lambda_info(C_heaptop,47,"(with-output-to-pipe cmd281 thunk282 . mode283)");
lf[182]=C_h_intern(&lf[182],11,"create-pipe");
lf[183]=C_static_string(C_heaptop,18,"cannot create pipe");
lf[184]=C_static_lambda_info(C_heaptop,13,"(create-pipe)");
lf[185]=C_h_intern(&lf[185],11,"signal/term");
lf[186]=C_h_intern(&lf[186],11,"signal/kill");
lf[187]=C_h_intern(&lf[187],10,"signal/int");
lf[188]=C_h_intern(&lf[188],10,"signal/hup");
lf[189]=C_h_intern(&lf[189],10,"signal/fpe");
lf[190]=C_h_intern(&lf[190],10,"signal/ill");
lf[191]=C_h_intern(&lf[191],11,"signal/segv");
lf[192]=C_h_intern(&lf[192],11,"signal/abrt");
lf[193]=C_h_intern(&lf[193],11,"signal/trap");
lf[194]=C_h_intern(&lf[194],11,"signal/quit");
lf[195]=C_h_intern(&lf[195],11,"signal/alrm");
lf[196]=C_h_intern(&lf[196],13,"signal/vtalrm");
lf[197]=C_h_intern(&lf[197],11,"signal/prof");
lf[198]=C_h_intern(&lf[198],9,"signal/io");
lf[199]=C_h_intern(&lf[199],10,"signal/urg");
lf[200]=C_h_intern(&lf[200],11,"signal/chld");
lf[201]=C_h_intern(&lf[201],11,"signal/cont");
lf[202]=C_h_intern(&lf[202],11,"signal/stop");
lf[203]=C_h_intern(&lf[203],11,"signal/tstp");
lf[204]=C_h_intern(&lf[204],11,"signal/pipe");
lf[205]=C_h_intern(&lf[205],11,"signal/xcpu");
lf[206]=C_h_intern(&lf[206],11,"signal/xfsz");
lf[207]=C_h_intern(&lf[207],11,"signal/usr1");
lf[208]=C_h_intern(&lf[208],11,"signal/usr2");
lf[209]=C_h_intern(&lf[209],12,"signal/winch");
lf[210]=C_h_intern(&lf[210],12,"signals-list");
lf[211]=C_h_intern(&lf[211],18,"\003sysinterrupt-hook");
lf[212]=C_h_intern(&lf[212],14,"signal-handler");
lf[213]=C_static_lambda_info(C_heaptop,23,"(signal-handler sig298)");
lf[214]=C_h_intern(&lf[214],19,"set-signal-handler!");
lf[215]=C_static_lambda_info(C_heaptop,36,"(set-signal-handler! sig300 proc301)");
lf[216]=C_static_lambda_info(C_heaptop,41,"(##sys#interrupt-hook reason304 state305)");
lf[217]=C_h_intern(&lf[217],16,"set-signal-mask!");
lf[218]=C_h_intern(&lf[218],14,"\000process-error");
lf[219]=C_static_string(C_heaptop,22,"cannot set signal mask");
lf[220]=C_static_lambda_info(C_heaptop,12,"(a2730 s311)");
lf[221]=C_static_lambda_info(C_heaptop,26,"(set-signal-mask! sigs310)");
lf[222]=C_h_intern(&lf[222],11,"signal-mask");
lf[223]=C_static_lambda_info(C_heaptop,22,"(loop sigs317 mask318)");
lf[224]=C_static_lambda_info(C_heaptop,13,"(signal-mask)");
lf[225]=C_h_intern(&lf[225],14,"signal-masked\077");
lf[226]=C_static_lambda_info(C_heaptop,23,"(signal-masked\077 sig321)");
lf[227]=C_h_intern(&lf[227],12,"signal-mask!");
lf[228]=C_static_string(C_heaptop,19,"cannot block signal");
lf[229]=C_static_lambda_info(C_heaptop,21,"(signal-mask! sig323)");
lf[230]=C_h_intern(&lf[230],14,"signal-unmask!");
lf[231]=C_static_string(C_heaptop,21,"cannot unblock signal");
lf[232]=C_static_lambda_info(C_heaptop,23,"(signal-unmask! sig326)");
lf[233]=C_h_intern(&lf[233],18,"system-information");
lf[234]=C_h_intern(&lf[234],25,"\003syspeek-nonnull-c-string");
lf[235]=C_static_string(C_heaptop,34,"cannot retrieve system information");
lf[236]=C_static_lambda_info(C_heaptop,20,"(system-information)");
lf[237]=C_h_intern(&lf[237],16,"user-information");
lf[238]=C_static_lambda_info(C_heaptop,26,"(user-information user332)");
lf[239]=C_h_intern(&lf[239],17,"group-information");
lf[240]=C_static_lambda_info(C_heaptop,10,"(rec i344)");
lf[241]=C_static_lambda_info(C_heaptop,28,"(group-information group340)");
lf[243]=C_static_lambda_info(C_heaptop,16,"(_ensure-groups)");
lf[244]=C_h_intern(&lf[244],10,"get-groups");
lf[245]=C_static_lambda_info(C_heaptop,11,"(loop i360)");
lf[246]=C_static_string(C_heaptop,39,"cannot retrieve supplementary group ids");
lf[247]=C_static_string(C_heaptop,13,"out of memory");
lf[248]=C_static_string(C_heaptop,39,"cannot retrieve supplementary group ids");
lf[249]=C_static_lambda_info(C_heaptop,12,"(get-groups)");
lf[250]=C_h_intern(&lf[250],11,"set-groups!");
lf[251]=C_static_string(C_heaptop,34,"cannot set supplementary group ids");
lf[252]=C_static_lambda_info(C_heaptop,19,"(do366 lst368 i369)");
lf[253]=C_static_string(C_heaptop,13,"out of memory");
lf[254]=C_static_lambda_info(C_heaptop,21,"(set-groups! lst0365)");
lf[255]=C_h_intern(&lf[255],17,"initialize-groups");
lf[256]=C_static_string(C_heaptop,41,"cannot initialize supplementary group ids");
lf[257]=C_static_lambda_info(C_heaptop,33,"(initialize-groups user385 id386)");
lf[258]=C_h_intern(&lf[258],10,"errno/perm");
lf[259]=C_h_intern(&lf[259],11,"errno/noent");
lf[260]=C_h_intern(&lf[260],10,"errno/srch");
lf[261]=C_h_intern(&lf[261],10,"errno/intr");
lf[262]=C_h_intern(&lf[262],8,"errno/io");
lf[263]=C_h_intern(&lf[263],12,"errno/noexec");
lf[264]=C_h_intern(&lf[264],10,"errno/badf");
lf[265]=C_h_intern(&lf[265],11,"errno/child");
lf[266]=C_h_intern(&lf[266],11,"errno/nomem");
lf[267]=C_h_intern(&lf[267],11,"errno/acces");
lf[268]=C_h_intern(&lf[268],11,"errno/fault");
lf[269]=C_h_intern(&lf[269],10,"errno/busy");
lf[270]=C_h_intern(&lf[270],12,"errno/notdir");
lf[271]=C_h_intern(&lf[271],11,"errno/isdir");
lf[272]=C_h_intern(&lf[272],11,"errno/inval");
lf[273]=C_h_intern(&lf[273],11,"errno/mfile");
lf[274]=C_h_intern(&lf[274],11,"errno/nospc");
lf[275]=C_h_intern(&lf[275],11,"errno/spipe");
lf[276]=C_h_intern(&lf[276],10,"errno/pipe");
lf[277]=C_h_intern(&lf[277],11,"errno/again");
lf[278]=C_h_intern(&lf[278],10,"errno/rofs");
lf[279]=C_h_intern(&lf[279],11,"errno/exist");
lf[280]=C_h_intern(&lf[280],16,"errno/wouldblock");
lf[281]=C_h_intern(&lf[281],10,"errno/2big");
lf[282]=C_h_intern(&lf[282],12,"errno/deadlk");
lf[283]=C_h_intern(&lf[283],9,"errno/dom");
lf[284]=C_h_intern(&lf[284],10,"errno/fbig");
lf[285]=C_h_intern(&lf[285],11,"errno/ilseq");
lf[286]=C_h_intern(&lf[286],11,"errno/mlink");
lf[287]=C_h_intern(&lf[287],17,"errno/nametoolong");
lf[288]=C_h_intern(&lf[288],11,"errno/nfile");
lf[289]=C_h_intern(&lf[289],11,"errno/nodev");
lf[290]=C_h_intern(&lf[290],11,"errno/nolck");
lf[291]=C_h_intern(&lf[291],11,"errno/nosys");
lf[292]=C_h_intern(&lf[292],14,"errno/notempty");
lf[293]=C_h_intern(&lf[293],11,"errno/notty");
lf[294]=C_h_intern(&lf[294],10,"errno/nxio");
lf[295]=C_h_intern(&lf[295],11,"errno/range");
lf[296]=C_h_intern(&lf[296],10,"errno/xdev");
lf[297]=C_h_intern(&lf[297],16,"change-file-mode");
lf[298]=C_static_string(C_heaptop,23,"cannot change file mode");
lf[299]=C_static_lambda_info(C_heaptop,32,"(change-file-mode fname398 m399)");
lf[300]=C_h_intern(&lf[300],17,"change-file-owner");
lf[301]=C_static_string(C_heaptop,24,"cannot change file owner");
lf[302]=C_static_lambda_info(C_heaptop,39,"(change-file-owner fn402 uid403 gid404)");
lf[303]=C_h_intern(&lf[303],25,"current-effective-user-id");
lf[304]=C_static_lambda_info(C_heaptop,27,"(current-effective-user-id)");
lf[305]=C_h_intern(&lf[305],26,"current-effective-group-id");
lf[306]=C_static_lambda_info(C_heaptop,28,"(current-effective-group-id)");
lf[307]=C_h_intern(&lf[307],12,"set-user-id!");
lf[308]=C_static_string(C_heaptop,18,"cannot set user ID");
lf[309]=C_static_lambda_info(C_heaptop,20,"(set-user-id! id412)");
lf[310]=C_h_intern(&lf[310],15,"current-user-id");
lf[311]=C_h_intern(&lf[311],13,"set-group-id!");
lf[312]=C_static_string(C_heaptop,19,"cannot set group ID");
lf[313]=C_static_lambda_info(C_heaptop,21,"(set-group-id! id416)");
lf[314]=C_h_intern(&lf[314],16,"current-group-id");
lf[315]=C_static_lambda_info(C_heaptop,33,"(check filename421 acc422 loc423)");
lf[316]=C_h_intern(&lf[316],17,"file-read-access\077");
lf[317]=C_static_lambda_info(C_heaptop,31,"(file-read-access\077 filename427)");
lf[318]=C_h_intern(&lf[318],18,"file-write-access\077");
lf[319]=C_static_lambda_info(C_heaptop,32,"(file-write-access\077 filename428)");
lf[320]=C_h_intern(&lf[320],20,"file-execute-access\077");
lf[321]=C_static_lambda_info(C_heaptop,34,"(file-execute-access\077 filename429)");
lf[322]=C_h_intern(&lf[322],14,"create-session");
lf[323]=C_static_string(C_heaptop,21,"cannot create session");
lf[324]=C_static_lambda_info(C_heaptop,16,"(create-session)");
lf[325]=C_h_intern(&lf[325],21,"set-process-group-id!");
lf[326]=C_static_string(C_heaptop,27,"cannot set process group ID");
lf[327]=C_static_lambda_info(C_heaptop,38,"(set-process-group-id! pid436 pgid437)");
lf[328]=C_h_intern(&lf[328],16,"process-group-id");
lf[329]=C_h_intern(&lf[329],20,"create-symbolic-link");
lf[330]=C_h_intern(&lf[330],18,"create-symbol-link");
lf[331]=C_static_string(C_heaptop,27,"cannot create symbolic link");
lf[332]=C_static_lambda_info(C_heaptop,36,"(create-symbolic-link old446 new447)");
lf[333]=C_h_intern(&lf[333],9,"substring");
lf[334]=C_h_intern(&lf[334],18,"read-symbolic-link");
lf[335]=C_static_string(C_heaptop,25,"cannot read symbolic link");
lf[336]=C_static_lambda_info(C_heaptop,29,"(read-symbolic-link fname452)");
lf[337]=C_h_intern(&lf[337],9,"file-link");
lf[338]=C_h_intern(&lf[338],9,"hard-link");
lf[339]=C_static_string(C_heaptop,26,"could not create hard link");
lf[340]=C_static_lambda_info(C_heaptop,25,"(file-link old467 new468)");
lf[341]=C_h_intern(&lf[341],12,"fileno/stdin");
lf[342]=C_h_intern(&lf[342],13,"fileno/stdout");
lf[343]=C_h_intern(&lf[343],13,"fileno/stderr");
lf[344]=C_h_intern(&lf[344],7,"\000append");
lf[345]=C_static_string(C_heaptop,27,"invalid mode for input file");
lf[346]=C_static_string(C_heaptop,1,"a");
lf[347]=C_static_string(C_heaptop,21,"invalid mode argument");
lf[348]=C_static_string(C_heaptop,1,"r");
lf[349]=C_static_string(C_heaptop,1,"w");
lf[350]=C_static_lambda_info(C_heaptop,18,"(mode inp487 m488)");
lf[351]=C_static_string(C_heaptop,16,"cannot open file");
lf[352]=C_static_string(C_heaptop,8,"(fdport)");
lf[353]=C_static_lambda_info(C_heaptop,32,"(check loc492 fd493 inp494 r495)");
lf[354]=C_h_intern(&lf[354],16,"open-input-file*");
lf[355]=C_static_lambda_info(C_heaptop,31,"(open-input-file* fd498 . m499)");
lf[356]=C_h_intern(&lf[356],17,"open-output-file*");
lf[357]=C_static_lambda_info(C_heaptop,32,"(open-output-file* fd501 . m502)");
lf[358]=C_h_intern(&lf[358],12,"port->fileno");
lf[359]=C_h_intern(&lf[359],6,"socket");
lf[360]=C_h_intern(&lf[360],20,"\003systcp-port->fileno");
lf[361]=C_static_string(C_heaptop,25,"port has no attached file");
lf[362]=C_static_string(C_heaptop,37,"cannot access file-descriptor of port");
lf[363]=C_h_intern(&lf[363],25,"\003syspeek-unsigned-integer");
lf[364]=C_static_lambda_info(C_heaptop,22,"(port->fileno port507)");
lf[365]=C_h_intern(&lf[365],16,"duplicate-fileno");
lf[366]=C_static_string(C_heaptop,32,"cannot duplicate file-descriptor");
lf[367]=C_static_lambda_info(C_heaptop,34,"(duplicate-fileno old511 . new512)");
lf[368]=C_h_intern(&lf[368],15,"make-input-port");
lf[369]=C_h_intern(&lf[369],14,"set-port-name!");
lf[370]=C_h_intern(&lf[370],21,"\003syscustom-input-port");
lf[371]=C_static_string(C_heaptop,13,"cannot select");
lf[372]=C_static_lambda_info(C_heaptop,8,"(ready\077)");
lf[373]=C_h_intern(&lf[373],17,"\003systhread-yield!");
lf[374]=C_h_intern(&lf[374],25,"\003systhread-block-for-i/o!");
lf[375]=C_h_intern(&lf[375],18,"\003syscurrent-thread");
lf[376]=C_static_string(C_heaptop,11,"cannot read");
lf[377]=C_static_string(C_heaptop,11,"cannot read");
lf[378]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[379]=C_static_lambda_info(C_heaptop,7,"(fetch)");
lf[380]=C_static_lambda_info(C_heaptop,7,"(a3735)");
lf[381]=C_static_lambda_info(C_heaptop,7,"(a3748)");
lf[382]=C_static_string(C_heaptop,12,"cannot close");
lf[383]=C_static_lambda_info(C_heaptop,7,"(a3760)");
lf[384]=C_static_lambda_info(C_heaptop,7,"(a3781)");
lf[385]=C_h_intern(&lf[385],15,"\003sysmake-string");
lf[386]=C_static_lambda_info(C_heaptop,38,"(body528 bufi535 on-close536 more\077537)");
lf[387]=C_static_lambda_info(C_heaptop,42,"(def-more\077532 %bufi525566 %on-close526567)");
lf[388]=C_h_intern(&lf[388],19,"\003sysundefined-value");
lf[389]=C_static_lambda_info(C_heaptop,7,"(a3819)");
lf[390]=C_static_lambda_info(C_heaptop,29,"(def-on-close531 %bufi525569)");
lf[391]=C_static_lambda_info(C_heaptop,13,"(def-bufi530)");
lf[392]=C_static_lambda_info(C_heaptop,55,"(##sys#custom-input-port loc521 nam522 fd523 . g520524)");
lf[393]=C_h_intern(&lf[393],16,"make-output-port");
lf[394]=C_h_intern(&lf[394],22,"\003syscustom-output-port");
lf[395]=C_static_string(C_heaptop,12,"cannot write");
lf[396]=C_static_lambda_info(C_heaptop,18,"(poke s596 len597)");
lf[397]=C_static_lambda_info(C_heaptop,12,"(a3947 s615)");
lf[398]=C_static_string(C_heaptop,12,"cannot close");
lf[399]=C_static_lambda_info(C_heaptop,7,"(a3953)");
lf[400]=C_static_lambda_info(C_heaptop,7,"(a3974)");
lf[401]=C_static_lambda_info(C_heaptop,13,"(f_3983 s601)");
lf[402]=C_static_lambda_info(C_heaptop,29,"(loop rem606 start607 len608)");
lf[403]=C_static_lambda_info(C_heaptop,13,"(f_3998 s604)");
lf[404]=C_static_lambda_info(C_heaptop,29,"(body586 bufi592 on-close593)");
lf[405]=C_static_lambda_info(C_heaptop,7,"(a4073)");
lf[406]=C_static_lambda_info(C_heaptop,29,"(def-on-close589 %bufi584622)");
lf[407]=C_static_lambda_info(C_heaptop,13,"(def-bufi588)");
lf[408]=C_static_lambda_info(C_heaptop,56,"(##sys#custom-output-port loc580 nam581 fd582 . g579583)");
lf[409]=C_h_intern(&lf[409],13,"file-truncate");
lf[410]=C_static_string(C_heaptop,20,"cannot truncate file");
lf[411]=C_static_string(C_heaptop,12,"invalid file");
lf[412]=C_static_lambda_info(C_heaptop,31,"(file-truncate fname628 off629)");
lf[413]=C_h_intern(&lf[413],4,"lock");
lf[414]=C_static_lambda_info(C_heaptop,30,"(setup port633 args634 loc635)");
lf[415]=C_static_lambda_info(C_heaptop,27,"(err msg648 lock649 loc650)");
lf[416]=C_h_intern(&lf[416],9,"file-lock");
lf[417]=C_static_string(C_heaptop,16,"cannot lock file");
lf[418]=C_static_lambda_info(C_heaptop,29,"(file-lock port651 . args652)");
lf[419]=C_h_intern(&lf[419],18,"file-lock/blocking");
lf[420]=C_static_string(C_heaptop,16,"cannot lock file");
lf[421]=C_static_lambda_info(C_heaptop,38,"(file-lock/blocking port654 . args655)");
lf[422]=C_h_intern(&lf[422],14,"file-test-lock");
lf[423]=C_static_string(C_heaptop,18,"cannot unlock file");
lf[424]=C_static_lambda_info(C_heaptop,34,"(file-test-lock port657 . args658)");
lf[425]=C_h_intern(&lf[425],11,"file-unlock");
lf[426]=C_static_string(C_heaptop,18,"cannot unlock file");
lf[427]=C_static_lambda_info(C_heaptop,21,"(file-unlock lock667)");
lf[428]=C_h_intern(&lf[428],11,"create-fifo");
lf[429]=C_static_string(C_heaptop,18,"cannot create FIFO");
lf[430]=C_static_lambda_info(C_heaptop,32,"(create-fifo fname670 . mode671)");
lf[431]=C_h_intern(&lf[431],5,"fifo\077");
lf[432]=C_static_string(C_heaptop,19,"file does not exist");
lf[433]=C_static_lambda_info(C_heaptop,19,"(fifo\077 filename675)");
lf[434]=C_h_intern(&lf[434],6,"setenv");
lf[435]=C_static_lambda_info(C_heaptop,22,"(setenv var678 val679)");
lf[436]=C_h_intern(&lf[436],8,"unsetenv");
lf[437]=C_static_lambda_info(C_heaptop,17,"(unsetenv var683)");
lf[438]=C_h_intern(&lf[438],19,"current-environment");
lf[439]=C_static_lambda_info(C_heaptop,11,"(scan j696)");
lf[440]=C_static_lambda_info(C_heaptop,11,"(loop i693)");
lf[441]=C_static_lambda_info(C_heaptop,21,"(current-environment)");
lf[442]=C_h_intern(&lf[442],9,"prot/read");
lf[443]=C_h_intern(&lf[443],10,"prot/write");
lf[444]=C_h_intern(&lf[444],9,"prot/exec");
lf[445]=C_h_intern(&lf[445],9,"prot/none");
lf[446]=C_h_intern(&lf[446],9,"map/fixed");
lf[447]=C_h_intern(&lf[447],10,"map/shared");
lf[448]=C_h_intern(&lf[448],11,"map/private");
lf[449]=C_h_intern(&lf[449],13,"map/anonymous");
lf[450]=C_h_intern(&lf[450],8,"map/file");
lf[451]=C_h_intern(&lf[451],18,"map-file-to-memory");
lf[452]=C_h_intern(&lf[452],4,"mmap");
lf[453]=C_static_string(C_heaptop,25,"cannot map file to memory");
lf[454]=C_h_intern(&lf[454],20,"\003syspointer->address");
lf[455]=C_static_string(C_heaptop,41,"bad argument type - not a foreign pointer");
lf[456]=C_h_intern(&lf[456],16,"\003sysnull-pointer");
lf[457]=C_static_lambda_info(C_heaptop,66,"(map-file-to-memory addr721 len722 prot723 flag724 fd725 . off726)");
lf[458]=C_h_intern(&lf[458],22,"unmap-file-from-memory");
lf[459]=C_static_string(C_heaptop,29,"cannot unmap file from memory");
lf[460]=C_static_lambda_info(C_heaptop,41,"(unmap-file-from-memory mmap741 . len742)");
lf[461]=C_h_intern(&lf[461],26,"memory-mapped-file-pointer");
lf[462]=C_static_lambda_info(C_heaptop,36,"(memory-mapped-file-pointer mmap745)");
lf[463]=C_h_intern(&lf[463],19,"memory-mapped-file\077");
lf[464]=C_static_lambda_info(C_heaptop,26,"(memory-mapped-file\077 x747)");
lf[465]=C_h_intern(&lf[465],19,"seconds->local-time");
lf[466]=C_h_intern(&lf[466],18,"\003sysdecode-seconds");
lf[467]=C_static_lambda_info(C_heaptop,29,"(seconds->local-time secs760)");
lf[468]=C_h_intern(&lf[468],17,"seconds->utc-time");
lf[469]=C_static_lambda_info(C_heaptop,27,"(seconds->utc-time secs762)");
lf[470]=C_h_intern(&lf[470],15,"seconds->string");
lf[471]=C_static_string(C_heaptop,32,"cannot convert seconds to string");
lf[472]=C_static_lambda_info(C_heaptop,25,"(seconds->string secs770)");
lf[473]=C_h_intern(&lf[473],12,"time->string");
lf[474]=C_static_string(C_heaptop,36,"cannot convert time vector to string");
lf[475]=C_static_string(C_heaptop,21,"time vector too short");
lf[476]=C_static_lambda_info(C_heaptop,20,"(time->string tm779)");
lf[477]=C_h_intern(&lf[477],19,"local-time->seconds");
lf[478]=C_h_intern(&lf[478],15,"\003syscons-flonum");
lf[479]=C_static_string(C_heaptop,37,"cannot convert time vector to seconds");
lf[480]=C_static_string(C_heaptop,21,"time vector too short");
lf[481]=C_static_lambda_info(C_heaptop,27,"(local-time->seconds tm784)");
lf[482]=C_h_intern(&lf[482],17,"utc-time->seconds");
lf[483]=C_static_string(C_heaptop,37,"cannot convert time vector to seconds");
lf[484]=C_static_string(C_heaptop,21,"time vector too short");
lf[485]=C_static_lambda_info(C_heaptop,25,"(utc-time->seconds tm787)");
lf[486]=C_h_intern(&lf[486],27,"local-timezone-abbreviation");
lf[487]=C_static_lambda_info(C_heaptop,29,"(local-timezone-abbreviation)");
lf[488]=C_h_intern(&lf[488],5,"_exit");
lf[489]=C_h_intern(&lf[489],23,"\003syscleanup-before-exit");
lf[490]=C_static_lambda_info(C_heaptop,17,"(_exit . code798)");
lf[491]=C_h_intern(&lf[491],10,"set-alarm!");
lf[492]=C_static_lambda_info(C_heaptop,20,"(set-alarm! a800803)");
lf[493]=C_h_intern(&lf[493],19,"set-buffering-mode!");
lf[494]=C_static_string(C_heaptop,25,"cannot set buffering mode");
lf[495]=C_h_intern(&lf[495],5,"\000full");
lf[496]=C_h_intern(&lf[496],5,"\000line");
lf[497]=C_h_intern(&lf[497],5,"\000none");
lf[498]=C_static_string(C_heaptop,22,"invalid buffering-mode");
lf[499]=C_static_lambda_info(C_heaptop,47,"(set-buffering-mode! port804 mode805 . size806)");
lf[500]=C_h_intern(&lf[500],14,"terminal-port\077");
lf[501]=C_static_lambda_info(C_heaptop,24,"(terminal-port\077 port813)");
lf[502]=C_h_intern(&lf[502],13,"terminal-name");
lf[503]=C_static_string(C_heaptop,35,"port is not connected to a terminal");
lf[504]=C_static_lambda_info(C_heaptop,23,"(terminal-name port822)");
lf[505]=C_h_intern(&lf[505],13,"get-host-name");
lf[506]=C_h_intern(&lf[506],6,"\000error");
lf[507]=C_static_string(C_heaptop,25,"cannot retrieve host-name");
lf[508]=C_static_lambda_info(C_heaptop,15,"(get-host-name)");
lf[509]=C_h_intern(&lf[509],12,"glob->regexp");
lf[510]=C_h_intern(&lf[510],13,"make-pathname");
lf[511]=C_h_intern(&lf[511],18,"decompose-pathname");
lf[512]=C_h_intern(&lf[512],4,"glob");
lf[513]=C_static_lambda_info(C_heaptop,7,"(a4976)");
lf[514]=C_h_intern(&lf[514],12,"string-match");
lf[515]=C_static_lambda_info(C_heaptop,11,"(loop f854)");
lf[516]=C_static_string(C_heaptop,1,".");
lf[517]=C_static_string(C_heaptop,1,"*");
lf[518]=C_static_lambda_info(C_heaptop,38,"(a4982 dir841844 file842845 ext843846)");
lf[519]=C_static_lambda_info(C_heaptop,15,"(conc paths839)");
lf[520]=C_static_lambda_info(C_heaptop,17,"(glob . paths837)");
lf[521]=C_h_intern(&lf[521],12,"process-fork");
lf[522]=C_static_string(C_heaptop,27,"cannot create child process");
lf[523]=C_static_lambda_info(C_heaptop,16,"(f_5088 a867870)");
lf[524]=C_static_lambda_info(C_heaptop,25,"(process-fork . thunk865)");
lf[525]=C_static_lambda_info(C_heaptop,24,"(setarg a878884 a877885)");
lf[526]=C_static_lambda_info(C_heaptop,24,"(setenv a890896 a889897)");
lf[527]=C_h_intern(&lf[527],24,"pathname-strip-directory");
lf[528]=C_h_intern(&lf[528],15,"process-execute");
lf[529]=C_static_string(C_heaptop,22,"cannot execute process");
lf[530]=C_static_lambda_info(C_heaptop,12,"(do919 i922)");
lf[531]=C_static_lambda_info(C_heaptop,18,"(do915 al917 i918)");
lf[532]=C_static_lambda_info(C_heaptop,31,"(body906 arglist912 envlist913)");
lf[533]=C_static_lambda_info(C_heaptop,31,"(def-envlist909 %arglist904941)");
lf[534]=C_static_lambda_info(C_heaptop,16,"(def-arglist908)");
lf[535]=C_static_lambda_info(C_heaptop,39,"(process-execute filename902 . g901903)");
lf[536]=C_h_intern(&lf[536],16,"\003sysprocess-wait");
lf[537]=C_static_lambda_info(C_heaptop,37,"(##sys#process-wait pid947 nohang948)");
lf[538]=C_h_intern(&lf[538],12,"process-wait");
lf[539]=C_static_lambda_info(C_heaptop,7,"(a5367)");
lf[540]=C_static_string(C_heaptop,32,"waiting for child process failed");
lf[541]=C_static_lambda_info(C_heaptop,33,"(a5373 epid963 enorm964 ecode965)");
lf[542]=C_static_lambda_info(C_heaptop,24,"(process-wait . args951)");
lf[543]=C_h_intern(&lf[543],18,"current-process-id");
lf[544]=C_static_lambda_info(C_heaptop,20,"(current-process-id)");
lf[545]=C_h_intern(&lf[545],17,"parent-process-id");
lf[546]=C_static_lambda_info(C_heaptop,19,"(parent-process-id)");
lf[547]=C_h_intern(&lf[547],5,"sleep");
lf[548]=C_static_lambda_info(C_heaptop,15,"(sleep a971974)");
lf[549]=C_h_intern(&lf[549],14,"process-signal");
lf[550]=C_static_string(C_heaptop,32,"could not send signal to process");
lf[551]=C_static_lambda_info(C_heaptop,31,"(process-signal id975 . sig976)");
lf[552]=C_h_intern(&lf[552],17,"\003sysshell-command");
lf[553]=C_static_string(C_heaptop,7,"/bin/sh");
lf[554]=C_h_intern(&lf[554],6,"getenv");
lf[555]=C_static_string(C_heaptop,5,"SHELL");
lf[556]=C_static_lambda_info(C_heaptop,21,"(##sys#shell-command)");
lf[557]=C_h_intern(&lf[557],27,"\003sysshell-command-arguments");
lf[558]=C_static_string(C_heaptop,2,"-c");
lf[559]=C_static_lambda_info(C_heaptop,41,"(##sys#shell-command-arguments cmdlin983)");
lf[560]=C_h_intern(&lf[560],11,"process-run");
lf[561]=C_static_lambda_info(C_heaptop,28,"(process-run f987 . args988)");
lf[562]=C_static_lambda_info(C_heaptop,7,"(a5543)");
lf[563]=C_static_string(C_heaptop,21,"abnormal process exit");
lf[564]=C_static_lambda_info(C_heaptop,29,"(a5549 _1012 flg1013 cod1014)");
lf[565]=C_static_lambda_info(C_heaptop,8,"(f_5529)");
lf[566]=C_static_lambda_info(C_heaptop,68,"(make-on-close loc1006 pid1007 clsvec1008 idx1009 idxa1010 idxb1011)");
lf[567]=C_static_lambda_info(C_heaptop,7,"(a5572)");
lf[568]=C_static_lambda_info(C_heaptop,19,"(a5578 i1018 o1019)");
lf[569]=C_static_lambda_info(C_heaptop,22,"(needed-pipe port1017)");
lf[570]=C_static_lambda_info(C_heaptop,34,"(connect-parent pipe1021 port1022)");
lf[571]=C_static_lambda_info(C_heaptop,43,"(connect-child pipe1029 port1030 stdfd1031)");
lf[572]=C_static_lambda_info(C_heaptop,11,"(swap-ends)");
lf[573]=C_static_lambda_info(C_heaptop,7,"(a5656)");
lf[574]=C_static_lambda_info(C_heaptop,67,"(child cmd1039 args1040 env1041 stdoutf1042 stdinf1043 stderrf1044)");
lf[575]=C_static_lambda_info(C_heaptop,59,"(input-port loc1053 cmd1055 pipe1056 stdf1057 on-close1059)");
lf[576]=C_static_lambda_info(C_heaptop,60,"(output-port loc1061 cmd1063 pipe1064 stdf1065 on-close1067)");
lf[577]=C_h_intern(&lf[577],11,"\003sysprocess");
lf[578]=C_static_lambda_info(C_heaptop,7,"(a5706)");
lf[579]=C_static_lambda_info(C_heaptop,50,"(a5712 inpipe1076 outpipe1077 errpipe1078 pid1079)");
lf[580]=C_static_lambda_info(C_heaptop,83,"(##sys#process loc1069 cmd1070 args1071 env1072 stdoutf1073 stdinf1074 stderrf10"
"75)");
lf[581]=C_static_lambda_info(C_heaptop,7,"(a5771)");
lf[582]=C_static_lambda_info(C_heaptop,38,"(a5777 in1094 out1095 pid1096 err1097)");
lf[583]=C_static_lambda_info(C_heaptop,17,"(a5795 g10911092)");
lf[584]=C_static_lambda_info(C_heaptop,17,"(a5807 g10871088)");
lf[585]=C_static_lambda_info(C_heaptop,52,"(%process loc1082 err\0771083 cmd1084 args1085 env1086)");
lf[586]=C_h_intern(&lf[586],7,"process");
lf[587]=C_static_lambda_info(C_heaptop,27,"(body1106 args1112 env1113)");
lf[588]=C_static_lambda_info(C_heaptop,27,"(def-env1109 %args11041115)");
lf[589]=C_static_lambda_info(C_heaptop,14,"(def-args1108)");
lf[590]=C_static_lambda_info(C_heaptop,29,"(process cmd1102 . g11011103)");
lf[591]=C_h_intern(&lf[591],8,"process*");
lf[592]=C_static_lambda_info(C_heaptop,27,"(body1126 args1132 env1133)");
lf[593]=C_static_lambda_info(C_heaptop,27,"(def-env1129 %args11241135)");
lf[594]=C_static_lambda_info(C_heaptop,14,"(def-args1128)");
lf[595]=C_static_lambda_info(C_heaptop,30,"(process* cmd1122 . g11211123)");
lf[596]=C_h_intern(&lf[596],10,"find-files");
lf[597]=C_static_lambda_info(C_heaptop,14,"(f_6068 x1179)");
lf[598]=C_static_string(C_heaptop,1,".");
lf[599]=C_static_string(C_heaptop,2,"..");
lf[600]=C_static_lambda_info(C_heaptop,7,"(a6008)");
lf[601]=C_static_string(C_heaptop,1,"*");
lf[602]=C_static_lambda_info(C_heaptop,7,"(a6016)");
lf[603]=C_static_lambda_info(C_heaptop,7,"(a6030)");
lf[604]=C_h_intern(&lf[604],16,"\003sysdynamic-wind");
lf[605]=C_h_intern(&lf[605],13,"pathname-file");
lf[606]=C_static_lambda_info(C_heaptop,19,"(loop fs1181 r1182)");
lf[607]=C_static_string(C_heaptop,1,"*");
lf[608]=C_static_lambda_info(C_heaptop,16,"(f_6084 . _1177)");
lf[609]=C_static_lambda_info(C_heaptop,16,"(f_6076 . _1176)");
lf[610]=C_static_lambda_info(C_heaptop,38,"(body1164 action1171 id1172 limit1173)");
lf[611]=C_static_lambda_info(C_heaptop,43,"(def-limit1168 %action11611196 %id11621197)");
lf[612]=C_static_lambda_info(C_heaptop,28,"(def-id1167 %action11611199)");
lf[613]=C_static_lambda_info(C_heaptop,19,"(a6104 x1201 y1202)");
lf[614]=C_static_lambda_info(C_heaptop,16,"(def-action1166)");
lf[615]=C_static_lambda_info(C_heaptop,51,"(find-files dir1158 pred1159 . action-id-limit1160)");
lf[616]=C_h_intern(&lf[616],19,"set-root-directory!");
lf[617]=C_static_string(C_heaptop,31,"unable to change root directory");
lf[618]=C_static_lambda_info(C_heaptop,29,"(set-root-directory! dir1216)");
lf[619]=C_static_string(C_heaptop,32,"cannot retrieve process group ID");
lf[620]=C_static_lambda_info(C_heaptop,14,"(a6203 pid441)");
lf[621]=C_h_intern(&lf[621],18,"getter-with-setter");
lf[622]=C_static_lambda_info(C_heaptop,7,"(a6221)");
lf[623]=C_static_lambda_info(C_heaptop,7,"(a6224)");
lf[624]=C_h_intern(&lf[624],23,"\003sysuser-interrupt-hook");
lf[625]=C_static_lambda_info(C_heaptop,12,"(a6227 n329)");
lf[626]=C_h_intern(&lf[626],11,"make-vector");
lf[627]=C_static_string(C_heaptop,37,"cannot retrieve file position of port");
lf[628]=C_static_string(C_heaptop,12,"invalid file");
lf[629]=C_static_lambda_info(C_heaptop,15,"(a6233 port164)");
lf[630]=C_h_intern(&lf[630],17,"register-feature!");
lf[631]=C_h_intern(&lf[631],5,"posix");
lf[632]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,633,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1401,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k1399 */
static void C_ccall f_1401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1401,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1404,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_regex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1402 in k1399 */
static void C_ccall f_1404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1407,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1405 in k1402 in k1399 */
static void C_ccall f_1407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1407,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1410,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1410,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1413,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 405  register-feature! */
t3=*((C_word*)lf[630]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[631]);}

/* k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1413(C_word c,C_word t0,C_word t1){
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
C_word ab[92],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1413,2,t0,t1);}
t2=*((C_word*)lf[2]+1);
t3=C_mutate(&lf[3],(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1425,a[2]=t2,a[3]=lf[8],tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[9]+1,lf[3]);
t5=C_mutate((C_word*)lf[10]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1443,a[2]=lf[11],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[12]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1450,a[2]=lf[13],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[14]+1,C_fix((C_word)PIPE_BUF));
t8=C_mutate((C_word*)lf[15]+1,C_fix((C_word)F_DUPFD));
t9=C_mutate((C_word*)lf[16]+1,C_fix((C_word)F_GETFD));
t10=C_mutate((C_word*)lf[17]+1,C_fix((C_word)F_SETFD));
t11=C_mutate((C_word*)lf[18]+1,C_fix((C_word)F_GETFL));
t12=C_mutate((C_word*)lf[19]+1,C_fix((C_word)F_SETFL));
t13=C_mutate((C_word*)lf[20]+1,C_fix((C_word)O_RDONLY));
t14=C_mutate((C_word*)lf[21]+1,C_fix((C_word)O_WRONLY));
t15=C_mutate((C_word*)lf[22]+1,C_fix((C_word)O_RDWR));
t16=C_mutate((C_word*)lf[23]+1,C_fix((C_word)O_RDONLY));
t17=C_mutate((C_word*)lf[24]+1,C_fix((C_word)O_WRONLY));
t18=C_mutate((C_word*)lf[25]+1,C_fix((C_word)O_CREAT));
t19=C_mutate((C_word*)lf[26]+1,C_fix((C_word)O_APPEND));
t20=C_mutate((C_word*)lf[27]+1,C_fix((C_word)O_EXCL));
t21=C_mutate((C_word*)lf[28]+1,C_fix((C_word)O_NOCTTY));
t22=C_mutate((C_word*)lf[29]+1,C_fix((C_word)O_NONBLOCK));
t23=C_mutate((C_word*)lf[30]+1,C_fix((C_word)O_TRUNC));
t24=C_mutate((C_word*)lf[31]+1,C_fix((C_word)O_FSYNC));
t25=C_mutate((C_word*)lf[32]+1,C_fix((C_word)O_FSYNC));
t26=C_mutate((C_word*)lf[33]+1,C_fix((C_word)O_BINARY));
t27=C_mutate((C_word*)lf[34]+1,C_fix((C_word)O_TEXT));
t28=C_mutate((C_word*)lf[35]+1,C_fix((C_word)S_IRUSR));
t29=C_mutate((C_word*)lf[36]+1,C_fix((C_word)S_IWUSR));
t30=C_mutate((C_word*)lf[37]+1,C_fix((C_word)S_IXUSR));
t31=C_mutate((C_word*)lf[38]+1,C_fix((C_word)S_IRGRP));
t32=C_mutate((C_word*)lf[39]+1,C_fix((C_word)S_IWGRP));
t33=C_mutate((C_word*)lf[40]+1,C_fix((C_word)S_IXGRP));
t34=C_mutate((C_word*)lf[41]+1,C_fix((C_word)S_IROTH));
t35=C_mutate((C_word*)lf[42]+1,C_fix((C_word)S_IWOTH));
t36=C_mutate((C_word*)lf[43]+1,C_fix((C_word)S_IXOTH));
t37=C_mutate((C_word*)lf[44]+1,C_fix((C_word)S_IRWXU));
t38=C_mutate((C_word*)lf[45]+1,C_fix((C_word)S_IRWXG));
t39=C_mutate((C_word*)lf[46]+1,C_fix((C_word)S_IRWXO));
t40=C_mutate((C_word*)lf[47]+1,C_fix((C_word)S_ISVTX));
t41=C_mutate((C_word*)lf[48]+1,C_fix((C_word)S_ISUID));
t42=C_mutate((C_word*)lf[49]+1,C_fix((C_word)S_ISGID));
t43=C_mutate((C_word*)lf[50]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1507,a[2]=lf[54],tmp=(C_word)a,a+=3,tmp));
t44=(C_word)C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRGRP),C_fix((C_word)S_IROTH));
t45=(C_word)C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRWXU),t44);
t46=C_mutate((C_word*)lf[55]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1553,a[2]=t45,a[3]=lf[59],tmp=(C_word)a,a+=4,tmp));
t47=C_mutate((C_word*)lf[60]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1591,a[2]=lf[62],tmp=(C_word)a,a+=3,tmp));
t48=*((C_word*)lf[63]+1);
t49=C_mutate((C_word*)lf[64]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1606,a[2]=t48,a[3]=lf[68],tmp=(C_word)a,a+=4,tmp));
t50=C_mutate((C_word*)lf[69]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1648,a[2]=lf[72],tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[73]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1687,a[2]=lf[76],tmp=(C_word)a,a+=3,tmp));
t52=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1719,a[2]=lf[77],tmp=(C_word)a,a+=3,tmp);
t53=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1725,a[2]=lf[78],tmp=(C_word)a,a+=3,tmp);
t54=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1735,a[2]=lf[79],tmp=(C_word)a,a+=3,tmp);
t55=C_mutate((C_word*)lf[80]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1745,a[2]=t53,a[3]=t54,a[4]=t52,a[5]=lf[87],tmp=(C_word)a,a+=6,tmp));
t56=C_mutate((C_word*)lf[88]+1,C_fix((C_word)SEEK_SET));
t57=C_mutate((C_word*)lf[89]+1,C_fix((C_word)SEEK_END));
t58=C_mutate((C_word*)lf[90]+1,C_fix((C_word)SEEK_CUR));
t59=C_mutate(&lf[91],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1937,a[2]=lf[94],tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[95]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1974,a[2]=lf[96],tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[97]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2006,a[2]=lf[98],tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[99]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2012,a[2]=lf[100],tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[101]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2018,a[2]=lf[102],tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[103]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2024,a[2]=lf[104],tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[105]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2030,a[2]=lf[106],tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[107]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2036,a[2]=lf[108],tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[109]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2042,a[2]=lf[110],tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[111]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2051,a[2]=lf[112],tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[113]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2060,a[2]=lf[120],tmp=(C_word)a,a+=3,tmp));
t70=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2120,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t71=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6234,a[2]=lf[629],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 720  getter-with-setter */
t72=*((C_word*)lf[621]+1);
((C_proc4)C_retrieve_proc(t72))(4,t72,t70,t71,*((C_word*)lf[113]+1));}

/* a6233 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6234(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6234,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6238,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6250,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 722  port? */
t5=*((C_word*)lf[117]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k6248 in a6233 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(7));
t3=(C_word)C_eqp(t2,lf[115]);
t4=((C_word*)t0)[2];
f_6238(2,t4,(C_truep(t3)?(C_word)C_ftell(((C_word*)t0)[3]):C_fix(-1)));}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
f_6238(2,t2,(C_word)C_lseek(((C_word*)t0)[3],C_fix(0),C_fix((C_word)SEEK_CUR)));}
else{
/* posixunix.scm: 727  ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[66],lf[121],lf[628],((C_word*)t0)[3]);}}}

/* k6236 in a6233 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6238,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6241,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 729  posix-error */
t3=lf[3];
f_1425(6,t3,t2,lf[51],lf[121],lf[627],((C_word*)t0)[2]);}
else{
t3=t2;
f_6241(2,t3,C_SCHEME_UNDEFINED);}}

/* k6239 in k6236 in a6233 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2120(C_word c,C_word t0,C_word t1){
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
C_word ab[146],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2120,2,t0,t1);}
t2=C_mutate((C_word*)lf[121]+1,t1);
t3=C_mutate((C_word*)lf[122]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2122,a[2]=lf[124],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[125]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2146,a[2]=lf[127],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[128]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2170,a[2]=lf[130],tmp=(C_word)a,a+=3,tmp));
t6=*((C_word*)lf[2]+1);
t7=*((C_word*)lf[63]+1);
t8=*((C_word*)lf[131]+1);
t9=C_mutate((C_word*)lf[132]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2194,a[2]=t7,a[3]=lf[140],tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[141]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2351,a[2]=lf[143],tmp=(C_word)a,a+=3,tmp));
t11=*((C_word*)lf[63]+1);
t12=C_mutate((C_word*)lf[138]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2374,a[2]=t11,a[3]=lf[145],tmp=(C_word)a,a+=4,tmp));
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2417,a[2]=lf[147],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2429,a[2]=lf[149],tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2435,a[2]=lf[154],tmp=(C_word)a,a+=3,tmp);
t16=C_mutate((C_word*)lf[155]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2450,a[2]=t14,a[3]=t15,a[4]=t13,a[5]=lf[157],tmp=(C_word)a,a+=6,tmp));
t17=C_mutate((C_word*)lf[158]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2486,a[2]=t14,a[3]=t15,a[4]=t13,a[5]=lf[159],tmp=(C_word)a,a+=6,tmp));
t18=C_mutate((C_word*)lf[160]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2522,a[2]=lf[164],tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[165]+1,*((C_word*)lf[160]+1));
t20=*((C_word*)lf[155]+1);
t21=*((C_word*)lf[158]+1);
t22=*((C_word*)lf[160]+1);
t23=*((C_word*)lf[165]+1);
t24=C_mutate((C_word*)lf[166]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2538,a[2]=t20,a[3]=t22,a[4]=lf[169],tmp=(C_word)a,a+=5,tmp));
t25=C_mutate((C_word*)lf[170]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2562,a[2]=t21,a[3]=t23,a[4]=lf[173],tmp=(C_word)a,a+=5,tmp));
t26=C_mutate((C_word*)lf[174]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2586,a[2]=t20,a[3]=t22,a[4]=lf[177],tmp=(C_word)a,a+=5,tmp));
t27=C_mutate((C_word*)lf[178]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2606,a[2]=t21,a[3]=t23,a[4]=lf[181],tmp=(C_word)a,a+=5,tmp));
t28=C_mutate((C_word*)lf[182]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2626,a[2]=lf[184],tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[185]+1,C_fix((C_word)SIGTERM));
t30=C_mutate((C_word*)lf[186]+1,C_fix((C_word)SIGKILL));
t31=C_mutate((C_word*)lf[187]+1,C_fix((C_word)SIGINT));
t32=C_mutate((C_word*)lf[188]+1,C_fix((C_word)SIGHUP));
t33=C_mutate((C_word*)lf[189]+1,C_fix((C_word)SIGFPE));
t34=C_mutate((C_word*)lf[190]+1,C_fix((C_word)SIGILL));
t35=C_mutate((C_word*)lf[191]+1,C_fix((C_word)SIGSEGV));
t36=C_mutate((C_word*)lf[192]+1,C_fix((C_word)SIGABRT));
t37=C_mutate((C_word*)lf[193]+1,C_fix((C_word)SIGTRAP));
t38=C_mutate((C_word*)lf[194]+1,C_fix((C_word)SIGQUIT));
t39=C_mutate((C_word*)lf[195]+1,C_fix((C_word)SIGALRM));
t40=C_mutate((C_word*)lf[196]+1,C_fix((C_word)SIGVTALRM));
t41=C_mutate((C_word*)lf[197]+1,C_fix((C_word)SIGPROF));
t42=C_mutate((C_word*)lf[198]+1,C_fix((C_word)SIGIO));
t43=C_mutate((C_word*)lf[199]+1,C_fix((C_word)SIGURG));
t44=C_mutate((C_word*)lf[200]+1,C_fix((C_word)SIGCHLD));
t45=C_mutate((C_word*)lf[201]+1,C_fix((C_word)SIGCONT));
t46=C_mutate((C_word*)lf[202]+1,C_fix((C_word)SIGSTOP));
t47=C_mutate((C_word*)lf[203]+1,C_fix((C_word)SIGTSTP));
t48=C_mutate((C_word*)lf[204]+1,C_fix((C_word)SIGPIPE));
t49=C_mutate((C_word*)lf[205]+1,C_fix((C_word)SIGXCPU));
t50=C_mutate((C_word*)lf[206]+1,C_fix((C_word)SIGXFSZ));
t51=C_mutate((C_word*)lf[207]+1,C_fix((C_word)SIGUSR1));
t52=C_mutate((C_word*)lf[208]+1,C_fix((C_word)SIGUSR2));
t53=C_mutate((C_word*)lf[209]+1,C_fix((C_word)SIGWINCH));
t54=(C_word)C_a_i_list(&a,25,*((C_word*)lf[185]+1),*((C_word*)lf[186]+1),*((C_word*)lf[187]+1),*((C_word*)lf[188]+1),*((C_word*)lf[189]+1),*((C_word*)lf[190]+1),*((C_word*)lf[191]+1),*((C_word*)lf[192]+1),*((C_word*)lf[193]+1),*((C_word*)lf[194]+1),*((C_word*)lf[195]+1),*((C_word*)lf[196]+1),*((C_word*)lf[197]+1),*((C_word*)lf[198]+1),*((C_word*)lf[199]+1),*((C_word*)lf[200]+1),*((C_word*)lf[201]+1),*((C_word*)lf[202]+1),*((C_word*)lf[203]+1),*((C_word*)lf[204]+1),*((C_word*)lf[205]+1),*((C_word*)lf[206]+1),*((C_word*)lf[207]+1),*((C_word*)lf[208]+1),*((C_word*)lf[209]+1));
t55=C_mutate((C_word*)lf[210]+1,t54);
t56=*((C_word*)lf[211]+1);
t57=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2671,a[2]=((C_word*)t0)[2],a[3]=t56,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 963  make-vector */
t58=*((C_word*)lf[626]+1);
((C_proc4)(void*)(*((C_word*)t58+1)))(4,t58,t57,C_fix(256),C_SCHEME_FALSE);}

/* k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2671(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2671,2,t0,t1);}
t2=C_mutate((C_word*)lf[212]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2673,a[2]=t1,a[3]=lf[213],tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[214]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2682,a[2]=t1,a[3]=lf[215],tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[211]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2695,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=lf[216],tmp=(C_word)a,a+=5,tmp));
t5=C_mutate((C_word*)lf[217]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2713,a[2]=lf[221],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[222]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2737,a[2]=lf[224],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[225]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2769,a[2]=lf[226],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[227]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2775,a[2]=lf[229],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[230]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2790,a[2]=lf[232],tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2806,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6228,a[2]=lf[625],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1019 set-signal-handler! */
t12=*((C_word*)lf[214]+1);
((C_proc4)C_retrieve_proc(t12))(4,t12,t10,*((C_word*)lf[187]+1),t11);}

/* a6227 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6228(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6228,3,t0,t1,t2);}
/* posixunix.scm: 1021 ##sys#user-interrupt-hook */
t3=*((C_word*)lf[624]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2806(C_word c,C_word t0,C_word t1){
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
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2806,2,t0,t1);}
t2=C_mutate((C_word*)lf[233]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2808,a[2]=lf[236],tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[237]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2846,a[2]=lf[238],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[239]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2899,a[2]=lf[241],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[242],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2960,a[2]=lf[243],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[244]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2967,a[2]=lf[249],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[250]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3030,a[2]=lf[254],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[255]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3104,a[2]=lf[257],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[258]+1,C_fix((C_word)EPERM));
t10=C_mutate((C_word*)lf[259]+1,C_fix((C_word)ENOENT));
t11=C_mutate((C_word*)lf[260]+1,C_fix((C_word)ESRCH));
t12=C_mutate((C_word*)lf[261]+1,C_fix((C_word)EINTR));
t13=C_mutate((C_word*)lf[262]+1,C_fix((C_word)EIO));
t14=C_mutate((C_word*)lf[263]+1,C_fix((C_word)ENOEXEC));
t15=C_mutate((C_word*)lf[264]+1,C_fix((C_word)EBADF));
t16=C_mutate((C_word*)lf[265]+1,C_fix((C_word)ECHILD));
t17=C_mutate((C_word*)lf[266]+1,C_fix((C_word)ENOMEM));
t18=C_mutate((C_word*)lf[267]+1,C_fix((C_word)EACCES));
t19=C_mutate((C_word*)lf[268]+1,C_fix((C_word)EFAULT));
t20=C_mutate((C_word*)lf[269]+1,C_fix((C_word)EBUSY));
t21=C_mutate((C_word*)lf[270]+1,C_fix((C_word)ENOTDIR));
t22=C_mutate((C_word*)lf[271]+1,C_fix((C_word)EISDIR));
t23=C_mutate((C_word*)lf[272]+1,C_fix((C_word)EINVAL));
t24=C_mutate((C_word*)lf[273]+1,C_fix((C_word)EMFILE));
t25=C_mutate((C_word*)lf[274]+1,C_fix((C_word)ENOSPC));
t26=C_mutate((C_word*)lf[275]+1,C_fix((C_word)ESPIPE));
t27=C_mutate((C_word*)lf[276]+1,C_fix((C_word)EPIPE));
t28=C_mutate((C_word*)lf[277]+1,C_fix((C_word)EAGAIN));
t29=C_mutate((C_word*)lf[278]+1,C_fix((C_word)EROFS));
t30=C_mutate((C_word*)lf[279]+1,C_fix((C_word)EEXIST));
t31=C_mutate((C_word*)lf[280]+1,C_fix((C_word)EWOULDBLOCK));
t32=C_set_block_item(lf[281],0,C_fix(0));
t33=C_set_block_item(lf[282],0,C_fix(0));
t34=C_set_block_item(lf[283],0,C_fix(0));
t35=C_set_block_item(lf[284],0,C_fix(0));
t36=C_set_block_item(lf[285],0,C_fix(0));
t37=C_set_block_item(lf[286],0,C_fix(0));
t38=C_set_block_item(lf[287],0,C_fix(0));
t39=C_set_block_item(lf[288],0,C_fix(0));
t40=C_set_block_item(lf[289],0,C_fix(0));
t41=C_set_block_item(lf[290],0,C_fix(0));
t42=C_set_block_item(lf[291],0,C_fix(0));
t43=C_set_block_item(lf[292],0,C_fix(0));
t44=C_set_block_item(lf[293],0,C_fix(0));
t45=C_set_block_item(lf[294],0,C_fix(0));
t46=C_set_block_item(lf[295],0,C_fix(0));
t47=C_set_block_item(lf[296],0,C_fix(0));
t48=C_mutate((C_word*)lf[297]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3168,a[2]=lf[299],tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[300]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3195,a[2]=lf[302],tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[303]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3225,a[2]=lf[304],tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[305]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3228,a[2]=lf[306],tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[307]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3231,a[2]=lf[309],tmp=(C_word)a,a+=3,tmp));
t53=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3248,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t54=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6225,a[2]=lf[623],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1247 getter-with-setter */
t55=*((C_word*)lf[621]+1);
((C_proc4)C_retrieve_proc(t55))(4,t55,t53,t54,*((C_word*)lf[307]+1));}

/* a6224 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6225,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub414(C_SCHEME_UNDEFINED));}

/* k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3248(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3248,2,t0,t1);}
t2=C_mutate((C_word*)lf[310]+1,t1);
t3=C_mutate((C_word*)lf[311]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3250,a[2]=lf[313],tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3267,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6222,a[2]=lf[622],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1258 getter-with-setter */
t6=*((C_word*)lf[621]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,t5,*((C_word*)lf[311]+1));}

/* a6221 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6222,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub418(C_SCHEME_UNDEFINED));}

/* k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3267(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3267,2,t0,t1);}
t2=C_mutate((C_word*)lf[314]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3269,a[2]=lf[315],tmp=(C_word)a,a+=3,tmp);
t4=C_mutate((C_word*)lf[316]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3293,a[2]=t3,a[3]=lf[317],tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[318]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3299,a[2]=t3,a[3]=lf[319],tmp=(C_word)a,a+=4,tmp));
t6=C_mutate((C_word*)lf[320]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3305,a[2]=t3,a[3]=lf[321],tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[322]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3311,a[2]=lf[324],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[325]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3326,a[2]=lf[327],tmp=(C_word)a,a+=3,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3349,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6204,a[2]=lf[620],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1291 getter-with-setter */
t11=*((C_word*)lf[621]+1);
((C_proc4)C_retrieve_proc(t11))(4,t11,t9,t10,*((C_word*)lf[325]+1));}

/* a6203 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6204(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6204,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[328]);
t4=(C_word)C_getpgid(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6211,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6217,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1296 ##sys#update-errno */
t7=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t5;
f_6211(2,t6,C_SCHEME_UNDEFINED);}}

/* k6215 in a6203 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1297 ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[328],lf[619],((C_word*)t0)[2]);}

/* k6209 in a6203 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3349,2,t0,t1);}
t2=C_mutate((C_word*)lf[328]+1,t1);
t3=C_mutate((C_word*)lf[329]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3351,a[2]=lf[332],tmp=(C_word)a,a+=3,tmp));
t4=*((C_word*)lf[333]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3388,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_fixnum_plus(C_fix((C_word)FILENAME_MAX),C_fix(1));
/* posixunix.scm: 1318 make-string */
t7=*((C_word*)lf[63]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3388(C_word c,C_word t0,C_word t1){
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
C_word ab[243],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3388,2,t0,t1);}
t2=C_mutate((C_word*)lf[334]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3389,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=lf[336],tmp=(C_word)a,a+=5,tmp));
t3=C_mutate((C_word*)lf[337]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3439,a[2]=lf[340],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[341]+1,C_fix((C_word)STDIN_FILENO));
t5=C_mutate((C_word*)lf[342]+1,C_fix((C_word)STDOUT_FILENO));
t6=C_mutate((C_word*)lf[343]+1,C_fix((C_word)STDERR_FILENO));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3464,a[2]=lf[350],tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3501,a[2]=lf[353],tmp=(C_word)a,a+=3,tmp);
t9=C_mutate((C_word*)lf[354]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3516,a[2]=t7,a[3]=t8,a[4]=lf[355],tmp=(C_word)a,a+=5,tmp));
t10=C_mutate((C_word*)lf[356]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3530,a[2]=t7,a[3]=t8,a[4]=lf[357],tmp=(C_word)a,a+=5,tmp));
t11=C_mutate((C_word*)lf[358]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3544,a[2]=lf[364],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[365]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3589,a[2]=lf[367],tmp=(C_word)a,a+=3,tmp));
t13=*((C_word*)lf[368]+1);
t14=*((C_word*)lf[369]+1);
t15=C_mutate((C_word*)lf[370]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3616,a[2]=t13,a[3]=t14,a[4]=lf[392],tmp=(C_word)a,a+=5,tmp));
t16=*((C_word*)lf[393]+1);
t17=*((C_word*)lf[369]+1);
t18=C_mutate((C_word*)lf[394]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3888,a[2]=t16,a[3]=t17,a[4]=lf[408],tmp=(C_word)a,a+=5,tmp));
t19=C_mutate((C_word*)lf[409]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4127,a[2]=lf[412],tmp=(C_word)a,a+=3,tmp));
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4166,a[2]=lf[414],tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4240,a[2]=lf[415],tmp=(C_word)a,a+=3,tmp);
t22=C_mutate((C_word*)lf[416]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4258,a[2]=t20,a[3]=t21,a[4]=lf[418],tmp=(C_word)a,a+=5,tmp));
t23=C_mutate((C_word*)lf[419]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4273,a[2]=t20,a[3]=t21,a[4]=lf[421],tmp=(C_word)a,a+=5,tmp));
t24=C_mutate((C_word*)lf[422]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4288,a[2]=t20,a[3]=t21,a[4]=lf[424],tmp=(C_word)a,a+=5,tmp));
t25=C_mutate((C_word*)lf[425]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4310,a[2]=lf[427],tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[428]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4338,a[2]=lf[430],tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[431]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4381,a[2]=lf[433],tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[434]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4407,a[2]=lf[435],tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[436]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4424,a[2]=lf[437],tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[438]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4444,a[2]=lf[441],tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[442]+1,C_fix((C_word)PROT_READ));
t32=C_mutate((C_word*)lf[443]+1,C_fix((C_word)PROT_WRITE));
t33=C_mutate((C_word*)lf[444]+1,C_fix((C_word)PROT_EXEC));
t34=C_mutate((C_word*)lf[445]+1,C_fix((C_word)PROT_NONE));
t35=C_mutate((C_word*)lf[446]+1,C_fix((C_word)MAP_FIXED));
t36=C_mutate((C_word*)lf[447]+1,C_fix((C_word)MAP_SHARED));
t37=C_mutate((C_word*)lf[448]+1,C_fix((C_word)MAP_PRIVATE));
t38=C_mutate((C_word*)lf[449]+1,C_fix((C_word)MAP_ANON));
t39=C_mutate((C_word*)lf[450]+1,C_fix((C_word)MAP_FILE));
t40=C_mutate((C_word*)lf[451]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4547,a[2]=lf[457],tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[458]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4609,a[2]=lf[460],tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[461]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4644,a[2]=lf[462],tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[463]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4653,a[2]=lf[464],tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[465]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4659,a[2]=lf[467],tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[468]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4668,a[2]=lf[469],tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[470]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4687,a[2]=lf[472],tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[473]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4704,a[2]=lf[476],tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[477]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4732,a[2]=lf[481],tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[482]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4760,a[2]=lf[485],tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[486]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4788,a[2]=lf[487],tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[488]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4800,a[2]=lf[490],tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[491]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4819,a[2]=lf[492],tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[493]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4826,a[2]=lf[499],tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[500]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4885,a[2]=lf[501],tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[502]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4914,a[2]=lf[504],tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[505]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4944,a[2]=lf[508],tmp=(C_word)a,a+=3,tmp));
t57=*((C_word*)lf[509]+1);
t58=*((C_word*)lf[132]+1);
t59=*((C_word*)lf[510]+1);
t60=*((C_word*)lf[511]+1);
t61=C_mutate((C_word*)lf[512]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4956,a[2]=t57,a[3]=t58,a[4]=t59,a[5]=t60,a[6]=lf[520],tmp=(C_word)a,a+=7,tmp));
t62=C_mutate((C_word*)lf[521]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5062,a[2]=lf[524],tmp=(C_word)a,a+=3,tmp));
t63=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5104,a[2]=lf[525],tmp=(C_word)a,a+=3,tmp);
t64=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5123,a[2]=lf[526],tmp=(C_word)a,a+=3,tmp);
t65=*((C_word*)lf[527]+1);
t66=C_mutate((C_word*)lf[528]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5142,a[2]=t65,a[3]=t64,a[4]=t63,a[5]=lf[535],tmp=(C_word)a,a+=6,tmp));
t67=C_mutate((C_word*)lf[536]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5321,a[2]=lf[537],tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[538]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5338,a[2]=lf[542],tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[543]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5416,a[2]=lf[544],tmp=(C_word)a,a+=3,tmp));
t70=C_mutate((C_word*)lf[545]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5419,a[2]=lf[546],tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[547]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5422,a[2]=lf[548],tmp=(C_word)a,a+=3,tmp));
t72=C_mutate((C_word*)lf[549]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5429,a[2]=lf[551],tmp=(C_word)a,a+=3,tmp));
t73=C_mutate((C_word*)lf[552]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5456,a[2]=lf[556],tmp=(C_word)a,a+=3,tmp));
t74=C_mutate((C_word*)lf[557]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5465,a[2]=lf[559],tmp=(C_word)a,a+=3,tmp));
t75=*((C_word*)lf[521]+1);
t76=*((C_word*)lf[528]+1);
t77=*((C_word*)lf[554]+1);
t78=C_mutate((C_word*)lf[560]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5471,a[2]=t75,a[3]=t76,a[4]=lf[561],tmp=(C_word)a,a+=5,tmp));
t79=*((C_word*)lf[182]+1);
t80=*((C_word*)lf[538]+1);
t81=*((C_word*)lf[521]+1);
t82=*((C_word*)lf[528]+1);
t83=*((C_word*)lf[365]+1);
t84=*((C_word*)lf[60]+1);
t85=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5527,a[2]=t80,a[3]=lf[566],tmp=(C_word)a,a+=4,tmp);
t86=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5564,a[2]=t79,a[3]=lf[569],tmp=(C_word)a,a+=4,tmp);
t87=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5584,a[2]=t84,a[3]=lf[570],tmp=(C_word)a,a+=4,tmp);
t88=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5601,a[2]=t84,a[3]=lf[571],tmp=(C_word)a,a+=4,tmp);
t89=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5618,a[2]=t86,a[3]=t81,a[4]=t88,a[5]=t82,a[6]=lf[574],tmp=(C_word)a,a+=7,tmp);
t90=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5679,a[2]=t87,a[3]=lf[575],tmp=(C_word)a,a+=4,tmp);
t91=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5690,a[2]=t87,a[3]=lf[576],tmp=(C_word)a,a+=4,tmp);
t92=C_mutate((C_word*)lf[577]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5701,a[2]=t91,a[3]=t85,a[4]=t90,a[5]=t89,a[6]=lf[580],tmp=(C_word)a,a+=7,tmp));
t93=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5757,a[2]=lf[585],tmp=(C_word)a,a+=3,tmp);
t94=C_mutate((C_word*)lf[586]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5822,a[2]=t93,a[3]=lf[590],tmp=(C_word)a,a+=4,tmp));
t95=C_mutate((C_word*)lf[591]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5882,a[2]=t93,a[3]=lf[595],tmp=(C_word)a,a+=4,tmp));
t96=*((C_word*)lf[512]+1);
t97=*((C_word*)lf[514]+1);
t98=*((C_word*)lf[510]+1);
t99=*((C_word*)lf[141]+1);
t100=C_mutate((C_word*)lf[596]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5942,a[2]=t99,a[3]=t98,a[4]=t96,a[5]=t97,a[6]=lf[615],tmp=(C_word)a,a+=7,tmp));
t101=C_mutate((C_word*)lf[616]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6181,a[2]=lf[618],tmp=(C_word)a,a+=3,tmp));
t102=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t102+1)))(2,t102,C_SCHEME_UNDEFINED);}

/* set-root-directory! in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6181(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6181,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[616]);
t4=t2;
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6173,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=(C_word)C_i_foreign_string_argumentp(t4);
/* ##sys#make-c-string */
t7=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
t6=t5;
f_6173(2,t6,C_SCHEME_FALSE);}}

/* k6171 in set-root-directory! in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)stub1211(C_SCHEME_UNDEFINED,t1);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 2109 posix-error */
t3=lf[3];
f_1425(6,t3,((C_word*)t0)[3],lf[51],lf[616],lf[617],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+21)){
C_save_and_reclaim((void*)tr4r,(void*)f_5942r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5942r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5942r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5944,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t2,a[8]=lf[610],tmp=(C_word)a,a+=9,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6089,a[2]=t5,a[3]=lf[611],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6094,a[2]=t6,a[3]=lf[612],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6099,a[2]=t7,a[3]=lf[614],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-action11661200 */
t9=t8;
f_6099(t9,t1);}
else{
t9=(C_word)C_i_car(t4);
t10=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-id11671198 */
t11=t7;
f_6094(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* def-limit11681195 */
t13=t6;
f_6089(t13,t1,t9,t11);}
else{
t13=(C_word)C_i_car(t12);
t14=(C_word)C_i_cdr(t12);
if(C_truep((C_word)C_i_nullp(t14))){
/* body11641170 */
t15=t5;
f_5944(t15,t1,t9,t11,t13);}
else{
/* ##sys#error */
t15=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}}}}

/* def-action1166 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_6099(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6099,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6105,a[2]=lf[613],tmp=(C_word)a,a+=3,tmp);
/* def-id11671198 */
t3=((C_word*)t0)[2];
f_6094(t3,t1,t2);}

/* a6104 in def-action1166 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6105(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6105,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t2,t3));}

/* def-id1167 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_6094(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6094,NULL,3,t0,t1,t2);}
/* def-limit11681195 */
t3=((C_word*)t0)[2];
f_6089(t3,t1,t2,C_SCHEME_END_OF_LIST);}

/* def-limit1168 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_6089(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6089,NULL,4,t0,t1,t2,t3);}
/* body11641170 */
t4=((C_word*)t0)[2];
f_5944(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5944(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_5944,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(((C_word*)t0)[7],lf[596]);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5951,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[4],a[9]=t7,a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
t9=t4;
if(C_truep(t9)){
t10=(C_word)C_fixnump(t4);
t11=t8;
f_5951(t11,(C_truep(t10)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6084,a[2]=t4,a[3]=t7,a[4]=lf[608],tmp=(C_word)a,a+=5,tmp):t4));}
else{
t10=t8;
f_5951(t10,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6076,a[2]=lf[609],tmp=(C_word)a,a+=3,tmp));}}

/* f_6076 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6076(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6076,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_6084 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6084(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6084,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]));}

/* k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5951(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5951,NULL,2,t0,t1);}
t2=(C_word)C_i_stringp(((C_word*)t0)[11]);
t3=(C_truep(t2)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6068,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[10],a[4]=lf[597],tmp=(C_word)a,a+=5,tmp):((C_word*)t0)[11]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5961,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6064,a[2]=t4,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2081 make-pathname */
t6=((C_word*)t0)[7];
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[2],lf[607]);}

/* k6062 in k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6064(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2081 glob */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k5959 in k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5961,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5963,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t3,a[10]=lf[606],tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_5963(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* loop in k5959 in k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5963(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5963,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5982,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=t5,a[11]=t1,a[12]=((C_word*)t0)[9],tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm: 2087 directory? */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t4);}}

/* k5980 in loop in k5959 in k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5982,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6044,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm: 2088 pathname-file */
t3=*((C_word*)lf[605]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6050,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2094 pproc */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[5]);}}

/* k6048 in k5980 in loop in k5959 in k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6050,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6057,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2094 action */
t3=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* posixunix.scm: 2095 loop */
t2=((C_word*)((C_word*)t0)[7])[1];
f_5963(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k6055 in k6048 in k5980 in loop in k5959 in k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2094 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5963(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6042 in k5980 in loop in k5959 in k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6044,2,t0,t1);}
if(C_truep((C_truep((C_word)C_i_equalp(t1,lf[598]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t1,lf[599]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posixunix.scm: 2088 loop */
t2=((C_word*)((C_word*)t0)[10])[1];
f_5963(t2,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5997,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* posixunix.scm: 2089 lproc */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}}

/* k5995 in k6042 in k5980 in loop in k5959 in k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5997(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5997,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[9])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6007,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6009,a[2]=t4,a[3]=((C_word*)t0)[9],a[4]=t6,a[5]=lf[600],tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6017,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],a[7]=lf[602],tmp=(C_word)a,a+=8,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6031,a[2]=t6,a[3]=((C_word*)t0)[9],a[4]=t4,a[5]=lf[603],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 2091 ##sys#dynamic-wind */
t11=*((C_word*)lf[604]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t7,t8,t9,t10);}
else{
/* posixunix.scm: 2093 loop */
t2=((C_word*)((C_word*)t0)[8])[1];
f_5963(t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}}

/* a6030 in k5995 in k6042 in k5980 in loop in k5959 in k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6031(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6031,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[388]+1));}

/* a6016 in k5995 in k6042 in k5980 in loop in k5959 in k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6025,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6029,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2092 make-pathname */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],lf[601]);}

/* k6027 in a6016 in k5995 in k6042 in k5980 in loop in k5959 in k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2092 glob */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k6023 in a6016 in k5995 in k6042 in k5980 in loop in k5959 in k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2092 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5963(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a6008 in k5995 in k6042 in k5980 in loop in k5959 in k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6009,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[388]+1));}

/* k6005 in k5995 in k6042 in k5980 in loop in k5959 in k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2090 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5963(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_6068 in k5949 in body1164 in find-files in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_6068(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6068,3,t0,t1,t2);}
/* posixunix.scm: 2079 string-match */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* process* in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5882(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_5882r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5882r(t0,t1,t2,t3);}}

static void C_ccall f_5882r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5884,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[592],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5889,a[2]=t4,a[3]=lf[593],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5894,a[2]=t5,a[3]=lf[594],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-args11281136 */
t7=t6;
f_5894(t7,t1);}
else{
t7=(C_word)C_i_car(t3);
t8=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t8))){
/* def-env11291134 */
t9=t5;
f_5889(t9,t1,t7);}
else{
t9=(C_word)C_i_car(t8);
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
/* body11261131 */
t11=t4;
f_5884(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}}}

/* def-args1128 in process* in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5894(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5894,NULL,2,t0,t1);}
/* def-env11291134 */
t2=((C_word*)t0)[2];
f_5889(t2,t1,C_SCHEME_FALSE);}

/* def-env1129 in process* in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5889(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5889,NULL,3,t0,t1,t2);}
/* body11261131 */
t3=((C_word*)t0)[2];
f_5884(t3,t1,t2,C_SCHEME_FALSE);}

/* body1126 in process* in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5884(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5884,NULL,4,t0,t1,t2,t3);}
/* posixunix.scm: 2057 %process */
f_5757(t1,lf[591],C_SCHEME_TRUE,((C_word*)t0)[2],t2,t3);}

/* process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5822(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr3r,(void*)f_5822r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5822r(t0,t1,t2,t3);}}

static void C_ccall f_5822r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5824,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[587],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5829,a[2]=t4,a[3]=lf[588],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5834,a[2]=t5,a[3]=lf[589],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-args11081116 */
t7=t6;
f_5834(t7,t1);}
else{
t7=(C_word)C_i_car(t3);
t8=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t8))){
/* def-env11091114 */
t9=t5;
f_5829(t9,t1,t7);}
else{
t9=(C_word)C_i_car(t8);
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
/* body11061111 */
t11=t4;
f_5824(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}}}

/* def-args1108 in process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5834(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5834,NULL,2,t0,t1);}
/* def-env11091114 */
t2=((C_word*)t0)[2];
f_5829(t2,t1,C_SCHEME_FALSE);}

/* def-env1109 in process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5829(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5829,NULL,3,t0,t1,t2);}
/* body11061111 */
t3=((C_word*)t0)[2];
f_5824(t3,t1,t2,C_SCHEME_FALSE);}

/* body1106 in process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5824(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5824,NULL,4,t0,t1,t2,t3);}
/* posixunix.scm: 2054 %process */
f_5757(t1,lf[586],C_SCHEME_FALSE,((C_word*)t0)[2],t2,t3);}

/* %process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5757(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_save_and_reclaim((void*)trf_5757,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t9=(C_word)C_i_check_string_2(((C_word*)t7)[1],t2);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5764,a[2]=t1,a[3]=t3,a[4]=t6,a[5]=t8,a[6]=t7,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t8)[1])){
t11=(C_word)C_i_check_list_2(((C_word*)t8)[1],t2);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5808,a[2]=t2,a[3]=lf[584],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t13=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t10,t12,((C_word*)t8)[1]);}
else{
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5816,a[2]=t10,a[3]=t7,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2042 ##sys#shell-command-arguments */
t12=*((C_word*)lf[557]+1);
((C_proc3)C_retrieve_proc(t12))(3,t12,t11,((C_word*)t7)[1]);}}

/* k5814 in %process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5816,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2043 ##sys#shell-command */
t4=*((C_word*)lf[552]+1);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k5818 in k5814 in %process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_5764(2,t3,t2);}

/* a5807 in %process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5808(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5808,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_check_string_2(t2,((C_word*)t0)[2]));}

/* k5762 in %process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5764,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5767,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(C_word)C_i_check_list_2(((C_word*)t0)[4],((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5796,a[2]=((C_word*)t0)[7],a[3]=lf[583],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t5=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t4,((C_word*)t0)[4]);}
else{
t3=t2;
f_5767(2,t3,C_SCHEME_UNDEFINED);}}

/* a5795 in k5762 in %process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5796(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5796,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_check_string_2(t2,((C_word*)t0)[2]));}

/* k5765 in k5762 in %process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5772,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=lf[581],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5778,a[2]=((C_word*)t0)[3],a[3]=lf[582],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2047 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a5777 in k5765 in k5762 in %process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5778(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5778,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(((C_word*)t0)[2])){
/* posixunix.scm: 2050 values */
C_values(6,0,t1,t2,t3,t4,t5);}
else{
/* posixunix.scm: 2051 values */
C_values(5,0,t1,t2,t3,t4);}}

/* a5771 in k5765 in k5762 in %process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5772,2,t0,t1);}
/* posixunix.scm: 2048 ##sys#process */
t2=*((C_word*)lf[577]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,t1,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* ##sys#process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5701(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[21],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_5701,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5707,a[2]=t8,a[3]=t7,a[4]=t6,a[5]=t5,a[6]=t4,a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=lf[578],tmp=(C_word)a,a+=10,tmp);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=t8,a[8]=t6,a[9]=t7,a[10]=lf[579],tmp=(C_word)a,a+=11,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t9,t10);}

/* a5712 in ##sys#process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5713(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[26],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5713,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_not(((C_word*)t0)[9]);
t7=(C_word)C_i_not(((C_word*)t0)[8]);
t8=(C_word)C_i_not(((C_word*)t0)[7]);
t9=(C_word)C_a_i_vector(&a,3,t6,t7,t8);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5724,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t9,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=t4,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=t5,a[13]=t1,tmp=(C_word)a,a+=14,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5744,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t10,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2023 make-on-close */
t12=((C_word*)t0)[3];
f_5527(t12,t11,((C_word*)t0)[5],t5,t9,C_fix(0),C_fix(1),C_fix(2));}

/* k5742 in a5712 in ##sys#process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2022 input-port */
t2=((C_word*)t0)[7];
f_5679(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5722 in a5712 in ##sys#process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5724,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5728,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=t1,a[11]=((C_word*)t0)[13],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2025 make-on-close */
t4=((C_word*)t0)[6];
f_5527(t4,t3,((C_word*)t0)[10],((C_word*)t0)[12],((C_word*)t0)[5],C_fix(1),C_fix(0),C_fix(2));}

/* k5738 in k5722 in a5712 in ##sys#process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2024 output-port */
t2=((C_word*)t0)[7];
f_5690(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5726 in k5722 in a5712 in ##sys#process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5732,a[2]=((C_word*)t0)[9],a[3]=t1,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5736,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2028 make-on-close */
t4=((C_word*)t0)[3];
f_5527(t4,t3,((C_word*)t0)[7],((C_word*)t0)[9],((C_word*)t0)[2],C_fix(2),C_fix(0),C_fix(1));}

/* k5734 in k5726 in k5722 in a5712 in ##sys#process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2027 input-port */
t2=((C_word*)t0)[7];
f_5679(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5730 in k5726 in k5722 in a5712 in ##sys#process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2021 values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a5706 in ##sys#process in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5707,2,t0,t1);}
/* posixunix.scm: 2016 child */
t2=((C_word*)t0)[8];
f_5618(t2,t1,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5690(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5690,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5694,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 2012 connect-parent */
t8=((C_word*)t0)[2];
f_5584(t8,t7,t4,t5);}

/* k5692 in output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2013 ##sys#custom-output-port */
t2=*((C_word*)lf[394]+1);
((C_proc7)C_retrieve_proc(t2))(7,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,C_fix(0),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5679(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5679,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5683,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 2008 connect-parent */
t8=((C_word*)t0)[2];
f_5584(t8,t7,t4,t5);}

/* k5681 in input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2009 ##sys#custom-input-port */
t2=*((C_word*)lf[370]+1);
((C_proc7)C_retrieve_proc(t2))(7,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,C_fix(256),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* child in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5618(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5618,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5622,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t5,a[6]=t7,a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=t3,a[10]=t2,a[11]=((C_word*)t0)[5],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm: 1992 needed-pipe */
t9=((C_word*)t0)[2];
f_5564(t9,t8,t6);}

/* k5620 in child in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5625,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm: 1993 needed-pipe */
t3=((C_word*)t0)[2];
f_5564(t3,t2,((C_word*)t0)[5]);}

/* k5623 in k5620 in child in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5628,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t1,tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm: 1994 needed-pipe */
t3=((C_word*)t0)[2];
f_5564(t3,t2,((C_word*)t0)[6]);}

/* k5626 in k5623 in k5620 in child in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5628,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5629,a[2]=lf[572],tmp=(C_word)a,a+=3,tmp);
t3=f_5629(C_a_i(&a,3),((C_word*)t0)[13]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5655,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_5657,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,a[9]=t2,a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],a[14]=lf[573],tmp=(C_word)a,a+=15,tmp);
/* posixunix.scm: 2000 process-fork */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}

/* a5656 in k5626 in k5623 in k5620 in child in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5657,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5661,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=t1,a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm: 2002 connect-child */
t3=((C_word*)t0)[7];
f_5601(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],*((C_word*)lf[341]+1));}

/* k5659 in a5656 in k5626 in k5623 in k5620 in child in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5661,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5664,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
t3=f_5629(C_a_i(&a,3),((C_word*)t0)[3]);
/* posixunix.scm: 2003 connect-child */
t4=((C_word*)t0)[5];
f_5601(t4,t2,t3,((C_word*)t0)[2],*((C_word*)lf[342]+1));}

/* k5662 in k5659 in a5656 in k5626 in k5623 in k5620 in child in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5664,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5667,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t3=f_5629(C_a_i(&a,3),((C_word*)t0)[4]);
/* posixunix.scm: 2004 connect-child */
t4=((C_word*)t0)[3];
f_5601(t4,t2,t3,((C_word*)t0)[2],*((C_word*)lf[343]+1));}

/* k5665 in k5662 in k5659 in a5656 in k5626 in k5623 in k5620 in child in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2005 process-execute */
t2=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5653 in k5626 in k5623 in k5620 in child in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1998 values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* swap-ends in k5626 in k5623 in k5620 in child in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall f_5629(C_word *a,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(t1);
t3=(C_word)C_i_car(t1);
return((C_word)C_a_i_cons(&a,2,t2,t3));}
else{
return(C_SCHEME_FALSE);}}

/* connect-child in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5601(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5601,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5614,a[2]=t5,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1987 file-close */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* k5612 in connect-child in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5614,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=(C_word)C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
t5=t2;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5523,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1960 duplicate-fileno */
t6=*((C_word*)lf[365]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[2],t3);}}

/* k5521 in k5612 in connect-child in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1961 file-close */
t2=*((C_word*)lf[60]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* connect-parent in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5584(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5584,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5597,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1980 file-close */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k5595 in connect-parent in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5597,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5600,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1981 ##sys#file-nonblocking! */
t3=*((C_word*)lf[10]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5598 in k5595 in connect-parent in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* needed-pipe in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5564(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5564,NULL,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5573,a[2]=((C_word*)t0)[2],a[3]=lf[567],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5579,a[2]=lf[568],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1975 ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a5578 in needed-pipe in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5579(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5579,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t2,t3));}

/* a5572 in needed-pipe in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5573,2,t0,t1);}
/* posixunix.scm: 1975 create-pipe */
t2=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t2))(2,t2,t1);}

/* make-on-close in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5527(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5527,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5529,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t7,a[6]=t6,a[7]=t5,a[8]=t4,a[9]=lf[565],tmp=(C_word)a,a+=10,tmp));}

/* f_5529 in make-on-close in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5529,2,t0,t1);}
t2=(C_word)C_i_vector_set(((C_word*)t0)[8],((C_word*)t0)[7],C_SCHEME_TRUE);
t3=(C_word)C_i_vector_ref(((C_word*)t0)[8],((C_word*)t0)[6]);
t4=(C_truep(t3)?(C_word)C_i_vector_ref(((C_word*)t0)[8],((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5544,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[562],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5550,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=lf[564],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1968 ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* a5549 */
static void C_ccall f_5550(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5550,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1970 ##sys#signal-hook */
t5=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t1,lf[218],((C_word*)t0)[3],lf[563],((C_word*)t0)[2],t4);}}

/* a5543 */
static void C_ccall f_5544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5544,2,t0,t1);}
/* posixunix.scm: 1968 process-wait */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* process-run in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5471(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3rv,(void*)f_5471r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_5471r(t0,t1,t2,t3);}}

static void C_ccall f_5471r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5478,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1924 process-fork */
t7=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t7))(2,t7,t6);}

/* k5476 in process-run in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5478(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5478,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(t2)){
if(C_truep(((C_word*)t0)[5])){
/* posixunix.scm: 1926 process-execute */
t3=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1928 ##sys#shell-command */
t4=*((C_word*)lf[552]+1);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k5495 in k5476 in process-run in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5497,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5501,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1928 ##sys#shell-command-arguments */
t3=*((C_word*)lf[557]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5499 in k5495 in k5476 in process-run in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1928 process-execute */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##sys#shell-command-arguments in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5465(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5465,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[558],t2));}

/* ##sys#shell-command in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5460,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1913 getenv */
t3=*((C_word*)lf[554]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[555]);}

/* k5458 in ##sys#shell-command in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:lf[553]));}

/* process-signal in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5429(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3rv,(void*)f_5429r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_5429r(t0,t1,t2,t3);}}

static void C_ccall f_5429r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_fix((C_word)SIGTERM));
t6=(C_word)C_i_check_exact_2(t2,lf[549]);
t7=(C_word)C_i_check_exact_2(t5,lf[549]);
t8=(C_word)C_kill(t2,t5);
t9=(C_word)C_eqp(t8,C_fix(-1));
if(C_truep(t9)){
/* posixunix.scm: 1908 posix-error */
t10=lf[3];
f_1425(7,t10,t1,lf[218],lf[549],lf[550],t2,t5);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}}

/* sleep in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5422(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5422,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub972(C_SCHEME_UNDEFINED,t3));}

/* parent-process-id in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5419,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub969(C_SCHEME_UNDEFINED));}

/* current-process-id in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5416,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub967(C_SCHEME_UNDEFINED));}

/* process-wait in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5338(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_5338r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_5338r(t0,t1,t2);}}

static void C_ccall f_5338r(C_word t0,C_word t1,C_word t2){
C_word tmp;
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
C_word *a=C_alloc(9);
t3=(C_word)C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:(C_word)C_i_car(t2));
t5=(C_word)C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t2));
t7=(C_word)C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_FALSE:(C_word)C_i_car(t6));
t9=(C_word)C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t6));
if(C_truep((C_word)C_i_nullp(t10))){
t11=(C_truep(t4)?t4:C_fix(-1));
t12=(C_word)C_i_check_exact_2(t11,lf[538]);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5368,a[2]=t8,a[3]=t11,a[4]=lf[539],tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5374,a[2]=t11,a[3]=lf[541],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1892 ##sys#call-with-values */
C_call_with_values(4,0,t1,t13,t14);}
else{
/* ##sys#error */
t11=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}

/* a5373 in process-wait in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5374(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5374,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
/* posixunix.scm: 1894 posix-error */
t6=lf[3];
f_1425(6,t6,t1,lf[218],lf[538],lf[540],((C_word*)t0)[2]);}
else{
/* posixunix.scm: 1895 values */
C_values(5,0,t1,t2,t3,t4);}}

/* a5367 in process-wait in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5368,2,t0,t1);}
/* posixunix.scm: 1892 ##sys#process-wait */
t2=*((C_word*)lf[536]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#process-wait in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5321(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5321,4,t0,t1,t2,t3);}
t4=(C_truep(t3)?C_fix((C_word)WNOHANG):C_fix(0));
t5=(C_word)C_waitpid(t2,t4);
t6=(C_word)C_WIFEXITED(C_fix((C_word)C_wait_status));
t7=(C_truep(t6)?(C_word)C_WEXITSTATUS(C_fix((C_word)C_wait_status)):(C_truep((C_word)C_WIFSIGNALED(C_fix((C_word)C_wait_status)))?(C_word)C_WTERMSIG(C_fix((C_word)C_wait_status)):(C_word)C_WSTOPSIG(C_fix((C_word)C_wait_status))));
/* posixunix.scm: 1879 values */
C_values(5,0,t1,t5,t6,t7);}

/* process-execute in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5142(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr3r,(void*)f_5142r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5142r(t0,t1,t2,t3);}}

static void C_ccall f_5142r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(15);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5144,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=lf[532],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5268,a[2]=t4,a[3]=lf[533],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5273,a[2]=t5,a[3]=lf[534],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-arglist908942 */
t7=t6;
f_5273(t7,t1);}
else{
t7=(C_word)C_i_car(t3);
t8=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t8))){
/* def-envlist909940 */
t9=t5;
f_5268(t9,t1,t7);}
else{
t9=(C_word)C_i_car(t8);
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
/* body906911 */
t11=t4;
f_5144(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}}}

/* def-arglist908 in process-execute in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5273(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5273,NULL,2,t0,t1);}
/* def-envlist909940 */
t2=((C_word*)t0)[2];
f_5268(t2,t1,C_SCHEME_END_OF_LIST);}

/* def-envlist909 in process-execute in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5268(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5268,NULL,3,t0,t1,t2);}
/* body906911 */
t3=((C_word*)t0)[2];
f_5144(t3,t1,t2,C_SCHEME_FALSE);}

/* body906 in process-execute in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5144(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5144,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(((C_word*)t0)[5],lf[528]);
t5=(C_word)C_i_check_list_2(t2,lf[528]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5154,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 1848 pathname-strip-directory */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[5]);}

/* k5152 in body906 in process-execute in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5154,2,t0,t1);}
t2=(C_word)C_block_size(t1);
t3=f_5104(C_fix(0),t1,t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5162,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=lf[531],tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_5162(t7,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(1));}

/* do915 in k5152 in body906 in process-execute in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5162(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(9);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5162,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=f_5104(t3,C_SCHEME_FALSE,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5175,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5205,a[2]=((C_word*)t0)[3],a[3]=lf[530],tmp=(C_word)a,a+=4,tmp);
t7=t5;
f_5175(t7,f_5205(t6,((C_word*)t0)[5],C_fix(0)));}
else{
t6=t5;
f_5175(t6,C_SCHEME_UNDEFINED);}}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_check_string_2(t4,lf[528]);
t6=(C_word)C_block_size(t4);
t7=f_5104(t3,t4,t6);
t8=(C_word)C_i_cdr(t2);
t9=(C_word)C_fixnum_plus(t3,C_fix(1));
t14=t1;
t15=t8;
t16=t9;
t1=t14;
t2=t15;
t3=t16;
goto loop;}}

/* do919 in do915 in k5152 in body906 in process-execute in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall f_5205(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
loop:
C_stack_check;
if(C_truep((C_word)C_i_nullp(t1))){
return(f_5123(t2,C_SCHEME_FALSE,C_fix(0)));}
else{
t3=(C_word)C_i_car(t1);
t4=(C_word)C_i_check_string_2(t3,lf[528]);
t5=(C_word)C_block_size(t3);
t6=f_5123(t2,t3,t5);
t7=(C_word)C_i_cdr(t1);
t8=(C_word)C_fixnum_plus(t2,C_fix(1));
t10=t7;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* k5173 in do915 in k5152 in body906 in process-execute in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_5175(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5175,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5178,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5200,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1861 ##sys#expand-home-path */
t4=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k5198 in k5173 in do915 in k5152 in body906 in process-execute in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1861 ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5176 in k5173 in do915 in k5152 in body906 in process-execute in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_truep(((C_word*)t0)[4])?(C_word)C_execve(t1):(C_word)C_execvp(t1));
t3=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=(C_word)stub887(C_SCHEME_UNDEFINED);
t5=(C_word)stub899(C_SCHEME_UNDEFINED);
/* posixunix.scm: 1868 posix-error */
t6=lf[3];
f_1425(6,t6,((C_word*)t0)[3],lf[218],lf[528],lf[529],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* setenv in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall f_5123(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t4=(C_word)C_i_foreign_fixnum_argumentp(t1);
t5=(C_truep(t2)?(C_word)C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=(C_word)C_i_foreign_fixnum_argumentp(t3);
return((C_word)stub892(C_SCHEME_UNDEFINED,t4,t5,t6));}

/* setarg in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall f_5104(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t4=(C_word)C_i_foreign_fixnum_argumentp(t1);
t5=(C_truep(t2)?(C_word)C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=(C_word)C_i_foreign_fixnum_argumentp(t3);
return((C_word)stub880(C_SCHEME_UNDEFINED,t4,t5,t6));}

/* process-fork in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5062(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2rv,(void*)f_5062r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_5062r(t0,t1,t2);}}

static void C_ccall f_5062r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(3);
t3=(C_word)stub863(C_SCHEME_UNDEFINED);
t4=(C_word)C_eqp(C_fix(-1),t3);
if(C_truep(t4)){
/* posixunix.scm: 1833 posix-error */
t5=lf[3];
f_1425(5,t5,t1,lf[218],lf[521],lf[522]);}
else{
t5=(C_word)C_notvemptyp(t2);
t6=(C_truep(t5)?(C_word)C_eqp(t3,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5084,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_i_vector_ref(t2,C_fix(0));
t9=t8;
((C_proc2)C_retrieve_proc(t9))(2,t9,t7);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t3);}}}

/* k5082 in process-fork in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5084,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5088,a[2]=lf[523],tmp=(C_word)a,a+=3,tmp);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* f_5088 in k5082 in process-fork in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5088(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5088,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub868(C_SCHEME_UNDEFINED,t3));}

/* glob in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4956(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr2r,(void*)f_4956r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4956r(t0,t1,t2);}}

static void C_ccall f_4956r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(10);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4962,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=lf[519],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_4962(t6,t1,t2);}

/* conc in glob in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_4962(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4962,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4977,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=lf[513],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4983,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=lf[518],tmp=(C_word)a,a+=8,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}}

/* a4982 in conc in glob in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4983(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4983,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4987,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5054,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(C_truep(t3)?t3:lf[517]);
/* posixunix.scm: 1817 make-pathname */
t8=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t8))(5,t8,t6,C_SCHEME_FALSE,t7,t4);}

/* k5052 in a4982 in conc in glob in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1817 glob->regexp */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4985 in a4982 in conc in glob in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4994,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[4]:lf[516]);
/* posixunix.scm: 1818 directory */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,C_SCHEME_TRUE);}

/* k4992 in k4985 in a4982 in conc in glob in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4994,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4996,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=lf[515],tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_4996(t5,((C_word*)t0)[2],t1);}

/* loop in k4992 in k4985 in a4982 in conc in glob in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_4996(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4996,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* posixunix.scm: 1819 conc */
t4=((C_word*)((C_word*)t0)[6])[1];
f_4962(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5013,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_car(t2);
/* posixunix.scm: 1820 string-match */
t5=*((C_word*)lf[514]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[2],t4);}}

/* k5011 in loop in k4992 in k4985 in a4982 in conc in glob in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5013,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5023,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_car(t1);
/* posixunix.scm: 1821 make-pathname */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[2],t3);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* posixunix.scm: 1822 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4996(t3,((C_word*)t0)[6],t2);}}

/* k5021 in k5011 in loop in k4992 in k4985 in a4982 in conc in glob in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5023,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5027,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* posixunix.scm: 1821 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4996(t4,t2,t3);}

/* k5025 in k5021 in k5011 in loop in k4992 in k4985 in a4982 in conc in glob in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_5027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5027,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a4976 in conc in glob in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4977,2,t0,t1);}
/* posixunix.scm: 1816 decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* get-host-name in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4948,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,(C_word)stub826(t3),C_fix(0));}

/* k4946 in get-host-name in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4951,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_4951(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1800 posix-error */
t3=lf[3];
f_1425(5,t3,t2,lf[506],lf[505],lf[507]);}}

/* k4949 in k4946 in get-host-name in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* terminal-name in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4914(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4914,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4918,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1786 ##sys#check-port */
t4=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[502]);}

/* k4916 in terminal-name in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4918,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[2],C_fix(7));
t4=(C_word)C_eqp(lf[115],t3);
t5=(C_truep(t4)?(C_word)C_tty_portp(((C_word*)t0)[2]):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t2;
f_4921(2,t6,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1789 ##sys#error */
t6=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t2,lf[502],lf[503],((C_word*)t0)[2]);}}

/* k4919 in k4916 in terminal-name in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4921,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(C_word)C_C_fileno(((C_word*)t0)[2]);
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=(C_word)stub818(t4,t5);
/* ##sys#peek-nonnull-c-string */
t7=*((C_word*)lf[234]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}

/* terminal-port? in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4885(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4885,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4889,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1779 ##sys#check-port */
t4=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[500]);}

/* k4887 in terminal-port? in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4889,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4892,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1780 ##sys#peek-unsigned-integer */
t3=*((C_word*)lf[363]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],C_fix(0));}

/* k4890 in k4887 in terminal-port? in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4892(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(t1,C_fix(0));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_SCHEME_FALSE:(C_word)C_tty_portp(((C_word*)t0)[2])));}

/* set-buffering-mode! in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4826(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_4826r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_4826r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4826r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4830,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1761 ##sys#check-port */
t6=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,lf[493]);}

/* k4828 in set-buffering-mode! in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4830(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4830,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[5]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(0)):C_fix((C_word)BUFSIZ));
t4=((C_word*)t0)[4];
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4836,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(t4,lf[495]);
if(C_truep(t6)){
t7=t5;
f_4836(2,t7,C_fix((C_word)_IOFBF));}
else{
t7=(C_word)C_eqp(t4,lf[496]);
if(C_truep(t7)){
t8=t5;
f_4836(2,t8,C_fix((C_word)_IOLBF));}
else{
t8=(C_word)C_eqp(t4,lf[497]);
if(C_truep(t8)){
t9=t5;
f_4836(2,t9,C_fix((C_word)_IONBF));}
else{
/* posixunix.scm: 1767 ##sys#error */
t9=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t5,lf[493],lf[498],((C_word*)t0)[4],((C_word*)t0)[3]);}}}}

/* k4834 in k4828 in set-buffering-mode! in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[4],lf[493]);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(7));
t4=(C_word)C_eqp(lf[115],t3);
t5=(C_truep(t4)?(C_word)C_setvbuf(((C_word*)t0)[3],t1,((C_word*)t0)[4]):C_fix(-1));
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(0)))){
/* posixunix.scm: 1773 ##sys#error */
t6=*((C_word*)lf[53]+1);
((C_proc7)(void*)(*((C_word*)t6+1)))(7,t6,((C_word*)t0)[2],lf[493],lf[494],((C_word*)t0)[3],t1,((C_word*)t0)[4]);}
else{
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}

/* set-alarm! in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4819(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4819,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub801(C_SCHEME_UNDEFINED,t3));}

/* _exit in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4800(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2rv,(void*)f_4800r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_4800r(t0,t1,t2);}}

static void C_ccall f_4800r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4804,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1749 ##sys#cleanup-before-exit */
t4=*((C_word*)lf[489]+1);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k4802 in _exit in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4804(C_word c,C_word t0,C_word t1){
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
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)stub795(C_SCHEME_UNDEFINED,t5));}

/* local-timezone-abbreviation in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4788,2,t0,t1);}
t2=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,(C_word)stub790(t2),C_fix(0));}

/* utc-time->seconds in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4760(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4760,3,t0,t1,t2);}
t3=(C_word)C_i_check_vector_2(t2,lf[482]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4767,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(10)))){
/* posixunix.scm: 1727 ##sys#error */
t6=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[482],lf[484],t2);}
else{
t6=t4;
f_4767(2,t6,C_SCHEME_UNDEFINED);}}

/* k4765 in utc-time->seconds in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_timegm(((C_word*)t0)[3]))){
/* posixunix.scm: 1729 ##sys#cons-flonum */
t2=*((C_word*)lf[478]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
/* posixunix.scm: 1730 ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[482],lf[483],((C_word*)t0)[3]);}}

/* local-time->seconds in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4732(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4732,3,t0,t1,t2);}
t3=(C_word)C_i_check_vector_2(t2,lf[477]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4739,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(10)))){
/* posixunix.scm: 1720 ##sys#error */
t6=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[477],lf[480],t2);}
else{
t6=t4;
f_4739(2,t6,C_SCHEME_UNDEFINED);}}

/* k4737 in local-time->seconds in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4739(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_mktime(((C_word*)t0)[3]))){
/* posixunix.scm: 1722 ##sys#cons-flonum */
t2=*((C_word*)lf[478]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
/* posixunix.scm: 1723 ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[477],lf[479],((C_word*)t0)[3]);}}

/* time->string in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4704(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4704,3,t0,t1,t2);}
t3=(C_word)C_i_check_vector_2(t2,lf[473]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4711,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(10)))){
/* posixunix.scm: 1713 ##sys#error */
t6=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[473],lf[475],t2);}
else{
t6=t4;
f_4711(2,t6,C_SCHEME_UNDEFINED);}}

/* k4709 in time->string in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,(C_word)stub775(t4,t3),C_fix(0));}

/* k4712 in k4709 in time->string in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4714,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4717,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_4717(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1715 ##sys#error */
t3=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[473],lf[474],((C_word*)t0)[2]);}}

/* k4715 in k4712 in k4709 in time->string in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* seconds->string in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4687(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_4687,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4691,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t6=(C_word)C_i_foreign_integer_argumentp(t4);
t7=(C_word)stub766(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k4689 in seconds->string in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4691,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4694,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_4694(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1706 ##sys#error */
t3=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[470],lf[471],((C_word*)t0)[2]);}}

/* k4692 in k4689 in seconds->string in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* seconds->utc-time in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4668(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4668,3,t0,t1,t2);}
t3=(C_word)C_i_check_number_2(t2,lf[468]);
/* posixunix.scm: 1700 ##sys#decode-seconds */
t4=*((C_word*)lf[466]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,C_SCHEME_TRUE);}

/* seconds->local-time in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4659(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4659,3,t0,t1,t2);}
t3=(C_word)C_i_check_number_2(t2,lf[465]);
/* posixunix.scm: 1696 ##sys#decode-seconds */
t4=*((C_word*)lf[466]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t1,t2,C_SCHEME_FALSE);}

/* memory-mapped-file? in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4653(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4653,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[452]));}

/* memory-mapped-file-pointer in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4644(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4644,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[452],lf[461]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* unmap-file-from-memory in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4609(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3rv,(void*)f_4609r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_4609r(t0,t1,t2,t3);}}

static void C_ccall f_4609r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(C_word)C_i_check_structure_2(t2,lf[452],lf[458]);
t5=(C_word)C_notvemptyp(t3);
t6=(C_truep(t5)?(C_word)C_i_vector_ref(t3,C_fix(0)):(C_word)C_slot(t2,C_fix(2)));
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_truep(t7)?(C_word)C_i_foreign_pointer_argumentp(t7):C_SCHEME_FALSE);
t9=(C_word)C_i_foreign_integer_argumentp(t6);
t10=(C_word)stub735(C_SCHEME_UNDEFINED,t8,t9);
t11=(C_word)C_eqp(C_fix(0),t10);
if(C_truep(t11)){
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1683 posix-error */
t12=lf[3];
f_1425(7,t12,t1,lf[51],lf[458],lf[459],t2,t6);}}

/* map-file-to-memory in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4547(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...){
C_word tmp;
C_word t7;
va_list v;
C_word *a,c2=c;
C_save_rest(t6,c2,7);
if(c<7) C_bad_min_argc_2(c,7,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr7rv,(void*)f_4547r,7,t0,t1,t2,t3,t4,t5,t6);}
else{
a=C_alloc((c-7)*3);
t7=C_restore_rest_vector(a,C_rest_count(0));
f_4547r(t0,t1,t2,t3,t4,t5,t6,t7);}}

static void C_ccall f_4547r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4551,a[2]=t1,a[3]=t6,a[4]=t5,a[5]=t4,a[6]=t3,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t9=t2;
if(C_truep(t9)){
t10=t8;
f_4551(2,t10,t2);}
else{
/* posixunix.scm: 1668 ##sys#null-pointer */
t10=*((C_word*)lf[456]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t8);}}

/* k4549 in map-file-to-memory in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4551,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[7]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[7],C_fix(0)):C_fix(0));
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4557,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t5=(C_truep((C_word)C_blockp(t1))?(C_word)C_specialp(t1):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t4;
f_4557(2,t6,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1671 ##sys#signal-hook */
t6=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t4,lf[66],lf[451],lf[455],t1);}}

/* k4555 in k4549 in map-file-to-memory in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4557(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4557,2,t0,t1);}
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[4];
t7=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t8=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t9=(C_word)C_i_foreign_integer_argumentp(t3);
t10=(C_word)C_i_foreign_fixnum_argumentp(t4);
t11=(C_word)C_i_foreign_fixnum_argumentp(t5);
t12=(C_word)C_i_foreign_fixnum_argumentp(t6);
t13=(C_word)C_i_foreign_integer_argumentp(((C_word*)t0)[3]);
t14=(C_word)stub710(t7,t8,t9,t10,t11,t12,t13);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4563,a[2]=((C_word*)t0)[7],a[3]=t14,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4576,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t15,tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm: 1673 ##sys#pointer->address */
t17=*((C_word*)lf[454]+1);
((C_proc3)(void*)(*((C_word*)t17+1)))(3,t17,t16,t14);}

/* k4574 in k4555 in k4549 in map-file-to-memory in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
/* posixunix.scm: 1674 posix-error */
t3=lf[3];
f_1425(11,t3,((C_word*)t0)[8],lf[51],lf[451],lf[453],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[8];
f_4563(2,t3,C_SCHEME_UNDEFINED);}}

/* k4561 in k4555 in k4549 in map-file-to-memory in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4563,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,3,lf[452],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* current-environment in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4444,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4450,a[2]=t3,a[3]=lf[440],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4450(t5,t1,C_fix(0));}

/* loop in current-environment in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_4450(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4450,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4454,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t6=(C_word)C_i_foreign_fixnum_argumentp(t4);
t7=(C_word)stub688(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k4452 in loop in current-environment in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4454,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4462,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=lf[439],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_4462(t5,((C_word*)t0)[2],C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* scan in k4452 in loop in current-environment in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_4462(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4462,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(C_make_character(61),(C_word)C_subchar(((C_word*)t0)[5],t2));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4488,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1632 ##sys#substring */
t5=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[5],C_fix(0),t2);}
else{
t4=(C_word)C_fixnum_plus(t2,C_fix(1));
/* posixunix.scm: 1635 scan */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}

/* k4486 in scan in k4452 in loop in current-environment in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4488,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4492,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=(C_word)C_block_size(((C_word*)t0)[2]);
/* posixunix.scm: 1633 ##sys#substring */
t5=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,((C_word*)t0)[2],t3,t4);}

/* k4490 in k4486 in scan in k4452 in loop in current-environment in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4492,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4480,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm: 1634 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_4450(t5,t3,t4);}

/* k4478 in k4490 in k4486 in scan in k4452 in loop in current-environment in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4480,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* unsetenv in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4424(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4424,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[436]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4432,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1621 ##sys#make-c-string */
t5=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4430 in unsetenv in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_putenv(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* setenv in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4407(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4407,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[434]);
t5=(C_word)C_i_check_string_2(t3,lf[434]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4418,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1616 ##sys#make-c-string */
t7=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k4416 in setenv in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4422,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1616 ##sys#make-c-string */
t3=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4420 in k4416 in setenv in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_setenv(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* fifo? in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4381(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4381,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[431]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4388,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4405,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1605 ##sys#expand-home-path */
t6=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k4403 in fifo? in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4405(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1605 ##sys#file-info */
t2=*((C_word*)lf[142]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4386 in fifo? in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(t1,C_fix(4));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_eqp(C_fix(3),t2));}
else{
/* posixunix.scm: 1608 posix-error */
t2=lf[3];
f_1425(6,t2,((C_word*)t0)[3],lf[51],lf[431],lf[432],((C_word*)t0)[2]);}}

/* create-fifo in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4338(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3rv,(void*)f_4338r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_4338r(t0,t1,t2,t3);}}

static void C_ccall f_4338r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(4);
t4=(C_word)C_i_check_string_2(t2,lf[428]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4345,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_notvemptyp(t3))){
t6=t5;
f_4345(t6,(C_word)C_i_vector_ref(t3,C_fix(0)));}
else{
t6=(C_word)C_fixnum_or(C_fix((C_word)S_IRWXG),C_fix((C_word)S_IRWXO));
t7=t5;
f_4345(t7,(C_word)C_fixnum_or(C_fix((C_word)S_IRWXU),t6));}}

/* k4343 in create-fifo in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_4345(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4345,NULL,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(t1,lf[428]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4362,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4366,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1599 ##sys#expand-home-path */
t5=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k4364 in k4343 in create-fifo in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1599 ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4360 in k4343 in create-fifo in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_mkfifo(t1,((C_word*)t0)[4]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1600 posix-error */
t3=lf[3];
f_1425(7,t3,((C_word*)t0)[3],lf[51],lf[428],lf[429],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* file-unlock in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4310(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4310,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[413],lf[425]);
t4=(C_word)C_slot(t2,C_fix(2));
t5=(C_word)C_slot(t2,C_fix(3));
t6=(C_word)C_flock_setup(C_fix((C_word)F_UNLCK),t4,t5);
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_flock_lock(t7);
if(C_truep((C_word)C_fixnum_lessp(t8,C_fix(0)))){
/* posixunix.scm: 1585 posix-error */
t9=lf[3];
f_1425(6,t9,t1,lf[51],lf[425],lf[426],t2);}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_UNDEFINED);}}

/* file-test-lock in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4288(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4288r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4288r(t0,t1,t2,t3);}}

static void C_ccall f_4288r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4292,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1576 setup */
f_4166(t4,t2,t3,lf[422]);}

/* k4290 in file-test-lock in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4292(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_flock_test(((C_word*)t0)[4]);
if(C_truep(t2)){
t3=(C_word)C_eqp(t2,C_fix(0));
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?C_SCHEME_FALSE:t2));}
else{
/* posixunix.scm: 1578 err */
f_4240(((C_word*)t0)[3],lf[423],t1,lf[422]);}}

/* file-lock/blocking in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4273(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4273r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4273r(t0,t1,t2,t3);}}

static void C_ccall f_4273r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4277,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1570 setup */
f_4166(t4,t2,t3,lf[419]);}

/* k4275 in file-lock/blocking in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp((C_word)C_flock_lockw(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1572 err */
f_4240(((C_word*)t0)[2],lf[420],t1,lf[419]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* file-lock in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4258(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4258r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4258r(t0,t1,t2,t3);}}

static void C_ccall f_4258r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4262,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1564 setup */
f_4166(t4,t2,t3,lf[416]);}

/* k4260 in file-lock in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp((C_word)C_flock_lock(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1566 err */
f_4240(((C_word*)t0)[2],lf[417],t1,lf[416]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* err in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_4240(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4240,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_slot(t3,C_fix(1));
t6=(C_word)C_slot(t3,C_fix(2));
t7=(C_word)C_slot(t3,C_fix(3));
/* posixunix.scm: 1561 posix-error */
t8=lf[3];
f_1425(8,t8,t1,lf[51],t4,t2,t5,t6,t7);}

/* setup in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_4166(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t16;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4166,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_i_nullp(t3);
t6=(C_truep(t5)?C_fix(0):(C_word)C_i_car(t3));
t7=(C_word)C_i_nullp(t3);
t8=(C_truep(t7)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
t9=(C_word)C_i_nullp(t8);
t10=(C_truep(t9)?C_SCHEME_TRUE:(C_word)C_i_car(t8));
t11=t10;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=(C_word)C_i_nullp(t8);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t8));
if(C_truep((C_word)C_i_nullp(t14))){
t15=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4188,a[2]=t1,a[3]=t12,a[4]=t2,a[5]=t4,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1553 ##sys#check-port */
t16=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t15,t2,t4);}
else{
/* ##sys#error */
t15=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}

/* k4186 in setup in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4188,2,t0,t1);}
t2=(C_word)C_i_check_number_2(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4194,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_eqp(C_SCHEME_TRUE,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t4)){
t5=C_set_block_item(((C_word*)t0)[3],0,C_fix(0));
t6=t3;
f_4194(t6,t5);}
else{
t5=t3;
f_4194(t5,(C_word)C_i_check_number_2(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[5]));}}

/* k4192 in k4186 in setup in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_4194(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4194,NULL,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_truep(t2)?C_fix((C_word)F_RDLCK):C_fix((C_word)F_WRLCK));
t4=(C_word)C_flock_setup(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[413],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]));}

/* file-truncate in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4127(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4127,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_number_2(t3,lf[409]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4144,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_stringp(t2))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4151,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4155,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1536 ##sys#expand-home-path */
t8=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
if(C_truep((C_word)C_fixnump(t2))){
t6=t5;
f_4144(2,t6,(C_word)C_ftruncate(t2,t3));}
else{
/* posixunix.scm: 1538 ##sys#error */
t6=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[409],lf[411],t2);}}}

/* k4153 in file-truncate in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1536 ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4149 in file-truncate in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4151(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_4144(2,t2,(C_word)C_truncate(t1,((C_word*)t0)[2]));}

/* k4142 in file-truncate in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 1540 posix-error */
t2=lf[3];
f_1425(7,t2,((C_word*)t0)[4],lf[51],lf[409],lf[410],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3888(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr5r,(void*)f_3888r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3888r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3888r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(16);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3890,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t4,a[7]=lf[404],tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4068,a[2]=t6,a[3]=lf[406],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4079,a[2]=t7,a[3]=lf[407],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
/* def-bufi588623 */
t9=t8;
f_4079(t9,t1);}
else{
t9=(C_word)C_i_car(t5);
t10=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t10))){
/* def-on-close589621 */
t11=t7;
f_4068(t11,t1,t9);}
else{
t11=(C_word)C_i_car(t10);
t12=(C_word)C_i_cdr(t10);
if(C_truep((C_word)C_i_nullp(t12))){
/* body586591 */
t13=t6;
f_3890(t13,t1,t9,t11);}
else{
/* ##sys#error */
t13=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t1,lf[0],t12);}}}}

/* def-bufi588 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_4079(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4079,NULL,2,t0,t1);}
/* def-on-close589621 */
t2=((C_word*)t0)[2];
f_4068(t2,t1,C_fix(0));}

/* def-on-close589 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_4068(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4068,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4074,a[2]=lf[405],tmp=(C_word)a,a+=3,tmp);
/* body586591 */
t4=((C_word*)t0)[2];
f_3890(t4,t1,t2,t3);}

/* a4073 in def-on-close589 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_4074(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4074,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[388]+1));}

/* body586 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_3890(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3890,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3893,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=lf[396],tmp=(C_word)a,a+=7,tmp));
t9=(C_word)C_fixnump(t2);
t10=(C_truep(t9)?t2:(C_word)C_block_size(t2));
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3939,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=t1,a[9]=t7,tmp=(C_word)a,a+=10,tmp);
t12=(C_word)C_eqp(C_fix(0),t10);
if(C_truep(t12)){
t13=t11;
f_3939(t13,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3983,a[2]=t5,a[3]=lf[401],tmp=(C_word)a,a+=4,tmp));}
else{
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3997,a[2]=t5,a[3]=t10,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_fixnump(t2))){
/* posixunix.scm: 1494 ##sys#make-string */
t14=*((C_word*)lf[385]+1);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,t2);}
else{
t14=t13;
f_3997(2,t14,t2);}}}

/* k3995 in body586 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3997,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[4];
f_3939(t4,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3998,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=lf[403],tmp=(C_word)a,a+=7,tmp));}

/* f_3998 in k3995 in body586 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3998(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3998,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);
t4=(C_word)C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4015,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=t6,a[7]=((C_word*)t0)[4],a[8]=lf[402],tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_4015(t8,t1,t3,C_fix(0),t4);}
else{
if(C_truep((C_word)C_fixnum_lessp(C_fix(0),((C_word*)((C_word*)t0)[4])[1]))){
/* posixunix.scm: 1511 poke */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3893(t3,t1,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}}

/* loop */
static void C_fcall f_4015(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t16;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4015,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4025,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1501 poke */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3893(t7,t6,((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_fixnum_lessp(t2,t4))){
t6=(C_word)C_substring_copy(((C_word*)t0)[2],((C_word*)t0)[3],t3,t2,((C_word*)((C_word*)t0)[7])[1]);
t7=(C_word)C_fixnum_difference(t4,t2);
/* posixunix.scm: 1506 loop */
t13=t1;
t14=C_fix(0);
t15=t2;
t16=t7;
t1=t13;
t2=t14;
t3=t15;
t4=t16;
goto loop;}
else{
t6=(C_word)C_substring_copy(((C_word*)t0)[2],((C_word*)t0)[3],t3,t4,((C_word*)((C_word*)t0)[7])[1]);
t7=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t4);
t8=C_mutate(((C_word *)((C_word*)t0)[7])+1,t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}}

/* k4023 in loop */
static void C_ccall f_4025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[6],0,C_fix(0));
/* posixunix.scm: 1503 loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_4015(t3,((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* f_3983 in body586 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3983(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3983,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(C_word)C_block_size(t2);
/* posixunix.scm: 1493 poke */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3893(t4,t1,t2,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k3937 in body586 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_3939(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3939,NULL,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[9])+1,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3943,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3948,a[2]=((C_word*)t0)[9],a[3]=lf[397],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3954,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=lf[399],tmp=(C_word)a,a+=8,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3975,a[2]=((C_word*)t0)[9],a[3]=lf[400],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1514 make-output-port */
t9=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t9))(5,t9,t5,t6,t7,t8);}

/* a3974 in k3937 in body586 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3975,2,t0,t1);}
/* posixunix.scm: 1523 store */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_FALSE);}

/* a3953 in k3937 in body586 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3954,2,t0,t1);}
if(C_truep((C_word)C_slot(((C_word*)((C_word*)t0)[6])[1],C_fix(8)))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3964,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_close(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1520 posix-error */
t3=lf[3];
f_1425(7,t3,t2,lf[51],((C_word*)t0)[3],lf[398],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
t3=t2;
f_3964(2,t3,C_SCHEME_UNDEFINED);}}}

/* k3962 in a3953 in k3937 in body586 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1521 on-close */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* a3947 in k3937 in body586 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3948(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3948,3,t0,t1,t2);}
/* posixunix.scm: 1516 store */
t3=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}

/* k3941 in k3937 in body586 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3943,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3946,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1524 set-port-name! */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[2]);}

/* k3944 in k3941 in k3937 in body586 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* poke in body586 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_3893(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3893,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_write(((C_word*)t0)[5],t2,t3);
t5=(C_word)C_eqp(C_fix(-1),t4);
if(C_truep(t5)){
t6=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3909,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1483 ##sys#thread-yield! */
t8=*((C_word*)lf[373]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
/* posixunix.scm: 1485 posix-error */
t7=lf[3];
f_1425(7,t7,t1,((C_word*)t0)[3],lf[51],lf[395],((C_word*)t0)[5],((C_word*)t0)[2]);}}
else{
if(C_truep((C_word)C_fixnum_lessp(t4,t3))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3928,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1487 ##sys#substring */
t7=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,t2,t4,t3);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}}

/* k3926 in poke in body586 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* posixunix.scm: 1487 poke */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3893(t3,((C_word*)t0)[2],t1,t2);}

/* k3907 in poke in body586 in ##sys#custom-output-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1484 poke */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3893(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3616(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+20)){
C_save_and_reclaim((void*)tr5r,(void*)f_3616r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3616r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3616r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
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
C_word *a=C_alloc(20);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t4,a[6]=t2,a[7]=lf[386],tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3809,a[2]=t6,a[3]=lf[387],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3814,a[2]=t7,a[3]=lf[390],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3825,a[2]=t8,a[3]=lf[391],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
/* def-bufi530570 */
t10=t9;
f_3825(t10,t1);}
else{
t10=(C_word)C_i_car(t5);
t11=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t11))){
/* def-on-close531568 */
t12=t8;
f_3814(t12,t1,t10);}
else{
t12=(C_word)C_i_car(t11);
t13=(C_word)C_i_cdr(t11);
if(C_truep((C_word)C_i_nullp(t13))){
/* def-more?532565 */
t14=t7;
f_3809(t14,t1,t10,t12);}
else{
t14=(C_word)C_i_car(t13);
t15=(C_word)C_i_cdr(t13);
if(C_truep((C_word)C_i_nullp(t15))){
/* body528534 */
t16=t6;
f_3618(t16,t1,t10,t12,t14);}
else{
/* ##sys#error */
t16=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t16+1)))(4,t16,t1,lf[0],t15);}}}}}

/* def-bufi530 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_3825(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3825,NULL,2,t0,t1);}
/* def-on-close531568 */
t2=((C_word*)t0)[2];
f_3814(t2,t1,C_fix(0));}

/* def-on-close531 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_3814(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3814,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3820,a[2]=lf[389],tmp=(C_word)a,a+=3,tmp);
/* def-more?532565 */
t4=((C_word*)t0)[2];
f_3809(t4,t1,t2,t3);}

/* a3819 in def-on-close531 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3820,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[388]+1));}

/* def-more?532 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_3809(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3809,NULL,4,t0,t1,t2,t3);}
/* body528534 */
t4=((C_word*)t0)[2];
f_3618(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_3618(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3618,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_fixnump(t2);
t6=(C_truep(t5)?(C_word)C_i_fixnum_max(t2,C_fix(1)):(C_word)C_block_size(t2));
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3625,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t4,a[7]=t6,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t8=(C_word)C_i_fixnum_max(t2,C_fix(1));
/* posixunix.scm: 1401 ##sys#make-string */
t9=*((C_word*)lf[385]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}
else{
t8=t7;
f_3625(2,t8,t2);}}

/* k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3625(C_word c,C_word t0,C_word t1){
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
C_word ab[59],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3625,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3626,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=lf[372],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3641,a[2]=t1,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3649,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=t3,a[9]=t5,a[10]=lf[379],tmp=(C_word)a,a+=11,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3731,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t10,tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3736,a[2]=t8,a[3]=t5,a[4]=t7,a[5]=lf[380],tmp=(C_word)a,a+=6,tmp);
t13=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3749,a[2]=t6,a[3]=t3,a[4]=t5,a[5]=lf[381],tmp=(C_word)a,a+=6,tmp);
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3761,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[3],a[6]=t10,a[7]=lf[383],tmp=(C_word)a,a+=8,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3782,a[2]=t8,a[3]=t7,a[4]=lf[384],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1446 make-input-port */
t16=((C_word*)t0)[2];
((C_proc6)C_retrieve_proc(t16))(6,t16,t11,t12,t13,t14,t15);}

/* a3781 in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3782,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3786,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1461 fetch */
t3=((C_word*)t0)[2];
f_3649(t3,t2);}

/* k3784 in a3781 in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1462 peek */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,f_3641(((C_word*)t0)[2]));}

/* a3760 in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3761,2,t0,t1);}
if(C_truep((C_word)C_slot(((C_word*)((C_word*)t0)[6])[1],C_fix(8)))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3771,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_close(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1458 posix-error */
t3=lf[3];
f_1425(7,t3,t2,lf[51],((C_word*)t0)[3],lf[382],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
t3=t2;
f_3771(2,t3,C_SCHEME_UNDEFINED);}}}

/* k3769 in a3760 in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1459 on-close */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* a3748 in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3749,2,t0,t1);}
t2=(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixunix.scm: 1454 ready? */
t3=((C_word*)t0)[2];
f_3626(t3,t1);}}

/* a3735 in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3736,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3740,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1448 fetch */
t3=((C_word*)t0)[2];
f_3649(t3,t2);}

/* k3738 in a3735 in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=f_3641(((C_word*)t0)[4]);
t3=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* k3729 in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3731,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3734,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1467 set-port-name! */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[2]);}

/* k3732 in k3729 in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* fetch in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_3649(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3649,NULL,2,t0,t1);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[8])[1]))){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3661,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=lf[378],tmp=(C_word)a,a+=12,tmp));
t5=((C_word*)t3)[1];
f_3661(t5,t1);}
else{
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* loop in fetch in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_3661(C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3661,NULL,2,t0,t1);}
t2=(C_word)C_read(((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);
t3=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3677,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1423 ##sys#thread-block-for-i/o! */
t6=*((C_word*)lf[374]+1);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,*((C_word*)lf[375]+1),((C_word*)t0)[10],C_SCHEME_TRUE);}
else{
/* posixunix.scm: 1426 posix-error */
t5=lf[3];
f_1425(7,t5,t1,lf[51],((C_word*)t0)[6],lf[376],((C_word*)t0)[10],((C_word*)t0)[5]);}}
else{
t4=(C_truep(((C_word*)t0)[4])?(C_word)C_eqp(t2,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3698,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm: 1430 more? */
t6=((C_word*)t0)[4];
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t6=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}}

/* k3696 in loop in fetch in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3698(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3698,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3701,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1432 ##sys#thread-yield! */
t3=*((C_word*)lf[373]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(C_word)C_read(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3707,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_eqp(((C_word*)t3)[1],C_fix(-1));
if(C_truep(t5)){
t6=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t6)){
t7=C_set_block_item(t3,0,C_fix(0));
t8=t4;
f_3707(2,t8,t7);}
else{
/* posixunix.scm: 1438 posix-error */
t7=lf[3];
f_1425(7,t7,t4,lf[51],((C_word*)t0)[3],lf[377],((C_word*)t0)[8],((C_word*)t0)[2]);}}
else{
t6=t4;
f_3707(2,t6,C_SCHEME_UNDEFINED);}}}

/* k3705 in k3696 in loop in fetch in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)((C_word*)t0)[4])[1]);
t3=C_set_block_item(((C_word*)t0)[3],0,C_fix(0));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3699 in k3696 in loop in fetch in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1433 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3661(t2,((C_word*)t0)[2]);}

/* k3675 in loop in fetch in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3677,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3680,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1424 ##sys#thread-yield! */
t3=*((C_word*)lf[373]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3678 in k3675 in loop in fetch in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1425 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3661(t2,((C_word*)t0)[2]);}

/* peek in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall f_3641(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_check;
t1=(C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);
return((C_truep(t1)?C_SCHEME_END_OF_FILE:(C_word)C_subchar(((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1])));}

/* ready? in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_3626(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3626,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3640,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1407 ##sys#file-select-one */
t3=*((C_word*)lf[12]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}

/* k3638 in ready? in k3623 in body528 in ##sys#custom-input-port in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
/* posixunix.scm: 1408 posix-error */
t3=lf[3];
f_1425(7,t3,((C_word*)t0)[5],lf[51],((C_word*)t0)[4],lf[371],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* duplicate-fileno in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3589(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3rv,(void*)f_3589r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_3589r(t0,t1,t2,t3);}}

static void C_ccall f_3589r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(4);
t4=(C_word)C_i_check_exact_2(t2,*((C_word*)lf[365]+1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3596,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_vemptyp(t3))){
t6=t5;
f_3596(t6,(C_word)C_dup(t2));}
else{
t6=(C_word)C_i_vector_ref(t3,C_fix(0));
t7=(C_word)C_i_check_exact_2(t6,lf[365]);
t8=t5;
f_3596(t8,(C_word)C_dup2(t2,t6));}}

/* k3594 in duplicate-fileno in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_3596(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3596,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3599,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 1390 posix-error */
t3=lf[3];
f_1425(6,t3,t2,lf[51],lf[365],lf[366],((C_word*)t0)[2]);}
else{
t3=t2;
f_3599(2,t3,C_SCHEME_UNDEFINED);}}

/* k3597 in k3594 in duplicate-fileno in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* port->fileno in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3544(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3544,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3548,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1372 ##sys#check-port */
t4=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[358]);}

/* k3546 in port->fileno in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3548,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(7));
t3=(C_word)C_eqp(lf[359],t2);
if(C_truep(t3)){
/* posixunix.scm: 1373 ##sys#tcp-port->fileno */
t4=*((C_word*)lf[360]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3583,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1374 ##sys#peek-unsigned-integer */
t5=*((C_word*)lf[363]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[3],C_fix(0));}}

/* k3581 in k3546 in port->fileno in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3583,2,t0,t1);}
if(C_truep((C_word)C_i_zerop(t1))){
/* posixunix.scm: 1379 posix-error */
t2=lf[3];
f_1425(6,t2,((C_word*)t0)[3],lf[66],lf[358],lf[361],((C_word*)t0)[2]);}
else{
t2=(C_word)C_C_fileno(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3566,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1377 posix-error */
t4=lf[3];
f_1425(6,t4,t3,lf[51],lf[358],lf[362],((C_word*)t0)[2]);}
else{
t4=t3;
f_3566(2,t4,C_SCHEME_UNDEFINED);}}}

/* k3564 in k3581 in k3546 in port->fileno in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* open-output-file* in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3530(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3530r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3530r(t0,t1,t2,t3);}}

static void C_ccall f_3530r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_exact_2(t2,lf[356]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3542,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1368 mode */
f_3464(t5,C_SCHEME_FALSE,t3);}

/* k3540 in open-output-file* in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3542,2,t0,t1);}
t2=(C_word)C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixunix.scm: 1368 check */
f_3501(((C_word*)t0)[2],lf[356],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* open-input-file* in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3516(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3516r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3516r(t0,t1,t2,t3);}}

static void C_ccall f_3516r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_exact_2(t2,lf[354]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3528,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1364 mode */
f_3464(t5,C_SCHEME_TRUE,t3);}

/* k3526 in open-input-file* in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3528,2,t0,t1);}
t2=(C_word)C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixunix.scm: 1364 check */
f_3501(((C_word*)t0)[2],lf[354],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* check in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_3501(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3501,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_null_pointerp(t5))){
/* posixunix.scm: 1357 posix-error */
t6=lf[3];
f_1425(6,t6,t1,lf[51],t2,lf[351],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3514,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1358 ##sys#make-port */
t7=*((C_word*)lf[151]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,t4,*((C_word*)lf[152]+1),lf[352],lf[115]);}}

/* k3512 in check in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* mode in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_3464(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3464,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3472,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_i_car(t3);
t6=(C_word)C_eqp(t5,lf[344]);
if(C_truep(t6)){
t7=t2;
if(C_truep(t7)){
/* posixunix.scm: 1351 ##sys#error */
t8=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,lf[345],t5);}
else{
t8=t4;
f_3472(2,t8,lf[346]);}}
else{
/* posixunix.scm: 1352 ##sys#error */
t7=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,lf[347],t5);}}
else{
t5=t4;
f_3472(2,t5,(C_truep(t2)?lf[348]:lf[349]));}}

/* k3470 in mode in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1347 ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* file-link in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3439(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3439,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[337]);
t5=(C_word)C_i_check_string_2(t3,lf[337]);
t6=t2;
t7=t3;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3420,a[2]=t7,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t9=(C_word)C_i_foreign_string_argumentp(t6);
/* ##sys#make-c-string */
t10=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
t9=t8;
f_3420(2,t9,C_SCHEME_FALSE);}}

/* k3418 in file-link in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3420(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3420,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3424,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(C_word)C_i_foreign_string_argumentp(((C_word*)t0)[2]);
/* ##sys#make-c-string */
t4=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t3=t2;
f_3424(2,t3,C_SCHEME_FALSE);}}

/* k3422 in k3418 in file-link in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)stub459(C_SCHEME_UNDEFINED,((C_word*)t0)[5],t1);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1332 posix-error */
t3=lf[3];
f_1425(7,t3,((C_word*)t0)[4],lf[51],lf[338],lf[339],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* read-symbolic-link in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3389(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3389,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[334]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3397,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3413,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1321 ##sys#expand-home-path */
t6=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k3411 in read-symbolic-link in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1321 ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3395 in read-symbolic-link in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3397,2,t0,t1);}
t2=(C_word)C_readlink(t1,((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3400,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1323 posix-error */
t4=lf[3];
f_1425(6,t4,t3,lf[51],lf[334],lf[335],((C_word*)t0)[2]);}
else{
t4=t3;
f_3400(2,t4,C_SCHEME_UNDEFINED);}}

/* k3398 in k3395 in read-symbolic-link in k3386 in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1324 substring */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* create-symbolic-link in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3351(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3351,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[329]);
t5=(C_word)C_i_check_string_2(t3,lf[329]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3372,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3384,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1309 ##sys#expand-home-path */
t8=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k3382 in create-symbolic-link in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1309 ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3370 in create-symbolic-link in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3372,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3376,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3380,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1310 ##sys#expand-home-path */
t4=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k3378 in k3370 in create-symbolic-link in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1310 ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3374 in k3370 in create-symbolic-link in k3347 in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_symlink(((C_word*)t0)[5],t1);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1312 posix-error */
t3=lf[3];
f_1425(7,t3,((C_word*)t0)[4],lf[51],lf[330],lf[331],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* set-process-group-id! in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3326(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3326,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t2,lf[325]);
t5=(C_word)C_i_check_exact_2(t3,lf[325]);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_setpgid(t2,t3),C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3342,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1287 ##sys#update-errno */
t7=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}

/* k3340 in set-process-group-id! in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1288 ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[325],lf[326],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* create-session in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3311,2,t0,t1);}
t2=(C_word)C_setsid(C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3315,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3321,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1279 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_3315(2,t4,C_SCHEME_UNDEFINED);}}

/* k3319 in create-session in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1280 ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[322],lf[323]);}

/* k3313 in create-session in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-execute-access? in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3305(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3305,3,t0,t1,t2);}
/* posixunix.scm: 1274 check */
f_3269(t1,t2,C_fix((C_word)X_OK),lf[320]);}

/* file-write-access? in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3299(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3299,3,t0,t1,t2);}
/* posixunix.scm: 1273 check */
f_3269(t1,t2,C_fix((C_word)W_OK),lf[318]);}

/* file-read-access? in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3293(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3293,3,t0,t1,t2);}
/* posixunix.scm: 1272 check */
f_3269(t1,t2,C_fix((C_word)R_OK),lf[316]);}

/* check in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_3269(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3269,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(t2,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3287,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3291,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1269 ##sys#expand-home-path */
t8=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k3289 in check in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1269 ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3285 in check in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3287,2,t0,t1);}
t2=(C_word)C_access(t1,((C_word*)t0)[3]);
t3=(C_word)C_eqp(C_fix(0),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3279,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_3279(2,t5,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1270 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k3277 in k3285 in check in k3265 in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* set-group-id! in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3250(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3250,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_lessp((C_word)C_setgid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3260,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1254 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k3258 in set-group-id! in k3246 in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1255 ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[307],lf[312],((C_word*)t0)[2]);}

/* set-user-id! in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3231(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3231,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_lessp((C_word)C_setuid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3241,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1243 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k3239 in set-user-id! in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1244 ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[307],lf[308],((C_word*)t0)[2]);}

/* current-effective-group-id in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3228,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub410(C_SCHEME_UNDEFINED));}

/* current-effective-user-id in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3225,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub408(C_SCHEME_UNDEFINED));}

/* change-file-owner in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3195(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3195,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(t2,lf[300]);
t6=(C_word)C_i_check_exact_2(t3,lf[300]);
t7=(C_word)C_i_check_exact_2(t4,lf[300]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3219,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3223,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1234 ##sys#expand-home-path */
t10=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}

/* k3221 in change-file-owner in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1234 ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3217 in change-file-owner in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_chown(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1235 posix-error */
t3=lf[3];
f_1425(8,t3,((C_word*)t0)[3],lf[51],lf[300],lf[301],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* change-file-mode in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3168(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3168,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[297]);
t5=(C_word)C_i_check_exact_2(t3,lf[297]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3189,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3193,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1226 ##sys#expand-home-path */
t8=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}

/* k3191 in change-file-mode in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1226 ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3187 in change-file-mode in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_chmod(t1,((C_word*)t0)[4]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1227 posix-error */
t3=lf[3];
f_1425(7,t3,((C_word*)t0)[3],lf[51],lf[297],lf[298],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* initialize-groups in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3104(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3104,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[255]);
t5=(C_word)C_i_check_exact_2(t3,lf[255]);
t6=t2;
t7=t3;
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3092,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t6)){
t9=(C_word)C_i_foreign_string_argumentp(t6);
/* ##sys#make-c-string */
t10=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t8,t9);}
else{
t9=t8;
f_3092(2,t9,C_SCHEME_FALSE);}}

/* k3090 in initialize-groups in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3092,2,t0,t1);}
t2=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t3=(C_word)stub379(C_SCHEME_UNDEFINED,t1,t2);
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3120,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1140 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k3118 in k3090 in initialize-groups in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1141 ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[255],lf[256],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set-groups! in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3030(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3030,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3034,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_length(t2);
t5=f_2960(t4);
if(C_truep(t5)){
t6=t3;
f_3034(2,t6,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1123 ##sys#error */
t6=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,lf[250],lf[253]);}}

/* k3032 in set-groups! in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3034,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3039,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=lf[252],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_3039(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* do366 in k3032 in set-groups! in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_3039(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_3039,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep((C_word)C_fixnum_lessp((C_word)C_set_groups(t3),C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3055,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1128 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_i_check_exact_2(t4,lf[250]);
t6=(C_word)C_set_gid(t3,t4);
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_fixnum_plus(t3,C_fix(1));
t11=t1;
t12=t7;
t13=t8;
t1=t11;
t2=t12;
t3=t13;
goto loop;}}

/* k3053 in do366 in k3032 in set-groups! in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1129 ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[250],lf[251],((C_word*)t0)[2]);}

/* get-groups in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2967,2,t0,t1);}
t2=C_fix((C_word)getgroups(0, C_groups));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2971,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3025,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1109 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_2971(2,t4,C_SCHEME_UNDEFINED);}}

/* k3023 in get-groups in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1110 ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[244],lf[248]);}

/* k2969 in get-groups in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2971,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2974,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=f_2960(((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t2;
f_2974(2,t4,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1112 ##sys#error */
t4=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[244],lf[247]);}}

/* k2972 in k2969 in get-groups in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2974,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2977,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t4=(C_word)stub348(C_SCHEME_UNDEFINED,t3);
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3006,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1114 ##sys#update-errno */
t6=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t2;
f_2977(2,t5,C_SCHEME_UNDEFINED);}}

/* k3004 in k2972 in k2969 in get-groups in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_3006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1115 ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[244],lf[246]);}

/* k2975 in k2972 in k2969 in get-groups in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2977,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2982,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=lf[245],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2982(t5,((C_word*)t0)[2],C_fix(0));}

/* loop in k2975 in k2972 in k2969 in get-groups in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_2982(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2982,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[3]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2996,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_fixnum_plus(t2,C_fix(1));
/* posixunix.scm: 1119 loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k2994 in loop in k2975 in k2972 in k2969 in get-groups in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2996,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,(C_word)C_get_gid(((C_word*)t0)[2]),t1));}

/* _ensure-groups in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall f_2960(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_foreign_fixnum_argumentp(t1);
return((C_word)stub352(C_SCHEME_UNDEFINED,t2));}

/* group-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2899(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2899,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2903,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t4=t3;
f_2903(t4,(C_word)C_getgrgid(t2));}
else{
t4=(C_word)C_i_check_string_2(t2,lf[239]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2951,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1084 ##sys#make-c-string */
t6=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}}

/* k2949 in group-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2903(t2,(C_word)C_getgrnam(t1));}

/* k2901 in group-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_2903(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2903,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2913,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[234]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_group->gr_name),C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2911 in k2901 in group-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2913,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2917,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[234]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_group->gr_passwd),C_fix(0));}

/* k2915 in k2911 in k2901 in group-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2917,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2921,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2923,a[2]=t4,a[3]=lf[240],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_2923(t6,t2,C_fix(0));}

/* rec in k2915 in k2911 in k2901 in group-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_2923(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2923,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2927,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t6=(C_word)C_i_foreign_fixnum_argumentp(t4);
t7=(C_word)stub336(t5,t6);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t3,t7,C_fix(0));}

/* k2925 in rec in k2915 in k2911 in k2901 in group-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2927,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2937,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm: 1092 rec */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2923(t4,t2,t3);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* k2935 in k2925 in rec in k2915 in k2911 in k2901 in group-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2937(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2937,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k2919 in k2915 in k2911 in k2901 in group-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2921,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,((C_word*)t0)[3],((C_word*)t0)[2],C_fix((C_word)C_group->gr_gid),t1));}

/* user-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2846(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2846,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2850,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t4=t3;
f_2850(t4,(C_word)C_getpwuid(t2));}
else{
t4=(C_word)C_i_check_string_2(t2,lf[237]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2886,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1061 ##sys#make-c-string */
t6=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}}

/* k2884 in user-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2850(t2,(C_word)C_getpwnam(t1));}

/* k2848 in user-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_2850(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2850,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2860,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[234]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_name),C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2858 in k2848 in user-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2864,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[234]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_passwd),C_fix(0));}

/* k2862 in k2858 in k2848 in user-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2864,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2868,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[234]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_gecos),C_fix(0));}

/* k2866 in k2862 in k2858 in k2848 in user-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2868,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2872,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_dir),C_fix(0));}

/* k2870 in k2866 in k2862 in k2858 in k2848 in user-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2876,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_shell),C_fix(0));}

/* k2874 in k2870 in k2866 in k2862 in k2858 in k2848 in user-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2876,2,t0,t1);}
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,7,((C_word*)t0)[5],((C_word*)t0)[4],C_fix((C_word)C_user->pw_uid),C_fix((C_word)C_user->pw_gid),((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* system-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2808(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2808,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2812,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_lessp(C_fix((C_word)C_uname),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2841,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1040 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_2812(2,t3,C_SCHEME_UNDEFINED);}}

/* k2839 in system-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1041 ##sys#error */
t2=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[233],lf[235]);}

/* k2810 in system-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2812,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2819,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[234]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.sysname),C_fix(0));}

/* k2817 in k2810 in system-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2819,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2823,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[234]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.nodename),C_fix(0));}

/* k2821 in k2817 in k2810 in system-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2827,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[234]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.release),C_fix(0));}

/* k2825 in k2821 in k2817 in k2810 in system-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2827,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2831,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[234]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.version),C_fix(0));}

/* k2829 in k2825 in k2821 in k2817 in k2810 in system-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2835,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[234]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.machine),C_fix(0));}

/* k2833 in k2829 in k2825 in k2821 in k2817 in k2810 in system-information in k2804 in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2835,2,t0,t1);}
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,5,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* signal-unmask! in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2790(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2790,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[230]);
t4=(C_word)C_sigdelset(t2);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_sigprocmask_unblock(C_fix(0)),C_fix(0)))){
/* posixunix.scm: 1015 posix-error */
t5=lf[3];
f_1425(5,t5,t1,lf[218],lf[230],lf[231]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* signal-mask! in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2775(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2775,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[227]);
t4=(C_word)C_sigaddset(t2);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_sigprocmask_block(C_fix(0)),C_fix(0)))){
/* posixunix.scm: 1009 posix-error */
t5=lf[3];
f_1425(5,t5,t1,lf[218],lf[227],lf[228]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* signal-masked? in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2769(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2769,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[225]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_sigismember(t2));}

/* signal-mask in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2737,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2743,a[2]=t3,a[3]=lf[223],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2743(t5,t1,*((C_word*)lf[210]+1),C_SCHEME_END_OF_LIST);}

/* loop in signal-mask in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_2743(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2743,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
t6=(C_truep((C_word)C_sigismember(t4))?(C_word)C_a_i_cons(&a,2,t4,t3):t3);
/* posixunix.scm: 999  loop */
t8=t1;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}

/* set-signal-mask! in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2713(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2713,3,t0,t1,t2);}
t3=(C_word)C_i_check_list_2(t2,lf[217]);
t4=(C_word)C_sigemptyset(C_fix(0));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2720,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2731,a[2]=lf[220],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t7=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t2);}

/* a2730 in set-signal-mask! in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2731(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2731,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[217]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_sigaddset(t2));}

/* k2718 in set-signal-mask! in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp((C_word)C_sigprocmask_set(C_fix(0)),C_fix(0)))){
/* posixunix.scm: 992  posix-error */
t2=lf[3];
f_1425(5,t2,((C_word*)t0)[2],lf[218],lf[217],lf[219]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* ##sys#interrupt-hook in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2695(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2695,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2705,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 978  h */
t6=t4;
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}
else{
/* posixunix.scm: 980  oldhook */
t5=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t2,t3);}}

/* k2703 in ##sys#interrupt-hook in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 979  ##sys#context-switch */
C_context_switch(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set-signal-handler! in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2682(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2682,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t2,lf[214]);
t5=(C_truep(t3)?t2:C_SCHEME_FALSE);
t6=(C_word)C_establish_signal_handler(t2,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_vector_set(((C_word*)t0)[2],t2,t3));}

/* signal-handler in k2669 in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2673(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2673,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[212]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(((C_word*)t0)[2],t2));}

/* create-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2626,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2630,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_pipe(C_SCHEME_FALSE),C_fix(0)))){
/* posixunix.scm: 892  posix-error */
t3=lf[3];
f_1425(5,t3,t2,lf[51],lf[182],lf[183]);}
else{
t3=t2;
f_2630(2,t3,C_SCHEME_UNDEFINED);}}

/* k2628 in create-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 893  values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}

/* with-output-to-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2606(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2606r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2606r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2606r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[179]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2610,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k2608 in with-output-to-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2610,2,t0,t1);}
t2=C_mutate((C_word*)lf[179]+1,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2616,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=lf[180],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 880  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a2615 in k2608 in with-output-to-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2616(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2616r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2616r(t0,t1,t2);}}

static void C_ccall f_2616r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2620,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 882  close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k2618 in a2615 in k2608 in with-output-to-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[179]+1,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* with-input-from-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2586(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2586r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2586r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2586r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[175]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2590,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k2588 in with-input-from-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2590,2,t0,t1);}
t2=C_mutate((C_word*)lf[175]+1,t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2596,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=lf[176],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 870  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a2595 in k2588 in with-input-from-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2596(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2596r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2596r(t0,t1,t2);}}

static void C_ccall f_2596r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2600,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 872  close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k2598 in a2595 in k2588 in with-input-from-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[175]+1,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* call-with-output-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2562(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2562r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2562r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2562r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2566,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k2564 in call-with-output-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2566,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2571,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=lf[171],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2577,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=lf[172],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 860  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2576 in k2564 in call-with-output-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2577(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2577r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2577r(t0,t1,t2);}}

static void C_ccall f_2577r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2581,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 863  close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k2579 in a2576 in k2564 in call-with-output-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2570 in k2564 in call-with-output-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2571,2,t0,t1);}
/* posixunix.scm: 861  proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* call-with-input-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2538(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2538r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2538r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2538r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2542,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k2540 in call-with-input-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2542,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2547,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=lf[167],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2553,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=lf[168],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 852  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2552 in k2540 in call-with-input-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2553r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2553r(t0,t1,t2);}}

static void C_ccall f_2553r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2557,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 855  close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k2555 in a2552 in k2540 in call-with-input-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2557(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2546 in k2540 in call-with-input-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2547,2,t0,t1);}
/* posixunix.scm: 853  proc */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* close-input-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2522(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2522,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2526,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 839  ##sys#check-port */
t4=*((C_word*)lf[163]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,lf[160]);}

/* k2524 in close-input-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2526,2,t0,t1);}
t2=(C_word)close_pipe(((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2529,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm: 841  posix-error */
t5=lf[3];
f_1425(6,t5,t3,lf[51],lf[161],lf[162],((C_word*)t0)[3]);}
else{
t5=t3;
f_2529(2,t5,C_SCHEME_UNDEFINED);}}

/* k2527 in k2524 in close-input-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* open-output-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2486(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_2486r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2486r(t0,t1,t2,t3);}}

static void C_ccall f_2486r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(C_word)C_i_check_string_2(t2,lf[158]);
t5=f_2417(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2500,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_eqp(t5,lf[146]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2507,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 834  ##sys#make-c-string */
t9=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}
else{
t8=(C_word)C_eqp(t5,lf[156]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2517,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 835  ##sys#make-c-string */
t10=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
/* posixunix.scm: 836  badmode */
f_2429(t6,t5);}}}

/* k2515 in open-output-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2517,2,t0,t1);}
t2=((C_word*)t0)[2];
f_2500(2,t2,(C_word)open_binary_output_pipe(&a,1,t1));}

/* k2505 in open-output-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2507,2,t0,t1);}
t2=((C_word*)t0)[2];
f_2500(2,t2,(C_word)open_text_output_pipe(&a,1,t1));}

/* k2498 in open-output-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 830  check */
f_2435(((C_word*)t0)[3],lf[158],((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* open-input-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2450(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_2450r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2450r(t0,t1,t2,t3);}}

static void C_ccall f_2450r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(C_word)C_i_check_string_2(t2,lf[155]);
t5=f_2417(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2464,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_eqp(t5,lf[146]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2471,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 823  ##sys#make-c-string */
t9=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}
else{
t8=(C_word)C_eqp(t5,lf[156]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2481,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 824  ##sys#make-c-string */
t10=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t2);}
else{
/* posixunix.scm: 825  badmode */
f_2429(t6,t5);}}}

/* k2479 in open-input-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2481,2,t0,t1);}
t2=((C_word*)t0)[2];
f_2464(2,t2,(C_word)open_binary_input_pipe(&a,1,t1));}

/* k2469 in open-input-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2471,2,t0,t1);}
t2=((C_word*)t0)[2];
f_2464(2,t2,(C_word)open_text_input_pipe(&a,1,t1));}

/* k2462 in open-input-pipe in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 819  check */
f_2435(((C_word*)t0)[3],lf[155],((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* check in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_2435(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2435,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_null_pointerp(t5))){
/* posixunix.scm: 811  posix-error */
t6=lf[3];
f_1425(6,t6,t1,lf[51],t2,lf[150],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2448,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 812  ##sys#make-port */
t7=*((C_word*)lf[151]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,t4,*((C_word*)lf[152]+1),lf[153],lf[115]);}}

/* k2446 in check in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* badmode in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_2429(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2429,NULL,2,t1,t2);}
/* posixunix.scm: 808  ##sys#error */
t3=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[148],t2);}

/* mode in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall f_2417(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_pairp(t1);
return((C_truep(t2)?(C_word)C_slot(t1,C_fix(0)):lf[146]));}

/* current-directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2374(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2374r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2374r(t0,t1,t2);}}

static void C_ccall f_2374r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2378,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_2378(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_2378(2,t5,(C_word)C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k2376 in current-directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2378,2,t0,t1);}
if(C_truep(t1)){
/* posixunix.scm: 792  change-directory */
t2=*((C_word*)lf[125]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2387,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 793  make-string */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_fix(256));}}

/* k2385 in k2376 in current-directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_curdir(t1);
if(C_truep(t2)){
/* posixunix.scm: 796  ##sys#substring */
t3=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}
else{
/* posixunix.scm: 797  posix-error */
t3=lf[3];
f_1425(5,t3,((C_word*)t0)[2],lf[51],lf[138],lf[144]);}}

/* directory? in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2351(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2351,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[141]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2358,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2372,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 785  ##sys#expand-home-path */
t6=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k2370 in directory? in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 785  ##sys#file-info */
t2=*((C_word*)lf[142]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2356 in directory? in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2358(C_word c,C_word t0,C_word t1){
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

/* directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2194(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr2r,(void*)f_2194r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2194r(t0,t1,t2);}}

static void C_ccall f_2194r(C_word t0,C_word t1,C_word t2){
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
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2196,a[2]=((C_word*)t0)[2],a[3]=lf[136],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2294,a[2]=t3,a[3]=lf[137],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2299,a[2]=t4,a[3]=lf[139],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-spec182207 */
t6=t5;
f_2299(t6,t1);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t7))){
/* def-show-dotfiles?183205 */
t8=t4;
f_2294(t8,t1,t6);}
else{
t8=(C_word)C_i_car(t7);
t9=(C_word)C_i_cdr(t7);
if(C_truep((C_word)C_i_nullp(t9))){
/* body180185 */
t10=t3;
f_2196(t10,t1,t6,t8);}
else{
/* ##sys#error */
t10=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,lf[0],t9);}}}}

/* def-spec182 in directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_2299(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2299,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2307,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 758  current-directory */
t3=*((C_word*)lf[138]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2305 in def-spec182 in directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* def-show-dotfiles?183205 */
t2=((C_word*)t0)[3];
f_2294(t2,((C_word*)t0)[2],t1);}

/* def-show-dotfiles?183 in directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_2294(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2294,NULL,3,t0,t1,t2);}
/* body180185 */
t3=((C_word*)t0)[2];
f_2196(t3,t1,t2,C_SCHEME_FALSE);}

/* body180 in directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_2196(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2196,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,lf[132]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2203,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 760  make-string */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,C_fix(256));}

/* k2201 in body180 in directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2203,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2206,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 761  ##sys#make-pointer */
t3=*((C_word*)lf[135]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2204 in k2201 in body180 in directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2206,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 762  ##sys#make-pointer */
t3=*((C_word*)lf[135]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2207 in k2204 in k2201 in body180 in directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2209,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2293,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 763  ##sys#expand-home-path */
t4=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k2291 in k2207 in k2204 in k2201 in body180 in directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 763  ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2211 in k2207 in k2204 in k2201 in body180 in directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2213,2,t0,t1);}
t2=(C_word)C_opendir(t1,((C_word*)t0)[7]);
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[7]))){
/* posixunix.scm: 765  posix-error */
t3=lf[3];
f_1425(6,t3,((C_word*)t0)[6],lf[51],lf[132],lf[133],((C_word*)t0)[5]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2227,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=lf[134],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_2227(t6,((C_word*)t0)[6]);}}

/* loop in k2211 in k2207 in k2204 in k2201 in body180 in directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_2227(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2227,NULL,2,t0,t1);}
t2=(C_word)C_readdir(((C_word*)t0)[6],((C_word*)t0)[5]);
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[5]))){
t3=(C_word)C_closedir(((C_word*)t0)[6]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_foundfile(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2237,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 773  ##sys#substring */
t5=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[4],C_fix(0),t3);}}

/* k2235 in loop in k2211 in k2207 in k2204 in k2201 in body180 in directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2237,2,t0,t1);}
t2=(C_word)C_i_string_ref(t1,C_fix(0));
t3=(C_word)C_fixnum_greaterp(((C_word*)t0)[5],C_fix(1));
t4=(C_truep(t3)?(C_word)C_i_string_ref(t1,C_fix(1)):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2249,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(t2,C_make_character(46));
if(C_truep(t6)){
t7=(C_word)C_i_not(t4);
if(C_truep(t7)){
t8=t5;
f_2249(t8,t7);}
else{
t8=(C_word)C_eqp(t4,C_make_character(46));
t9=(C_truep(t8)?(C_word)C_eqp(((C_word*)t0)[5],C_fix(2)):C_SCHEME_FALSE);
t10=t5;
f_2249(t10,(C_truep(t9)?t9:(C_word)C_i_not(((C_word*)t0)[2])));}}
else{
t7=t5;
f_2249(t7,C_SCHEME_FALSE);}}

/* k2247 in k2235 in loop in k2211 in k2207 in k2204 in k2201 in body180 in directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_2249(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2249,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posixunix.scm: 780  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2227(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2259,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 781  loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2227(t3,t2);}}

/* k2257 in k2247 in k2235 in loop in k2211 in k2207 in k2204 in k2201 in body180 in directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2259,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* delete-directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2170(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2170,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[128]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2188,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2192,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 751  ##sys#expand-home-path */
t6=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k2190 in delete-directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 751  ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2186 in delete-directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_rmdir(t1);
if(C_truep((C_word)C_i_zerop(t2))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 752  posix-error */
t3=lf[3];
f_1425(6,t3,((C_word*)t0)[3],lf[51],lf[128],lf[129],((C_word*)t0)[2]);}}

/* change-directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2146(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2146,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[125]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2164,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2168,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 745  ##sys#expand-home-path */
t6=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k2166 in change-directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 745  ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2162 in change-directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_chdir(t1);
if(C_truep((C_word)C_i_zerop(t2))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 746  posix-error */
t3=lf[3];
f_1425(6,t3,((C_word*)t0)[3],lf[51],lf[125],lf[126],((C_word*)t0)[2]);}}

/* create-directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2122(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2122,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[122]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2140,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2144,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 739  ##sys#expand-home-path */
t6=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k2142 in create-directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 739  ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2138 in create-directory in k2118 in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_mkdir(t1);
if(C_truep((C_word)C_i_zerop(t2))){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 740  posix-error */
t3=lf[3];
f_1425(6,t3,((C_word*)t0)[3],lf[51],lf[122],lf[123],((C_word*)t0)[2]);}}

/* set-file-position! in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2060(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2060r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2060r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2060r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t7=(C_word)C_i_check_exact_2(t3,lf[113]);
t8=(C_word)C_i_check_exact_2(t6,lf[113]);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2073,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
/* posixunix.scm: 711  ##sys#signal-hook */
t10=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t10+1)))(7,t10,t9,lf[118],lf[113],lf[119],t3,t2);}
else{
t10=t9;
f_2073(2,t10,C_SCHEME_UNDEFINED);}}

/* k2071 in set-file-position! in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2073,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2079,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2085,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 712  port? */
t4=*((C_word*)lf[117]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k2083 in k2071 in set-file-position! in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2085(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(7));
t3=(C_word)C_eqp(t2,lf[115]);
t4=((C_word*)t0)[4];
f_2079(2,t4,(C_truep(t3)?(C_word)C_fseek(((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2]):C_SCHEME_FALSE));}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[5]))){
t2=((C_word*)t0)[4];
f_2079(2,t2,(C_word)C_lseek(((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2]));}
else{
/* posixunix.scm: 716  ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[66],lf[113],lf[116],((C_word*)t0)[5]);}}}

/* k2077 in k2071 in set-file-position! in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 717  posix-error */
t2=lf[3];
f_1425(7,t2,((C_word*)t0)[4],lf[51],lf[113],lf[114],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* symbolic-link? in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2051(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2051,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[111]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2058,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 703  ##sys#stat */
f_1937(t4,t2,C_SCHEME_TRUE,lf[111]);}

/* k2056 in symbolic-link? in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_islink));}

/* regular-file? in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2042(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2042,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[109]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2049,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 698  ##sys#stat */
f_1937(t4,t2,C_SCHEME_TRUE,lf[109]);}

/* k2047 in regular-file? in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_isreg));}

/* file-permissions in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2036(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2036,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2040,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 694  ##sys#stat */
f_1937(t3,t2,C_SCHEME_FALSE,lf[107]);}

/* k2038 in file-permissions in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode));}

/* file-owner in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2030(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2030,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2034,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 693  ##sys#stat */
f_1937(t3,t2,C_SCHEME_FALSE,lf[105]);}

/* k2032 in file-owner in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid));}

/* file-change-time in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2024(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2024,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2028,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 692  ##sys#stat */
f_1937(t3,t2,C_SCHEME_FALSE,lf[103]);}

/* k2026 in file-change-time in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2028,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_ctime));}

/* file-access-time in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2018(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2018,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2022,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 691  ##sys#stat */
f_1937(t3,t2,C_SCHEME_FALSE,lf[101]);}

/* k2020 in file-access-time in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2022,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_atime));}

/* file-modification-time in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2012(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2012,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2016,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 690  ##sys#stat */
f_1937(t3,t2,C_SCHEME_FALSE,lf[99]);}

/* k2014 in file-modification-time in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2016,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_mtime));}

/* file-size in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2006(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2006,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2010,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 689  ##sys#stat */
f_1937(t3,t2,C_SCHEME_FALSE,lf[97]);}

/* k2008 in file-size in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_2010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_size));}

/* file-stat in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1974(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_1974r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1974r(t0,t1,t2,t3);}}

static void C_ccall f_1974r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1978,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1985,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t6=t5;
f_1985(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_1985(2,t7,(C_word)C_i_car(t3));}
else{
/* posixunix.scm: 682  ##sys#error */
t7=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t3);}}}

/* k1983 in file-stat in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 682  ##sys#stat */
f_1937(((C_word*)t0)[3],((C_word*)t0)[2],t1,lf[95]);}

/* k1976 in file-stat in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1978,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blksize),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev)));}

/* ##sys#stat in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_1937(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1937,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1941,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t6=t5;
f_1941(2,t6,(C_word)C_fstat(t2));}
else{
if(C_truep((C_word)C_i_stringp(t2))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1962,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1969,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 669  ##sys#expand-home-path */
t8=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
/* posixunix.scm: 677  ##sys#signal-hook */
t6=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[66],lf[93],t2);}}}

/* k1967 in ##sys#stat in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 669  ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1960 in ##sys#stat in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_1941(2,t2,(C_truep(((C_word*)t0)[2])?(C_word)C_lstat(t1):(C_word)C_stat(t1)));}

/* k1939 in ##sys#stat in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 679  posix-error */
t2=lf[3];
f_1425(6,t2,((C_word*)t0)[4],lf[51],((C_word*)t0)[3],lf[92],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* file-select in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1745(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1745r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1745r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1745r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t16;
C_word *a=C_alloc(16);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(C_word)C_notvemptyp(t4);
t8=(C_truep(t7)?(C_word)C_i_vector_ref(t4,C_fix(0)):C_SCHEME_FALSE);
t9=f_1719(C_fix(0));
t10=f_1719(C_fix(1));
t11=(C_word)C_i_not(t2);
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1761,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t1,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t11)){
t13=t12;
f_1761(2,t13,t11);}
else{
if(C_truep((C_word)C_fixnump(t2))){
t13=C_set_block_item(t6,0,t2);
/* posixunix.scm: 598  fd_set */
t14=t12;
f_1761(2,t14,f_1725(C_fix(0),t2));}
else{
t13=(C_word)C_i_check_list_2(t2,lf[80]);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1918,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=lf[86],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t15=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t12,t14,t2);}}}

/* a1917 in file-select in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1918(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1918,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[80]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,(C_word)C_i_fixnum_max(((C_word*)((C_word*)t0)[3])[1],t2));
/* posixunix.scm: 605  fd_set */
t5=t1;
((C_proc2)C_retrieve_proc(t5))(2,t5,f_1725(C_fix(0),t2));}

/* k1759 in file-select in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1761,2,t0,t1);}
t2=(C_word)C_i_not(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1767,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_1767(2,t4,t2);}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[8]))){
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)t0)[8]);
/* posixunix.scm: 610  fd_set */
t5=t3;
f_1767(2,t5,f_1725(C_fix(1),((C_word*)t0)[8]));}
else{
t4=(C_word)C_i_check_list_2(((C_word*)t0)[8],lf[80]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1892,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=lf[85],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t6=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t5,((C_word*)t0)[8]);}}}

/* a1891 in k1759 in file-select in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1892(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1892,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[80]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,(C_word)C_i_fixnum_max(((C_word*)((C_word*)t0)[3])[1],t2));
/* posixunix.scm: 617  fd_set */
t5=t1;
((C_proc2)C_retrieve_proc(t5))(2,t5,f_1725(C_fix(1),t2));}

/* k1765 in k1759 in file-select in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1767,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1770,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(C_word)C_i_check_exact_2(((C_word*)t0)[3],lf[80]);
t4=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t5=t2;
f_1770(t5,(C_word)C_C_select_t(t4,((C_word*)t0)[3]));}
else{
t3=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=t2;
f_1770(t4,(C_word)C_C_select(t3));}}

/* k1768 in k1765 in k1759 in file-select in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_1770(C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1770,NULL,2,t0,t1);}
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 624  posix-error */
t2=lf[3];
f_1425(7,t2,((C_word*)t0)[5],lf[51],lf[80],lf[81],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t2=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=(C_word)C_i_pairp(((C_word*)t0)[4]);
t4=(C_truep(t3)?C_SCHEME_END_OF_LIST:C_SCHEME_FALSE);
t5=(C_word)C_i_pairp(((C_word*)t0)[3]);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_SCHEME_FALSE);
/* posixunix.scm: 625  values */
C_values(4,0,((C_word*)t0)[5],t4,t6);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1809,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep((C_word)C_fixnump(((C_word*)t0)[4]))){
/* posixunix.scm: 630  fd_test */
t4=t3;
f_1809(t4,f_1735(C_fix(0),((C_word*)t0)[4]));}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1850,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1852,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=lf[84],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t8=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,((C_word*)t0)[4]);}}
else{
t4=t3;
f_1809(t4,C_SCHEME_FALSE);}}}}

/* a1851 in k1768 in k1765 in k1759 in file-select in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1852(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1852,3,t0,t1,t2);}
t3=f_1735(C_fix(0),t2);
if(C_truep(t3)){
t4=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k1848 in k1768 in k1765 in k1759 in file-select in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_1809(t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k1807 in k1768 in k1765 in k1759 in file-select in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_1809(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1809,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1813,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep((C_word)C_fixnump(((C_word*)t0)[3]))){
/* posixunix.scm: 636  fd_test */
t3=t2;
f_1813(t3,f_1735(C_fix(1),((C_word*)t0)[3]));}
else{
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1825,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1827,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=lf[82],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t7=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,((C_word*)t0)[3]);}}
else{
t3=t2;
f_1813(t3,C_SCHEME_FALSE);}}

/* a1826 in k1807 in k1768 in k1765 in k1759 in file-select in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1827(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1827,3,t0,t1,t2);}
t3=f_1735(C_fix(1),t2);
if(C_truep(t3)){
t4=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k1823 in k1807 in k1768 in k1765 in k1759 in file-select in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_1813(t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k1811 in k1807 in k1768 in k1765 in k1759 in file-select in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_fcall f_1813(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 627  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* fd_test in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall f_1735(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_check;
t3=(C_word)C_i_foreign_fixnum_argumentp(t1);
t4=(C_word)C_i_foreign_fixnum_argumentp(t2);
return((C_word)stub92(C_SCHEME_UNDEFINED,t3,t4));}

/* fd_set in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall f_1725(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_check;
t3=(C_word)C_i_foreign_fixnum_argumentp(t1);
t4=(C_word)C_i_foreign_fixnum_argumentp(t2);
return((C_word)stub86(C_SCHEME_UNDEFINED,t3,t4));}

/* fd_zero in k1411 in k1408 in k1405 in k1402 in k1399 */
static C_word C_fcall f_1719(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_foreign_fixnum_argumentp(t1);
return((C_word)stub81(C_SCHEME_UNDEFINED,t2));}

/* file-mkstemp in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1687(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1687,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[73]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1694,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 576  ##sys#make-c-string */
t5=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1692 in file-mkstemp in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1694,2,t0,t1);}
t2=(C_word)C_mkstemp(t1);
t3=(C_word)C_block_size(t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1700,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t5)){
/* posixunix.scm: 580  posix-error */
t6=lf[3];
f_1425(6,t6,t4,lf[51],lf[73],lf[75],((C_word*)t0)[2]);}
else{
t6=t4;
f_1700(2,t6,C_SCHEME_UNDEFINED);}}

/* k1698 in k1692 in file-mkstemp in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1700,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1707,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm: 581  ##sys#substring */
t4=*((C_word*)lf[74]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[2],C_fix(0),t3);}

/* k1705 in k1698 in k1692 in file-mkstemp in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1707(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 581  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* file-write in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1648(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1648r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1648r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1648r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t5=(C_word)C_i_check_exact_2(t2,lf[69]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1655,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t7=(C_truep((C_word)C_blockp(t3))?(C_word)C_byteblockp(t3):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=t6;
f_1655(2,t8,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 562  ##sys#signal-hook */
t8=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t6,lf[66],lf[69],lf[71],t3);}}

/* k1653 in file-write in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1655,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[5]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[5],C_fix(0)):(C_word)C_block_size(((C_word*)t0)[4]));
t4=(C_word)C_i_check_exact_2(t3,lf[69]);
t5=(C_word)C_write(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1664,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
/* posixunix.scm: 567  posix-error */
t8=lf[3];
f_1425(7,t8,t6,lf[51],lf[69],lf[70],((C_word*)t0)[3],t3);}
else{
t8=t6;
f_1664(2,t8,C_SCHEME_UNDEFINED);}}

/* k1662 in k1653 in file-write in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-read in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1606(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1606r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1606r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1606r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(C_word)C_i_check_exact_2(t2,lf[64]);
t6=(C_word)C_i_check_exact_2(t3,lf[64]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1616,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_notvemptyp(t4))){
t8=t7;
f_1616(2,t8,(C_word)C_i_vector_ref(t4,C_fix(0)));}
else{
/* posixunix.scm: 550  make-string */
t8=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}}

/* k1614 in file-read in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1616,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1619,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(C_truep((C_word)C_blockp(t1))?(C_word)C_byteblockp(t1):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t2;
f_1619(2,t4,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 552  ##sys#signal-hook */
t4=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,lf[66],lf[64],lf[67],t1);}}

/* k1617 in k1614 in file-read in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1619,2,t0,t1);}
t2=(C_word)C_read(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1622,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm: 555  posix-error */
t5=lf[3];
f_1425(7,t5,t3,lf[51],lf[64],lf[65],((C_word*)t0)[5],((C_word*)t0)[3]);}
else{
t5=t3;
f_1622(2,t5,C_SCHEME_UNDEFINED);}}

/* k1620 in k1617 in k1614 in file-read in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1622,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* file-close in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1591(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1591,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[60]);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_close(t2),C_fix(0)))){
/* posixunix.scm: 543  posix-error */
t4=lf[3];
f_1425(6,t4,t1,lf[51],lf[60],lf[61],t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* file-open in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1553(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1553r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1553r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1553r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t7=(C_word)C_i_check_string_2(t2,lf[55]);
t8=(C_word)C_i_check_exact_2(t3,lf[55]);
t9=(C_word)C_i_check_exact_2(t6,lf[55]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1570,a[2]=t2,a[3]=t1,a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1583,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 534  ##sys#expand-home-path */
t12=*((C_word*)lf[58]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t2);}

/* k1581 in file-open in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 534  ##sys#make-c-string */
t2=*((C_word*)lf[57]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1568 in file-open in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1570,2,t0,t1);}
t2=(C_word)C_open(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1573,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm: 536  posix-error */
t5=lf[3];
f_1425(8,t5,t3,lf[51],lf[55],lf[56],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t5=t3;
f_1573(2,t5,C_SCHEME_UNDEFINED);}}

/* k1571 in k1568 in file-open in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-control in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1507(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_1507r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1507r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1507r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1511,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
t6=t5;
f_1511(2,t6,C_fix(0));}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_1511(2,t7,(C_word)C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k1509 in file-control in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1511(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[4],lf[50]);
t3=(C_word)C_i_check_exact_2(((C_word*)t0)[3],lf[50]);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
t6=(C_word)C_i_foreign_fixnum_argumentp(t4);
t7=(C_word)C_i_foreign_fixnum_argumentp(t5);
t8=(C_word)C_i_foreign_integer_argumentp(t1);
t9=(C_word)stub24(C_SCHEME_UNDEFINED,t6,t7,t8);
t10=(C_word)C_eqp(t9,C_fix(-1));
if(C_truep(t10)){
/* posixunix.scm: 524  posix-error */
t11=lf[3];
f_1425(7,t11,((C_word*)t0)[2],lf[51],lf[50],lf[52],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t9);}}

/* ##sys#file-select-one in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1450(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1450,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub17(C_SCHEME_UNDEFINED,t3));}

/* ##sys#file-nonblocking! in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1443(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1443,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub13(C_SCHEME_UNDEFINED,t3));}

/* posix-error in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1425(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_1425r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_1425r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_1425r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1429,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 411  ##sys#update-errno */
t7=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k1427 in posix-error in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1429,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1436,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1440,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_word)C_i_foreign_fixnum_argumentp(t1);
t6=(C_word)stub3(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t3,t6,C_fix(0));}

/* k1438 in k1427 in posix-error in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 412  string-append */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[5],t1);}

/* k1434 in k1427 in posix-error in k1411 in k1408 in k1405 in k1402 in k1399 */
static void C_ccall f_1436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(7,0,((C_word*)t0)[5],*((C_word*)lf[4]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[495] = {
{"toplevelposixunix.scm",(void*)C_posix_toplevel},
{"f_1401posixunix.scm",(void*)f_1401},
{"f_1404posixunix.scm",(void*)f_1404},
{"f_1407posixunix.scm",(void*)f_1407},
{"f_1410posixunix.scm",(void*)f_1410},
{"f_1413posixunix.scm",(void*)f_1413},
{"f_6234posixunix.scm",(void*)f_6234},
{"f_6250posixunix.scm",(void*)f_6250},
{"f_6238posixunix.scm",(void*)f_6238},
{"f_6241posixunix.scm",(void*)f_6241},
{"f_2120posixunix.scm",(void*)f_2120},
{"f_2671posixunix.scm",(void*)f_2671},
{"f_6228posixunix.scm",(void*)f_6228},
{"f_2806posixunix.scm",(void*)f_2806},
{"f_6225posixunix.scm",(void*)f_6225},
{"f_3248posixunix.scm",(void*)f_3248},
{"f_6222posixunix.scm",(void*)f_6222},
{"f_3267posixunix.scm",(void*)f_3267},
{"f_6204posixunix.scm",(void*)f_6204},
{"f_6217posixunix.scm",(void*)f_6217},
{"f_6211posixunix.scm",(void*)f_6211},
{"f_3349posixunix.scm",(void*)f_3349},
{"f_3388posixunix.scm",(void*)f_3388},
{"f_6181posixunix.scm",(void*)f_6181},
{"f_6173posixunix.scm",(void*)f_6173},
{"f_5942posixunix.scm",(void*)f_5942},
{"f_6099posixunix.scm",(void*)f_6099},
{"f_6105posixunix.scm",(void*)f_6105},
{"f_6094posixunix.scm",(void*)f_6094},
{"f_6089posixunix.scm",(void*)f_6089},
{"f_5944posixunix.scm",(void*)f_5944},
{"f_6076posixunix.scm",(void*)f_6076},
{"f_6084posixunix.scm",(void*)f_6084},
{"f_5951posixunix.scm",(void*)f_5951},
{"f_6064posixunix.scm",(void*)f_6064},
{"f_5961posixunix.scm",(void*)f_5961},
{"f_5963posixunix.scm",(void*)f_5963},
{"f_5982posixunix.scm",(void*)f_5982},
{"f_6050posixunix.scm",(void*)f_6050},
{"f_6057posixunix.scm",(void*)f_6057},
{"f_6044posixunix.scm",(void*)f_6044},
{"f_5997posixunix.scm",(void*)f_5997},
{"f_6031posixunix.scm",(void*)f_6031},
{"f_6017posixunix.scm",(void*)f_6017},
{"f_6029posixunix.scm",(void*)f_6029},
{"f_6025posixunix.scm",(void*)f_6025},
{"f_6009posixunix.scm",(void*)f_6009},
{"f_6007posixunix.scm",(void*)f_6007},
{"f_6068posixunix.scm",(void*)f_6068},
{"f_5882posixunix.scm",(void*)f_5882},
{"f_5894posixunix.scm",(void*)f_5894},
{"f_5889posixunix.scm",(void*)f_5889},
{"f_5884posixunix.scm",(void*)f_5884},
{"f_5822posixunix.scm",(void*)f_5822},
{"f_5834posixunix.scm",(void*)f_5834},
{"f_5829posixunix.scm",(void*)f_5829},
{"f_5824posixunix.scm",(void*)f_5824},
{"f_5757posixunix.scm",(void*)f_5757},
{"f_5816posixunix.scm",(void*)f_5816},
{"f_5820posixunix.scm",(void*)f_5820},
{"f_5808posixunix.scm",(void*)f_5808},
{"f_5764posixunix.scm",(void*)f_5764},
{"f_5796posixunix.scm",(void*)f_5796},
{"f_5767posixunix.scm",(void*)f_5767},
{"f_5778posixunix.scm",(void*)f_5778},
{"f_5772posixunix.scm",(void*)f_5772},
{"f_5701posixunix.scm",(void*)f_5701},
{"f_5713posixunix.scm",(void*)f_5713},
{"f_5744posixunix.scm",(void*)f_5744},
{"f_5724posixunix.scm",(void*)f_5724},
{"f_5740posixunix.scm",(void*)f_5740},
{"f_5728posixunix.scm",(void*)f_5728},
{"f_5736posixunix.scm",(void*)f_5736},
{"f_5732posixunix.scm",(void*)f_5732},
{"f_5707posixunix.scm",(void*)f_5707},
{"f_5690posixunix.scm",(void*)f_5690},
{"f_5694posixunix.scm",(void*)f_5694},
{"f_5679posixunix.scm",(void*)f_5679},
{"f_5683posixunix.scm",(void*)f_5683},
{"f_5618posixunix.scm",(void*)f_5618},
{"f_5622posixunix.scm",(void*)f_5622},
{"f_5625posixunix.scm",(void*)f_5625},
{"f_5628posixunix.scm",(void*)f_5628},
{"f_5657posixunix.scm",(void*)f_5657},
{"f_5661posixunix.scm",(void*)f_5661},
{"f_5664posixunix.scm",(void*)f_5664},
{"f_5667posixunix.scm",(void*)f_5667},
{"f_5655posixunix.scm",(void*)f_5655},
{"f_5629posixunix.scm",(void*)f_5629},
{"f_5601posixunix.scm",(void*)f_5601},
{"f_5614posixunix.scm",(void*)f_5614},
{"f_5523posixunix.scm",(void*)f_5523},
{"f_5584posixunix.scm",(void*)f_5584},
{"f_5597posixunix.scm",(void*)f_5597},
{"f_5600posixunix.scm",(void*)f_5600},
{"f_5564posixunix.scm",(void*)f_5564},
{"f_5579posixunix.scm",(void*)f_5579},
{"f_5573posixunix.scm",(void*)f_5573},
{"f_5527posixunix.scm",(void*)f_5527},
{"f_5529posixunix.scm",(void*)f_5529},
{"f_5550posixunix.scm",(void*)f_5550},
{"f_5544posixunix.scm",(void*)f_5544},
{"f_5471posixunix.scm",(void*)f_5471},
{"f_5478posixunix.scm",(void*)f_5478},
{"f_5497posixunix.scm",(void*)f_5497},
{"f_5501posixunix.scm",(void*)f_5501},
{"f_5465posixunix.scm",(void*)f_5465},
{"f_5456posixunix.scm",(void*)f_5456},
{"f_5460posixunix.scm",(void*)f_5460},
{"f_5429posixunix.scm",(void*)f_5429},
{"f_5422posixunix.scm",(void*)f_5422},
{"f_5419posixunix.scm",(void*)f_5419},
{"f_5416posixunix.scm",(void*)f_5416},
{"f_5338posixunix.scm",(void*)f_5338},
{"f_5374posixunix.scm",(void*)f_5374},
{"f_5368posixunix.scm",(void*)f_5368},
{"f_5321posixunix.scm",(void*)f_5321},
{"f_5142posixunix.scm",(void*)f_5142},
{"f_5273posixunix.scm",(void*)f_5273},
{"f_5268posixunix.scm",(void*)f_5268},
{"f_5144posixunix.scm",(void*)f_5144},
{"f_5154posixunix.scm",(void*)f_5154},
{"f_5162posixunix.scm",(void*)f_5162},
{"f_5205posixunix.scm",(void*)f_5205},
{"f_5175posixunix.scm",(void*)f_5175},
{"f_5200posixunix.scm",(void*)f_5200},
{"f_5178posixunix.scm",(void*)f_5178},
{"f_5123posixunix.scm",(void*)f_5123},
{"f_5104posixunix.scm",(void*)f_5104},
{"f_5062posixunix.scm",(void*)f_5062},
{"f_5084posixunix.scm",(void*)f_5084},
{"f_5088posixunix.scm",(void*)f_5088},
{"f_4956posixunix.scm",(void*)f_4956},
{"f_4962posixunix.scm",(void*)f_4962},
{"f_4983posixunix.scm",(void*)f_4983},
{"f_5054posixunix.scm",(void*)f_5054},
{"f_4987posixunix.scm",(void*)f_4987},
{"f_4994posixunix.scm",(void*)f_4994},
{"f_4996posixunix.scm",(void*)f_4996},
{"f_5013posixunix.scm",(void*)f_5013},
{"f_5023posixunix.scm",(void*)f_5023},
{"f_5027posixunix.scm",(void*)f_5027},
{"f_4977posixunix.scm",(void*)f_4977},
{"f_4944posixunix.scm",(void*)f_4944},
{"f_4948posixunix.scm",(void*)f_4948},
{"f_4951posixunix.scm",(void*)f_4951},
{"f_4914posixunix.scm",(void*)f_4914},
{"f_4918posixunix.scm",(void*)f_4918},
{"f_4921posixunix.scm",(void*)f_4921},
{"f_4885posixunix.scm",(void*)f_4885},
{"f_4889posixunix.scm",(void*)f_4889},
{"f_4892posixunix.scm",(void*)f_4892},
{"f_4826posixunix.scm",(void*)f_4826},
{"f_4830posixunix.scm",(void*)f_4830},
{"f_4836posixunix.scm",(void*)f_4836},
{"f_4819posixunix.scm",(void*)f_4819},
{"f_4800posixunix.scm",(void*)f_4800},
{"f_4804posixunix.scm",(void*)f_4804},
{"f_4788posixunix.scm",(void*)f_4788},
{"f_4760posixunix.scm",(void*)f_4760},
{"f_4767posixunix.scm",(void*)f_4767},
{"f_4732posixunix.scm",(void*)f_4732},
{"f_4739posixunix.scm",(void*)f_4739},
{"f_4704posixunix.scm",(void*)f_4704},
{"f_4711posixunix.scm",(void*)f_4711},
{"f_4714posixunix.scm",(void*)f_4714},
{"f_4717posixunix.scm",(void*)f_4717},
{"f_4687posixunix.scm",(void*)f_4687},
{"f_4691posixunix.scm",(void*)f_4691},
{"f_4694posixunix.scm",(void*)f_4694},
{"f_4668posixunix.scm",(void*)f_4668},
{"f_4659posixunix.scm",(void*)f_4659},
{"f_4653posixunix.scm",(void*)f_4653},
{"f_4644posixunix.scm",(void*)f_4644},
{"f_4609posixunix.scm",(void*)f_4609},
{"f_4547posixunix.scm",(void*)f_4547},
{"f_4551posixunix.scm",(void*)f_4551},
{"f_4557posixunix.scm",(void*)f_4557},
{"f_4576posixunix.scm",(void*)f_4576},
{"f_4563posixunix.scm",(void*)f_4563},
{"f_4444posixunix.scm",(void*)f_4444},
{"f_4450posixunix.scm",(void*)f_4450},
{"f_4454posixunix.scm",(void*)f_4454},
{"f_4462posixunix.scm",(void*)f_4462},
{"f_4488posixunix.scm",(void*)f_4488},
{"f_4492posixunix.scm",(void*)f_4492},
{"f_4480posixunix.scm",(void*)f_4480},
{"f_4424posixunix.scm",(void*)f_4424},
{"f_4432posixunix.scm",(void*)f_4432},
{"f_4407posixunix.scm",(void*)f_4407},
{"f_4418posixunix.scm",(void*)f_4418},
{"f_4422posixunix.scm",(void*)f_4422},
{"f_4381posixunix.scm",(void*)f_4381},
{"f_4405posixunix.scm",(void*)f_4405},
{"f_4388posixunix.scm",(void*)f_4388},
{"f_4338posixunix.scm",(void*)f_4338},
{"f_4345posixunix.scm",(void*)f_4345},
{"f_4366posixunix.scm",(void*)f_4366},
{"f_4362posixunix.scm",(void*)f_4362},
{"f_4310posixunix.scm",(void*)f_4310},
{"f_4288posixunix.scm",(void*)f_4288},
{"f_4292posixunix.scm",(void*)f_4292},
{"f_4273posixunix.scm",(void*)f_4273},
{"f_4277posixunix.scm",(void*)f_4277},
{"f_4258posixunix.scm",(void*)f_4258},
{"f_4262posixunix.scm",(void*)f_4262},
{"f_4240posixunix.scm",(void*)f_4240},
{"f_4166posixunix.scm",(void*)f_4166},
{"f_4188posixunix.scm",(void*)f_4188},
{"f_4194posixunix.scm",(void*)f_4194},
{"f_4127posixunix.scm",(void*)f_4127},
{"f_4155posixunix.scm",(void*)f_4155},
{"f_4151posixunix.scm",(void*)f_4151},
{"f_4144posixunix.scm",(void*)f_4144},
{"f_3888posixunix.scm",(void*)f_3888},
{"f_4079posixunix.scm",(void*)f_4079},
{"f_4068posixunix.scm",(void*)f_4068},
{"f_4074posixunix.scm",(void*)f_4074},
{"f_3890posixunix.scm",(void*)f_3890},
{"f_3997posixunix.scm",(void*)f_3997},
{"f_3998posixunix.scm",(void*)f_3998},
{"f_4015posixunix.scm",(void*)f_4015},
{"f_4025posixunix.scm",(void*)f_4025},
{"f_3983posixunix.scm",(void*)f_3983},
{"f_3939posixunix.scm",(void*)f_3939},
{"f_3975posixunix.scm",(void*)f_3975},
{"f_3954posixunix.scm",(void*)f_3954},
{"f_3964posixunix.scm",(void*)f_3964},
{"f_3948posixunix.scm",(void*)f_3948},
{"f_3943posixunix.scm",(void*)f_3943},
{"f_3946posixunix.scm",(void*)f_3946},
{"f_3893posixunix.scm",(void*)f_3893},
{"f_3928posixunix.scm",(void*)f_3928},
{"f_3909posixunix.scm",(void*)f_3909},
{"f_3616posixunix.scm",(void*)f_3616},
{"f_3825posixunix.scm",(void*)f_3825},
{"f_3814posixunix.scm",(void*)f_3814},
{"f_3820posixunix.scm",(void*)f_3820},
{"f_3809posixunix.scm",(void*)f_3809},
{"f_3618posixunix.scm",(void*)f_3618},
{"f_3625posixunix.scm",(void*)f_3625},
{"f_3782posixunix.scm",(void*)f_3782},
{"f_3786posixunix.scm",(void*)f_3786},
{"f_3761posixunix.scm",(void*)f_3761},
{"f_3771posixunix.scm",(void*)f_3771},
{"f_3749posixunix.scm",(void*)f_3749},
{"f_3736posixunix.scm",(void*)f_3736},
{"f_3740posixunix.scm",(void*)f_3740},
{"f_3731posixunix.scm",(void*)f_3731},
{"f_3734posixunix.scm",(void*)f_3734},
{"f_3649posixunix.scm",(void*)f_3649},
{"f_3661posixunix.scm",(void*)f_3661},
{"f_3698posixunix.scm",(void*)f_3698},
{"f_3707posixunix.scm",(void*)f_3707},
{"f_3701posixunix.scm",(void*)f_3701},
{"f_3677posixunix.scm",(void*)f_3677},
{"f_3680posixunix.scm",(void*)f_3680},
{"f_3641posixunix.scm",(void*)f_3641},
{"f_3626posixunix.scm",(void*)f_3626},
{"f_3640posixunix.scm",(void*)f_3640},
{"f_3589posixunix.scm",(void*)f_3589},
{"f_3596posixunix.scm",(void*)f_3596},
{"f_3599posixunix.scm",(void*)f_3599},
{"f_3544posixunix.scm",(void*)f_3544},
{"f_3548posixunix.scm",(void*)f_3548},
{"f_3583posixunix.scm",(void*)f_3583},
{"f_3566posixunix.scm",(void*)f_3566},
{"f_3530posixunix.scm",(void*)f_3530},
{"f_3542posixunix.scm",(void*)f_3542},
{"f_3516posixunix.scm",(void*)f_3516},
{"f_3528posixunix.scm",(void*)f_3528},
{"f_3501posixunix.scm",(void*)f_3501},
{"f_3514posixunix.scm",(void*)f_3514},
{"f_3464posixunix.scm",(void*)f_3464},
{"f_3472posixunix.scm",(void*)f_3472},
{"f_3439posixunix.scm",(void*)f_3439},
{"f_3420posixunix.scm",(void*)f_3420},
{"f_3424posixunix.scm",(void*)f_3424},
{"f_3389posixunix.scm",(void*)f_3389},
{"f_3413posixunix.scm",(void*)f_3413},
{"f_3397posixunix.scm",(void*)f_3397},
{"f_3400posixunix.scm",(void*)f_3400},
{"f_3351posixunix.scm",(void*)f_3351},
{"f_3384posixunix.scm",(void*)f_3384},
{"f_3372posixunix.scm",(void*)f_3372},
{"f_3380posixunix.scm",(void*)f_3380},
{"f_3376posixunix.scm",(void*)f_3376},
{"f_3326posixunix.scm",(void*)f_3326},
{"f_3342posixunix.scm",(void*)f_3342},
{"f_3311posixunix.scm",(void*)f_3311},
{"f_3321posixunix.scm",(void*)f_3321},
{"f_3315posixunix.scm",(void*)f_3315},
{"f_3305posixunix.scm",(void*)f_3305},
{"f_3299posixunix.scm",(void*)f_3299},
{"f_3293posixunix.scm",(void*)f_3293},
{"f_3269posixunix.scm",(void*)f_3269},
{"f_3291posixunix.scm",(void*)f_3291},
{"f_3287posixunix.scm",(void*)f_3287},
{"f_3279posixunix.scm",(void*)f_3279},
{"f_3250posixunix.scm",(void*)f_3250},
{"f_3260posixunix.scm",(void*)f_3260},
{"f_3231posixunix.scm",(void*)f_3231},
{"f_3241posixunix.scm",(void*)f_3241},
{"f_3228posixunix.scm",(void*)f_3228},
{"f_3225posixunix.scm",(void*)f_3225},
{"f_3195posixunix.scm",(void*)f_3195},
{"f_3223posixunix.scm",(void*)f_3223},
{"f_3219posixunix.scm",(void*)f_3219},
{"f_3168posixunix.scm",(void*)f_3168},
{"f_3193posixunix.scm",(void*)f_3193},
{"f_3189posixunix.scm",(void*)f_3189},
{"f_3104posixunix.scm",(void*)f_3104},
{"f_3092posixunix.scm",(void*)f_3092},
{"f_3120posixunix.scm",(void*)f_3120},
{"f_3030posixunix.scm",(void*)f_3030},
{"f_3034posixunix.scm",(void*)f_3034},
{"f_3039posixunix.scm",(void*)f_3039},
{"f_3055posixunix.scm",(void*)f_3055},
{"f_2967posixunix.scm",(void*)f_2967},
{"f_3025posixunix.scm",(void*)f_3025},
{"f_2971posixunix.scm",(void*)f_2971},
{"f_2974posixunix.scm",(void*)f_2974},
{"f_3006posixunix.scm",(void*)f_3006},
{"f_2977posixunix.scm",(void*)f_2977},
{"f_2982posixunix.scm",(void*)f_2982},
{"f_2996posixunix.scm",(void*)f_2996},
{"f_2960posixunix.scm",(void*)f_2960},
{"f_2899posixunix.scm",(void*)f_2899},
{"f_2951posixunix.scm",(void*)f_2951},
{"f_2903posixunix.scm",(void*)f_2903},
{"f_2913posixunix.scm",(void*)f_2913},
{"f_2917posixunix.scm",(void*)f_2917},
{"f_2923posixunix.scm",(void*)f_2923},
{"f_2927posixunix.scm",(void*)f_2927},
{"f_2937posixunix.scm",(void*)f_2937},
{"f_2921posixunix.scm",(void*)f_2921},
{"f_2846posixunix.scm",(void*)f_2846},
{"f_2886posixunix.scm",(void*)f_2886},
{"f_2850posixunix.scm",(void*)f_2850},
{"f_2860posixunix.scm",(void*)f_2860},
{"f_2864posixunix.scm",(void*)f_2864},
{"f_2868posixunix.scm",(void*)f_2868},
{"f_2872posixunix.scm",(void*)f_2872},
{"f_2876posixunix.scm",(void*)f_2876},
{"f_2808posixunix.scm",(void*)f_2808},
{"f_2841posixunix.scm",(void*)f_2841},
{"f_2812posixunix.scm",(void*)f_2812},
{"f_2819posixunix.scm",(void*)f_2819},
{"f_2823posixunix.scm",(void*)f_2823},
{"f_2827posixunix.scm",(void*)f_2827},
{"f_2831posixunix.scm",(void*)f_2831},
{"f_2835posixunix.scm",(void*)f_2835},
{"f_2790posixunix.scm",(void*)f_2790},
{"f_2775posixunix.scm",(void*)f_2775},
{"f_2769posixunix.scm",(void*)f_2769},
{"f_2737posixunix.scm",(void*)f_2737},
{"f_2743posixunix.scm",(void*)f_2743},
{"f_2713posixunix.scm",(void*)f_2713},
{"f_2731posixunix.scm",(void*)f_2731},
{"f_2720posixunix.scm",(void*)f_2720},
{"f_2695posixunix.scm",(void*)f_2695},
{"f_2705posixunix.scm",(void*)f_2705},
{"f_2682posixunix.scm",(void*)f_2682},
{"f_2673posixunix.scm",(void*)f_2673},
{"f_2626posixunix.scm",(void*)f_2626},
{"f_2630posixunix.scm",(void*)f_2630},
{"f_2606posixunix.scm",(void*)f_2606},
{"f_2610posixunix.scm",(void*)f_2610},
{"f_2616posixunix.scm",(void*)f_2616},
{"f_2620posixunix.scm",(void*)f_2620},
{"f_2586posixunix.scm",(void*)f_2586},
{"f_2590posixunix.scm",(void*)f_2590},
{"f_2596posixunix.scm",(void*)f_2596},
{"f_2600posixunix.scm",(void*)f_2600},
{"f_2562posixunix.scm",(void*)f_2562},
{"f_2566posixunix.scm",(void*)f_2566},
{"f_2577posixunix.scm",(void*)f_2577},
{"f_2581posixunix.scm",(void*)f_2581},
{"f_2571posixunix.scm",(void*)f_2571},
{"f_2538posixunix.scm",(void*)f_2538},
{"f_2542posixunix.scm",(void*)f_2542},
{"f_2553posixunix.scm",(void*)f_2553},
{"f_2557posixunix.scm",(void*)f_2557},
{"f_2547posixunix.scm",(void*)f_2547},
{"f_2522posixunix.scm",(void*)f_2522},
{"f_2526posixunix.scm",(void*)f_2526},
{"f_2529posixunix.scm",(void*)f_2529},
{"f_2486posixunix.scm",(void*)f_2486},
{"f_2517posixunix.scm",(void*)f_2517},
{"f_2507posixunix.scm",(void*)f_2507},
{"f_2500posixunix.scm",(void*)f_2500},
{"f_2450posixunix.scm",(void*)f_2450},
{"f_2481posixunix.scm",(void*)f_2481},
{"f_2471posixunix.scm",(void*)f_2471},
{"f_2464posixunix.scm",(void*)f_2464},
{"f_2435posixunix.scm",(void*)f_2435},
{"f_2448posixunix.scm",(void*)f_2448},
{"f_2429posixunix.scm",(void*)f_2429},
{"f_2417posixunix.scm",(void*)f_2417},
{"f_2374posixunix.scm",(void*)f_2374},
{"f_2378posixunix.scm",(void*)f_2378},
{"f_2387posixunix.scm",(void*)f_2387},
{"f_2351posixunix.scm",(void*)f_2351},
{"f_2372posixunix.scm",(void*)f_2372},
{"f_2358posixunix.scm",(void*)f_2358},
{"f_2194posixunix.scm",(void*)f_2194},
{"f_2299posixunix.scm",(void*)f_2299},
{"f_2307posixunix.scm",(void*)f_2307},
{"f_2294posixunix.scm",(void*)f_2294},
{"f_2196posixunix.scm",(void*)f_2196},
{"f_2203posixunix.scm",(void*)f_2203},
{"f_2206posixunix.scm",(void*)f_2206},
{"f_2209posixunix.scm",(void*)f_2209},
{"f_2293posixunix.scm",(void*)f_2293},
{"f_2213posixunix.scm",(void*)f_2213},
{"f_2227posixunix.scm",(void*)f_2227},
{"f_2237posixunix.scm",(void*)f_2237},
{"f_2249posixunix.scm",(void*)f_2249},
{"f_2259posixunix.scm",(void*)f_2259},
{"f_2170posixunix.scm",(void*)f_2170},
{"f_2192posixunix.scm",(void*)f_2192},
{"f_2188posixunix.scm",(void*)f_2188},
{"f_2146posixunix.scm",(void*)f_2146},
{"f_2168posixunix.scm",(void*)f_2168},
{"f_2164posixunix.scm",(void*)f_2164},
{"f_2122posixunix.scm",(void*)f_2122},
{"f_2144posixunix.scm",(void*)f_2144},
{"f_2140posixunix.scm",(void*)f_2140},
{"f_2060posixunix.scm",(void*)f_2060},
{"f_2073posixunix.scm",(void*)f_2073},
{"f_2085posixunix.scm",(void*)f_2085},
{"f_2079posixunix.scm",(void*)f_2079},
{"f_2051posixunix.scm",(void*)f_2051},
{"f_2058posixunix.scm",(void*)f_2058},
{"f_2042posixunix.scm",(void*)f_2042},
{"f_2049posixunix.scm",(void*)f_2049},
{"f_2036posixunix.scm",(void*)f_2036},
{"f_2040posixunix.scm",(void*)f_2040},
{"f_2030posixunix.scm",(void*)f_2030},
{"f_2034posixunix.scm",(void*)f_2034},
{"f_2024posixunix.scm",(void*)f_2024},
{"f_2028posixunix.scm",(void*)f_2028},
{"f_2018posixunix.scm",(void*)f_2018},
{"f_2022posixunix.scm",(void*)f_2022},
{"f_2012posixunix.scm",(void*)f_2012},
{"f_2016posixunix.scm",(void*)f_2016},
{"f_2006posixunix.scm",(void*)f_2006},
{"f_2010posixunix.scm",(void*)f_2010},
{"f_1974posixunix.scm",(void*)f_1974},
{"f_1985posixunix.scm",(void*)f_1985},
{"f_1978posixunix.scm",(void*)f_1978},
{"f_1937posixunix.scm",(void*)f_1937},
{"f_1969posixunix.scm",(void*)f_1969},
{"f_1962posixunix.scm",(void*)f_1962},
{"f_1941posixunix.scm",(void*)f_1941},
{"f_1745posixunix.scm",(void*)f_1745},
{"f_1918posixunix.scm",(void*)f_1918},
{"f_1761posixunix.scm",(void*)f_1761},
{"f_1892posixunix.scm",(void*)f_1892},
{"f_1767posixunix.scm",(void*)f_1767},
{"f_1770posixunix.scm",(void*)f_1770},
{"f_1852posixunix.scm",(void*)f_1852},
{"f_1850posixunix.scm",(void*)f_1850},
{"f_1809posixunix.scm",(void*)f_1809},
{"f_1827posixunix.scm",(void*)f_1827},
{"f_1825posixunix.scm",(void*)f_1825},
{"f_1813posixunix.scm",(void*)f_1813},
{"f_1735posixunix.scm",(void*)f_1735},
{"f_1725posixunix.scm",(void*)f_1725},
{"f_1719posixunix.scm",(void*)f_1719},
{"f_1687posixunix.scm",(void*)f_1687},
{"f_1694posixunix.scm",(void*)f_1694},
{"f_1700posixunix.scm",(void*)f_1700},
{"f_1707posixunix.scm",(void*)f_1707},
{"f_1648posixunix.scm",(void*)f_1648},
{"f_1655posixunix.scm",(void*)f_1655},
{"f_1664posixunix.scm",(void*)f_1664},
{"f_1606posixunix.scm",(void*)f_1606},
{"f_1616posixunix.scm",(void*)f_1616},
{"f_1619posixunix.scm",(void*)f_1619},
{"f_1622posixunix.scm",(void*)f_1622},
{"f_1591posixunix.scm",(void*)f_1591},
{"f_1553posixunix.scm",(void*)f_1553},
{"f_1583posixunix.scm",(void*)f_1583},
{"f_1570posixunix.scm",(void*)f_1570},
{"f_1573posixunix.scm",(void*)f_1573},
{"f_1507posixunix.scm",(void*)f_1507},
{"f_1511posixunix.scm",(void*)f_1511},
{"f_1450posixunix.scm",(void*)f_1450},
{"f_1443posixunix.scm",(void*)f_1443},
{"f_1425posixunix.scm",(void*)f_1425},
{"f_1429posixunix.scm",(void*)f_1429},
{"f_1440posixunix.scm",(void*)f_1440},
{"f_1436posixunix.scm",(void*)f_1436},
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
