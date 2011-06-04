/* Generated from tcp.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:13
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: tcp.scm -output-file utcp.c -quiet -no-trace -optimize-level 2 -include-path . -no-lambda-info -unsafe -feature unsafe -explicit-use
   unit: tcp
*/

#include "chicken.h"

#include <errno.h>
#ifdef _WIN32
# if _MSC_VER > 1300
# include <winsock2.h>
# include <ws2tcpip.h>
# else
# include <winsock.h>
# endif
/* Beware: winsock2.h must come BEFORE windows.h */
# define socklen_t       int
static WSADATA wsa;
# define fcntl(a, b, c)  0
# define EWOULDBLOCK     0
# define EINPROGRESS     0
# define typecorrect_getsockopt(socket, level, optname, optval, optlen)	\
    getsockopt(socket, level, optname, (char *)optval, optlen)
#else
# include <fcntl.h>
# include <sys/types.h>
# include <sys/socket.h>
# include <sys/time.h>
# include <netinet/in.h>
# include <unistd.h>
# include <netdb.h>
# include <signal.h>
# define closesocket     close
# define INVALID_SOCKET  -1
# define typecorrect_getsockopt getsockopt
#endif

#ifndef SD_RECEIVE
# define SD_RECEIVE      0
# define SD_SEND         1
#endif

#ifdef ECOS
#include <sys/sockio.h>
#endif

static char addr_buffer[ 20 ];

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[85];


/* from general-strerror */
static C_word C_fcall stub317(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub317(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

/* from get-socket-error */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub313(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub313(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int socket=(int )C_unfix(C_a0);
int err, optlen;optlen = sizeof(err);if (typecorrect_getsockopt(socket, SOL_SOCKET, SO_ERROR, &err, (socklen_t *)&optlen) == -1)return(-1);return(err);
C_return:
#undef return

return C_r;}

/* from f_729 in k658 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub163(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub163(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int socket=(int )C_unfix(C_a0);
int yes = 1; 
                      return(setsockopt(socket, SOL_SOCKET, SO_REUSEADDR, (const char *)&yes, sizeof(int)));
C_return:
#undef return

return C_r;}

/* from k649 */
#define return(x) C_cblock C_r = (((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub151(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub151(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a1);
struct sockaddr_in *addr = (struct sockaddr_in *)saddr;memset(addr, 0, sizeof(struct sockaddr_in));addr->sin_family = AF_INET;addr->sin_port = htons(port);addr->sin_addr.s_addr = htonl(INADDR_ANY);
C_return:
#undef return

return C_r;}

/* from k546 in ##net#gethostaddr in k512 in k428 in k425 in k422 */
#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_return; C_cblockend
static C_word C_fcall stub125(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub125(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * saddr=(void * )C_data_pointer_or_null(C_a0);
char * host=(char * )C_string_or_null(C_a1);
unsigned short port=(unsigned short )(unsigned short)C_unfix(C_a2);
struct hostent *he = gethostbyname(host);struct sockaddr_in *addr = (struct sockaddr_in *)saddr;if(he == NULL) return(0);memset(addr, 0, sizeof(struct sockaddr_in));addr->sin_family = AF_INET;addr->sin_port = htons((short)port);addr->sin_addr = *((struct in_addr *)he->h_addr);return(1);
C_return:
#undef return

return C_r;}

/* from ##net#select-write */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub119(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub119(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
fd_set out;
     struct timeval tm;
     int rv;
     FD_ZERO(&out);
     FD_SET(fd, &out);
     tm.tv_sec = tm.tv_usec = 0;
     rv = select(fd + 1, NULL, &out, NULL, &tm);
     if(rv > 0) { rv = FD_ISSET(fd, &out) ? 1 : 0; }
     return(rv);
C_return:
#undef return

return C_r;}

/* from ##net#select in k512 in k428 in k425 in k422 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub115(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub115(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
fd_set in;
     struct timeval tm;
     int rv;
     FD_ZERO(&in);
     FD_SET(fd, &in);
     tm.tv_sec = tm.tv_usec = 0;
     rv = select(fd + 1, &in, NULL, NULL, &tm);
     if(rv > 0) { rv = FD_ISSET(fd, &in) ? 1 : 0; }
     return(rv);
C_return:
#undef return

return C_r;}

/* from k523 in k519 in k608 in k604 in loop in ##net#parse-host in k512 in k428 in k425 in k422 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub106(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub106(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * serv=(char * )C_string_or_null(C_a0);
char * proto=(char * )C_string_or_null(C_a1);
struct servent *se;
     if((se = getservbyname(serv, proto)) == NULL) return(0);
     else return(ntohs(se->s_port));
C_return:
#undef return

return C_r;}

/* from ##net#startup */
#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_return; C_cblockend
static C_word C_fcall stub102(C_word C_buf) C_regparm;
C_regparm static C_word C_fcall stub102(C_word C_buf){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
#ifdef _WIN32
     return(WSAStartup(MAKEWORD(1, 1), &wsa) == 0);
#else
     signal(SIGPIPE, SIG_IGN);
     return(1);
#endif
C_return:
#undef return

return C_r;}

/* from ##net#getpeername */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub98(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub98(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;unsigned char *ptr;unsigned int len = sizeof(struct sockaddr_in);if(getpeername(s, (struct sockaddr *)&sa, ((unsigned int *)&len)) != 0) return(NULL);ptr = (unsigned char *)&sa.sin_addr;sprintf(addr_buffer, "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);return(addr_buffer);
C_return:
#undef return

return C_r;}

/* from ##net#getpeerport */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub94(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub94(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;int len = sizeof(struct sockaddr_in);if(getpeername(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) return(-1);else return(ntohs(sa.sin_port));
C_return:
#undef return

return C_r;}

/* from ##net#getsockport in k428 in k425 in k422 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub90(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub90(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;int len = sizeof(struct sockaddr_in);if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) return(-1);else return(ntohs(sa.sin_port));
C_return:
#undef return

return C_r;}

/* from ##net#getsockname */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub85(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub85(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;unsigned char *ptr;int len = sizeof(struct sockaddr_in);if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)&len) != 0) return(NULL);ptr = (unsigned char *)&sa.sin_addr;sprintf(addr_buffer, "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);return(addr_buffer);
C_return:
#undef return

return C_r;}

/* from ##net#make-nonblocking in k428 in k425 in k422 */
#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_return; C_cblockend
static C_word C_fcall stub81(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub81(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);if(val == -1) return(0);return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_return:
#undef return

return C_r;}

/* from k485 */
static C_word C_fcall stub73(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub73(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)connect(t0,t1,t2));
return C_r;}

/* from ##net#shutdown in k428 in k425 in k422 */
static C_word C_fcall stub66(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub66(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)shutdown(t0,t1));
return C_r;}

/* from k475 */
static C_word C_fcall stub56(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub56(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
C_r=C_fix((C_word)recv(t0,t1,t2,t3));
return C_r;}

/* from k468 */
static C_word C_fcall stub44(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub44(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
C_r=C_fix((C_word)send(t0,t1,t2,t3));
return C_r;}

/* from ##net#close in k428 in k425 in k422 */
static C_word C_fcall stub37(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub37(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)closesocket(t0));
return C_r;}

/* from k452 */
static C_word C_fcall stub27(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub27(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
C_r=C_fix((C_word)accept(t0,t1,t2));
return C_r;}

/* from ##net#listen */
static C_word C_fcall stub20(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub20(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)listen(t0,t1));
return C_r;}

/* from k438 */
static C_word C_fcall stub11(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub11(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)bind(t0,t1,t2));
return C_r;}

/* from ##net#socket in k428 in k425 in k422 */
static C_word C_fcall stub3(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub3(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)socket(t0,t1,t2));
return C_r;}

C_noret_decl(C_tcp_toplevel)
C_externexport void C_ccall C_tcp_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_424)
static void C_ccall f_424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_427)
static void C_ccall f_427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_430)
static void C_ccall f_430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_514)
static void C_ccall f_514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_874)
static void C_ccall f_874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1906)
static void C_ccall f_1906(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1889)
static void C_ccall f_1889(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1897)
static void C_ccall f_1897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1863)
static void C_ccall f_1863(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1883)
static void C_ccall f_1883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1873)
static void C_ccall f_1873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1818)
static void C_ccall f_1818(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1822)
static void C_ccall f_1822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1861)
static void C_ccall f_1861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1857)
static void C_ccall f_1857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1832)
static void C_ccall f_1832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1846)
static void C_ccall f_1846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1839)
static void C_ccall f_1839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1773)
static void C_ccall f_1773(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1777)
static void C_ccall f_1777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1784)
static void C_ccall f_1784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1816)
static void C_ccall f_1816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1812)
static void C_ccall f_1812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1787)
static void C_ccall f_1787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1791)
static void C_ccall f_1791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1805)
static void C_ccall f_1805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1801)
static void C_ccall f_1801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1794)
static void C_ccall f_1794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1758)
static void C_fcall f_1758(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1762)
static void C_ccall f_1762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1748)
static void C_ccall f_1748(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1756)
static void C_ccall f_1756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1543)
static void C_ccall f_1543(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1543)
static void C_ccall f_1543r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1731)
static void C_ccall f_1731(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1725)
static void C_ccall f_1725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1717)
static void C_ccall f_1717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1553)
static void C_ccall f_1553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1703)
static void C_ccall f_1703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1714)
static void C_ccall f_1714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1710)
static void C_ccall f_1710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1579)
static void C_ccall f_1579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1694)
static void C_ccall f_1694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1582)
static void C_ccall f_1582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1680)
static void C_ccall f_1680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1691)
static void C_ccall f_1691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1687)
static void C_ccall f_1687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1585)
static void C_ccall f_1585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1642)
static void C_fcall f_1642(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1649)
static void C_ccall f_1649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1658)
static void C_ccall f_1658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1588)
static void C_ccall f_1588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1628)
static void C_ccall f_1628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1611)
static void C_ccall f_1611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1607)
static void C_ccall f_1607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1594)
static void C_ccall f_1594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1558)
static void C_fcall f_1558(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1565)
static void C_ccall f_1565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1576)
static void C_ccall f_1576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1572)
static void C_ccall f_1572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1517)
static void C_ccall f_1517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1528)
static void C_ccall f_1528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1524)
static void C_ccall f_1524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1508)
static void C_ccall f_1508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1444)
static void C_ccall f_1444(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1453)
static void C_fcall f_1453(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1489)
static void C_ccall f_1489(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1492)
static void C_ccall f_1492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1475)
static void C_ccall f_1475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1482)
static void C_ccall f_1482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1466)
static void C_ccall f_1466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_876)
static void C_fcall f_876(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1431)
static void C_ccall f_1431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1442)
static void C_ccall f_1442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1438)
static void C_ccall f_1438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_880)
static void C_ccall f_880(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_883)
static void C_ccall f_883(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_889)
static void C_ccall f_889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_892)
static void C_fcall f_892(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1335)
static void C_ccall f_1335(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1341)
static void C_fcall f_1341(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1410)
static void C_ccall f_1410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1353)
static void C_ccall f_1353(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1357)
static void C_ccall f_1357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1367)
static void C_ccall f_1367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1383)
static void C_ccall f_1383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1270)
static void C_ccall f_1270(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1276)
static void C_fcall f_1276(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1324)
static void C_ccall f_1324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1227)
static void C_ccall f_1227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1241)
static void C_fcall f_1241(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1244)
static void C_ccall f_1244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1255)
static void C_ccall f_1255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1251)
static void C_ccall f_1251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1192)
static void C_ccall f_1192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1214)
static void C_ccall f_1214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1225)
static void C_ccall f_1225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1221)
static void C_ccall f_1221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1205)
static void C_ccall f_1205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1170)
static void C_ccall f_1170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1174)
static void C_ccall f_1174(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_943)
static void C_ccall f_943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1118)
static void C_ccall f_1118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1128)
static void C_ccall f_1128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1055)
static void C_ccall f_1055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1102)
static void C_fcall f_1102(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1105)
static void C_ccall f_1105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1063)
static void C_fcall f_1063(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1072)
static void C_fcall f_1072(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1075)
static void C_ccall f_1075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1086)
static void C_ccall f_1086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1082)
static void C_ccall f_1082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1154)
static void C_ccall f_1154(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1134)
static void C_ccall f_1134(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1139)
static void C_ccall f_1139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1148)
static void C_ccall f_1148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1020)
static void C_ccall f_1020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1049)
static void C_ccall f_1049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1045)
static void C_ccall f_1045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_944)
static void C_fcall f_944(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_954)
static void C_fcall f_954(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_985)
static void C_ccall f_985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_996)
static void C_ccall f_996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_992)
static void C_ccall f_992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_976)
static void C_ccall f_976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_979)
static void C_ccall f_979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_893)
static void C_fcall f_893(C_word t0,C_word t1) C_noret;
C_noret_decl(f_899)
static void C_fcall f_899(C_word t0,C_word t1) C_noret;
C_noret_decl(f_927)
static void C_ccall f_927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_938)
static void C_ccall f_938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_934)
static void C_ccall f_934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_918)
static void C_ccall f_918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_921)
static void C_ccall f_921(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_842)
static void C_ccall f_842(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_855)
static void C_ccall f_855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_866)
static void C_ccall f_866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_862)
static void C_ccall f_862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_833)
static void C_ccall f_833(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_741)
static void C_ccall f_741(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_741)
static void C_ccall f_741r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_788)
static void C_fcall f_788(C_word t0,C_word t1) C_noret;
C_noret_decl(f_783)
static void C_fcall f_783(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_743)
static void C_fcall f_743(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_755)
static void C_ccall f_755(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_771)
static void C_ccall f_771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_782)
static void C_ccall f_782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_778)
static void C_ccall f_778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_762)
static void C_ccall f_762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_749)
static void C_ccall f_749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_736)
static void C_ccall f_736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_660)
static void C_ccall f_660(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_729)
static void C_ccall f_729(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_728)
static void C_ccall f_728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_713)
static void C_ccall f_713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_724)
static void C_ccall f_724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_720)
static void C_ccall f_720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_663)
static void C_ccall f_663(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_666)
static void C_ccall f_666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_701)
static void C_ccall f_701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_669)
static void C_ccall f_669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_684)
static void C_ccall f_684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_695)
static void C_ccall f_695(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_691)
static void C_ccall f_691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_675)
static void C_ccall f_675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_574)
static void C_fcall f_574(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_583)
static void C_fcall f_583(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_606)
static void C_ccall f_606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_610)
static void C_ccall f_610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_521)
static void C_ccall f_521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_525)
static void C_ccall f_525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_622)
static void C_ccall f_622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_633)
static void C_ccall f_633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_629)
static void C_ccall f_629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_616)
static void C_ccall f_616(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_553)
static void C_fcall f_553(C_word t0) C_noret;
C_noret_decl(f_559)
static void C_ccall f_559(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_568)
static void C_ccall f_568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_539)
static void C_fcall f_539(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_548)
static void C_ccall f_548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_533)
static C_word C_fcall f_533(C_word t0);
C_noret_decl(f_498)
static C_word C_fcall f_498(C_word t0);
C_noret_decl(f_489)
static C_word C_fcall f_489(C_word t0);
C_noret_decl(f_479)
static C_word C_fcall f_479(C_word t0,C_word t1);
C_noret_decl(f_462)
static C_word C_fcall f_462(C_word t0);
C_noret_decl(f_432)
static C_word C_fcall f_432(C_word t0,C_word t1,C_word t2);

