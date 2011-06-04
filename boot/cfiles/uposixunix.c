/* Generated from posixunix.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:14
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: posixunix.scm -output-file uposixunix.c -quiet -no-trace -optimize-level 2 -include-path . -no-lambda-info -unsafe -feature unsafe -explicit-use
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

static C_TLS C_word lf[404];


/* from k5619 in set-root-directory! in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall stub1123(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub1123(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_r=C_fix((C_word)chroot(t0));
return C_r;}

/* from sleep in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall stub890(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub890(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_sleep(t0));
return C_r;}

/* from parent-process-id in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall stub887(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub887(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getppid());
return C_r;}

/* from current-process-id in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall stub885(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub885(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getpid());
return C_r;}

/* from freeenv */
static C_word C_fcall stub822(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub822(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_env();
return C_r;}

/* from k4637 */
static C_word C_fcall stub815(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub815(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_env(t0,t1,t2);
return C_r;}

/* from freeargs */
static C_word C_fcall stub810(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub810(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_free_exec_args();
return C_r;}

/* from k4629 */
static C_word C_fcall stub803(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub803(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_set_exec_arg(t0,t1,t2);
return C_r;}

/* from f_4614 in k4608 in process-fork in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall stub791(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub791(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

/* from fork */
static C_word C_fcall stub786(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub786(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_fork());
return C_r;}

/* from getit */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub749(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub749(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
if(gethostname(C_hostbuf, 256) == -1) return(NULL);
              else return(C_hostbuf);
C_return:
#undef return

return C_r;}

/* from ttyname */
static C_word C_fcall stub742(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub742(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)ttyname(t0));
return C_r;}

/* from set-alarm! in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall stub728(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub728(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)C_alarm(t0));
return C_r;}

/* from ex0 */
static C_word C_fcall stub722(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub722(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
_exit(t0);
return C_r;}

/* from local-timezone-abbreviation in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub717(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub717(C_word C_buf){
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
static C_word C_fcall stub702(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub702(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_word t0=(C_word )(C_a0);
C_r=C_mpointer(&C_a,(void*)C_asctime(t0));
return C_r;}

/* from ctime */
static C_word C_fcall stub693(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub693(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_num_to_int(C_a0);
C_r=C_mpointer(&C_a,(void*)C_ctime(t0));
return C_r;}

/* from k4171 */
static C_word C_fcall stub666(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub666(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
C_r=C_fix((C_word)munmap(t0,t1));
return C_r;}

/* from k4113 */
static C_word C_fcall stub641(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5) C_regparm;
C_regparm static C_word C_fcall stub641(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3,C_word C_a4,C_word C_a5){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
int t1=(int )C_num_to_int(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
int t4=(int )C_unfix(C_a4);
int t5=(int )C_num_to_int(C_a5);
C_r=C_mpointer_or_false(&C_a,(void*)mmap(t0,t1,t2,t3,t4,t5));
return C_r;}

/* from get */
static C_word C_fcall stub619(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub619(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)C_getenventry(t0));
return C_r;}

/* from k3090 in k3086 in file-link in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall stub407(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub407(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
char * t1=(char * )C_string_or_null(C_a1);
C_r=C_fix((C_word)link(t0,t1));
return C_r;}

/* from a5659 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall stub373(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub373(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getgid());
return C_r;}

/* from a5662 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall stub369(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub369(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getuid());
return C_r;}

/* from current-effective-group-id in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall stub365(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub365(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_getegid());
return C_r;}

/* from current-effective-user-id in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall stub363(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub363(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_r=C_fix((C_word)C_geteuid());
return C_r;}

/* from k2805 in initialize-groups in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall stub341(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub341(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)initgroups(t0,t1));
return C_r;}

/* from _ensure-groups in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_return; C_cblockend
static C_word C_fcall stub315(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub315(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
if(C_groups != NULL) C_free(C_groups);C_groups = (gid_t *)C_malloc(sizeof(gid_t) * n);if(C_groups == NULL) return(0);else return(1);
C_return:
#undef return

return C_r;}

/* from _get-groups */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub311(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub311(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int n=(int )C_unfix(C_a0);
return(getgroups(n, C_groups));
C_return:
#undef return

return C_r;}

/* from group-member */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub300(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub300(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
return(C_group->gr_mem[ i ]);
C_return:
#undef return

return C_r;}

/* from fd_test in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall stub81(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub81(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_mk_bool(C_test_fd_set(t0,t1));
return C_r;}

/* from fd_set in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall stub75(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub75(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_set_fd_set(t0,t1);
return C_r;}

/* from fd_zero in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall stub70(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub70(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_zero_fd_set(t0);
return C_r;}

/* from fcntl */
static C_word C_fcall stub24(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub24(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
long t2=(long )C_num_to_long(C_a2);
C_r=C_fix((C_word)fcntl(t0,t1,t2));
return C_r;}

/* from ##sys#file-select-one in k1322 in k1319 in k1316 in k1313 in k1310 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub17(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub17(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
fd_set in;struct timeval tm;FD_ZERO(&in);FD_SET(fd, &in);tm.tv_sec = tm.tv_usec = 0;if(select(fd + 1, &in, NULL, NULL, &tm) == -1) return(-1);else return(FD_ISSET(fd, &in) ? 1 : 0);
C_return:
#undef return

return C_r;}

/* from ##sys#file-nonblocking! in k1322 in k1319 in k1316 in k1313 in k1310 */
#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_return; C_cblockend
static C_word C_fcall stub13(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub13(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);if(val == -1) return(0);return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_return:
#undef return

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
C_noret_decl(f_1312)
static void C_ccall f_1312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1315)
static void C_ccall f_1315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1318)
static void C_ccall f_1318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1321)
static void C_ccall f_1321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1324)
static void C_ccall f_1324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5672)
static void C_ccall f_5672(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5688)
static void C_ccall f_5688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5676)
static void C_ccall f_5676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5679)
static void C_ccall f_5679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1912)
static void C_ccall f_1912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2429)
static void C_ccall f_2429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5666)
static void C_ccall f_5666(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2543)
static void C_ccall f_2543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5663)
static void C_ccall f_5663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2934)
static void C_ccall f_2934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5660)
static void C_ccall f_5660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2953)
static void C_ccall f_2953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5645)
static void C_ccall f_5645(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5655)
static void C_ccall f_5655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5649)
static void C_ccall f_5649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3059)
static void C_ccall f_3059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5625)
static void C_ccall f_5625(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5621)
static void C_ccall f_5621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5396)
static void C_ccall f_5396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5396)
static void C_ccall f_5396r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5550)
static void C_fcall f_5550(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5556)
static void C_ccall f_5556(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5545)
static void C_fcall f_5545(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5540)
static void C_fcall f_5540(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5398)
static void C_fcall f_5398(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5527)
static void C_ccall f_5527(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_5402)
static void C_fcall f_5402(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5515)
static void C_ccall f_5515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5412)
static void C_ccall f_5412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5414)
static void C_fcall f_5414(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5433)
static void C_ccall f_5433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5501)
static void C_ccall f_5501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5508)
static void C_ccall f_5508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5495)
static void C_ccall f_5495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5448)
static void C_ccall f_5448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5482)
static void C_ccall f_5482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5468)
static void C_ccall f_5468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5480)
static void C_ccall f_5480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5476)
static void C_ccall f_5476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5460)
static void C_ccall f_5460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5519)
static void C_ccall f_5519(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5339)
static void C_ccall f_5339(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5339)
static void C_ccall f_5339r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5351)
static void C_fcall f_5351(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5346)
static void C_fcall f_5346(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5341)
static void C_fcall f_5341(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5282)
static void C_ccall f_5282(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5282)
static void C_ccall f_5282r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5294)
static void C_fcall f_5294(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5289)
static void C_fcall f_5289(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5284)
static void C_fcall f_5284(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5226)
static void C_fcall f_5226(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5276)
static void C_ccall f_5276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5280)
static void C_ccall f_5280(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5268)
static void C_ccall f_5268(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5230)
static void C_ccall f_5230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5259)
static void C_ccall f_5259(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5233)
static void C_ccall f_5233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5244)
static void C_ccall f_5244(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5238)
static void C_ccall f_5238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5170)
static void C_ccall f_5170(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_5182)
static void C_ccall f_5182(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5213)
static void C_ccall f_5213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5193)
static void C_ccall f_5193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5209)
static void C_ccall f_5209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5197)
static void C_ccall f_5197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5205)
static void C_ccall f_5205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5201)
static void C_ccall f_5201(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5176)
static void C_ccall f_5176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5159)
static void C_fcall f_5159(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5163)
static void C_ccall f_5163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5148)
static void C_fcall f_5148(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5152)
static void C_ccall f_5152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5087)
static void C_fcall f_5087(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_5091)
static void C_ccall f_5091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5094)
static void C_ccall f_5094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5097)
static void C_ccall f_5097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5126)
static void C_ccall f_5126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5130)
static void C_ccall f_5130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5133)
static void C_ccall f_5133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5136)
static void C_ccall f_5136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5124)
static void C_ccall f_5124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5098)
static C_word C_fcall f_5098(C_word *a,C_word t0);
C_noret_decl(f_5070)
static void C_fcall f_5070(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5083)
static void C_ccall f_5083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4992)
static void C_ccall f_4992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5053)
static void C_fcall f_5053(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5066)
static void C_ccall f_5066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5069)
static void C_ccall f_5069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5033)
static void C_fcall f_5033(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5048)
static void C_ccall f_5048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5042)
static void C_ccall f_5042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4996)
static void C_fcall f_4996(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_4998)
static void C_ccall f_4998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5019)
static void C_ccall f_5019(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5013)
static void C_ccall f_5013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4940)
static void C_ccall f_4940(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4940)
static void C_ccall f_4940r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4947)
static void C_ccall f_4947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4966)
static void C_ccall f_4966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4970)
static void C_ccall f_4970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4934)
static void C_ccall f_4934(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4925)
static void C_ccall f_4925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4929)
static void C_ccall f_4929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4904)
static void C_ccall f_4904(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4904)
static void C_ccall f_4904r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4901)
static void C_ccall f_4901(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4898)
static void C_ccall f_4898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4895)
static void C_ccall f_4895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4823)
static void C_ccall f_4823(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4823)
static void C_ccall f_4823r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4853)
static void C_ccall f_4853(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4847)
static void C_ccall f_4847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4806)
static void C_ccall f_4806(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4642)
static void C_ccall f_4642(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4642)
static void C_ccall f_4642r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4761)
static void C_fcall f_4761(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4756)
static void C_fcall f_4756(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4644)
static void C_fcall f_4644(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4648)
static void C_ccall f_4648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4656)
static void C_fcall f_4656(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4699)
static C_word C_fcall f_4699(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_4669)
static void C_fcall f_4669(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4694)
static void C_ccall f_4694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4672)
static void C_ccall f_4672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4634)
static C_word C_fcall f_4634(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_4626)
static C_word C_fcall f_4626(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_4588)
static void C_ccall f_4588(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4588)
static void C_ccall f_4588r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4610)
static void C_ccall f_4610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4614)
static void C_ccall f_4614(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4488)
static void C_fcall f_4488(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4509)
static void C_ccall f_4509(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4580)
static void C_ccall f_4580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4513)
static void C_ccall f_4513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4520)
static void C_ccall f_4520(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4522)
static void C_fcall f_4522(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4539)
static void C_ccall f_4539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4549)
static void C_ccall f_4549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4553)
static void C_ccall f_4553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4503)
static void C_ccall f_4503(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4470)
static void C_ccall f_4470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4474)
static void C_ccall f_4474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4477)
static void C_ccall f_4477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4443)
static void C_ccall f_4443(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4447)
static void C_ccall f_4447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4422)
static void C_ccall f_4422(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4369)
static void C_ccall f_4369r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4376)
static void C_ccall f_4376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4366)
static void C_ccall f_4366(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4347)
static void C_ccall f_4347(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4347)
static void C_ccall f_4347r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4351)
static void C_ccall f_4351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4339)
static void C_ccall f_4339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4311)
static void C_ccall f_4311(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4318)
static void C_ccall f_4318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4283)
static void C_ccall f_4283(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4290)
static void C_ccall f_4290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4255)
static void C_ccall f_4255(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4262)
static void C_ccall f_4262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4265)
static void C_ccall f_4265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4268)
static void C_ccall f_4268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4238)
static void C_ccall f_4238(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4242)
static void C_ccall f_4242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4245)
static void C_ccall f_4245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4227)
static void C_ccall f_4227(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4221)
static void C_ccall f_4221(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4215)
static void C_ccall f_4215(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4209)
static void C_ccall f_4209(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4177)
static void C_ccall f_4177(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4177)
static void C_ccall f_4177r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...) C_noret;
C_noret_decl(f_4119)
static void C_ccall f_4119r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t8) C_noret;
C_noret_decl(f_4123)
static void C_ccall f_4123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4148)
static void C_ccall f_4148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4135)
static void C_ccall f_4135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4036)
static void C_ccall f_4036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4042)
static void C_fcall f_4042(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4046)
static void C_ccall f_4046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4054)
static void C_fcall f_4054(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4080)
static void C_ccall f_4080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4084)
static void C_ccall f_4084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4072)
static void C_ccall f_4072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4024)
static void C_ccall f_4024(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4029)
static void C_ccall f_4029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4013)
static void C_ccall f_4013(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4018)
static void C_ccall f_4018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4022)
static void C_ccall f_4022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3990)
static void C_ccall f_3990(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4011)
static void C_ccall f_4011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3994)
static void C_ccall f_3994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3953)
static void C_ccall f_3953r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3957)
static void C_fcall f_3957(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3975)
static void C_ccall f_3975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3971)
static void C_ccall f_3971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3928)
static void C_ccall f_3928(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3906)
static void C_ccall f_3906(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3906)
static void C_ccall f_3906r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3910)
static void C_ccall f_3910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3891)
static void C_ccall f_3891(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3891)
static void C_ccall f_3891r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3895)
static void C_ccall f_3895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3876)
static void C_ccall f_3876(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3876)
static void C_ccall f_3876r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3880)
static void C_ccall f_3880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3858)
static void C_fcall f_3858(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3796)
static void C_fcall f_3796(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3815)
static void C_fcall f_3815(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3760)
static void C_ccall f_3760(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3785)
static void C_ccall f_3785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3781)
static void C_ccall f_3781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3774)
static void C_ccall f_3774(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3524)
static void C_ccall f_3524r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_3715)
static void C_fcall f_3715(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3704)
static void C_fcall f_3704(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3710)
static void C_ccall f_3710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3526)
static void C_fcall f_3526(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3633)
static void C_ccall f_3633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3634)
static void C_ccall f_3634(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3651)
static void C_fcall f_3651(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3661)
static void C_ccall f_3661(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3619)
static void C_ccall f_3619(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3575)
static void C_fcall f_3575(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3611)
static void C_ccall f_3611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3600)
static void C_ccall f_3600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3584)
static void C_ccall f_3584(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3579)
static void C_ccall f_3579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3529)
static void C_fcall f_3529(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3564)
static void C_ccall f_3564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3545)
static void C_ccall f_3545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3255)
static void C_ccall f_3255(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3255)
static void C_ccall f_3255r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_3464)
static void C_fcall f_3464(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3453)
static void C_fcall f_3453(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3459)
static void C_ccall f_3459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3448)
static void C_fcall f_3448(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3257)
static void C_fcall f_3257(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3264)
static void C_ccall f_3264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3421)
static void C_ccall f_3421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3425)
static void C_ccall f_3425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3400)
static void C_ccall f_3400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3410)
static void C_ccall f_3410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3388)
static void C_ccall f_3388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3375)
static void C_ccall f_3375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3379)
static void C_ccall f_3379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3370)
static void C_ccall f_3370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3288)
static void C_fcall f_3288(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3300)
static void C_fcall f_3300(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3337)
static void C_ccall f_3337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3346)
static void C_ccall f_3346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3340)
static void C_ccall f_3340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3316)
static void C_ccall f_3316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3319)
static void C_ccall f_3319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3280)
static C_word C_fcall f_3280(C_word t0);
C_noret_decl(f_3265)
static void C_fcall f_3265(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3279)
static void C_ccall f_3279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3234)
static void C_ccall f_3234(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3234)
static void C_ccall f_3234r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3238)
static void C_fcall f_3238(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3241)
static void C_ccall f_3241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3192)
static void C_ccall f_3192(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3228)
static void C_ccall f_3228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3211)
static void C_ccall f_3211(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3181)
static void C_ccall f_3181(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3181)
static void C_ccall f_3181r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3190)
static void C_ccall f_3190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3170)
static void C_ccall f_3170(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3170)
static void C_ccall f_3170r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3179)
static void C_ccall f_3179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3155)
static void C_fcall f_3155(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3118)
static void C_fcall f_3118(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3099)
static void C_ccall f_3099(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3088)
static void C_ccall f_3088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3092)
static void C_ccall f_3092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3081)
static void C_ccall f_3081(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3065)
static void C_ccall f_3065(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3068)
static void C_ccall f_3068(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3028)
static void C_ccall f_3028(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3055)
static void C_ccall f_3055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3043)
static void C_ccall f_3043(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3051)
static void C_ccall f_3051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3047)
static void C_ccall f_3047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3009)
static void C_ccall f_3009(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2988)
static void C_ccall f_2988(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2976)
static void C_ccall f_2976(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2955)
static void C_fcall f_2955(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2974)
static void C_ccall f_2974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2962)
static void C_ccall f_2962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2917)
static void C_ccall f_2917(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2927)
static void C_ccall f_2927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2914)
static void C_ccall f_2914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2911)
static void C_ccall f_2911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2890)
static void C_ccall f_2890(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2869)
static void C_ccall f_2869(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2888)
static void C_ccall f_2888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2884)
static void C_ccall f_2884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2748)
static void C_ccall f_2748(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2752)
static void C_ccall f_2752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2757)
static void C_fcall f_2757(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2773)
static void C_ccall f_2773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2685)
static void C_ccall f_2685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2743)
static void C_ccall f_2743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2689)
static void C_ccall f_2689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2692)
static void C_ccall f_2692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2724)
static void C_ccall f_2724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2695)
static void C_ccall f_2695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2700)
static void C_fcall f_2700(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2714)
static void C_ccall f_2714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2682)
static C_word C_fcall f_2682(C_word t0);
C_noret_decl(f_2628)
static void C_ccall f_2628(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2632)
static void C_fcall f_2632(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2642)
static void C_ccall f_2642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2646)
static void C_ccall f_2646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2652)
static void C_fcall f_2652(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2666)
static void C_ccall f_2666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2650)
static void C_ccall f_2650(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2583)
static void C_ccall f_2583(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2620)
static void C_ccall f_2620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2587)
static void C_fcall f_2587(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2597)
static void C_ccall f_2597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2601)
static void C_ccall f_2601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2605)
static void C_ccall f_2605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2609)
static void C_ccall f_2609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2613)
static void C_ccall f_2613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2545)
static void C_ccall f_2545(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2578)
static void C_ccall f_2578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2549)
static void C_ccall f_2549(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2556)
static void C_ccall f_2556(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2560)
static void C_ccall f_2560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2564)
static void C_ccall f_2564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2568)
static void C_ccall f_2568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2530)
static void C_ccall f_2530(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2518)
static void C_ccall f_2518(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2483)
static void C_ccall f_2483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2489)
static void C_fcall f_2489(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2465)
static void C_ccall f_2465(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2480)
static void C_ccall f_2480(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2469)
static void C_ccall f_2469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2447)
static void C_ccall f_2447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2457)
static void C_ccall f_2457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2437)
static void C_ccall f_2437(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2431)
static void C_ccall f_2431(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2388)
static void C_ccall f_2388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2364)
static void C_ccall f_2364r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2368)
static void C_ccall f_2368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2374)
static void C_ccall f_2374(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2374)
static void C_ccall f_2374r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2378)
static void C_ccall f_2378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2344)
static void C_ccall f_2344(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2344)
static void C_ccall f_2344r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2348)
static void C_ccall f_2348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2358)
static void C_ccall f_2358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2320)
static void C_ccall f_2320(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2320)
static void C_ccall f_2320r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2324)
static void C_ccall f_2324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2339)
static void C_ccall f_2339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2329)
static void C_ccall f_2329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2300)
static void C_ccall f_2300(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2311)
static void C_ccall f_2311(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2311)
static void C_ccall f_2311r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2315)
static void C_ccall f_2315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2283)
static void C_ccall f_2283(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2287)
static void C_ccall f_2287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2250)
static void C_ccall f_2250(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2250)
static void C_ccall f_2250r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2278)
static void C_ccall f_2278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2261)
static void C_ccall f_2261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2217)
static void C_ccall f_2217(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2217)
static void C_ccall f_2217r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2245)
static void C_ccall f_2245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2235)
static void C_ccall f_2235(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2228)
static void C_ccall f_2228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2202)
static void C_fcall f_2202(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2215)
static void C_ccall f_2215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2196)
static void C_fcall f_2196(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2184)
static C_word C_fcall f_2184(C_word t0);
C_noret_decl(f_2148)
static void C_ccall f_2148(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2148)
static void C_ccall f_2148r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2161)
static void C_ccall f_2161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2128)
static void C_ccall f_2128(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2146)
static void C_ccall f_2146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2132)
static void C_ccall f_2132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1977)
static void C_ccall f_1977(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1977)
static void C_ccall f_1977r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2079)
static void C_fcall f_2079(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2087)
static void C_ccall f_2087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2074)
static void C_fcall f_2074(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1979)
static void C_fcall f_1979(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1983)
static void C_ccall f_1983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1986)
static void C_ccall f_1986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1989)
static void C_ccall f_1989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2073)
static void C_ccall f_2073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1993)
static void C_ccall f_1993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2007)
static void C_fcall f_2007(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2017)
static void C_ccall f_2017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2029)
static void C_fcall f_2029(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2039)
static void C_ccall f_2039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1975)
static void C_ccall f_1975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1971)
static void C_ccall f_1971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1935)
static void C_ccall f_1935(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1914)
static void C_ccall f_1914(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1933)
static void C_ccall f_1933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1929)
static void C_ccall f_1929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1858)
static void C_ccall f_1858(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1858)
static void C_ccall f_1858r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1865)
static void C_ccall f_1865(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1877)
static void C_ccall f_1877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1871)
static void C_ccall f_1871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1852)
static void C_ccall f_1852(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1856)
static void C_ccall f_1856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1846)
static void C_ccall f_1846(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1840)
static void C_ccall f_1840(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1844)
static void C_ccall f_1844(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1834)
static void C_ccall f_1834(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1838)
static void C_ccall f_1838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1828)
static void C_ccall f_1828(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1832)
static void C_ccall f_1832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1822)
static void C_ccall f_1822(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1826)
static void C_ccall f_1826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1816)
static void C_ccall f_1816(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1820)
static void C_ccall f_1820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1810)
static void C_ccall f_1810(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1814)
static void C_ccall f_1814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1785)
static void C_ccall f_1785(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1785)
static void C_ccall f_1785r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1789)
static void C_ccall f_1789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1748)
static void C_fcall f_1748(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1780)
static void C_ccall f_1780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1773)
static void C_ccall f_1773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1752)
static void C_ccall f_1752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1571)
static void C_ccall f_1571(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1571)
static void C_ccall f_1571r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1587)
static void C_ccall f_1587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1712)
static void C_ccall f_1712(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1593)
static void C_ccall f_1593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1596)
static void C_fcall f_1596(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1678)
static void C_ccall f_1678(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1676)
static void C_ccall f_1676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1635)
static void C_fcall f_1635(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1653)
static void C_ccall f_1653(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1651)
static void C_ccall f_1651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1639)
static void C_fcall f_1639(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1569)
static C_word C_fcall f_1569(C_word t0,C_word t1);
C_noret_decl(f_1567)
static C_word C_fcall f_1567(C_word t0,C_word t1);
C_noret_decl(f_1565)
static C_word C_fcall f_1565(C_word t0);
C_noret_decl(f_1536)
static void C_ccall f_1536(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1540)
static void C_ccall f_1540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1546)
static void C_ccall f_1546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1553)
static void C_ccall f_1553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1503)
static void C_ccall f_1503r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1513)
static void C_ccall f_1513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1474)
static void C_ccall f_1474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1477)
static void C_ccall f_1477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1455)
static void C_ccall f_1455(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1426)
static void C_ccall f_1426(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1426)
static void C_ccall f_1426r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1447)
static void C_ccall f_1447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1434)
static void C_ccall f_1434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1437)
static void C_ccall f_1437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1393)
static void C_ccall f_1393(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1393)
static void C_ccall f_1393r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1352)
static void C_ccall f_1352(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1349)
static void C_ccall f_1349(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1331)
static void C_ccall f_1331(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_1331)
static void C_ccall f_1331r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1335)
static void C_ccall f_1335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1346)
static void C_ccall f_1346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1342)
static void C_ccall f_1342(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_5550)
static void C_fcall trf_5550(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5550(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5550(t0,t1);}

C_noret_decl(trf_5545)
static void C_fcall trf_5545(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5545(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5545(t0,t1,t2);}

C_noret_decl(trf_5540)
static void C_fcall trf_5540(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5540(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5540(t0,t1,t2,t3);}

C_noret_decl(trf_5398)
static void C_fcall trf_5398(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5398(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5398(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5402)
static void C_fcall trf_5402(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5402(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5402(t0,t1);}

C_noret_decl(trf_5414)
static void C_fcall trf_5414(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5414(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5414(t0,t1,t2,t3);}

C_noret_decl(trf_5351)
static void C_fcall trf_5351(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5351(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5351(t0,t1);}

C_noret_decl(trf_5346)
static void C_fcall trf_5346(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5346(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5346(t0,t1,t2);}

C_noret_decl(trf_5341)
static void C_fcall trf_5341(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5341(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5341(t0,t1,t2,t3);}

C_noret_decl(trf_5294)
static void C_fcall trf_5294(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5294(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5294(t0,t1);}

C_noret_decl(trf_5289)
static void C_fcall trf_5289(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5289(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5289(t0,t1,t2);}

C_noret_decl(trf_5284)
static void C_fcall trf_5284(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5284(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5284(t0,t1,t2,t3);}

C_noret_decl(trf_5226)
static void C_fcall trf_5226(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5226(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5226(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5159)
static void C_fcall trf_5159(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5159(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5159(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5148)
static void C_fcall trf_5148(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5148(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5148(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5087)
static void C_fcall trf_5087(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5087(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_5087(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_5070)
static void C_fcall trf_5070(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5070(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5070(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5053)
static void C_fcall trf_5053(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5053(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5053(t0,t1,t2,t3);}

C_noret_decl(trf_5033)
static void C_fcall trf_5033(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5033(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5033(t0,t1,t2);}

C_noret_decl(trf_4996)
static void C_fcall trf_4996(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4996(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_4996(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_4761)
static void C_fcall trf_4761(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4761(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4761(t0,t1);}

C_noret_decl(trf_4756)
static void C_fcall trf_4756(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4756(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4756(t0,t1,t2);}

C_noret_decl(trf_4644)
static void C_fcall trf_4644(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4644(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4644(t0,t1,t2,t3);}

C_noret_decl(trf_4656)
static void C_fcall trf_4656(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4656(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4656(t0,t1,t2,t3);}

C_noret_decl(trf_4669)
static void C_fcall trf_4669(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4669(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4669(t0,t1);}

C_noret_decl(trf_4488)
static void C_fcall trf_4488(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4488(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4488(t0,t1,t2);}

C_noret_decl(trf_4522)
static void C_fcall trf_4522(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4522(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4522(t0,t1,t2);}

C_noret_decl(trf_4042)
static void C_fcall trf_4042(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4042(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4042(t0,t1,t2);}

C_noret_decl(trf_4054)
static void C_fcall trf_4054(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4054(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4054(t0,t1,t2);}

C_noret_decl(trf_3957)
static void C_fcall trf_3957(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3957(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3957(t0,t1);}

C_noret_decl(trf_3858)
static void C_fcall trf_3858(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3858(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3858(t0,t1,t2,t3);}

C_noret_decl(trf_3796)
static void C_fcall trf_3796(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3796(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3796(t0,t1,t2);}

C_noret_decl(trf_3815)
static void C_fcall trf_3815(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3815(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3815(t0,t1);}

C_noret_decl(trf_3715)
static void C_fcall trf_3715(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3715(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3715(t0,t1);}

C_noret_decl(trf_3704)
static void C_fcall trf_3704(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3704(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3704(t0,t1,t2);}

C_noret_decl(trf_3526)
static void C_fcall trf_3526(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3526(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3526(t0,t1,t2,t3);}

C_noret_decl(trf_3651)
static void C_fcall trf_3651(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3651(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3651(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3575)
static void C_fcall trf_3575(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3575(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3575(t0,t1);}

C_noret_decl(trf_3529)
static void C_fcall trf_3529(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3529(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3529(t0,t1,t2,t3);}

C_noret_decl(trf_3464)
static void C_fcall trf_3464(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3464(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3464(t0,t1);}

C_noret_decl(trf_3453)
static void C_fcall trf_3453(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3453(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3453(t0,t1,t2);}

C_noret_decl(trf_3448)
static void C_fcall trf_3448(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3448(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3448(t0,t1,t2,t3);}

C_noret_decl(trf_3257)
static void C_fcall trf_3257(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3257(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3257(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3288)
static void C_fcall trf_3288(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3288(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3288(t0,t1);}

C_noret_decl(trf_3300)
static void C_fcall trf_3300(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3300(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3300(t0,t1);}

C_noret_decl(trf_3265)
static void C_fcall trf_3265(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3265(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3265(t0,t1);}

C_noret_decl(trf_3238)
static void C_fcall trf_3238(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3238(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3238(t0,t1);}

C_noret_decl(trf_3155)
static void C_fcall trf_3155(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3155(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_3155(t0,t1,t2,t3,t4);}

C_noret_decl(trf_3118)
static void C_fcall trf_3118(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3118(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3118(t0,t1,t2);}

C_noret_decl(trf_2955)
static void C_fcall trf_2955(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2955(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2955(t0,t1,t2);}

C_noret_decl(trf_2757)
static void C_fcall trf_2757(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2757(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2757(t0,t1,t2,t3);}

C_noret_decl(trf_2700)
static void C_fcall trf_2700(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2700(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2700(t0,t1,t2);}

C_noret_decl(trf_2632)
static void C_fcall trf_2632(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2632(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2632(t0,t1);}

C_noret_decl(trf_2652)
static void C_fcall trf_2652(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2652(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2652(t0,t1,t2);}

C_noret_decl(trf_2587)
static void C_fcall trf_2587(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2587(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2587(t0,t1);}

C_noret_decl(trf_2489)
static void C_fcall trf_2489(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2489(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2489(t0,t1,t2,t3);}

C_noret_decl(trf_2202)
static void C_fcall trf_2202(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2202(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2202(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2196)
static void C_fcall trf_2196(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2196(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2196(t0,t1);}

C_noret_decl(trf_2079)
static void C_fcall trf_2079(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2079(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2079(t0,t1);}

C_noret_decl(trf_2074)
static void C_fcall trf_2074(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2074(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2074(t0,t1,t2);}

C_noret_decl(trf_1979)
static void C_fcall trf_1979(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1979(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1979(t0,t1,t2,t3);}

C_noret_decl(trf_2007)
static void C_fcall trf_2007(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2007(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2007(t0,t1);}

C_noret_decl(trf_2029)
static void C_fcall trf_2029(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2029(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2029(t0,t1);}

C_noret_decl(trf_1748)
static void C_fcall trf_1748(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1748(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1748(t0,t1,t2,t3);}

C_noret_decl(trf_1596)
static void C_fcall trf_1596(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1596(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1596(t0,t1);}

C_noret_decl(trf_1635)
static void C_fcall trf_1635(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1635(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1635(t0,t1);}

C_noret_decl(trf_1639)
static void C_fcall trf_1639(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1639(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1639(t0,t1);}

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
if(!C_demand_2(2990)){
C_save(t1);
C_rereclaim2(2990*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,404);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[2]=C_h_intern(&lf[2],13,"string-append");
lf[4]=C_h_intern(&lf[4],15,"\003syssignal-hook");
lf[5]=C_static_string(C_heaptop,3," - ");
lf[6]=C_h_intern(&lf[6],17,"\003syspeek-c-string");
lf[7]=C_h_intern(&lf[7],16,"\003sysupdate-errno");
lf[8]=C_h_intern(&lf[8],15,"\003sysposix-error");
lf[9]=C_h_intern(&lf[9],21,"\003sysfile-nonblocking!");
lf[10]=C_h_intern(&lf[10],19,"\003sysfile-select-one");
lf[11]=C_h_intern(&lf[11],8,"pipe/buf");
lf[12]=C_h_intern(&lf[12],11,"fcntl/dupfd");
lf[13]=C_h_intern(&lf[13],11,"fcntl/getfd");
lf[14]=C_h_intern(&lf[14],11,"fcntl/setfd");
lf[15]=C_h_intern(&lf[15],11,"fcntl/getfl");
lf[16]=C_h_intern(&lf[16],11,"fcntl/setfl");
lf[17]=C_h_intern(&lf[17],11,"open/rdonly");
lf[18]=C_h_intern(&lf[18],11,"open/wronly");
lf[19]=C_h_intern(&lf[19],9,"open/rdwr");
lf[20]=C_h_intern(&lf[20],9,"open/read");
lf[21]=C_h_intern(&lf[21],10,"open/write");
lf[22]=C_h_intern(&lf[22],10,"open/creat");
lf[23]=C_h_intern(&lf[23],11,"open/append");
lf[24]=C_h_intern(&lf[24],9,"open/excl");
lf[25]=C_h_intern(&lf[25],11,"open/noctty");
lf[26]=C_h_intern(&lf[26],13,"open/nonblock");
lf[27]=C_h_intern(&lf[27],10,"open/trunc");
lf[28]=C_h_intern(&lf[28],9,"open/sync");
lf[29]=C_h_intern(&lf[29],10,"open/fsync");
lf[30]=C_h_intern(&lf[30],11,"open/binary");
lf[31]=C_h_intern(&lf[31],9,"open/text");
lf[32]=C_h_intern(&lf[32],10,"perm/irusr");
lf[33]=C_h_intern(&lf[33],10,"perm/iwusr");
lf[34]=C_h_intern(&lf[34],10,"perm/ixusr");
lf[35]=C_h_intern(&lf[35],10,"perm/irgrp");
lf[36]=C_h_intern(&lf[36],10,"perm/iwgrp");
lf[37]=C_h_intern(&lf[37],10,"perm/ixgrp");
lf[38]=C_h_intern(&lf[38],10,"perm/iroth");
lf[39]=C_h_intern(&lf[39],10,"perm/iwoth");
lf[40]=C_h_intern(&lf[40],10,"perm/ixoth");
lf[41]=C_h_intern(&lf[41],10,"perm/irwxu");
lf[42]=C_h_intern(&lf[42],10,"perm/irwxg");
lf[43]=C_h_intern(&lf[43],10,"perm/irwxo");
lf[44]=C_h_intern(&lf[44],10,"perm/isvtx");
lf[45]=C_h_intern(&lf[45],10,"perm/isuid");
lf[46]=C_h_intern(&lf[46],10,"perm/isgid");
lf[47]=C_h_intern(&lf[47],12,"file-control");
lf[48]=C_h_intern(&lf[48],11,"\000file-error");
lf[49]=C_static_string(C_heaptop,19,"cannot control file");
lf[50]=C_h_intern(&lf[50],9,"file-open");
lf[51]=C_static_string(C_heaptop,16,"cannot open file");
lf[52]=C_h_intern(&lf[52],17,"\003sysmake-c-string");
lf[53]=C_h_intern(&lf[53],20,"\003sysexpand-home-path");
lf[54]=C_h_intern(&lf[54],10,"file-close");
lf[55]=C_static_string(C_heaptop,17,"cannot close file");
lf[56]=C_h_intern(&lf[56],11,"make-string");
lf[57]=C_h_intern(&lf[57],9,"file-read");
lf[58]=C_static_string(C_heaptop,21,"cannot read from file");
lf[59]=C_h_intern(&lf[59],11,"\000type-error");
lf[60]=C_static_string(C_heaptop,47,"bad argument type - not a string or byte-vector");
lf[61]=C_h_intern(&lf[61],10,"file-write");
lf[62]=C_static_string(C_heaptop,20,"cannot write to file");
lf[63]=C_static_string(C_heaptop,47,"bad argument type - not a string or byte-vector");
lf[64]=C_h_intern(&lf[64],12,"file-mkstemp");
lf[65]=C_h_intern(&lf[65],13,"\003syssubstring");
lf[66]=C_static_string(C_heaptop,28,"cannot create temporary file");
lf[67]=C_h_intern(&lf[67],11,"file-select");
lf[68]=C_static_string(C_heaptop,6,"failed");
lf[69]=C_h_intern(&lf[69],12,"\003sysfor-each");
lf[70]=C_h_intern(&lf[70],8,"seek/set");
lf[71]=C_h_intern(&lf[71],8,"seek/end");
lf[72]=C_h_intern(&lf[72],8,"seek/cur");
lf[74]=C_static_string(C_heaptop,18,"cannot access file");
lf[75]=C_static_string(C_heaptop,42,"bad argument type - not a fixnum or string");
lf[76]=C_h_intern(&lf[76],9,"file-stat");
lf[77]=C_h_intern(&lf[77],9,"file-size");
lf[78]=C_h_intern(&lf[78],22,"file-modification-time");
lf[79]=C_h_intern(&lf[79],16,"file-access-time");
lf[80]=C_h_intern(&lf[80],16,"file-change-time");
lf[81]=C_h_intern(&lf[81],10,"file-owner");
lf[82]=C_h_intern(&lf[82],16,"file-permissions");
lf[83]=C_h_intern(&lf[83],13,"regular-file\077");
lf[84]=C_h_intern(&lf[84],14,"symbolic-link\077");
lf[85]=C_h_intern(&lf[85],18,"set-file-position!");
lf[86]=C_static_string(C_heaptop,24,"cannot set file position");
lf[87]=C_h_intern(&lf[87],6,"stream");
lf[88]=C_static_string(C_heaptop,12,"invalid file");
lf[89]=C_h_intern(&lf[89],5,"port\077");
lf[90]=C_h_intern(&lf[90],13,"\000bounds-error");
lf[91]=C_static_string(C_heaptop,30,"invalid negative port position");
lf[92]=C_h_intern(&lf[92],13,"file-position");
lf[93]=C_h_intern(&lf[93],16,"create-directory");
lf[94]=C_static_string(C_heaptop,23,"cannot create directory");
lf[95]=C_h_intern(&lf[95],16,"change-directory");
lf[96]=C_static_string(C_heaptop,31,"cannot change current directory");
lf[97]=C_h_intern(&lf[97],16,"delete-directory");
lf[98]=C_static_string(C_heaptop,23,"cannot delete directory");
lf[99]=C_h_intern(&lf[99],6,"string");
lf[100]=C_h_intern(&lf[100],9,"directory");
lf[101]=C_static_string(C_heaptop,21,"cannot open directory");
lf[102]=C_h_intern(&lf[102],16,"\003sysmake-pointer");
lf[103]=C_h_intern(&lf[103],17,"current-directory");
lf[104]=C_h_intern(&lf[104],10,"directory\077");
lf[105]=C_h_intern(&lf[105],13,"\003sysfile-info");
lf[106]=C_static_string(C_heaptop,33,"cannot retrieve current directory");
lf[107]=C_h_intern(&lf[107],5,"\000text");
lf[108]=C_h_intern(&lf[108],9,"\003syserror");
lf[109]=C_static_string(C_heaptop,35,"illegal input/output mode specifier");
lf[110]=C_static_string(C_heaptop,16,"cannot open pipe");
lf[111]=C_h_intern(&lf[111],13,"\003sysmake-port");
lf[112]=C_h_intern(&lf[112],21,"\003sysstream-port-class");
lf[113]=C_static_string(C_heaptop,6,"(pipe)");
lf[114]=C_h_intern(&lf[114],15,"open-input-pipe");
lf[115]=C_h_intern(&lf[115],7,"\000binary");
lf[116]=C_h_intern(&lf[116],16,"open-output-pipe");
lf[117]=C_h_intern(&lf[117],16,"close-input-pipe");
lf[118]=C_h_intern(&lf[118],23,"close-input/output-pipe");
lf[119]=C_static_string(C_heaptop,24,"error while closing pipe");
lf[120]=C_h_intern(&lf[120],17,"close-output-pipe");
lf[121]=C_h_intern(&lf[121],20,"call-with-input-pipe");
lf[122]=C_h_intern(&lf[122],21,"call-with-output-pipe");
lf[123]=C_h_intern(&lf[123],20,"with-input-from-pipe");
lf[124]=C_h_intern(&lf[124],18,"\003sysstandard-input");
lf[125]=C_h_intern(&lf[125],19,"with-output-to-pipe");
lf[126]=C_h_intern(&lf[126],19,"\003sysstandard-output");
lf[127]=C_h_intern(&lf[127],11,"create-pipe");
lf[128]=C_static_string(C_heaptop,18,"cannot create pipe");
lf[129]=C_h_intern(&lf[129],11,"signal/term");
lf[130]=C_h_intern(&lf[130],11,"signal/kill");
lf[131]=C_h_intern(&lf[131],10,"signal/int");
lf[132]=C_h_intern(&lf[132],10,"signal/hup");
lf[133]=C_h_intern(&lf[133],10,"signal/fpe");
lf[134]=C_h_intern(&lf[134],10,"signal/ill");
lf[135]=C_h_intern(&lf[135],11,"signal/segv");
lf[136]=C_h_intern(&lf[136],11,"signal/abrt");
lf[137]=C_h_intern(&lf[137],11,"signal/trap");
lf[138]=C_h_intern(&lf[138],11,"signal/quit");
lf[139]=C_h_intern(&lf[139],11,"signal/alrm");
lf[140]=C_h_intern(&lf[140],13,"signal/vtalrm");
lf[141]=C_h_intern(&lf[141],11,"signal/prof");
lf[142]=C_h_intern(&lf[142],9,"signal/io");
lf[143]=C_h_intern(&lf[143],10,"signal/urg");
lf[144]=C_h_intern(&lf[144],11,"signal/chld");
lf[145]=C_h_intern(&lf[145],11,"signal/cont");
lf[146]=C_h_intern(&lf[146],11,"signal/stop");
lf[147]=C_h_intern(&lf[147],11,"signal/tstp");
lf[148]=C_h_intern(&lf[148],11,"signal/pipe");
lf[149]=C_h_intern(&lf[149],11,"signal/xcpu");
lf[150]=C_h_intern(&lf[150],11,"signal/xfsz");
lf[151]=C_h_intern(&lf[151],11,"signal/usr1");
lf[152]=C_h_intern(&lf[152],11,"signal/usr2");
lf[153]=C_h_intern(&lf[153],12,"signal/winch");
lf[154]=C_h_intern(&lf[154],12,"signals-list");
lf[155]=C_h_intern(&lf[155],18,"\003sysinterrupt-hook");
lf[156]=C_h_intern(&lf[156],14,"signal-handler");
lf[157]=C_h_intern(&lf[157],19,"set-signal-handler!");
lf[158]=C_h_intern(&lf[158],16,"set-signal-mask!");
lf[159]=C_h_intern(&lf[159],14,"\000process-error");
lf[160]=C_static_string(C_heaptop,22,"cannot set signal mask");
lf[161]=C_h_intern(&lf[161],11,"signal-mask");
lf[162]=C_h_intern(&lf[162],14,"signal-masked\077");
lf[163]=C_h_intern(&lf[163],12,"signal-mask!");
lf[164]=C_static_string(C_heaptop,19,"cannot block signal");
lf[165]=C_h_intern(&lf[165],14,"signal-unmask!");
lf[166]=C_static_string(C_heaptop,21,"cannot unblock signal");
lf[167]=C_h_intern(&lf[167],18,"system-information");
lf[168]=C_h_intern(&lf[168],25,"\003syspeek-nonnull-c-string");
lf[169]=C_static_string(C_heaptop,34,"cannot retrieve system information");
lf[170]=C_h_intern(&lf[170],16,"user-information");
lf[171]=C_h_intern(&lf[171],17,"group-information");
lf[173]=C_h_intern(&lf[173],10,"get-groups");
lf[174]=C_static_string(C_heaptop,39,"cannot retrieve supplementary group ids");
lf[175]=C_static_string(C_heaptop,13,"out of memory");
lf[176]=C_static_string(C_heaptop,39,"cannot retrieve supplementary group ids");
lf[177]=C_h_intern(&lf[177],11,"set-groups!");
lf[178]=C_static_string(C_heaptop,34,"cannot set supplementary group ids");
lf[179]=C_static_string(C_heaptop,13,"out of memory");
lf[180]=C_h_intern(&lf[180],17,"initialize-groups");
lf[181]=C_static_string(C_heaptop,41,"cannot initialize supplementary group ids");
lf[182]=C_h_intern(&lf[182],10,"errno/perm");
lf[183]=C_h_intern(&lf[183],11,"errno/noent");
lf[184]=C_h_intern(&lf[184],10,"errno/srch");
lf[185]=C_h_intern(&lf[185],10,"errno/intr");
lf[186]=C_h_intern(&lf[186],8,"errno/io");
lf[187]=C_h_intern(&lf[187],12,"errno/noexec");
lf[188]=C_h_intern(&lf[188],10,"errno/badf");
lf[189]=C_h_intern(&lf[189],11,"errno/child");
lf[190]=C_h_intern(&lf[190],11,"errno/nomem");
lf[191]=C_h_intern(&lf[191],11,"errno/acces");
lf[192]=C_h_intern(&lf[192],11,"errno/fault");
lf[193]=C_h_intern(&lf[193],10,"errno/busy");
lf[194]=C_h_intern(&lf[194],12,"errno/notdir");
lf[195]=C_h_intern(&lf[195],11,"errno/isdir");
lf[196]=C_h_intern(&lf[196],11,"errno/inval");
lf[197]=C_h_intern(&lf[197],11,"errno/mfile");
lf[198]=C_h_intern(&lf[198],11,"errno/nospc");
lf[199]=C_h_intern(&lf[199],11,"errno/spipe");
lf[200]=C_h_intern(&lf[200],10,"errno/pipe");
lf[201]=C_h_intern(&lf[201],11,"errno/again");
lf[202]=C_h_intern(&lf[202],10,"errno/rofs");
lf[203]=C_h_intern(&lf[203],11,"errno/exist");
lf[204]=C_h_intern(&lf[204],16,"errno/wouldblock");
lf[205]=C_h_intern(&lf[205],10,"errno/2big");
lf[206]=C_h_intern(&lf[206],12,"errno/deadlk");
lf[207]=C_h_intern(&lf[207],9,"errno/dom");
lf[208]=C_h_intern(&lf[208],10,"errno/fbig");
lf[209]=C_h_intern(&lf[209],11,"errno/ilseq");
lf[210]=C_h_intern(&lf[210],11,"errno/mlink");
lf[211]=C_h_intern(&lf[211],17,"errno/nametoolong");
lf[212]=C_h_intern(&lf[212],11,"errno/nfile");
lf[213]=C_h_intern(&lf[213],11,"errno/nodev");
lf[214]=C_h_intern(&lf[214],11,"errno/nolck");
lf[215]=C_h_intern(&lf[215],11,"errno/nosys");
lf[216]=C_h_intern(&lf[216],14,"errno/notempty");
lf[217]=C_h_intern(&lf[217],11,"errno/notty");
lf[218]=C_h_intern(&lf[218],10,"errno/nxio");
lf[219]=C_h_intern(&lf[219],11,"errno/range");
lf[220]=C_h_intern(&lf[220],10,"errno/xdev");
lf[221]=C_h_intern(&lf[221],16,"change-file-mode");
lf[222]=C_static_string(C_heaptop,23,"cannot change file mode");
lf[223]=C_h_intern(&lf[223],17,"change-file-owner");
lf[224]=C_static_string(C_heaptop,24,"cannot change file owner");
lf[225]=C_h_intern(&lf[225],25,"current-effective-user-id");
lf[226]=C_h_intern(&lf[226],26,"current-effective-group-id");
lf[227]=C_h_intern(&lf[227],12,"set-user-id!");
lf[228]=C_static_string(C_heaptop,18,"cannot set user ID");
lf[229]=C_h_intern(&lf[229],15,"current-user-id");
lf[230]=C_h_intern(&lf[230],13,"set-group-id!");
lf[231]=C_static_string(C_heaptop,19,"cannot set group ID");
lf[232]=C_h_intern(&lf[232],16,"current-group-id");
lf[233]=C_h_intern(&lf[233],17,"file-read-access\077");
lf[234]=C_h_intern(&lf[234],18,"file-write-access\077");
lf[235]=C_h_intern(&lf[235],20,"file-execute-access\077");
lf[236]=C_h_intern(&lf[236],14,"create-session");
lf[237]=C_static_string(C_heaptop,21,"cannot create session");
lf[238]=C_h_intern(&lf[238],21,"set-process-group-id!");
lf[239]=C_static_string(C_heaptop,27,"cannot set process group ID");
lf[240]=C_h_intern(&lf[240],16,"process-group-id");
lf[241]=C_h_intern(&lf[241],20,"create-symbolic-link");
lf[242]=C_h_intern(&lf[242],18,"create-symbol-link");
lf[243]=C_static_string(C_heaptop,27,"cannot create symbolic link");
lf[244]=C_h_intern(&lf[244],9,"substring");
lf[245]=C_h_intern(&lf[245],18,"read-symbolic-link");
lf[246]=C_static_string(C_heaptop,25,"cannot read symbolic link");
lf[247]=C_h_intern(&lf[247],9,"file-link");
lf[248]=C_h_intern(&lf[248],9,"hard-link");
lf[249]=C_static_string(C_heaptop,26,"could not create hard link");
lf[250]=C_h_intern(&lf[250],12,"fileno/stdin");
lf[251]=C_h_intern(&lf[251],13,"fileno/stdout");
lf[252]=C_h_intern(&lf[252],13,"fileno/stderr");
lf[253]=C_h_intern(&lf[253],7,"\000append");
lf[254]=C_static_string(C_heaptop,27,"invalid mode for input file");
lf[255]=C_static_string(C_heaptop,1,"a");
lf[256]=C_static_string(C_heaptop,21,"invalid mode argument");
lf[257]=C_static_string(C_heaptop,1,"r");
lf[258]=C_static_string(C_heaptop,1,"w");
lf[259]=C_static_string(C_heaptop,16,"cannot open file");
lf[260]=C_static_string(C_heaptop,8,"(fdport)");
lf[261]=C_h_intern(&lf[261],16,"open-input-file*");
lf[262]=C_h_intern(&lf[262],17,"open-output-file*");
lf[263]=C_h_intern(&lf[263],12,"port->fileno");
lf[264]=C_h_intern(&lf[264],6,"socket");
lf[265]=C_h_intern(&lf[265],20,"\003systcp-port->fileno");
lf[266]=C_static_string(C_heaptop,25,"port has no attached file");
lf[267]=C_static_string(C_heaptop,37,"cannot access file-descriptor of port");
lf[268]=C_h_intern(&lf[268],25,"\003syspeek-unsigned-integer");
lf[269]=C_h_intern(&lf[269],16,"duplicate-fileno");
lf[270]=C_static_string(C_heaptop,32,"cannot duplicate file-descriptor");
lf[271]=C_h_intern(&lf[271],15,"make-input-port");
lf[272]=C_h_intern(&lf[272],14,"set-port-name!");
lf[273]=C_h_intern(&lf[273],21,"\003syscustom-input-port");
lf[274]=C_static_string(C_heaptop,13,"cannot select");
lf[275]=C_h_intern(&lf[275],17,"\003systhread-yield!");
lf[276]=C_h_intern(&lf[276],25,"\003systhread-block-for-i/o!");
lf[277]=C_h_intern(&lf[277],18,"\003syscurrent-thread");
lf[278]=C_static_string(C_heaptop,11,"cannot read");
lf[279]=C_static_string(C_heaptop,11,"cannot read");
lf[280]=C_static_string(C_heaptop,12,"cannot close");
lf[281]=C_h_intern(&lf[281],15,"\003sysmake-string");
lf[282]=C_h_intern(&lf[282],19,"\003sysundefined-value");
lf[283]=C_h_intern(&lf[283],16,"make-output-port");
lf[284]=C_h_intern(&lf[284],22,"\003syscustom-output-port");
lf[285]=C_static_string(C_heaptop,12,"cannot write");
lf[286]=C_static_string(C_heaptop,12,"cannot close");
lf[287]=C_h_intern(&lf[287],13,"file-truncate");
lf[288]=C_static_string(C_heaptop,20,"cannot truncate file");
lf[289]=C_static_string(C_heaptop,12,"invalid file");
lf[290]=C_h_intern(&lf[290],4,"lock");
lf[291]=C_h_intern(&lf[291],9,"file-lock");
lf[292]=C_static_string(C_heaptop,16,"cannot lock file");
lf[293]=C_h_intern(&lf[293],18,"file-lock/blocking");
lf[294]=C_static_string(C_heaptop,16,"cannot lock file");
lf[295]=C_h_intern(&lf[295],14,"file-test-lock");
lf[296]=C_static_string(C_heaptop,18,"cannot unlock file");
lf[297]=C_h_intern(&lf[297],11,"file-unlock");
lf[298]=C_static_string(C_heaptop,18,"cannot unlock file");
lf[299]=C_h_intern(&lf[299],11,"create-fifo");
lf[300]=C_static_string(C_heaptop,18,"cannot create FIFO");
lf[301]=C_h_intern(&lf[301],5,"fifo\077");
lf[302]=C_static_string(C_heaptop,19,"file does not exist");
lf[303]=C_h_intern(&lf[303],6,"setenv");
lf[304]=C_h_intern(&lf[304],8,"unsetenv");
lf[305]=C_h_intern(&lf[305],19,"current-environment");
lf[306]=C_h_intern(&lf[306],9,"prot/read");
lf[307]=C_h_intern(&lf[307],10,"prot/write");
lf[308]=C_h_intern(&lf[308],9,"prot/exec");
lf[309]=C_h_intern(&lf[309],9,"prot/none");
lf[310]=C_h_intern(&lf[310],9,"map/fixed");
lf[311]=C_h_intern(&lf[311],10,"map/shared");
lf[312]=C_h_intern(&lf[312],11,"map/private");
lf[313]=C_h_intern(&lf[313],13,"map/anonymous");
lf[314]=C_h_intern(&lf[314],8,"map/file");
lf[315]=C_h_intern(&lf[315],18,"map-file-to-memory");
lf[316]=C_h_intern(&lf[316],4,"mmap");
lf[317]=C_static_string(C_heaptop,25,"cannot map file to memory");
lf[318]=C_h_intern(&lf[318],20,"\003syspointer->address");
lf[319]=C_static_string(C_heaptop,41,"bad argument type - not a foreign pointer");
lf[320]=C_h_intern(&lf[320],16,"\003sysnull-pointer");
lf[321]=C_h_intern(&lf[321],22,"unmap-file-from-memory");
lf[322]=C_static_string(C_heaptop,29,"cannot unmap file from memory");
lf[323]=C_h_intern(&lf[323],26,"memory-mapped-file-pointer");
lf[324]=C_h_intern(&lf[324],19,"memory-mapped-file\077");
lf[325]=C_h_intern(&lf[325],19,"seconds->local-time");
lf[326]=C_h_intern(&lf[326],18,"\003sysdecode-seconds");
lf[327]=C_h_intern(&lf[327],17,"seconds->utc-time");
lf[328]=C_h_intern(&lf[328],15,"seconds->string");
lf[329]=C_static_string(C_heaptop,32,"cannot convert seconds to string");
lf[330]=C_h_intern(&lf[330],12,"time->string");
lf[331]=C_static_string(C_heaptop,36,"cannot convert time vector to string");
lf[332]=C_static_string(C_heaptop,21,"time vector too short");
lf[333]=C_h_intern(&lf[333],19,"local-time->seconds");
lf[334]=C_h_intern(&lf[334],15,"\003syscons-flonum");
lf[335]=C_static_string(C_heaptop,37,"cannot convert time vector to seconds");
lf[336]=C_static_string(C_heaptop,21,"time vector too short");
lf[337]=C_h_intern(&lf[337],17,"utc-time->seconds");
lf[338]=C_static_string(C_heaptop,37,"cannot convert time vector to seconds");
lf[339]=C_static_string(C_heaptop,21,"time vector too short");
lf[340]=C_h_intern(&lf[340],27,"local-timezone-abbreviation");
lf[341]=C_h_intern(&lf[341],5,"_exit");
lf[342]=C_h_intern(&lf[342],23,"\003syscleanup-before-exit");
lf[343]=C_h_intern(&lf[343],10,"set-alarm!");
lf[344]=C_h_intern(&lf[344],19,"set-buffering-mode!");
lf[345]=C_static_string(C_heaptop,25,"cannot set buffering mode");
lf[346]=C_h_intern(&lf[346],5,"\000full");
lf[347]=C_h_intern(&lf[347],5,"\000line");
lf[348]=C_h_intern(&lf[348],5,"\000none");
lf[349]=C_static_string(C_heaptop,22,"invalid buffering-mode");
lf[350]=C_h_intern(&lf[350],14,"terminal-port\077");
lf[351]=C_h_intern(&lf[351],13,"terminal-name");
lf[352]=C_static_string(C_heaptop,35,"port is not connected to a terminal");
lf[353]=C_h_intern(&lf[353],13,"get-host-name");
lf[354]=C_h_intern(&lf[354],6,"\000error");
lf[355]=C_static_string(C_heaptop,25,"cannot retrieve host-name");
lf[356]=C_h_intern(&lf[356],12,"glob->regexp");
lf[357]=C_h_intern(&lf[357],13,"make-pathname");
lf[358]=C_h_intern(&lf[358],18,"decompose-pathname");
lf[359]=C_h_intern(&lf[359],4,"glob");
lf[360]=C_h_intern(&lf[360],12,"string-match");
lf[361]=C_static_string(C_heaptop,1,".");
lf[362]=C_static_string(C_heaptop,1,"*");
lf[363]=C_h_intern(&lf[363],12,"process-fork");
lf[364]=C_static_string(C_heaptop,27,"cannot create child process");
lf[365]=C_h_intern(&lf[365],24,"pathname-strip-directory");
lf[366]=C_h_intern(&lf[366],15,"process-execute");
lf[367]=C_static_string(C_heaptop,22,"cannot execute process");
lf[368]=C_h_intern(&lf[368],16,"\003sysprocess-wait");
lf[369]=C_h_intern(&lf[369],12,"process-wait");
lf[370]=C_static_string(C_heaptop,32,"waiting for child process failed");
lf[371]=C_h_intern(&lf[371],18,"current-process-id");
lf[372]=C_h_intern(&lf[372],17,"parent-process-id");
lf[373]=C_h_intern(&lf[373],5,"sleep");
lf[374]=C_h_intern(&lf[374],14,"process-signal");
lf[375]=C_static_string(C_heaptop,32,"could not send signal to process");
lf[376]=C_h_intern(&lf[376],17,"\003sysshell-command");
lf[377]=C_static_string(C_heaptop,7,"/bin/sh");
lf[378]=C_h_intern(&lf[378],6,"getenv");
lf[379]=C_static_string(C_heaptop,5,"SHELL");
lf[380]=C_h_intern(&lf[380],27,"\003sysshell-command-arguments");
lf[381]=C_static_string(C_heaptop,2,"-c");
lf[382]=C_h_intern(&lf[382],11,"process-run");
lf[383]=C_static_string(C_heaptop,21,"abnormal process exit");
lf[384]=C_h_intern(&lf[384],11,"\003sysprocess");
lf[385]=C_h_intern(&lf[385],7,"process");
lf[386]=C_h_intern(&lf[386],8,"process*");
lf[387]=C_h_intern(&lf[387],10,"find-files");
lf[388]=C_static_string(C_heaptop,1,".");
lf[389]=C_static_string(C_heaptop,2,"..");
lf[390]=C_static_string(C_heaptop,1,"*");
lf[391]=C_h_intern(&lf[391],16,"\003sysdynamic-wind");
lf[392]=C_h_intern(&lf[392],13,"pathname-file");
lf[393]=C_static_string(C_heaptop,1,"*");
lf[394]=C_h_intern(&lf[394],19,"set-root-directory!");
lf[395]=C_static_string(C_heaptop,31,"unable to change root directory");
lf[396]=C_static_string(C_heaptop,32,"cannot retrieve process group ID");
lf[397]=C_h_intern(&lf[397],18,"getter-with-setter");
lf[398]=C_h_intern(&lf[398],23,"\003sysuser-interrupt-hook");
lf[399]=C_h_intern(&lf[399],11,"make-vector");
lf[400]=C_static_string(C_heaptop,37,"cannot retrieve file position of port");
lf[401]=C_static_string(C_heaptop,12,"invalid file");
lf[402]=C_h_intern(&lf[402],17,"register-feature!");
lf[403]=C_h_intern(&lf[403],5,"posix");
C_register_lf2(lf,404,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1312,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k1310 */
static void C_ccall f_1312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1312,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1315,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_regex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1313 in k1310 */
static void C_ccall f_1315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1315,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1318,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1316 in k1313 in k1310 */
static void C_ccall f_1318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1318,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1321,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1324,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 405  register-feature! */
t3=*((C_word*)lf[402]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[403]);}

/* k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1324(C_word c,C_word t0,C_word t1){
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
C_word ab[67],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1324,2,t0,t1);}
t2=*((C_word*)lf[2]+1);
t3=C_mutate(&lf[3],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1331,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[8]+1,lf[3]);
t5=C_mutate((C_word*)lf[9]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1349,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[10]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1352,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[11]+1,C_fix((C_word)PIPE_BUF));
t8=C_mutate((C_word*)lf[12]+1,C_fix((C_word)F_DUPFD));
t9=C_mutate((C_word*)lf[13]+1,C_fix((C_word)F_GETFD));
t10=C_mutate((C_word*)lf[14]+1,C_fix((C_word)F_SETFD));
t11=C_mutate((C_word*)lf[15]+1,C_fix((C_word)F_GETFL));
t12=C_mutate((C_word*)lf[16]+1,C_fix((C_word)F_SETFL));
t13=C_mutate((C_word*)lf[17]+1,C_fix((C_word)O_RDONLY));
t14=C_mutate((C_word*)lf[18]+1,C_fix((C_word)O_WRONLY));
t15=C_mutate((C_word*)lf[19]+1,C_fix((C_word)O_RDWR));
t16=C_mutate((C_word*)lf[20]+1,C_fix((C_word)O_RDONLY));
t17=C_mutate((C_word*)lf[21]+1,C_fix((C_word)O_WRONLY));
t18=C_mutate((C_word*)lf[22]+1,C_fix((C_word)O_CREAT));
t19=C_mutate((C_word*)lf[23]+1,C_fix((C_word)O_APPEND));
t20=C_mutate((C_word*)lf[24]+1,C_fix((C_word)O_EXCL));
t21=C_mutate((C_word*)lf[25]+1,C_fix((C_word)O_NOCTTY));
t22=C_mutate((C_word*)lf[26]+1,C_fix((C_word)O_NONBLOCK));
t23=C_mutate((C_word*)lf[27]+1,C_fix((C_word)O_TRUNC));
t24=C_mutate((C_word*)lf[28]+1,C_fix((C_word)O_FSYNC));
t25=C_mutate((C_word*)lf[29]+1,C_fix((C_word)O_FSYNC));
t26=C_mutate((C_word*)lf[30]+1,C_fix((C_word)O_BINARY));
t27=C_mutate((C_word*)lf[31]+1,C_fix((C_word)O_TEXT));
t28=C_mutate((C_word*)lf[32]+1,C_fix((C_word)S_IRUSR));
t29=C_mutate((C_word*)lf[33]+1,C_fix((C_word)S_IWUSR));
t30=C_mutate((C_word*)lf[34]+1,C_fix((C_word)S_IXUSR));
t31=C_mutate((C_word*)lf[35]+1,C_fix((C_word)S_IRGRP));
t32=C_mutate((C_word*)lf[36]+1,C_fix((C_word)S_IWGRP));
t33=C_mutate((C_word*)lf[37]+1,C_fix((C_word)S_IXGRP));
t34=C_mutate((C_word*)lf[38]+1,C_fix((C_word)S_IROTH));
t35=C_mutate((C_word*)lf[39]+1,C_fix((C_word)S_IWOTH));
t36=C_mutate((C_word*)lf[40]+1,C_fix((C_word)S_IXOTH));
t37=C_mutate((C_word*)lf[41]+1,C_fix((C_word)S_IRWXU));
t38=C_mutate((C_word*)lf[42]+1,C_fix((C_word)S_IRWXG));
t39=C_mutate((C_word*)lf[43]+1,C_fix((C_word)S_IRWXO));
t40=C_mutate((C_word*)lf[44]+1,C_fix((C_word)S_ISVTX));
t41=C_mutate((C_word*)lf[45]+1,C_fix((C_word)S_ISUID));
t42=C_mutate((C_word*)lf[46]+1,C_fix((C_word)S_ISGID));
t43=C_mutate((C_word*)lf[47]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1393,tmp=(C_word)a,a+=2,tmp));
t44=(C_word)C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRGRP),C_fix((C_word)S_IROTH));
t45=(C_word)C_a_i_bitwise_ior(&a,2,C_fix((C_word)S_IRWXU),t44);
t46=C_mutate((C_word*)lf[50]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1426,a[2]=t45,tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[54]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1455,tmp=(C_word)a,a+=2,tmp));
t48=*((C_word*)lf[56]+1);
t49=C_mutate((C_word*)lf[57]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1467,a[2]=t48,tmp=(C_word)a,a+=3,tmp));
t50=C_mutate((C_word*)lf[61]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1503,tmp=(C_word)a,a+=2,tmp));
t51=C_mutate((C_word*)lf[64]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1536,tmp=(C_word)a,a+=2,tmp));
t52=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1565,tmp=(C_word)a,a+=2,tmp);
t53=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1567,tmp=(C_word)a,a+=2,tmp);
t54=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1569,tmp=(C_word)a,a+=2,tmp);
t55=C_mutate((C_word*)lf[67]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1571,a[2]=t53,a[3]=t54,a[4]=t52,tmp=(C_word)a,a+=5,tmp));
t56=C_mutate((C_word*)lf[70]+1,C_fix((C_word)SEEK_SET));
t57=C_mutate((C_word*)lf[71]+1,C_fix((C_word)SEEK_END));
t58=C_mutate((C_word*)lf[72]+1,C_fix((C_word)SEEK_CUR));
t59=C_mutate(&lf[73],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1748,tmp=(C_word)a,a+=2,tmp));
t60=C_mutate((C_word*)lf[76]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1785,tmp=(C_word)a,a+=2,tmp));
t61=C_mutate((C_word*)lf[77]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1810,tmp=(C_word)a,a+=2,tmp));
t62=C_mutate((C_word*)lf[78]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1816,tmp=(C_word)a,a+=2,tmp));
t63=C_mutate((C_word*)lf[79]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1822,tmp=(C_word)a,a+=2,tmp));
t64=C_mutate((C_word*)lf[80]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1828,tmp=(C_word)a,a+=2,tmp));
t65=C_mutate((C_word*)lf[81]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1834,tmp=(C_word)a,a+=2,tmp));
t66=C_mutate((C_word*)lf[82]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1840,tmp=(C_word)a,a+=2,tmp));
t67=C_mutate((C_word*)lf[83]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1846,tmp=(C_word)a,a+=2,tmp));
t68=C_mutate((C_word*)lf[84]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1852,tmp=(C_word)a,a+=2,tmp));
t69=C_mutate((C_word*)lf[85]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1858,tmp=(C_word)a,a+=2,tmp));
t70=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t71=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5672,tmp=(C_word)a,a+=2,tmp);
/* posixunix.scm: 720  getter-with-setter */
t72=*((C_word*)lf[397]+1);
((C_proc4)(void*)(*((C_word*)t72+1)))(4,t72,t70,t71,*((C_word*)lf[85]+1));}

/* a5671 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5672(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5672,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5676,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5688,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 722  port? */
t5=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k5686 in a5671 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(7));
t3=(C_word)C_eqp(t2,lf[87]);
t4=((C_word*)t0)[2];
f_5676(2,t4,(C_truep(t3)?(C_word)C_ftell(((C_word*)t0)[3]):C_fix(-1)));}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
f_5676(2,t2,(C_word)C_lseek(((C_word*)t0)[3],C_fix(0),C_fix((C_word)SEEK_CUR)));}
else{
/* posixunix.scm: 727  ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[59],lf[92],lf[401],((C_word*)t0)[3]);}}}

/* k5674 in a5671 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5676,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5679,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 729  posix-error */
t3=lf[3];
f_1331(6,t3,t2,lf[48],lf[92],lf[400],((C_word*)t0)[2]);}
else{
t3=t2;
f_5679(2,t3,C_SCHEME_UNDEFINED);}}

/* k5677 in k5674 in a5671 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1912(C_word c,C_word t0,C_word t1){
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
C_word ab[129],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1912,2,t0,t1);}
t2=C_mutate((C_word*)lf[92]+1,t1);
t3=C_mutate((C_word*)lf[93]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1914,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[95]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1935,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[97]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1956,tmp=(C_word)a,a+=2,tmp));
t6=*((C_word*)lf[2]+1);
t7=*((C_word*)lf[56]+1);
t8=*((C_word*)lf[99]+1);
t9=C_mutate((C_word*)lf[100]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1977,a[2]=t7,tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[104]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2128,tmp=(C_word)a,a+=2,tmp));
t11=*((C_word*)lf[56]+1);
t12=C_mutate((C_word*)lf[103]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2148,a[2]=t11,tmp=(C_word)a,a+=3,tmp));
t13=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2184,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2196,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2202,tmp=(C_word)a,a+=2,tmp);
t16=C_mutate((C_word*)lf[114]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2217,a[2]=t14,a[3]=t15,a[4]=t13,tmp=(C_word)a,a+=5,tmp));
t17=C_mutate((C_word*)lf[116]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2250,a[2]=t14,a[3]=t15,a[4]=t13,tmp=(C_word)a,a+=5,tmp));
t18=C_mutate((C_word*)lf[117]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2283,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[120]+1,*((C_word*)lf[117]+1));
t20=*((C_word*)lf[114]+1);
t21=*((C_word*)lf[116]+1);
t22=*((C_word*)lf[117]+1);
t23=*((C_word*)lf[120]+1);
t24=C_mutate((C_word*)lf[121]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2296,a[2]=t20,a[3]=t22,tmp=(C_word)a,a+=4,tmp));
t25=C_mutate((C_word*)lf[122]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2320,a[2]=t21,a[3]=t23,tmp=(C_word)a,a+=4,tmp));
t26=C_mutate((C_word*)lf[123]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2344,a[2]=t20,a[3]=t22,tmp=(C_word)a,a+=4,tmp));
t27=C_mutate((C_word*)lf[125]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2364,a[2]=t21,a[3]=t23,tmp=(C_word)a,a+=4,tmp));
t28=C_mutate((C_word*)lf[127]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2384,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[129]+1,C_fix((C_word)SIGTERM));
t30=C_mutate((C_word*)lf[130]+1,C_fix((C_word)SIGKILL));
t31=C_mutate((C_word*)lf[131]+1,C_fix((C_word)SIGINT));
t32=C_mutate((C_word*)lf[132]+1,C_fix((C_word)SIGHUP));
t33=C_mutate((C_word*)lf[133]+1,C_fix((C_word)SIGFPE));
t34=C_mutate((C_word*)lf[134]+1,C_fix((C_word)SIGILL));
t35=C_mutate((C_word*)lf[135]+1,C_fix((C_word)SIGSEGV));
t36=C_mutate((C_word*)lf[136]+1,C_fix((C_word)SIGABRT));
t37=C_mutate((C_word*)lf[137]+1,C_fix((C_word)SIGTRAP));
t38=C_mutate((C_word*)lf[138]+1,C_fix((C_word)SIGQUIT));
t39=C_mutate((C_word*)lf[139]+1,C_fix((C_word)SIGALRM));
t40=C_mutate((C_word*)lf[140]+1,C_fix((C_word)SIGVTALRM));
t41=C_mutate((C_word*)lf[141]+1,C_fix((C_word)SIGPROF));
t42=C_mutate((C_word*)lf[142]+1,C_fix((C_word)SIGIO));
t43=C_mutate((C_word*)lf[143]+1,C_fix((C_word)SIGURG));
t44=C_mutate((C_word*)lf[144]+1,C_fix((C_word)SIGCHLD));
t45=C_mutate((C_word*)lf[145]+1,C_fix((C_word)SIGCONT));
t46=C_mutate((C_word*)lf[146]+1,C_fix((C_word)SIGSTOP));
t47=C_mutate((C_word*)lf[147]+1,C_fix((C_word)SIGTSTP));
t48=C_mutate((C_word*)lf[148]+1,C_fix((C_word)SIGPIPE));
t49=C_mutate((C_word*)lf[149]+1,C_fix((C_word)SIGXCPU));
t50=C_mutate((C_word*)lf[150]+1,C_fix((C_word)SIGXFSZ));
t51=C_mutate((C_word*)lf[151]+1,C_fix((C_word)SIGUSR1));
t52=C_mutate((C_word*)lf[152]+1,C_fix((C_word)SIGUSR2));
t53=C_mutate((C_word*)lf[153]+1,C_fix((C_word)SIGWINCH));
t54=(C_word)C_a_i_list(&a,25,*((C_word*)lf[129]+1),*((C_word*)lf[130]+1),*((C_word*)lf[131]+1),*((C_word*)lf[132]+1),*((C_word*)lf[133]+1),*((C_word*)lf[134]+1),*((C_word*)lf[135]+1),*((C_word*)lf[136]+1),*((C_word*)lf[137]+1),*((C_word*)lf[138]+1),*((C_word*)lf[139]+1),*((C_word*)lf[140]+1),*((C_word*)lf[141]+1),*((C_word*)lf[142]+1),*((C_word*)lf[143]+1),*((C_word*)lf[144]+1),*((C_word*)lf[145]+1),*((C_word*)lf[146]+1),*((C_word*)lf[147]+1),*((C_word*)lf[148]+1),*((C_word*)lf[149]+1),*((C_word*)lf[150]+1),*((C_word*)lf[151]+1),*((C_word*)lf[152]+1),*((C_word*)lf[153]+1));
t55=C_mutate((C_word*)lf[154]+1,t54);
t56=*((C_word*)lf[155]+1);
t57=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2429,a[2]=((C_word*)t0)[2],a[3]=t56,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 963  make-vector */
t58=*((C_word*)lf[399]+1);
((C_proc4)(void*)(*((C_word*)t58+1)))(4,t58,t57,C_fix(256),C_SCHEME_FALSE);}

/* k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2429(C_word c,C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2429,2,t0,t1);}
t2=C_mutate((C_word*)lf[156]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2431,a[2]=t1,tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[157]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2437,a[2]=t1,tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[155]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2447,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[158]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2465,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[161]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2483,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[162]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2515,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[163]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2518,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[165]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2530,tmp=(C_word)a,a+=2,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2543,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5666,tmp=(C_word)a,a+=2,tmp);
/* posixunix.scm: 1019 set-signal-handler! */
t12=*((C_word*)lf[157]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t10,*((C_word*)lf[131]+1),t11);}

/* a5665 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5666(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5666,3,t0,t1,t2);}
/* posixunix.scm: 1021 ##sys#user-interrupt-hook */
t3=*((C_word*)lf[398]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2543(C_word c,C_word t0,C_word t1){
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
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2543,2,t0,t1);}
t2=C_mutate((C_word*)lf[167]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2545,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate((C_word*)lf[170]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2583,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[171]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2628,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[172],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2682,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[173]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2685,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[177]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2748,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[180]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2811,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[182]+1,C_fix((C_word)EPERM));
t10=C_mutate((C_word*)lf[183]+1,C_fix((C_word)ENOENT));
t11=C_mutate((C_word*)lf[184]+1,C_fix((C_word)ESRCH));
t12=C_mutate((C_word*)lf[185]+1,C_fix((C_word)EINTR));
t13=C_mutate((C_word*)lf[186]+1,C_fix((C_word)EIO));
t14=C_mutate((C_word*)lf[187]+1,C_fix((C_word)ENOEXEC));
t15=C_mutate((C_word*)lf[188]+1,C_fix((C_word)EBADF));
t16=C_mutate((C_word*)lf[189]+1,C_fix((C_word)ECHILD));
t17=C_mutate((C_word*)lf[190]+1,C_fix((C_word)ENOMEM));
t18=C_mutate((C_word*)lf[191]+1,C_fix((C_word)EACCES));
t19=C_mutate((C_word*)lf[192]+1,C_fix((C_word)EFAULT));
t20=C_mutate((C_word*)lf[193]+1,C_fix((C_word)EBUSY));
t21=C_mutate((C_word*)lf[194]+1,C_fix((C_word)ENOTDIR));
t22=C_mutate((C_word*)lf[195]+1,C_fix((C_word)EISDIR));
t23=C_mutate((C_word*)lf[196]+1,C_fix((C_word)EINVAL));
t24=C_mutate((C_word*)lf[197]+1,C_fix((C_word)EMFILE));
t25=C_mutate((C_word*)lf[198]+1,C_fix((C_word)ENOSPC));
t26=C_mutate((C_word*)lf[199]+1,C_fix((C_word)ESPIPE));
t27=C_mutate((C_word*)lf[200]+1,C_fix((C_word)EPIPE));
t28=C_mutate((C_word*)lf[201]+1,C_fix((C_word)EAGAIN));
t29=C_mutate((C_word*)lf[202]+1,C_fix((C_word)EROFS));
t30=C_mutate((C_word*)lf[203]+1,C_fix((C_word)EEXIST));
t31=C_mutate((C_word*)lf[204]+1,C_fix((C_word)EWOULDBLOCK));
t32=C_set_block_item(lf[205],0,C_fix(0));
t33=C_set_block_item(lf[206],0,C_fix(0));
t34=C_set_block_item(lf[207],0,C_fix(0));
t35=C_set_block_item(lf[208],0,C_fix(0));
t36=C_set_block_item(lf[209],0,C_fix(0));
t37=C_set_block_item(lf[210],0,C_fix(0));
t38=C_set_block_item(lf[211],0,C_fix(0));
t39=C_set_block_item(lf[212],0,C_fix(0));
t40=C_set_block_item(lf[213],0,C_fix(0));
t41=C_set_block_item(lf[214],0,C_fix(0));
t42=C_set_block_item(lf[215],0,C_fix(0));
t43=C_set_block_item(lf[216],0,C_fix(0));
t44=C_set_block_item(lf[217],0,C_fix(0));
t45=C_set_block_item(lf[218],0,C_fix(0));
t46=C_set_block_item(lf[219],0,C_fix(0));
t47=C_set_block_item(lf[220],0,C_fix(0));
t48=C_mutate((C_word*)lf[221]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2869,tmp=(C_word)a,a+=2,tmp));
t49=C_mutate((C_word*)lf[223]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2890,tmp=(C_word)a,a+=2,tmp));
t50=C_mutate((C_word*)lf[225]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2911,tmp=(C_word)a,a+=2,tmp));
t51=C_mutate((C_word*)lf[226]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2914,tmp=(C_word)a,a+=2,tmp));
t52=C_mutate((C_word*)lf[227]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2917,tmp=(C_word)a,a+=2,tmp));
t53=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2934,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t54=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5663,tmp=(C_word)a,a+=2,tmp);
/* posixunix.scm: 1247 getter-with-setter */
t55=*((C_word*)lf[397]+1);
((C_proc4)(void*)(*((C_word*)t55+1)))(4,t55,t53,t54,*((C_word*)lf[227]+1));}

/* a5662 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5663,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub369(C_SCHEME_UNDEFINED));}

/* k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2934,2,t0,t1);}
t2=C_mutate((C_word*)lf[229]+1,t1);
t3=C_mutate((C_word*)lf[230]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2936,tmp=(C_word)a,a+=2,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2953,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5660,tmp=(C_word)a,a+=2,tmp);
/* posixunix.scm: 1258 getter-with-setter */
t6=*((C_word*)lf[397]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,*((C_word*)lf[230]+1));}

/* a5659 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5660,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub373(C_SCHEME_UNDEFINED));}

/* k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2953(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2953,2,t0,t1);}
t2=C_mutate((C_word*)lf[232]+1,t1);
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2955,tmp=(C_word)a,a+=2,tmp);
t4=C_mutate((C_word*)lf[233]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2976,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[234]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2982,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[235]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2988,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[236]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2994,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[238]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3009,tmp=(C_word)a,a+=2,tmp));
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3026,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5645,tmp=(C_word)a,a+=2,tmp);
/* posixunix.scm: 1291 getter-with-setter */
t11=*((C_word*)lf[397]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,*((C_word*)lf[238]+1));}

/* a5644 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5645(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5645,3,t0,t1,t2);}
t3=(C_word)C_getpgid(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5649,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5655,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1296 ##sys#update-errno */
t6=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t4;
f_5649(2,t5,C_SCHEME_UNDEFINED);}}

/* k5653 in a5644 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1297 ##sys#error */
t2=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[240],lf[396],((C_word*)t0)[2]);}

/* k5647 in a5644 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3026,2,t0,t1);}
t2=C_mutate((C_word*)lf[240]+1,t1);
t3=C_mutate((C_word*)lf[241]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3028,tmp=(C_word)a,a+=2,tmp));
t4=*((C_word*)lf[244]+1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3059,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_u_fixnum_plus(C_fix((C_word)FILENAME_MAX),C_fix(1));
/* posixunix.scm: 1318 make-string */
t7=*((C_word*)lf[56]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3059(C_word c,C_word t0,C_word t1){
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
C_word ab[177],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3059,2,t0,t1);}
t2=C_mutate((C_word*)lf[245]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3060,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp));
t3=C_mutate((C_word*)lf[247]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3099,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate((C_word*)lf[250]+1,C_fix((C_word)STDIN_FILENO));
t5=C_mutate((C_word*)lf[251]+1,C_fix((C_word)STDOUT_FILENO));
t6=C_mutate((C_word*)lf[252]+1,C_fix((C_word)STDERR_FILENO));
t7=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3118,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3155,tmp=(C_word)a,a+=2,tmp);
t9=C_mutate((C_word*)lf[261]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3170,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[262]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3181,a[2]=t7,a[3]=t8,tmp=(C_word)a,a+=4,tmp));
t11=C_mutate((C_word*)lf[263]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3192,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[269]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3234,tmp=(C_word)a,a+=2,tmp));
t13=*((C_word*)lf[271]+1);
t14=*((C_word*)lf[272]+1);
t15=C_mutate((C_word*)lf[273]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3255,a[2]=t13,a[3]=t14,tmp=(C_word)a,a+=4,tmp));
t16=*((C_word*)lf[283]+1);
t17=*((C_word*)lf[272]+1);
t18=C_mutate((C_word*)lf[284]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3524,a[2]=t16,a[3]=t17,tmp=(C_word)a,a+=4,tmp));
t19=C_mutate((C_word*)lf[287]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3760,tmp=(C_word)a,a+=2,tmp));
t20=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3796,tmp=(C_word)a,a+=2,tmp);
t21=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3858,tmp=(C_word)a,a+=2,tmp);
t22=C_mutate((C_word*)lf[291]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3876,a[2]=t20,a[3]=t21,tmp=(C_word)a,a+=4,tmp));
t23=C_mutate((C_word*)lf[293]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3891,a[2]=t20,a[3]=t21,tmp=(C_word)a,a+=4,tmp));
t24=C_mutate((C_word*)lf[295]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3906,a[2]=t20,a[3]=t21,tmp=(C_word)a,a+=4,tmp));
t25=C_mutate((C_word*)lf[297]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3928,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[299]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3953,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[301]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3990,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[303]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4013,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[304]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4024,tmp=(C_word)a,a+=2,tmp));
t30=C_mutate((C_word*)lf[305]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4036,tmp=(C_word)a,a+=2,tmp));
t31=C_mutate((C_word*)lf[306]+1,C_fix((C_word)PROT_READ));
t32=C_mutate((C_word*)lf[307]+1,C_fix((C_word)PROT_WRITE));
t33=C_mutate((C_word*)lf[308]+1,C_fix((C_word)PROT_EXEC));
t34=C_mutate((C_word*)lf[309]+1,C_fix((C_word)PROT_NONE));
t35=C_mutate((C_word*)lf[310]+1,C_fix((C_word)MAP_FIXED));
t36=C_mutate((C_word*)lf[311]+1,C_fix((C_word)MAP_SHARED));
t37=C_mutate((C_word*)lf[312]+1,C_fix((C_word)MAP_PRIVATE));
t38=C_mutate((C_word*)lf[313]+1,C_fix((C_word)MAP_ANON));
t39=C_mutate((C_word*)lf[314]+1,C_fix((C_word)MAP_FILE));
t40=C_mutate((C_word*)lf[315]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4119,tmp=(C_word)a,a+=2,tmp));
t41=C_mutate((C_word*)lf[321]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4177,tmp=(C_word)a,a+=2,tmp));
t42=C_mutate((C_word*)lf[323]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4209,tmp=(C_word)a,a+=2,tmp));
t43=C_mutate((C_word*)lf[324]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4215,tmp=(C_word)a,a+=2,tmp));
t44=C_mutate((C_word*)lf[325]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4221,tmp=(C_word)a,a+=2,tmp));
t45=C_mutate((C_word*)lf[327]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4227,tmp=(C_word)a,a+=2,tmp));
t46=C_mutate((C_word*)lf[328]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4238,tmp=(C_word)a,a+=2,tmp));
t47=C_mutate((C_word*)lf[330]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4255,tmp=(C_word)a,a+=2,tmp));
t48=C_mutate((C_word*)lf[333]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4283,tmp=(C_word)a,a+=2,tmp));
t49=C_mutate((C_word*)lf[337]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4311,tmp=(C_word)a,a+=2,tmp));
t50=C_mutate((C_word*)lf[340]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4339,tmp=(C_word)a,a+=2,tmp));
t51=C_mutate((C_word*)lf[341]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4347,tmp=(C_word)a,a+=2,tmp));
t52=C_mutate((C_word*)lf[343]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4366,tmp=(C_word)a,a+=2,tmp));
t53=C_mutate((C_word*)lf[344]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4369,tmp=(C_word)a,a+=2,tmp));
t54=C_mutate((C_word*)lf[350]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4422,tmp=(C_word)a,a+=2,tmp));
t55=C_mutate((C_word*)lf[351]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4443,tmp=(C_word)a,a+=2,tmp));
t56=C_mutate((C_word*)lf[353]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4470,tmp=(C_word)a,a+=2,tmp));
t57=*((C_word*)lf[356]+1);
t58=*((C_word*)lf[100]+1);
t59=*((C_word*)lf[357]+1);
t60=*((C_word*)lf[358]+1);
t61=C_mutate((C_word*)lf[359]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4482,a[2]=t57,a[3]=t58,a[4]=t59,a[5]=t60,tmp=(C_word)a,a+=6,tmp));
t62=C_mutate((C_word*)lf[363]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4588,tmp=(C_word)a,a+=2,tmp));
t63=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4626,tmp=(C_word)a,a+=2,tmp);
t64=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4634,tmp=(C_word)a,a+=2,tmp);
t65=*((C_word*)lf[365]+1);
t66=C_mutate((C_word*)lf[366]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4642,a[2]=t65,a[3]=t64,a[4]=t63,tmp=(C_word)a,a+=5,tmp));
t67=C_mutate((C_word*)lf[368]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4806,tmp=(C_word)a,a+=2,tmp));
t68=C_mutate((C_word*)lf[369]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4823,tmp=(C_word)a,a+=2,tmp));
t69=C_mutate((C_word*)lf[371]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4895,tmp=(C_word)a,a+=2,tmp));
t70=C_mutate((C_word*)lf[372]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4898,tmp=(C_word)a,a+=2,tmp));
t71=C_mutate((C_word*)lf[373]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4901,tmp=(C_word)a,a+=2,tmp));
t72=C_mutate((C_word*)lf[374]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4904,tmp=(C_word)a,a+=2,tmp));
t73=C_mutate((C_word*)lf[376]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4925,tmp=(C_word)a,a+=2,tmp));
t74=C_mutate((C_word*)lf[380]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4934,tmp=(C_word)a,a+=2,tmp));
t75=*((C_word*)lf[363]+1);
t76=*((C_word*)lf[366]+1);
t77=*((C_word*)lf[378]+1);
t78=C_mutate((C_word*)lf[382]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4940,a[2]=t75,a[3]=t76,tmp=(C_word)a,a+=4,tmp));
t79=*((C_word*)lf[127]+1);
t80=*((C_word*)lf[369]+1);
t81=*((C_word*)lf[363]+1);
t82=*((C_word*)lf[366]+1);
t83=*((C_word*)lf[269]+1);
t84=*((C_word*)lf[54]+1);
t85=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4996,a[2]=t80,tmp=(C_word)a,a+=3,tmp);
t86=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5033,a[2]=t79,tmp=(C_word)a,a+=3,tmp);
t87=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5053,a[2]=t84,tmp=(C_word)a,a+=3,tmp);
t88=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5070,a[2]=t84,tmp=(C_word)a,a+=3,tmp);
t89=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5087,a[2]=t86,a[3]=t81,a[4]=t88,a[5]=t82,tmp=(C_word)a,a+=6,tmp);
t90=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5148,a[2]=t87,tmp=(C_word)a,a+=3,tmp);
t91=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5159,a[2]=t87,tmp=(C_word)a,a+=3,tmp);
t92=C_mutate((C_word*)lf[384]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5170,a[2]=t91,a[3]=t85,a[4]=t90,a[5]=t89,tmp=(C_word)a,a+=6,tmp));
t93=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5226,tmp=(C_word)a,a+=2,tmp);
t94=C_mutate((C_word*)lf[385]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5282,a[2]=t93,tmp=(C_word)a,a+=3,tmp));
t95=C_mutate((C_word*)lf[386]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5339,a[2]=t93,tmp=(C_word)a,a+=3,tmp));
t96=*((C_word*)lf[359]+1);
t97=*((C_word*)lf[360]+1);
t98=*((C_word*)lf[357]+1);
t99=*((C_word*)lf[104]+1);
t100=C_mutate((C_word*)lf[387]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5396,a[2]=t99,a[3]=t98,a[4]=t96,a[5]=t97,tmp=(C_word)a,a+=6,tmp));
t101=C_mutate((C_word*)lf[394]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5625,tmp=(C_word)a,a+=2,tmp));
t102=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t102+1)))(2,t102,C_SCHEME_UNDEFINED);}

