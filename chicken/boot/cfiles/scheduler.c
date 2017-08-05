/* Generated from scheduler.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:14
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: scheduler.scm -output-file scheduler.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: scheduler
*/

#include "chicken.h"

#ifdef HAVE_ERRNO_H
# include <errno.h>
# define C_signal_interrupted_p     C_mk_bool(errno == EINTR)
#else
# define C_signal_interrupted_p     C_SCHEME_FALSE
#endif

#ifdef _WIN32
# if _MSC_VER > 1300
# include <winsock2.h>
# include <ws2tcpip.h>
# else
# include <winsock.h>
# endif
/* Beware: winsock2.h must come BEFORE windows.h */
# define C_msleep(n)     (Sleep(C_unfix(n)), C_SCHEME_TRUE)
#else
# include <unistd.h>
# include <sys/types.h>
# include <sys/time.h>
# include <time.h>
static C_word C_msleep(C_word ms);
C_word C_msleep(C_word ms) {
#ifdef __CYGWIN__
  if(usleep(C_unfix(ms) * 1000) == -1) return C_SCHEME_FALSE;
#else
  struct timespec ts;
  unsigned long mss = C_unfix(ms);
  ts.tv_sec = mss / 1000;
  ts.tv_nsec = (mss % 1000) * 1000000;
  
  if(nanosleep(&ts, NULL) == -1) return C_SCHEME_FALSE;
#endif
  return C_SCHEME_TRUE;
}
#endif
static fd_set C_fdset_input, C_fdset_output, C_fdset_input_2, C_fdset_output_2;
#define C_fd_test_input(fd)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_input))
#define C_fd_test_output(fd)  C_mk_bool(FD_ISSET(C_unfix(fd), &C_fdset_output))

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[105];