C_noret_decl(trf_1758)
static void C_fcall trf_1758(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1758(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1758(t0,t1);}

C_noret_decl(trf_1642)
static void C_fcall trf_1642(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1642(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1642(t0,t1);}

C_noret_decl(trf_1558)
static void C_fcall trf_1558(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1558(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1558(t0,t1);}

C_noret_decl(trf_1453)
static void C_fcall trf_1453(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1453(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1453(t0,t1);}

C_noret_decl(trf_876)
static void C_fcall trf_876(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_876(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_876(t0,t1,t2);}

C_noret_decl(trf_892)
static void C_fcall trf_892(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_892(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_892(t0,t1);}

C_noret_decl(trf_1341)
static void C_fcall trf_1341(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1341(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1341(t0,t1,t2);}

C_noret_decl(trf_1276)
static void C_fcall trf_1276(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1276(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1276(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1241)
static void C_fcall trf_1241(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1241(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1241(t0,t1);}

C_noret_decl(trf_1102)
static void C_fcall trf_1102(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1102(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1102(t0,t1);}

C_noret_decl(trf_1063)
static void C_fcall trf_1063(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1063(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1063(t0,t1);}

C_noret_decl(trf_1072)
static void C_fcall trf_1072(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1072(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1072(t0,t1);}

C_noret_decl(trf_944)
static void C_fcall trf_944(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_944(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_944(t0,t1,t2);}

C_noret_decl(trf_954)
static void C_fcall trf_954(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_954(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_954(t0,t1,t2,t3);}

C_noret_decl(trf_893)
static void C_fcall trf_893(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_893(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_893(t0,t1);}

C_noret_decl(trf_899)
static void C_fcall trf_899(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_899(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_899(t0,t1);}

C_noret_decl(trf_788)
static void C_fcall trf_788(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_788(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_788(t0,t1);}

C_noret_decl(trf_783)
static void C_fcall trf_783(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_783(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_783(t0,t1,t2);}

C_noret_decl(trf_743)
static void C_fcall trf_743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_743(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_743(t0,t1,t2,t3);}

C_noret_decl(trf_574)
static void C_fcall trf_574(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_574(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_574(t0,t1,t2,t3);}

C_noret_decl(trf_583)
static void C_fcall trf_583(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_583(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_583(t0,t1,t2);}

C_noret_decl(trf_553)
static void C_fcall trf_553(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_553(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_553(t0);}

C_noret_decl(trf_539)
static void C_fcall trf_539(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_539(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_539(t0,t1,t2,t3);}

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
C_tcp_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_tcp_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("tcp_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(370)){
C_save(t1);
C_rereclaim2(370*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,85);
lf[7]=C_h_intern(&lf[7],17,"\003sysmake-c-string");
lf[9]=C_h_intern(&lf[9],18,"\003syscurrent-thread");
lf[10]=C_h_intern(&lf[10],12,"\003sysschedule");
lf[11]=C_h_intern(&lf[11],9,"substring");
lf[13]=C_h_intern(&lf[13],15,"\003syssignal-hook");
lf[14]=C_h_intern(&lf[14],14,"\000network-error");
lf[15]=C_h_intern(&lf[15],11,"tcp-connect");
lf[16]=C_h_intern(&lf[16],17,"\003sysstring-append");
lf[17]=C_static_string(C_heaptop,36,"can not compute port from service - ");
lf[18]=C_h_intern(&lf[18],17,"\003syspeek-c-string");
lf[19]=C_h_intern(&lf[19],16,"\003sysupdate-errno");
lf[20]=C_h_intern(&lf[20],10,"tcp-listen");
lf[21]=C_static_string(C_heaptop,25,"can not bind to socket - ");
lf[22]=C_static_string(C_heaptop,34,"getting listener host IP failed - ");
lf[23]=C_h_intern(&lf[23],11,"make-string");
lf[24]=C_static_string(C_heaptop,32,"error while setting up socket - ");
lf[25]=C_h_intern(&lf[25],9,"\003syserror");
lf[26]=C_static_string(C_heaptop,21,"can not create socket");
lf[27]=C_h_intern(&lf[27],12,"tcp-listener");
lf[28]=C_static_string(C_heaptop,27,"can not listen on socket - ");
lf[29]=C_h_intern(&lf[29],13,"tcp-listener\077");
lf[30]=C_h_intern(&lf[30],9,"tcp-close");
lf[31]=C_static_string(C_heaptop,27,"can not close TCP socket - ");
lf[32]=C_h_intern(&lf[32],15,"tcp-buffer-size");
lf[33]=C_h_intern(&lf[33],15,"make-input-port");
lf[34]=C_h_intern(&lf[34],16,"make-output-port");
lf[36]=C_h_intern(&lf[36],25,"\003systhread-block-for-i/o!");
lf[37]=C_static_string(C_heaptop,27,"can not read from socket - ");
lf[38]=C_static_string(C_heaptop,26,"can not write to socket - ");
lf[39]=C_h_intern(&lf[39],13,"\003syssubstring");
lf[40]=C_static_string(C_heaptop,5,"(tcp)");
lf[41]=C_static_string(C_heaptop,5,"(tcp)");
lf[42]=C_h_intern(&lf[42],6,"socket");
lf[43]=C_h_intern(&lf[43],13,"\003sysport-data");
lf[44]=C_static_string(C_heaptop,0,"");
lf[45]=C_static_string(C_heaptop,35,"can not close socket output port - ");
lf[46]=C_static_string(C_heaptop,0,"");
lf[47]=C_static_string(C_heaptop,0,"");
lf[48]=C_static_string(C_heaptop,33,"can not check socket for input - ");
lf[49]=C_static_string(C_heaptop,34,"can not close socket input port - ");
lf[50]=C_static_string(C_heaptop,0,"");
lf[51]=C_h_intern(&lf[51],15,"\003sysmake-string");
lf[52]=C_h_intern(&lf[52],20,"\003sysscan-buffer-line");
lf[53]=C_static_string(C_heaptop,0,"");
lf[54]=C_static_string(C_heaptop,27,"can not create TCP ports - ");
lf[55]=C_h_intern(&lf[55],10,"tcp-accept");
lf[56]=C_static_string(C_heaptop,33,"could not accept from listener - ");
lf[57]=C_h_intern(&lf[57],17,"tcp-accept-ready\077");
lf[58]=C_static_string(C_heaptop,33,"can not check socket for input - ");
lf[59]=C_static_string(C_heaptop,28,"can not connect to socket - ");
lf[60]=C_static_string(C_heaptop,22,"getsockopt() failed - ");
lf[61]=C_static_string(C_heaptop,24,"can not create socket - ");
lf[62]=C_static_string(C_heaptop,17,"fcntl() failed - ");
lf[63]=C_static_string(C_heaptop,25,"can not find host address");
lf[64]=C_static_string(C_heaptop,24,"can not create socket - ");
lf[65]=C_static_string(C_heaptop,17,"no port specified");
lf[66]=C_static_string(C_heaptop,3,"tcp");
lf[67]=C_h_intern(&lf[67],20,"\003systcp-port->fileno");
lf[69]=C_h_intern(&lf[69],11,"\000type-error");
lf[70]=C_static_string(C_heaptop,37,"bad argument type - not a TCP port - ");
lf[71]=C_h_intern(&lf[71],13,"tcp-addresses");
lf[72]=C_static_string(C_heaptop,33,"can not compute remote address - ");
lf[73]=C_static_string(C_heaptop,32,"can not compute local address - ");
lf[74]=C_h_intern(&lf[74],16,"tcp-port-numbers");
lf[75]=C_static_string(C_heaptop,30,"can not compute remote port - ");
lf[76]=C_static_string(C_heaptop,29,"can not compute local port - ");
lf[77]=C_h_intern(&lf[77],17,"tcp-listener-port");
lf[78]=C_static_string(C_heaptop,31,"can not obtain listener port - ");
lf[79]=C_h_intern(&lf[79],16,"tcp-abandon-port");
lf[80]=C_h_intern(&lf[80],19,"tcp-listener-fileno");
lf[81]=C_h_intern(&lf[81],14,"make-parameter");
lf[82]=C_static_string(C_heaptop,26,"can not initialize Winsock");
lf[83]=C_h_intern(&lf[83],17,"register-feature!");
lf[84]=C_h_intern(&lf[84],3,"tcp");
C_register_lf2(lf,85,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_424,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k422 */
static void C_ccall f_424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_424,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_427,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k425 in k422 */
static void C_ccall f_427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_427,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_430,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 96   register-feature! */
t3=*((C_word*)lf[83]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[84]);}

/* k428 in k425 in k422 */
static void C_ccall f_430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_430,2,t0,t1);}
t2=C_mutate(&lf[0],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_432,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate(&lf[1],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_462,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[2],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_479,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate(&lf[3],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_489,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate(&lf[4],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_498,tmp=(C_word)a,a+=2,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_514,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)stub102(C_SCHEME_UNDEFINED))){
t8=t7;
f_514(2,t8,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm: 195  ##sys#signal-hook */
t8=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,lf[14],lf[82]);}}

/* k512 in k428 in k425 in k422 */
static void C_ccall f_514(C_word c,C_word t0,C_word t1){
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
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_514,2,t0,t1);}
t2=C_mutate(&lf[5],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_533,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate(&lf[6],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_539,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[8],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_553,tmp=(C_word)a,a+=2,tmp));
t5=*((C_word*)lf[11]+1);
t6=C_mutate(&lf[12],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_574,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[20]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_741,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[29]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_833,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[30]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_842,tmp=(C_word)a,a+=2,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_874,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 324  make-parameter */
t11=*((C_word*)lf[81]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,C_SCHEME_FALSE);}

/* k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_874(C_word c,C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_874,2,t0,t1);}
t2=C_mutate((C_word*)lf[32]+1,t1);
t3=*((C_word*)lf[33]+1);
t4=*((C_word*)lf[34]+1);
t5=*((C_word*)lf[32]+1);
t6=*((C_word*)lf[23]+1);
t7=C_mutate(&lf[35],(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_876,a[2]=t6,a[3]=t5,a[4]=t3,a[5]=t4,tmp=(C_word)a,a+=6,tmp));
t8=C_mutate((C_word*)lf[55]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1444,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[57]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1501,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[15]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1543,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[67]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1748,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate(&lf[68],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1758,tmp=(C_word)a,a+=2,tmp));
t13=C_mutate((C_word*)lf[71]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1773,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[74]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1818,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[77]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1863,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[79]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1889,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[80]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1906,tmp=(C_word)a,a+=2,tmp));
t18=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,C_SCHEME_UNDEFINED);}

/* tcp-listener-fileno in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1906(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1906,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(1)));}

/* tcp-abandon-port in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1889(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1889,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1897,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 598  ##sys#tcp-port-data */
f_1758(t3,t2);}

/* k1895 in tcp-abandon-port in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t3=(C_truep(t2)?C_fix(2):C_fix(1));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_set_i_slot(t1,t3,C_SCHEME_TRUE));}

/* tcp-listener-port in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1863(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1863,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=f_498(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1873,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_eqp(C_fix(-1),t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1883,a[2]=t3,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1887,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t9=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}
else{
t7=t5;
f_1873(2,t7,C_SCHEME_UNDEFINED);}}

/* k1885 in tcp-listener-port in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 592  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[78],t1);}

/* k1881 in tcp-listener-port in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1883(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 591  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[14],lf[77],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1871 in tcp-listener-port in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* tcp-port-numbers in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1818(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1818,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1822,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 579  ##sys#tcp-port->fileno */
t4=*((C_word*)lf[67]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1820 in tcp-port-numbers in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1822,2,t0,t1);}
t2=f_498(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1832,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_1832(2,t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1857,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1861,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k1859 in k1820 in tcp-port-numbers in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 582  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[76],t1);}

/* k1855 in k1820 in tcp-port-numbers in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 582  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[14],lf[74],t1,((C_word*)t0)[2]);}

/* k1830 in k1820 in tcp-port-numbers in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1832,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(C_word)stub94(C_SCHEME_UNDEFINED,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1839,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_1839(2,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1846,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1850,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k1848 in k1830 in k1820 in tcp-port-numbers in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 584  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[75],t1);}

/* k1844 in k1830 in k1820 in tcp-port-numbers in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 584  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[14],lf[74],t1,((C_word*)t0)[2]);}

/* k1837 in k1830 in k1820 in tcp-port-numbers in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 580  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* tcp-addresses in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1773(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1773,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1777,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 571  ##sys#tcp-port->fileno */
t4=*((C_word*)lf[67]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1775 in tcp-addresses in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1777(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1777,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1784,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=t1;
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,(C_word)stub85(t4,t3),C_fix(0));}

/* k1782 in k1775 in tcp-addresses in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1784,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_1787(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1812,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1816,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k1814 in k1782 in k1775 in tcp-addresses in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 574  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[73],t1);}

/* k1810 in k1782 in k1775 in tcp-addresses in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 574  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[14],lf[71],t1,((C_word*)t0)[2]);}

/* k1785 in k1782 in k1775 in tcp-addresses in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1787,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1791,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,(C_word)stub98(t4,t3),C_fix(0));}

/* k1789 in k1785 in k1782 in k1775 in tcp-addresses in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1791,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1794,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_1794(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1801,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1805,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k1803 in k1789 in k1785 in k1782 in k1775 in tcp-addresses in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 576  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[72],t1);}

/* k1799 in k1789 in k1785 in k1782 in k1775 in tcp-addresses in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 576  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[14],lf[71],t1,((C_word*)t0)[2]);}

/* k1792 in k1789 in k1785 in k1782 in k1775 in tcp-addresses in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 572  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##sys#tcp-port-data in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_1758(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1758,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1762,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 565  ##sys#port-data */
t4=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1760 in ##sys#tcp-port-data in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(t1,C_fix(0)));}
else{
/* tcp.scm: 568  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[69],lf[70],((C_word*)t0)[2]);}}

/* ##sys#tcp-port->fileno in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1748(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1748,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1756,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 561  ##sys#tcp-port-data */
f_1758(t3,t2);}

/* k1754 in ##sys#tcp-port->fileno in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(t1,C_fix(0)));}

/* tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1543(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+21)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1543r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1543r(t0,t1,t2,t3);}}

static void C_ccall f_1543r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(21);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_vemptyp(t3);
t6=(C_truep(t5)?C_SCHEME_FALSE:(C_word)C_slot(t3,C_fix(0)));
t7=t6;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1550,a[2]=t1,a[3]=t8,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t8)[1])){
t10=t9;
f_1550(2,t10,C_SCHEME_UNDEFINED);}
else{
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1717,a[2]=t4,a[3]=t9,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1725,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1731,a[2]=t8,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 524  ##sys#call-with-values */
C_u_call_with_values(4,0,t10,t11,t12);}}

/* a1730 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1731(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1731,4,t0,t1,t2,t3);}
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* a1724 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1725,2,t0,t1);}
/* tcp.scm: 524  ##net#parse-host */
t2=lf[12];
f_574(t2,t1,((C_word*)((C_word*)t0)[2])[1],lf[66]);}

/* k1715 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t2=((C_word*)t0)[3];
f_1550(2,t2,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm: 525  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[14],lf[15],lf[65],((C_word*)((C_word*)t0)[2])[1]);}}

/* k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1550,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1553,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 527  make-string */
t3=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix((C_word)sizeof(struct sockaddr_in)));}

/* k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1553,2,t0,t1);}
t2=f_432(C_fix((C_word)AF_INET),C_fix((C_word)SOCK_STREAM),C_fix(0));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1558,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1579,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1703,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 536  ##sys#update-errno */
t7=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t4;
f_1579(2,t6,C_SCHEME_UNDEFINED);}}

/* k1701 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1703,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1710,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1714,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1712 in k1701 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 537  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[64],t1);}

/* k1708 in k1701 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 537  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[14],lf[15],t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1579,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1582,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1694,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 538  ##net#gethostaddr */
f_539(t3,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* k1692 in k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_1582(2,t2,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm: 539  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[14],lf[15],lf[63],((C_word*)((C_word*)t0)[2])[1]);}}

/* k1580 in k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1582,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=f_489(((C_word*)t0)[5]);
if(C_truep(t3)){
t4=t2;
f_1585(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1680,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 541  ##sys#update-errno */
t5=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1678 in k1580 in k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1680,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1687,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1691,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1689 in k1678 in k1580 in k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 542  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[62],t1);}

/* k1685 in k1678 in k1580 in k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 542  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[14],lf[15],t1);}

/* k1583 in k1580 in k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1585(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1585,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1588,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_fix((C_word)sizeof(struct sockaddr_in));
t5=(C_truep(t3)?t3:C_SCHEME_FALSE);
t6=(C_word)stub73(C_SCHEME_UNDEFINED,((C_word*)t0)[5],t5,t4);
t7=(C_word)C_eqp(C_fix(-1),t6);
if(C_truep(t7)){
t8=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EINPROGRESS));
if(C_truep(t8)){
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1642,a[2]=((C_word*)t0)[2],a[3]=t10,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp));
t12=((C_word*)t10)[1];
f_1642(t12,t2);}
else{
/* tcp.scm: 552  fail */
t9=((C_word*)t0)[2];
f_1558(t9,t2);}}
else{
t8=t2;
f_1588(2,t8,C_SCHEME_UNDEFINED);}}

/* loop in k1583 in k1580 in k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_1642(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1642,NULL,2,t0,t1);}
t2=(C_word)stub119(C_SCHEME_UNDEFINED,((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1649,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t4)){
/* tcp.scm: 547  fail */
t5=((C_word*)t0)[2];
f_1558(t5,t3);}
else{
t5=t3;
f_1649(2,t5,C_SCHEME_UNDEFINED);}}

/* k1647 in loop in k1583 in k1580 in k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1649,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[4],C_fix(1));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1658,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 550  yield */
f_553(t3);}}

/* k1656 in k1647 in loop in k1583 in k1580 in k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 551  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1642(t2,((C_word*)t0)[2]);}

/* k1586 in k1583 in k1580 in k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1588,2,t0,t1);}
t2=(C_word)stub313(C_SCHEME_UNDEFINED,((C_word*)t0)[3]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1594,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1607,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1611,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}
else{
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1624,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1628,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
/* ##sys#peek-c-string */
t8=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,(C_word)stub317(t7,t2),C_fix(0));}
else{
t5=t3;
f_1594(2,t5,C_SCHEME_UNDEFINED);}}}