/* set-root-directory! in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5625(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5625,3,t0,t1,t2);}
t3=t2;
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5621,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
/* ##sys#make-c-string */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t3);}
else{
t5=t4;
f_5621(2,t5,C_SCHEME_FALSE);}}

/* k5619 in set-root-directory! in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)stub1123(C_SCHEME_UNDEFINED,t1);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 2109 posix-error */
t3=lf[3];
f_1331(6,t3,((C_word*)t0)[3],lf[48],lf[394],lf[395],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_5396r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5396r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5396r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5398,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5540,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5545,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5550,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-action10791112 */
t9=t8;
f_5550(t9,t1);}
else{
t9=(C_word)C_u_i_car(t4);
t10=(C_word)C_slot(t4,C_fix(1));
if(C_truep((C_word)C_i_nullp(t10))){
/* def-id10801110 */
t11=t7;
f_5545(t11,t1,t9);}
else{
t11=(C_word)C_u_i_car(t10);
t12=(C_word)C_slot(t10,C_fix(1));
if(C_truep((C_word)C_i_nullp(t12))){
/* def-limit10811107 */
t13=t6;
f_5540(t13,t1,t9,t11);}
else{
t13=(C_word)C_u_i_car(t12);
t14=(C_word)C_slot(t12,C_fix(1));
/* body10771083 */
t15=t5;
f_5398(t15,t1,t9,t11,t13);}}}}