/* from ##sys#fdset-clear */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub129(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub129(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
FD_CLR(fd, &C_fdset_input_2);FD_CLR(fd, &C_fdset_output_2);
C_return:
#undef return

return C_r;}

/* from ##sys#fdset-output-set */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub125(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub125(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
FD_SET(fd, &C_fdset_output);
C_return:
#undef return

return C_r;}

/* from ##sys#fdset-input-set */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub121(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub121(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
FD_SET(fd, &C_fdset_input);
C_return:
#undef return

return C_r;}

/* from f_1320 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub118(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub118(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
FD_ZERO(&C_fdset_input);FD_ZERO(&C_fdset_output);
C_return:
#undef return

return C_r;}

/* from ##sys#fdset-restore */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub116(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub116(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
C_fdset_input = C_fdset_input_2;C_fdset_output = C_fdset_output_2;
C_return:
#undef return

return C_r;}

/* from ##sys#fdset-select-timeout */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub112(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub112(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int to=(int )C_truep(C_a0);
unsigned long tm=(unsigned long )C_num_to_unsigned_long(C_a1);
struct timeval timeout;timeout.tv_sec = tm / 1000;timeout.tv_usec = tm % 1000;C_fdset_input_2 = C_fdset_input;C_fdset_output_2 = C_fdset_output;return(select(FD_SETSIZE, &C_fdset_input, &C_fdset_output, NULL, to ? &timeout : NULL));
C_return:
#undef return

return C_r;}

C_noret_decl(C_scheduler_toplevel)
C_externexport void C_ccall C_scheduler_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1320)
static void C_ccall f_1320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_815)
static void C_ccall f_815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1264)
static void C_ccall f_1264(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1309)
static void C_ccall f_1309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1301)
static void C_ccall f_1301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1283)
static void C_ccall f_1283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1167)
static void C_ccall f_1167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1182)
static void C_ccall f_1182(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1252)
static void C_ccall f_1252(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1186)
static void C_fcall f_1186(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1236)
static void C_ccall f_1236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1214)
static void C_ccall f_1214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1223)
static void C_ccall f_1223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1228)
static void C_ccall f_1228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1101)
static void C_ccall f_1101(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1112)
static void C_ccall f_1112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1124)
static void C_fcall f_1124(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1157)
static void C_ccall f_1157(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1145)
static void C_ccall f_1145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1116)
static void C_ccall f_1116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1082)
static void C_ccall f_1082(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1072)
static void C_ccall f_1072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1054)
static void C_ccall f_1054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1070)
static void C_ccall f_1070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1062)
static void C_ccall f_1062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1066)
static void C_ccall f_1066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_826)
static void C_ccall f_826(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_851)
static void C_fcall f_851(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_830)
static void C_ccall f_830(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_833)
static void C_fcall f_833(C_word t0,C_word t1) C_noret;
C_noret_decl(f_749)
static void C_ccall f_749(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_786)
static void C_ccall f_786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_789)
static void C_ccall f_789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_792)
static void C_ccall f_792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_805)
static void C_ccall f_805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_798)
static void C_ccall f_798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_773)
static void C_ccall f_773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_777)
static void C_ccall f_777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_753)
static void C_ccall f_753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_759)
static void C_ccall f_759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_737)
static void C_ccall f_737(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_688)
static void C_ccall f_688(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_692)
static void C_ccall f_692(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_721)
static void C_ccall f_721(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_710)
static void C_ccall f_710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_653)
static void C_ccall f_653(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_593)
static void C_ccall f_593(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_605)
static void C_fcall f_605(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_615)
static void C_fcall f_615(C_word t0,C_word t1) C_noret;
C_noret_decl(f_597)
static void C_ccall f_597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_568)
static void C_ccall f_568(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_586)
static void C_ccall f_586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_572)
static void C_ccall f_572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_467)
static void C_ccall f_467(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_477)
static void C_fcall f_477(C_word t0,C_word t1) C_noret;
C_noret_decl(f_464)
static void C_ccall f_464(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_456)
static void C_fcall f_456(C_word t0) C_noret;
C_noret_decl(f_244)
static void C_ccall f_244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_274)
static void C_ccall f_274(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_279)
static void C_fcall f_279(C_word t0,C_word t1) C_noret;
C_noret_decl(f_358)
static void C_fcall f_358(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_404)
static void C_fcall f_404(C_word t0,C_word t1) C_noret;
C_noret_decl(f_390)
static void C_ccall f_390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_283)
static void C_ccall f_283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1033)
static void C_fcall f_1033(C_word t0,C_word t1) C_noret;
C_noret_decl(f_933)
static void C_fcall f_933(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1021)
static void C_ccall f_1021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_961)
static void C_fcall f_961(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1001)
static void C_fcall f_1001(C_word t0,C_word t1) C_noret;
C_noret_decl(f_991)
static void C_ccall f_991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_931)
static void C_ccall f_931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_912)
static void C_ccall f_912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_286)
static void C_ccall f_286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_291)
static void C_fcall f_291(C_word t0,C_word t1) C_noret;
C_noret_decl(f_501)
static void C_fcall f_501(C_word t0,C_word t1) C_noret;
C_noret_decl(f_295)
static void C_fcall f_295(C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1186)
static void C_fcall trf_1186(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1186(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1186(t0,t1);}

C_noret_decl(trf_1124)
static void C_fcall trf_1124(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1124(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1124(t0,t1,t2);}

C_noret_decl(trf_851)
static void C_fcall trf_851(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_851(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_851(t0,t1,t2);}

C_noret_decl(trf_833)
static void C_fcall trf_833(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_833(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_833(t0,t1);}

C_noret_decl(trf_605)
static void C_fcall trf_605(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_605(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_605(t0,t1,t2,t3);}

C_noret_decl(trf_615)
static void C_fcall trf_615(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_615(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_615(t0,t1);}

C_noret_decl(trf_477)
static void C_fcall trf_477(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_477(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_477(t0,t1);}

C_noret_decl(trf_456)
static void C_fcall trf_456(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_456(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_456(t0);}

C_noret_decl(trf_279)
static void C_fcall trf_279(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_279(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_279(t0,t1);}

C_noret_decl(trf_358)
static void C_fcall trf_358(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_358(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_358(t0,t1,t2);}

C_noret_decl(trf_404)
static void C_fcall trf_404(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_404(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_404(t0,t1);}

C_noret_decl(trf_1033)
static void C_fcall trf_1033(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1033(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1033(t0,t1);}

C_noret_decl(trf_933)
static void C_fcall trf_933(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_933(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_933(t0,t1,t2,t3);}

C_noret_decl(trf_961)
static void C_fcall trf_961(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_961(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_961(t0,t1,t2);}

C_noret_decl(trf_1001)
static void C_fcall trf_1001(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1001(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1001(t0,t1);}

C_noret_decl(trf_291)
static void C_fcall trf_291(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_291(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_291(t0,t1);}

C_noret_decl(trf_501)
static void C_fcall trf_501(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_501(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_501(t0,t1);}

C_noret_decl(trf_295)
static void C_fcall trf_295(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_295(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_295(t0,t1);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_scheduler_toplevel(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("scheduler_toplevel"));
C_check_nursery_minimum(42);
if(!C_demand(42)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(733)){
C_save(t1);
C_rereclaim2(733*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(42);
C_initialize_lf(lf,105);
lf[0]=C_h_intern(&lf[0],12,"\003sysschedule");
lf[1]=C_h_intern(&lf[1],18,"\003syscurrent-thread");
lf[2]=C_h_intern(&lf[2],17,"\003sysdynamic-winds");
lf[3]=C_h_intern(&lf[3],18,"\003sysstandard-input");
lf[4]=C_h_intern(&lf[4],19,"\003sysstandard-output");
lf[5]=C_h_intern(&lf[5],18,"\003sysstandard-error");
lf[6]=C_h_intern(&lf[6],29,"\003syscurrent-exception-handler");
lf[7]=C_h_intern(&lf[7],28,"\003syscurrent-parameter-vector");
lf[8]=C_h_intern(&lf[8],5,"ready");
lf[9]=C_h_intern(&lf[9],7,"running");
lf[11]=C_h_intern(&lf[11],11,"\003sysfd-list");
lf[12]=C_h_intern(&lf[12],15,"\003syssignal-hook");
lf[13]=C_h_intern(&lf[13],14,"\000runtime-error");
lf[14]=C_static_string(C_heaptop,8,"deadlock");
lf[17]=C_static_lambda_info(C_heaptop,7,"(loop2)");
lf[19]=C_h_intern(&lf[19],25,"\003systhread-basic-unblock!");
lf[20]=C_static_lambda_info(C_heaptop,18,"(loop2 threads159)");
lf[21]=C_static_lambda_info(C_heaptop,18,"(loop n150 lst151)");
lf[22]=C_static_lambda_info(C_heaptop,12,"(loop lst14)");
lf[23]=C_static_lambda_info(C_heaptop,7,"(loop1)");
lf[24]=C_h_intern(&lf[24],22,"\003sysadd-to-ready-queue");
lf[25]=C_static_lambda_info(C_heaptop,16,"(##sys#schedule)");
lf[26]=C_h_intern(&lf[26],19,"\003systhread-unblock!");
lf[27]=C_h_intern(&lf[27],21,"\003sysprimordial-thread");
lf[28]=C_static_lambda_info(C_heaptop,24,"(##sys#force-primordial)");
lf[29]=C_h_intern(&lf[29],15,"\003sysready-queue");
lf[30]=C_static_lambda_info(C_heaptop,19,"(##sys#ready-queue)");
lf[31]=C_static_lambda_info(C_heaptop,35,"(##sys#add-to-ready-queue thread32)");
lf[32]=C_h_intern(&lf[32],18,"\003sysinterrupt-hook");
lf[33]=C_static_lambda_info(C_heaptop,6,"(a585)");
lf[34]=C_static_lambda_info(C_heaptop,39,"(##sys#interrupt-hook reason55 state56)");
lf[35]=C_h_intern(&lf[35],29,"\003systhread-block-for-timeout!");
lf[36]=C_h_intern(&lf[36],7,"blocked");
lf[37]=C_static_lambda_info(C_heaptop,18,"(loop tl63 prev64)");
lf[38]=C_static_lambda_info(C_heaptop,42,"(##sys#thread-block-for-timeout! t60 tm61)");
lf[39]=C_h_intern(&lf[39],33,"\003systhread-block-for-termination!");
lf[40]=C_h_intern(&lf[40],4,"dead");
lf[41]=C_h_intern(&lf[41],10,"terminated");
lf[42]=C_static_lambda_info(C_heaptop,46,"(##sys#thread-block-for-termination! t70 t271)");
lf[43]=C_h_intern(&lf[43],16,"\003systhread-kill!");
lf[44]=C_static_lambda_info(C_heaptop,11,"(a720 t280)");
lf[45]=C_h_intern(&lf[45],12,"\003sysfor-each");
lf[46]=C_h_intern(&lf[46],19,"\003sysabandon-mutexes");
lf[47]=C_static_lambda_info(C_heaptop,28,"(##sys#thread-kill! t77 s78)");
lf[48]=C_static_lambda_info(C_heaptop,33,"(##sys#thread-basic-unblock! t87)");
lf[49]=C_h_intern(&lf[49],19,"print-error-message");
lf[50]=C_h_intern(&lf[50],7,"display");
lf[51]=C_h_intern(&lf[51],16,"print-call-chain");
lf[52]=C_h_intern(&lf[52],18,"open-output-string");
lf[53]=C_h_intern(&lf[53],17,"get-output-string");
lf[54]=C_h_intern(&lf[54],29,"\003sysdefault-exception-handler");
lf[55]=C_h_intern(&lf[55],10,"\003syssignal");
lf[56]=C_static_lambda_info(C_heaptop,6,"(a772)");
lf[57]=C_h_intern(&lf[57],20,"\003syswarnings-enabled");
lf[58]=C_static_string(C_heaptop,3,"): ");
lf[59]=C_static_string(C_heaptop,9,"Warning (");
lf[60]=C_static_lambda_info(C_heaptop,39,"(##sys#default-exception-handler arg95)");
lf[61]=C_h_intern(&lf[61],25,"\003systhread-block-for-i/o!");
lf[62]=C_static_lambda_info(C_heaptop,13,"(loop lst136)");
lf[63]=C_static_lambda_info(C_heaptop,47,"(##sys#thread-block-for-i/o! t132 fd133 i/o134)");
lf[64]=C_h_intern(&lf[64],15,"\003sysall-threads");
lf[65]=C_h_intern(&lf[65],6,"append");
lf[66]=C_h_intern(&lf[66],7,"\003sysmap");
lf[67]=C_h_intern(&lf[67],3,"cdr");
lf[68]=C_static_lambda_info(C_heaptop,19,"(##sys#all-threads)");
lf[69]=C_h_intern(&lf[69],27,"\003sysfetch-and-clear-threads");
lf[70]=C_static_lambda_info(C_heaptop,31,"(##sys#fetch-and-clear-threads)");
lf[71]=C_h_intern(&lf[71],19,"\003sysrestore-threads");
lf[72]=C_static_lambda_info(C_heaptop,30,"(##sys#restore-threads vec172)");
lf[73]=C_h_intern(&lf[73],8,"\003sysdelq");
lf[74]=C_static_lambda_info(C_heaptop,13,"(loop fdl178)");
lf[75]=C_static_lambda_info(C_heaptop,28,"(##sys#thread-unblock! t176)");
lf[76]=C_h_intern(&lf[76],15,"\003sysbreak-entry");
lf[77]=C_h_intern(&lf[77],19,"\003sysbreak-in-thread");
lf[78]=C_h_intern(&lf[78],9,"condition");
tmp=C_intern(C_heaptop,3,"exn");
C_save(tmp);
tmp=C_intern(C_heaptop,10,"breakpoint");
C_save(tmp);
lf[79]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[80]=C_h_intern(&lf[80],19,"\003syslast-breakpoint");
lf[81]=C_h_intern(&lf[81],9,"suspended");
lf[82]=C_static_lambda_info(C_heaptop,7,"(a1227)");
lf[83]=C_static_lambda_info(C_heaptop,7,"(a1218)");
tmp=C_intern(C_heaptop,3,"exn");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"message");
lf[84]=C_h_pair(C_restore,tmp);
lf[85]=C_static_string(C_heaptop,18,"*** breakpoint ***");
tmp=C_intern(C_heaptop,3,"exn");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"arguments");
lf[86]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,3,"exn");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"location");
lf[87]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,3,"exn");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"continuation");
lf[88]=C_h_pair(C_restore,tmp);
lf[89]=C_static_lambda_info(C_heaptop,14,"(a1251 . _190)");
tmp=C_intern(C_heaptop,3,"exn");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"thread");
lf[90]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,3,"exn");
C_save(tmp);
tmp=C_intern(C_heaptop,23,"primordial-continuation");
lf[91]=C_h_pair(C_restore,tmp);
lf[92]=C_static_lambda_info(C_heaptop,12,"(a1181 k188)");
lf[93]=C_static_lambda_info(C_heaptop,35,"(##sys#break-entry name184 args185)");
lf[94]=C_h_intern(&lf[94],16,"\003sysbreak-resume");
tmp=C_intern(C_heaptop,3,"exn");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"continuation");
lf[95]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,3,"exn");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"thread");
lf[96]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,3,"exn");
C_save(tmp);
tmp=C_intern(C_heaptop,23,"primordial-continuation");
lf[97]=C_h_pair(C_restore,tmp);
lf[98]=C_h_intern(&lf[98],11,"\000type-error");
lf[99]=C_static_string(C_heaptop,29,"condition has no continuation");
lf[100]=C_static_lambda_info(C_heaptop,7,"(a1308)");
lf[101]=C_static_string(C_heaptop,29,"condition has no continuation");
lf[102]=C_static_lambda_info(C_heaptop,27,"(##sys#break-resume exn199)");
lf[103]=C_static_lambda_info(C_heaptop,8,"(f_1320)");
lf[104]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,105,create_ptable());
t2=C_mutate((C_word*)lf[0]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_244,a[2]=lf[25],tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[18],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_456,a[2]=lf[28],tmp=(C_word)a,a+=3,tmp));
t4=lf[15]=C_SCHEME_END_OF_LIST;;
t5=lf[16]=C_SCHEME_END_OF_LIST;;
t6=C_mutate((C_word*)lf[29]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_464,a[2]=lf[30],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[24]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_467,a[2]=lf[31],tmp=(C_word)a,a+=3,tmp));
t8=*((C_word*)lf[32]+1);
t9=C_mutate((C_word*)lf[32]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_568,a[2]=t8,a[3]=lf[34],tmp=(C_word)a,a+=4,tmp));
t10=lf[10]=C_SCHEME_END_OF_LIST;;
t11=C_mutate((C_word*)lf[35]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_593,a[2]=lf[38],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[39]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_653,a[2]=lf[42],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[43]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_688,a[2]=lf[47],tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[19]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_737,a[2]=lf[48],tmp=(C_word)a,a+=3,tmp));
t15=*((C_word*)lf[49]+1);
t16=*((C_word*)lf[50]+1);
t17=*((C_word*)lf[51]+1);
t18=*((C_word*)lf[52]+1);
t19=*((C_word*)lf[53]+1);
t20=C_mutate((C_word*)lf[54]+1,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_749,a[2]=t18,a[3]=t16,a[4]=t19,a[5]=t15,a[6]=t17,a[7]=lf[60],tmp=(C_word)a,a+=8,tmp));
t21=C_set_block_item(lf[11],0,C_SCHEME_END_OF_LIST);
t22=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_815,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1320,a[2]=lf[103],tmp=(C_word)a,a+=3,tmp);
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,t22);}