/* k1626 in k1586 in k1583 in k1580 in k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 557  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[61],t1);}

/* k1622 in k1586 in k1583 in k1580 in k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 557  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[14],lf[15],t1);}

/* k1609 in k1586 in k1583 in k1580 in k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 555  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[60],t1);}

/* k1605 in k1586 in k1583 in k1580 in k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 555  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[14],lf[15],t1);}

/* k1592 in k1586 in k1583 in k1580 in k1577 in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 558  ##net#io-ports */
t2=lf[35];
f_876(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* fail in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_1558(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1558,NULL,2,t0,t1);}
t2=f_462(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1565,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 531  ##sys#update-errno */
t4=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1563 in fail in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1572,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1576,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1574 in k1563 in fail in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 533  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[59],t1);}

/* k1570 in k1563 in fail in k1551 in k1548 in tcp-connect in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 532  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[14],lf[15],t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* tcp-accept-ready? in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1501(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1501,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=f_533(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1508,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_eqp(C_fix(-1),t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1517,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 504  ##sys#update-errno */
t8=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=t5;
f_1508(2,t7,C_SCHEME_UNDEFINED);}}

/* k1515 in tcp-accept-ready? in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1517,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1524,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1528,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1526 in k1515 in tcp-accept-ready? in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 506  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[58],t1);}

/* k1522 in k1515 in tcp-accept-ready? in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 505  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[14],lf[57],t1,((C_word*)t0)[2]);}

/* k1506 in tcp-accept-ready? in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(C_fix(1),((C_word*)t0)[2]));}

/* tcp-accept in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1444(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1444,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1453,a[2]=t5,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1453(t7,t1);}

/* loop in tcp-accept in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_1453(C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1453,NULL,2,t0,t1);}
t2=f_533(((C_word*)t0)[4]);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(C_word)stub27(C_SCHEME_UNDEFINED,((C_word*)t0)[4],C_SCHEME_FALSE,C_SCHEME_FALSE);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1466,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_eqp(C_fix(-1),t4);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1475,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 490  ##sys#update-errno */
t8=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=t5;
f_1466(2,t7,C_SCHEME_UNDEFINED);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1489,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 496  ##sys#thread-block-for-i/o! */
t5=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,*((C_word*)lf[9]+1),((C_word*)t0)[4],C_SCHEME_TRUE);}}