/* def-action1079 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5550(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5550,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5556,tmp=(C_word)a,a+=2,tmp);
/* def-id10801110 */
t3=((C_word*)t0)[2];
f_5545(t3,t1,t2);}

/* a5555 in def-action1079 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5556(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5556,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t2,t3));}

/* def-id1080 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5545(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5545,NULL,3,t0,t1,t2);}
/* def-limit10811107 */
t3=((C_word*)t0)[2];
f_5540(t3,t1,t2,C_SCHEME_END_OF_LIST);}

/* def-limit1081 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5540(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5540,NULL,4,t0,t1,t2,t3);}
/* body10771083 */
t4=((C_word*)t0)[2];
f_5398(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5398(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5398,NULL,5,t0,t1,t2,t3,t4);}
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5402,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t6,a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[7],tmp=(C_word)a,a+=12,tmp);
t8=t4;
if(C_truep(t8)){
t9=(C_word)C_fixnump(t4);
t10=t7;
f_5402(t10,(C_truep(t9)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5535,a[2]=t4,a[3]=t6,tmp=(C_word)a,a+=4,tmp):t4));}
else{
t9=t7;
f_5402(t9,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5527,tmp=(C_word)a,a+=2,tmp));}}

/* f_5527 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5527(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5527,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_TRUE);}

/* f_5535 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5535(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5535,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]));}

/* k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5402(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5402,NULL,2,t0,t1);}
t2=(C_word)C_i_stringp(((C_word*)t0)[11]);
t3=(C_truep(t2)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5519,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp):((C_word*)t0)[11]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5412,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5515,a[2]=t4,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2081 make-pathname */
t6=((C_word*)t0)[7];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[2],lf[393]);}