/* f_1320 */
static void C_ccall f_1320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1320,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub118(C_SCHEME_UNDEFINED));}

/* k813 */
static void C_ccall f_815(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_815,2,t0,t1);}
t2=C_mutate((C_word*)lf[61]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_826,a[2]=lf[63],tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[64]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1054,a[2]=lf[68],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[69]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1072,a[2]=lf[70],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[71]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1082,a[2]=lf[72],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[26]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1101,a[2]=lf[75],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[76]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1167,a[2]=lf[93],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[94]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1264,a[2]=lf[102],tmp=(C_word)a,a+=3,tmp));
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_UNDEFINED);}

/* ##sys#break-resume in k813 */
static void C_ccall f_1264(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1264,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(2));
t4=(C_word)C_i_member(lf[95],t3);
t5=(C_word)C_i_member(lf[96],t3);
t6=(C_word)C_i_member(lf[97],t3);
t7=(C_truep(t6)?t6:t4);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1283,a[2]=t2,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t9=(C_word)C_u_i_cadr(t5);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1301,a[2]=t9,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1309,a[2]=t4,a[3]=lf[100],tmp=(C_word)a,a+=4,tmp);
t12=t10;
f_1301(2,t12,(C_word)C_i_setslot(t9,C_fix(1),t11));}
else{
/* scheduler.scm: 470  ##sys#signal-hook */
t11=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t11+1)))(5,t11,t10,lf[98],lf[101],t2);}}
else{
t9=t8;
f_1283(2,t9,C_SCHEME_UNDEFINED);}}

