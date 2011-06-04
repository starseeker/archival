/* Generated from tcp.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:15
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: tcp.scm -output-file tcp.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
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

static C_TLS C_word lf[142];


/* from k1724 */
static C_word C_fcall stub322(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub322(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_mpointer(&C_a,(void*)strerror(t0));
return C_r;}

/* from k1713 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub318(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub318(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int socket=(int )C_unfix(C_a0);
int err, optlen;optlen = sizeof(err);if (typecorrect_getsockopt(socket, SOL_SOCKET, SO_ERROR, &err, (socklen_t *)&optlen) == -1)return(-1);return(err);
C_return:
#undef return

return C_r;}

/* from k889 */
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

/* from k800 */
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

/* from k686 */
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

/* from k671 */
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

/* from k664 */
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

/* from k643 in k639 in k755 in k751 in loop in ##net#parse-host in k632 in k438 in k435 in k432 */
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

/* from k626 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub98(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub98(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;unsigned char *ptr;unsigned int len = sizeof(struct sockaddr_in);if(getpeername(s, (struct sockaddr *)&sa, ((unsigned int *)&len)) != 0) return(NULL);ptr = (unsigned char *)&sa.sin_addr;sprintf(addr_buffer, "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);return(addr_buffer);
C_return:
#undef return

return C_r;}

/* from k615 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub94(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub94(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;int len = sizeof(struct sockaddr_in);if(getpeername(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) return(-1);else return(ntohs(sa.sin_port));
C_return:
#undef return

return C_r;}

/* from k608 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub90(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub90(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;int len = sizeof(struct sockaddr_in);if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)(&len)) != 0) return(-1);else return(ntohs(sa.sin_port));
C_return:
#undef return

return C_r;}

/* from k601 */
#define return(x) C_cblock C_r = (C_mpointer(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub85(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub85(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int s=(int )C_unfix(C_a0);
struct sockaddr_in sa;unsigned char *ptr;int len = sizeof(struct sockaddr_in);if(getsockname(s, (struct sockaddr *)&sa, (socklen_t *)&len) != 0) return(NULL);ptr = (unsigned char *)&sa.sin_addr;sprintf(addr_buffer, "%d.%d.%d.%d", ptr[ 0 ], ptr[ 1 ], ptr[ 2 ], ptr[ 3 ]);return(addr_buffer);
C_return:
#undef return

return C_r;}

/* from k590 */
#define return(x) C_cblock C_r = (C_mk_bool((x))); goto C_return; C_cblockend
static C_word C_fcall stub81(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub81(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int fd=(int )C_unfix(C_a0);
int val = fcntl(fd, F_GETFL, 0);if(val == -1) return(0);return(fcntl(fd, F_SETFL, val | O_NONBLOCK) != -1);
C_return:
#undef return

return C_r;}

/* from k580 */
static C_word C_fcall stub73(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub73(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)connect(t0,t1,t2));
return C_r;}

/* from k565 */
static C_word C_fcall stub66(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub66(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)shutdown(t0,t1));
return C_r;}

/* from k551 */
static C_word C_fcall stub56(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub56(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
C_r=C_fix((C_word)recv(t0,t1,t2,t3));
return C_r;}

/* from k529 */
static C_word C_fcall stub44(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub44(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
int t3=(int )C_unfix(C_a3);
C_r=C_fix((C_word)send(t0,t1,t2,t3));
return C_r;}

/* from k510 */
static C_word C_fcall stub37(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub37(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
C_r=C_fix((C_word)closesocket(t0));
return C_r;}

/* from k497 */
static C_word C_fcall stub27(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub27(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_c_pointer_or_null(C_a1);
void * t2=(void * )C_c_pointer_or_null(C_a2);
C_r=C_fix((C_word)accept(t0,t1,t2));
return C_r;}

/* from k482 */
static C_word C_fcall stub20(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub20(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_fix((C_word)listen(t0,t1));
return C_r;}

/* from k468 */
static C_word C_fcall stub11(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2) C_regparm;
C_regparm static C_word C_fcall stub11(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int t0=(int )C_unfix(C_a0);
void * t1=(void * )C_data_pointer_or_null(C_a1);
int t2=(int )C_unfix(C_a2);
C_r=C_fix((C_word)bind(t0,t1,t2));
return C_r;}

/* from k453 */
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
C_noret_decl(f_434)
static void C_ccall f_434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_437)
static void C_ccall f_437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_440)
static void C_ccall f_440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_634)
static void C_ccall f_634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1044)
static void C_ccall f_1044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2110)
static void C_ccall f_2110(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2093)
static void C_ccall f_2093(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2101)
static void C_ccall f_2101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2064)
static void C_ccall f_2064(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2087)
static void C_ccall f_2087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2077)
static void C_ccall f_2077(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2019)
static void C_ccall f_2019(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2023)
static void C_ccall f_2023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2062)
static void C_ccall f_2062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2058)
static void C_ccall f_2058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2051)
static void C_ccall f_2051(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2047)
static void C_ccall f_2047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2040)
static void C_ccall f_2040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1978)
static void C_ccall f_1978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1985)
static void C_ccall f_1985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2017)
static void C_ccall f_2017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2013)
static void C_ccall f_2013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1988)
static void C_ccall f_1988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1992)
static void C_ccall f_1992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2006)
static void C_ccall f_2006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2002)
static void C_ccall f_2002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1995)
static void C_ccall f_1995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1956)
static void C_fcall f_1956(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1960)
static void C_ccall f_1960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1963)
static void C_ccall f_1963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1946)
static void C_ccall f_1946(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1954)
static void C_ccall f_1954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1728)
static void C_ccall f_1728(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1728)
static void C_ccall f_1728r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1732)
static void C_ccall f_1732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1922)
static void C_ccall f_1922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1916)
static void C_ccall f_1916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1908)
static void C_ccall f_1908(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1738)
static void C_ccall f_1738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1744)
static void C_ccall f_1744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1905)
static void C_ccall f_1905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1901)
static void C_ccall f_1901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1770)
static void C_ccall f_1770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1885)
static void C_ccall f_1885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1773)
static void C_ccall f_1773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1871)
static void C_ccall f_1871(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1882)
static void C_ccall f_1882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1878)
static void C_ccall f_1878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1776)
static void C_ccall f_1776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1833)
static void C_fcall f_1833(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1840)
static void C_ccall f_1840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1849)
static void C_ccall f_1849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1779)
static void C_ccall f_1779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1819)
static void C_ccall f_1819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1815)
static void C_ccall f_1815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1802)
static void C_ccall f_1802(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1798)
static void C_ccall f_1798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1785)
static void C_ccall f_1785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1749)
static void C_fcall f_1749(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1756)
static void C_ccall f_1756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1767)
static void C_ccall f_1767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1674)
static void C_ccall f_1674(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1693)
static void C_ccall f_1693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1704)
static void C_ccall f_1704(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1684)
static void C_ccall f_1684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1614)
static void C_ccall f_1614(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1626)
static void C_fcall f_1626(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1662)
static void C_ccall f_1662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1665)
static void C_ccall f_1665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1648)
static void C_ccall f_1648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1659)
static void C_ccall f_1659(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1655)
static void C_ccall f_1655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1639)
static void C_ccall f_1639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1046)
static void C_fcall f_1046(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1608)
static void C_ccall f_1608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1050)
static void C_ccall f_1050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1053)
static void C_ccall f_1053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1062)
static void C_fcall f_1062(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1505)
static void C_ccall f_1505(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1511)
static void C_fcall f_1511(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1580)
static void C_ccall f_1580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1523)
static void C_ccall f_1523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1527)
static void C_ccall f_1527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1537)
static void C_ccall f_1537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1553)
static void C_ccall f_1553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1440)
static void C_ccall f_1440(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1446)
static void C_fcall f_1446(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1397)
static void C_ccall f_1397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1411)
static void C_fcall f_1411(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1414)
static void C_ccall f_1414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1425)
static void C_ccall f_1425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1362)
static void C_ccall f_1362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1395)
static void C_ccall f_1395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1391)
static void C_ccall f_1391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1375)
static void C_ccall f_1375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1340)
static void C_ccall f_1340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1344)
static void C_ccall f_1344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1288)
static void C_ccall f_1288(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1298)
static void C_ccall f_1298(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1225)
static void C_ccall f_1225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1272)
static void C_fcall f_1272(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1275)
static void C_ccall f_1275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1233)
static void C_fcall f_1233(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1242)
static void C_fcall f_1242(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1245)
static void C_ccall f_1245(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1256)
static void C_ccall f_1256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1252)
static void C_ccall f_1252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1324)
static void C_ccall f_1324(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1304)
static void C_ccall f_1304(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1309)
static void C_ccall f_1309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1318)
static void C_ccall f_1318(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1190)
static void C_ccall f_1190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1219)
static void C_ccall f_1219(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1215)
static void C_ccall f_1215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1114)
static void C_fcall f_1114(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1124)
static void C_fcall f_1124(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1183)
static void C_ccall f_1183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1155)
static void C_ccall f_1155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1166)
static void C_ccall f_1166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1162)
static void C_ccall f_1162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1149)
static void C_ccall f_1149(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1063)
static void C_fcall f_1063(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1069)
static void C_fcall f_1069(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1097)
static void C_ccall f_1097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1108)
static void C_ccall f_1108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1104)
static void C_ccall f_1104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1088)
static void C_ccall f_1088(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1091)
static void C_ccall f_1091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1009)
static void C_ccall f_1009(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1025)
static void C_ccall f_1025(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1036)
static void C_ccall f_1036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1032)
static void C_ccall f_1032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1000)
static void C_ccall f_1000(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_902)
static void C_ccall f_902(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_902)
static void C_ccall f_902r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_952)
static void C_fcall f_952(C_word t0,C_word t1) C_noret;
C_noret_decl(f_947)
static void C_fcall f_947(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_904)
static void C_fcall f_904(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_916)
static void C_ccall f_916(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_935)
static void C_ccall f_935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_946)
static void C_ccall f_946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_942)
static void C_ccall f_942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_926)
static void C_ccall f_926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_910)
static void C_ccall f_910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_897)
static void C_ccall f_897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_817)
static void C_ccall f_817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_886)
static void C_ccall f_886(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_885)
static void C_ccall f_885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_870)
static void C_ccall f_870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_881)
static void C_ccall f_881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_877)
static void C_ccall f_877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_820)
static void C_ccall f_820(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_823)
static void C_ccall f_823(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_858)
static void C_ccall f_858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_826)
static void C_ccall f_826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_841)
static void C_ccall f_841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_848)
static void C_ccall f_848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_832)
static void C_ccall f_832(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_721)
static void C_fcall f_721(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_730)
static void C_fcall f_730(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_753)
static void C_ccall f_753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_757)
static void C_ccall f_757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_641)
static void C_ccall f_641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_645)
static void C_ccall f_645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_769)
static void C_ccall f_769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_780)
static void C_ccall f_780(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_776)
static void C_ccall f_776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_763)
static void C_ccall f_763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_700)
static void C_fcall f_700(C_word t0) C_noret;
C_noret_decl(f_706)
static void C_ccall f_706(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_715)
static void C_ccall f_715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_675)
static void C_fcall f_675(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_684)
static void C_ccall f_684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_661)
static C_word C_fcall f_661(C_word t0);
C_noret_decl(f_605)
static C_word C_fcall f_605(C_word t0);
C_noret_decl(f_587)
static C_word C_fcall f_587(C_word t0);
C_noret_decl(f_558)
static C_word C_fcall f_558(C_word t0,C_word t1);
C_noret_decl(f_507)
static C_word C_fcall f_507(C_word t0);
C_noret_decl(f_442)
static C_word C_fcall f_442(C_word t0,C_word t1,C_word t2);