/* k5513 in k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2081 glob */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5410 in k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5412,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5414,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t3,tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_5414(t5,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* loop in k5410 in k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5414(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5414,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5433,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t3,a[10]=t5,a[11]=t1,a[12]=((C_word*)t0)[9],tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm: 2087 directory? */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}}

/* k5431 in loop in k5410 in k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5433,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5495,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm: 2088 pathname-file */
t3=*((C_word*)lf[392]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5501,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2094 pproc */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[5]);}}

/* k5499 in k5431 in loop in k5410 in k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5501,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5508,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2094 action */
t3=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* posixunix.scm: 2095 loop */
t2=((C_word*)((C_word*)t0)[7])[1];
f_5414(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k5506 in k5499 in k5431 in loop in k5410 in k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2094 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5414(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5493 in k5431 in loop in k5410 in k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5495,2,t0,t1);}
if(C_truep((C_truep((C_word)C_i_equalp(t1,lf[388]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t1,lf[389]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
/* posixunix.scm: 2088 loop */
t2=((C_word*)((C_word*)t0)[10])[1];
f_5414(t2,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5448,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
/* posixunix.scm: 2089 lproc */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}}

/* k5446 in k5493 in k5431 in loop in k5410 in k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5448(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5448,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_plus(((C_word*)((C_word*)t0)[9])[1],C_fix(1));
t3=t2;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_FALSE;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5458,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5460,a[2]=t4,a[3]=((C_word*)t0)[9],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5482,a[2]=t6,a[3]=((C_word*)t0)[9],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2091 ##sys#dynamic-wind */
t11=*((C_word*)lf[391]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t7,t8,t9,t10);}
else{
/* posixunix.scm: 2093 loop */
t2=((C_word*)((C_word*)t0)[8])[1];
f_5414(t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}}

/* a5481 in k5446 in k5493 in k5431 in loop in k5410 in k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5482,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[282]+1));}

/* a5467 in k5446 in k5493 in k5431 in loop in k5410 in k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5468,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5476,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5480,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2092 make-pathname */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],lf[390]);}

/* k5478 in a5467 in k5446 in k5493 in k5431 in loop in k5410 in k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2092 glob */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k5474 in a5467 in k5446 in k5493 in k5431 in loop in k5410 in k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2092 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5414(t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a5459 in k5446 in k5493 in k5431 in loop in k5410 in k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5460,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)((C_word*)t0)[2])[1]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,*((C_word*)lf[282]+1));}

/* k5456 in k5446 in k5493 in k5431 in loop in k5410 in k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2090 loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5414(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_5519 in k5400 in body1077 in find-files in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5519(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5519,3,t0,t1,t2);}
/* posixunix.scm: 2079 string-match */
t3=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,((C_word*)t0)[2],t2);}

/* process* in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5339(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_5339r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5339r(t0,t1,t2,t3);}}

static void C_ccall f_5339r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5341,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5346,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5351,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-args10411049 */
t7=t6;
f_5351(t7,t1);}
else{
t7=(C_word)C_u_i_car(t3);
t8=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t8))){
/* def-env10421047 */
t9=t5;
f_5346(t9,t1,t7);}
else{
t9=(C_word)C_u_i_car(t8);
t10=(C_word)C_slot(t8,C_fix(1));
/* body10391044 */
t11=t4;
f_5341(t11,t1,t7,t9);}}}

/* def-args1041 in process* in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5351(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5351,NULL,2,t0,t1);}
/* def-env10421047 */
t2=((C_word*)t0)[2];
f_5346(t2,t1,C_SCHEME_FALSE);}

/* def-env1042 in process* in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5346(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5346,NULL,3,t0,t1,t2);}
/* body10391044 */
t3=((C_word*)t0)[2];
f_5341(t3,t1,t2,C_SCHEME_FALSE);}

/* body1039 in process* in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5341(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5341,NULL,4,t0,t1,t2,t3);}
/* posixunix.scm: 2057 %process */
f_5226(t1,lf[386],C_SCHEME_TRUE,((C_word*)t0)[2],t2,t3);}

/* process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5282(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_5282r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5282r(t0,t1,t2,t3);}}

static void C_ccall f_5282r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5284,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5289,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5294,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-args10211029 */
t7=t6;
f_5294(t7,t1);}
else{
t7=(C_word)C_u_i_car(t3);
t8=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t8))){
/* def-env10221027 */
t9=t5;
f_5289(t9,t1,t7);}
else{
t9=(C_word)C_u_i_car(t8);
t10=(C_word)C_slot(t8,C_fix(1));
/* body10191024 */
t11=t4;
f_5284(t11,t1,t7,t9);}}}

/* def-args1021 in process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5294(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5294,NULL,2,t0,t1);}
/* def-env10221027 */
t2=((C_word*)t0)[2];
f_5289(t2,t1,C_SCHEME_FALSE);}

/* def-env1022 in process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5289(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5289,NULL,3,t0,t1,t2);}
/* body10191024 */
t3=((C_word*)t0)[2];
f_5284(t3,t1,t2,C_SCHEME_FALSE);}

/* body1019 in process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5284(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5284,NULL,4,t0,t1,t2,t3);}
/* posixunix.scm: 2054 %process */
f_5226(t1,lf[385],C_SCHEME_FALSE,((C_word*)t0)[2],t2,t3);}

/* %process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5226(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5226,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5230,a[2]=t1,a[3]=t3,a[4]=t6,a[5]=t8,a[6]=t7,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t8)[1])){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5268,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* for-each */
t11=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t9,t10,((C_word*)t8)[1]);}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5276,a[2]=t9,a[3]=t7,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 2042 ##sys#shell-command-arguments */
t11=*((C_word*)lf[380]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,((C_word*)t7)[1]);}}

/* k5274 in %process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5276,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5280,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 2043 ##sys#shell-command */
t4=*((C_word*)lf[376]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k5278 in k5274 in %process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5280(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_5230(2,t3,t2);}

/* a5267 in %process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5268(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5268,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_check_string_2(t2,((C_word*)t0)[2]));}

/* k5228 in %process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5230,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5233,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5259,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[4]);}
else{
t3=t2;
f_5233(2,t3,C_SCHEME_UNDEFINED);}}

/* a5258 in k5228 in %process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5259(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5259,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_check_string_2(t2,((C_word*)t0)[2]));}

/* k5231 in k5228 in %process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5233,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5238,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5244,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 2047 ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a5243 in k5231 in k5228 in %process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5244(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5244,6,t0,t1,t2,t3,t4,t5);}
if(C_truep(((C_word*)t0)[2])){
/* posixunix.scm: 2050 values */
C_values(6,0,t1,t2,t3,t4,t5);}
else{
/* posixunix.scm: 2051 values */
C_values(5,0,t1,t2,t3,t4);}}

/* a5237 in k5231 in k5228 in %process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5238,2,t0,t1);}
/* posixunix.scm: 2048 ##sys#process */
t2=*((C_word*)lf[384]+1);
((C_proc9)(void*)(*((C_word*)t2+1)))(9,t2,t1,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[3],C_SCHEME_TRUE,C_SCHEME_TRUE,((C_word*)t0)[2]);}

/* ##sys#process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5170(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_5170,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5176,a[2]=t8,a[3]=t7,a[4]=t6,a[5]=t5,a[6]=t4,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5182,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=t8,a[8]=t6,a[9]=t7,tmp=(C_word)a,a+=10,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t9,t10);}

/* a5181 in ##sys#process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5182(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_5182,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_not(((C_word*)t0)[9]);
t7=(C_word)C_i_not(((C_word*)t0)[8]);
t8=(C_word)C_i_not(((C_word*)t0)[7]);
t9=(C_word)C_a_i_vector(&a,3,t6,t7,t8);
t10=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5193,a[2]=((C_word*)t0)[8],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t9,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[7],a[8]=t4,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=((C_word*)t0)[6],a[12]=t5,a[13]=t1,tmp=(C_word)a,a+=14,tmp);
t11=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5213,a[2]=((C_word*)t0)[9],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t10,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2023 make-on-close */
t12=((C_word*)t0)[3];
f_4996(t12,t11,((C_word*)t0)[5],t5,t9,C_fix(0),C_fix(1),C_fix(2));}

/* k5211 in a5181 in ##sys#process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2022 input-port */
t2=((C_word*)t0)[7];
f_5148(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5191 in a5181 in ##sys#process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5197,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[12],a[10]=t1,a[11]=((C_word*)t0)[13],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5209,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=t2,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2025 make-on-close */
t4=((C_word*)t0)[6];
f_4996(t4,t3,((C_word*)t0)[10],((C_word*)t0)[12],((C_word*)t0)[5],C_fix(1),C_fix(0),C_fix(2));}

/* k5207 in k5191 in a5181 in ##sys#process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2024 output-port */
t2=((C_word*)t0)[7];
f_5159(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5195 in k5191 in a5181 in ##sys#process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5197,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5201,a[2]=((C_word*)t0)[9],a[3]=t1,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5205,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 2028 make-on-close */
t4=((C_word*)t0)[3];
f_4996(t4,t3,((C_word*)t0)[7],((C_word*)t0)[9],((C_word*)t0)[2],C_fix(2),C_fix(0),C_fix(1));}

/* k5203 in k5195 in k5191 in a5181 in ##sys#process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2027 input-port */
t2=((C_word*)t0)[7];
f_5148(t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5199 in k5195 in k5191 in a5181 in ##sys#process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5201(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2021 values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a5175 in ##sys#process in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5176,2,t0,t1);}
/* posixunix.scm: 2016 child */
t2=((C_word*)t0)[8];
f_5087(t2,t1,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5159(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5159,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5163,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 2012 connect-parent */
t8=((C_word*)t0)[2];
f_5053(t8,t7,t4,t5);}

/* k5161 in output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2013 ##sys#custom-output-port */
t2=*((C_word*)lf[284]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,C_fix(0),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5148(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5148,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5152,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 2008 connect-parent */
t8=((C_word*)t0)[2];
f_5053(t8,t7,t4,t5);}

/* k5150 in input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5152(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* posixunix.scm: 2009 ##sys#custom-input-port */
t2=*((C_word*)lf[273]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,C_fix(256),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* child in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5087(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5087,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t5,a[6]=t7,a[7]=((C_word*)t0)[4],a[8]=t4,a[9]=t3,a[10]=t2,a[11]=((C_word*)t0)[5],a[12]=t1,tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm: 1992 needed-pipe */
t9=((C_word*)t0)[2];
f_5033(t9,t8,t6);}

/* k5089 in child in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5091,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5094,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t1,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm: 1993 needed-pipe */
t3=((C_word*)t0)[2];
f_5033(t3,t2,((C_word*)t0)[5]);}

/* k5092 in k5089 in child in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5094,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5097,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t1,tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm: 1994 needed-pipe */
t3=((C_word*)t0)[2];
f_5033(t3,t2,((C_word*)t0)[6]);}

/* k5095 in k5092 in k5089 in child in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5098,tmp=(C_word)a,a+=2,tmp);
t3=f_5098(C_a_i(&a,3),((C_word*)t0)[13]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5124,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5126,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,a[9]=t2,a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],a[13]=((C_word*)t0)[10],tmp=(C_word)a,a+=14,tmp);
/* posixunix.scm: 2000 process-fork */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* a5125 in k5095 in k5092 in k5089 in child in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5126,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_5130,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=t1,a[12]=((C_word*)t0)[13],tmp=(C_word)a,a+=13,tmp);
/* posixunix.scm: 2002 connect-child */
t3=((C_word*)t0)[7];
f_5070(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],*((C_word*)lf[250]+1));}

/* k5128 in a5125 in k5095 in k5092 in k5089 in child in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5130,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5133,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],tmp=(C_word)a,a+=11,tmp);
t3=f_5098(C_a_i(&a,3),((C_word*)t0)[3]);
/* posixunix.scm: 2003 connect-child */
t4=((C_word*)t0)[5];
f_5070(t4,t2,t3,((C_word*)t0)[2],*((C_word*)lf[251]+1));}

/* k5131 in k5128 in a5125 in k5095 in k5092 in k5089 in child in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5133,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5136,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
t3=f_5098(C_a_i(&a,3),((C_word*)t0)[4]);
/* posixunix.scm: 2004 connect-child */
t4=((C_word*)t0)[3];
f_5070(t4,t2,t3,((C_word*)t0)[2],*((C_word*)lf[252]+1));}

/* k5134 in k5131 in k5128 in a5125 in k5095 in k5092 in k5089 in child in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 2005 process-execute */
t2=((C_word*)t0)[6];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5122 in k5095 in k5092 in k5089 in child in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1998 values */
C_values(6,0,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* swap-ends in k5095 in k5092 in k5089 in child in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall f_5098(C_word *a,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
if(C_truep(t1)){
t2=(C_word)C_slot(t1,C_fix(1));
t3=(C_word)C_u_i_car(t1);
return((C_word)C_a_i_cons(&a,2,t2,t3));}
else{
return(C_SCHEME_FALSE);}}

/* connect-child in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5070(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5070,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=(C_word)C_u_i_car(t2);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5083,a[2]=t5,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1987 file-close */
t8=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* k5081 in connect-child in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5083,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=(C_word)C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
t5=t2;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4992,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1960 duplicate-fileno */
t6=*((C_word*)lf[269]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[2],t3);}}

/* k4990 in k5081 in connect-child in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1961 file-close */
t2=*((C_word*)lf[54]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* connect-parent in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5053(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5053,NULL,4,t0,t1,t2,t3);}
if(C_truep(t3)){
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5066,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1980 file-close */
t7=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k5064 in connect-parent in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5066,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1981 ##sys#file-nonblocking! */
t3=*((C_word*)lf[9]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k5067 in k5064 in connect-parent in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* needed-pipe in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_5033(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5033,NULL,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5042,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_5048,tmp=(C_word)a,a+=2,tmp);
/* posixunix.scm: 1975 ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t3,t4);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* a5047 in needed-pipe in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5048(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5048,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t2,t3));}

/* a5041 in needed-pipe in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_5042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5042,2,t0,t1);}
/* posixunix.scm: 1975 create-pipe */
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}

/* make-on-close in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_4996(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4996,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4998,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t7,a[6]=t6,a[7]=t5,a[8]=t4,tmp=(C_word)a,a+=9,tmp));}

/* f_4998 in make-on-close in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4998,2,t0,t1);}
t2=(C_word)C_i_set_i_slot(((C_word*)t0)[8],((C_word*)t0)[7],C_SCHEME_TRUE);
t3=(C_word)C_slot(((C_word*)t0)[8],((C_word*)t0)[6]);
t4=(C_truep(t3)?(C_word)C_slot(((C_word*)t0)[8],((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5013,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5019,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1968 ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t5,t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* a5018 */
static void C_ccall f_5019(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5019,5,t0,t1,t2,t3,t4);}
if(C_truep(t3)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1970 ##sys#signal-hook */
t5=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t1,lf[159],((C_word*)t0)[3],lf[383],((C_word*)t0)[2],t4);}}

/* a5012 */
static void C_ccall f_5013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5013,2,t0,t1);}
/* posixunix.scm: 1968 process-wait */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* process-run in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4940(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3rv,(void*)f_4940r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_4940r(t0,t1,t2,t3);}}

static void C_ccall f_4940r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_slot(t3,C_fix(0)):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4947,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1924 process-fork */
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k4945 in process-run in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4947,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(t2)){
if(C_truep(((C_word*)t0)[5])){
/* posixunix.scm: 1926 process-execute */
t3=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4966,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1928 ##sys#shell-command */
t4=*((C_word*)lf[376]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k4964 in k4945 in process-run in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4970,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1928 ##sys#shell-command-arguments */
t3=*((C_word*)lf[380]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4968 in k4964 in k4945 in process-run in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1928 process-execute */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##sys#shell-command-arguments in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4934(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4934,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[381],t2));}

/* ##sys#shell-command in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4929,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1913 getenv */
t3=*((C_word*)lf[378]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[379]);}

/* k4927 in ##sys#shell-command in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:lf[377]));}

/* process-signal in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4904(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3rv,(void*)f_4904r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_4904r(t0,t1,t2,t3);}}

static void C_ccall f_4904r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_slot(t3,C_fix(0)):C_fix((C_word)SIGTERM));
t6=(C_word)C_kill(t2,t5);
t7=(C_word)C_eqp(t6,C_fix(-1));
if(C_truep(t7)){
/* posixunix.scm: 1908 posix-error */
t8=lf[3];
f_1331(7,t8,t1,lf[159],lf[374],lf[375],t2,t5);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_UNDEFINED);}}