/* a1308 in ##sys#break-resume in k813 */
static void C_ccall f_1309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1309,2,t0,t1);}
t2=(C_word)C_u_i_cadr(((C_word*)t0)[2]);
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,C_SCHEME_UNDEFINED);}

/* k1299 in ##sys#break-resume in k813 */
static void C_ccall f_1301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 471  ##sys#add-to-ready-queue */
t2=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1281 in ##sys#break-resume in k813 */
static void C_ccall f_1283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
t2=(C_word)C_u_i_cadr(((C_word*)t0)[4]);
t3=t2;
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[3],C_SCHEME_UNDEFINED);}
else{
/* scheduler.scm: 474  ##sys#signal-hook */
t2=*((C_word*)lf[12]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[98],lf[99],((C_word*)t0)[2]);}}

/* ##sys#break-entry in k813 */
static void C_ccall f_1167(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1167,4,t0,t1,t2,t3);}
t4=(C_word)C_i_not(*((C_word*)lf[77]+1));
t5=(C_truep(t4)?t4:(C_word)C_eqp(*((C_word*)lf[77]+1),*((C_word*)lf[1]+1)));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1182,a[2]=t3,a[3]=t2,a[4]=lf[92],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm: 429  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t6);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}

/* a1181 in ##sys#break-entry in k813 */
static void C_ccall f_1182(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1182,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_eqp(*((C_word*)lf[1]+1),*((C_word*)lf[27]+1));
if(C_truep(t4)){
t5=t3;
f_1186(t5,C_SCHEME_END_OF_LIST);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1252,a[2]=lf[89],tmp=(C_word)a,a+=3,tmp);
t6=t3;
f_1186(t6,(C_word)C_a_i_list(&a,4,lf[90],*((C_word*)lf[1]+1),lf[91],t5));}}

/* a1251 in a1181 in ##sys#break-entry in k813 */
static void C_ccall f_1252(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1252,2,t0,t1);}
t2=(C_word)C_slot(*((C_word*)lf[27]+1),C_fix(1));
t3=t2;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}

/* k1184 in a1181 in ##sys#break-entry in k813 */
static void C_fcall f_1186(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1186,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1236,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t4=(C_word)C_a_i_list(&a,8,lf[84],lf[85],lf[86],t3,lf[87],((C_word*)t0)[3],lf[88],((C_word*)t0)[4]);
/* scheduler.scm: 439  append */
t5=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t4,t1);}

/* k1234 in k1184 in a1181 in ##sys#break-entry in k813 */
static void C_ccall f_1236(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1236,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,3,lf[78],lf[79],t1);
t3=C_mutate((C_word*)lf[80]+1,t2);
t4=(C_word)C_eqp(*((C_word*)lf[1]+1),*((C_word*)lf[27]+1));
if(C_truep(t4)){
/* scheduler.scm: 447  ##sys#signal */
t5=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,((C_word*)t0)[3],t2);}
else{
t5=(C_word)C_i_setslot(*((C_word*)lf[1]+1),C_fix(3),lf[81]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1228,a[2]=((C_word*)t0)[2],a[3]=lf[82],tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_i_setslot(*((C_word*)lf[1]+1),C_fix(1),t6);
t8=(C_word)C_slot(*((C_word*)lf[27]+1),C_fix(1));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1219,a[2]=t2,a[3]=t8,a[4]=lf[83],tmp=(C_word)a,a+=5,tmp);
t10=(C_word)C_i_setslot(*((C_word*)lf[27]+1),C_fix(1),t9);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1214,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm: 457  ##sys#thread-unblock! */
t12=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t11,*((C_word*)lf[27]+1));}}

/* k1212 in k1234 in k1184 in a1181 in ##sys#break-entry in k813 */
static void C_ccall f_1214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 458  ##sys#schedule */
t2=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a1218 in k1234 in k1184 in a1181 in ##sys#break-entry in k813 */
static void C_ccall f_1219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1219,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1223,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm: 455  ##sys#signal */
t3=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1221 in a1218 in k1234 in k1184 in a1181 in ##sys#break-entry in k813 */
static void C_ccall f_1223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 456  old */
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a1227 in k1234 in k1184 in a1181 in ##sys#break-entry in k813 */
static void C_ccall f_1228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1228,2,t0,t1);}
/* scheduler.scm: 450  k */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* ##sys#thread-unblock! in k813 */
static void C_ccall f_1101(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1101,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(3));
t4=(C_word)C_eqp(lf[36],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1112,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm: 411  ##sys#delq */
t6=*((C_word*)lf[73]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,t2,lf[10]);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* k1110 in ##sys#thread-unblock! in k813 */
static void C_ccall f_1112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1112,2,t0,t1);}
t2=C_mutate(&lf[10],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1124,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=lf[74],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1124(t7,t3,*((C_word*)lf[11]+1));}

/* loop in k1110 in ##sys#thread-unblock! in k813 */
static void C_fcall f_1124(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1124,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1157,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_slot(t3,C_fix(1));
/* scheduler.scm: 419  ##sys#delq */
t7=*((C_word*)lf[73]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}}

/* k1155 in loop in k1110 in ##sys#thread-unblock! in k813 */
static void C_ccall f_1157(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1157,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1145,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* scheduler.scm: 420  loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1124(t5,t3,t4);}

/* k1143 in k1155 in loop in k1110 in ##sys#thread-unblock! in k813 */
static void C_ccall f_1145(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1145,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k1114 in k1110 in ##sys#thread-unblock! in k813 */
static void C_ccall f_1116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate((C_word*)lf[11]+1,t1);
t3=(C_word)C_i_set_i_slot(((C_word*)t0)[3],C_fix(12),C_SCHEME_END_OF_LIST);
/* scheduler.scm: 422  ##sys#thread-basic-unblock! */
t4=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* ##sys#restore-threads in k813 */
static void C_ccall f_1082(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1082,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(0));
t4=C_mutate(&lf[15],t3);
t5=(C_word)C_slot(t2,C_fix(1));
t6=C_mutate(&lf[16],t5);
t7=(C_word)C_slot(t2,C_fix(2));
t8=C_mutate((C_word*)lf[11]+1,t7);
t9=(C_word)C_slot(t2,C_fix(3));
t10=C_mutate(&lf[10],t9);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}