C_noret_decl(trf_1956)
static void C_fcall trf_1956(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1956(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1956(t0,t1);}

C_noret_decl(trf_1833)
static void C_fcall trf_1833(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1833(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1833(t0,t1);}

C_noret_decl(trf_1749)
static void C_fcall trf_1749(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1749(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1749(t0,t1);}

C_noret_decl(trf_1626)
static void C_fcall trf_1626(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1626(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1626(t0,t1);}

C_noret_decl(trf_1046)
static void C_fcall trf_1046(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1046(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1046(t0,t1,t2);}

C_noret_decl(trf_1062)
static void C_fcall trf_1062(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1062(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1062(t0,t1);}

C_noret_decl(trf_1511)
static void C_fcall trf_1511(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1511(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1511(t0,t1,t2);}

C_noret_decl(trf_1446)
static void C_fcall trf_1446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1446(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1446(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1411)
static void C_fcall trf_1411(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1411(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1411(t0,t1);}

C_noret_decl(trf_1272)
static void C_fcall trf_1272(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1272(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1272(t0,t1);}

C_noret_decl(trf_1233)
static void C_fcall trf_1233(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1233(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1233(t0,t1);}

C_noret_decl(trf_1242)
static void C_fcall trf_1242(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1242(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1242(t0,t1);}

C_noret_decl(trf_1114)
static void C_fcall trf_1114(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1114(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1114(t0,t1,t2);}

C_noret_decl(trf_1124)
static void C_fcall trf_1124(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1124(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1124(t0,t1,t2,t3);}

C_noret_decl(trf_1063)
static void C_fcall trf_1063(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1063(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1063(t0,t1);}

C_noret_decl(trf_1069)
static void C_fcall trf_1069(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1069(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1069(t0,t1);}

C_noret_decl(trf_952)
static void C_fcall trf_952(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_952(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_952(t0,t1);}

C_noret_decl(trf_947)
static void C_fcall trf_947(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_947(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_947(t0,t1,t2);}

C_noret_decl(trf_904)
static void C_fcall trf_904(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_904(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_904(t0,t1,t2,t3);}

C_noret_decl(trf_721)
static void C_fcall trf_721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_721(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_721(t0,t1,t2,t3);}

C_noret_decl(trf_730)
static void C_fcall trf_730(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_730(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_730(t0,t1,t2);}

C_noret_decl(trf_700)
static void C_fcall trf_700(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_700(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_700(t0);}

C_noret_decl(trf_675)
static void C_fcall trf_675(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_675(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_675(t0,t1,t2,t3);}

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
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("tcp_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(380)){
C_save(t1);
C_rereclaim2(380*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,142);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[3]=C_static_lambda_info(C_heaptop,22,"(##net#socket a16 a07)");
lf[5]=C_static_lambda_info(C_heaptop,13,"(##net#close)");
lf[7]=C_static_lambda_info(C_heaptop,22,"(##net#shutdown a6469)");
lf[9]=C_static_lambda_info(C_heaptop,24,"(##net#make-nonblocking)");
lf[11]=C_static_lambda_info(C_heaptop,19,"(##net#getsockport)");
lf[13]=C_static_lambda_info(C_heaptop,14,"(##net#select)");
lf[15]=C_h_intern(&lf[15],17,"\003sysmake-c-string");
lf[16]=C_static_lambda_info(C_heaptop,43,"(##net#gethostaddr a124129 a123130 a122131)");
lf[18]=C_h_intern(&lf[18],18,"\003syscurrent-thread");
lf[19]=C_static_lambda_info(C_heaptop,6,"(a714)");
lf[20]=C_h_intern(&lf[20],12,"\003sysschedule");
lf[21]=C_static_lambda_info(C_heaptop,16,"(a705 return134)");
lf[22]=C_static_lambda_info(C_heaptop,7,"(yield)");
lf[23]=C_h_intern(&lf[23],9,"substring");
lf[25]=C_h_intern(&lf[25],15,"\003syssignal-hook");
lf[26]=C_h_intern(&lf[26],14,"\000network-error");
lf[27]=C_h_intern(&lf[27],11,"tcp-connect");
lf[28]=C_h_intern(&lf[28],17,"\003sysstring-append");
lf[29]=C_static_string(C_heaptop,36,"can not compute port from service - ");
lf[30]=C_h_intern(&lf[30],17,"\003syspeek-c-string");
lf[31]=C_h_intern(&lf[31],16,"\003sysupdate-errno");
lf[32]=C_static_lambda_info(C_heaptop,11,"(loop i142)");
lf[33]=C_static_lambda_info(C_heaptop,35,"(##net#parse-host host138 proto139)");
lf[34]=C_h_intern(&lf[34],10,"tcp-listen");
lf[35]=C_static_string(C_heaptop,25,"can not bind to socket - ");
lf[36]=C_static_string(C_heaptop,34,"getting listener host IP failed - ");
lf[37]=C_h_intern(&lf[37],11,"make-string");
lf[38]=C_static_string(C_heaptop,32,"error while setting up socket - ");
lf[39]=C_static_lambda_info(C_heaptop,15,"(f_886 a162165)");
lf[40]=C_h_intern(&lf[40],9,"\003syserror");
lf[41]=C_static_string(C_heaptop,21,"can not create socket");
lf[42]=C_static_lambda_info(C_heaptop,6,"(a909)");
lf[43]=C_h_intern(&lf[43],12,"tcp-listener");
lf[44]=C_static_string(C_heaptop,27,"can not listen on socket - ");
lf[45]=C_static_lambda_info(C_heaptop,25,"(a915 s187189 addr188190)");
lf[46]=C_static_lambda_info(C_heaptop,22,"(body179 w185 host186)");
lf[47]=C_static_lambda_info(C_heaptop,22,"(def-host182 %w177198)");
lf[48]=C_static_lambda_info(C_heaptop,10,"(def-w181)");
lf[49]=C_static_lambda_info(C_heaptop,30,"(tcp-listen port175 . more176)");
lf[50]=C_h_intern(&lf[50],13,"tcp-listener\077");
lf[51]=C_static_lambda_info(C_heaptop,20,"(tcp-listener\077 x205)");
lf[52]=C_h_intern(&lf[52],9,"tcp-close");
lf[53]=C_static_string(C_heaptop,27,"can not close TCP socket - ");
lf[54]=C_static_lambda_info(C_heaptop,19,"(tcp-close tcpl206)");
lf[55]=C_h_intern(&lf[55],15,"tcp-buffer-size");
lf[56]=C_h_intern(&lf[56],15,"make-input-port");
lf[57]=C_h_intern(&lf[57],16,"make-output-port");
lf[59]=C_h_intern(&lf[59],25,"\003systhread-block-for-i/o!");
lf[60]=C_static_string(C_heaptop,27,"can not read from socket - ");
lf[61]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[62]=C_static_lambda_info(C_heaptop,12,"(read-input)");
lf[63]=C_static_string(C_heaptop,26,"can not write to socket - ");
lf[64]=C_h_intern(&lf[64],13,"\003syssubstring");
lf[65]=C_static_lambda_info(C_heaptop,18,"(loop len276 s277)");
lf[66]=C_static_lambda_info(C_heaptop,13,"(output s274)");
lf[67]=C_static_string(C_heaptop,5,"(tcp)");
lf[68]=C_static_string(C_heaptop,5,"(tcp)");
lf[69]=C_h_intern(&lf[69],6,"socket");
lf[70]=C_h_intern(&lf[70],13,"\003sysport-data");
lf[71]=C_static_string(C_heaptop,0,"");
lf[72]=C_static_lambda_info(C_heaptop,13,"(f_1304 s285)");
lf[73]=C_static_lambda_info(C_heaptop,13,"(f_1324 s288)");
lf[74]=C_static_string(C_heaptop,35,"can not close socket output port - ");
lf[75]=C_static_string(C_heaptop,0,"");
lf[76]=C_static_lambda_info(C_heaptop,7,"(a1224)");
lf[77]=C_static_string(C_heaptop,0,"");
lf[78]=C_static_lambda_info(C_heaptop,8,"(f_1288)");
lf[79]=C_static_lambda_info(C_heaptop,7,"(a1339)");
lf[80]=C_static_string(C_heaptop,33,"can not check socket for input - ");
lf[81]=C_static_lambda_info(C_heaptop,7,"(a1361)");
lf[82]=C_static_string(C_heaptop,34,"can not close socket input port - ");
lf[83]=C_static_lambda_info(C_heaptop,7,"(a1396)");
lf[84]=C_static_lambda_info(C_heaptop,25,"(loop n249 m250 start251)");
lf[85]=C_static_lambda_info(C_heaptop,34,"(a1439 p244 n245 dest246 start247)");
lf[86]=C_static_string(C_heaptop,0,"");
lf[87]=C_h_intern(&lf[87],15,"\003sysmake-string");
lf[88]=C_static_lambda_info(C_heaptop,23,"(a1522 pos2262 next263)");
lf[89]=C_h_intern(&lf[89],20,"\003sysscan-buffer-line");
lf[90]=C_static_lambda_info(C_heaptop,13,"(loop str261)");
lf[91]=C_static_lambda_info(C_heaptop,21,"(a1504 p258 limit259)");
lf[92]=C_static_string(C_heaptop,0,"");
lf[93]=C_static_string(C_heaptop,27,"can not create TCP ports - ");
lf[94]=C_static_lambda_info(C_heaptop,22,"(##net#io-ports fd214)");
lf[95]=C_h_intern(&lf[95],10,"tcp-accept");
lf[96]=C_static_string(C_heaptop,33,"could not accept from listener - ");
lf[97]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[98]=C_static_lambda_info(C_heaptop,20,"(tcp-accept tcpl302)");
lf[99]=C_h_intern(&lf[99],17,"tcp-accept-ready\077");
lf[100]=C_static_string(C_heaptop,33,"can not check socket for input - ");
lf[101]=C_static_lambda_info(C_heaptop,27,"(tcp-accept-ready\077 tcpl312)");
lf[102]=C_static_string(C_heaptop,28,"can not connect to socket - ");
lf[103]=C_static_lambda_info(C_heaptop,6,"(fail)");
lf[104]=C_static_string(C_heaptop,22,"getsockopt() failed - ");
lf[105]=C_static_string(C_heaptop,24,"can not create socket - ");
lf[106]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[107]=C_static_string(C_heaptop,17,"fcntl() failed - ");
lf[108]=C_static_string(C_heaptop,25,"can not find host address");
lf[109]=C_static_string(C_heaptop,24,"can not create socket - ");
lf[110]=C_static_string(C_heaptop,17,"no port specified");
lf[111]=C_static_string(C_heaptop,3,"tcp");
lf[112]=C_static_lambda_info(C_heaptop,7,"(a1915)");
lf[113]=C_static_lambda_info(C_heaptop,29,"(a1921 host331333 port332334)");
lf[114]=C_static_lambda_info(C_heaptop,31,"(tcp-connect host326 . more327)");
lf[115]=C_h_intern(&lf[115],20,"\003systcp-port->fileno");
lf[117]=C_static_lambda_info(C_heaptop,29,"(##sys#tcp-port->fileno p359)");
lf[118]=C_h_intern(&lf[118],11,"\000type-error");
lf[119]=C_static_string(C_heaptop,37,"bad argument type - not a TCP port - ");
lf[120]=C_h_intern(&lf[120],14,"\003syscheck-port");
lf[121]=C_static_lambda_info(C_heaptop,26,"(##sys#tcp-port-data p360)");
lf[122]=C_h_intern(&lf[122],13,"tcp-addresses");
lf[123]=C_static_string(C_heaptop,33,"can not compute remote address - ");
lf[124]=C_static_string(C_heaptop,32,"can not compute local address - ");
lf[125]=C_static_lambda_info(C_heaptop,20,"(tcp-addresses p363)");
lf[126]=C_h_intern(&lf[126],16,"tcp-port-numbers");
lf[127]=C_static_string(C_heaptop,30,"can not compute remote port - ");
lf[128]=C_static_string(C_heaptop,29,"can not compute local port - ");
lf[129]=C_static_lambda_info(C_heaptop,23,"(tcp-port-numbers p369)");
lf[130]=C_h_intern(&lf[130],17,"tcp-listener-port");
lf[131]=C_static_string(C_heaptop,31,"can not obtain listener port - ");
lf[132]=C_static_lambda_info(C_heaptop,27,"(tcp-listener-port tcpl375)");
lf[133]=C_h_intern(&lf[133],16,"tcp-abandon-port");
lf[134]=C_static_lambda_info(C_heaptop,23,"(tcp-abandon-port p380)");
lf[135]=C_h_intern(&lf[135],19,"tcp-listener-fileno");
lf[136]=C_static_lambda_info(C_heaptop,26,"(tcp-listener-fileno l381)");
lf[137]=C_h_intern(&lf[137],14,"make-parameter");
lf[138]=C_static_string(C_heaptop,26,"can not initialize Winsock");
lf[139]=C_h_intern(&lf[139],17,"register-feature!");
lf[140]=C_h_intern(&lf[140],3,"tcp");
lf[141]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,142,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_434,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k432 */
static void C_ccall f_434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_434,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_437,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k435 in k432 */
static void C_ccall f_437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_437,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_440,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 96   register-feature! */
t3=*((C_word*)lf[139]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[140]);}

/* k438 in k435 in k432 */
static void C_ccall f_440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_440,2,t0,t1);}
t2=C_mutate(&lf[2],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_442,a[2]=lf[3],tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[4],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_507,a[2]=lf[5],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[6],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_558,a[2]=lf[7],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate(&lf[8],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_587,a[2]=lf[9],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[10],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_605,a[2]=lf[11],tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_634,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)stub102(C_SCHEME_UNDEFINED))){
t8=t7;
f_634(2,t8,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm: 195  ##sys#signal-hook */
t8=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,lf[26],lf[138]);}}

/* k632 in k438 in k435 in k432 */
static void C_ccall f_634(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_634,2,t0,t1);}
t2=C_mutate(&lf[12],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_661,a[2]=lf[13],tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[14],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_675,a[2]=lf[16],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[17],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_700,a[2]=lf[22],tmp=(C_word)a,a+=3,tmp));
t5=*((C_word*)lf[23]+1);
t6=C_mutate(&lf[24],(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_721,a[2]=t5,a[3]=lf[33],tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[34]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_902,a[2]=lf[49],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[50]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1000,a[2]=lf[51],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[52]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1009,a[2]=lf[54],tmp=(C_word)a,a+=3,tmp));
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1044,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 324  make-parameter */
t11=*((C_word*)lf[137]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,C_SCHEME_FALSE);}

/* k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1044(C_word c,C_word t0,C_word t1){
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
C_word ab[37],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1044,2,t0,t1);}
t2=C_mutate((C_word*)lf[55]+1,t1);
t3=*((C_word*)lf[56]+1);
t4=*((C_word*)lf[57]+1);
t5=*((C_word*)lf[55]+1);
t6=*((C_word*)lf[37]+1);
t7=C_mutate(&lf[58],(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1046,a[2]=t6,a[3]=t5,a[4]=t3,a[5]=t4,a[6]=lf[94],tmp=(C_word)a,a+=7,tmp));
t8=C_mutate((C_word*)lf[95]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1614,a[2]=lf[98],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[99]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1674,a[2]=lf[101],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[27]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1728,a[2]=lf[114],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[115]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1946,a[2]=lf[117],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[116],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1956,a[2]=lf[121],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[122]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1974,a[2]=lf[125],tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[126]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2019,a[2]=lf[129],tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[130]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2064,a[2]=lf[132],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[133]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2093,a[2]=lf[134],tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[135]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2110,a[2]=lf[136],tmp=(C_word)a,a+=3,tmp));
t18=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,C_SCHEME_UNDEFINED);}

/* tcp-listener-fileno in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2110(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2110,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[43],lf[135]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* tcp-abandon-port in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2093(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2093,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2101,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 598  ##sys#tcp-port-data */
f_1956(t3,t2);}

/* k2099 in tcp-abandon-port in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t3=(C_truep(t2)?C_fix(2):C_fix(1));
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_set_i_slot(t1,t3,C_SCHEME_TRUE));}

/* tcp-listener-port in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2064(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2064,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[43],lf[130]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=f_605(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2077,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2087,a[2]=t4,a[3]=t2,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2091,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t10=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}
else{
t8=t6;
f_2077(2,t8,C_SCHEME_UNDEFINED);}}

/* k2089 in tcp-listener-port in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 592  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[131],t1);}

/* k2085 in tcp-listener-port in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 591  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[26],lf[130],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2075 in tcp-listener-port in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2077(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* tcp-port-numbers in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2019(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2019,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2023,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 579  ##sys#tcp-port->fileno */
t4=*((C_word*)lf[115]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k2021 in tcp-port-numbers in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2023,2,t0,t1);}
t2=f_605(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2033,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_2033(2,t4,t2);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2058,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2062,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t6=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k2060 in k2021 in tcp-port-numbers in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 582  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[128],t1);}

/* k2056 in k2021 in tcp-port-numbers in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 582  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[26],lf[126],t1,((C_word*)t0)[2]);}

/* k2031 in k2021 in tcp-port-numbers in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2033,2,t0,t1);}
t2=((C_word*)t0)[4];
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=(C_word)stub94(C_SCHEME_UNDEFINED,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2040,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_2040(2,t6,t4);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2047,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2051,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k2049 in k2031 in k2021 in tcp-port-numbers in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2051(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 584  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[127],t1);}

/* k2045 in k2031 in k2021 in tcp-port-numbers in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 584  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[26],lf[126],t1,((C_word*)t0)[2]);}

/* k2038 in k2031 in k2021 in tcp-port-numbers in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 580  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* tcp-addresses in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1974(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1974,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1978,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 571  ##sys#tcp-port->fileno */
t4=*((C_word*)lf[115]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1976 in tcp-addresses in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1985,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=t1;
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=(C_word)stub85(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}

/* k1983 in k1976 in tcp-addresses in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1985(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1985,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1988,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_1988(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2013,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2017,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k2015 in k1983 in k1976 in tcp-addresses in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 574  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[124],t1);}

/* k2011 in k1983 in k1976 in tcp-addresses in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 574  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[26],lf[122],t1,((C_word*)t0)[2]);}

/* k1986 in k1983 in k1976 in tcp-addresses in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1988,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1992,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)t0)[2];
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(C_word)C_i_foreign_fixnum_argumentp(t3);
t6=(C_word)stub98(t4,t5);
/* ##sys#peek-c-string */
t7=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t2,t6,C_fix(0));}

/* k1990 in k1986 in k1983 in k1976 in tcp-addresses in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1992,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1995,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=t2;
f_1995(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2002,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2006,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t5=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}}

/* k2004 in k1990 in k1986 in k1983 in k1976 in tcp-addresses in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 576  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[123],t1);}

/* k2000 in k1990 in k1986 in k1983 in k1976 in tcp-addresses in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_2002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 576  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[26],lf[122],t1,((C_word*)t0)[2]);}

/* k1993 in k1990 in k1986 in k1983 in k1976 in tcp-addresses in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 572  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* ##sys#tcp-port-data in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1956(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1956,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1960,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 564  ##sys#check-port */
t4=*((C_word*)lf[120]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k1958 in ##sys#tcp-port-data in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 565  ##sys#port-data */
t3=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1961 in k1958 in ##sys#tcp-port-data in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(t1,C_fix(0)));}
else{
/* tcp.scm: 568  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[118],lf[119],((C_word*)t0)[2]);}}

/* ##sys#tcp-port->fileno in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1946(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1946,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1954,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 561  ##sys#tcp-port-data */
f_1956(t3,t2);}

/* k1952 in ##sys#tcp-port->fileno in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_slot(t1,C_fix(0)));}

/* tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1728(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_1728r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1728r(t0,t1,t2,t3);}}

static void C_ccall f_1728r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1732,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t6=t5;
f_1732(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_1732(2,t7,(C_word)C_i_car(t3));}
else{
/* tcp.scm: 521  ##sys#error */
t7=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t3);}}}

/* k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1732(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1732,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(C_word)C_i_check_string(((C_word*)((C_word*)t0)[3])[1]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1738,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t3)[1])){
t6=t5;
f_1738(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1908,a[2]=((C_word*)t0)[3],a[3]=t5,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1916,a[2]=((C_word*)t0)[3],a[3]=lf[112],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1922,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=lf[113],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 524  ##sys#call-with-values */
C_call_with_values(4,0,t6,t7,t8);}}

/* a1921 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1922,4,t0,t1,t2,t3);}
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t5=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* a1915 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1916,2,t0,t1);}
/* tcp.scm: 524  ##net#parse-host */
t2=lf[24];
f_721(t2,t1,((C_word*)((C_word*)t0)[2])[1],lf[111]);}

/* k1906 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1908(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)((C_word*)t0)[4])[1])){
t2=((C_word*)t0)[3];
f_1738(2,t2,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm: 525  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[26],lf[27],lf[110],((C_word*)((C_word*)t0)[2])[1]);}}

/* k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1738,2,t0,t1);}
t2=(C_word)C_i_check_exact(((C_word*)((C_word*)t0)[4])[1]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1744,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 527  make-string */
t4=*((C_word*)lf[37]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,C_fix((C_word)sizeof(struct sockaddr_in)));}

/* k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1744,2,t0,t1);}
t2=f_442(C_fix((C_word)AF_INET),C_fix((C_word)SOCK_STREAM),C_fix(0));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1749,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=lf[103],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1770,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[2],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_eqp(C_fix(-1),t2);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1894,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 536  ##sys#update-errno */
t7=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t4;
f_1770(2,t6,C_SCHEME_UNDEFINED);}}

/* k1892 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1894,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1901,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1905,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1903 in k1892 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 537  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[109],t1);}

/* k1899 in k1892 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 537  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[26],lf[27],t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1770,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1773,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1885,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 538  ##net#gethostaddr */
f_675(t3,((C_word*)t0)[5],((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* k1883 in k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_1773(2,t2,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm: 539  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[26],lf[27],lf[108],((C_word*)((C_word*)t0)[2])[1]);}}

/* k1771 in k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1773,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1776,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=f_587(((C_word*)t0)[5]);
if(C_truep(t3)){
t4=t2;
f_1776(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1871,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 541  ##sys#update-errno */
t5=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* k1869 in k1771 in k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1871(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1871,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1878,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1882,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1880 in k1869 in k1771 in k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 542  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[107],t1);}

/* k1876 in k1869 in k1771 in k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 542  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[26],lf[27],t1);}

/* k1774 in k1771 in k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1776(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1776,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1779,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)t0)[3];
t4=C_fix((C_word)sizeof(struct sockaddr_in));
t5=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t6=(C_truep(t3)?(C_word)C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t7=(C_word)C_i_foreign_fixnum_argumentp(t4);
t8=(C_word)stub73(C_SCHEME_UNDEFINED,t5,t6,t7);
t9=(C_word)C_eqp(C_fix(-1),t8);
if(C_truep(t9)){
t10=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EINPROGRESS));
if(C_truep(t10)){
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1833,a[2]=((C_word*)t0)[2],a[3]=t12,a[4]=((C_word*)t0)[5],a[5]=lf[106],tmp=(C_word)a,a+=6,tmp));
t14=((C_word*)t12)[1];
f_1833(t14,t2);}
else{
/* tcp.scm: 552  fail */
t11=((C_word*)t0)[2];
f_1749(t11,t2);}}
else{
t10=t2;
f_1779(2,t10,C_SCHEME_UNDEFINED);}}