/* k1487 in loop in tcp-accept in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1489(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1489,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1492,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 497  yield */
f_553(t2);}

/* k1490 in k1487 in loop in tcp-accept in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 498  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1453(t2,((C_word*)t0)[2]);}

/* k1473 in loop in tcp-accept in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1475,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1482,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1486,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1484 in k1473 in loop in tcp-accept in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 492  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[56],t1);}

/* k1480 in k1473 in loop in tcp-accept in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 491  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[14],lf[55],t1,((C_word*)t0)[2]);}

/* k1464 in loop in tcp-accept in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 494  ##net#io-ports */
t2=lf[35];
f_876(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_876(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_876,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_880,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=f_489(t2);
if(C_truep(t4)){
t5=t3;
f_880(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1431,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 333  ##sys#update-errno */
t6=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k1429 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1438,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1442,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1440 in k1429 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 334  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[54],t1);}

/* k1436 in k1429 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 334  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[14],t1);}

/* k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_880(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_880,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_883,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm: 335  make-string */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix(1024));}

/* k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_883(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_883,2,t0,t1);}
t2=(C_word)C_a_i_vector(&a,3,((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE);
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_889,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t8,a[5]=t10,a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=t6,a[9]=t4,a[10]=t1,a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
/* tcp.scm: 341  tbs */
t12=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}