/* ##sys#fetch-and-clear-threads in k813 */
static void C_ccall f_1072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1072,2,t0,t1);}
t2=(C_word)C_a_i_vector(&a,4,lf[15],lf[16],*((C_word*)lf[11]+1),lf[10]);
t3=lf[15]=C_SCHEME_END_OF_LIST;;
t4=lf[16]=C_SCHEME_END_OF_LIST;;
t5=C_set_block_item(lf[11],0,C_SCHEME_END_OF_LIST);
t6=lf[10]=C_SCHEME_END_OF_LIST;;
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t2);}

/* ##sys#all-threads in k813 */
static void C_ccall f_1054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1054,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1062,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1070,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,*((C_word*)lf[67]+1),*((C_word*)lf[11]+1));}

/* k1068 in ##sys#all-threads in k813 */
static void C_ccall f_1070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[65]+1),t1);}

/* k1060 in ##sys#all-threads in k813 */
static void C_ccall f_1062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1062,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1066,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* map */
t3=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[67]+1),lf[10]);}

/* k1064 in k1060 in ##sys#all-threads in k813 */
static void C_ccall f_1066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 382  append */
t2=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[15],((C_word*)t0)[2],t1);}

/* ##sys#thread-block-for-i/o! in k813 */
static void C_ccall f_826(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_826,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_830,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_851,a[2]=t7,a[3]=t2,a[4]=t3,a[5]=lf[62],tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_851(t9,t5,*((C_word*)lf[11]+1));}

/* loop in ##sys#thread-block-for-i/o! in k813 */
static void C_fcall f_851(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(12);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_851,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t4=(C_word)C_a_i_cons(&a,2,t3,*((C_word*)lf[11]+1));
t5=C_mutate((C_word*)lf[11]+1,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_u_i_car(t3);
t5=(C_word)C_eqp(((C_word*)t0)[4],t4);
if(C_truep(t5)){
t6=(C_word)C_slot(t3,C_fix(1));
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_setslot(t3,C_fix(1),t7));}
else{
t6=(C_word)C_slot(t2,C_fix(1));
/* scheduler.scm: 334  loop */
t13=t1;
t14=t6;
t1=t13;
t2=t14;
goto loop;}}}

/* k828 in ##sys#thread-block-for-i/o! in k813 */
static void C_ccall f_830(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_830,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_833,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=((C_word*)t0)[4];
t4=t2;
f_833(t4,(C_word)stub121(C_SCHEME_UNDEFINED,t3));}
else{
t3=((C_word*)t0)[4];
t4=t2;
f_833(t4,(C_word)stub125(C_SCHEME_UNDEFINED,t3));}}

/* k831 in k828 in ##sys#thread-block-for-i/o! in k813 */
static void C_fcall f_833(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_833,NULL,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(3),lf[36]);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(11),t3));}

/* ##sys#default-exception-handler */
static void C_ccall f_749(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_749,3,t0,t1,t2);}
t3=*((C_word*)lf[1]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_753,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(C_mk_bool(C_abort_on_thread_exceptions))){
t5=*((C_word*)lf[27]+1);
t6=(C_word)C_slot(t5,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_773,a[2]=t2,a[3]=t6,a[4]=lf[56],tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_i_setslot(t5,C_fix(1),t7);
/* scheduler.scm: 278  ##sys#thread-unblock! */
t9=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t4,t5);}
else{
if(C_truep(*((C_word*)lf[57]+1))){
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_786,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t3,a[7]=t4,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* scheduler.scm: 280  open-output-string */
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t4;
f_753(2,t5,C_SCHEME_UNDEFINED);}}}

/* k784 in ##sys#default-exception-handler */
static void C_ccall f_786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_786,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_789,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* scheduler.scm: 281  display */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[59],t1);}

/* k787 in k784 in ##sys#default-exception-handler */
static void C_ccall f_789(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_789,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* scheduler.scm: 282  display */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[7],((C_word*)t0)[3]);}

/* k790 in k787 in k784 in ##sys#default-exception-handler */
static void C_ccall f_792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_792,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_795,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* scheduler.scm: 283  display */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[58],((C_word*)t0)[3]);}

/* k793 in k790 in k787 in k784 in ##sys#default-exception-handler */
static void C_ccall f_795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_795,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_798,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_805,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm: 284  get-output-string */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k803 in k793 in k790 in k787 in k784 in ##sys#default-exception-handler */
static void C_ccall f_805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 284  print-error-message */
t2=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],*((C_word*)lf[5]+1),t1);}

/* k796 in k793 in k790 in k787 in k784 in ##sys#default-exception-handler */
static void C_ccall f_798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 285  print-call-chain */
t2=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],*((C_word*)lf[5]+1),C_fix(0),((C_word*)t0)[2]);}

/* a772 in ##sys#default-exception-handler */
static void C_ccall f_773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_773,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_777,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* scheduler.scm: 276  ##sys#signal */
t3=*((C_word*)lf[55]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k775 in a772 in ##sys#default-exception-handler */
static void C_ccall f_777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 277  ptx */
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k751 in ##sys#default-exception-handler */
static void C_ccall f_753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_753,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(7),((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_759,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* scheduler.scm: 287  ##sys#thread-kill! */
t4=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[4],lf[41]);}

/* k757 in k751 in ##sys#default-exception-handler */
static void C_ccall f_759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 288  ##sys#schedule */
t2=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* ##sys#thread-basic-unblock! */
static void C_ccall f_737(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_737,3,t0,t1,t2);}
t3=(C_word)C_i_set_i_slot(t2,C_fix(11),C_SCHEME_FALSE);
t4=(C_word)C_i_set_i_slot(t2,C_fix(4),C_SCHEME_FALSE);
/* scheduler.scm: 259  ##sys#add-to-ready-queue */
t5=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t2);}

/* ##sys#thread-kill! */
static void C_ccall f_688(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_688,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_692,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm: 240  ##sys#abandon-mutexes */
t5=*((C_word*)lf[46]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k690 in ##sys#thread-kill! */
static void C_ccall f_692(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_692,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(3),((C_word*)t0)[3]);
t3=(C_word)C_i_set_i_slot(((C_word*)t0)[4],C_fix(4),C_SCHEME_FALSE);
t4=(C_word)C_i_set_i_slot(((C_word*)t0)[4],C_fix(11),C_SCHEME_FALSE);
t5=(C_word)C_i_set_i_slot(((C_word*)t0)[4],C_fix(8),C_SCHEME_END_OF_LIST);
t6=(C_word)C_slot(((C_word*)t0)[4],C_fix(12));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_710,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t6))){
t8=t7;
f_710(2,t8,C_SCHEME_UNDEFINED);}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_721,a[2]=((C_word*)t0)[4],a[3]=lf[44],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t9=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,t8,t6);}}