/* loop in k1774 in k1771 in k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1833(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1833,NULL,2,t0,t1);}
t2=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t3=(C_word)stub119(C_SCHEME_UNDEFINED,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1840,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_eqp(t3,C_fix(-1));
if(C_truep(t5)){
/* tcp.scm: 547  fail */
t6=((C_word*)t0)[2];
f_1749(t6,t4);}
else{
t6=t4;
f_1840(2,t6,C_SCHEME_UNDEFINED);}}

/* k1838 in loop in k1774 in k1771 in k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1840,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[4],C_fix(1));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1849,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 550  yield */
f_700(t3);}}

/* k1847 in k1838 in loop in k1774 in k1771 in k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 551  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1833(t2,((C_word*)t0)[2]);}

/* k1777 in k1774 in k1771 in k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1779(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1779,2,t0,t1);}
t2=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t3=(C_word)stub318(C_SCHEME_UNDEFINED,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1785,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_eqp(t3,C_fix(-1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1798,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1802,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t8=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}
else{
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1815,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1819,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t9=(C_word)C_i_foreign_fixnum_argumentp(t3);
t10=(C_word)stub322(t8,t9);
/* ##sys#peek-c-string */
t11=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t7,t10,C_fix(0));}
else{
t6=t4;
f_1785(2,t6,C_SCHEME_UNDEFINED);}}}