/* sleep in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4901(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4901,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub890(C_SCHEME_UNDEFINED,t2));}

/* parent-process-id in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4898,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub887(C_SCHEME_UNDEFINED));}

/* current-process-id in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4895,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub885(C_SCHEME_UNDEFINED));}

/* process-wait in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4823(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_4823r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4823r(t0,t1,t2);}}

static void C_ccall f_4823r(C_word t0,C_word t1,C_word t2){
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
C_word *a=C_alloc(7);
t3=(C_word)C_i_nullp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:(C_word)C_u_i_car(t2));
t5=(C_word)C_i_nullp(t2);
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t2,C_fix(1)));
t7=(C_word)C_i_nullp(t6);
t8=(C_truep(t7)?C_SCHEME_FALSE:(C_word)C_u_i_car(t6));
t9=(C_word)C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t6,C_fix(1)));
t11=(C_truep(t4)?t4:C_fix(-1));
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4847,a[2]=t8,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4853,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1892 ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t12,t13);}

/* a4852 in process-wait in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4853(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4853,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t5)){
/* posixunix.scm: 1894 posix-error */
t6=lf[3];
f_1331(6,t6,t1,lf[159],lf[369],lf[370],((C_word*)t0)[2]);}
else{
/* posixunix.scm: 1895 values */
C_values(5,0,t1,t2,t3,t4);}}

/* a4846 in process-wait in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4847,2,t0,t1);}
/* posixunix.scm: 1892 ##sys#process-wait */
t2=*((C_word*)lf[368]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#process-wait in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4806(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4806,4,t0,t1,t2,t3);}
t4=(C_truep(t3)?C_fix((C_word)WNOHANG):C_fix(0));
t5=(C_word)C_waitpid(t2,t4);
t6=(C_word)C_WIFEXITED(C_fix((C_word)C_wait_status));
t7=(C_truep(t6)?(C_word)C_WEXITSTATUS(C_fix((C_word)C_wait_status)):(C_truep((C_word)C_WIFSIGNALED(C_fix((C_word)C_wait_status)))?(C_word)C_WTERMSIG(C_fix((C_word)C_wait_status)):(C_word)C_WSTOPSIG(C_fix((C_word)C_wait_status))));
/* posixunix.scm: 1879 values */
C_values(5,0,t1,t5,t6,t7);}

/* process-execute in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4642(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_4642r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4642r(t0,t1,t2,t3);}}

static void C_ccall f_4642r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(12);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4644,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4756,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4761,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-arglist831861 */
t7=t6;
f_4761(t7,t1);}
else{
t7=(C_word)C_u_i_car(t3);
t8=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t8))){
/* def-envlist832859 */
t9=t5;
f_4756(t9,t1,t7);}
else{
t9=(C_word)C_u_i_car(t8);
t10=(C_word)C_slot(t8,C_fix(1));
/* body829834 */
t11=t4;
f_4644(t11,t1,t7,t9);}}}

/* def-arglist831 in process-execute in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_4761(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4761,NULL,2,t0,t1);}
/* def-envlist832859 */
t2=((C_word*)t0)[2];
f_4756(t2,t1,C_SCHEME_END_OF_LIST);}

/* def-envlist832 in process-execute in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_4756(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4756,NULL,3,t0,t1,t2);}
/* body829834 */
t3=((C_word*)t0)[2];
f_4644(t3,t1,t2,C_SCHEME_FALSE);}

/* body829 in process-execute in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_4644(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4644,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4648,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 1848 pathname-strip-directory */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[4]);}

/* k4646 in body829 in process-execute in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4648,2,t0,t1);}
t2=(C_word)C_block_size(t1);
t3=f_4626(C_fix(0),t1,t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4656,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_4656(t7,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(1));}

/* do838 in k4646 in body829 in process-execute in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_4656(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4656,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=f_4626(t3,C_SCHEME_FALSE,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4669,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[5])){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4699,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t7=t5;
f_4669(t7,f_4699(t6,((C_word*)t0)[5],C_fix(0)));}
else{
t6=t5;
f_4669(t6,C_SCHEME_UNDEFINED);}}
else{
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_block_size(t4);
t6=f_4626(t3,t4,t5);
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_u_fixnum_plus(t3,C_fix(1));
t13=t1;
t14=t7;
t15=t8;
t1=t13;
t2=t14;
t3=t15;
goto loop;}}

/* do842 in do838 in k4646 in body829 in process-execute in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall f_4699(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
loop:
if(C_truep((C_word)C_i_nullp(t1))){
return(f_4634(t2,C_SCHEME_FALSE,C_fix(0)));}
else{
t3=(C_word)C_u_i_car(t1);
t4=(C_word)C_block_size(t3);
t5=f_4634(t2,t3,t4);
t6=(C_word)C_slot(t1,C_fix(1));
t7=(C_word)C_u_fixnum_plus(t2,C_fix(1));
t9=t6;
t10=t7;
t1=t9;
t2=t10;
goto loop;}}

/* k4667 in do838 in k4646 in body829 in process-execute in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_4669(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4669,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4672,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4694,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1861 ##sys#expand-home-path */
t4=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k4692 in k4667 in do838 in k4646 in body829 in process-execute in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1861 ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4670 in k4667 in do838 in k4646 in body829 in process-execute in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4672(C_word c,C_word t0,C_word t1){
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
t4=(C_word)stub810(C_SCHEME_UNDEFINED);
t5=(C_word)stub822(C_SCHEME_UNDEFINED);
/* posixunix.scm: 1868 posix-error */
t6=lf[3];
f_1331(6,t6,((C_word*)t0)[3],lf[159],lf[366],lf[367],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* setenv in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall f_4634(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
t4=(C_truep(t2)?t2:C_SCHEME_FALSE);
return((C_word)stub815(C_SCHEME_UNDEFINED,t1,t4,t3));}

/* setarg in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall f_4626(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
t4=(C_truep(t2)?t2:C_SCHEME_FALSE);
return((C_word)stub803(C_SCHEME_UNDEFINED,t1,t4,t3));}

/* process-fork in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4588(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2rv,(void*)f_4588r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_4588r(t0,t1,t2);}}

static void C_ccall f_4588r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(3);
t3=(C_word)stub786(C_SCHEME_UNDEFINED);
t4=(C_word)C_eqp(C_fix(-1),t3);
if(C_truep(t4)){
/* posixunix.scm: 1833 posix-error */
t5=lf[3];
f_1331(5,t5,t1,lf[159],lf[363],lf[364]);}
else{
t5=(C_word)C_notvemptyp(t2);
t6=(C_truep(t5)?(C_word)C_eqp(t3,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4610,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_slot(t2,C_fix(0));
t9=t8;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t7);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t3);}}}

/* k4608 in process-fork in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4610,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_4614,tmp=(C_word)a,a+=2,tmp);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* f_4614 in k4608 in process-fork in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4614(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4614,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub791(C_SCHEME_UNDEFINED,t2));}

/* glob in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4482(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_4482r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_4482r(t0,t1,t2);}}

static void C_ccall f_4482r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4488,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_4488(t6,t1,t2);}

/* conc in glob in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_4488(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4488,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4503,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4509,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}}

/* a4508 in conc in glob in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4509(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4509,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4513,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4580,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t7=(C_truep(t3)?t3:lf[362]);
/* posixunix.scm: 1817 make-pathname */
t8=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t6,C_SCHEME_FALSE,t7,t4);}

/* k4578 in a4508 in conc in glob in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1817 glob->regexp */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k4511 in a4508 in conc in glob in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4513,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4520,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[4]:lf[361]);
/* posixunix.scm: 1818 directory */
t4=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_SCHEME_TRUE);}

/* k4518 in k4511 in a4508 in conc in glob in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4520(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4520,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4522,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_4522(t5,((C_word*)t0)[2],t1);}

/* loop in k4518 in k4511 in a4508 in conc in glob in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_4522(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4522,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_slot(((C_word*)t0)[7],C_fix(1));
/* posixunix.scm: 1819 conc */
t4=((C_word*)((C_word*)t0)[6])[1];
f_4488(t4,t1,t3);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4539,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_u_i_car(t2);
/* posixunix.scm: 1820 string-match */
t5=*((C_word*)lf[360]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,((C_word*)t0)[2],t4);}}

/* k4537 in loop in k4518 in k4511 in a4508 in conc in glob in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4539,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4549,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_u_i_car(t1);
/* posixunix.scm: 1821 make-pathname */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}
else{
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* posixunix.scm: 1822 loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_4522(t3,((C_word*)t0)[6],t2);}}

/* k4547 in k4537 in loop in k4518 in k4511 in a4508 in conc in glob in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4553,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm: 1821 loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4522(t4,t2,t3);}

/* k4551 in k4547 in k4537 in loop in k4518 in k4511 in a4508 in conc in glob in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4553,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* a4502 in conc in glob in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4503(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4503,2,t0,t1);}
/* posixunix.scm: 1816 decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* get-host-name in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4470,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4474,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t4=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,(C_word)stub749(t3),C_fix(0));}

/* k4472 in get-host-name in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4474,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4477,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_4477(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1800 posix-error */
t3=lf[3];
f_1331(5,t3,t2,lf[354],lf[353],lf[355]);}}

/* k4475 in k4472 in get-host-name in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* terminal-name in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4443(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4443,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4447,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(t2,C_fix(7));
t5=(C_word)C_eqp(lf[87],t4);
t6=(C_truep(t5)?(C_word)C_tty_portp(t2):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=t3;
f_4447(2,t7,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1789 ##sys#error */
t7=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t3,lf[351],lf[352],t2);}}

/* k4445 in terminal-name in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4447,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=(C_word)C_C_fileno(((C_word*)t0)[2]);
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-nonnull-c-string */
t5=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,(C_word)stub742(t4,t3),C_fix(0));}

/* terminal-port? in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4422(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4422,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4426,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1780 ##sys#peek-unsigned-integer */
t4=*((C_word*)lf[268]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,t2,C_fix(0));}

/* k4424 in terminal-port? in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(t1,C_fix(0));
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?C_SCHEME_FALSE:(C_word)C_tty_portp(((C_word*)t0)[2])));}

/* set-buffering-mode! in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4369(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_4369r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_4369r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4369r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4376,a[2]=t1,a[3]=t6,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_eqp(t7,lf[346]);
if(C_truep(t9)){
t10=t8;
f_4376(2,t10,C_fix((C_word)_IOFBF));}
else{
t10=(C_word)C_eqp(t7,lf[347]);
if(C_truep(t10)){
t11=t8;
f_4376(2,t11,C_fix((C_word)_IOLBF));}
else{
t11=(C_word)C_eqp(t7,lf[348]);
if(C_truep(t11)){
t12=t8;
f_4376(2,t12,C_fix((C_word)_IONBF));}
else{
/* posixunix.scm: 1767 ##sys#error */
t12=*((C_word*)lf[108]+1);
((C_proc6)(void*)(*((C_word*)t12+1)))(6,t12,t8,lf[344],lf[349],t3,t2);}}}}

/* k4374 in set-buffering-mode! in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(7));
t3=(C_word)C_eqp(lf[87],t2);
t4=(C_truep(t3)?(C_word)C_setvbuf(((C_word*)t0)[4],t1,((C_word*)t0)[3]):C_fix(-1));
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
/* posixunix.scm: 1773 ##sys#error */
t5=*((C_word*)lf[108]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,((C_word*)t0)[2],lf[344],lf[345],((C_word*)t0)[4],t1,((C_word*)t0)[3]);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* set-alarm! in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4366(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4366,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub728(C_SCHEME_UNDEFINED,t2));}

/* _exit in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4347(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2rv,(void*)f_4347r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_4347r(t0,t1,t2);}}

static void C_ccall f_4347r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4351,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1749 ##sys#cleanup-before-exit */
t4=*((C_word*)lf[342]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k4349 in _exit in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4351(C_word c,C_word t0,C_word t1){
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
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub722(C_SCHEME_UNDEFINED,t3));}

/* local-timezone-abbreviation in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4339,2,t0,t1);}
t2=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,(C_word)stub717(t2),C_fix(0));}

/* utc-time->seconds in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4311(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4311,3,t0,t1,t2);}
t3=(C_word)C_i_check_vector_2(t2,lf[337]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4318,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(10)))){
/* posixunix.scm: 1727 ##sys#error */
t6=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[337],lf[339],t2);}
else{
t6=t4;
f_4318(2,t6,C_SCHEME_UNDEFINED);}}

/* k4316 in utc-time->seconds in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_timegm(((C_word*)t0)[3]))){
/* posixunix.scm: 1729 ##sys#cons-flonum */
t2=*((C_word*)lf[334]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
/* posixunix.scm: 1730 ##sys#error */
t2=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[337],lf[338],((C_word*)t0)[3]);}}

/* local-time->seconds in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4283(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4283,3,t0,t1,t2);}
t3=(C_word)C_i_check_vector_2(t2,lf[333]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4290,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(10)))){
/* posixunix.scm: 1720 ##sys#error */
t6=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[333],lf[336],t2);}
else{
t6=t4;
f_4290(2,t6,C_SCHEME_UNDEFINED);}}

/* k4288 in local-time->seconds in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4290(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_mktime(((C_word*)t0)[3]))){
/* posixunix.scm: 1722 ##sys#cons-flonum */
t2=*((C_word*)lf[334]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
/* posixunix.scm: 1723 ##sys#error */
t2=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[333],lf[335],((C_word*)t0)[3]);}}

/* time->string in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4255(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4255,3,t0,t1,t2);}
t3=(C_word)C_i_check_vector_2(t2,lf[330]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4262,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_lessp(t5,C_fix(10)))){
/* posixunix.scm: 1713 ##sys#error */
t6=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,lf[330],lf[332],t2);}
else{
t6=t4;
f_4262(2,t6,C_SCHEME_UNDEFINED);}}

/* k4260 in time->string in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4262(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4262,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4265,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[2];
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,(C_word)stub702(t4,t3),C_fix(0));}

/* k4263 in k4260 in time->string in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4265(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4265,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4268,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_4268(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1715 ##sys#error */
t3=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[330],lf[331],((C_word*)t0)[2]);}}

/* k4266 in k4263 in k4260 in time->string in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* seconds->string in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4238(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4238,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4242,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t6=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,(C_word)stub693(t5,t4),C_fix(0));}

/* k4240 in seconds->string in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4242,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4245,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_4245(2,t3,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1706 ##sys#error */
t3=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,lf[328],lf[329],((C_word*)t0)[2]);}}

/* k4243 in k4240 in seconds->string in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* seconds->utc-time in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4227(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4227,3,t0,t1,t2);}
/* posixunix.scm: 1700 ##sys#decode-seconds */
t3=*((C_word*)lf[326]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_SCHEME_TRUE);}

/* seconds->local-time in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4221(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4221,3,t0,t1,t2);}
/* posixunix.scm: 1696 ##sys#decode-seconds */
t3=*((C_word*)lf[326]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,C_SCHEME_FALSE);}

/* memory-mapped-file? in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4215(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4215,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[316]));}

/* memory-mapped-file-pointer in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4209(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4209,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(1)));}

/* unmap-file-from-memory in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4177(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3rv,(void*)f_4177r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_4177r(t0,t1,t2,t3);}}

static void C_ccall f_4177r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_slot(t3,C_fix(0)):(C_word)C_slot(t2,C_fix(2)));
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_truep(t6)?(C_word)C_i_foreign_pointer_argumentp(t6):C_SCHEME_FALSE);
t8=(C_word)stub666(C_SCHEME_UNDEFINED,t7,t5);
t9=(C_word)C_eqp(C_fix(0),t8);
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1683 posix-error */
t10=lf[3];
f_1331(7,t10,t1,lf[48],lf[321],lf[322],t2,t5);}}

/* map-file-to-memory in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4119(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...){
C_word tmp;
C_word t7;
va_list v;
C_word *a,c2=c;
C_save_rest(t6,c2,7);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr7rv,(void*)f_4119r,7,t0,t1,t2,t3,t4,t5,t6);}
else{
a=C_alloc((c-7)*3);
t7=C_restore_rest_vector(a,C_rest_count(0));
f_4119r(t0,t1,t2,t3,t4,t5,t6,t7);}}

static void C_ccall f_4119r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(8);
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4123,a[2]=t1,a[3]=t6,a[4]=t5,a[5]=t4,a[6]=t3,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
t9=t2;
if(C_truep(t9)){
t10=t8;
f_4123(2,t10,t2);}
else{
/* posixunix.scm: 1668 ##sys#null-pointer */
t10=*((C_word*)lf[320]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t8);}}

/* k4121 in map-file-to-memory in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4123,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[7]);
t3=(C_truep(t2)?(C_word)C_slot(((C_word*)t0)[7],C_fix(0)):C_fix(0));
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4129,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t5=(C_truep((C_word)C_blockp(t1))?(C_word)C_specialp(t1):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t4;
f_4129(2,t6,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1671 ##sys#signal-hook */
t6=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,t4,lf[59],lf[315],lf[319],t1);}}

/* k4127 in k4121 in map-file-to-memory in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4129(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4129,2,t0,t1);}
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[4];
t7=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t8=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t9=(C_word)stub641(t7,t8,t3,t4,t5,t6,((C_word*)t0)[3]);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4135,a[2]=((C_word*)t0)[7],a[3]=t9,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4148,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t10,tmp=(C_word)a,a+=9,tmp);
/* posixunix.scm: 1673 ##sys#pointer->address */
t12=*((C_word*)lf[318]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,t9);}

/* k4146 in k4127 in k4121 in map-file-to-memory in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
/* posixunix.scm: 1674 posix-error */
t3=lf[3];
f_1331(11,t3,((C_word*)t0)[8],lf[48],lf[315],lf[317],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[8];
f_4135(2,t3,C_SCHEME_UNDEFINED);}}

/* k4133 in k4127 in k4121 in map-file-to-memory in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4135,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,3,lf[316],((C_word*)t0)[3],((C_word*)t0)[2]));}

/* current-environment in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4036,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4042,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_4042(t5,t1,C_fix(0));}

/* loop in current-environment in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_4042(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4042,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4046,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t6=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,(C_word)stub619(t5,t4),C_fix(0));}

/* k4044 in loop in current-environment in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4046,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4054,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_4054(t5,((C_word*)t0)[2],C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* scan in k4044 in loop in current-environment in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_4054(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_4054,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(C_make_character(61),(C_word)C_subchar(((C_word*)t0)[5],t2));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4080,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1632 ##sys#substring */
t5=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[5],C_fix(0),t2);}
else{
t4=(C_word)C_u_fixnum_plus(t2,C_fix(1));
/* posixunix.scm: 1635 scan */
t7=t1;
t8=t4;
t1=t7;
t2=t8;
goto loop;}}

/* k4078 in scan in k4044 in loop in current-environment in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4080,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4084,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
t4=(C_word)C_block_size(((C_word*)t0)[2]);
/* posixunix.scm: 1633 ##sys#substring */
t5=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,((C_word*)t0)[2],t3,t4);}

/* k4082 in k4078 in scan in k4044 in loop in current-environment in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4084,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4072,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm: 1634 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_4042(t5,t3,t4);}

/* k4070 in k4082 in k4078 in scan in k4044 in loop in current-environment in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4072,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* unsetenv in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4024(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4024,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4029,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1621 ##sys#make-c-string */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k4027 in unsetenv in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_putenv(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* setenv in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4013(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4013,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4018,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1616 ##sys#make-c-string */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4016 in setenv in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4018,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4022,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1616 ##sys#make-c-string */
t3=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k4020 in k4016 in setenv in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_setenv(((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}

/* fifo? in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3990(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3990,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3994,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4011,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1605 ##sys#expand-home-path */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k4009 in fifo? in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_4011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1605 ##sys#file-info */
t2=*((C_word*)lf[105]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3992 in fifo? in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3994(C_word c,C_word t0,C_word t1){
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
f_1331(6,t2,((C_word*)t0)[3],lf[48],lf[301],lf[302],((C_word*)t0)[2]);}}

/* create-fifo in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3953(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3rv,(void*)f_3953r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_3953r(t0,t1,t2,t3);}}

static void C_ccall f_3953r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3957,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_notvemptyp(t3))){
t5=t4;
f_3957(t5,(C_word)C_slot(t3,C_fix(0)));}
else{
t5=(C_word)C_u_fixnum_or(C_fix((C_word)S_IRWXG),C_fix((C_word)S_IRWXO));
t6=t4;
f_3957(t6,(C_word)C_u_fixnum_or(C_fix((C_word)S_IRWXU),t5));}}

/* k3955 in create-fifo in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3957(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3957,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3971,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3975,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1599 ##sys#expand-home-path */
t4=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k3973 in k3955 in create-fifo in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1599 ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3969 in k3955 in create-fifo in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_mkfifo(t1,((C_word*)t0)[4]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1600 posix-error */
t3=lf[3];
f_1331(7,t3,((C_word*)t0)[3],lf[48],lf[299],lf[300],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* file-unlock in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3928(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3928,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(2));
t4=(C_word)C_slot(t2,C_fix(3));
t5=(C_word)C_flock_setup(C_fix((C_word)F_UNLCK),t3,t4);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_flock_lock(t6);
if(C_truep((C_word)C_fixnum_lessp(t7,C_fix(0)))){
/* posixunix.scm: 1585 posix-error */
t8=lf[3];
f_1331(6,t8,t1,lf[48],lf[297],lf[298],t2);}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_UNDEFINED);}}

/* file-test-lock in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3906(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3906r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3906r(t0,t1,t2,t3);}}

static void C_ccall f_3906r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3910,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1576 setup */
f_3796(t4,t2,t3);}

/* k3908 in file-test-lock in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3910(C_word c,C_word t0,C_word t1){
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
f_3858(((C_word*)t0)[3],lf[296],t1,lf[295]);}}

/* file-lock/blocking in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3891(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3891r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3891r(t0,t1,t2,t3);}}

static void C_ccall f_3891r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3895,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1570 setup */
f_3796(t4,t2,t3);}

/* k3893 in file-lock/blocking in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp((C_word)C_flock_lockw(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1572 err */
f_3858(((C_word*)t0)[2],lf[294],t1,lf[293]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* file-lock in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3876(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3876r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3876r(t0,t1,t2,t3);}}

static void C_ccall f_3876r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3880,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1564 setup */
f_3796(t4,t2,t3);}

/* k3878 in file-lock in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp((C_word)C_flock_lock(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1566 err */
f_3858(((C_word*)t0)[2],lf[292],t1,lf[291]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* err in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3858(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3858,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_slot(t3,C_fix(1));
t6=(C_word)C_slot(t3,C_fix(2));
t7=(C_word)C_slot(t3,C_fix(3));
/* posixunix.scm: 1561 posix-error */
t8=lf[3];
f_1331(8,t8,t1,lf[48],t4,t2,t5,t6,t7);}

/* setup in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3796(C_word t1,C_word t2,C_word t3){
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
C_word t17;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3796,NULL,3,t1,t2,t3);}
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(0):(C_word)C_u_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t3,C_fix(1)));
t8=(C_word)C_i_nullp(t7);
t9=(C_truep(t8)?C_SCHEME_TRUE:(C_word)C_u_i_car(t7));
t10=t9;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(C_word)C_i_nullp(t7);
t13=(C_truep(t12)?C_SCHEME_END_OF_LIST:(C_word)C_slot(t7,C_fix(1)));
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3815,a[2]=t1,a[3]=t11,a[4]=t5,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t15=(C_word)C_eqp(C_SCHEME_TRUE,((C_word*)t11)[1]);
if(C_truep(t15)){
t16=C_set_block_item(t11,0,C_fix(0));
t17=t14;
f_3815(t17,t16);}
else{
t16=t14;
f_3815(t16,C_SCHEME_UNDEFINED);}}

/* k3813 in setup in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3815(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3815,NULL,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_truep(t2)?C_fix((C_word)F_RDLCK):C_fix((C_word)F_WRLCK));
t4=(C_word)C_flock_setup(t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[290],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]));}

/* file-truncate in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3760(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3760,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3774,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_stringp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3781,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3785,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1536 ##sys#expand-home-path */
t7=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}
else{
if(C_truep((C_word)C_fixnump(t2))){
t5=t4;
f_3774(2,t5,(C_word)C_ftruncate(t2,t3));}
else{
/* posixunix.scm: 1538 ##sys#error */
t5=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,lf[287],lf[289],t2);}}}

/* k3783 in file-truncate in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1536 ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3779 in file-truncate in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_3774(2,t2,(C_word)C_truncate(t1,((C_word*)t0)[2]));}

/* k3772 in file-truncate in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3774(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 1540 posix-error */
t2=lf[3];
f_1331(7,t2,((C_word*)t0)[4],lf[48],lf[287],lf[288],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3524(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr5r,(void*)f_3524r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3524r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3524r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word *a=C_alloc(13);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3526,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3704,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3715,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
/* def-bufi529564 */
t9=t8;
f_3715(t9,t1);}
else{
t9=(C_word)C_u_i_car(t5);
t10=(C_word)C_slot(t5,C_fix(1));
if(C_truep((C_word)C_i_nullp(t10))){
/* def-on-close530562 */
t11=t7;
f_3704(t11,t1,t9);}
else{
t11=(C_word)C_u_i_car(t10);
t12=(C_word)C_slot(t10,C_fix(1));
/* body527532 */
t13=t6;
f_3526(t13,t1,t9,t11);}}}

/* def-bufi529 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3715(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3715,NULL,2,t0,t1);}
/* def-on-close530562 */
t2=((C_word*)t0)[2];
f_3704(t2,t1,C_fix(0));}

/* def-on-close530 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3704(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3704,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3710,tmp=(C_word)a,a+=2,tmp);
/* body527532 */
t4=((C_word*)t0)[2];
f_3526(t4,t1,t2,t3);}

/* a3709 in def-on-close530 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3710,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[282]+1));}

/* body527 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3526(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[28],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3526,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3529,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t5,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp));
t9=(C_word)C_fixnump(t2);
t10=(C_truep(t9)?t2:(C_word)C_block_size(t2));
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3575,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t3,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=t1,a[9]=t7,tmp=(C_word)a,a+=10,tmp);
t12=(C_word)C_eqp(C_fix(0),t10);
if(C_truep(t12)){
t13=t11;
f_3575(t13,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3619,a[2]=t5,tmp=(C_word)a,a+=3,tmp));}
else{
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3633,a[2]=t5,a[3]=t10,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_fixnump(t2))){
/* posixunix.scm: 1494 ##sys#make-string */
t14=*((C_word*)lf[281]+1);
((C_proc3)(void*)(*((C_word*)t14+1)))(3,t14,t13,t2);}
else{
t14=t13;
f_3633(2,t14,t2);}}}

/* k3631 in body527 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3633,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=((C_word*)t0)[4];
f_3575(t4,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3634,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp));}

/* f_3634 in k3631 in body527 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3634(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3634,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);
t4=(C_word)C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3651,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=t6,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_3651(t8,t1,t3,C_fix(0),t4);}
else{
if(C_truep((C_word)C_fixnum_lessp(C_fix(0),((C_word*)((C_word*)t0)[4])[1]))){
/* posixunix.scm: 1511 poke */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3529(t3,t1,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}}

/* loop */
static void C_fcall f_3651(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_3651,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3661,a[2]=t4,a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 1501 poke */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3529(t7,t6,((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_fixnum_lessp(t2,t4))){
t6=(C_word)C_substring_copy(((C_word*)t0)[2],((C_word*)t0)[3],t3,t2,((C_word*)((C_word*)t0)[7])[1]);
t7=(C_word)C_u_fixnum_difference(t4,t2);
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
t7=(C_word)C_u_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t4);
t8=C_mutate(((C_word *)((C_word*)t0)[7])+1,t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}}

/* k3659 in loop */
static void C_ccall f_3661(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[6],0,C_fix(0));
/* posixunix.scm: 1503 loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_3651(t3,((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* f_3619 in body527 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3619(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3619,3,t0,t1,t2);}
if(C_truep(t2)){
t3=(C_word)C_block_size(t2);
/* posixunix.scm: 1493 poke */
t4=((C_word*)((C_word*)t0)[2])[1];
f_3529(t4,t1,t2,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k3573 in body527 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3575(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3575,NULL,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[9])+1,t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3579,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3584,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3590,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3611,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1514 make-output-port */
t9=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t5,t6,t7,t8);}