/* a720 in k690 in ##sys#thread-kill! */
static void C_ccall f_721(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_721,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(11));
t4=(C_word)C_eqp(t3,((C_word*)t0)[2]);
if(C_truep(t4)){
/* scheduler.scm: 251  ##sys#thread-basic-unblock! */
t5=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t2);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* k708 in k690 in ##sys#thread-kill! */
static void C_ccall f_710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(12),C_SCHEME_END_OF_LIST));}

/* ##sys#thread-block-for-termination! */
static void C_ccall f_653(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_653,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_eqp(t4,lf[40]);
t6=(C_truep(t5)?t5:(C_word)C_eqp(t4,lf[41]));
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_UNDEFINED);}
else{
t7=(C_word)C_slot(t3,C_fix(12));
t8=(C_word)C_a_i_cons(&a,2,t2,t7);
t9=(C_word)C_i_setslot(t3,C_fix(12),t8);
t10=(C_word)C_i_setslot(t2,C_fix(3),lf[36]);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_i_setslot(t2,C_fix(11),t3));}}

/* ##sys#thread-block-for-timeout! */
static void C_ccall f_593(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_593,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_597,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_605,a[2]=t6,a[3]=t2,a[4]=t3,a[5]=lf[37],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_605(t8,t4,lf[10],C_SCHEME_FALSE);}

/* loop in ##sys#thread-block-for-timeout! */
static void C_fcall f_605(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_605,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_nullp(t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_615,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
if(C_truep(t4)){
t6=t5;
f_615(t6,t4);}
else{
t6=(C_word)C_u_i_caar(t2);
t7=((C_word*)t0)[4];
t8=t5;
f_615(t8,(C_word)C_fixnum_lessp(t7,t6));}}

/* k613 in loop in ##sys#thread-block-for-timeout! */
static void C_fcall f_615(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_615,NULL,2,t0,t1);}
if(C_truep(t1)){
if(C_truep(((C_word*)t0)[7])){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_setslot(((C_word*)t0)[7],C_fix(1),t3));}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[4]);
t4=C_mutate(&lf[10],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}
else{
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm: 226  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_605(t3,((C_word*)t0)[3],t2,((C_word*)t0)[4]);}}

/* k595 in ##sys#thread-block-for-timeout! */
static void C_ccall f_597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(3),lf[36]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_set_i_slot(((C_word*)t0)[4],C_fix(4),((C_word*)t0)[2]));}

/* ##sys#interrupt-hook */
static void C_ccall f_568(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_568,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_572,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_eqp(t2,C_fix(255));
if(C_truep(t5)){
t6=*((C_word*)lf[1]+1);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_586,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=lf[33],tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_i_setslot(t6,C_fix(1),t7);
/* scheduler.scm: 213  ##sys#schedule */
t9=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t4);}
else{
t6=t4;
f_572(2,t6,C_SCHEME_UNDEFINED);}}

/* a585 in ##sys#interrupt-hook */
static void C_ccall f_586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_586,2,t0,t1);}
/* scheduler.scm: 212  oldhook */
t2=((C_word*)t0)[4];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k570 in ##sys#interrupt-hook */
static void C_ccall f_572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* scheduler.scm: 214  oldhook */
t2=((C_word*)t0)[5];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#add-to-ready-queue */
static void C_ccall f_467(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_467,3,t0,t1,t2);}
t3=(C_word)C_i_setslot(t2,C_fix(3),lf[8]);
t4=(C_word)C_a_i_cons(&a,2,t2,C_SCHEME_END_OF_LIST);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_477,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_eqp(C_SCHEME_END_OF_LIST,lf[15]);
if(C_truep(t6)){
t7=C_mutate(&lf[15],t4);
t8=t5;
f_477(t8,t7);}
else{
t7=t5;
f_477(t7,(C_word)C_i_setslot(lf[16],C_fix(1),t4));}}

/* k475 in ##sys#add-to-ready-queue */
static void C_fcall f_477(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[16],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* ##sys#ready-queue */
static void C_ccall f_464(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_464,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[15]);}

/* ##sys#force-primordial */
static void C_fcall f_456(C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_456,NULL,1,t1);}
/* scheduler.scm: 166  ##sys#thread-unblock! */
t2=*((C_word*)lf[26]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,*((C_word*)lf[27]+1));}

/* ##sys#schedule */
static void C_ccall f_244(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_244,2,t0,t1);}
t2=*((C_word*)lf[1]+1);
t3=C_SCHEME_FALSE;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_slot(t2,C_fix(3));
t6=(C_word)C_slot(t2,C_fix(5));
t7=(C_word)C_i_setslot(t6,C_fix(0),*((C_word*)lf[2]+1));
t8=(C_word)C_i_setslot(t6,C_fix(1),*((C_word*)lf[3]+1));
t9=(C_word)C_i_setslot(t6,C_fix(2),*((C_word*)lf[4]+1));
t10=(C_word)C_i_setslot(t6,C_fix(3),*((C_word*)lf[5]+1));
t11=(C_word)C_i_setslot(t6,C_fix(4),*((C_word*)lf[6]+1));
t12=(C_word)C_i_setslot(t6,C_fix(5),*((C_word*)lf[7]+1));
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_274,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t14=(C_word)C_eqp(t5,lf[9]);
t15=(C_truep(t14)?t14:(C_word)C_eqp(t5,lf[8]));
if(C_truep(t15)){
/* scheduler.scm: 117  ##sys#add-to-ready-queue */
t16=*((C_word*)lf[24]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t13,t2);}
else{
t16=t13;
f_274(2,t16,C_SCHEME_UNDEFINED);}}

/* k272 in ##sys#schedule */
static void C_ccall f_274(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_274,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_279,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=lf[23],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_279(t5,((C_word*)t0)[2]);}

/* loop1 in k272 in ##sys#schedule */
static void C_fcall f_279(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_279,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_283,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(lf[10]))){
t3=t2;
f_283(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_fudge(C_fix(16));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_358,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t3,a[5]=lf[22],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_358(t7,t2,lf[10]);}}