/* k1817 in k1777 in k1774 in k1771 in k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 557  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[105],t1);}

/* k1813 in k1777 in k1774 in k1771 in k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 557  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[26],lf[27],t1);}

/* k1800 in k1777 in k1774 in k1771 in k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1802(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 555  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[104],t1);}

/* k1796 in k1777 in k1774 in k1771 in k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 555  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[2],lf[26],lf[27],t1);}

/* k1783 in k1777 in k1774 in k1771 in k1768 in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 558  ##net#io-ports */
t2=lf[58];
f_1046(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* fail in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1749(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1749,NULL,2,t0,t1);}
t2=f_507(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 531  ##sys#update-errno */
t4=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1754 in fail in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1756,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1763,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1767,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1765 in k1754 in fail in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 533  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[102],t1);}

/* k1761 in k1754 in fail in k1742 in k1736 in k1730 in tcp-connect in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 532  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[26],lf[27],t1,((C_word*)((C_word*)t0)[3])[1],((C_word*)((C_word*)t0)[2])[1]);}

/* tcp-accept-ready? in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1674(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1674,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[43],lf[99]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=f_661(t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1684,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1693,a[2]=t2,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 504  ##sys#update-errno */
t9=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=t6;
f_1684(2,t8,C_SCHEME_UNDEFINED);}}

/* k1691 in tcp-accept-ready? in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1693,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1700,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1704,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1702 in k1691 in tcp-accept-ready? in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1704(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 506  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[100],t1);}

/* k1698 in k1691 in tcp-accept-ready? in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 505  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[26],lf[99],t1,((C_word*)t0)[2]);}

/* k1682 in tcp-accept-ready? in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(C_fix(1),((C_word*)t0)[2]));}

/* tcp-accept in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1614(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1614,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[43]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1626,a[2]=t6,a[3]=t2,a[4]=t4,a[5]=lf[97],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1626(t8,t1);}

/* loop in tcp-accept in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1626(C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1626,NULL,2,t0,t1);}
t2=f_661(((C_word*)t0)[4]);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t5=(C_word)stub27(C_SCHEME_UNDEFINED,t4,C_SCHEME_FALSE,C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1639,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_eqp(C_fix(-1),t5);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1648,a[2]=((C_word*)t0)[3],a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 490  ##sys#update-errno */
t9=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t8=t6;
f_1639(2,t8,C_SCHEME_UNDEFINED);}}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1662,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 496  ##sys#thread-block-for-i/o! */
t5=*((C_word*)lf[59]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,*((C_word*)lf[18]+1),((C_word*)t0)[4],C_SCHEME_TRUE);}}

/* k1660 in loop in tcp-accept in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1662,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1665,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 497  yield */
f_700(t2);}

/* k1663 in k1660 in loop in tcp-accept in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 498  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1626(t2,((C_word*)t0)[2]);}

/* k1646 in loop in tcp-accept in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1648,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1655,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1659,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1657 in k1646 in loop in tcp-accept in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1659(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 492  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[96],t1);}

/* k1653 in k1646 in loop in tcp-accept in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 491  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[26],lf[95],t1,((C_word*)t0)[2]);}

/* k1637 in loop in tcp-accept in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 494  ##net#io-ports */
t2=lf[58];
f_1046(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1046(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1046,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1050,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=f_587(t2);
if(C_truep(t4)){
t5=t3;
f_1050(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1601,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 333  ##sys#update-errno */
t6=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k1599 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1601,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1608,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1612,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1610 in k1599 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 334  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[93],t1);}

/* k1606 in k1599 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 334  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[26],t1);}

/* k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1050,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1053,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm: 335  make-string */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_fix(1024));}