/* k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_889,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_892,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(t1)){
t3=(C_word)C_fixnum_greaterp(t1,C_fix(0));
t4=t2;
f_892(t4,(C_truep(t3)?lf[53]:C_SCHEME_FALSE));}
else{
t3=t2;
f_892(t3,C_SCHEME_FALSE);}}

/* k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_892(C_word t0,C_word t1){
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
C_word ab[47],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_892,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_893,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_943,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1170,a[2]=t4,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1192,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[9],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1227,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1270,a[2]=t4,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1335,a[2]=t4,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 362  make-input-port */
t11=((C_word*)t0)[2];
((C_proc8)(void*)(*((C_word*)t11+1)))(8,t11,t5,t6,t7,t8,C_SCHEME_FALSE,t9,t10);}

/* a1334 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1335(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1335,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1341,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_1341(t7,t1,C_SCHEME_FALSE);}

/* loop in a1334 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_1341(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1341,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1353,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* tcp.scm: 409  ##sys#scan-buffer-line */
t4=*((C_word*)lf[52]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],t3);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1410,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm: 426  read-input */
t4=((C_word*)t0)[3];
f_893(t4,t3);}}

/* k1408 in loop in a1334 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[5])[1]))){
/* tcp.scm: 428  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1341(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}}

/* a1352 in loop in a1334 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1353(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1353,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1357,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=t2,a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
t5=(C_word)C_u_fixnum_difference(t2,((C_word*)((C_word*)t0)[7])[1]);
/* tcp.scm: 414  ##sys#make-string */
t6=*((C_word*)lf[51]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}

/* k1355 in a1352 in loop in a1334 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1357(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1357,2,t0,t1);}
t2=(C_word)C_substring_copy(((C_word*)t0)[11],t1,((C_word*)((C_word*)t0)[10])[1],((C_word*)t0)[9],C_fix(0));
t3=C_mutate(((C_word *)((C_word*)t0)[10])+1,((C_word*)t0)[8]);
t4=(C_word)C_eqp(((C_word*)t0)[9],((C_word*)t0)[8]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1367,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm: 418  read-input */
t6=((C_word*)t0)[3];
f_893(t6,t5);}
else{
t5=(C_word)C_slot(((C_word*)t0)[2],C_fix(4));
t6=(C_word)C_u_fixnum_plus(t5,C_fix(1));
t7=(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),t6);
if(C_truep(((C_word*)t0)[6])){
/* tcp.scm: 424  ##sys#string-append */
t8=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[5],((C_word*)t0)[6],t1);}
else{
t8=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t1);}}}

/* k1365 in k1355 in a1352 in loop in a1334 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1367,2,t0,t1);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?t2:lf[50]));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1383,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[5])){
/* tcp.scm: 421  ##sys#string-append */
t3=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[2]);}
else{
t3=t2;
f_1383(2,t3,((C_word*)t0)[2]);}}}

/* k1381 in k1365 in k1355 in a1352 in loop in a1334 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 421  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1341(t2,((C_word*)t0)[2],t1);}

/* a1269 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1270(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1270,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1276,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_1276(t9,t1,t3,C_fix(0),t5);}

/* loop in a1269 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_1276(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word *a;
loop:
a=C_alloc(8);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1276,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
if(C_truep((C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
t6=(C_word)C_u_fixnum_difference(((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1]);
t7=(C_word)C_fixnum_lessp(t2,t6);
t8=(C_truep(t7)?t2:t6);
t9=(C_word)C_u_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t8);
t10=(C_word)C_substring_copy(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[7])[1],t9,t4);
t11=(C_word)C_u_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t8);
t12=C_mutate(((C_word *)((C_word*)t0)[7])+1,t11);
t13=(C_word)C_u_fixnum_difference(t2,t8);
t14=(C_word)C_u_fixnum_plus(t3,t8);
t15=(C_word)C_u_fixnum_plus(t4,t8);
/* tcp.scm: 400  loop */
t18=t1;
t19=t13;
t20=t14;
t21=t15;
t1=t18;
t2=t19;
t3=t20;
t4=t21;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1324,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm: 402  read-input */
t7=((C_word*)t0)[2];
f_893(t7,t6);}}}

/* k1322 in loop in a1269 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(((C_word*)((C_word*)t0)[7])[1],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[5]);}
else{
/* tcp.scm: 405  loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1276(t3,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* a1226 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1227,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_TRUE);
t3=(C_truep((C_word)C_slot(((C_word*)t0)[4],C_fix(1)))?C_SCHEME_UNDEFINED:f_479(((C_word*)t0)[3],C_fix((C_word)SD_RECEIVE)));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1241,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t5=f_462(((C_word*)t0)[3]);
t6=t4;
f_1241(t6,(C_word)C_eqp(C_fix(-1),t5));}
else{
t5=t4;
f_1241(t5,C_SCHEME_FALSE);}}}

/* k1239 in a1226 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_1241(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1241,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1244,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 386  ##sys#update-errno */
t3=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1242 in k1239 in a1226 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1244,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1251,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1255,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1253 in k1242 in k1239 in a1226 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 389  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[49],t1);}

/* k1249 in k1242 in k1239 in a1226 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 387  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[14],t1,((C_word*)t0)[2]);}

/* a1191 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1192,2,t0,t1);}
t2=(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=f_533(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1205,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_eqp(t3,C_fix(-1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1214,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 375  ##sys#update-errno */
t7=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t4;
f_1205(2,t6,C_SCHEME_UNDEFINED);}}}

/* k1212 in a1191 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1214,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1221,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1225,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1223 in k1212 in a1191 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 378  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[48],t1);}

/* k1219 in k1212 in a1191 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 376  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[14],t1,((C_word*)t0)[2]);}

/* k1203 in a1191 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(((C_word*)t0)[2],C_fix(1)));}

/* a1169 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1170(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1170,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1174,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]))){
/* tcp.scm: 365  read-input */
t3=((C_word*)t0)[2];
f_893(t3,t2);}
else{
t3=t2;
f_1174(2,t3,C_SCHEME_UNDEFINED);}}

/* k1172 in a1169 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1174(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}
else{
t2=(C_word)C_subchar(((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);
t3=(C_word)C_u_fixnum_plus(((C_word*)((C_word*)t0)[5])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[28],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_943,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_944,a[2]=((C_word*)t0)[9],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1020,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(((C_word*)((C_word*)t0)[6])[1])?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1134,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1154,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1055,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
t6=(C_truep(((C_word*)((C_word*)t0)[6])[1])?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1118,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp):C_SCHEME_FALSE);
/* tcp.scm: 449  make-output-port */
t7=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t3,t4,t5,t6);}

/* f_1118 in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1118,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)((C_word*)t0)[3])[1]);
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1128,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 473  output */
t4=((C_word*)t0)[2];
f_944(t4,t3,((C_word*)((C_word*)t0)[3])[1]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k1126 */
static void C_ccall f_1128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[47]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* a1054 in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1055,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1063,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1102,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t5=(C_word)C_block_size(((C_word*)((C_word*)t0)[3])[1]);
t6=t4;
f_1102(t6,(C_word)C_fixnum_greaterp(t5,C_fix(0)));}
else{
t5=t4;
f_1102(t5,C_SCHEME_FALSE);}}}