/* loop in loop1 in k272 in ##sys#schedule */
static void C_fcall f_358(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_358,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=lf[10]=C_SCHEME_END_OF_LIST;;
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=(C_word)C_u_i_caar(t2);
t4=(C_word)C_u_i_cdar(t2);
t5=(C_word)C_slot(t4,C_fix(4));
t6=(C_word)C_eqp(t3,t5);
if(C_truep(t6)){
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)t0)[4],t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_390,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* scheduler.scm: 133  ##sys#thread-basic-unblock! */
t8=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t4);}
else{
t7=C_mutate(&lf[10],t2);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_404,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(lf[15]))){
t9=(C_word)C_i_nullp(*((C_word*)lf[11]+1));
t10=t8;
f_404(t10,(C_truep(t9)?(C_word)C_i_pairp(lf[10]):C_SCHEME_FALSE));}
else{
t9=t8;
f_404(t9,C_SCHEME_FALSE);}}}
else{
t7=(C_word)C_slot(t2,C_fix(1));
/* scheduler.scm: 147  loop */
t14=t1;
t15=t7;
t1=t14;
t2=t15;
goto loop;}}}

/* k402 in loop in loop1 in k272 in ##sys#schedule */
static void C_fcall f_404(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_i_caar(lf[10]);
t3=(C_word)C_u_fixnum_difference(t2,((C_word*)t0)[4]);
t4=(C_word)C_i_fixnum_max(C_fix(0),t3);
t5=(C_truep((C_word)C_msleep(t4))?C_SCHEME_FALSE:C_mk_bool(C_signal_interrupted_p));
t6=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k388 in loop in loop1 in k272 in ##sys#schedule */
static void C_ccall f_390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm: 134  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_358(t3,((C_word*)t0)[2],t2);}

/* k281 in loop1 in k272 in ##sys#schedule */
static void C_ccall f_283(C_word c,C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_283,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_286,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
/* scheduler.scm: 150  ##sys#force-primordial */
f_456(t2);}
else{
if(C_truep((C_word)C_i_nullp(*((C_word*)lf[11]+1)))){
t3=t2;
f_286(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_i_pairp(lf[10]);
t4=(C_word)C_i_pairp(lf[15]);
t5=(C_truep(t4)?t4:t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1033,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(C_truep(t3)?(C_word)C_i_not(t4):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(C_word)C_u_i_caar(lf[10]);
t9=(C_word)C_fudge(C_fix(16));
t10=(C_word)C_u_fixnum_difference(t8,t9);
t11=t6;
f_1033(t11,(C_word)C_i_fixnum_max(C_fix(0),t10));}
else{
t8=t6;
f_1033(t8,C_fix(0));}}}}

/* k1031 in k281 in loop1 in k272 in ##sys#schedule */
static void C_fcall f_1033(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1033,NULL,2,t0,t1);}
t2=(C_word)stub112(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_912,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t4)){
/* scheduler.scm: 353  ##sys#force-primordial */
f_456(t3);}
else{
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_931,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_933,a[2]=t7,a[3]=lf[21],tmp=(C_word)a,a+=4,tmp));
t9=((C_word*)t7)[1];
f_933(t9,t5,t2,*((C_word*)lf[11]+1));}
else{
t5=t3;
f_912(2,t5,C_SCHEME_UNDEFINED);}}}

/* loop in k1031 in k281 in loop1 in k272 in ##sys#schedule */
static void C_fcall f_933(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t18;
C_word t19;
C_word *a;
loop:
a=C_alloc(14);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_933,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}
else{
t5=(C_word)C_u_i_car(t3);
t6=(C_word)C_u_i_car(t5);
t7=(C_word)C_fd_test_input(t6);
t8=(C_word)C_fd_test_output(t6);
t9=(C_truep(t7)?t7:t8);
if(C_truep(t9)){
t10=(C_word)C_slot(t5,C_fix(1));
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_961,a[2]=t12,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,a[6]=t6,a[7]=lf[20],tmp=(C_word)a,a+=8,tmp));
t14=((C_word*)t12)[1];
f_961(t14,t1,t10);}
else{
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1021,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t11=(C_word)C_slot(t3,C_fix(1));
/* scheduler.scm: 375  loop */
t17=t10;
t18=t2;
t19=t11;
t1=t17;
t2=t18;
t3=t19;
goto loop;}}}

/* k1019 in loop in k1031 in k281 in loop1 in k272 in ##sys#schedule */
static void C_ccall f_1021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1021,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* loop2 in loop in k1031 in k281 in loop1 in k272 in ##sys#schedule */
static void C_fcall f_961(C_word t0,C_word t1,C_word t2){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_961,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)stub129(C_SCHEME_UNDEFINED,((C_word*)t0)[6]);
t4=(C_word)C_u_fixnum_decrease(((C_word*)t0)[5]);
t5=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm: 369  loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_933(t6,t1,t4,t5);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t3,C_fix(11));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_991,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1001,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
t7=(C_word)C_u_i_car(t4);
t8=t6;
f_1001(t8,(C_word)C_eqp(((C_word*)t0)[6],t7));}
else{
t7=t6;
f_1001(t7,C_SCHEME_FALSE);}}}

/* k999 in loop2 in loop in k1031 in k281 in loop1 in k272 in ##sys#schedule */
static void C_fcall f_1001(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* scheduler.scm: 373  ##sys#thread-basic-unblock! */
t2=*((C_word*)lf[19]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_991(2,t2,C_SCHEME_UNDEFINED);}}

/* k989 in loop2 in loop in k1031 in k281 in loop1 in k272 in ##sys#schedule */
static void C_ccall f_991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* scheduler.scm: 374  loop2 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_961(t3,((C_word*)t0)[2],t2);}

/* k929 in k1031 in k281 in loop1 in k272 in ##sys#schedule */
static void C_ccall f_931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[11]+1,t1);
t3=((C_word*)t0)[2];
f_912(2,t3,t2);}

/* k910 in k1031 in k281 in loop1 in k272 in ##sys#schedule */
static void C_ccall f_912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_286(2,t2,(C_word)stub116(C_SCHEME_UNDEFINED));}

/* k284 in k281 in loop1 in k272 in ##sys#schedule */
static void C_ccall f_286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_286,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_291,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=lf[17],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_291(t5,((C_word*)t0)[2]);}