/* a3610 in k3573 in body527 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3611,2,t0,t1);}
/* posixunix.scm: 1523 store */
t2=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_FALSE);}

/* a3589 in k3573 in body527 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3590,2,t0,t1);}
if(C_truep((C_word)C_slot(((C_word*)((C_word*)t0)[6])[1],C_fix(8)))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3600,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_close(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1520 posix-error */
t3=lf[3];
f_1331(7,t3,t2,lf[48],((C_word*)t0)[3],lf[286],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
t3=t2;
f_3600(2,t3,C_SCHEME_UNDEFINED);}}}

/* k3598 in a3589 in k3573 in body527 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1521 on-close */
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a3583 in k3573 in body527 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3584(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3584,3,t0,t1,t2);}
/* posixunix.scm: 1516 store */
t3=((C_word*)((C_word*)t0)[2])[1];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* k3577 in k3573 in body527 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3579,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3582,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1524 set-port-name! */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[2]);}

/* k3580 in k3577 in k3573 in body527 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* poke in body527 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3529(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3529,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_write(((C_word*)t0)[5],t2,t3);
t5=(C_word)C_eqp(C_fix(-1),t4);
if(C_truep(t5)){
t6=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3545,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1483 ##sys#thread-yield! */
t8=*((C_word*)lf[275]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
/* posixunix.scm: 1485 posix-error */
t7=lf[3];
f_1331(7,t7,t1,((C_word*)t0)[3],lf[48],lf[285],((C_word*)t0)[5],((C_word*)t0)[2]);}}
else{
if(C_truep((C_word)C_fixnum_lessp(t4,t3))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3564,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1487 ##sys#substring */
t7=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,t2,t4,t3);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}}

/* k3562 in poke in body527 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* posixunix.scm: 1487 poke */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3529(t3,((C_word*)t0)[2],t1,t2);}

/* k3543 in poke in body527 in ##sys#custom-output-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1484 poke */
t2=((C_word*)((C_word*)t0)[5])[1];
f_3529(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3255(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr5r,(void*)f_3255r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3255r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3255r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(16);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3257,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t4,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3448,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3453,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3464,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t5))){
/* def-bufi471511 */
t10=t9;
f_3464(t10,t1);}
else{
t10=(C_word)C_u_i_car(t5);
t11=(C_word)C_slot(t5,C_fix(1));
if(C_truep((C_word)C_i_nullp(t11))){
/* def-on-close472509 */
t12=t8;
f_3453(t12,t1,t10);}
else{
t12=(C_word)C_u_i_car(t11);
t13=(C_word)C_slot(t11,C_fix(1));
if(C_truep((C_word)C_i_nullp(t13))){
/* def-more?473506 */
t14=t7;
f_3448(t14,t1,t10,t12);}
else{
t14=(C_word)C_u_i_car(t13);
t15=(C_word)C_slot(t13,C_fix(1));
/* body469475 */
t16=t6;
f_3257(t16,t1,t10,t12,t14);}}}}

/* def-bufi471 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3464(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3464,NULL,2,t0,t1);}
/* def-on-close472509 */
t2=((C_word*)t0)[2];
f_3453(t2,t1,C_fix(0));}

/* def-on-close472 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3453(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3453,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_3459,tmp=(C_word)a,a+=2,tmp);
/* def-more?473506 */
t4=((C_word*)t0)[2];
f_3448(t4,t1,t2,t3);}

/* a3458 in def-on-close472 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3459,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[282]+1));}

/* def-more?473 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3448(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3448,NULL,4,t0,t1,t2,t3);}
/* body469475 */
t4=((C_word*)t0)[2];
f_3257(t4,t1,t2,t3,C_SCHEME_FALSE);}

/* body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3257(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3257,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_fixnump(t2);
t6=(C_truep(t5)?(C_word)C_i_fixnum_max(t2,C_fix(1)):(C_word)C_block_size(t2));
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3264,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t4,a[7]=t6,a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t8=(C_word)C_i_fixnum_max(t2,C_fix(1));
/* posixunix.scm: 1401 ##sys#make-string */
t9=*((C_word*)lf[281]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}
else{
t8=t7;
f_3264(2,t8,t2);}}

/* k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3264(C_word c,C_word t0,C_word t1){
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
C_word ab[53],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3264,2,t0,t1);}
t2=C_fix(0);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3265,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3280,a[2]=t1,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3288,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[9],a[8]=t3,a[9]=t5,tmp=(C_word)a,a+=10,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3370,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t10,tmp=(C_word)a,a+=6,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3375,a[2]=t8,a[3]=t5,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3388,a[2]=t6,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3400,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[3],a[6]=t10,tmp=(C_word)a,a+=7,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3421,a[2]=t8,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1446 make-input-port */
t16=((C_word*)t0)[2];
((C_proc6)(void*)(*((C_word*)t16+1)))(6,t16,t11,t12,t13,t14,t15);}

/* a3420 in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3421,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3425,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1461 fetch */
t3=((C_word*)t0)[2];
f_3288(t3,t2);}

/* k3423 in a3420 in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1462 peek */
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_3280(((C_word*)t0)[2]));}

/* a3399 in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3400,2,t0,t1);}
if(C_truep((C_word)C_slot(((C_word*)((C_word*)t0)[6])[1],C_fix(8)))){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3410,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_close(((C_word*)t0)[4]),C_fix(0)))){
/* posixunix.scm: 1458 posix-error */
t3=lf[3];
f_1331(7,t3,t2,lf[48],((C_word*)t0)[3],lf[280],((C_word*)t0)[4],((C_word*)t0)[2]);}
else{
t3=t2;
f_3410(2,t3,C_SCHEME_UNDEFINED);}}}

/* k3408 in a3399 in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1459 on-close */
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a3387 in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3388,2,t0,t1);}
t2=(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* posixunix.scm: 1454 ready? */
t3=((C_word*)t0)[2];
f_3265(t3,t1);}}

/* a3374 in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3375,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3379,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1448 fetch */
t3=((C_word*)t0)[2];
f_3288(t3,t2);}

/* k3377 in a3374 in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=f_3280(((C_word*)t0)[4]);
t3=(C_word)C_u_fixnum_plus(((C_word*)((C_word*)t0)[3])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* k3368 in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3370,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3373,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1467 set-port-name! */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[5])[1],((C_word*)t0)[2]);}

/* k3371 in k3368 in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* fetch in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3288(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3288,NULL,2,t0,t1);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[9])[1],((C_word*)((C_word*)t0)[8])[1]))){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3300,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp));
t5=((C_word*)t3)[1];
f_3300(t5,t1);}
else{
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* loop in fetch in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3300(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3300,NULL,2,t0,t1);}
t2=(C_word)C_read(((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8]);
t3=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3316,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1423 ##sys#thread-block-for-i/o! */
t6=*((C_word*)lf[276]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,*((C_word*)lf[277]+1),((C_word*)t0)[10],C_SCHEME_TRUE);}
else{
/* posixunix.scm: 1426 posix-error */
t5=lf[3];
f_1331(7,t5,t1,lf[48],((C_word*)t0)[6],lf[278],((C_word*)t0)[10],((C_word*)t0)[5]);}}
else{
t4=(C_truep(((C_word*)t0)[4])?(C_word)C_eqp(t2,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3337,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=t1,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* posixunix.scm: 1430 more? */
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t6=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}}}

/* k3335 in loop in fetch in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3337(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3337,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3340,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1432 ##sys#thread-yield! */
t3=*((C_word*)lf[275]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(C_word)C_read(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3346,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_eqp(((C_word*)t3)[1],C_fix(-1));
if(C_truep(t5)){
t6=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t6)){
t7=C_set_block_item(t3,0,C_fix(0));
t8=t4;
f_3346(2,t8,t7);}
else{
/* posixunix.scm: 1438 posix-error */
t7=lf[3];
f_1331(7,t7,t4,lf[48],((C_word*)t0)[3],lf[279],((C_word*)t0)[8],((C_word*)t0)[2]);}}
else{
t6=t4;
f_3346(2,t6,C_SCHEME_UNDEFINED);}}}

/* k3344 in k3335 in loop in fetch in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,((C_word*)((C_word*)t0)[4])[1]);
t3=C_set_block_item(((C_word*)t0)[3],0,C_fix(0));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k3338 in k3335 in loop in fetch in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1433 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3300(t2,((C_word*)t0)[2]);}

/* k3314 in loop in fetch in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3316,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3319,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1424 ##sys#thread-yield! */
t3=*((C_word*)lf[275]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3317 in k3314 in loop in fetch in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1425 loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_3300(t2,((C_word*)t0)[2]);}

/* peek in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall f_3280(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
t1=(C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);
return((C_truep(t1)?C_SCHEME_END_OF_FILE:(C_word)C_subchar(((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1])));}

/* ready? in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3265(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3265,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 1407 ##sys#file-select-one */
t3=*((C_word*)lf[10]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[3]);}

/* k3277 in ready? in k3262 in body469 in ##sys#custom-input-port in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
/* posixunix.scm: 1408 posix-error */
t3=lf[3];
f_1331(7,t3,((C_word*)t0)[5],lf[48],((C_word*)t0)[4],lf[274],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* duplicate-fileno in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3234(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3rv,(void*)f_3234r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_3234r(t0,t1,t2,t3);}}

static void C_ccall f_3234r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3238,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_vemptyp(t3))){
t5=t4;
f_3238(t5,(C_word)C_dup(t2));}
else{
t5=(C_word)C_slot(t3,C_fix(0));
t6=t4;
f_3238(t6,(C_word)C_dup2(t2,t5));}}

/* k3236 in duplicate-fileno in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3238(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3238,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3241,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 1390 posix-error */
t3=lf[3];
f_1331(6,t3,t2,lf[48],lf[269],lf[270],((C_word*)t0)[2]);}
else{
t3=t2;
f_3241(2,t3,C_SCHEME_UNDEFINED);}}

/* k3239 in k3236 in duplicate-fileno in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* port->fileno in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3192(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3192,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(7));
t4=(C_word)C_eqp(lf[264],t3);
if(C_truep(t4)){
/* posixunix.scm: 1373 ##sys#tcp-port->fileno */
t5=*((C_word*)lf[265]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3228,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1374 ##sys#peek-unsigned-integer */
t6=*((C_word*)lf[268]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,C_fix(0));}}

/* k3226 in port->fileno in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3228,2,t0,t1);}
if(C_truep((C_word)C_i_zerop(t1))){
/* posixunix.scm: 1379 posix-error */
t2=lf[3];
f_1331(6,t2,((C_word*)t0)[3],lf[59],lf[263],lf[266],((C_word*)t0)[2]);}
else{
t2=(C_word)C_C_fileno(((C_word*)t0)[2]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3211,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1377 posix-error */
t4=lf[3];
f_1331(6,t4,t3,lf[48],lf[263],lf[267],((C_word*)t0)[2]);}
else{
t4=t3;
f_3211(2,t4,C_SCHEME_UNDEFINED);}}}

/* k3209 in k3226 in port->fileno in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3211(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* open-output-file* in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3181(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3181r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3181r(t0,t1,t2,t3);}}

static void C_ccall f_3181r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3190,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1368 mode */
f_3118(t4,C_SCHEME_FALSE,t3);}

/* k3188 in open-output-file* in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3190,2,t0,t1);}
t2=(C_word)C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixunix.scm: 1368 check */
f_3155(((C_word*)t0)[2],lf[262],((C_word*)t0)[4],C_SCHEME_FALSE,t2);}

/* open-input-file* in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3170(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3170r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3170r(t0,t1,t2,t3);}}

static void C_ccall f_3170r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3179,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1364 mode */
f_3118(t4,C_SCHEME_TRUE,t3);}

/* k3177 in open-input-file* in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3179,2,t0,t1);}
t2=(C_word)C_fdopen(&a,2,((C_word*)t0)[4],t1);
/* posixunix.scm: 1364 check */
f_3155(((C_word*)t0)[2],lf[261],((C_word*)t0)[4],C_SCHEME_TRUE,t2);}

/* check in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3155(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3155,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_null_pointerp(t5))){
/* posixunix.scm: 1357 posix-error */
t6=lf[3];
f_1331(6,t6,t1,lf[48],t2,lf[259],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3168,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1358 ##sys#make-port */
t7=*((C_word*)lf[111]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,t4,*((C_word*)lf[112]+1),lf[260],lf[87]);}}

/* k3166 in check in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* mode in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_3118(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3118,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3126,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_u_i_car(t3);
t6=(C_word)C_eqp(t5,lf[253]);
if(C_truep(t6)){
t7=t2;
if(C_truep(t7)){
/* posixunix.scm: 1351 ##sys#error */
t8=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t4,lf[254],t5);}
else{
t8=t4;
f_3126(2,t8,lf[255]);}}
else{
/* posixunix.scm: 1352 ##sys#error */
t7=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,lf[256],t5);}}
else{
t5=t4;
f_3126(2,t5,(C_truep(t2)?lf[257]:lf[258]));}}

/* k3124 in mode in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1347 ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* file-link in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3099(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3099,4,t0,t1,t2,t3);}
t4=t2;
t5=t3;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3088,a[2]=t5,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
/* ##sys#make-c-string */
t7=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t7=t6;
f_3088(2,t7,C_SCHEME_FALSE);}}

/* k3086 in file-link in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3088,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3092,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* ##sys#make-c-string */
t3=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t3=t2;
f_3092(2,t3,C_SCHEME_FALSE);}}

/* k3090 in k3086 in file-link in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)stub407(C_SCHEME_UNDEFINED,((C_word*)t0)[5],t1);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1332 posix-error */
t3=lf[3];
f_1331(7,t3,((C_word*)t0)[4],lf[48],lf[248],lf[249],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* read-symbolic-link in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3060(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3060,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3065,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3081,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1321 ##sys#expand-home-path */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k3079 in read-symbolic-link in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3081(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1321 ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3063 in read-symbolic-link in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3065(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3065,2,t0,t1);}
t2=(C_word)C_readlink(t1,((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3068,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1323 posix-error */
t4=lf[3];
f_1331(6,t4,t3,lf[48],lf[245],lf[246],((C_word*)t0)[2]);}
else{
t4=t3;
f_3068(2,t4,C_SCHEME_UNDEFINED);}}

/* k3066 in k3063 in read-symbolic-link in k3057 in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3068(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1324 substring */
t2=((C_word*)t0)[5];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* create-symbolic-link in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3028(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3028,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3043,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3055,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1309 ##sys#expand-home-path */
t6=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k3053 in create-symbolic-link in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1309 ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3041 in create-symbolic-link in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3043(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3043,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3047,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3051,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1310 ##sys#expand-home-path */
t4=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k3049 in k3041 in create-symbolic-link in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1310 ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k3045 in k3041 in create-symbolic-link in k3024 in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_symlink(((C_word*)t0)[5],t1);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1312 posix-error */
t3=lf[3];
f_1331(7,t3,((C_word*)t0)[4],lf[48],lf[242],lf[243],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* set-process-group-id! in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3009(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3009,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_lessp((C_word)C_setpgid(t2,t3),C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3019,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1287 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k3017 in set-process-group-id! in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1288 ##sys#error */
t2=*((C_word*)lf[108]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[238],lf[239],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* create-session in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2994,2,t0,t1);}
t2=(C_word)C_setsid(C_SCHEME_FALSE);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2998,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3004,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1279 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_2998(2,t4,C_SCHEME_UNDEFINED);}}

/* k3002 in create-session in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_3004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1280 ##sys#error */
t2=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[236],lf[237]);}

/* k2996 in create-session in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-execute-access? in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2988(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2988,3,t0,t1,t2);}
/* posixunix.scm: 1274 check */
f_2955(t1,t2,C_fix((C_word)X_OK));}

/* file-write-access? in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2982(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2982,3,t0,t1,t2);}
/* posixunix.scm: 1273 check */
f_2955(t1,t2,C_fix((C_word)W_OK));}

/* file-read-access? in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2976(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2976,3,t0,t1,t2);}
/* posixunix.scm: 1272 check */
f_2955(t1,t2,C_fix((C_word)R_OK));}

/* check in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_2955(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2955,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2970,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2974,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1269 ##sys#expand-home-path */
t6=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k2972 in check in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1269 ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2968 in check in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2970,2,t0,t1);}
t2=(C_word)C_access(t1,((C_word*)t0)[3]);
t3=(C_word)C_eqp(C_fix(0),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2962,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_2962(2,t5,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1270 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k2960 in k2968 in check in k2951 in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* set-group-id! in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2936,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_lessp((C_word)C_setgid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2946,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1254 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k2944 in set-group-id! in k2932 in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1255 ##sys#error */
t2=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[227],lf[231],((C_word*)t0)[2]);}

/* set-user-id! in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2917(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2917,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_lessp((C_word)C_setuid(t2),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2927,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1243 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k2925 in set-user-id! in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1244 ##sys#error */
t2=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[227],lf[228],((C_word*)t0)[2]);}

/* current-effective-group-id in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2914,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub365(C_SCHEME_UNDEFINED));}

/* current-effective-user-id in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2911,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub363(C_SCHEME_UNDEFINED));}

/* change-file-owner in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2890(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2890,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2905,a[2]=t2,a[3]=t1,a[4]=t4,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2909,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1234 ##sys#expand-home-path */
t7=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t2);}

/* k2907 in change-file-owner in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1234 ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2903 in change-file-owner in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_chown(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1235 posix-error */
t3=lf[3];
f_1331(8,t3,((C_word*)t0)[3],lf[48],lf[223],lf[224],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* change-file-mode in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2869(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2869,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2884,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2888,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1226 ##sys#expand-home-path */
t6=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}

/* k2886 in change-file-mode in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1226 ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2882 in change-file-mode in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_chmod(t1,((C_word*)t0)[4]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
/* posixunix.scm: 1227 posix-error */
t3=lf[3];
f_1331(7,t3,((C_word*)t0)[3],lf[48],lf[221],lf[222],((C_word*)t0)[2],((C_word*)t0)[4]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* initialize-groups in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2811(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2811,4,t0,t1,t2,t3);}
t4=t2;
t5=t3;
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2807,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
/* ##sys#make-c-string */
t7=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t4);}
else{
t7=t6;
f_2807(2,t7,C_SCHEME_FALSE);}}

/* k2805 in initialize-groups in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2807,2,t0,t1);}
t2=(C_word)stub341(C_SCHEME_UNDEFINED,t1,((C_word*)t0)[5]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2821,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 1140 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k2819 in k2805 in initialize-groups in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2821(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1141 ##sys#error */
t2=*((C_word*)lf[108]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[180],lf[181],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set-groups! in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2748(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2748,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2752,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_length(t2);
t5=f_2682(t4);
if(C_truep(t5)){
t6=t3;
f_2752(2,t6,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1123 ##sys#error */
t6=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,lf[177],lf[179]);}}

/* k2750 in set-groups! in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2752,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2757,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2757(t5,((C_word*)t0)[2],((C_word*)t0)[3],C_fix(0));}

/* do329 in k2750 in set-groups! in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_2757(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2757,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep((C_word)C_fixnum_lessp((C_word)C_set_groups(t3),C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2773,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 1128 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}
else{
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_set_gid(t3,t4);
t6=(C_word)C_slot(t2,C_fix(1));
t7=(C_word)C_u_fixnum_plus(t3,C_fix(1));
t10=t1;
t11=t6;
t12=t7;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* k2771 in do329 in k2750 in set-groups! in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1129 ##sys#error */
t2=*((C_word*)lf[108]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[177],lf[178],((C_word*)t0)[2]);}

/* get-groups in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2685,2,t0,t1);}
t2=C_fix((C_word)getgroups(0, C_groups));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2689,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2743,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1109 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t3;
f_2689(2,t4,C_SCHEME_UNDEFINED);}}

/* k2741 in get-groups in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1110 ##sys#error */
t2=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[173],lf[176]);}

/* k2687 in get-groups in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2689,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2692,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=f_2682(((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t2;
f_2692(2,t4,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 1112 ##sys#error */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,lf[173],lf[175]);}}

/* k2690 in k2687 in get-groups in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2692,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2695,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)stub311(C_SCHEME_UNDEFINED,((C_word*)t0)[3]);
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2724,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1114 ##sys#update-errno */
t5=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t2;
f_2695(2,t4,C_SCHEME_UNDEFINED);}}

/* k2722 in k2690 in k2687 in get-groups in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1115 ##sys#error */
t2=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[173],lf[174]);}

/* k2693 in k2690 in k2687 in get-groups in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2695,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2700,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2700(t5,((C_word*)t0)[2],C_fix(0));}

/* loop in k2693 in k2690 in k2687 in get-groups in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_2700(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_2700,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[3]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2714,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_u_fixnum_plus(t2,C_fix(1));
/* posixunix.scm: 1119 loop */
t6=t3;
t7=t4;
t1=t6;
t2=t7;
goto loop;}}

/* k2712 in loop in k2693 in k2690 in k2687 in get-groups in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2714,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,(C_word)C_get_gid(((C_word*)t0)[2]),t1));}

/* _ensure-groups in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall f_2682(C_word t1){
C_word tmp;
C_word t2;
return((C_word)stub315(C_SCHEME_UNDEFINED,t1));}

/* group-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2628(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2628,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2632,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t4=t3;
f_2632(t4,(C_word)C_getgrgid(t2));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2677,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1084 ##sys#make-c-string */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k2675 in group-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2632(t2,(C_word)C_getgrnam(t1));}

/* k2630 in group-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_2632(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2632,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2642,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_group->gr_name),C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2640 in k2630 in group-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2642,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2646,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_group->gr_passwd),C_fix(0));}

/* k2644 in k2640 in k2630 in group-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2646,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2650,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2652,a[2]=t4,tmp=(C_word)a,a+=3,tmp));
t6=((C_word*)t4)[1];
f_2652(t6,t2,C_fix(0));}

/* rec in k2644 in k2640 in k2630 in group-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_2652(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2652,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2656,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=t2;
t5=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t6=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,(C_word)stub300(t5,t4),C_fix(0));}

/* k2654 in rec in k2644 in k2640 in k2630 in group-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2656,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2666,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm: 1092 rec */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2652(t4,t2,t3);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_LIST);}}

/* k2664 in k2654 in rec in k2644 in k2640 in k2630 in group-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2666,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k2648 in k2644 in k2640 in k2630 in group-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2650(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2650,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,((C_word*)t0)[3],((C_word*)t0)[2],C_fix((C_word)C_group->gr_gid),t1));}

/* user-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2583(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2583,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2587,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t4=t3;
f_2587(t4,(C_word)C_getpwuid(t2));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2620,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1061 ##sys#make-c-string */
t5=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}}

/* k2618 in user-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2587(t2,(C_word)C_getpwnam(t1));}

/* k2585 in user-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_2587(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2587,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2597,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_name),C_fix(0));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k2595 in k2585 in user-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2597,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2601,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_passwd),C_fix(0));}

/* k2599 in k2595 in k2585 in user-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2601,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2605,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_gecos),C_fix(0));}

/* k2603 in k2599 in k2595 in k2585 in user-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2609,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_dir),C_fix(0));}

/* k2607 in k2603 in k2599 in k2595 in k2585 in user-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2609,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2613,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-c-string */
t3=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_user->pw_shell),C_fix(0));}

/* k2611 in k2607 in k2603 in k2599 in k2595 in k2585 in user-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2613,2,t0,t1);}
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,7,((C_word*)t0)[5],((C_word*)t0)[4],C_fix((C_word)C_user->pw_uid),C_fix((C_word)C_user->pw_gid),((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* system-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2545(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2545,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2549,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_lessp(C_fix((C_word)C_uname),C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2578,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 1040 ##sys#update-errno */
t4=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=t2;
f_2549(2,t3,C_SCHEME_UNDEFINED);}}

/* k2576 in system-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 1041 ##sys#error */
t2=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[167],lf[169]);}

/* k2547 in system-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2549(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2549,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2556,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.sysname),C_fix(0));}

/* k2554 in k2547 in system-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2556(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2556,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2560,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.nodename),C_fix(0));}

/* k2558 in k2554 in k2547 in system-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2560,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2564,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.release),C_fix(0));}

/* k2562 in k2558 in k2554 in k2547 in system-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2564,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2568,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.version),C_fix(0));}

/* k2566 in k2562 in k2558 in k2554 in k2547 in system-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2568,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2572,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* ##sys#peek-nonnull-c-string */
t3=*((C_word*)lf[168]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_mpointer(&a,(void*)C_utsname.machine),C_fix(0));}

/* k2570 in k2566 in k2562 in k2558 in k2554 in k2547 in system-information in k2541 in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2572,2,t0,t1);}
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,5,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* signal-unmask! in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2530(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2530,3,t0,t1,t2);}
t3=(C_word)C_sigdelset(t2);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_sigprocmask_unblock(C_fix(0)),C_fix(0)))){
/* posixunix.scm: 1015 posix-error */
t4=lf[3];
f_1331(5,t4,t1,lf[159],lf[165],lf[166]);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* signal-mask! in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2518(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2518,3,t0,t1,t2);}
t3=(C_word)C_sigaddset(t2);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_sigprocmask_block(C_fix(0)),C_fix(0)))){
/* posixunix.scm: 1009 posix-error */
t4=lf[3];
f_1331(5,t4,t1,lf[159],lf[163],lf[164]);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* signal-masked? in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2515(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2515,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_sigismember(t2));}

/* signal-mask in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2483,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2489,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=((C_word*)t3)[1];
f_2489(t5,t1,*((C_word*)lf[154]+1),C_SCHEME_END_OF_LIST);}

/* loop in signal-mask in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_2489(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_2489,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_slot(t2,C_fix(1));
t6=(C_truep((C_word)C_sigismember(t4))?(C_word)C_a_i_cons(&a,2,t4,t3):t3);
/* posixunix.scm: 999  loop */
t8=t1;
t9=t5;
t10=t6;
t1=t8;
t2=t9;
t3=t10;
goto loop;}}

/* set-signal-mask! in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2465(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2465,3,t0,t1,t2);}
t3=(C_word)C_sigemptyset(C_fix(0));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2469,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_2480,tmp=(C_word)a,a+=2,tmp);
/* for-each */
t6=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,t2);}

/* a2479 in set-signal-mask! in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2480(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2480,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_sigaddset(t2));}

/* k2467 in set-signal-mask! in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp((C_word)C_sigprocmask_set(C_fix(0)),C_fix(0)))){
/* posixunix.scm: 992  posix-error */
t2=lf[3];
f_1331(5,t2,((C_word*)t0)[2],lf[159],lf[158],lf[160]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* ##sys#interrupt-hook in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2447(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2447,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(((C_word*)t0)[3],t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2457,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 978  h */
t6=t4;
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
/* posixunix.scm: 980  oldhook */
t5=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t3);}}

/* k2455 in ##sys#interrupt-hook in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 979  ##sys#context-switch */
C_context_switch(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* set-signal-handler! in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2437(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2437,4,t0,t1,t2,t3);}
t4=(C_truep(t3)?t2:C_SCHEME_FALSE);
t5=(C_word)C_establish_signal_handler(t2,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_setslot(((C_word*)t0)[2],t2,t3));}

/* signal-handler in k2427 in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2431(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2431,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(((C_word*)t0)[2],t2));}

/* create-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2384,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2388,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_lessp((C_word)C_pipe(C_SCHEME_FALSE),C_fix(0)))){
/* posixunix.scm: 892  posix-error */
t3=lf[3];
f_1331(5,t3,t2,lf[48],lf[127],lf[128]);}
else{
t3=t2;
f_2388(2,t3,C_SCHEME_UNDEFINED);}}