/* k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1053(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1053,2,t0,t1);}
t2=(C_word)C_a_i_vector(&a,3,((C_word*)t0)[6],C_SCHEME_FALSE,C_SCHEME_FALSE);
t3=C_fix(0);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_fix(0);
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_FALSE;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1059,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t8,a[5]=t10,a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=t6,a[9]=t4,a[10]=t1,a[11]=((C_word*)t0)[6],tmp=(C_word)a,a+=12,tmp);
/* tcp.scm: 341  tbs */
t12=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t12))(2,t12,t11);}

/* k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1059(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1059,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1062,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
if(C_truep(t1)){
t3=(C_word)C_fixnum_greaterp(t1,C_fix(0));
t4=t2;
f_1062(t4,(C_truep(t3)?lf[92]:C_SCHEME_FALSE));}
else{
t3=t2;
f_1062(t3,C_SCHEME_FALSE);}}

/* k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1062(C_word t0,C_word t1){
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
C_word ab[53],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1062,NULL,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1063,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=lf[62],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1113,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[12],tmp=(C_word)a,a+=10,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1340,a[2]=t4,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],a[6]=lf[79],tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1362,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[9],a[5]=lf[81],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1397,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[4],a[6]=lf[83],tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1440,a[2]=t4,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],a[6]=lf[85],tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1505,a[2]=t4,a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],a[6]=lf[91],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm: 362  make-input-port */
t11=((C_word*)t0)[2];
((C_proc8)C_retrieve_proc(t11))(8,t11,t5,t6,t7,t8,C_SCHEME_FALSE,t9,t10);}

/* a1504 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1505(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1505,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1511,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=lf[90],tmp=(C_word)a,a+=9,tmp));
t7=((C_word*)t5)[1];
f_1511(t7,t1,C_SCHEME_FALSE);}

/* loop in a1504 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1511(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1511,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1523,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[5],a[9]=lf[88],tmp=(C_word)a,a+=10,tmp);
/* tcp.scm: 409  ##sys#scan-buffer-line */
t4=*((C_word*)lf[89]+1);
((C_proc6)C_retrieve_proc(t4))(6,t4,t1,((C_word*)t0)[5],((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1],t3);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1580,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* tcp.scm: 426  read-input */
t4=((C_word*)t0)[3];
f_1063(t4,t3);}}

/* k1578 in loop in a1504 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[5])[1]))){
/* tcp.scm: 428  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1511(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_END_OF_FILE);}}

/* a1522 in loop in a1504 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1523,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=t2,a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
t5=(C_word)C_fixnum_difference(t2,((C_word*)((C_word*)t0)[7])[1]);
/* tcp.scm: 414  ##sys#make-string */
t6=*((C_word*)lf[87]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}

/* k1525 in a1522 in loop in a1504 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1527(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1527,2,t0,t1);}
t2=(C_word)C_substring_copy(((C_word*)t0)[11],t1,((C_word*)((C_word*)t0)[10])[1],((C_word*)t0)[9],C_fix(0));
t3=C_mutate(((C_word *)((C_word*)t0)[10])+1,((C_word*)t0)[8]);
t4=(C_word)C_eqp(((C_word*)t0)[9],((C_word*)t0)[8]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1537,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[10],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm: 418  read-input */
t6=((C_word*)t0)[3];
f_1063(t6,t5);}
else{
t5=(C_word)C_slot(((C_word*)t0)[2],C_fix(4));
t6=(C_word)C_fixnum_plus(t5,C_fix(1));
t7=(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(4),t6);
if(C_truep(((C_word*)t0)[6])){
/* tcp.scm: 424  ##sys#string-append */
t8=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,((C_word*)t0)[5],((C_word*)t0)[6],t1);}
else{
t8=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t1);}}}

/* k1535 in k1525 in a1522 in loop in a1504 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1537,2,t0,t1);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
t2=((C_word*)t0)[5];
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?t2:lf[86]));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1553,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[5])){
/* tcp.scm: 421  ##sys#string-append */
t3=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[5],((C_word*)t0)[2]);}
else{
t3=t2;
f_1553(2,t3,((C_word*)t0)[2]);}}}

/* k1551 in k1535 in k1525 in a1522 in loop in a1504 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 421  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1511(t2,((C_word*)t0)[2],t1);}

/* a1439 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1440(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1440,6,t0,t1,t2,t3,t4,t5);}
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1446,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=lf[84],tmp=(C_word)a,a+=9,tmp));
t9=((C_word*)t7)[1];
f_1446(t9,t1,t3,C_fix(0),t5);}

/* loop in a1439 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1446(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_1446,NULL,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
if(C_truep((C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1]))){
t6=(C_word)C_fixnum_difference(((C_word*)((C_word*)t0)[6])[1],((C_word*)((C_word*)t0)[7])[1]);
t7=(C_word)C_fixnum_lessp(t2,t6);
t8=(C_truep(t7)?t2:t6);
t9=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t8);
t10=(C_word)C_substring_copy(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)((C_word*)t0)[7])[1],t9,t4);
t11=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[7])[1],t8);
t12=C_mutate(((C_word *)((C_word*)t0)[7])+1,t11);
t13=(C_word)C_fixnum_difference(t2,t8);
t14=(C_word)C_fixnum_plus(t3,t8);
t15=(C_word)C_fixnum_plus(t4,t8);
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
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1494,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* tcp.scm: 402  read-input */
t7=((C_word*)t0)[2];
f_1063(t7,t6);}}}

/* k1492 in loop in a1439 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1494(C_word c,C_word t0,C_word t1){
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
f_1446(t3,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* a1396 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1397,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[5])[1])){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_TRUE);
t3=(C_truep((C_word)C_slot(((C_word*)t0)[4],C_fix(1)))?C_SCHEME_UNDEFINED:f_558(((C_word*)t0)[3],C_fix((C_word)SD_RECEIVE)));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1411,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t5=f_507(((C_word*)t0)[3]);
t6=t4;
f_1411(t6,(C_word)C_eqp(C_fix(-1),t5));}
else{
t5=t4;
f_1411(t5,C_SCHEME_FALSE);}}}

/* k1409 in a1396 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1411(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1411,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1414,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 386  ##sys#update-errno */
t3=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1412 in k1409 in a1396 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1414,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1425,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1423 in k1412 in k1409 in a1396 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 389  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[82],t1);}

/* k1419 in k1412 in k1409 in a1396 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 387  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[26],t1,((C_word*)t0)[2]);}

/* a1361 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1362,2,t0,t1);}
t2=(C_word)C_fixnum_lessp(((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=f_661(((C_word*)t0)[2]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1375,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_eqp(t3,C_fix(-1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1384,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 375  ##sys#update-errno */
t7=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t6=t4;
f_1375(2,t6,C_SCHEME_UNDEFINED);}}}

/* k1382 in a1361 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1384,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1391,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1395,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1393 in k1382 in a1361 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 378  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[80],t1);}

/* k1389 in k1382 in a1361 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 376  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[26],t1,((C_word*)t0)[2]);}

/* k1373 in a1361 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(((C_word*)t0)[2],C_fix(1)));}

/* a1339 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1340,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1344,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(((C_word*)((C_word*)t0)[5])[1],((C_word*)((C_word*)t0)[4])[1]))){
/* tcp.scm: 365  read-input */
t3=((C_word*)t0)[2];
f_1063(t3,t2);}
else{
t3=t2;
f_1344(2,t3,C_SCHEME_UNDEFINED);}}

/* k1342 in a1339 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1344(C_word c,C_word t0,C_word t1){
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
t3=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[5])[1],C_fix(1));
t4=C_mutate(((C_word *)((C_word*)t0)[5])+1,t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}}

/* k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[33],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1114,a[2]=((C_word*)t0)[9],a[3]=lf[66],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1190,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_truep(((C_word*)((C_word*)t0)[6])[1])?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1304,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=lf[72],tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1324,a[2]=t2,a[3]=lf[73],tmp=(C_word)a,a+=4,tmp));
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1225,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[4],a[8]=lf[76],tmp=(C_word)a,a+=9,tmp);
t6=(C_truep(((C_word*)((C_word*)t0)[6])[1])?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1288,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=lf[78],tmp=(C_word)a,a+=5,tmp):C_SCHEME_FALSE);
/* tcp.scm: 449  make-output-port */
t7=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t7))(5,t7,t3,t4,t5,t6);}

/* f_1288 in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1288(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1288,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)((C_word*)t0)[3])[1]);
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1298,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 473  output */
t4=((C_word*)t0)[2];
f_1114(t4,t3,((C_word*)((C_word*)t0)[3])[1]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k1296 */
static void C_ccall f_1298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[77]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* a1224 in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1225,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[7])[1])){
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=C_set_block_item(((C_word*)t0)[7],0,C_SCHEME_TRUE);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1233,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1272,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t5=(C_word)C_block_size(((C_word*)((C_word*)t0)[3])[1]);
t6=t4;
f_1272(t6,(C_word)C_fixnum_greaterp(t5,C_fix(0)));}
else{
t5=t4;
f_1272(t5,C_SCHEME_FALSE);}}}

/* k1270 in a1224 in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1272(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1272,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1275,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 463  output */
t3=((C_word*)t0)[2];
f_1114(t3,t2,((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=((C_word*)t0)[3];
f_1233(t2,C_SCHEME_UNDEFINED);}}

/* k1273 in k1270 in a1224 in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[75]);
t3=((C_word*)t0)[2];
f_1233(t3,t2);}

/* k1231 in a1224 in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1233(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1233,NULL,2,t0,t1);}
t2=(C_truep((C_word)C_slot(((C_word*)t0)[5],C_fix(2)))?C_SCHEME_UNDEFINED:f_558(((C_word*)t0)[4],C_fix((C_word)SD_SEND)));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1242,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)((C_word*)t0)[2])[1])){
t4=f_507(((C_word*)t0)[4]);
t5=t3;
f_1242(t5,(C_word)C_eqp(C_fix(-1),t4));}
else{
t4=t3;
f_1242(t4,C_SCHEME_FALSE);}}

/* k1240 in k1231 in a1224 in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1242(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1242,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1245,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 467  ##sys#update-errno */
t3=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1243 in k1240 in k1231 in a1224 in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1245(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1245,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1252,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1256,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1254 in k1243 in k1240 in k1231 in a1224 in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 469  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[74],t1);}