/* k1100 in a1054 in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_1102(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1102,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1105,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 463  output */
t3=((C_word*)t0)[2];
f_944(t3,t2,((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=((C_word*)t0)[3];
f_1063(t2,C_SCHEME_UNDEFINED);}}

/* k1103 in k1100 in a1054 in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[46]);
t3=((C_word*)t0)[2];
f_1063(t3,t2);}

/* k1061 in a1054 in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_1063(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1063,NULL,2,t0,t1);}
t2=(C_truep((C_word)C_slot(((C_word*)t0)[5],C_fix(2)))?C_SCHEME_UNDEFINED:f_479(((C_word*)t0)[4],C_fix((C_word)SD_SEND)));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1072,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=f_462(((C_word*)t0)[4]);
t5=t3;
f_1072(t5,(C_word)C_eqp(C_fix(-1),t4));}
else{
t4=t3;
f_1072(t4,C_SCHEME_FALSE);}}

/* k1070 in k1061 in a1054 in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_1072(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1072,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1075,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 467  ##sys#update-errno */
t3=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1073 in k1070 in k1061 in a1054 in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1075,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1082,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1086,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1084 in k1073 in k1070 in k1061 in a1054 in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 469  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[45],t1);}

/* k1080 in k1073 in k1070 in k1061 in a1054 in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 468  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[14],t1,((C_word*)t0)[2]);}

/* f_1154 in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1154(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1154,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
/* tcp.scm: 458  output */
t4=((C_word*)t0)[2];
f_944(t4,t1,t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* f_1134 in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1134(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1134,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1139,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 452  ##sys#string-append */
t4=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[4])[1],t2);}

/* k1137 */
static void C_ccall f_1139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1139,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_block_size(((C_word*)((C_word*)t0)[5])[1]);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[4]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1148,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 454  output */
t5=((C_word*)t0)[2];
f_944(t5,t4,((C_word*)((C_word*)t0)[5])[1]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k1146 in k1137 */
static void C_ccall f_1148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[44]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1018 in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1020,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(3),lf[40]);
t3=(C_word)C_i_setslot(t1,C_fix(3),lf[41]);
t4=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(7),lf[42]);
t5=(C_word)C_i_setslot(t1,C_fix(7),lf[42]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1049,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 479  ##sys#port-data */
t7=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[4]);}

/* k1047 in k1018 in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1049,2,t0,t1);}
t2=(C_word)C_i_setslot(t1,C_fix(0),((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1045,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 480  ##sys#port-data */
t4=*((C_word*)lf[43]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k1043 in k1047 in k1018 in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(t1,C_fix(0),((C_word*)t0)[5]);
/* tcp.scm: 481  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* output in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_944(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_944,NULL,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_954,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp));
t7=((C_word*)t5)[1];
f_954(t7,t1,t3,t2);}

/* loop in output in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_954(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_954,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_fixnum_min(C_fix(8192),t2);
t5=((C_word*)t0)[3];
t6=t3;
t7=(C_truep(t6)?t6:C_SCHEME_FALSE);
t8=(C_word)stub44(C_SCHEME_UNDEFINED,t5,t7,t4,C_fix(0));
t9=(C_word)C_eqp(C_fix(-1),t8);
if(C_truep(t9)){
t10=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_976,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 439  ##sys#thread-block-for-i/o! */
t12=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t11,*((C_word*)lf[9]+1),((C_word*)t0)[3],C_SCHEME_FALSE);}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_985,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 443  ##sys#update-errno */
t12=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}}
else{
if(C_truep((C_word)C_fixnum_lessp(t8,t2))){
t10=(C_word)C_u_fixnum_difference(t2,t8);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1013,a[2]=t10,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t12=(C_word)C_block_size(t3);
/* tcp.scm: 447  ##sys#substring */
t13=*((C_word*)lf[39]+1);
((C_proc5)(void*)(*((C_word*)t13+1)))(5,t13,t11,t3,t8,t12);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}}}

/* k1011 in loop in output in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_1013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 447  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_954(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k983 in loop in output in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_985,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_992,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_996,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k994 in k983 in loop in output in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 445  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[38],t1);}

/* k990 in k983 in loop in output in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 444  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[14],t1,((C_word*)t0)[2]);}

/* k974 in loop in output in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_979,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 440  yield */
f_553(t2);}

/* k977 in k974 in loop in output in k941 in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 441  loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_954(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* read-input in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_893(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_893,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_899,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_899(t5,t1);}

/* loop in read-input in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_fcall f_899(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_899,NULL,2,t0,t1);}
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
t4=(C_truep(t3)?t3:C_SCHEME_FALSE);
t5=(C_word)stub56(C_SCHEME_UNDEFINED,t2,t4,C_fix(1024),C_fix(0));
t6=(C_word)C_eqp(C_fix(-1),t5);
if(C_truep(t6)){
t7=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_918,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 349  ##sys#thread-block-for-i/o! */
t9=*((C_word*)lf[36]+1);
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t8,*((C_word*)lf[9]+1),((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_927,a[2]=((C_word*)t0)[6],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 353  ##sys#update-errno */
t9=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}
else{
t7=C_mutate(((C_word *)((C_word*)t0)[3])+1,t5);
t8=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}}

/* k925 in loop in read-input in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_927,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_934,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_938,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k936 in k925 in loop in read-input in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 356  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[37],t1);}

/* k932 in k925 in loop in read-input in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 354  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[14],t1,((C_word*)t0)[2]);}

/* k916 in loop in read-input in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_918,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_921,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 350  yield */
f_553(t2);}

/* k919 in k916 in loop in read-input in k890 in k887 in k881 in k878 in ##net#io-ports in k872 in k512 in k428 in k425 in k422 */
static void C_ccall f_921(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 351  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_899(t2,((C_word*)t0)[2]);}

/* tcp-close in k512 in k428 in k425 in k422 */
static void C_ccall f_842(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_842,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=f_462(t3);
t5=(C_word)C_eqp(C_fix(-1),t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_855,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 318  ##sys#update-errno */
t7=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}

/* k853 in tcp-close in k512 in k428 in k425 in k422 */
static void C_ccall f_855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_855,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_862,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_866,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k864 in k853 in tcp-close in k512 in k428 in k425 in k422 */
static void C_ccall f_866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 319  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[31],t1);}

/* k860 in k853 in tcp-close in k512 in k428 in k425 in k422 */
static void C_ccall f_862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 319  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[14],lf[30],t1,((C_word*)t0)[2]);}

/* tcp-listener? in k512 in k428 in k425 in k422 */
static void C_ccall f_833(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_833,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep((C_word)C_blockp(t2))?(C_word)C_i_structurep(t2,lf[27]):C_SCHEME_FALSE));}

/* tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_741(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_741r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_741r(t0,t1,t2,t3);}}

static void C_ccall f_741r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_743,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_783,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_788,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-w180197 */
t7=t6;
f_788(t7,t1);}
else{
t7=(C_word)C_u_i_car(t3);
t8=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t8))){
/* def-host181195 */
t9=t5;
f_783(t9,t1,t7);}
else{
t9=(C_word)C_u_i_car(t8);
t10=(C_word)C_slot(t8,C_fix(1));
/* body178183 */
t11=t4;
f_743(t11,t1,t7,t9);}}}

/* def-w180 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_fcall f_788(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_788,NULL,2,t0,t1);}
/* def-host181195 */
t2=((C_word*)t0)[2];
f_783(t2,t1,C_fix(10));}

/* def-host181 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_fcall f_783(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_783,NULL,3,t0,t1,t2);}
/* body178183 */
t3=((C_word*)t0)[2];
f_743(t3,t1,t2,C_SCHEME_FALSE);}

/* body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_fcall f_743(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_743,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_749,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_755,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a754 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_755(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_755,4,t0,t1,t2,t3);}
t4=t2;
t5=((C_word*)t0)[3];
t6=(C_word)stub20(C_SCHEME_UNDEFINED,t4,t5);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_762,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_eqp(C_fix(-1),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_771,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 306  ##sys#update-errno */
t10=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=t7;
f_762(2,t9,C_SCHEME_UNDEFINED);}}

/* k769 in a754 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_778,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_782,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k780 in k769 in a754 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 307  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[28],t1);}

/* k776 in k769 in a754 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 307  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[14],lf[20],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k760 in a754 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_762,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,2,lf[27],((C_word*)t0)[2]));}

/* a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_749(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_749,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_fix((C_word)SOCK_STREAM);
t4=((C_word*)t0)[2];
t5=f_432(C_fix((C_word)AF_INET),t3,C_fix(0));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_660,a[2]=t4,a[3]=t2,a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_eqp(C_fix((C_word)INVALID_SOCKET),t5);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_736,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 278  ##sys#update-errno */
t9=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=t6;
f_660(2,t8,C_SCHEME_UNDEFINED);}}

/* k734 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 279  ##sys#error */
t2=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[26]);}

/* k658 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_660(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_660,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_663,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_728,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_729,tmp=(C_word)a,a+=2,tmp);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* f_729 in k658 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_729(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_729,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub163(C_SCHEME_UNDEFINED,t2));}

/* k726 in k658 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_728,2,t0,t1);}
t2=(C_word)C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_713,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 285  ##sys#update-errno */
t4=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[3];
f_663(2,t3,C_SCHEME_UNDEFINED);}}