/* loop2 in k284 in k281 in loop1 in k272 in ##sys#schedule */
static void C_fcall f_291(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_291,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=lf[15];
if(C_truep((C_word)C_i_nullp(t3))){
t4=t2;
f_295(t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_slot(t3,C_fix(1));
t5=C_mutate(&lf[15],t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_501,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t4);
if(C_truep(t7)){
t8=lf[16]=C_SCHEME_END_OF_LIST;;
t9=t6;
f_501(t9,t8);}
else{
t8=t6;
f_501(t8,C_SCHEME_UNDEFINED);}}}

/* k499 in loop2 in k284 in k281 in loop1 in k272 in ##sys#schedule */
static void C_fcall f_501(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_295(t2,(C_word)C_u_i_car(((C_word*)t0)[2]));}

/* k293 in loop2 in k284 in k281 in loop1 in k272 in ##sys#schedule */
static void C_fcall f_295(C_word t0,C_word t1){
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
C_word *a;
t2=t1;
if(C_truep(t2)){
t3=(C_word)C_slot(t1,C_fix(3));
t4=(C_word)C_eqp(t3,lf[8]);
if(C_truep(t4)){
t5=((C_word*)t0)[4];
t6=t1;
t7=C_mutate((C_word*)lf[1]+1,t6);
t8=(C_word)C_i_setslot(t6,C_fix(3),lf[9]);
t9=(C_word)C_slot(t6,C_fix(5));
t10=(C_word)C_slot(t9,C_fix(0));
t11=C_mutate((C_word*)lf[2]+1,t10);
t12=(C_word)C_slot(t9,C_fix(1));
t13=C_mutate((C_word*)lf[3]+1,t12);
t14=(C_word)C_slot(t9,C_fix(2));
t15=C_mutate((C_word*)lf[4]+1,t14);
t16=(C_word)C_slot(t9,C_fix(3));
t17=C_mutate((C_word*)lf[5]+1,t16);
t18=(C_word)C_slot(t9,C_fix(4));
t19=C_mutate((C_word*)lf[6]+1,t18);
t20=(C_word)C_slot(t9,C_fix(5));
t21=C_mutate((C_word*)lf[7]+1,t20);
t22=(C_word)C_slot(t6,C_fix(9));
t23=(C_word)C_set_initial_timer_interrupt_period(t22);
t24=(C_word)C_slot(t6,C_fix(1));
t25=t24;
((C_proc2)(void*)(*((C_word*)t25+1)))(2,t25,t5);}
else{
/* scheduler.scm: 162  loop2 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_291(t5,((C_word*)t0)[4]);}}
else{
t3=(C_word)C_i_nullp(lf[10]);
t4=(C_truep(t3)?(C_word)C_i_nullp(*((C_word*)lf[11]+1)):C_SCHEME_FALSE);
if(C_truep(t4)){
/* scheduler.scm: 159  ##sys#signal-hook */
t5=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[4],lf[13],lf[14]);}
else{
/* scheduler.scm: 160  loop1 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_279(t5,((C_word*)t0)[4]);}}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[80] = {
{"toplevelscheduler.scm",(void*)C_scheduler_toplevel},
{"f_1320scheduler.scm",(void*)f_1320},
{"f_815scheduler.scm",(void*)f_815},
{"f_1264scheduler.scm",(void*)f_1264},
{"f_1309scheduler.scm",(void*)f_1309},
{"f_1301scheduler.scm",(void*)f_1301},
{"f_1283scheduler.scm",(void*)f_1283},
{"f_1167scheduler.scm",(void*)f_1167},
{"f_1182scheduler.scm",(void*)f_1182},
{"f_1252scheduler.scm",(void*)f_1252},
{"f_1186scheduler.scm",(void*)f_1186},
{"f_1236scheduler.scm",(void*)f_1236},
{"f_1214scheduler.scm",(void*)f_1214},
{"f_1219scheduler.scm",(void*)f_1219},
{"f_1223scheduler.scm",(void*)f_1223},
{"f_1228scheduler.scm",(void*)f_1228},
{"f_1101scheduler.scm",(void*)f_1101},
{"f_1112scheduler.scm",(void*)f_1112},
{"f_1124scheduler.scm",(void*)f_1124},
{"f_1157scheduler.scm",(void*)f_1157},
{"f_1145scheduler.scm",(void*)f_1145},
{"f_1116scheduler.scm",(void*)f_1116},
{"f_1082scheduler.scm",(void*)f_1082},
{"f_1072scheduler.scm",(void*)f_1072},
{"f_1054scheduler.scm",(void*)f_1054},
{"f_1070scheduler.scm",(void*)f_1070},
{"f_1062scheduler.scm",(void*)f_1062},
{"f_1066scheduler.scm",(void*)f_1066},
{"f_826scheduler.scm",(void*)f_826},
{"f_851scheduler.scm",(void*)f_851},
{"f_830scheduler.scm",(void*)f_830},
{"f_833scheduler.scm",(void*)f_833},
{"f_749scheduler.scm",(void*)f_749},
{"f_786scheduler.scm",(void*)f_786},
{"f_789scheduler.scm",(void*)f_789},
{"f_792scheduler.scm",(void*)f_792},
{"f_795scheduler.scm",(void*)f_795},
{"f_805scheduler.scm",(void*)f_805},
{"f_798scheduler.scm",(void*)f_798},
{"f_773scheduler.scm",(void*)f_773},
{"f_777scheduler.scm",(void*)f_777},
{"f_753scheduler.scm",(void*)f_753},
{"f_759scheduler.scm",(void*)f_759},
{"f_737scheduler.scm",(void*)f_737},
{"f_688scheduler.scm",(void*)f_688},
{"f_692scheduler.scm",(void*)f_692},
{"f_721scheduler.scm",(void*)f_721},
{"f_710scheduler.scm",(void*)f_710},
{"f_653scheduler.scm",(void*)f_653},
{"f_593scheduler.scm",(void*)f_593},
{"f_605scheduler.scm",(void*)f_605},
{"f_615scheduler.scm",(void*)f_615},
{"f_597scheduler.scm",(void*)f_597},
{"f_568scheduler.scm",(void*)f_568},
{"f_586scheduler.scm",(void*)f_586},
{"f_572scheduler.scm",(void*)f_572},
{"f_467scheduler.scm",(void*)f_467},
{"f_477scheduler.scm",(void*)f_477},
{"f_464scheduler.scm",(void*)f_464},
{"f_456scheduler.scm",(void*)f_456},
{"f_244scheduler.scm",(void*)f_244},
{"f_274scheduler.scm",(void*)f_274},
{"f_279scheduler.scm",(void*)f_279},
{"f_358scheduler.scm",(void*)f_358},
{"f_404scheduler.scm",(void*)f_404},
{"f_390scheduler.scm",(void*)f_390},
{"f_283scheduler.scm",(void*)f_283},
{"f_1033scheduler.scm",(void*)f_1033},
{"f_933scheduler.scm",(void*)f_933},
{"f_1021scheduler.scm",(void*)f_1021},
{"f_961scheduler.scm",(void*)f_961},
{"f_1001scheduler.scm",(void*)f_1001},
{"f_991scheduler.scm",(void*)f_991},
{"f_931scheduler.scm",(void*)f_931},
{"f_912scheduler.scm",(void*)f_912},
{"f_286scheduler.scm",(void*)f_286},
{"f_291scheduler.scm",(void*)f_291},
{"f_501scheduler.scm",(void*)f_501},
{"f_295scheduler.scm",(void*)f_295},
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