/* k1250 in k1243 in k1240 in k1231 in a1224 in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 468  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[26],t1,((C_word*)t0)[2]);}

/* f_1324 in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1324(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1324,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
/* tcp.scm: 458  output */
t4=((C_word*)t0)[2];
f_1114(t4,t1,t2);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* f_1304 in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1304(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1304,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1309,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 452  ##sys#string-append */
t4=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)((C_word*)t0)[4])[1],t2);}

/* k1307 */
static void C_ccall f_1309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1309,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_block_size(((C_word*)((C_word*)t0)[5])[1]);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[4]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1318,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 454  output */
t5=((C_word*)t0)[2];
f_1114(t5,t4,((C_word*)((C_word*)t0)[5])[1]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k1316 in k1307 */
static void C_ccall f_1318(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,lf[71]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1188 in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1190(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1190,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(3),lf[67]);
t3=(C_word)C_i_setslot(t1,C_fix(3),lf[68]);
t4=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(7),lf[69]);
t5=(C_word)C_i_setslot(t1,C_fix(7),lf[69]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1219,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 479  ##sys#port-data */
t7=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t0)[4]);}

/* k1217 in k1188 in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1219(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1219,2,t0,t1);}
t2=(C_word)C_i_setslot(t1,C_fix(0),((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1215,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 480  ##sys#port-data */
t4=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k1213 in k1217 in k1188 in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(t1,C_fix(0),((C_word*)t0)[5]);
/* tcp.scm: 481  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* output in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1114(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1114,NULL,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1124,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=lf[65],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1124(t7,t1,t3,t2);}

/* loop in output in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1124(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1124,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_fixnum_min(C_fix(8192),t2);
t5=((C_word*)t0)[3];
t6=t3;
t7=(C_word)C_i_foreign_fixnum_argumentp(t5);
t8=(C_truep(t6)?(C_word)C_i_foreign_block_argumentp(t6):C_SCHEME_FALSE);
t9=(C_word)C_i_foreign_fixnum_argumentp(t4);
t10=(C_word)C_i_foreign_fixnum_argumentp(C_fix(0));
t11=(C_word)stub44(C_SCHEME_UNDEFINED,t7,t8,t9,t10);
t12=(C_word)C_eqp(C_fix(-1),t11);
if(C_truep(t12)){
t13=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1146,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 439  ##sys#thread-block-for-i/o! */
t15=*((C_word*)lf[59]+1);
((C_proc5)(void*)(*((C_word*)t15+1)))(5,t15,t14,*((C_word*)lf[18]+1),((C_word*)t0)[3],C_SCHEME_FALSE);}
else{
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1155,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 443  ##sys#update-errno */
t15=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,t14);}}
else{
if(C_truep((C_word)C_fixnum_lessp(t11,t2))){
t13=(C_word)C_fixnum_difference(t2,t11);
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1183,a[2]=t13,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t15=(C_word)C_block_size(t3);
/* tcp.scm: 447  ##sys#substring */
t16=*((C_word*)lf[64]+1);
((C_proc5)(void*)(*((C_word*)t16+1)))(5,t16,t14,t3,t11,t15);}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_UNDEFINED);}}}

/* k1181 in loop in output in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 447  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1124(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1153 in loop in output in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1155,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1162,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1166,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1164 in k1153 in loop in output in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 445  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[63],t1);}

/* k1160 in k1153 in loop in output in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 444  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[26],t1,((C_word*)t0)[2]);}

/* k1144 in loop in output in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1146,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1149,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 440  yield */
f_700(t2);}

/* k1147 in k1144 in loop in output in k1111 in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1149(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 441  loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_1124(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* read-input in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1063(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1063,NULL,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1069,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=lf[61],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_1069(t5,t1);}

/* loop in read-input in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_fcall f_1069(C_word t0,C_word t1){
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
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1069,NULL,2,t0,t1);}
t2=((C_word*)t0)[6];
t3=((C_word*)t0)[5];
t4=(C_word)C_i_foreign_fixnum_argumentp(t2);
t5=(C_truep(t3)?(C_word)C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t6=(C_word)C_i_foreign_fixnum_argumentp(C_fix(1024));
t7=(C_word)C_i_foreign_fixnum_argumentp(C_fix(0));
t8=(C_word)stub56(C_SCHEME_UNDEFINED,t4,t5,t6,t7);
t9=(C_word)C_eqp(C_fix(-1),t8);
if(C_truep(t9)){
t10=(C_word)C_eqp(C_fix((C_word)errno),C_fix((C_word)EWOULDBLOCK));
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1088,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 349  ##sys#thread-block-for-i/o! */
t12=*((C_word*)lf[59]+1);
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t11,*((C_word*)lf[18]+1),((C_word*)t0)[6],C_SCHEME_TRUE);}
else{
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1097,a[2]=((C_word*)t0)[6],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 353  ##sys#update-errno */
t12=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}}
else{
t10=C_mutate(((C_word *)((C_word*)t0)[3])+1,t8);
t11=C_set_block_item(((C_word*)t0)[2],0,C_fix(0));
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}}

/* k1095 in loop in read-input in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1097,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1108,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1106 in k1095 in loop in read-input in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 356  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[60],t1);}

/* k1102 in k1095 in loop in read-input in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 354  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[26],t1,((C_word*)t0)[2]);}

/* k1086 in loop in read-input in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1088(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1088,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1091,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 350  yield */
f_700(t2);}

/* k1089 in k1086 in loop in read-input in k1060 in k1057 in k1051 in k1048 in ##net#io-ports in k1042 in k632 in k438 in k435 in k432 */
static void C_ccall f_1091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 351  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1069(t2,((C_word*)t0)[2]);}

/* tcp-close in k632 in k438 in k435 in k432 */
static void C_ccall f_1009(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1009,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure(t2,lf[43]);
t4=(C_word)C_slot(t2,C_fix(1));
t5=f_507(t4);
t6=(C_word)C_eqp(C_fix(-1),t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1025,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 318  ##sys#update-errno */
t8=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_UNDEFINED);}}

/* k1023 in tcp-close in k632 in k438 in k435 in k432 */
static void C_ccall f_1025(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1025,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1032,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1036,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k1034 in k1023 in tcp-close in k632 in k438 in k435 in k432 */
static void C_ccall f_1036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 319  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[53],t1);}

/* k1030 in k1023 in tcp-close in k632 in k438 in k435 in k432 */
static void C_ccall f_1032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 319  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[26],lf[52],t1,((C_word*)t0)[2]);}

/* tcp-listener? in k632 in k438 in k435 in k432 */
static void C_ccall f_1000(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1000,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep((C_word)C_blockp(t2))?(C_word)C_i_structurep(t2,lf[43]):C_SCHEME_FALSE));}

/* tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_902(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_902r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_902r(t0,t1,t2,t3);}}

static void C_ccall f_902r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_904,a[2]=t2,a[3]=lf[46],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_947,a[2]=t4,a[3]=lf[47],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_952,a[2]=t5,a[3]=lf[48],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-w181199 */
t7=t6;
f_952(t7,t1);}
else{
t7=(C_word)C_i_car(t3);
t8=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t8))){
/* def-host182197 */
t9=t5;
f_947(t9,t1,t7);}
else{
t9=(C_word)C_i_car(t8);
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
/* body179184 */
t11=t4;
f_904(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}}}

/* def-w181 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_fcall f_952(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_952,NULL,2,t0,t1);}
/* def-host182197 */
t2=((C_word*)t0)[2];
f_947(t2,t1,C_fix(10));}

/* def-host182 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_fcall f_947(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_947,NULL,3,t0,t1,t2);}
/* body179184 */
t3=((C_word*)t0)[2];
f_904(t3,t1,t2,C_SCHEME_FALSE);}

/* body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_fcall f_904(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_904,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_910,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=lf[42],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_916,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=lf[45],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a915 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_916(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_916,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact(((C_word*)t0)[3]);
t5=t2;
t6=((C_word*)t0)[3];
t7=(C_word)C_i_foreign_fixnum_argumentp(t5);
t8=(C_word)C_i_foreign_fixnum_argumentp(t6);
t9=(C_word)stub20(C_SCHEME_UNDEFINED,t7,t8);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_926,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t11=(C_word)C_eqp(C_fix(-1),t9);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_935,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 306  ##sys#update-errno */
t13=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t12=t10;
f_926(2,t12,C_SCHEME_UNDEFINED);}}

/* k933 in a915 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_935,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_942,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_946,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k944 in k933 in a915 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 307  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[44],t1);}

/* k940 in k933 in a915 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 307  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[26],lf[34],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k924 in a915 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_926,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,2,lf[43],((C_word*)t0)[2]));}

/* a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_910(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_910,2,t0,t1);}
t2=((C_word*)t0)[3];
t3=C_fix((C_word)SOCK_STREAM);
t4=((C_word*)t0)[2];
t5=(C_word)C_i_check_exact(t2);
t6=f_442(C_fix((C_word)AF_INET),t3,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_817,a[2]=t4,a[3]=t2,a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_eqp(C_fix((C_word)INVALID_SOCKET),t6);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_897,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 278  ##sys#update-errno */
t10=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t9);}
else{
t9=t7;
f_817(2,t9,C_SCHEME_UNDEFINED);}}

/* k895 in a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 279  ##sys#error */
t2=*((C_word*)lf[40]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[41]);}