/* k711 in k726 in k658 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_713,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_720,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_724,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k722 in k711 in k726 in k658 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 286  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[24],t1);}

/* k718 in k711 in k726 in k658 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 286  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[14],lf[20],t1,((C_word*)t0)[2]);}

/* k661 in k658 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_663(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_663,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_666,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 287  make-string */
t3=*((C_word*)lf[23]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix((C_word)sizeof(struct sockaddr_in)));}

/* k664 in k661 in k658 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_666,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_669,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_701,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 289  ##net#gethostaddr */
f_539(t3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t3=t1;
t4=(C_truep(t3)?t3:C_SCHEME_FALSE);
t5=t2;
f_669(2,t5,(C_word)stub151(C_SCHEME_UNDEFINED,t4,((C_word*)t0)[3]));}}

/* k699 in k664 in k661 in k658 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_669(2,t2,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm: 290  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[14],lf[20],lf[22],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k667 in k664 in k661 in k658 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_669,2,t0,t1);}
t2=((C_word*)t0)[5];
t3=C_fix((C_word)sizeof(struct sockaddr_in));
t4=(C_truep(t2)?t2:C_SCHEME_FALSE);
t5=(C_word)stub11(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t4,t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_675,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 294  ##sys#update-errno */
t9=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=t6;
f_675(2,t8,C_SCHEME_UNDEFINED);}}

/* k682 in k667 in k664 in k661 in k658 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_691,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_695,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k693 in k682 in k667 in k664 in k661 in k658 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_695(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 295  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[21],t1);}

/* k689 in k682 in k667 in k664 in k661 in k658 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 295  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[14],lf[20],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k673 in k667 in k664 in k661 in k658 in a748 in body178 in tcp-listen in k512 in k428 in k425 in k422 */
static void C_ccall f_675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 296  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##net#parse-host in k512 in k428 in k425 in k422 */
static void C_fcall f_574(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_574,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_583,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_583(t8,t1,C_fix(0));}

/* loop in ##net#parse-host in k512 in k428 in k425 in k422 */
static void C_fcall f_583(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
loop:
a=C_alloc(7);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_583,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
/* tcp.scm: 251  values */
C_values(4,0,t1,((C_word*)t0)[5],C_SCHEME_FALSE);}
else{
t3=(C_word)C_subchar(((C_word*)t0)[5],t2);
t4=(C_word)C_eqp(t3,C_make_character(58));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_606,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_u_fixnum_increase(t2);
/* tcp.scm: 255  substring */
t7=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t5,((C_word*)t0)[5],t6,((C_word*)t0)[6]);}
else{
t5=(C_word)C_u_fixnum_plus(t2,C_fix(1));
/* tcp.scm: 264  loop */
t9=t1;
t10=t5;
t1=t9;
t2=t10;
goto loop;}}}

/* k604 in loop in ##net#parse-host in k512 in k428 in k425 in k422 */
static void C_ccall f_606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_606,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_610,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 256  substring */
t3=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k608 in k604 in loop in ##net#parse-host in k512 in k428 in k425 in k422 */
static void C_ccall f_610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_610,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_521,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
/* ##sys#make-c-string */
t5=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}
else{
t5=t4;
f_521(2,t5,C_SCHEME_FALSE);}}

/* k519 in k608 in k604 in loop in ##net#parse-host in k512 in k428 in k425 in k422 */
static void C_ccall f_521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_521,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_525,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
/* ##sys#make-c-string */
t3=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t3=t2;
f_525(2,t3,C_SCHEME_FALSE);}}

/* k523 in k519 in k608 in k604 in loop in ##net#parse-host in k512 in k428 in k425 in k422 */
static void C_ccall f_525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_525,2,t0,t1);}
t2=(C_word)stub106(C_SCHEME_UNDEFINED,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_616,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_622,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 259  ##sys#update-errno */
t6=*((C_word*)lf[19]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t3;
f_616(2,t5,C_SCHEME_UNDEFINED);}}

/* k620 in k523 in k519 in k608 in k604 in loop in ##net#parse-host in k512 in k428 in k425 in k422 */
static void C_ccall f_622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_629,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_633,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[18]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k631 in k620 in k523 in k519 in k608 in k604 in loop in ##net#parse-host in k512 in k428 in k425 in k422 */
static void C_ccall f_633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 261  ##sys#string-append */
t2=*((C_word*)lf[16]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[17],t1);}

/* k627 in k620 in k523 in k519 in k608 in k604 in loop in ##net#parse-host in k512 in k428 in k425 in k422 */
static void C_ccall f_629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 260  ##sys#signal-hook */
t2=*((C_word*)lf[13]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[14],lf[15],t1,((C_word*)t0)[2]);}

/* k614 in k523 in k519 in k608 in k604 in loop in ##net#parse-host in k512 in k428 in k425 in k422 */
static void C_ccall f_616(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 254  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* yield in k512 in k428 in k425 in k422 */
static void C_fcall f_553(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_553,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_559,tmp=(C_word)a,a+=2,tmp);
/* tcp.scm: 239  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t2);}

/* a558 in yield in k512 in k428 in k425 in k422 */
static void C_ccall f_559(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_559,3,t0,t1,t2);}
t3=*((C_word*)lf[9]+1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_568,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_i_setslot(t3,C_fix(1),t4);
/* tcp.scm: 243  ##sys#schedule */
t6=*((C_word*)lf[10]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t1);}

/* a567 in a558 in yield in k512 in k428 in k425 in k422 */
static void C_ccall f_568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_568,2,t0,t1);}
/* tcp.scm: 242  return */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* ##net#gethostaddr in k512 in k428 in k425 in k422 */
static void C_fcall f_539(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_539,NULL,4,t1,t2,t3,t4);}
t5=(C_truep(t2)?t2:C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_548,a[2]=t4,a[3]=t5,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
/* ##sys#make-c-string */
t7=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,t3);}
else{
t7=t6;
f_548(2,t7,C_SCHEME_FALSE);}}

/* k546 in ##net#gethostaddr in k512 in k428 in k425 in k422 */
static void C_ccall f_548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub125(C_SCHEME_UNDEFINED,((C_word*)t0)[3],t1,((C_word*)t0)[2]));}

/* ##net#select in k512 in k428 in k425 in k422 */
static C_word C_fcall f_533(C_word t1){
C_word tmp;
C_word t2;
return((C_word)stub115(C_SCHEME_UNDEFINED,t1));}

/* ##net#getsockport in k428 in k425 in k422 */
static C_word C_fcall f_498(C_word t1){
C_word tmp;
C_word t2;
return((C_word)stub90(C_SCHEME_UNDEFINED,t1));}

/* ##net#make-nonblocking in k428 in k425 in k422 */
static C_word C_fcall f_489(C_word t1){
C_word tmp;
C_word t2;
return((C_word)stub81(C_SCHEME_UNDEFINED,t1));}

/* ##net#shutdown in k428 in k425 in k422 */
static C_word C_fcall f_479(C_word t1,C_word t2){
C_word tmp;
C_word t3;
return((C_word)stub66(C_SCHEME_UNDEFINED,t1,t2));}

/* ##net#close in k428 in k425 in k422 */
static C_word C_fcall f_462(C_word t1){
C_word tmp;
C_word t2;
return((C_word)stub37(C_SCHEME_UNDEFINED,t1));}