/* k2386 in create-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 893  values */
C_values(4,0,((C_word*)t0)[2],C_fix((C_word)C_pipefds[ 0 ]),C_fix((C_word)C_pipefds[ 1 ]));}

/* with-output-to-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2364(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2364r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2364r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2364r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[126]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2368,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k2366 in with-output-to-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2368,2,t0,t1);}
t2=C_mutate((C_word*)lf[126]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2374,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 880  ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a2373 in k2366 in with-output-to-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2374(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2374r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2374r(t0,t1,t2);}}

static void C_ccall f_2374r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2378,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 882  close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k2376 in a2373 in k2366 in with-output-to-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[126]+1,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* with-input-from-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2344(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_2344r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2344r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2344r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=*((C_word*)lf[124]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2348,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
C_apply(5,0,t6,((C_word*)t0)[2],t2,t4);}

/* k2346 in with-input-from-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2348,2,t0,t1);}
t2=C_mutate((C_word*)lf[124]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2354,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 870  ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* a2353 in k2346 in with-input-from-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2354(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2354r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2354r(t0,t1,t2);}}

static void C_ccall f_2354r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2358,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 872  close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k2356 in a2353 in k2346 in with-input-from-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[124]+1,((C_word*)t0)[4]);
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* call-with-output-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2320(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2320r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2320r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2320r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2324,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k2322 in call-with-output-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2324,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2329,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2335,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 860  ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2334 in k2322 in call-with-output-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2335(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2335r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2335r(t0,t1,t2);}}

static void C_ccall f_2335r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2339,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 863  close-output-pipe */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k2337 in a2334 in k2322 in call-with-output-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2328 in k2322 in call-with-output-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2329,2,t0,t1);}
/* posixunix.scm: 861  proc */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* call-with-input-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2296(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_2296r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2296r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2296r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2300,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
C_apply(5,0,t5,((C_word*)t0)[2],t2,t4);}

/* k2298 in call-with-input-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2300(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2300,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2305,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2311,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 852  ##sys#call-with-values */
C_u_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2310 in k2298 in call-with-input-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2311(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2311r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2311r(t0,t1,t2);}}

static void C_ccall f_2311r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2315,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 855  close-input-pipe */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k2313 in a2310 in k2298 in call-with-input-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2304 in k2298 in call-with-input-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2305,2,t0,t1);}
/* posixunix.scm: 853  proc */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* close-input-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2283(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2283,3,t0,t1,t2);}
t3=(C_word)close_pipe(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2287,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_eqp(C_fix(-1),t3);
if(C_truep(t5)){
/* posixunix.scm: 841  posix-error */
t6=lf[3];
f_1331(6,t6,t4,lf[48],lf[118],lf[119],t2);}
else{
t6=t4;
f_2287(2,t6,C_SCHEME_UNDEFINED);}}

/* k2285 in close-input-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* open-output-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2250(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_2250r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2250r(t0,t1,t2,t3);}}

static void C_ccall f_2250r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(11);
t4=f_2184(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2261,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(t4,lf[107]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2268,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 834  ##sys#make-c-string */
t8=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=(C_word)C_eqp(t4,lf[115]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2278,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 835  ##sys#make-c-string */
t9=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}
else{
/* posixunix.scm: 836  badmode */
f_2196(t5,t4);}}}

/* k2276 in open-output-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2278,2,t0,t1);}
t2=((C_word*)t0)[2];
f_2261(2,t2,(C_word)open_binary_output_pipe(&a,1,t1));}

/* k2266 in open-output-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2268,2,t0,t1);}
t2=((C_word*)t0)[2];
f_2261(2,t2,(C_word)open_text_output_pipe(&a,1,t1));}

/* k2259 in open-output-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 830  check */
f_2202(((C_word*)t0)[3],lf[116],((C_word*)t0)[2],C_SCHEME_FALSE,t1);}

/* open-input-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2217(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_2217r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2217r(t0,t1,t2,t3);}}

static void C_ccall f_2217r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(11);
t4=f_2184(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2228,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(t4,lf[107]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2235,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 823  ##sys#make-c-string */
t8=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
t7=(C_word)C_eqp(t4,lf[115]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2245,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 824  ##sys#make-c-string */
t9=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}
else{
/* posixunix.scm: 825  badmode */
f_2196(t5,t4);}}}

/* k2243 in open-input-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2245,2,t0,t1);}
t2=((C_word*)t0)[2];
f_2228(2,t2,(C_word)open_binary_input_pipe(&a,1,t1));}

/* k2233 in open-input-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2235(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2235,2,t0,t1);}
t2=((C_word*)t0)[2];
f_2228(2,t2,(C_word)open_text_input_pipe(&a,1,t1));}

/* k2226 in open-input-pipe in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 819  check */
f_2202(((C_word*)t0)[3],lf[114],((C_word*)t0)[2],C_SCHEME_TRUE,t1);}

/* check in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_2202(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2202,NULL,5,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_null_pointerp(t5))){
/* posixunix.scm: 811  posix-error */
t6=lf[3];
f_1331(6,t6,t1,lf[48],t2,lf[110],t3);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2215,a[2]=t1,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 812  ##sys#make-port */
t7=*((C_word*)lf[111]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t6,t4,*((C_word*)lf[112]+1),lf[113],lf[87]);}}

/* k2213 in check in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_set_file_ptr(t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* badmode in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_2196(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2196,NULL,2,t1,t2);}
/* posixunix.scm: 808  ##sys#error */
t3=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,lf[109],t2);}

/* mode in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall f_2184(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
t2=(C_word)C_i_pairp(t1);
return((C_truep(t2)?(C_word)C_slot(t1,C_fix(0)):lf[107]));}

/* current-directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2148(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2rv,(void*)f_2148r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_2148r(t0,t1,t2);}}

static void C_ccall f_2148r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(3);
t3=(C_word)C_vemptyp(t2);
t4=(C_truep(t3)?C_SCHEME_FALSE:(C_word)C_slot(t2,C_fix(0)));
if(C_truep(t4)){
/* posixunix.scm: 792  change-directory */
t5=*((C_word*)lf[95]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2161,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 793  make-string */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,C_fix(256));}}

/* k2159 in current-directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_curdir(t1);
if(C_truep(t2)){
/* posixunix.scm: 796  ##sys#substring */
t3=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[2],t1,C_fix(0),t2);}
else{
/* posixunix.scm: 797  posix-error */
t3=lf[3];
f_1331(5,t3,((C_word*)t0)[2],lf[48],lf[103],lf[106]);}}

/* directory? in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2128(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2128,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2132,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2146,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 785  ##sys#expand-home-path */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k2144 in directory? in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 785  ##sys#file-info */
t2=*((C_word*)lf[105]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k2130 in directory? in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2132(C_word c,C_word t0,C_word t1){
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

/* directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1977(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr2r,(void*)f_1977r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1977r(t0,t1,t2);}}

static void C_ccall f_1977r(C_word t0,C_word t1,C_word t2){
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
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1979,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2074,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2079,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
/* def-spec159183 */
t6=t5;
f_2079(t6,t1);}
else{
t6=(C_word)C_u_i_car(t2);
t7=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_nullp(t7))){
/* def-show-dotfiles?160181 */
t8=t4;
f_2074(t8,t1,t6);}
else{
t8=(C_word)C_u_i_car(t7);
t9=(C_word)C_slot(t7,C_fix(1));
/* body157162 */
t10=t3;
f_1979(t10,t1,t6,t8);}}}

/* def-spec159 in directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_2079(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2079,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2087,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 758  current-directory */
t3=*((C_word*)lf[103]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2085 in def-spec159 in directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* def-show-dotfiles?160181 */
t2=((C_word*)t0)[3];
f_2074(t2,((C_word*)t0)[2],t1);}

/* def-show-dotfiles?160 in directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_2074(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2074,NULL,3,t0,t1,t2);}
/* body157162 */
t3=((C_word*)t0)[2];
f_1979(t3,t1,t2,C_SCHEME_FALSE);}

/* body157 in directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_1979(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1979,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1983,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* posixunix.scm: 760  make-string */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,C_fix(256));}

/* k1981 in body157 in directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1983,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1986,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 761  ##sys#make-pointer */
t3=*((C_word*)lf[102]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1984 in k1981 in body157 in directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1986,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1989,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* posixunix.scm: 762  ##sys#make-pointer */
t3=*((C_word*)lf[102]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1987 in k1984 in k1981 in body157 in directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1989,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1993,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2073,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 763  ##sys#expand-home-path */
t4=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k2071 in k1987 in k1984 in k1981 in body157 in directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 763  ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1991 in k1987 in k1984 in k1981 in body157 in directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1993,2,t0,t1);}
t2=(C_word)C_opendir(t1,((C_word*)t0)[7]);
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[7]))){
/* posixunix.scm: 765  posix-error */
t3=lf[3];
f_1331(6,t3,((C_word*)t0)[6],lf[48],lf[100],lf[101],((C_word*)t0)[5]);}
else{
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2007,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_2007(t6,((C_word*)t0)[6]);}}

/* loop in k1991 in k1987 in k1984 in k1981 in body157 in directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_2007(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2007,NULL,2,t0,t1);}
t2=(C_word)C_readdir(((C_word*)t0)[6],((C_word*)t0)[5]);
if(C_truep((C_word)C_null_pointerp(((C_word*)t0)[5]))){
t3=(C_word)C_closedir(((C_word*)t0)[6]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_foundfile(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2017,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 773  ##sys#substring */
t5=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[4],C_fix(0),t3);}}

/* k2015 in loop in k1991 in k1987 in k1984 in k1981 in body157 in directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2017(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2017,2,t0,t1);}
t2=(C_word)C_subchar(t1,C_fix(0));
t3=(C_word)C_fixnum_greaterp(((C_word*)t0)[5],C_fix(1));
t4=(C_truep(t3)?(C_word)C_subchar(t1,C_fix(1)):C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2029,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_eqp(t2,C_make_character(46));
if(C_truep(t6)){
t7=(C_word)C_i_not(t4);
if(C_truep(t7)){
t8=t5;
f_2029(t8,t7);}
else{
t8=(C_word)C_eqp(t4,C_make_character(46));
t9=(C_truep(t8)?(C_word)C_eqp(((C_word*)t0)[5],C_fix(2)):C_SCHEME_FALSE);
t10=t5;
f_2029(t10,(C_truep(t9)?t9:(C_word)C_i_not(((C_word*)t0)[2])));}}
else{
t7=t5;
f_2029(t7,C_SCHEME_FALSE);}}

/* k2027 in k2015 in loop in k1991 in k1987 in k1984 in k1981 in body157 in directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_2029(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2029,NULL,2,t0,t1);}
if(C_truep(t1)){
/* posixunix.scm: 780  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2007(t2,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2039,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 781  loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2007(t3,t2);}}

/* k2037 in k2027 in k2015 in loop in k1991 in k1987 in k1984 in k1981 in body157 in directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_2039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2039,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* delete-directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1956(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1956,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1971,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1975,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 751  ##sys#expand-home-path */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1973 in delete-directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 751  ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1969 in delete-directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1971(C_word c,C_word t0,C_word t1){
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
f_1331(6,t3,((C_word*)t0)[3],lf[48],lf[97],lf[98],((C_word*)t0)[2]);}}

/* change-directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1935(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1935,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1950,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1954,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 745  ##sys#expand-home-path */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1952 in change-directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 745  ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1948 in change-directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1950(C_word c,C_word t0,C_word t1){
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
f_1331(6,t3,((C_word*)t0)[3],lf[48],lf[95],lf[96],((C_word*)t0)[2]);}}

/* create-directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1914(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1914,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1929,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1933,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 739  ##sys#expand-home-path */
t5=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1931 in create-directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 739  ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1927 in create-directory in k1910 in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1929(C_word c,C_word t0,C_word t1){
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
f_1331(6,t3,((C_word*)t0)[3],lf[48],lf[93],lf[94],((C_word*)t0)[2]);}}

/* set-file-position! in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1858(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1858r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1858r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1858r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(6);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_slot(t4,C_fix(0)):C_fix((C_word)SEEK_SET));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1865,a[2]=t6,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
/* posixunix.scm: 711  ##sys#signal-hook */
t8=*((C_word*)lf[4]+1);
((C_proc7)(void*)(*((C_word*)t8+1)))(7,t8,t7,lf[90],lf[85],lf[91],t3,t2);}
else{
t8=t7;
f_1865(2,t8,C_SCHEME_UNDEFINED);}}

/* k1863 in set-file-position! in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1865(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1865,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1871,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* posixunix.scm: 712  port? */
t4=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[4]);}

/* k1875 in k1863 in set-file-position! in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(7));
t3=(C_word)C_eqp(t2,lf[87]);
t4=((C_word*)t0)[4];
f_1871(2,t4,(C_truep(t3)?(C_word)C_fseek(((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2]):C_SCHEME_FALSE));}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[5]))){
t2=((C_word*)t0)[4];
f_1871(2,t2,(C_word)C_lseek(((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2]));}
else{
/* posixunix.scm: 716  ##sys#signal-hook */
t2=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[59],lf[85],lf[88],((C_word*)t0)[5]);}}}

/* k1869 in k1863 in set-file-position! in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 717  posix-error */
t2=lf[3];
f_1331(7,t2,((C_word*)t0)[4],lf[48],lf[85],lf[86],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* symbolic-link? in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1852(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1852,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1856,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 703  ##sys#stat */
f_1748(t3,t2,C_SCHEME_TRUE,lf[84]);}

/* k1854 in symbolic-link? in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_islink));}

/* regular-file? in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1846(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1846,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1850,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 698  ##sys#stat */
f_1748(t3,t2,C_SCHEME_TRUE,lf[83]);}

/* k1848 in regular-file? in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_mk_bool(C_isreg));}

/* file-permissions in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1840(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1840,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1844,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 694  ##sys#stat */
f_1748(t3,t2,C_SCHEME_FALSE,lf[82]);}

/* k1842 in file-permissions in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1844(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode));}

/* file-owner in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1834(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1834,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1838,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 693  ##sys#stat */
f_1748(t3,t2,C_SCHEME_FALSE,lf[81]);}

/* k1836 in file-owner in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid));}

/* file-change-time in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1828(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1828,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1832,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 692  ##sys#stat */
f_1748(t3,t2,C_SCHEME_FALSE,lf[80]);}

/* k1830 in file-change-time in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1832,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_ctime));}

/* file-access-time in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1822(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1822,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1826,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 691  ##sys#stat */
f_1748(t3,t2,C_SCHEME_FALSE,lf[79]);}

/* k1824 in file-access-time in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1826,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_atime));}

/* file-modification-time in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1816(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1816,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1820,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 690  ##sys#stat */
f_1748(t3,t2,C_SCHEME_FALSE,lf[78]);}

/* k1818 in file-modification-time in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1820,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_flonum(&a,C_statbuf.st_mtime));}

/* file-size in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1810(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1810,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1814,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 689  ##sys#stat */
f_1748(t3,t2,C_SCHEME_FALSE,lf[77]);}

/* k1812 in file-size in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_size));}

/* file-stat in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1785(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1785r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1785r(t0,t1,t2,t3);}}

static void C_ccall f_1785r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(3);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1789,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_vemptyp(t3);
t6=(C_truep(t5)?C_SCHEME_FALSE:(C_word)C_slot(t3,C_fix(0)));
/* posixunix.scm: 682  ##sys#stat */
f_1748(t4,t2,t6,lf[76]);}

/* k1787 in file-stat in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1789,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_vector(&a,13,C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_ino),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_mode),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_nlink),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_uid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_gid),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_size),C_flonum(&a,C_statbuf.st_atime),C_flonum(&a,C_statbuf.st_ctime),C_flonum(&a,C_statbuf.st_mtime),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_dev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_blksize),C_fix(C_MOST_POSITIVE_FIXNUM&(C_word)C_statbuf.st_rdev)));}

/* ##sys#stat in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_1748(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1748,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1752,a[2]=t2,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_fixnump(t2))){
t6=t5;
f_1752(2,t6,(C_word)C_fstat(t2));}
else{
if(C_truep((C_word)C_i_stringp(t2))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1773,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1780,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 669  ##sys#expand-home-path */
t8=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t2);}
else{
/* posixunix.scm: 677  ##sys#signal-hook */
t6=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t5,lf[59],lf[75],t2);}}}

/* k1778 in ##sys#stat in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 669  ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1771 in ##sys#stat in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_1752(2,t2,(C_truep(((C_word*)t0)[2])?(C_word)C_lstat(t1):(C_word)C_stat(t1)));}

/* k1750 in ##sys#stat in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 679  posix-error */
t2=lf[3];
f_1331(6,t2,((C_word*)t0)[4],lf[48],((C_word*)t0)[3],lf[74],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* file-select in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1571(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1571r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1571r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1571r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(15);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(C_word)C_notvemptyp(t4);
t8=(C_truep(t7)?(C_word)C_slot(t4,C_fix(0)):C_SCHEME_FALSE);
t9=f_1565(C_fix(0));
t10=f_1565(C_fix(1));
t11=(C_word)C_i_not(t2);
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1587,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=t1,a[8]=t3,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t11)){
t13=t12;
f_1587(2,t13,t11);}
else{
if(C_truep((C_word)C_fixnump(t2))){
t13=C_set_block_item(t6,0,t2);
/* posixunix.scm: 598  fd_set */
t14=t12;
f_1587(2,t14,f_1567(C_fix(0),t2));}
else{
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1732,a[2]=((C_word*)t0)[2],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* for-each */
t14=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,t2);}}}

/* a1731 in file-select in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1732(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1732,3,t0,t1,t2);}
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,(C_word)C_i_fixnum_max(((C_word*)((C_word*)t0)[3])[1],t2));
/* posixunix.scm: 605  fd_set */
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1567(C_fix(0),t2));}

/* k1585 in file-select in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1587,2,t0,t1);}
t2=(C_word)C_i_not(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1593,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=t3;
f_1593(2,t4,t2);}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[8]))){
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,((C_word*)t0)[8]);
/* posixunix.scm: 610  fd_set */
t5=t3;
f_1593(2,t5,f_1567(C_fix(1),((C_word*)t0)[8]));}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1712,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t5=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[8]);}}}

/* a1711 in k1585 in file-select in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1712(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1712,3,t0,t1,t2);}
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,(C_word)C_i_fixnum_max(((C_word*)((C_word*)t0)[3])[1],t2));
/* posixunix.scm: 617  fd_set */
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,f_1567(C_fix(1),t2));}

/* k1591 in k1585 in file-select in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1593,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1596,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(C_word)C_u_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=t2;
f_1596(t4,(C_word)C_C_select_t(t3,((C_word*)t0)[3]));}
else{
t3=(C_word)C_u_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t4=t2;
f_1596(t4,(C_word)C_C_select(t3));}}

/* k1594 in k1591 in k1585 in file-select in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_1596(C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1596,NULL,2,t0,t1);}
if(C_truep((C_word)C_fixnum_lessp(t1,C_fix(0)))){
/* posixunix.scm: 624  posix-error */
t2=lf[3];
f_1331(7,t2,((C_word*)t0)[5],lf[48],lf[67],lf[68],((C_word*)t0)[4],((C_word*)t0)[3]);}
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
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1635,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[4])){
if(C_truep((C_word)C_fixnump(((C_word*)t0)[4]))){
/* posixunix.scm: 630  fd_test */
t4=t3;
f_1635(t4,f_1569(C_fix(0),((C_word*)t0)[4]));}
else{
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1676,a[2]=t5,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1678,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t8=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,((C_word*)t0)[4]);}}
else{
t4=t3;
f_1635(t4,C_SCHEME_FALSE);}}}}

/* a1677 in k1594 in k1591 in k1585 in file-select in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1678(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1678,3,t0,t1,t2);}
t3=f_1569(C_fix(0),t2);
if(C_truep(t3)){
t4=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k1674 in k1594 in k1591 in k1585 in file-select in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_1635(t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k1633 in k1594 in k1591 in k1585 in file-select in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_1635(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1635,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1639,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
if(C_truep((C_word)C_fixnump(((C_word*)t0)[3]))){
/* posixunix.scm: 636  fd_test */
t3=t2;
f_1639(t3,f_1569(C_fix(1),((C_word*)t0)[3]));}
else{
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1651,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1653,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t7=*((C_word*)lf[69]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,((C_word*)t0)[3]);}}
else{
t3=t2;
f_1639(t3,C_SCHEME_FALSE);}}

/* a1652 in k1633 in k1594 in k1591 in k1585 in file-select in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1653(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1653,3,t0,t1,t2);}
t3=f_1569(C_fix(1),t2);
if(C_truep(t3)){
t4=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[2])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k1649 in k1633 in k1594 in k1591 in k1585 in file-select in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_1639(t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k1637 in k1633 in k1594 in k1591 in k1585 in file-select in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_fcall f_1639(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 627  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* fd_test in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall f_1569(C_word t1,C_word t2){
C_word tmp;
C_word t3;
return((C_word)stub81(C_SCHEME_UNDEFINED,t1,t2));}

/* fd_set in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall f_1567(C_word t1,C_word t2){
C_word tmp;
C_word t3;
return((C_word)stub75(C_SCHEME_UNDEFINED,t1,t2));}

/* fd_zero in k1322 in k1319 in k1316 in k1313 in k1310 */
static C_word C_fcall f_1565(C_word t1){
C_word tmp;
C_word t2;
return((C_word)stub70(C_SCHEME_UNDEFINED,t1));}

/* file-mkstemp in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1536(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1536,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1540,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* posixunix.scm: 576  ##sys#make-c-string */
t4=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1538 in file-mkstemp in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1540,2,t0,t1);}
t2=(C_word)C_mkstemp(t1);
t3=(C_word)C_block_size(t1);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1546,a[2]=t1,a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t5)){
/* posixunix.scm: 580  posix-error */
t6=lf[3];
f_1331(6,t6,t4,lf[48],lf[64],lf[66],((C_word*)t0)[2]);}
else{
t6=t4;
f_1546(2,t6,C_SCHEME_UNDEFINED);}}

/* k1544 in k1538 in file-mkstemp in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1546,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1553,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* posixunix.scm: 581  ##sys#substring */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[2],C_fix(0),t3);}

/* k1551 in k1544 in k1538 in file-mkstemp in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 581  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* file-write in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1503(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1503r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1503r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1503r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1507,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(C_truep((C_word)C_blockp(t3))?(C_word)C_byteblockp(t3):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=t5;
f_1507(2,t7,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 562  ##sys#signal-hook */
t7=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t5,lf[59],lf[61],lf[63],t3);}}

/* k1505 in file-write in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1507,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[5]);
t3=(C_truep(t2)?(C_word)C_slot(((C_word*)t0)[5],C_fix(0)):(C_word)C_block_size(((C_word*)t0)[4]));
t4=(C_word)C_write(((C_word*)t0)[3],((C_word*)t0)[4],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1513,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_eqp(C_fix(-1),t4);
if(C_truep(t6)){
/* posixunix.scm: 567  posix-error */
t7=lf[3];
f_1331(7,t7,t5,lf[48],lf[61],lf[62],((C_word*)t0)[3],t3);}
else{
t7=t5;
f_1513(2,t7,C_SCHEME_UNDEFINED);}}

/* k1511 in k1505 in file-write in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-read in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1467(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1467r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1467r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1467r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1471,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_notvemptyp(t4))){
t6=t5;
f_1471(2,t6,(C_word)C_slot(t4,C_fix(0)));}
else{
/* posixunix.scm: 550  make-string */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}}

/* k1469 in file-read in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1471,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1474,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(C_truep((C_word)C_blockp(t1))?(C_word)C_byteblockp(t1):C_SCHEME_FALSE);
if(C_truep(t3)){
t4=t2;
f_1474(2,t4,C_SCHEME_UNDEFINED);}
else{
/* posixunix.scm: 552  ##sys#signal-hook */
t4=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t2,lf[59],lf[57],lf[60],t1);}}

/* k1472 in k1469 in file-read in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1474,2,t0,t1);}
t2=(C_word)C_read(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1477,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm: 555  posix-error */
t5=lf[3];
f_1331(7,t5,t3,lf[48],lf[57],lf[58],((C_word*)t0)[5],((C_word*)t0)[3]);}
else{
t5=t3;
f_1477(2,t5,C_SCHEME_UNDEFINED);}}

/* k1475 in k1472 in k1469 in file-read in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1477,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* file-close in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1455(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1455,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_lessp((C_word)C_close(t2),C_fix(0)))){
/* posixunix.scm: 543  posix-error */
t3=lf[3];
f_1331(6,t3,t1,lf[48],lf[54],lf[55],t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* file-open in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1426(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1426r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1426r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1426r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(9);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_slot(t4,C_fix(0)):((C_word*)t0)[2]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1434,a[2]=t2,a[3]=t1,a[4]=t6,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1447,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* posixunix.scm: 534  ##sys#expand-home-path */
t9=*((C_word*)lf[53]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t8,t2);}

/* k1445 in file-open in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 534  ##sys#make-c-string */
t2=*((C_word*)lf[52]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k1432 in file-open in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1434,2,t0,t1);}
t2=(C_word)C_open(t1,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1437,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* posixunix.scm: 536  posix-error */
t5=lf[3];
f_1331(8,t5,t3,lf[48],lf[50],lf[51],((C_word*)t0)[2],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t5=t3;
f_1437(2,t5,C_SCHEME_UNDEFINED);}}

/* k1435 in k1432 in file-open in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* file-control in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1393(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1393r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1393r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1393r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
t5=(C_word)C_vemptyp(t4);
t6=(C_truep(t5)?C_fix(0):(C_word)C_slot(t4,C_fix(0)));
t7=t2;
t8=t3;
t9=(C_word)stub24(C_SCHEME_UNDEFINED,t7,t8,t6);
t10=(C_word)C_eqp(t9,C_fix(-1));
if(C_truep(t10)){
/* posixunix.scm: 524  posix-error */
t11=lf[3];
f_1331(7,t11,t1,lf[48],lf[47],lf[49],t2,t3);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t9);}}

/* ##sys#file-select-one in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1352(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1352,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub17(C_SCHEME_UNDEFINED,t2));}

/* ##sys#file-nonblocking! in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1349(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1349,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub13(C_SCHEME_UNDEFINED,t2));}

/* posix-error in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1331(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_1331r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_1331r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_1331r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1335,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=t3,a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* posixunix.scm: 411  ##sys#update-errno */
t7=*((C_word*)lf[7]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}

/* k1333 in posix-error in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1342,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1346,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[6]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,(C_word)stub3(t4,t1),C_fix(0));}

/* k1344 in k1333 in posix-error in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* posixunix.scm: 412  string-append */
t2=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[5],t1);}