/* k815 in a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_817,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_820,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_885,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_886,a[2]=lf[39],tmp=(C_word)a,a+=3,tmp);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[5]);}

/* f_886 in k815 in a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_886(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_886,3,t0,t1,t2);}
t3=(C_word)C_i_foreign_fixnum_argumentp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub163(C_SCHEME_UNDEFINED,t3));}

/* k883 in k815 in a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_885,2,t0,t1);}
t2=(C_word)C_eqp(C_fix(-1),t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_870,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 285  ##sys#update-errno */
t4=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t3=((C_word*)t0)[3];
f_820(2,t3,C_SCHEME_UNDEFINED);}}

/* k868 in k883 in k815 in a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_877,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_881,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k879 in k868 in k883 in k815 in a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 286  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[38],t1);}

/* k875 in k868 in k883 in k815 in a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 286  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[26],lf[34],t1,((C_word*)t0)[2]);}

/* k818 in k815 in a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_820,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* tcp.scm: 287  make-string */
t3=*((C_word*)lf[37]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,C_fix((C_word)sizeof(struct sockaddr_in)));}

/* k821 in k818 in k815 in a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_823(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_823,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_826,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_858,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 289  ##net#gethostaddr */
f_675(t3,t1,((C_word*)t0)[2],((C_word*)t0)[3]);}
else{
t3=t1;
t4=(C_truep(t3)?(C_word)C_i_foreign_block_argumentp(t3):C_SCHEME_FALSE);
t5=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[3]);
t6=t2;
f_826(2,t6,(C_word)stub151(C_SCHEME_UNDEFINED,t4,t5));}}

/* k856 in k821 in k818 in k815 in a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_826(2,t2,C_SCHEME_UNDEFINED);}
else{
/* tcp.scm: 290  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[26],lf[34],lf[36],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k824 in k821 in k818 in k815 in a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_826(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_826,2,t0,t1);}
t2=((C_word*)t0)[5];
t3=C_fix((C_word)sizeof(struct sockaddr_in));
t4=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t5=(C_truep(t2)?(C_word)C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=(C_word)C_i_foreign_fixnum_argumentp(t3);
t7=(C_word)stub11(C_SCHEME_UNDEFINED,t4,t5,t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_832,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_eqp(C_fix(-1),t7);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 294  ##sys#update-errno */
t11=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,t10);}
else{
t10=t8;
f_832(2,t10,C_SCHEME_UNDEFINED);}}

/* k839 in k824 in k821 in k818 in k815 in a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_841,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_848,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_852,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k850 in k839 in k824 in k821 in k818 in k815 in a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 295  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[35],t1);}

/* k846 in k839 in k824 in k821 in k818 in k815 in a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 295  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc7)(void*)(*((C_word*)t2+1)))(7,t2,((C_word*)t0)[4],lf[26],lf[34],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k830 in k824 in k821 in k818 in k815 in a909 in body179 in tcp-listen in k632 in k438 in k435 in k432 */
static void C_ccall f_832(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 296  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##net#parse-host in k632 in k438 in k435 in k432 */
static void C_fcall f_721(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_721,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_block_size(t2);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_730,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,a[6]=t4,a[7]=lf[32],tmp=(C_word)a,a+=8,tmp));
t8=((C_word*)t6)[1];
f_730(t8,t1,C_fix(0));}

/* loop in ##net#parse-host in k632 in k438 in k435 in k432 */
static void C_fcall f_730(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_730,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
/* tcp.scm: 251  values */
C_values(4,0,t1,((C_word*)t0)[5],C_SCHEME_FALSE);}
else{
t3=(C_word)C_subchar(((C_word*)t0)[5],t2);
t4=(C_word)C_eqp(t3,C_make_character(58));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_753,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_fixnum_increase(t2);
/* tcp.scm: 255  substring */
t7=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t7))(5,t7,t5,((C_word*)t0)[5],t6,((C_word*)t0)[6]);}
else{
t5=(C_word)C_fixnum_plus(t2,C_fix(1));
/* tcp.scm: 264  loop */
t9=t1;
t10=t5;
t1=t9;
t2=t10;
goto loop;}}}

/* k751 in loop in ##net#parse-host in k632 in k438 in k435 in k432 */
static void C_ccall f_753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_757,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* tcp.scm: 256  substring */
t3=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k755 in k751 in loop in ##net#parse-host in k632 in k438 in k435 in k432 */
static void C_ccall f_757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_757,2,t0,t1);}
t2=t1;
t3=((C_word*)t0)[4];
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_641,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t5=(C_word)C_i_foreign_string_argumentp(t2);
/* ##sys#make-c-string */
t6=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
t5=t4;
f_641(2,t5,C_SCHEME_FALSE);}}

/* k639 in k755 in k751 in loop in ##net#parse-host in k632 in k438 in k435 in k432 */
static void C_ccall f_641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_645,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(C_word)C_i_foreign_string_argumentp(((C_word*)t0)[2]);
/* ##sys#make-c-string */
t4=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t3=t2;
f_645(2,t3,C_SCHEME_FALSE);}}

/* k643 in k639 in k755 in k751 in loop in ##net#parse-host in k632 in k438 in k435 in k432 */
static void C_ccall f_645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_645,2,t0,t1);}
t2=(C_word)stub106(C_SCHEME_UNDEFINED,((C_word*)t0)[5],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_763,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_eqp(C_fix(0),t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_769,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* tcp.scm: 259  ##sys#update-errno */
t6=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t3;
f_763(2,t5,C_SCHEME_UNDEFINED);}}

/* k767 in k643 in k639 in k755 in k751 in loop in ##net#parse-host in k632 in k438 in k435 in k432 */
static void C_ccall f_769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_769,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_776,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_780,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[30]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)strerror(errno)),C_fix(0));}

/* k778 in k767 in k643 in k639 in k755 in k751 in loop in ##net#parse-host in k632 in k438 in k435 in k432 */
static void C_ccall f_780(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 261  ##sys#string-append */
t2=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[29],t1);}

/* k774 in k767 in k643 in k639 in k755 in k751 in loop in ##net#parse-host in k632 in k438 in k435 in k432 */
static void C_ccall f_776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 260  ##sys#signal-hook */
t2=*((C_word*)lf[25]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[26],lf[27],t1,((C_word*)t0)[2]);}

/* k761 in k643 in k639 in k755 in k751 in loop in ##net#parse-host in k632 in k438 in k435 in k432 */
static void C_ccall f_763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* tcp.scm: 254  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* yield in k632 in k438 in k435 in k432 */
static void C_fcall f_700(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_700,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_706,a[2]=lf[21],tmp=(C_word)a,a+=3,tmp);
/* tcp.scm: 239  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t2);}

/* a705 in yield in k632 in k438 in k435 in k432 */
static void C_ccall f_706(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_706,3,t0,t1,t2);}
t3=*((C_word*)lf[18]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_715,a[2]=t2,a[3]=lf[19],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_setslot(t3,C_fix(1),t4);
/* tcp.scm: 243  ##sys#schedule */
t6=*((C_word*)lf[20]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t1);}

/* a714 in a705 in yield in k632 in k438 in k435 in k432 */
static void C_ccall f_715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_715,2,t0,t1);}
/* tcp.scm: 242  return */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* ##net#gethostaddr in k632 in k438 in k435 in k432 */
static void C_fcall f_675(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_675,NULL,4,t1,t2,t3,t4);}
t5=(C_truep(t2)?(C_word)C_i_foreign_block_argumentp(t2):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_684,a[2]=t5,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t7=(C_word)C_i_foreign_string_argumentp(t3);
/* ##sys#make-c-string */
t8=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}
else{
t7=t6;
f_684(2,t7,C_SCHEME_FALSE);}}

/* k682 in ##net#gethostaddr in k632 in k438 in k435 in k432 */
static void C_ccall f_684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub125(C_SCHEME_UNDEFINED,((C_word*)t0)[2],t1,t2));}

/* ##net#select in k632 in k438 in k435 in k432 */
static C_word C_fcall f_661(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_foreign_fixnum_argumentp(t1);
return((C_word)stub115(C_SCHEME_UNDEFINED,t2));}

/* ##net#getsockport in k438 in k435 in k432 */
static C_word C_fcall f_605(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_foreign_fixnum_argumentp(t1);
return((C_word)stub90(C_SCHEME_UNDEFINED,t2));}

/* ##net#make-nonblocking in k438 in k435 in k432 */
static C_word C_fcall f_587(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_foreign_fixnum_argumentp(t1);
return((C_word)stub81(C_SCHEME_UNDEFINED,t2));}

/* ##net#shutdown in k438 in k435 in k432 */
static C_word C_fcall f_558(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_stack_check;
t3=(C_word)C_i_foreign_fixnum_argumentp(t1);
t4=(C_word)C_i_foreign_fixnum_argumentp(t2);
return((C_word)stub66(C_SCHEME_UNDEFINED,t3,t4));}

/* ##net#close in k438 in k435 in k432 */
static C_word C_fcall f_507(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_foreign_fixnum_argumentp(t1);
return((C_word)stub37(C_SCHEME_UNDEFINED,t2));}