/* ##net#socket in k428 in k425 in k422 */
static C_word C_fcall f_432(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
return((C_word)stub3(C_SCHEME_UNDEFINED,t1,t2,t3));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[192] = {
{"topleveltcp.scm",(void*)C_tcp_toplevel},
{"f_424tcp.scm",(void*)f_424},
{"f_427tcp.scm",(void*)f_427},
{"f_430tcp.scm",(void*)f_430},
{"f_514tcp.scm",(void*)f_514},
{"f_874tcp.scm",(void*)f_874},
{"f_1906tcp.scm",(void*)f_1906},
{"f_1889tcp.scm",(void*)f_1889},
{"f_1897tcp.scm",(void*)f_1897},
{"f_1863tcp.scm",(void*)f_1863},
{"f_1887tcp.scm",(void*)f_1887},
{"f_1883tcp.scm",(void*)f_1883},
{"f_1873tcp.scm",(void*)f_1873},
{"f_1818tcp.scm",(void*)f_1818},
{"f_1822tcp.scm",(void*)f_1822},
{"f_1861tcp.scm",(void*)f_1861},
{"f_1857tcp.scm",(void*)f_1857},
{"f_1832tcp.scm",(void*)f_1832},
{"f_1850tcp.scm",(void*)f_1850},
{"f_1846tcp.scm",(void*)f_1846},
{"f_1839tcp.scm",(void*)f_1839},
{"f_1773tcp.scm",(void*)f_1773},
{"f_1777tcp.scm",(void*)f_1777},
{"f_1784tcp.scm",(void*)f_1784},
{"f_1816tcp.scm",(void*)f_1816},
{"f_1812tcp.scm",(void*)f_1812},
{"f_1787tcp.scm",(void*)f_1787},
{"f_1791tcp.scm",(void*)f_1791},
{"f_1805tcp.scm",(void*)f_1805},
{"f_1801tcp.scm",(void*)f_1801},
{"f_1794tcp.scm",(void*)f_1794},
{"f_1758tcp.scm",(void*)f_1758},
{"f_1762tcp.scm",(void*)f_1762},
{"f_1748tcp.scm",(void*)f_1748},
{"f_1756tcp.scm",(void*)f_1756},
{"f_1543tcp.scm",(void*)f_1543},
{"f_1731tcp.scm",(void*)f_1731},
{"f_1725tcp.scm",(void*)f_1725},
{"f_1717tcp.scm",(void*)f_1717},
{"f_1550tcp.scm",(void*)f_1550},
{"f_1553tcp.scm",(void*)f_1553},
{"f_1703tcp.scm",(void*)f_1703},
{"f_1714tcp.scm",(void*)f_1714},
{"f_1710tcp.scm",(void*)f_1710},
{"f_1579tcp.scm",(void*)f_1579},
{"f_1694tcp.scm",(void*)f_1694},
{"f_1582tcp.scm",(void*)f_1582},
{"f_1680tcp.scm",(void*)f_1680},
{"f_1691tcp.scm",(void*)f_1691},
{"f_1687tcp.scm",(void*)f_1687},
{"f_1585tcp.scm",(void*)f_1585},
{"f_1642tcp.scm",(void*)f_1642},
{"f_1649tcp.scm",(void*)f_1649},
{"f_1658tcp.scm",(void*)f_1658},
{"f_1588tcp.scm",(void*)f_1588},
{"f_1628tcp.scm",(void*)f_1628},
{"f_1624tcp.scm",(void*)f_1624},
{"f_1611tcp.scm",(void*)f_1611},
{"f_1607tcp.scm",(void*)f_1607},
{"f_1594tcp.scm",(void*)f_1594},
{"f_1558tcp.scm",(void*)f_1558},
{"f_1565tcp.scm",(void*)f_1565},
{"f_1576tcp.scm",(void*)f_1576},
{"f_1572tcp.scm",(void*)f_1572},
{"f_1501tcp.scm",(void*)f_1501},
{"f_1517tcp.scm",(void*)f_1517},
{"f_1528tcp.scm",(void*)f_1528},
{"f_1524tcp.scm",(void*)f_1524},
{"f_1508tcp.scm",(void*)f_1508},
{"f_1444tcp.scm",(void*)f_1444},
{"f_1453tcp.scm",(void*)f_1453},
{"f_1489tcp.scm",(void*)f_1489},
{"f_1492tcp.scm",(void*)f_1492},
{"f_1475tcp.scm",(void*)f_1475},
{"f_1486tcp.scm",(void*)f_1486},
{"f_1482tcp.scm",(void*)f_1482},
{"f_1466tcp.scm",(void*)f_1466},
{"f_876tcp.scm",(void*)f_876},
{"f_1431tcp.scm",(void*)f_1431},
{"f_1442tcp.scm",(void*)f_1442},
{"f_1438tcp.scm",(void*)f_1438},
{"f_880tcp.scm",(void*)f_880},
{"f_883tcp.scm",(void*)f_883},
{"f_889tcp.scm",(void*)f_889},
{"f_892tcp.scm",(void*)f_892},
{"f_1335tcp.scm",(void*)f_1335},
{"f_1341tcp.scm",(void*)f_1341},
{"f_1410tcp.scm",(void*)f_1410},
{"f_1353tcp.scm",(void*)f_1353},
{"f_1357tcp.scm",(void*)f_1357},
{"f_1367tcp.scm",(void*)f_1367},
{"f_1383tcp.scm",(void*)f_1383},
{"f_1270tcp.scm",(void*)f_1270},
{"f_1276tcp.scm",(void*)f_1276},
{"f_1324tcp.scm",(void*)f_1324},
{"f_1227tcp.scm",(void*)f_1227},
{"f_1241tcp.scm",(void*)f_1241},
{"f_1244tcp.scm",(void*)f_1244},
{"f_1255tcp.scm",(void*)f_1255},
{"f_1251tcp.scm",(void*)f_1251},
{"f_1192tcp.scm",(void*)f_1192},
{"f_1214tcp.scm",(void*)f_1214},
{"f_1225tcp.scm",(void*)f_1225},
{"f_1221tcp.scm",(void*)f_1221},
{"f_1205tcp.scm",(void*)f_1205},
{"f_1170tcp.scm",(void*)f_1170},
{"f_1174tcp.scm",(void*)f_1174},
{"f_943tcp.scm",(void*)f_943},
{"f_1118tcp.scm",(void*)f_1118},
{"f_1128tcp.scm",(void*)f_1128},
{"f_1055tcp.scm",(void*)f_1055},
{"f_1102tcp.scm",(void*)f_1102},
{"f_1105tcp.scm",(void*)f_1105},
{"f_1063tcp.scm",(void*)f_1063},
{"f_1072tcp.scm",(void*)f_1072},
{"f_1075tcp.scm",(void*)f_1075},
{"f_1086tcp.scm",(void*)f_1086},
{"f_1082tcp.scm",(void*)f_1082},
{"f_1154tcp.scm",(void*)f_1154},
{"f_1134tcp.scm",(void*)f_1134},
{"f_1139tcp.scm",(void*)f_1139},
{"f_1148tcp.scm",(void*)f_1148},
{"f_1020tcp.scm",(void*)f_1020},
{"f_1049tcp.scm",(void*)f_1049},
{"f_1045tcp.scm",(void*)f_1045},
{"f_944tcp.scm",(void*)f_944},
{"f_954tcp.scm",(void*)f_954},
{"f_1013tcp.scm",(void*)f_1013},
{"f_985tcp.scm",(void*)f_985},
{"f_996tcp.scm",(void*)f_996},
{"f_992tcp.scm",(void*)f_992},
{"f_976tcp.scm",(void*)f_976},
{"f_979tcp.scm",(void*)f_979},
{"f_893tcp.scm",(void*)f_893},
{"f_899tcp.scm",(void*)f_899},
{"f_927tcp.scm",(void*)f_927},
{"f_938tcp.scm",(void*)f_938},
{"f_934tcp.scm",(void*)f_934},
{"f_918tcp.scm",(void*)f_918},
{"f_921tcp.scm",(void*)f_921},
{"f_842tcp.scm",(void*)f_842},
{"f_855tcp.scm",(void*)f_855},
{"f_866tcp.scm",(void*)f_866},
{"f_862tcp.scm",(void*)f_862},
{"f_833tcp.scm",(void*)f_833},
{"f_741tcp.scm",(void*)f_741},
{"f_788tcp.scm",(void*)f_788},
{"f_783tcp.scm",(void*)f_783},
{"f_743tcp.scm",(void*)f_743},
{"f_755tcp.scm",(void*)f_755},
{"f_771tcp.scm",(void*)f_771},
{"f_782tcp.scm",(void*)f_782},
{"f_778tcp.scm",(void*)f_778},
{"f_762tcp.scm",(void*)f_762},
{"f_749tcp.scm",(void*)f_749},
{"f_736tcp.scm",(void*)f_736},
{"f_660tcp.scm",(void*)f_660},
{"f_729tcp.scm",(void*)f_729},
{"f_728tcp.scm",(void*)f_728},
{"f_713tcp.scm",(void*)f_713},
{"f_724tcp.scm",(void*)f_724},
{"f_720tcp.scm",(void*)f_720},
{"f_663tcp.scm",(void*)f_663},
{"f_666tcp.scm",(void*)f_666},
{"f_701tcp.scm",(void*)f_701},
{"f_669tcp.scm",(void*)f_669},
{"f_684tcp.scm",(void*)f_684},
{"f_695tcp.scm",(void*)f_695},
{"f_691tcp.scm",(void*)f_691},
{"f_675tcp.scm",(void*)f_675},
{"f_574tcp.scm",(void*)f_574},
{"f_583tcp.scm",(void*)f_583},
{"f_606tcp.scm",(void*)f_606},
{"f_610tcp.scm",(void*)f_610},
{"f_521tcp.scm",(void*)f_521},
{"f_525tcp.scm",(void*)f_525},
{"f_622tcp.scm",(void*)f_622},
{"f_633tcp.scm",(void*)f_633},
{"f_629tcp.scm",(void*)f_629},
{"f_616tcp.scm",(void*)f_616},
{"f_553tcp.scm",(void*)f_553},
{"f_559tcp.scm",(void*)f_559},
{"f_568tcp.scm",(void*)f_568},
{"f_539tcp.scm",(void*)f_539},
{"f_548tcp.scm",(void*)f_548},
{"f_533tcp.scm",(void*)f_533},
{"f_498tcp.scm",(void*)f_498},
{"f_489tcp.scm",(void*)f_489},
{"f_479tcp.scm",(void*)f_479},
{"f_462tcp.scm",(void*)f_462},
{"f_432tcp.scm",(void*)f_432},
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