/* k1340 in k1333 in posix-error in k1322 in k1319 in k1316 in k1313 in k1310 */
static void C_ccall f_1342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(7,0,((C_word*)t0)[5],*((C_word*)lf[4]+1),((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[486] = {
{"toplevelposixunix.scm",(void*)C_posix_toplevel},
{"f_1312posixunix.scm",(void*)f_1312},
{"f_1315posixunix.scm",(void*)f_1315},
{"f_1318posixunix.scm",(void*)f_1318},
{"f_1321posixunix.scm",(void*)f_1321},
{"f_1324posixunix.scm",(void*)f_1324},
{"f_5672posixunix.scm",(void*)f_5672},
{"f_5688posixunix.scm",(void*)f_5688},
{"f_5676posixunix.scm",(void*)f_5676},
{"f_5679posixunix.scm",(void*)f_5679},
{"f_1912posixunix.scm",(void*)f_1912},
{"f_2429posixunix.scm",(void*)f_2429},
{"f_5666posixunix.scm",(void*)f_5666},
{"f_2543posixunix.scm",(void*)f_2543},
{"f_5663posixunix.scm",(void*)f_5663},
{"f_2934posixunix.scm",(void*)f_2934},
{"f_5660posixunix.scm",(void*)f_5660},
{"f_2953posixunix.scm",(void*)f_2953},
{"f_5645posixunix.scm",(void*)f_5645},
{"f_5655posixunix.scm",(void*)f_5655},
{"f_5649posixunix.scm",(void*)f_5649},
{"f_3026posixunix.scm",(void*)f_3026},
{"f_3059posixunix.scm",(void*)f_3059},
{"f_5625posixunix.scm",(void*)f_5625},
{"f_5621posixunix.scm",(void*)f_5621},
{"f_5396posixunix.scm",(void*)f_5396},
{"f_5550posixunix.scm",(void*)f_5550},
{"f_5556posixunix.scm",(void*)f_5556},
{"f_5545posixunix.scm",(void*)f_5545},
{"f_5540posixunix.scm",(void*)f_5540},
{"f_5398posixunix.scm",(void*)f_5398},
{"f_5527posixunix.scm",(void*)f_5527},
{"f_5535posixunix.scm",(void*)f_5535},
{"f_5402posixunix.scm",(void*)f_5402},
{"f_5515posixunix.scm",(void*)f_5515},
{"f_5412posixunix.scm",(void*)f_5412},
{"f_5414posixunix.scm",(void*)f_5414},
{"f_5433posixunix.scm",(void*)f_5433},
{"f_5501posixunix.scm",(void*)f_5501},
{"f_5508posixunix.scm",(void*)f_5508},
{"f_5495posixunix.scm",(void*)f_5495},
{"f_5448posixunix.scm",(void*)f_5448},
{"f_5482posixunix.scm",(void*)f_5482},
{"f_5468posixunix.scm",(void*)f_5468},
{"f_5480posixunix.scm",(void*)f_5480},
{"f_5476posixunix.scm",(void*)f_5476},
{"f_5460posixunix.scm",(void*)f_5460},
{"f_5458posixunix.scm",(void*)f_5458},
{"f_5519posixunix.scm",(void*)f_5519},
{"f_5339posixunix.scm",(void*)f_5339},
{"f_5351posixunix.scm",(void*)f_5351},
{"f_5346posixunix.scm",(void*)f_5346},
{"f_5341posixunix.scm",(void*)f_5341},
{"f_5282posixunix.scm",(void*)f_5282},
{"f_5294posixunix.scm",(void*)f_5294},
{"f_5289posixunix.scm",(void*)f_5289},
{"f_5284posixunix.scm",(void*)f_5284},
{"f_5226posixunix.scm",(void*)f_5226},
{"f_5276posixunix.scm",(void*)f_5276},
{"f_5280posixunix.scm",(void*)f_5280},
{"f_5268posixunix.scm",(void*)f_5268},
{"f_5230posixunix.scm",(void*)f_5230},
{"f_5259posixunix.scm",(void*)f_5259},
{"f_5233posixunix.scm",(void*)f_5233},
{"f_5244posixunix.scm",(void*)f_5244},
{"f_5238posixunix.scm",(void*)f_5238},
{"f_5170posixunix.scm",(void*)f_5170},
{"f_5182posixunix.scm",(void*)f_5182},
{"f_5213posixunix.scm",(void*)f_5213},
{"f_5193posixunix.scm",(void*)f_5193},
{"f_5209posixunix.scm",(void*)f_5209},
{"f_5197posixunix.scm",(void*)f_5197},
{"f_5205posixunix.scm",(void*)f_5205},
{"f_5201posixunix.scm",(void*)f_5201},
{"f_5176posixunix.scm",(void*)f_5176},
{"f_5159posixunix.scm",(void*)f_5159},
{"f_5163posixunix.scm",(void*)f_5163},
{"f_5148posixunix.scm",(void*)f_5148},
{"f_5152posixunix.scm",(void*)f_5152},
{"f_5087posixunix.scm",(void*)f_5087},
{"f_5091posixunix.scm",(void*)f_5091},
{"f_5094posixunix.scm",(void*)f_5094},
{"f_5097posixunix.scm",(void*)f_5097},
{"f_5126posixunix.scm",(void*)f_5126},
{"f_5130posixunix.scm",(void*)f_5130},
{"f_5133posixunix.scm",(void*)f_5133},
{"f_5136posixunix.scm",(void*)f_5136},
{"f_5124posixunix.scm",(void*)f_5124},
{"f_5098posixunix.scm",(void*)f_5098},
{"f_5070posixunix.scm",(void*)f_5070},
{"f_5083posixunix.scm",(void*)f_5083},
{"f_4992posixunix.scm",(void*)f_4992},
{"f_5053posixunix.scm",(void*)f_5053},
{"f_5066posixunix.scm",(void*)f_5066},
{"f_5069posixunix.scm",(void*)f_5069},
{"f_5033posixunix.scm",(void*)f_5033},
{"f_5048posixunix.scm",(void*)f_5048},
{"f_5042posixunix.scm",(void*)f_5042},
{"f_4996posixunix.scm",(void*)f_4996},
{"f_4998posixunix.scm",(void*)f_4998},
{"f_5019posixunix.scm",(void*)f_5019},
{"f_5013posixunix.scm",(void*)f_5013},
{"f_4940posixunix.scm",(void*)f_4940},
{"f_4947posixunix.scm",(void*)f_4947},
{"f_4966posixunix.scm",(void*)f_4966},
{"f_4970posixunix.scm",(void*)f_4970},
{"f_4934posixunix.scm",(void*)f_4934},
{"f_4925posixunix.scm",(void*)f_4925},
{"f_4929posixunix.scm",(void*)f_4929},
{"f_4904posixunix.scm",(void*)f_4904},
{"f_4901posixunix.scm",(void*)f_4901},
{"f_4898posixunix.scm",(void*)f_4898},
{"f_4895posixunix.scm",(void*)f_4895},
{"f_4823posixunix.scm",(void*)f_4823},
{"f_4853posixunix.scm",(void*)f_4853},
{"f_4847posixunix.scm",(void*)f_4847},
{"f_4806posixunix.scm",(void*)f_4806},
{"f_4642posixunix.scm",(void*)f_4642},
{"f_4761posixunix.scm",(void*)f_4761},
{"f_4756posixunix.scm",(void*)f_4756},
{"f_4644posixunix.scm",(void*)f_4644},
{"f_4648posixunix.scm",(void*)f_4648},
{"f_4656posixunix.scm",(void*)f_4656},
{"f_4699posixunix.scm",(void*)f_4699},
{"f_4669posixunix.scm",(void*)f_4669},
{"f_4694posixunix.scm",(void*)f_4694},
{"f_4672posixunix.scm",(void*)f_4672},
{"f_4634posixunix.scm",(void*)f_4634},
{"f_4626posixunix.scm",(void*)f_4626},
{"f_4588posixunix.scm",(void*)f_4588},
{"f_4610posixunix.scm",(void*)f_4610},
{"f_4614posixunix.scm",(void*)f_4614},
{"f_4482posixunix.scm",(void*)f_4482},
{"f_4488posixunix.scm",(void*)f_4488},
{"f_4509posixunix.scm",(void*)f_4509},
{"f_4580posixunix.scm",(void*)f_4580},
{"f_4513posixunix.scm",(void*)f_4513},
{"f_4520posixunix.scm",(void*)f_4520},
{"f_4522posixunix.scm",(void*)f_4522},
{"f_4539posixunix.scm",(void*)f_4539},
{"f_4549posixunix.scm",(void*)f_4549},
{"f_4553posixunix.scm",(void*)f_4553},
{"f_4503posixunix.scm",(void*)f_4503},
{"f_4470posixunix.scm",(void*)f_4470},
{"f_4474posixunix.scm",(void*)f_4474},
{"f_4477posixunix.scm",(void*)f_4477},
{"f_4443posixunix.scm",(void*)f_4443},
{"f_4447posixunix.scm",(void*)f_4447},
{"f_4422posixunix.scm",(void*)f_4422},
{"f_4426posixunix.scm",(void*)f_4426},
{"f_4369posixunix.scm",(void*)f_4369},
{"f_4376posixunix.scm",(void*)f_4376},
{"f_4366posixunix.scm",(void*)f_4366},
{"f_4347posixunix.scm",(void*)f_4347},
{"f_4351posixunix.scm",(void*)f_4351},
{"f_4339posixunix.scm",(void*)f_4339},
{"f_4311posixunix.scm",(void*)f_4311},
{"f_4318posixunix.scm",(void*)f_4318},
{"f_4283posixunix.scm",(void*)f_4283},
{"f_4290posixunix.scm",(void*)f_4290},
{"f_4255posixunix.scm",(void*)f_4255},
{"f_4262posixunix.scm",(void*)f_4262},
{"f_4265posixunix.scm",(void*)f_4265},
{"f_4268posixunix.scm",(void*)f_4268},
{"f_4238posixunix.scm",(void*)f_4238},
{"f_4242posixunix.scm",(void*)f_4242},
{"f_4245posixunix.scm",(void*)f_4245},
{"f_4227posixunix.scm",(void*)f_4227},
{"f_4221posixunix.scm",(void*)f_4221},
{"f_4215posixunix.scm",(void*)f_4215},
{"f_4209posixunix.scm",(void*)f_4209},
{"f_4177posixunix.scm",(void*)f_4177},
{"f_4119posixunix.scm",(void*)f_4119},
{"f_4123posixunix.scm",(void*)f_4123},
{"f_4129posixunix.scm",(void*)f_4129},
{"f_4148posixunix.scm",(void*)f_4148},
{"f_4135posixunix.scm",(void*)f_4135},
{"f_4036posixunix.scm",(void*)f_4036},
{"f_4042posixunix.scm",(void*)f_4042},
{"f_4046posixunix.scm",(void*)f_4046},
{"f_4054posixunix.scm",(void*)f_4054},
{"f_4080posixunix.scm",(void*)f_4080},
{"f_4084posixunix.scm",(void*)f_4084},
{"f_4072posixunix.scm",(void*)f_4072},
{"f_4024posixunix.scm",(void*)f_4024},
{"f_4029posixunix.scm",(void*)f_4029},
{"f_4013posixunix.scm",(void*)f_4013},
{"f_4018posixunix.scm",(void*)f_4018},
{"f_4022posixunix.scm",(void*)f_4022},
{"f_3990posixunix.scm",(void*)f_3990},
{"f_4011posixunix.scm",(void*)f_4011},
{"f_3994posixunix.scm",(void*)f_3994},
{"f_3953posixunix.scm",(void*)f_3953},
{"f_3957posixunix.scm",(void*)f_3957},
{"f_3975posixunix.scm",(void*)f_3975},
{"f_3971posixunix.scm",(void*)f_3971},
{"f_3928posixunix.scm",(void*)f_3928},
{"f_3906posixunix.scm",(void*)f_3906},
{"f_3910posixunix.scm",(void*)f_3910},
{"f_3891posixunix.scm",(void*)f_3891},
{"f_3895posixunix.scm",(void*)f_3895},
{"f_3876posixunix.scm",(void*)f_3876},
{"f_3880posixunix.scm",(void*)f_3880},
{"f_3858posixunix.scm",(void*)f_3858},
{"f_3796posixunix.scm",(void*)f_3796},
{"f_3815posixunix.scm",(void*)f_3815},
{"f_3760posixunix.scm",(void*)f_3760},
{"f_3785posixunix.scm",(void*)f_3785},
{"f_3781posixunix.scm",(void*)f_3781},
{"f_3774posixunix.scm",(void*)f_3774},
{"f_3524posixunix.scm",(void*)f_3524},
{"f_3715posixunix.scm",(void*)f_3715},
{"f_3704posixunix.scm",(void*)f_3704},
{"f_3710posixunix.scm",(void*)f_3710},
{"f_3526posixunix.scm",(void*)f_3526},
{"f_3633posixunix.scm",(void*)f_3633},
{"f_3634posixunix.scm",(void*)f_3634},
{"f_3651posixunix.scm",(void*)f_3651},
{"f_3661posixunix.scm",(void*)f_3661},
{"f_3619posixunix.scm",(void*)f_3619},
{"f_3575posixunix.scm",(void*)f_3575},
{"f_3611posixunix.scm",(void*)f_3611},
{"f_3590posixunix.scm",(void*)f_3590},
{"f_3600posixunix.scm",(void*)f_3600},
{"f_3584posixunix.scm",(void*)f_3584},
{"f_3579posixunix.scm",(void*)f_3579},
{"f_3582posixunix.scm",(void*)f_3582},
{"f_3529posixunix.scm",(void*)f_3529},
{"f_3564posixunix.scm",(void*)f_3564},
{"f_3545posixunix.scm",(void*)f_3545},
{"f_3255posixunix.scm",(void*)f_3255},
{"f_3464posixunix.scm",(void*)f_3464},
{"f_3453posixunix.scm",(void*)f_3453},
{"f_3459posixunix.scm",(void*)f_3459},
{"f_3448posixunix.scm",(void*)f_3448},
{"f_3257posixunix.scm",(void*)f_3257},
{"f_3264posixunix.scm",(void*)f_3264},
{"f_3421posixunix.scm",(void*)f_3421},
{"f_3425posixunix.scm",(void*)f_3425},
{"f_3400posixunix.scm",(void*)f_3400},
{"f_3410posixunix.scm",(void*)f_3410},
{"f_3388posixunix.scm",(void*)f_3388},
{"f_3375posixunix.scm",(void*)f_3375},
{"f_3379posixunix.scm",(void*)f_3379},
{"f_3370posixunix.scm",(void*)f_3370},
{"f_3373posixunix.scm",(void*)f_3373},
{"f_3288posixunix.scm",(void*)f_3288},
{"f_3300posixunix.scm",(void*)f_3300},
{"f_3337posixunix.scm",(void*)f_3337},
{"f_3346posixunix.scm",(void*)f_3346},
{"f_3340posixunix.scm",(void*)f_3340},
{"f_3316posixunix.scm",(void*)f_3316},
{"f_3319posixunix.scm",(void*)f_3319},
{"f_3280posixunix.scm",(void*)f_3280},
{"f_3265posixunix.scm",(void*)f_3265},
{"f_3279posixunix.scm",(void*)f_3279},
{"f_3234posixunix.scm",(void*)f_3234},
{"f_3238posixunix.scm",(void*)f_3238},
{"f_3241posixunix.scm",(void*)f_3241},
{"f_3192posixunix.scm",(void*)f_3192},
{"f_3228posixunix.scm",(void*)f_3228},
{"f_3211posixunix.scm",(void*)f_3211},
{"f_3181posixunix.scm",(void*)f_3181},
{"f_3190posixunix.scm",(void*)f_3190},
{"f_3170posixunix.scm",(void*)f_3170},
{"f_3179posixunix.scm",(void*)f_3179},
{"f_3155posixunix.scm",(void*)f_3155},
{"f_3168posixunix.scm",(void*)f_3168},
{"f_3118posixunix.scm",(void*)f_3118},
{"f_3126posixunix.scm",(void*)f_3126},
{"f_3099posixunix.scm",(void*)f_3099},
{"f_3088posixunix.scm",(void*)f_3088},
{"f_3092posixunix.scm",(void*)f_3092},
{"f_3060posixunix.scm",(void*)f_3060},
{"f_3081posixunix.scm",(void*)f_3081},
{"f_3065posixunix.scm",(void*)f_3065},
{"f_3068posixunix.scm",(void*)f_3068},
{"f_3028posixunix.scm",(void*)f_3028},
{"f_3055posixunix.scm",(void*)f_3055},
{"f_3043posixunix.scm",(void*)f_3043},
{"f_3051posixunix.scm",(void*)f_3051},
{"f_3047posixunix.scm",(void*)f_3047},
{"f_3009posixunix.scm",(void*)f_3009},
{"f_3019posixunix.scm",(void*)f_3019},
{"f_2994posixunix.scm",(void*)f_2994},
{"f_3004posixunix.scm",(void*)f_3004},
{"f_2998posixunix.scm",(void*)f_2998},
{"f_2988posixunix.scm",(void*)f_2988},
{"f_2982posixunix.scm",(void*)f_2982},
{"f_2976posixunix.scm",(void*)f_2976},
{"f_2955posixunix.scm",(void*)f_2955},
{"f_2974posixunix.scm",(void*)f_2974},
{"f_2970posixunix.scm",(void*)f_2970},
{"f_2962posixunix.scm",(void*)f_2962},
{"f_2936posixunix.scm",(void*)f_2936},
{"f_2946posixunix.scm",(void*)f_2946},
{"f_2917posixunix.scm",(void*)f_2917},
{"f_2927posixunix.scm",(void*)f_2927},
{"f_2914posixunix.scm",(void*)f_2914},
{"f_2911posixunix.scm",(void*)f_2911},
{"f_2890posixunix.scm",(void*)f_2890},
{"f_2909posixunix.scm",(void*)f_2909},
{"f_2905posixunix.scm",(void*)f_2905},
{"f_2869posixunix.scm",(void*)f_2869},
{"f_2888posixunix.scm",(void*)f_2888},
{"f_2884posixunix.scm",(void*)f_2884},
{"f_2811posixunix.scm",(void*)f_2811},
{"f_2807posixunix.scm",(void*)f_2807},
{"f_2821posixunix.scm",(void*)f_2821},
{"f_2748posixunix.scm",(void*)f_2748},
{"f_2752posixunix.scm",(void*)f_2752},
{"f_2757posixunix.scm",(void*)f_2757},
{"f_2773posixunix.scm",(void*)f_2773},
{"f_2685posixunix.scm",(void*)f_2685},
{"f_2743posixunix.scm",(void*)f_2743},
{"f_2689posixunix.scm",(void*)f_2689},
{"f_2692posixunix.scm",(void*)f_2692},
{"f_2724posixunix.scm",(void*)f_2724},
{"f_2695posixunix.scm",(void*)f_2695},
{"f_2700posixunix.scm",(void*)f_2700},
{"f_2714posixunix.scm",(void*)f_2714},
{"f_2682posixunix.scm",(void*)f_2682},
{"f_2628posixunix.scm",(void*)f_2628},
{"f_2677posixunix.scm",(void*)f_2677},
{"f_2632posixunix.scm",(void*)f_2632},
{"f_2642posixunix.scm",(void*)f_2642},
{"f_2646posixunix.scm",(void*)f_2646},
{"f_2652posixunix.scm",(void*)f_2652},
{"f_2656posixunix.scm",(void*)f_2656},
{"f_2666posixunix.scm",(void*)f_2666},
{"f_2650posixunix.scm",(void*)f_2650},
{"f_2583posixunix.scm",(void*)f_2583},
{"f_2620posixunix.scm",(void*)f_2620},
{"f_2587posixunix.scm",(void*)f_2587},
{"f_2597posixunix.scm",(void*)f_2597},
{"f_2601posixunix.scm",(void*)f_2601},
{"f_2605posixunix.scm",(void*)f_2605},
{"f_2609posixunix.scm",(void*)f_2609},
{"f_2613posixunix.scm",(void*)f_2613},
{"f_2545posixunix.scm",(void*)f_2545},
{"f_2578posixunix.scm",(void*)f_2578},
{"f_2549posixunix.scm",(void*)f_2549},
{"f_2556posixunix.scm",(void*)f_2556},
{"f_2560posixunix.scm",(void*)f_2560},
{"f_2564posixunix.scm",(void*)f_2564},
{"f_2568posixunix.scm",(void*)f_2568},
{"f_2572posixunix.scm",(void*)f_2572},
{"f_2530posixunix.scm",(void*)f_2530},
{"f_2518posixunix.scm",(void*)f_2518},
{"f_2515posixunix.scm",(void*)f_2515},
{"f_2483posixunix.scm",(void*)f_2483},
{"f_2489posixunix.scm",(void*)f_2489},
{"f_2465posixunix.scm",(void*)f_2465},
{"f_2480posixunix.scm",(void*)f_2480},
{"f_2469posixunix.scm",(void*)f_2469},
{"f_2447posixunix.scm",(void*)f_2447},
{"f_2457posixunix.scm",(void*)f_2457},
{"f_2437posixunix.scm",(void*)f_2437},
{"f_2431posixunix.scm",(void*)f_2431},
{"f_2384posixunix.scm",(void*)f_2384},
{"f_2388posixunix.scm",(void*)f_2388},
{"f_2364posixunix.scm",(void*)f_2364},
{"f_2368posixunix.scm",(void*)f_2368},
{"f_2374posixunix.scm",(void*)f_2374},
{"f_2378posixunix.scm",(void*)f_2378},
{"f_2344posixunix.scm",(void*)f_2344},
{"f_2348posixunix.scm",(void*)f_2348},
{"f_2354posixunix.scm",(void*)f_2354},
{"f_2358posixunix.scm",(void*)f_2358},
{"f_2320posixunix.scm",(void*)f_2320},
{"f_2324posixunix.scm",(void*)f_2324},
{"f_2335posixunix.scm",(void*)f_2335},
{"f_2339posixunix.scm",(void*)f_2339},
{"f_2329posixunix.scm",(void*)f_2329},
{"f_2296posixunix.scm",(void*)f_2296},
{"f_2300posixunix.scm",(void*)f_2300},
{"f_2311posixunix.scm",(void*)f_2311},
{"f_2315posixunix.scm",(void*)f_2315},
{"f_2305posixunix.scm",(void*)f_2305},
{"f_2283posixunix.scm",(void*)f_2283},
{"f_2287posixunix.scm",(void*)f_2287},
{"f_2250posixunix.scm",(void*)f_2250},
{"f_2278posixunix.scm",(void*)f_2278},
{"f_2268posixunix.scm",(void*)f_2268},
{"f_2261posixunix.scm",(void*)f_2261},
{"f_2217posixunix.scm",(void*)f_2217},
{"f_2245posixunix.scm",(void*)f_2245},
{"f_2235posixunix.scm",(void*)f_2235},
{"f_2228posixunix.scm",(void*)f_2228},
{"f_2202posixunix.scm",(void*)f_2202},
{"f_2215posixunix.scm",(void*)f_2215},
{"f_2196posixunix.scm",(void*)f_2196},
{"f_2184posixunix.scm",(void*)f_2184},
{"f_2148posixunix.scm",(void*)f_2148},
{"f_2161posixunix.scm",(void*)f_2161},
{"f_2128posixunix.scm",(void*)f_2128},
{"f_2146posixunix.scm",(void*)f_2146},
{"f_2132posixunix.scm",(void*)f_2132},
{"f_1977posixunix.scm",(void*)f_1977},
{"f_2079posixunix.scm",(void*)f_2079},
{"f_2087posixunix.scm",(void*)f_2087},
{"f_2074posixunix.scm",(void*)f_2074},
{"f_1979posixunix.scm",(void*)f_1979},
{"f_1983posixunix.scm",(void*)f_1983},
{"f_1986posixunix.scm",(void*)f_1986},
{"f_1989posixunix.scm",(void*)f_1989},
{"f_2073posixunix.scm",(void*)f_2073},
{"f_1993posixunix.scm",(void*)f_1993},
{"f_2007posixunix.scm",(void*)f_2007},
{"f_2017posixunix.scm",(void*)f_2017},
{"f_2029posixunix.scm",(void*)f_2029},
{"f_2039posixunix.scm",(void*)f_2039},
{"f_1956posixunix.scm",(void*)f_1956},
{"f_1975posixunix.scm",(void*)f_1975},
{"f_1971posixunix.scm",(void*)f_1971},
{"f_1935posixunix.scm",(void*)f_1935},
{"f_1954posixunix.scm",(void*)f_1954},
{"f_1950posixunix.scm",(void*)f_1950},
{"f_1914posixunix.scm",(void*)f_1914},
{"f_1933posixunix.scm",(void*)f_1933},
{"f_1929posixunix.scm",(void*)f_1929},
{"f_1858posixunix.scm",(void*)f_1858},
{"f_1865posixunix.scm",(void*)f_1865},
{"f_1877posixunix.scm",(void*)f_1877},
{"f_1871posixunix.scm",(void*)f_1871},
{"f_1852posixunix.scm",(void*)f_1852},
{"f_1856posixunix.scm",(void*)f_1856},
{"f_1846posixunix.scm",(void*)f_1846},
{"f_1850posixunix.scm",(void*)f_1850},
{"f_1840posixunix.scm",(void*)f_1840},
{"f_1844posixunix.scm",(void*)f_1844},
{"f_1834posixunix.scm",(void*)f_1834},
{"f_1838posixunix.scm",(void*)f_1838},
{"f_1828posixunix.scm",(void*)f_1828},
{"f_1832posixunix.scm",(void*)f_1832},
{"f_1822posixunix.scm",(void*)f_1822},
{"f_1826posixunix.scm",(void*)f_1826},
{"f_1816posixunix.scm",(void*)f_1816},
{"f_1820posixunix.scm",(void*)f_1820},
{"f_1810posixunix.scm",(void*)f_1810},
{"f_1814posixunix.scm",(void*)f_1814},
{"f_1785posixunix.scm",(void*)f_1785},
{"f_1789posixunix.scm",(void*)f_1789},
{"f_1748posixunix.scm",(void*)f_1748},
{"f_1780posixunix.scm",(void*)f_1780},
{"f_1773posixunix.scm",(void*)f_1773},
{"f_1752posixunix.scm",(void*)f_1752},
{"f_1571posixunix.scm",(void*)f_1571},
{"f_1732posixunix.scm",(void*)f_1732},
{"f_1587posixunix.scm",(void*)f_1587},
{"f_1712posixunix.scm",(void*)f_1712},
{"f_1593posixunix.scm",(void*)f_1593},
{"f_1596posixunix.scm",(void*)f_1596},
{"f_1678posixunix.scm",(void*)f_1678},
{"f_1676posixunix.scm",(void*)f_1676},
{"f_1635posixunix.scm",(void*)f_1635},
{"f_1653posixunix.scm",(void*)f_1653},
{"f_1651posixunix.scm",(void*)f_1651},
{"f_1639posixunix.scm",(void*)f_1639},
{"f_1569posixunix.scm",(void*)f_1569},
{"f_1567posixunix.scm",(void*)f_1567},
{"f_1565posixunix.scm",(void*)f_1565},
{"f_1536posixunix.scm",(void*)f_1536},
{"f_1540posixunix.scm",(void*)f_1540},
{"f_1546posixunix.scm",(void*)f_1546},
{"f_1553posixunix.scm",(void*)f_1553},
{"f_1503posixunix.scm",(void*)f_1503},
{"f_1507posixunix.scm",(void*)f_1507},
{"f_1513posixunix.scm",(void*)f_1513},
{"f_1467posixunix.scm",(void*)f_1467},
{"f_1471posixunix.scm",(void*)f_1471},
{"f_1474posixunix.scm",(void*)f_1474},
{"f_1477posixunix.scm",(void*)f_1477},
{"f_1455posixunix.scm",(void*)f_1455},
{"f_1426posixunix.scm",(void*)f_1426},
{"f_1447posixunix.scm",(void*)f_1447},
{"f_1434posixunix.scm",(void*)f_1434},
{"f_1437posixunix.scm",(void*)f_1437},
{"f_1393posixunix.scm",(void*)f_1393},
{"f_1352posixunix.scm",(void*)f_1352},
{"f_1349posixunix.scm",(void*)f_1349},
{"f_1331posixunix.scm",(void*)f_1331},
{"f_1335posixunix.scm",(void*)f_1335},
{"f_1346posixunix.scm",(void*)f_1346},
{"f_1342posixunix.scm",(void*)f_1342},
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