/* ##net#socket in k438 in k435 in k432 */
static C_word C_fcall f_442(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t4=(C_word)C_i_foreign_fixnum_argumentp(t1);
t5=(C_word)C_i_foreign_fixnum_argumentp(t2);
t6=(C_word)C_i_foreign_fixnum_argumentp(t3);
return((C_word)stub3(C_SCHEME_UNDEFINED,t4,t5,t6));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[194] = {
{"topleveltcp.scm",(void*)C_tcp_toplevel},
{"f_434tcp.scm",(void*)f_434},
{"f_437tcp.scm",(void*)f_437},
{"f_440tcp.scm",(void*)f_440},
{"f_634tcp.scm",(void*)f_634},
{"f_1044tcp.scm",(void*)f_1044},
{"f_2110tcp.scm",(void*)f_2110},
{"f_2093tcp.scm",(void*)f_2093},
{"f_2101tcp.scm",(void*)f_2101},
{"f_2064tcp.scm",(void*)f_2064},
{"f_2091tcp.scm",(void*)f_2091},
{"f_2087tcp.scm",(void*)f_2087},
{"f_2077tcp.scm",(void*)f_2077},
{"f_2019tcp.scm",(void*)f_2019},
{"f_2023tcp.scm",(void*)f_2023},
{"f_2062tcp.scm",(void*)f_2062},
{"f_2058tcp.scm",(void*)f_2058},
{"f_2033tcp.scm",(void*)f_2033},
{"f_2051tcp.scm",(void*)f_2051},
{"f_2047tcp.scm",(void*)f_2047},
{"f_2040tcp.scm",(void*)f_2040},
{"f_1974tcp.scm",(void*)f_1974},
{"f_1978tcp.scm",(void*)f_1978},
{"f_1985tcp.scm",(void*)f_1985},
{"f_2017tcp.scm",(void*)f_2017},
{"f_2013tcp.scm",(void*)f_2013},
{"f_1988tcp.scm",(void*)f_1988},
{"f_1992tcp.scm",(void*)f_1992},
{"f_2006tcp.scm",(void*)f_2006},
{"f_2002tcp.scm",(void*)f_2002},
{"f_1995tcp.scm",(void*)f_1995},
{"f_1956tcp.scm",(void*)f_1956},
{"f_1960tcp.scm",(void*)f_1960},
{"f_1963tcp.scm",(void*)f_1963},
{"f_1946tcp.scm",(void*)f_1946},
{"f_1954tcp.scm",(void*)f_1954},
{"f_1728tcp.scm",(void*)f_1728},
{"f_1732tcp.scm",(void*)f_1732},
{"f_1922tcp.scm",(void*)f_1922},
{"f_1916tcp.scm",(void*)f_1916},
{"f_1908tcp.scm",(void*)f_1908},
{"f_1738tcp.scm",(void*)f_1738},
{"f_1744tcp.scm",(void*)f_1744},
{"f_1894tcp.scm",(void*)f_1894},
{"f_1905tcp.scm",(void*)f_1905},
{"f_1901tcp.scm",(void*)f_1901},
{"f_1770tcp.scm",(void*)f_1770},
{"f_1885tcp.scm",(void*)f_1885},
{"f_1773tcp.scm",(void*)f_1773},
{"f_1871tcp.scm",(void*)f_1871},
{"f_1882tcp.scm",(void*)f_1882},
{"f_1878tcp.scm",(void*)f_1878},
{"f_1776tcp.scm",(void*)f_1776},
{"f_1833tcp.scm",(void*)f_1833},
{"f_1840tcp.scm",(void*)f_1840},
{"f_1849tcp.scm",(void*)f_1849},
{"f_1779tcp.scm",(void*)f_1779},
{"f_1819tcp.scm",(void*)f_1819},
{"f_1815tcp.scm",(void*)f_1815},
{"f_1802tcp.scm",(void*)f_1802},
{"f_1798tcp.scm",(void*)f_1798},
{"f_1785tcp.scm",(void*)f_1785},
{"f_1749tcp.scm",(void*)f_1749},
{"f_1756tcp.scm",(void*)f_1756},
{"f_1767tcp.scm",(void*)f_1767},
{"f_1763tcp.scm",(void*)f_1763},
{"f_1674tcp.scm",(void*)f_1674},
{"f_1693tcp.scm",(void*)f_1693},
{"f_1704tcp.scm",(void*)f_1704},
{"f_1700tcp.scm",(void*)f_1700},
{"f_1684tcp.scm",(void*)f_1684},
{"f_1614tcp.scm",(void*)f_1614},
{"f_1626tcp.scm",(void*)f_1626},
{"f_1662tcp.scm",(void*)f_1662},
{"f_1665tcp.scm",(void*)f_1665},
{"f_1648tcp.scm",(void*)f_1648},
{"f_1659tcp.scm",(void*)f_1659},
{"f_1655tcp.scm",(void*)f_1655},
{"f_1639tcp.scm",(void*)f_1639},
{"f_1046tcp.scm",(void*)f_1046},
{"f_1601tcp.scm",(void*)f_1601},
{"f_1612tcp.scm",(void*)f_1612},
{"f_1608tcp.scm",(void*)f_1608},
{"f_1050tcp.scm",(void*)f_1050},
{"f_1053tcp.scm",(void*)f_1053},
{"f_1059tcp.scm",(void*)f_1059},
{"f_1062tcp.scm",(void*)f_1062},
{"f_1505tcp.scm",(void*)f_1505},
{"f_1511tcp.scm",(void*)f_1511},
{"f_1580tcp.scm",(void*)f_1580},
{"f_1523tcp.scm",(void*)f_1523},
{"f_1527tcp.scm",(void*)f_1527},
{"f_1537tcp.scm",(void*)f_1537},
{"f_1553tcp.scm",(void*)f_1553},
{"f_1440tcp.scm",(void*)f_1440},
{"f_1446tcp.scm",(void*)f_1446},
{"f_1494tcp.scm",(void*)f_1494},
{"f_1397tcp.scm",(void*)f_1397},
{"f_1411tcp.scm",(void*)f_1411},
{"f_1414tcp.scm",(void*)f_1414},
{"f_1425tcp.scm",(void*)f_1425},
{"f_1421tcp.scm",(void*)f_1421},
{"f_1362tcp.scm",(void*)f_1362},
{"f_1384tcp.scm",(void*)f_1384},
{"f_1395tcp.scm",(void*)f_1395},
{"f_1391tcp.scm",(void*)f_1391},
{"f_1375tcp.scm",(void*)f_1375},
{"f_1340tcp.scm",(void*)f_1340},
{"f_1344tcp.scm",(void*)f_1344},
{"f_1113tcp.scm",(void*)f_1113},
{"f_1288tcp.scm",(void*)f_1288},
{"f_1298tcp.scm",(void*)f_1298},
{"f_1225tcp.scm",(void*)f_1225},
{"f_1272tcp.scm",(void*)f_1272},
{"f_1275tcp.scm",(void*)f_1275},
{"f_1233tcp.scm",(void*)f_1233},
{"f_1242tcp.scm",(void*)f_1242},
{"f_1245tcp.scm",(void*)f_1245},
{"f_1256tcp.scm",(void*)f_1256},
{"f_1252tcp.scm",(void*)f_1252},
{"f_1324tcp.scm",(void*)f_1324},
{"f_1304tcp.scm",(void*)f_1304},
{"f_1309tcp.scm",(void*)f_1309},
{"f_1318tcp.scm",(void*)f_1318},
{"f_1190tcp.scm",(void*)f_1190},
{"f_1219tcp.scm",(void*)f_1219},
{"f_1215tcp.scm",(void*)f_1215},
{"f_1114tcp.scm",(void*)f_1114},
{"f_1124tcp.scm",(void*)f_1124},
{"f_1183tcp.scm",(void*)f_1183},
{"f_1155tcp.scm",(void*)f_1155},
{"f_1166tcp.scm",(void*)f_1166},
{"f_1162tcp.scm",(void*)f_1162},
{"f_1146tcp.scm",(void*)f_1146},
{"f_1149tcp.scm",(void*)f_1149},
{"f_1063tcp.scm",(void*)f_1063},
{"f_1069tcp.scm",(void*)f_1069},
{"f_1097tcp.scm",(void*)f_1097},
{"f_1108tcp.scm",(void*)f_1108},
{"f_1104tcp.scm",(void*)f_1104},
{"f_1088tcp.scm",(void*)f_1088},
{"f_1091tcp.scm",(void*)f_1091},
{"f_1009tcp.scm",(void*)f_1009},
{"f_1025tcp.scm",(void*)f_1025},
{"f_1036tcp.scm",(void*)f_1036},
{"f_1032tcp.scm",(void*)f_1032},
{"f_1000tcp.scm",(void*)f_1000},
{"f_902tcp.scm",(void*)f_902},
{"f_952tcp.scm",(void*)f_952},
{"f_947tcp.scm",(void*)f_947},
{"f_904tcp.scm",(void*)f_904},
{"f_916tcp.scm",(void*)f_916},
{"f_935tcp.scm",(void*)f_935},
{"f_946tcp.scm",(void*)f_946},
{"f_942tcp.scm",(void*)f_942},
{"f_926tcp.scm",(void*)f_926},
{"f_910tcp.scm",(void*)f_910},
{"f_897tcp.scm",(void*)f_897},
{"f_817tcp.scm",(void*)f_817},
{"f_886tcp.scm",(void*)f_886},
{"f_885tcp.scm",(void*)f_885},
{"f_870tcp.scm",(void*)f_870},
{"f_881tcp.scm",(void*)f_881},
{"f_877tcp.scm",(void*)f_877},
{"f_820tcp.scm",(void*)f_820},
{"f_823tcp.scm",(void*)f_823},
{"f_858tcp.scm",(void*)f_858},
{"f_826tcp.scm",(void*)f_826},
{"f_841tcp.scm",(void*)f_841},
{"f_852tcp.scm",(void*)f_852},
{"f_848tcp.scm",(void*)f_848},
{"f_832tcp.scm",(void*)f_832},
{"f_721tcp.scm",(void*)f_721},
{"f_730tcp.scm",(void*)f_730},
{"f_753tcp.scm",(void*)f_753},
{"f_757tcp.scm",(void*)f_757},
{"f_641tcp.scm",(void*)f_641},
{"f_645tcp.scm",(void*)f_645},
{"f_769tcp.scm",(void*)f_769},
{"f_780tcp.scm",(void*)f_780},
{"f_776tcp.scm",(void*)f_776},
{"f_763tcp.scm",(void*)f_763},
{"f_700tcp.scm",(void*)f_700},
{"f_706tcp.scm",(void*)f_706},
{"f_715tcp.scm",(void*)f_715},
{"f_675tcp.scm",(void*)f_675},
{"f_684tcp.scm",(void*)f_684},
{"f_661tcp.scm",(void*)f_661},
{"f_605tcp.scm",(void*)f_605},
{"f_587tcp.scm",(void*)f_587},
{"f_558tcp.scm",(void*)f_558},
{"f_507tcp.scm",(void*)f_507},
{"f_442tcp.scm",(void*)f_442},
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
