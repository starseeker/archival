/* Generated from srfi-13.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:15
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: srfi-13.scm -output-file srfi-13.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: srfi_13
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_srfi_14_toplevel)
C_externimport void C_ccall C_srfi_14_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[539];


C_noret_decl(C_srfi_13_toplevel)
C_externexport void C_ccall C_srfi_13_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1436)
static void C_ccall f_1436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1439)
static void C_ccall f_1439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7420)
static void C_ccall f_7420(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_7420)
static void C_ccall f_7420r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7532)
static void C_ccall f_7532(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7502)
static void C_ccall f_7502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7485)
static void C_ccall f_7485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7440)
static void C_fcall f_7440(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7446)
static void C_fcall f_7446(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7468)
static void C_ccall f_7468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7347)
static void C_fcall f_7347(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_7418)
static void C_ccall f_7418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7360)
static void C_ccall f_7360(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7378)
static void C_fcall f_7378(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7403)
static void C_ccall f_7403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7207)
static void C_ccall f_7207(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_7207)
static void C_ccall f_7207r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_7260)
static void C_ccall f_7260(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7273)
static void C_ccall f_7273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7333)
static void C_ccall f_7333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7337)
static void C_ccall f_7337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7326)
static void C_ccall f_7326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7322)
static void C_ccall f_7322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7216)
static void C_ccall f_7216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7238)
static void C_ccall f_7238(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7228)
static void C_ccall f_7228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7069)
static void C_ccall f_7069(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_7069)
static void C_ccall f_7069r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_7122)
static void C_ccall f_7122(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7192)
static void C_ccall f_7192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7196)
static void C_ccall f_7196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7185)
static void C_ccall f_7185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7188)
static void C_ccall f_7188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7182)
static void C_ccall f_7182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7178)
static void C_ccall f_7178(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7078)
static void C_ccall f_7078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7100)
static void C_ccall f_7100(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7090)
static void C_ccall f_7090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6987)
static void C_ccall f_6987(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6987)
static void C_ccall f_6987r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_7005)
static void C_ccall f_7005(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7011)
static void C_fcall f_7011(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7015)
static void C_ccall f_7015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7024)
static void C_ccall f_7024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7049)
static void C_ccall f_7049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7038)
static void C_ccall f_7038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6999)
static void C_ccall f_6999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6936)
static void C_ccall f_6936(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_6936)
static void C_ccall f_6936r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_6940)
static void C_ccall f_6940(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6951)
static void C_ccall f_6951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6964)
static void C_ccall f_6964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6967)
static void C_ccall f_6967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6970)
static void C_ccall f_6970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6973)
static void C_ccall f_6973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6945)
static void C_ccall f_6945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6893)
static void C_fcall f_6893(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6897)
static void C_ccall f_6897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6900)
static void C_ccall f_6900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6905)
static void C_fcall f_6905(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6927)
static void C_ccall f_6927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6903)
static void C_ccall f_6903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6764)
static void C_ccall f_6764(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6764)
static void C_ccall f_6764r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6791)
static void C_fcall f_6791(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6841)
static void C_fcall f_6841(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6676)
static void C_ccall f_6676(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6676)
static void C_ccall f_6676r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6706)
static C_word C_fcall f_6706(C_word t0,C_word t1);
C_noret_decl(f_6603)
static void C_ccall f_6603(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6610)
static void C_ccall f_6610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6615)
static void C_fcall f_6615(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6631)
static void C_ccall f_6631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6613)
static void C_ccall f_6613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6644)
static C_word C_fcall f_6644(C_word t0,C_word t1);
C_noret_decl(f_6501)
static void C_ccall f_6501(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6507)
static void C_fcall f_6507(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6561)
static void C_ccall f_6561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6566)
static void C_fcall f_6566(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6582)
static void C_ccall f_6582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6564)
static void C_ccall f_6564(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6495)
static void C_ccall f_6495(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6495)
static void C_ccall f_6495r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6449)
static void C_ccall f_6449(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6449)
static void C_ccall f_6449r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6461)
static void C_ccall f_6461(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6471)
static void C_fcall f_6471(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6455)
static void C_ccall f_6455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6394)
static void C_ccall f_6394(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6394)
static void C_ccall f_6394r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6406)
static void C_ccall f_6406(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6416)
static C_word C_fcall f_6416(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_6400)
static void C_ccall f_6400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6339)
static void C_ccall f_6339(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6339)
static void C_ccall f_6339r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6351)
static void C_ccall f_6351(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6358)
static void C_ccall f_6358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6367)
static C_word C_fcall f_6367(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_6345)
static void C_ccall f_6345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6336)
static void C_ccall f_6336(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6215)
static void C_ccall f_6215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_6215)
static void C_ccall f_6215r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_6239)
static void C_ccall f_6239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6248)
static void C_fcall f_6248(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6280)
static void C_fcall f_6280(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6287)
static void C_ccall f_6287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6278)
static void C_ccall f_6278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6233)
static void C_ccall f_6233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6177)
static void C_ccall f_6177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_6183)
static void C_fcall f_6183(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6190)
static void C_ccall f_6190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6042)
static void C_ccall f_6042(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6042)
static void C_ccall f_6042r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6060)
static void C_ccall f_6060(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6067)
static void C_ccall f_6067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6084)
static void C_fcall f_6084(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6099)
static void C_fcall f_6099(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6132)
static void C_ccall f_6132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6126)
static void C_ccall f_6126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6070)
static void C_ccall f_6070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6054)
static void C_ccall f_6054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5944)
static void C_ccall f_5944(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_5951)
static void C_ccall f_5951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5960)
static void C_fcall f_5960(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5982)
static void C_ccall f_5982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5882)
static void C_ccall f_5882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5882)
static void C_ccall f_5882r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5894)
static void C_ccall f_5894(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5906)
static void C_ccall f_5906(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5918)
static void C_fcall f_5918(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5931)
static void C_ccall f_5931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5900)
static void C_ccall f_5900(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5888)
static void C_ccall f_5888(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5820)
static void C_ccall f_5820(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5820)
static void C_ccall f_5820r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5832)
static void C_ccall f_5832(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5844)
static void C_ccall f_5844(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5856)
static void C_fcall f_5856(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5869)
static void C_ccall f_5869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5838)
static void C_ccall f_5838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5826)
static void C_ccall f_5826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5739)
static void C_fcall f_5739(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5789)
static C_word C_fcall f_5789(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5751)
static C_word C_fcall f_5751(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5707)
static void C_ccall f_5707(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_5707)
static void C_ccall f_5707r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_5719)
static void C_ccall f_5719(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5726)
static void C_ccall f_5726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5713)
static void C_ccall f_5713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5666)
static void C_ccall f_5666(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5666)
static void C_ccall f_5666r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5678)
static void C_ccall f_5678(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5688)
static C_word C_fcall f_5688(C_word t0,C_word t1);
C_noret_decl(f_5672)
static void C_ccall f_5672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5531)
static void C_ccall f_5531(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5531)
static void C_ccall f_5531r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5543)
static void C_ccall f_5543(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5589)
static void C_ccall f_5589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5633)
static void C_fcall f_5633(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5654)
static void C_ccall f_5654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5594)
static void C_fcall f_5594(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5615)
static void C_ccall f_5615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5555)
static C_word C_fcall f_5555(C_word t0,C_word t1,C_word t2);
C_noret_decl(f_5537)
static void C_ccall f_5537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5396)
static void C_ccall f_5396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5396)
static void C_ccall f_5396r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5408)
static void C_ccall f_5408(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5454)
static void C_ccall f_5454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5502)
static void C_fcall f_5502(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5515)
static void C_ccall f_5515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5463)
static void C_fcall f_5463(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5476)
static void C_ccall f_5476(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5424)
static C_word C_fcall f_5424(C_word t0,C_word t1);
C_noret_decl(f_5402)
static void C_ccall f_5402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5285)
static void C_ccall f_5285(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5327)
static void C_ccall f_5327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5367)
static void C_fcall f_5367(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5380)
static void C_ccall f_5380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5332)
static void C_fcall f_5332(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5345)
static void C_ccall f_5345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5297)
static C_word C_fcall f_5297(C_word t0,C_word t1);
C_noret_decl(f_5279)
static void C_ccall f_5279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5138)
static void C_ccall f_5138(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5138)
static void C_ccall f_5138r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5150)
static void C_ccall f_5150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5196)
static void C_ccall f_5196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5244)
static void C_fcall f_5244(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5257)
static void C_ccall f_5257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5205)
static void C_fcall f_5205(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5218)
static void C_ccall f_5218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5166)
static C_word C_fcall f_5166(C_word t0,C_word t1);
C_noret_decl(f_5144)
static void C_ccall f_5144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5015)
static void C_ccall f_5015(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_5015)
static void C_ccall f_5015r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5027)
static void C_ccall f_5027(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5069)
static void C_ccall f_5069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5109)
static void C_fcall f_5109(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5122)
static void C_ccall f_5122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5074)
static void C_fcall f_5074(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5087)
static void C_ccall f_5087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5039)
static C_word C_fcall f_5039(C_word t0,C_word t1);
C_noret_decl(f_5021)
static void C_ccall f_5021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4907)
static void C_ccall f_4907(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4907)
static void C_ccall f_4907r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4919)
static void C_ccall f_4919(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5001)
static void C_ccall f_5001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4962)
static void C_ccall f_4962(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4988)
static void C_ccall f_4988(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4995)
static void C_ccall f_4995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4965)
static void C_ccall f_4965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4968)
static void C_ccall f_4968(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4973)
static void C_ccall f_4973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4980)
static void C_ccall f_4980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4971)
static void C_ccall f_4971(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4932)
static void C_ccall f_4932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4946)
static void C_ccall f_4946(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4953)
static void C_ccall f_4953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4935)
static void C_ccall f_4935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4913)
static void C_ccall f_4913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4799)
static void C_ccall f_4799(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4799)
static void C_ccall f_4799r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4811)
static void C_ccall f_4811(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4893)
static void C_ccall f_4893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4854)
static void C_ccall f_4854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4887)
static void C_ccall f_4887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4857)
static void C_ccall f_4857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4860)
static void C_ccall f_4860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4865)
static void C_ccall f_4865(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4872)
static void C_ccall f_4872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4863)
static void C_ccall f_4863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4824)
static void C_ccall f_4824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4838)
static void C_ccall f_4838(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4845)
static void C_ccall f_4845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4827)
static void C_ccall f_4827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4805)
static void C_ccall f_4805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4737)
static void C_ccall f_4737(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4737)
static void C_ccall f_4737r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4758)
static void C_ccall f_4758(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4778)
static void C_ccall f_4778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4781)
static void C_ccall f_4781(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4752)
static void C_ccall f_4752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4679)
static void C_ccall f_4679(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4679)
static void C_ccall f_4679r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4700)
static void C_ccall f_4700(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4720)
static void C_ccall f_4720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4723)
static void C_ccall f_4723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4694)
static void C_ccall f_4694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4629)
static void C_ccall f_4629(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4629)
static void C_ccall f_4629r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4647)
static void C_ccall f_4647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4651)
static void C_ccall f_4651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4665)
static void C_ccall f_4665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4641)
static void C_ccall f_4641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4583)
static void C_ccall f_4583(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4583)
static void C_ccall f_4583r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4601)
static void C_ccall f_4601(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4605)
static void C_ccall f_4605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4595)
static void C_ccall f_4595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4541)
static void C_ccall f_4541(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4541)
static void C_ccall f_4541r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4559)
static void C_ccall f_4559(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4563)
static void C_ccall f_4563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4553)
static void C_ccall f_4553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4525)
static void C_ccall f_4525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4513)
static void C_ccall f_4513(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4497)
static void C_ccall f_4497(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4488)
static void C_ccall f_4488(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4463)
static void C_ccall f_4463r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4475)
static void C_ccall f_4475(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4479)
static void C_ccall f_4479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4482)
static void C_ccall f_4482(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4469)
static void C_ccall f_4469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4445)
static void C_ccall f_4445(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4445)
static void C_ccall f_4445r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4457)
static void C_ccall f_4457(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4451)
static void C_ccall f_4451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4386)
static void C_fcall f_4386(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4392)
static void C_fcall f_4392(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4439)
static void C_ccall f_4439(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4396)
static void C_ccall f_4396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4426)
static void C_ccall f_4426(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4408)
static void C_ccall f_4408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4414)
static void C_ccall f_4414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4368)
static void C_ccall f_4368(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4368)
static void C_ccall f_4368r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4380)
static void C_ccall f_4380(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4374)
static void C_ccall f_4374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4350)
static void C_ccall f_4350r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4362)
static void C_ccall f_4362(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4356)
static void C_ccall f_4356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4332)
static void C_ccall f_4332(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4332)
static void C_ccall f_4332r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4344)
static void C_ccall f_4344(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4338)
static void C_ccall f_4338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4314)
static void C_ccall f_4314r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4326)
static void C_ccall f_4326(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4320)
static void C_ccall f_4320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4268)
static void C_fcall f_4268(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4282)
static void C_ccall f_4282(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4288)
static void C_ccall f_4288(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4276)
static void C_ccall f_4276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4212)
static void C_ccall f_4212r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4222)
static void C_fcall f_4222(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4236)
static void C_ccall f_4236(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4230)
static void C_ccall f_4230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4140)
static void C_fcall f_4140(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4158)
static void C_fcall f_4158(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4191)
static void C_ccall f_4191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4193)
static C_word C_fcall f_4193(C_word t0,C_word t1);
C_noret_decl(f_4142)
static void C_fcall f_4142(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4092)
static void C_ccall f_4092(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4092)
static void C_ccall f_4092r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4104)
static void C_ccall f_4104(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4116)
static void C_ccall f_4116(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4123)
static void C_fcall f_4123(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4110)
static void C_ccall f_4110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4098)
static void C_ccall f_4098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4044)
static void C_ccall f_4044(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4044)
static void C_ccall f_4044r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4056)
static void C_ccall f_4056(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4068)
static void C_ccall f_4068(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4075)
static void C_fcall f_4075(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4083)
static void C_ccall f_4083(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4062)
static void C_ccall f_4062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4050)
static void C_ccall f_4050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3993)
static void C_ccall f_3993(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3993)
static void C_ccall f_3993r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4005)
static void C_ccall f_4005(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4017)
static void C_ccall f_4017(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4024)
static void C_fcall f_4024(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4035)
static void C_ccall f_4035(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4032)
static void C_ccall f_4032(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4011)
static void C_ccall f_4011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3999)
static void C_ccall f_3999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3942)
static void C_ccall f_3942r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3954)
static void C_ccall f_3954(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3966)
static void C_ccall f_3966(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3973)
static void C_fcall f_3973(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3984)
static void C_ccall f_3984(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3981)
static void C_ccall f_3981(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3960)
static void C_ccall f_3960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3948)
static void C_ccall f_3948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3875)
static void C_ccall f_3875(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3875)
static void C_ccall f_3875r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3899)
static void C_ccall f_3899(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3922)
static void C_fcall f_3922(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3917)
static void C_ccall f_3917(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3893)
static void C_ccall f_3893(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3881)
static void C_ccall f_3881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3813)
static void C_ccall f_3813r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3825)
static void C_ccall f_3825(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3837)
static void C_ccall f_3837(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3847)
static void C_fcall f_3847(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3858)
static void C_ccall f_3858(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3855)
static void C_ccall f_3855(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3831)
static void C_ccall f_3831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3819)
static void C_ccall f_3819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3765)
static void C_ccall f_3765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3765)
static void C_ccall f_3765r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3777)
static void C_ccall f_3777(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3789)
static void C_ccall f_3789(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3796)
static void C_fcall f_3796(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3804)
static void C_ccall f_3804(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3783)
static void C_ccall f_3783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3771)
static void C_ccall f_3771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3717)
static void C_ccall f_3717(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3717)
static void C_ccall f_3717r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3729)
static void C_ccall f_3729(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3741)
static void C_ccall f_3741(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3748)
static void C_fcall f_3748(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3756)
static void C_ccall f_3756(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3735)
static void C_ccall f_3735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3723)
static void C_ccall f_3723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3666)
static void C_ccall f_3666(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3666)
static void C_ccall f_3666r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3678)
static void C_ccall f_3678(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3690)
static void C_ccall f_3690(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3697)
static void C_fcall f_3697(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3708)
static void C_ccall f_3708(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3705)
static void C_ccall f_3705(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3684)
static void C_ccall f_3684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3672)
static void C_ccall f_3672(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3615)
static void C_ccall f_3615(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3615)
static void C_ccall f_3615r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3627)
static void C_ccall f_3627(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3639)
static void C_ccall f_3639(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3646)
static void C_fcall f_3646(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3654)
static void C_ccall f_3654(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3633)
static void C_ccall f_3633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3548)
static void C_ccall f_3548r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3560)
static void C_ccall f_3560(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3572)
static void C_ccall f_3572(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3595)
static void C_fcall f_3595(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3590)
static void C_ccall f_3590(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3566)
static void C_ccall f_3566(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3486)
static void C_ccall f_3486r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3498)
static void C_ccall f_3498(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3510)
static void C_ccall f_3510(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3520)
static void C_fcall f_3520(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3531)
static void C_ccall f_3531(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3528)
static void C_ccall f_3528(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3504)
static void C_ccall f_3504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3492)
static void C_ccall f_3492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t8) C_noret;
C_noret_decl(f_3468)
static void C_ccall f_3468(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3474)
static void C_ccall f_3474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3462)
static void C_ccall f_3462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3426)
static void C_ccall f_3426(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...) C_noret;
C_noret_decl(f_3426)
static void C_ccall f_3426r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t8) C_noret;
C_noret_decl(f_3438)
static void C_ccall f_3438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3450)
static void C_ccall f_3450(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3444)
static void C_ccall f_3444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3432)
static void C_ccall f_3432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3364)
static void C_fcall f_3364(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3408)
static void C_ccall f_3408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3399)
static void C_fcall f_3399(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3302)
static void C_fcall f_3302(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9) C_noret;
C_noret_decl(f_3312)
static void C_ccall f_3312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3337)
static void C_fcall f_3337(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3180)
static void C_ccall f_3180(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3180)
static void C_ccall f_3180r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3192)
static void C_ccall f_3192(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3204)
static void C_ccall f_3204(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3296)
static void C_ccall f_3296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3186)
static void C_ccall f_3186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3162)
static void C_ccall f_3162(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3174)
static void C_ccall f_3174(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3273)
static void C_ccall f_3273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3156)
static void C_ccall f_3156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3144)
static void C_ccall f_3144(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3250)
static void C_ccall f_3250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3138)
static void C_ccall f_3138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3090)
static void C_ccall f_3090r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3114)
static void C_ccall f_3114(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3227)
static void C_ccall f_3227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3108)
static void C_ccall f_3108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3096)
static void C_ccall f_3096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3084)
static void C_ccall f_3084(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3078)
static void C_ccall f_3078(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3066)
static void C_ccall f_3066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3030)
static void C_ccall f_3030r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3042)
static void C_ccall f_3042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3048)
static void C_ccall f_3048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3036)
static void C_ccall f_3036(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_3000)
static void C_ccall f_3000r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_3012)
static void C_ccall f_3012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2970)
static void C_ccall f_2970r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2982)
static void C_ccall f_2982(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2994)
static void C_ccall f_2994(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2988)
static void C_ccall f_2988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2976)
static void C_ccall f_2976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2885)
static void C_fcall f_2885(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2898)
static void C_fcall f_2898(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2911)
static void C_fcall f_2911(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2921)
static void C_fcall f_2921(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2812)
static void C_fcall f_2812(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2816)
static void C_ccall f_2816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2825)
static void C_fcall f_2825(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2830)
static void C_fcall f_2830(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2861)
static void C_ccall f_2861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2840)
static void C_fcall f_2840(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2727)
static void C_fcall f_2727(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2731)
static void C_ccall f_2731(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2740)
static void C_fcall f_2740(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2753)
static void C_fcall f_2753(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2763)
static void C_fcall f_2763(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2654)
static void C_fcall f_2654(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_2658)
static void C_ccall f_2658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2667)
static void C_fcall f_2667(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2672)
static void C_fcall f_2672(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2682)
static void C_fcall f_2682(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2615)
static void C_ccall f_2615(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2622)
static void C_ccall f_2622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2631)
static void C_fcall f_2631(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2485)
static void C_ccall f_2485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2485)
static void C_ccall f_2485r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2497)
static void C_ccall f_2497(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2539)
static void C_ccall f_2539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2585)
static void C_fcall f_2585(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2604)
static void C_ccall f_2604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2544)
static void C_fcall f_2544(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2554)
static void C_ccall f_2554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2509)
static C_word C_fcall f_2509(C_word t0,C_word t1);
C_noret_decl(f_2491)
static void C_ccall f_2491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2355)
static void C_ccall f_2355(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2355)
static void C_ccall f_2355r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2409)
static void C_ccall f_2409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2455)
static void C_fcall f_2455(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2414)
static void C_fcall f_2414(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2379)
static C_word C_fcall f_2379(C_word t0,C_word t1);
C_noret_decl(f_2361)
static void C_ccall f_2361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2318)
static void C_ccall f_2318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2318)
static void C_ccall f_2318r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2336)
static void C_fcall f_2336(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2346)
static void C_ccall f_2346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2324)
static void C_ccall f_2324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2277)
static void C_ccall f_2277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2277)
static void C_ccall f_2277r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2295)
static void C_fcall f_2295(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2283)
static void C_ccall f_2283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2088)
static void C_ccall f_2088(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_2088)
static void C_ccall f_2088r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2116)
static void C_fcall f_2116(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_2122)
static void C_fcall f_2122(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2246)
static void C_ccall f_2246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2132)
static void C_ccall f_2132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2135)
static void C_ccall f_2135(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2156)
static void C_ccall f_2156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2200)
static void C_ccall f_2200(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2209)
static void C_fcall f_2209(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2228)
static void C_ccall f_2228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2203)
static void C_ccall f_2203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1906)
static void C_ccall f_1906(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_1906)
static void C_ccall f_1906r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_1932)
static void C_ccall f_1932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1934)
static void C_fcall f_1934(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_1940)
static void C_fcall f_1940(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2057)
static void C_ccall f_2057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1950)
static void C_ccall f_1950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1953)
static void C_ccall f_1953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1975)
static void C_ccall f_1975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1978)
static void C_ccall f_1978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1995)
static void C_ccall f_1995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2007)
static void C_ccall f_2007(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2010)
static void C_ccall f_2010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2016)
static void C_ccall f_2016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2024)
static void C_fcall f_2024(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2046)
static void C_ccall f_2046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2019)
static void C_ccall f_2019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2022)
static void C_ccall f_2022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2070)
static void C_ccall f_2070(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1860)
static void C_ccall f_1860(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_1860)
static void C_ccall f_1860r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1872)
static void C_ccall f_1872(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1882)
static void C_fcall f_1882(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1896)
static void C_ccall f_1896(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1866)
static void C_ccall f_1866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1818)
static void C_ccall f_1818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_1818)
static void C_ccall f_1818r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1830)
static void C_ccall f_1830(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1836)
static void C_fcall f_1836(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1824)
static void C_ccall f_1824(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1781)
static void C_fcall f_1781(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1791)
static void C_fcall f_1791(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1812)
static void C_ccall f_1812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1775)
static void C_ccall f_1775(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1712)
static void C_fcall f_1712(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1719)
static void C_ccall f_1719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1732)
static void C_fcall f_1732(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1757)
static void C_ccall f_1757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1722)
static void C_ccall f_1722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1694)
static void C_ccall f_1694(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1694)
static void C_ccall f_1694r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1706)
static void C_ccall f_1706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1700)
static void C_ccall f_1700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1676)
static void C_ccall f_1676(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1676)
static void C_ccall f_1676r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1688)
static void C_ccall f_1688(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1682)
static void C_ccall f_1682(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1654)
static void C_fcall f_1654(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1661)
static void C_fcall f_1661(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1630)
static void C_ccall f_1630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1601)
static void C_ccall f_1601(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_1615)
static void C_ccall f_1615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1561)
static void C_ccall f_1561(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1534)
static void C_ccall f_1534(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1546)
static void C_ccall f_1546(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1540)
static void C_ccall f_1540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1471)
static void C_ccall f_1471(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_7440)
static void C_fcall trf_7440(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7440(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7440(t0,t1,t2,t3);}

C_noret_decl(trf_7446)
static void C_fcall trf_7446(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7446(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7446(t0,t1,t2);}

C_noret_decl(trf_7347)
static void C_fcall trf_7347(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7347(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_7347(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_7378)
static void C_fcall trf_7378(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7378(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7378(t0,t1,t2,t3);}

C_noret_decl(trf_7011)
static void C_fcall trf_7011(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7011(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7011(t0,t1,t2,t3);}

C_noret_decl(trf_6893)
static void C_fcall trf_6893(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6893(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6893(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6905)
static void C_fcall trf_6905(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6905(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6905(t0,t1,t2,t3);}

C_noret_decl(trf_6791)
static void C_fcall trf_6791(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6791(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6791(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6841)
static void C_fcall trf_6841(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6841(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6841(t0,t1);}

C_noret_decl(trf_6615)
static void C_fcall trf_6615(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6615(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6615(t0,t1,t2,t3);}

C_noret_decl(trf_6507)
static void C_fcall trf_6507(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6507(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6507(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6566)
static void C_fcall trf_6566(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6566(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6566(t0,t1,t2,t3);}

C_noret_decl(trf_6471)
static void C_fcall trf_6471(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6471(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6471(t0,t1,t2,t3);}

C_noret_decl(trf_6248)
static void C_fcall trf_6248(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6248(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6248(t0,t1,t2,t3);}

C_noret_decl(trf_6280)
static void C_fcall trf_6280(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6280(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6280(t0,t1,t2);}

C_noret_decl(trf_6183)
static void C_fcall trf_6183(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6183(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6183(t0,t1,t2);}

C_noret_decl(trf_6084)
static void C_fcall trf_6084(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6084(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6084(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6099)
static void C_fcall trf_6099(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6099(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6099(t0,t1,t2);}

C_noret_decl(trf_5960)
static void C_fcall trf_5960(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5960(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5960(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5918)
static void C_fcall trf_5918(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5918(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5918(t0,t1,t2);}

C_noret_decl(trf_5856)
static void C_fcall trf_5856(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5856(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5856(t0,t1,t2);}

C_noret_decl(trf_5739)
static void C_fcall trf_5739(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5739(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5739(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5633)
static void C_fcall trf_5633(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5633(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5633(t0,t1,t2,t3);}

C_noret_decl(trf_5594)
static void C_fcall trf_5594(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5594(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5594(t0,t1,t2,t3);}

C_noret_decl(trf_5502)
static void C_fcall trf_5502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5502(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5502(t0,t1,t2);}

C_noret_decl(trf_5463)
static void C_fcall trf_5463(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5463(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5463(t0,t1,t2);}

C_noret_decl(trf_5367)
static void C_fcall trf_5367(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5367(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5367(t0,t1,t2);}

C_noret_decl(trf_5332)
static void C_fcall trf_5332(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5332(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5332(t0,t1,t2);}

C_noret_decl(trf_5244)
static void C_fcall trf_5244(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5244(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5244(t0,t1,t2);}

C_noret_decl(trf_5205)
static void C_fcall trf_5205(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5205(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5205(t0,t1,t2);}

C_noret_decl(trf_5109)
static void C_fcall trf_5109(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5109(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5109(t0,t1,t2);}

C_noret_decl(trf_5074)
static void C_fcall trf_5074(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5074(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5074(t0,t1,t2);}

C_noret_decl(trf_4386)
static void C_fcall trf_4386(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4386(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4386(t0,t1,t2,t3);}

C_noret_decl(trf_4392)
static void C_fcall trf_4392(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4392(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4392(t0,t1,t2);}

C_noret_decl(trf_4268)
static void C_fcall trf_4268(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4268(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4268(t0,t1);}

C_noret_decl(trf_4222)
static void C_fcall trf_4222(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4222(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4222(t0,t1);}

C_noret_decl(trf_4140)
static void C_fcall trf_4140(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4140(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4140(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_4158)
static void C_fcall trf_4158(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4158(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4158(t0,t1,t2,t3);}

C_noret_decl(trf_4142)
static void C_fcall trf_4142(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4142(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4142(t0,t1,t2,t3);}

C_noret_decl(trf_4123)
static void C_fcall trf_4123(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4123(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4123(t0,t1);}

C_noret_decl(trf_4075)
static void C_fcall trf_4075(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4075(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4075(t0,t1);}

C_noret_decl(trf_4024)
static void C_fcall trf_4024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4024(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4024(t0,t1);}

C_noret_decl(trf_3973)
static void C_fcall trf_3973(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3973(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3973(t0,t1);}

C_noret_decl(trf_3922)
static void C_fcall trf_3922(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3922(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3922(t0,t1);}

C_noret_decl(trf_3847)
static void C_fcall trf_3847(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3847(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3847(t0,t1);}

C_noret_decl(trf_3796)
static void C_fcall trf_3796(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3796(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3796(t0,t1);}

C_noret_decl(trf_3748)
static void C_fcall trf_3748(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3748(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3748(t0,t1);}

C_noret_decl(trf_3697)
static void C_fcall trf_3697(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3697(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3697(t0,t1);}

C_noret_decl(trf_3646)
static void C_fcall trf_3646(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3646(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3646(t0,t1);}

C_noret_decl(trf_3595)
static void C_fcall trf_3595(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3595(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3595(t0,t1);}

C_noret_decl(trf_3520)
static void C_fcall trf_3520(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3520(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3520(t0,t1);}

C_noret_decl(trf_3364)
static void C_fcall trf_3364(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3364(void *dummy){
C_word t9=C_pick(0);
C_word t8=C_pick(1);
C_word t7=C_pick(2);
C_word t6=C_pick(3);
C_word t5=C_pick(4);
C_word t4=C_pick(5);
C_word t3=C_pick(6);
C_word t2=C_pick(7);
C_word t1=C_pick(8);
C_word t0=C_pick(9);
C_adjust_stack(-10);
f_3364(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

C_noret_decl(trf_3399)
static void C_fcall trf_3399(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3399(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3399(t0,t1);}

C_noret_decl(trf_3302)
static void C_fcall trf_3302(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3302(void *dummy){
C_word t9=C_pick(0);
C_word t8=C_pick(1);
C_word t7=C_pick(2);
C_word t6=C_pick(3);
C_word t5=C_pick(4);
C_word t4=C_pick(5);
C_word t3=C_pick(6);
C_word t2=C_pick(7);
C_word t1=C_pick(8);
C_word t0=C_pick(9);
C_adjust_stack(-10);
f_3302(t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

C_noret_decl(trf_3337)
static void C_fcall trf_3337(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3337(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3337(t0,t1);}

C_noret_decl(trf_2885)
static void C_fcall trf_2885(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2885(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2885(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2898)
static void C_fcall trf_2898(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2898(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2898(t0,t1);}

C_noret_decl(trf_2911)
static void C_fcall trf_2911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2911(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2911(t0,t1,t2,t3);}

C_noret_decl(trf_2921)
static void C_fcall trf_2921(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2921(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2921(t0,t1);}

C_noret_decl(trf_2812)
static void C_fcall trf_2812(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2812(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2812(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2825)
static void C_fcall trf_2825(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2825(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2825(t0,t1);}

C_noret_decl(trf_2830)
static void C_fcall trf_2830(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2830(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2830(t0,t1,t2,t3);}

C_noret_decl(trf_2840)
static void C_fcall trf_2840(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2840(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2840(t0,t1);}

C_noret_decl(trf_2727)
static void C_fcall trf_2727(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2727(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2727(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2740)
static void C_fcall trf_2740(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2740(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2740(t0,t1);}

C_noret_decl(trf_2753)
static void C_fcall trf_2753(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2753(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2753(t0,t1,t2,t3);}

C_noret_decl(trf_2763)
static void C_fcall trf_2763(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2763(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2763(t0,t1);}

C_noret_decl(trf_2654)
static void C_fcall trf_2654(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2654(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_2654(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_2667)
static void C_fcall trf_2667(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2667(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2667(t0,t1);}

C_noret_decl(trf_2672)
static void C_fcall trf_2672(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2672(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2672(t0,t1,t2,t3);}

C_noret_decl(trf_2682)
static void C_fcall trf_2682(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2682(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2682(t0,t1);}

C_noret_decl(trf_2631)
static void C_fcall trf_2631(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2631(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2631(t0,t1,t2);}

C_noret_decl(trf_2585)
static void C_fcall trf_2585(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2585(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2585(t0,t1,t2);}

C_noret_decl(trf_2544)
static void C_fcall trf_2544(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2544(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2544(t0,t1,t2);}

C_noret_decl(trf_2455)
static void C_fcall trf_2455(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2455(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2455(t0,t1,t2);}

C_noret_decl(trf_2414)
static void C_fcall trf_2414(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2414(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2414(t0,t1,t2);}

C_noret_decl(trf_2336)
static void C_fcall trf_2336(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2336(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2336(t0,t1,t2);}

C_noret_decl(trf_2295)
static void C_fcall trf_2295(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2295(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2295(t0,t1,t2);}

C_noret_decl(trf_2116)
static void C_fcall trf_2116(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2116(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_2116(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_2122)
static void C_fcall trf_2122(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2122(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2122(t0,t1,t2,t3);}

C_noret_decl(trf_2209)
static void C_fcall trf_2209(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2209(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2209(t0,t1,t2,t3);}

C_noret_decl(trf_1934)
static void C_fcall trf_1934(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1934(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_1934(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_1940)
static void C_fcall trf_1940(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1940(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1940(t0,t1,t2,t3);}

C_noret_decl(trf_2024)
static void C_fcall trf_2024(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2024(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2024(t0,t1,t2,t3);}

C_noret_decl(trf_1882)
static void C_fcall trf_1882(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1882(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1882(t0,t1,t2,t3);}

C_noret_decl(trf_1836)
static void C_fcall trf_1836(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1836(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1836(t0,t1,t2,t3);}

C_noret_decl(trf_1781)
static void C_fcall trf_1781(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1781(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1781(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1791)
static void C_fcall trf_1791(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1791(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1791(t0,t1,t2);}

C_noret_decl(trf_1712)
static void C_fcall trf_1712(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1712(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1712(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1732)
static void C_fcall trf_1732(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1732(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1732(t0,t1,t2,t3);}

C_noret_decl(trf_1654)
static void C_fcall trf_1654(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1654(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1654(t0,t1,t2,t3);}

C_noret_decl(trf_1661)
static void C_fcall trf_1661(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1661(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1661(t0,t1);}

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

C_noret_decl(tr8)
static void C_fcall tr8(C_proc8 k) C_regparm C_noret;
C_regparm static void C_fcall tr8(C_proc8 k){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
(k)(8,t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr4)
static void C_fcall tr4(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4(C_proc4 k){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
(k)(4,t0,t1,t2,t3);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

C_noret_decl(tr7r)
static void C_fcall tr7r(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7r(C_proc7 k){
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
a=C_alloc(n*3);
t7=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6,t7);}

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

C_noret_decl(tr6r)
static void C_fcall tr6r(C_proc6 k) C_regparm C_noret;
C_regparm static void C_fcall tr6r(C_proc6 k){
int n;
C_word *a,t6;
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
n=C_rest_count(0);
a=C_alloc(n*3);
t6=C_restore_rest(a,n);
(k)(t0,t1,t2,t3,t4,t5,t6);}

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
C_srfi_13_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_13_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_13_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1090)){
C_save(t1);
C_rereclaim2(1090*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,539);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[2]=C_h_intern(&lf[2],22,"string-parse-start+end");
lf[3]=C_h_intern(&lf[3],9,"\003syserror");
lf[4]=C_static_string(C_heaptop,26,"Illegal substring END spec");
lf[5]=C_static_lambda_info(C_heaptop,7,"(a1470)");
lf[6]=C_static_string(C_heaptop,32,"Illegal substring START/END spec");
lf[7]=C_static_lambda_info(C_heaptop,20,"(a1506 end10 args11)");
lf[8]=C_static_string(C_heaptop,28,"Illegal substring START spec");
lf[9]=C_static_lambda_info(C_heaptop,39,"(string-parse-start+end proc2 s3 args4)");
lf[10]=C_h_intern(&lf[10],28,"string-parse-final-start+end");
lf[11]=C_static_lambda_info(C_heaptop,7,"(a1539)");
lf[12]=C_static_string(C_heaptop,28,"Extra arguments to procedure");
lf[13]=C_static_lambda_info(C_heaptop,28,"(a1545 rest16 start17 end18)");
lf[14]=C_static_lambda_info(C_heaptop,48,"(string-parse-final-start+end proc13 s14 args15)");
lf[15]=C_h_intern(&lf[15],18,"substring-spec-ok\077");
lf[16]=C_static_lambda_info(C_heaptop,38,"(substring-spec-ok\077 s19 start20 end21)");
lf[17]=C_h_intern(&lf[17],20,"check-substring-spec");
lf[18]=C_static_string(C_heaptop,23,"Illegal substring spec.");
lf[19]=C_static_lambda_info(C_heaptop,47,"(check-substring-spec proc22 s23 start24 end25)");
lf[20]=C_h_intern(&lf[20],16,"substring/shared");
lf[22]=C_static_lambda_info(C_heaptop,44,"(substring/shared s26 start27 . maybe-end28)");
lf[23]=C_h_intern(&lf[23],13,"\003syssubstring");
lf[24]=C_static_lambda_info(C_heaptop,37,"(%substring/shared s36 start37 end38)");
lf[25]=C_h_intern(&lf[25],11,"string-copy");
lf[26]=C_static_lambda_info(C_heaptop,7,"(a1681)");
lf[27]=C_static_lambda_info(C_heaptop,21,"(a1687 start41 end42)");
lf[28]=C_static_lambda_info(C_heaptop,37,"(string-copy s39 . maybe-start+end40)");
lf[29]=C_h_intern(&lf[29],10,"string-map");
lf[30]=C_static_lambda_info(C_heaptop,7,"(a1699)");
lf[32]=C_static_lambda_info(C_heaptop,21,"(a1705 start46 end47)");
lf[33]=C_static_lambda_info(C_heaptop,43,"(string-map proc43 s44 . maybe-start+end45)");
lf[34]=C_static_lambda_info(C_heaptop,14,"(do54 i56 j57)");
lf[35]=C_h_intern(&lf[35],11,"make-string");
lf[36]=C_static_lambda_info(C_heaptop,38,"(%string-map proc48 s49 start50 end51)");
lf[37]=C_h_intern(&lf[37],11,"string-map!");
lf[38]=C_static_lambda_info(C_heaptop,7,"(a1768)");
lf[40]=C_static_lambda_info(C_heaptop,21,"(a1774 start64 end65)");
lf[41]=C_static_lambda_info(C_heaptop,44,"(string-map! proc61 s62 . maybe-start+end63)");
lf[42]=C_static_lambda_info(C_heaptop,10,"(do70 i72)");
lf[43]=C_static_lambda_info(C_heaptop,39,"(%string-map! proc66 s67 start68 end69)");
lf[44]=C_h_intern(&lf[44],11,"string-fold");
lf[45]=C_static_lambda_info(C_heaptop,7,"(a1823)");
lf[46]=C_static_lambda_info(C_heaptop,12,"(lp v82 i83)");
lf[47]=C_static_lambda_info(C_heaptop,21,"(a1829 start79 end80)");
lf[48]=C_static_lambda_info(C_heaptop,51,"(string-fold kons75 knil76 s77 . maybe-start+end78)");
lf[49]=C_h_intern(&lf[49],17,"string-fold-right");
lf[50]=C_static_lambda_info(C_heaptop,7,"(a1865)");
lf[51]=C_static_lambda_info(C_heaptop,12,"(lp v92 i93)");
lf[52]=C_static_lambda_info(C_heaptop,21,"(a1871 start89 end90)");
lf[53]=C_static_lambda_info(C_heaptop,57,"(string-fold-right kons85 knil86 s87 . maybe-start+end88)");
lf[54]=C_h_intern(&lf[54],13,"string-unfold");
lf[55]=C_static_string(C_heaptop,0,"");
lf[56]=C_static_string(C_heaptop,0,"");
lf[57]=C_static_lambda_info(C_heaptop,13,"(f_2070 x108)");
lf[59]=C_static_lambda_info(C_heaptop,19,"(lp j133 chunks134)");
lf[60]=C_h_intern(&lf[60],3,"min");
lf[61]=C_static_lambda_info(C_heaptop,18,"(lp2 i117 seed118)");
lf[62]=C_static_lambda_info(C_heaptop,59,"(lp chunks110 nchars111 chunk112 chunk-len113 i114 seed115)");
lf[63]=C_static_lambda_info(C_heaptop,54,"(string-unfold p95 f96 g97 seed98 . base+make-final99)");
lf[64]=C_h_intern(&lf[64],19,"string-unfold-right");
lf[65]=C_static_string(C_heaptop,0,"");
lf[66]=C_static_string(C_heaptop,0,"");
lf[67]=C_static_lambda_info(C_heaptop,13,"(f_2259 x160)");
lf[68]=C_static_lambda_info(C_heaptop,19,"(lp j187 chunks188)");
lf[69]=C_static_lambda_info(C_heaptop,18,"(lp2 i169 seed170)");
lf[70]=C_static_lambda_info(C_heaptop,59,"(lp chunks162 nchars163 chunk164 chunk-len165 i166 seed167)");
lf[71]=C_static_lambda_info(C_heaptop,65,"(string-unfold-right p147 f148 g149 seed150 . base+make-final151)");
lf[72]=C_h_intern(&lf[72],15,"string-for-each");
lf[73]=C_static_lambda_info(C_heaptop,7,"(a2282)");
lf[74]=C_static_lambda_info(C_heaptop,9,"(lp i205)");
lf[75]=C_static_lambda_info(C_heaptop,23,"(a2288 start202 end203)");
lf[76]=C_static_lambda_info(C_heaptop,51,"(string-for-each proc199 s200 . maybe-start+end201)");
lf[77]=C_h_intern(&lf[77],21,"string-for-each-index");
lf[78]=C_static_lambda_info(C_heaptop,7,"(a2323)");
lf[79]=C_static_lambda_info(C_heaptop,9,"(lp i214)");
lf[80]=C_static_lambda_info(C_heaptop,23,"(a2329 start211 end212)");
lf[81]=C_static_lambda_info(C_heaptop,57,"(string-for-each-index proc208 s209 . maybe-start+end210)");
lf[82]=C_h_intern(&lf[82],12,"string-every");
lf[83]=C_static_lambda_info(C_heaptop,7,"(a2360)");
lf[84]=C_static_lambda_info(C_heaptop,4,"(lp)");
lf[85]=C_h_intern(&lf[85],18,"char-set-contains\077");
lf[86]=C_static_lambda_info(C_heaptop,9,"(lp i228)");
lf[87]=C_static_lambda_info(C_heaptop,9,"(lp i235)");
lf[88]=C_static_string(C_heaptop,63,"Second param is neither char-set, char, or predicate procedure.");
lf[89]=C_h_intern(&lf[89],9,"char-set\077");
lf[90]=C_static_lambda_info(C_heaptop,23,"(a2366 start220 end221)");
lf[91]=C_static_lambda_info(C_heaptop,52,"(string-every criteria217 s218 . maybe-start+end219)");
lf[92]=C_h_intern(&lf[92],10,"string-any");
lf[93]=C_static_lambda_info(C_heaptop,7,"(a2490)");
lf[94]=C_static_lambda_info(C_heaptop,4,"(lp)");
lf[95]=C_static_lambda_info(C_heaptop,9,"(lp i250)");
lf[96]=C_static_lambda_info(C_heaptop,9,"(lp i255)");
lf[97]=C_static_string(C_heaptop,63,"Second param is neither char-set, char, or predicate procedure.");
lf[98]=C_static_lambda_info(C_heaptop,23,"(a2496 start242 end243)");
lf[99]=C_static_lambda_info(C_heaptop,50,"(string-any criteria239 s240 . maybe-start+end241)");
lf[100]=C_h_intern(&lf[100],15,"string-tabulate");
lf[101]=C_static_lambda_info(C_heaptop,12,"(do264 i266)");
lf[102]=C_static_lambda_info(C_heaptop,32,"(string-tabulate proc261 len262)");
lf[104]=C_static_lambda_info(C_heaptop,14,"(lp i280 j281)");
lf[105]=C_static_lambda_info(C_heaptop,71,"(%string-prefix-length s1271 start1272 end1273 s2274 start2275 end2276)");
lf[107]=C_static_lambda_info(C_heaptop,14,"(lp i294 j295)");
lf[108]=C_static_lambda_info(C_heaptop,71,"(%string-suffix-length s1285 start1286 end1287 s2288 start2289 end2290)");
lf[110]=C_h_intern(&lf[110],9,"char-ci=\077");
lf[111]=C_static_lambda_info(C_heaptop,14,"(lp i308 j309)");
lf[112]=C_static_lambda_info(C_heaptop,74,"(%string-prefix-length-ci s1299 start1300 end1301 s2302 start2303 end2304)");
lf[114]=C_static_lambda_info(C_heaptop,14,"(lp i322 j323)");
lf[115]=C_static_lambda_info(C_heaptop,74,"(%string-suffix-length-ci s1313 start1314 end1315 s2316 start2317 end2318)");
lf[116]=C_h_intern(&lf[116],20,"string-prefix-length");
lf[117]=C_static_lambda_info(C_heaptop,7,"(a2975)");
lf[118]=C_static_lambda_info(C_heaptop,7,"(a2987)");
lf[119]=C_static_lambda_info(C_heaptop,25,"(a2993 start2336 end2337)");
lf[120]=C_static_lambda_info(C_heaptop,33,"(a2981 g331333 start1334 end1335)");
lf[121]=C_static_lambda_info(C_heaptop,57,"(string-prefix-length s1327 s2328 . maybe-starts+ends329)");
lf[122]=C_h_intern(&lf[122],20,"string-suffix-length");
lf[123]=C_static_lambda_info(C_heaptop,7,"(a3005)");
lf[124]=C_static_lambda_info(C_heaptop,7,"(a3017)");
lf[125]=C_static_lambda_info(C_heaptop,25,"(a3023 start2347 end2348)");
lf[126]=C_static_lambda_info(C_heaptop,33,"(a3011 g342344 start1345 end1346)");
lf[127]=C_static_lambda_info(C_heaptop,57,"(string-suffix-length s1338 s2339 . maybe-starts+ends340)");
lf[128]=C_h_intern(&lf[128],23,"string-prefix-length-ci");
lf[129]=C_static_lambda_info(C_heaptop,7,"(a3035)");
lf[130]=C_static_lambda_info(C_heaptop,7,"(a3047)");
lf[131]=C_static_lambda_info(C_heaptop,25,"(a3053 start2358 end2359)");
lf[132]=C_static_lambda_info(C_heaptop,33,"(a3041 g353355 start1356 end1357)");
lf[133]=C_static_lambda_info(C_heaptop,60,"(string-prefix-length-ci s1349 s2350 . maybe-starts+ends351)");
lf[134]=C_h_intern(&lf[134],23,"string-suffix-length-ci");
lf[135]=C_static_lambda_info(C_heaptop,7,"(a3065)");
lf[136]=C_static_lambda_info(C_heaptop,7,"(a3077)");
lf[137]=C_static_lambda_info(C_heaptop,25,"(a3083 start2369 end2370)");
lf[138]=C_static_lambda_info(C_heaptop,33,"(a3071 g364366 start1367 end1368)");
lf[139]=C_static_lambda_info(C_heaptop,60,"(string-suffix-length-ci s1360 s2361 . maybe-starts+ends362)");
lf[140]=C_h_intern(&lf[140],14,"string-prefix\077");
lf[141]=C_static_lambda_info(C_heaptop,7,"(a3095)");
lf[142]=C_static_lambda_info(C_heaptop,7,"(a3107)");
lf[143]=C_static_lambda_info(C_heaptop,25,"(a3113 start2380 end2381)");
lf[144]=C_static_lambda_info(C_heaptop,33,"(a3101 g375377 start1378 end1379)");
lf[145]=C_static_lambda_info(C_heaptop,51,"(string-prefix\077 s1371 s2372 . maybe-starts+ends373)");
lf[146]=C_h_intern(&lf[146],14,"string-suffix\077");
lf[147]=C_static_lambda_info(C_heaptop,7,"(a3125)");
lf[148]=C_static_lambda_info(C_heaptop,7,"(a3137)");
lf[149]=C_static_lambda_info(C_heaptop,25,"(a3143 start2391 end2392)");
lf[150]=C_static_lambda_info(C_heaptop,33,"(a3131 g386388 start1389 end1390)");
lf[151]=C_static_lambda_info(C_heaptop,51,"(string-suffix\077 s1382 s2383 . maybe-starts+ends384)");
lf[152]=C_h_intern(&lf[152],17,"string-prefix-ci\077");
lf[153]=C_static_lambda_info(C_heaptop,7,"(a3155)");
lf[154]=C_static_lambda_info(C_heaptop,7,"(a3167)");
lf[155]=C_static_lambda_info(C_heaptop,25,"(a3173 start2402 end2403)");
lf[156]=C_static_lambda_info(C_heaptop,33,"(a3161 g397399 start1400 end1401)");
lf[157]=C_static_lambda_info(C_heaptop,54,"(string-prefix-ci\077 s1393 s2394 . maybe-starts+ends395)");
lf[158]=C_h_intern(&lf[158],17,"string-suffix-ci\077");
lf[159]=C_static_lambda_info(C_heaptop,7,"(a3185)");
lf[160]=C_static_lambda_info(C_heaptop,7,"(a3197)");
lf[161]=C_static_lambda_info(C_heaptop,25,"(a3203 start2413 end2414)");
lf[162]=C_static_lambda_info(C_heaptop,33,"(a3191 g408410 start1411 end1412)");
lf[163]=C_static_lambda_info(C_heaptop,54,"(string-suffix-ci\077 s1404 s2405 . maybe-starts+ends406)");
lf[165]=C_static_lambda_info(C_heaptop,92,"(%string-compare s1443 start1444 end1445 s2446 start2447 end2448 proc<449 proc=4"
"50 proc>451)");
lf[167]=C_h_intern(&lf[167],9,"char-ci<\077");
lf[168]=C_static_lambda_info(C_heaptop,95,"(%string-compare-ci s1455 start1456 end1457 s2458 start2459 end2460 proc<461 pro"
"c=462 proc>463)");
lf[169]=C_h_intern(&lf[169],14,"string-compare");
lf[170]=C_static_lambda_info(C_heaptop,7,"(a3431)");
lf[171]=C_static_lambda_info(C_heaptop,7,"(a3443)");
lf[172]=C_static_lambda_info(C_heaptop,25,"(a3449 start2479 end2480)");
lf[173]=C_static_lambda_info(C_heaptop,33,"(a3437 g474476 start1477 end1478)");
lf[174]=C_static_lambda_info(C_heaptop,78,"(string-compare s1467 s2468 proc<469 proc=470 proc>471 . maybe-starts+ends472)");
lf[175]=C_h_intern(&lf[175],17,"string-compare-ci");
lf[176]=C_static_lambda_info(C_heaptop,7,"(a3461)");
lf[177]=C_static_lambda_info(C_heaptop,7,"(a3473)");
lf[178]=C_static_lambda_info(C_heaptop,25,"(a3479 start2493 end2494)");
lf[179]=C_static_lambda_info(C_heaptop,33,"(a3467 g488490 start1491 end1492)");
lf[180]=C_static_lambda_info(C_heaptop,81,"(string-compare-ci s1481 s2482 proc<483 proc=484 proc>485 . maybe-starts+ends486"
")");
lf[181]=C_h_intern(&lf[181],7,"string=");
lf[182]=C_static_lambda_info(C_heaptop,7,"(a3491)");
lf[183]=C_static_lambda_info(C_heaptop,7,"(a3503)");
lf[184]=C_static_lambda_info(C_heaptop,12,"(a3527 i508)");
lf[185]=C_static_lambda_info(C_heaptop,12,"(a3530 i509)");
lf[186]=C_h_intern(&lf[186],6,"values");
lf[187]=C_static_lambda_info(C_heaptop,25,"(a3509 start2504 end2505)");
lf[188]=C_static_lambda_info(C_heaptop,33,"(a3497 g499501 start1502 end1503)");
lf[189]=C_static_lambda_info(C_heaptop,44,"(string= s1495 s2496 . maybe-starts+ends497)");
lf[190]=C_h_intern(&lf[190],8,"string<>");
lf[191]=C_static_lambda_info(C_heaptop,7,"(a3553)");
lf[192]=C_static_lambda_info(C_heaptop,7,"(a3565)");
lf[193]=C_static_lambda_info(C_heaptop,12,"(a3589 i523)");
lf[194]=C_static_lambda_info(C_heaptop,25,"(a3571 start2519 end2520)");
lf[195]=C_static_lambda_info(C_heaptop,33,"(a3559 g514516 start1517 end1518)");
lf[196]=C_static_lambda_info(C_heaptop,45,"(string<> s1510 s2511 . maybe-starts+ends512)");
lf[197]=C_h_intern(&lf[197],7,"string<");
lf[198]=C_static_lambda_info(C_heaptop,7,"(a3620)");
lf[199]=C_static_lambda_info(C_heaptop,7,"(a3632)");
lf[200]=C_static_lambda_info(C_heaptop,12,"(a3653 i535)");
lf[201]=C_static_lambda_info(C_heaptop,12,"(a3656 i536)");
lf[202]=C_static_lambda_info(C_heaptop,25,"(a3638 start2533 end2534)");
lf[203]=C_static_lambda_info(C_heaptop,33,"(a3626 g528530 start1531 end1532)");
lf[204]=C_static_lambda_info(C_heaptop,44,"(string< s1524 s2525 . maybe-starts+ends526)");
lf[205]=C_h_intern(&lf[205],7,"string>");
lf[206]=C_static_lambda_info(C_heaptop,7,"(a3671)");
lf[207]=C_static_lambda_info(C_heaptop,7,"(a3683)");
lf[208]=C_static_lambda_info(C_heaptop,12,"(a3704 i548)");
lf[209]=C_static_lambda_info(C_heaptop,12,"(a3707 i549)");
lf[210]=C_static_lambda_info(C_heaptop,25,"(a3689 start2546 end2547)");
lf[211]=C_static_lambda_info(C_heaptop,33,"(a3677 g541543 start1544 end1545)");
lf[212]=C_static_lambda_info(C_heaptop,44,"(string> s1537 s2538 . maybe-starts+ends539)");
lf[213]=C_h_intern(&lf[213],8,"string<=");
lf[214]=C_static_lambda_info(C_heaptop,7,"(a3722)");
lf[215]=C_static_lambda_info(C_heaptop,7,"(a3734)");
lf[216]=C_static_lambda_info(C_heaptop,12,"(a3755 i561)");
lf[217]=C_static_lambda_info(C_heaptop,25,"(a3740 start2559 end2560)");
lf[218]=C_static_lambda_info(C_heaptop,33,"(a3728 g554556 start1557 end1558)");
lf[219]=C_static_lambda_info(C_heaptop,45,"(string<= s1550 s2551 . maybe-starts+ends552)");
lf[220]=C_h_intern(&lf[220],8,"string>=");
lf[221]=C_static_lambda_info(C_heaptop,7,"(a3770)");
lf[222]=C_static_lambda_info(C_heaptop,7,"(a3782)");
lf[223]=C_static_lambda_info(C_heaptop,12,"(a3803 i573)");
lf[224]=C_static_lambda_info(C_heaptop,25,"(a3788 start2571 end2572)");
lf[225]=C_static_lambda_info(C_heaptop,33,"(a3776 g566568 start1569 end1570)");
lf[226]=C_static_lambda_info(C_heaptop,45,"(string>= s1562 s2563 . maybe-starts+ends564)");
lf[227]=C_h_intern(&lf[227],10,"string-ci=");
lf[228]=C_static_lambda_info(C_heaptop,7,"(a3818)");
lf[229]=C_static_lambda_info(C_heaptop,7,"(a3830)");
lf[230]=C_static_lambda_info(C_heaptop,12,"(a3854 i587)");
lf[231]=C_static_lambda_info(C_heaptop,12,"(a3857 i588)");
lf[232]=C_static_lambda_info(C_heaptop,25,"(a3836 start2583 end2584)");
lf[233]=C_static_lambda_info(C_heaptop,33,"(a3824 g578580 start1581 end1582)");
lf[234]=C_static_lambda_info(C_heaptop,47,"(string-ci= s1574 s2575 . maybe-starts+ends576)");
lf[235]=C_h_intern(&lf[235],11,"string-ci<>");
lf[236]=C_static_lambda_info(C_heaptop,7,"(a3880)");
lf[237]=C_static_lambda_info(C_heaptop,7,"(a3892)");
lf[238]=C_static_lambda_info(C_heaptop,12,"(a3916 i602)");
lf[239]=C_static_lambda_info(C_heaptop,25,"(a3898 start2598 end2599)");
lf[240]=C_static_lambda_info(C_heaptop,33,"(a3886 g593595 start1596 end1597)");
lf[241]=C_static_lambda_info(C_heaptop,48,"(string-ci<> s1589 s2590 . maybe-starts+ends591)");
lf[242]=C_h_intern(&lf[242],10,"string-ci<");
lf[243]=C_static_lambda_info(C_heaptop,7,"(a3947)");
lf[244]=C_static_lambda_info(C_heaptop,7,"(a3959)");
lf[245]=C_static_lambda_info(C_heaptop,12,"(a3980 i614)");
lf[246]=C_static_lambda_info(C_heaptop,12,"(a3983 i615)");
lf[247]=C_static_lambda_info(C_heaptop,25,"(a3965 start2612 end2613)");
lf[248]=C_static_lambda_info(C_heaptop,33,"(a3953 g607609 start1610 end1611)");
lf[249]=C_static_lambda_info(C_heaptop,47,"(string-ci< s1603 s2604 . maybe-starts+ends605)");
lf[250]=C_h_intern(&lf[250],10,"string-ci>");
lf[251]=C_static_lambda_info(C_heaptop,7,"(a3998)");
lf[252]=C_static_lambda_info(C_heaptop,7,"(a4010)");
lf[253]=C_static_lambda_info(C_heaptop,12,"(a4031 i627)");
lf[254]=C_static_lambda_info(C_heaptop,12,"(a4034 i628)");
lf[255]=C_static_lambda_info(C_heaptop,25,"(a4016 start2625 end2626)");
lf[256]=C_static_lambda_info(C_heaptop,33,"(a4004 g620622 start1623 end1624)");
lf[257]=C_static_lambda_info(C_heaptop,47,"(string-ci> s1616 s2617 . maybe-starts+ends618)");
lf[258]=C_h_intern(&lf[258],11,"string-ci<=");
lf[259]=C_static_lambda_info(C_heaptop,7,"(a4049)");
lf[260]=C_static_lambda_info(C_heaptop,7,"(a4061)");
lf[261]=C_static_lambda_info(C_heaptop,12,"(a4082 i640)");
lf[262]=C_static_lambda_info(C_heaptop,25,"(a4067 start2638 end2639)");
lf[263]=C_static_lambda_info(C_heaptop,33,"(a4055 g633635 start1636 end1637)");
lf[264]=C_static_lambda_info(C_heaptop,48,"(string-ci<= s1629 s2630 . maybe-starts+ends631)");
lf[265]=C_h_intern(&lf[265],11,"string-ci>=");
lf[266]=C_static_lambda_info(C_heaptop,7,"(a4097)");
lf[267]=C_static_lambda_info(C_heaptop,7,"(a4109)");
lf[268]=C_static_lambda_info(C_heaptop,12,"(a4130 i652)");
lf[269]=C_static_lambda_info(C_heaptop,25,"(a4115 start2650 end2651)");
lf[270]=C_static_lambda_info(C_heaptop,33,"(a4103 g645647 start1648 end1649)");
lf[271]=C_static_lambda_info(C_heaptop,48,"(string-ci>= s1641 s2642 . maybe-starts+ends643)");
lf[273]=C_static_lambda_info(C_heaptop,16,"(iref s660 i661)");
lf[274]=C_static_lambda_info(C_heaptop,4,"(lp)");
lf[275]=C_h_intern(&lf[275],6,"modulo");
lf[276]=C_static_lambda_info(C_heaptop,16,"(lp i666 ans667)");
lf[277]=C_static_lambda_info(C_heaptop,57,"(%string-hash s653 char->int654 bound655 start656 end657)");
lf[278]=C_h_intern(&lf[278],11,"string-hash");
lf[279]=C_static_lambda_info(C_heaptop,7,"(a4229)");
lf[280]=C_h_intern(&lf[280],13,"char->integer");
lf[281]=C_static_lambda_info(C_heaptop,23,"(a4235 start677 end678)");
lf[282]=C_static_lambda_info(C_heaptop,45,"(string-hash s669 . maybe-bound+start+end670)");
lf[283]=C_h_intern(&lf[283],14,"string-hash-ci");
lf[284]=C_static_lambda_info(C_heaptop,7,"(a4275)");
lf[285]=C_static_lambda_info(C_heaptop,12,"(a4287 c691)");
lf[286]=C_static_lambda_info(C_heaptop,23,"(a4281 start689 end690)");
lf[287]=C_static_lambda_info(C_heaptop,48,"(string-hash-ci s681 . maybe-bound+start+end682)");
lf[288]=C_h_intern(&lf[288],13,"string-upcase");
lf[289]=C_static_lambda_info(C_heaptop,7,"(a4319)");
lf[290]=C_h_intern(&lf[290],11,"char-upcase");
lf[291]=C_static_lambda_info(C_heaptop,23,"(a4325 start696 end697)");
lf[292]=C_static_lambda_info(C_heaptop,41,"(string-upcase s694 . maybe-start+end695)");
lf[293]=C_h_intern(&lf[293],14,"string-upcase!");
lf[294]=C_static_lambda_info(C_heaptop,7,"(a4337)");
lf[295]=C_static_lambda_info(C_heaptop,23,"(a4343 start700 end701)");
lf[296]=C_static_lambda_info(C_heaptop,42,"(string-upcase! s698 . maybe-start+end699)");
lf[297]=C_h_intern(&lf[297],15,"string-downcase");
lf[298]=C_static_lambda_info(C_heaptop,7,"(a4355)");
lf[299]=C_h_intern(&lf[299],13,"char-downcase");
lf[300]=C_static_lambda_info(C_heaptop,23,"(a4361 start704 end705)");
lf[301]=C_static_lambda_info(C_heaptop,43,"(string-downcase s702 . maybe-start+end703)");
lf[302]=C_h_intern(&lf[302],16,"string-downcase!");
lf[303]=C_static_lambda_info(C_heaptop,7,"(a4373)");
lf[304]=C_static_lambda_info(C_heaptop,23,"(a4379 start708 end709)");
lf[305]=C_static_lambda_info(C_heaptop,44,"(string-downcase! s706 . maybe-start+end707)");
lf[307]=C_static_lambda_info(C_heaptop,13,"(a4425 c0723)");
lf[308]=C_h_intern(&lf[308],11,"string-skip");
lf[309]=C_static_lambda_info(C_heaptop,13,"(a4438 c0717)");
lf[310]=C_h_intern(&lf[310],12,"string-index");
lf[311]=C_static_lambda_info(C_heaptop,9,"(lp i714)");
lf[312]=C_static_lambda_info(C_heaptop,41,"(%string-titlecase! s710 start711 end712)");
lf[313]=C_h_intern(&lf[313],17,"string-titlecase!");
lf[314]=C_static_lambda_info(C_heaptop,7,"(a4450)");
lf[315]=C_static_lambda_info(C_heaptop,23,"(a4456 start730 end731)");
lf[316]=C_static_lambda_info(C_heaptop,45,"(string-titlecase! s728 . maybe-start+end729)");
lf[317]=C_h_intern(&lf[317],16,"string-titlecase");
lf[318]=C_static_lambda_info(C_heaptop,7,"(a4468)");
lf[319]=C_static_lambda_info(C_heaptop,23,"(a4474 start734 end735)");
lf[320]=C_static_lambda_info(C_heaptop,44,"(string-titlecase s732 . maybe-start+end733)");
lf[321]=C_h_intern(&lf[321],11,"string-take");
lf[322]=C_static_lambda_info(C_heaptop,23,"(string-take s738 n739)");
lf[323]=C_h_intern(&lf[323],17,"string-take-right");
lf[324]=C_static_lambda_info(C_heaptop,29,"(string-take-right s741 n742)");
lf[325]=C_h_intern(&lf[325],11,"string-drop");
lf[326]=C_static_lambda_info(C_heaptop,23,"(string-drop s745 n746)");
lf[327]=C_h_intern(&lf[327],17,"string-drop-right");
lf[328]=C_static_lambda_info(C_heaptop,29,"(string-drop-right s749 n750)");
lf[329]=C_h_intern(&lf[329],11,"string-trim");
lf[330]=C_h_intern(&lf[330],19,"char-set:whitespace");
lf[331]=C_static_lambda_info(C_heaptop,7,"(a4552)");
lf[332]=C_static_string(C_heaptop,0,"");
lf[333]=C_static_lambda_info(C_heaptop,23,"(a4558 start761 end762)");
lf[334]=C_static_lambda_info(C_heaptop,42,"(string-trim s753 . criteria+start+end754)");
lf[335]=C_h_intern(&lf[335],17,"string-trim-right");
lf[336]=C_static_lambda_info(C_heaptop,7,"(a4594)");
lf[337]=C_static_string(C_heaptop,0,"");
lf[338]=C_h_intern(&lf[338],17,"string-skip-right");
lf[339]=C_static_lambda_info(C_heaptop,23,"(a4600 start774 end775)");
lf[340]=C_static_lambda_info(C_heaptop,48,"(string-trim-right s766 . criteria+start+end767)");
lf[341]=C_h_intern(&lf[341],16,"string-trim-both");
lf[342]=C_static_lambda_info(C_heaptop,7,"(a4640)");
lf[343]=C_static_string(C_heaptop,0,"");
lf[344]=C_static_lambda_info(C_heaptop,23,"(a4646 start787 end788)");
lf[345]=C_static_lambda_info(C_heaptop,47,"(string-trim-both s779 . criteria+start+end780)");
lf[346]=C_h_intern(&lf[346],16,"string-pad-right");
lf[347]=C_static_lambda_info(C_heaptop,7,"(a4693)");
lf[348]=C_static_lambda_info(C_heaptop,23,"(a4699 start801 end802)");
lf[349]=C_static_lambda_info(C_heaptop,48,"(string-pad-right s792 n793 . char+start+end794)");
lf[350]=C_h_intern(&lf[350],10,"string-pad");
lf[351]=C_static_lambda_info(C_heaptop,7,"(a4751)");
lf[352]=C_static_lambda_info(C_heaptop,23,"(a4757 start816 end817)");
lf[353]=C_static_lambda_info(C_heaptop,42,"(string-pad s807 n808 . char+start+end809)");
lf[354]=C_h_intern(&lf[354],13,"string-delete");
lf[355]=C_static_lambda_info(C_heaptop,7,"(a4804)");
lf[356]=C_static_lambda_info(C_heaptop,17,"(a4837 c830 i831)");
lf[357]=C_static_lambda_info(C_heaptop,17,"(a4864 c838 i839)");
lf[358]=C_static_lambda_info(C_heaptop,17,"(a4879 c835 i836)");
lf[359]=C_h_intern(&lf[359],8,"char-set");
lf[360]=C_static_string(C_heaptop,54,"string-delete criteria not predicate, char or char-set");
lf[361]=C_static_lambda_info(C_heaptop,23,"(a4810 start825 end826)");
lf[362]=C_static_lambda_info(C_heaptop,53,"(string-delete criteria822 s823 . maybe-start+end824)");
lf[363]=C_h_intern(&lf[363],13,"string-filter");
lf[364]=C_static_lambda_info(C_heaptop,7,"(a4912)");
lf[365]=C_static_lambda_info(C_heaptop,17,"(a4945 c850 i851)");
lf[366]=C_static_lambda_info(C_heaptop,17,"(a4972 c858 i859)");
lf[367]=C_static_lambda_info(C_heaptop,17,"(a4987 c855 i856)");
lf[368]=C_static_string(C_heaptop,54,"string-delete criteria not predicate, char or char-set");
lf[369]=C_static_lambda_info(C_heaptop,23,"(a4918 start845 end846)");
lf[370]=C_static_lambda_info(C_heaptop,53,"(string-filter criteria842 s843 . maybe-start+end844)");
lf[371]=C_static_lambda_info(C_heaptop,7,"(a5020)");
lf[372]=C_static_lambda_info(C_heaptop,4,"(lp)");
lf[373]=C_static_lambda_info(C_heaptop,9,"(lp i871)");
lf[374]=C_static_lambda_info(C_heaptop,9,"(lp i874)");
lf[375]=C_static_string(C_heaptop,63,"Second param is neither char-set, char, or predicate procedure.");
lf[376]=C_static_lambda_info(C_heaptop,23,"(a5026 start865 end866)");
lf[377]=C_static_lambda_info(C_heaptop,54,"(string-index str862 criteria863 . maybe-start+end864)");
lf[378]=C_h_intern(&lf[378],18,"string-index-right");
lf[379]=C_static_lambda_info(C_heaptop,7,"(a5143)");
lf[380]=C_static_lambda_info(C_heaptop,4,"(lp)");
lf[381]=C_static_lambda_info(C_heaptop,9,"(lp i885)");
lf[382]=C_static_lambda_info(C_heaptop,9,"(lp i888)");
lf[383]=C_static_string(C_heaptop,63,"Second param is neither char-set, char, or predicate procedure.");
lf[384]=C_static_lambda_info(C_heaptop,23,"(a5149 start879 end880)");
lf[385]=C_static_lambda_info(C_heaptop,60,"(string-index-right str876 criteria877 . maybe-start+end878)");
lf[386]=C_static_lambda_info(C_heaptop,7,"(a5278)");
lf[387]=C_static_lambda_info(C_heaptop,4,"(lp)");
lf[388]=C_static_lambda_info(C_heaptop,9,"(lp i899)");
lf[389]=C_static_lambda_info(C_heaptop,9,"(lp i902)");
lf[390]=C_static_string(C_heaptop,63,"Second param is neither char-set, char, or predicate procedure.");
lf[391]=C_static_lambda_info(C_heaptop,23,"(a5284 start893 end894)");
lf[392]=C_static_lambda_info(C_heaptop,53,"(string-skip str890 criteria891 . maybe-start+end892)");
lf[393]=C_static_lambda_info(C_heaptop,7,"(a5401)");
lf[394]=C_static_lambda_info(C_heaptop,4,"(lp)");
lf[395]=C_static_lambda_info(C_heaptop,9,"(lp i913)");
lf[396]=C_static_lambda_info(C_heaptop,9,"(lp i916)");
lf[397]=C_static_string(C_heaptop,43,"CRITERIA param is neither char-set or char.");
lf[398]=C_static_lambda_info(C_heaptop,23,"(a5407 start907 end908)");
lf[399]=C_static_lambda_info(C_heaptop,59,"(string-skip-right str904 criteria905 . maybe-start+end906)");
lf[400]=C_h_intern(&lf[400],12,"string-count");
lf[401]=C_static_lambda_info(C_heaptop,7,"(a5536)");
lf[402]=C_static_lambda_info(C_heaptop,16,"(do923 count926)");
lf[403]=C_static_lambda_info(C_heaptop,21,"(do928 i930 count931)");
lf[404]=C_static_lambda_info(C_heaptop,21,"(do933 i935 count936)");
lf[405]=C_static_string(C_heaptop,43,"CRITERIA param is neither char-set or char.");
lf[406]=C_static_lambda_info(C_heaptop,23,"(a5542 start921 end922)");
lf[407]=C_static_lambda_info(C_heaptop,52,"(string-count s918 criteria919 . maybe-start+end920)");
lf[408]=C_h_intern(&lf[408],12,"string-fill!");
lf[409]=C_static_lambda_info(C_heaptop,7,"(a5671)");
lf[410]=C_static_lambda_info(C_heaptop,7,"(do943)");
lf[411]=C_static_lambda_info(C_heaptop,23,"(a5677 start941 end942)");
lf[412]=C_static_lambda_info(C_heaptop,48,"(string-fill! s938 char939 . maybe-start+end940)");
lf[413]=C_h_intern(&lf[413],12,"string-copy!");
lf[414]=C_static_lambda_info(C_heaptop,7,"(a5712)");
lf[415]=C_static_lambda_info(C_heaptop,25,"(a5718 fstart952 fend953)");
lf[416]=C_static_lambda_info(C_heaptop,61,"(string-copy! to948 tstart949 from950 . maybe-fstart+fend951)");
lf[417]=C_static_lambda_info(C_heaptop,12,"(do961 j964)");
lf[418]=C_static_lambda_info(C_heaptop,12,"(do967 j970)");
lf[419]=C_static_lambda_info(C_heaptop,57,"(%string-copy! to956 tstart957 from958 fstart959 fend960)");
lf[420]=C_h_intern(&lf[420],15,"string-contains");
lf[421]=C_static_lambda_info(C_heaptop,7,"(a5825)");
lf[422]=C_static_lambda_info(C_heaptop,7,"(a5837)");
lf[423]=C_static_lambda_info(C_heaptop,9,"(lp i987)");
lf[424]=C_static_lambda_info(C_heaptop,25,"(a5843 start2982 end2983)");
lf[425]=C_static_lambda_info(C_heaptop,33,"(a5831 g977979 start1980 end1981)");
lf[426]=C_static_lambda_info(C_heaptop,63,"(string-contains string973 substring974 . maybe-starts+ends975)");
lf[427]=C_h_intern(&lf[427],18,"string-contains-ci");
lf[428]=C_static_lambda_info(C_heaptop,7,"(a5887)");
lf[429]=C_static_lambda_info(C_heaptop,7,"(a5899)");
lf[430]=C_static_lambda_info(C_heaptop,10,"(lp i1003)");
lf[431]=C_static_lambda_info(C_heaptop,25,"(a5905 start2998 end2999)");
lf[432]=C_static_lambda_info(C_heaptop,33,"(a5893 g993995 start1996 end1997)");
lf[433]=C_static_lambda_info(C_heaptop,66,"(string-contains-ci string989 substring990 . maybe-starts+ends991)");
lf[435]=C_static_lambda_info(C_heaptop,32,"(lp ti1015 pi1016 tj1017 pj1018)");
lf[436]=C_h_intern(&lf[436],23,"make-kmp-restart-vector");
lf[437]=C_static_lambda_info(C_heaptop,85,"(%kmp-search pattern1005 text1006 c=1007 p-start1008 p-end1009 t-start1010 t-end"
"1011)");
lf[438]=C_h_intern(&lf[438],6,"char=\077");
lf[439]=C_static_lambda_info(C_heaptop,7,"(a6053)");
lf[440]=C_static_lambda_info(C_heaptop,11,"(lp2 j1042)");
lf[441]=C_static_lambda_info(C_heaptop,23,"(lp1 i1037 j1038 k1039)");
lf[442]=C_h_intern(&lf[442],11,"make-vector");
lf[443]=C_static_lambda_info(C_heaptop,35,"(a6059 rest21029 start1030 end1031)");
lf[444]=C_static_lambda_info(C_heaptop,62,"(make-kmp-restart-vector pattern1021 . maybe-c=+start+end1022)");
lf[445]=C_h_intern(&lf[445],8,"kmp-step");
lf[446]=C_static_lambda_info(C_heaptop,10,"(lp i1058)");
lf[447]=C_static_lambda_info(C_heaptop,56,"(kmp-step pat1051 rv1052 c1053 i1054 c=1055 p-start1056)");
lf[448]=C_h_intern(&lf[448],25,"string-kmp-partial-search");
lf[449]=C_static_lambda_info(C_heaptop,7,"(a6232)");
lf[450]=C_static_lambda_info(C_heaptop,12,"(lp2 vi1084)");
lf[451]=C_static_lambda_info(C_heaptop,18,"(lp si1080 vi1081)");
lf[452]=C_static_lambda_info(C_heaptop,39,"(a6238 rest21075 s-start1076 s-end1077)");
lf[453]=C_static_lambda_info(C_heaptop,85,"(string-kmp-partial-search pat1061 rv1062 s1063 i1064 . c=+p-start+s-start+s-end"
"1065)");
lf[454]=C_h_intern(&lf[454],12,"string-null\077");
lf[455]=C_static_lambda_info(C_heaptop,20,"(string-null\077 s1088)");
lf[456]=C_h_intern(&lf[456],14,"string-reverse");
lf[457]=C_static_lambda_info(C_heaptop,7,"(a6344)");
lf[458]=C_static_lambda_info(C_heaptop,14,"(do1095 j1098)");
lf[459]=C_static_lambda_info(C_heaptop,25,"(a6350 start1091 end1092)");
lf[460]=C_static_lambda_info(C_heaptop,44,"(string-reverse s1089 . maybe-start+end1090)");
lf[461]=C_h_intern(&lf[461],15,"string-reverse!");
lf[462]=C_static_lambda_info(C_heaptop,7,"(a6399)");
lf[463]=C_static_lambda_info(C_heaptop,14,"(do1106 j1109)");
lf[464]=C_static_lambda_info(C_heaptop,25,"(a6405 start1104 end1105)");
lf[465]=C_static_lambda_info(C_heaptop,45,"(string-reverse! s1102 . maybe-start+end1103)");
lf[466]=C_h_intern(&lf[466],12,"string->list");
lf[467]=C_static_lambda_info(C_heaptop,7,"(a6454)");
lf[468]=C_static_lambda_info(C_heaptop,22,"(do1118 i1120 ans1121)");
lf[469]=C_static_lambda_info(C_heaptop,25,"(a6460 start1116 end1117)");
lf[470]=C_static_lambda_info(C_heaptop,42,"(string->list s1114 . maybe-start+end1115)");
lf[471]=C_h_intern(&lf[471],20,"string-append/shared");
lf[472]=C_h_intern(&lf[472],25,"string-concatenate/shared");
lf[473]=C_static_lambda_info(C_heaptop,36,"(string-append/shared . strings1123)");
lf[474]=C_static_string(C_heaptop,0,"");
lf[475]=C_static_lambda_info(C_heaptop,22,"(lp strings1136 i1137)");
lf[476]=C_static_lambda_info(C_heaptop,37,"(lp strings1126 nchars1127 first1128)");
lf[477]=C_static_lambda_info(C_heaptop,39,"(string-concatenate/shared strings1124)");
lf[478]=C_h_intern(&lf[478],18,"string-concatenate");
lf[479]=C_static_lambda_info(C_heaptop,14,"(do1146 i1149)");
lf[480]=C_static_lambda_info(C_heaptop,22,"(lp i1153 strings1154)");
lf[481]=C_static_lambda_info(C_heaptop,32,"(string-concatenate strings1144)");
lf[482]=C_h_intern(&lf[482],26,"string-concatenate-reverse");
lf[483]=C_static_string(C_heaptop,0,"");
lf[484]=C_static_lambda_info(C_heaptop,12,"(lp lis1173)");
lf[486]=C_static_lambda_info(C_heaptop,66,"(string-concatenate-reverse string-list1160 . maybe-final+end1161)");
lf[487]=C_h_intern(&lf[487],33,"string-concatenate-reverse/shared");
lf[488]=C_static_string(C_heaptop,0,"");
lf[489]=C_static_lambda_info(C_heaptop,31,"(lp len1187 nzlist1188 lis1189)");
lf[490]=C_static_lambda_info(C_heaptop,73,"(string-concatenate-reverse/shared string-list1176 . maybe-final+end1177)");
lf[491]=C_static_lambda_info(C_heaptop,18,"(lp i1201 lis1202)");
lf[492]=C_static_lambda_info(C_heaptop,78,"(%finish-string-concatenate-reverse len1195 string-list1196 final1197 end1198)");
lf[493]=C_h_intern(&lf[493],14,"string-replace");
lf[494]=C_static_lambda_info(C_heaptop,7,"(a6944)");
lf[495]=C_static_lambda_info(C_heaptop,27,"(a6950 start21216 end21217)");
lf[496]=C_static_lambda_info(C_heaptop,72,"(string-replace s11211 s21212 start11213 end11214 . maybe-start+end1215)");
lf[497]=C_h_intern(&lf[497],15,"string-tokenize");
lf[498]=C_h_intern(&lf[498],16,"char-set:graphic");
lf[499]=C_static_lambda_info(C_heaptop,7,"(a6998)");
lf[500]=C_static_lambda_info(C_heaptop,18,"(lp i1237 ans1238)");
lf[501]=C_static_lambda_info(C_heaptop,25,"(a7004 start1234 end1235)");
lf[502]=C_static_lambda_info(C_heaptop,51,"(string-tokenize s1226 . token-chars+start+end1227)");
lf[503]=C_h_intern(&lf[503],10,"xsubstring");
lf[504]=C_static_lambda_info(C_heaptop,7,"(a7089)");
lf[505]=C_static_lambda_info(C_heaptop,25,"(a7099 start1250 end1251)");
lf[506]=C_static_lambda_info(C_heaptop,7,"(a7077)");
lf[507]=C_static_string(C_heaptop,0,"");
lf[508]=C_static_string(C_heaptop,34,"Cannot replicate empty (sub)string");
lf[510]=C_h_intern(&lf[510],5,"floor");
lf[511]=C_static_lambda_info(C_heaptop,32,"(a7121 to1255 start1256 end1257)");
lf[512]=C_static_lambda_info(C_heaptop,52,"(xsubstring s1247 from1248 . maybe-to+start+end1249)");
lf[514]=C_h_intern(&lf[514],13,"string-xcopy!");
lf[515]=C_static_lambda_info(C_heaptop,7,"(a7227)");
lf[516]=C_static_lambda_info(C_heaptop,25,"(a7237 start1268 end1269)");
lf[517]=C_static_lambda_info(C_heaptop,7,"(a7215)");
lf[518]=C_static_string(C_heaptop,34,"Cannot replicate empty (sub)string");
lf[519]=C_static_lambda_info(C_heaptop,33,"(a7259 sto1273 start1274 end1275)");
lf[520]=C_static_lambda_info(C_heaptop,79,"(string-xcopy! target1263 tstart1264 s1265 sfrom1266 . maybe-sto+start+end1267)");
lf[521]=C_static_lambda_info(C_heaptop,25,"(do1296 i1298 nspans1299)");
lf[522]=C_static_lambda_info(C_heaptop,85,"(%multispan-repcopy! target1283 tstart1284 s1285 sfrom1286 sto1287 start1288 end"
"1289)");
lf[523]=C_h_intern(&lf[523],11,"string-join");
lf[524]=C_static_string(C_heaptop,1," ");
lf[525]=C_h_intern(&lf[525],5,"infix");
lf[526]=C_static_lambda_info(C_heaptop,15,"(recur lis1317)");
lf[527]=C_static_lambda_info(C_heaptop,27,"(buildit lis1314 final1315)");
lf[528]=C_h_intern(&lf[528],12,"strict-infix");
lf[529]=C_h_intern(&lf[529],6,"prefix");
lf[530]=C_h_intern(&lf[530],6,"suffix");
lf[531]=C_static_string(C_heaptop,20,"Illegal join grammar");
lf[532]=C_static_string(C_heaptop,54,"Empty list cannot be joined with STRICT-INFIX grammar.");
lf[533]=C_static_string(C_heaptop,0,"");
lf[534]=C_static_string(C_heaptop,27,"STRINGS parameter not list.");
lf[535]=C_static_lambda_info(C_heaptop,45,"(string-join strings1303 . delim+grammar1304)");
lf[536]=C_h_intern(&lf[536],17,"register-feature!");
lf[537]=C_h_intern(&lf[537],7,"srfi-13");
lf[538]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,539,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1436,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_srfi_14_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k1434 */
static void C_ccall f_1436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1439,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 64   register-feature! */
t3=*((C_word*)lf[536]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[537]);}

/* k1437 in k1434 */
static void C_ccall f_1439(C_word c,C_word t0,C_word t1){
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
C_word ab[297],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1439,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1441,a[2]=lf[9],tmp=(C_word)a,a+=3,tmp));
t3=C_mutate((C_word*)lf[10]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1534,a[2]=lf[14],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[15]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1561,a[2]=lf[16],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[17]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1601,a[2]=lf[19],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[20]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1617,a[2]=lf[22],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[21],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1654,a[2]=lf[24],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[25]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1676,a[2]=lf[28],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[29]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1694,a[2]=lf[33],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[31],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1712,a[2]=lf[36],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[37]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1763,a[2]=lf[41],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[39],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1781,a[2]=lf[43],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[44]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1818,a[2]=lf[48],tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[49]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1860,a[2]=lf[53],tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[54]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1906,a[2]=lf[63],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[64]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2088,a[2]=lf[71],tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[72]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2277,a[2]=lf[76],tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[77]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2318,a[2]=lf[81],tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[82]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2355,a[2]=lf[91],tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[92]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2485,a[2]=lf[99],tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[100]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2615,a[2]=lf[102],tmp=(C_word)a,a+=3,tmp));
t22=C_mutate(&lf[103],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2654,a[2]=lf[105],tmp=(C_word)a,a+=3,tmp));
t23=C_mutate(&lf[106],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2727,a[2]=lf[108],tmp=(C_word)a,a+=3,tmp));
t24=C_mutate(&lf[109],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2812,a[2]=lf[112],tmp=(C_word)a,a+=3,tmp));
t25=C_mutate(&lf[113],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2885,a[2]=lf[115],tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[116]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2970,a[2]=lf[121],tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[122]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3000,a[2]=lf[127],tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[128]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3030,a[2]=lf[133],tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[134]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3060,a[2]=lf[139],tmp=(C_word)a,a+=3,tmp));
t30=C_mutate((C_word*)lf[140]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3090,a[2]=lf[145],tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[146]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3120,a[2]=lf[151],tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[152]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3150,a[2]=lf[157],tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[158]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3180,a[2]=lf[163],tmp=(C_word)a,a+=3,tmp));
t34=C_mutate(&lf[164],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3302,a[2]=lf[165],tmp=(C_word)a,a+=3,tmp));
t35=C_mutate(&lf[166],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3364,a[2]=lf[168],tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[169]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3426,a[2]=lf[174],tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[175]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3456,a[2]=lf[180],tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[181]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3486,a[2]=lf[189],tmp=(C_word)a,a+=3,tmp));
t39=C_mutate((C_word*)lf[190]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3548,a[2]=lf[196],tmp=(C_word)a,a+=3,tmp));
t40=C_mutate((C_word*)lf[197]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3615,a[2]=lf[204],tmp=(C_word)a,a+=3,tmp));
t41=C_mutate((C_word*)lf[205]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3666,a[2]=lf[212],tmp=(C_word)a,a+=3,tmp));
t42=C_mutate((C_word*)lf[213]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3717,a[2]=lf[219],tmp=(C_word)a,a+=3,tmp));
t43=C_mutate((C_word*)lf[220]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3765,a[2]=lf[226],tmp=(C_word)a,a+=3,tmp));
t44=C_mutate((C_word*)lf[227]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3813,a[2]=lf[234],tmp=(C_word)a,a+=3,tmp));
t45=C_mutate((C_word*)lf[235]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3875,a[2]=lf[241],tmp=(C_word)a,a+=3,tmp));
t46=C_mutate((C_word*)lf[242]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3942,a[2]=lf[249],tmp=(C_word)a,a+=3,tmp));
t47=C_mutate((C_word*)lf[250]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3993,a[2]=lf[257],tmp=(C_word)a,a+=3,tmp));
t48=C_mutate((C_word*)lf[258]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4044,a[2]=lf[264],tmp=(C_word)a,a+=3,tmp));
t49=C_mutate((C_word*)lf[265]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4092,a[2]=lf[271],tmp=(C_word)a,a+=3,tmp));
t50=C_mutate(&lf[272],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4140,a[2]=lf[277],tmp=(C_word)a,a+=3,tmp));
t51=C_mutate((C_word*)lf[278]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4212,a[2]=lf[282],tmp=(C_word)a,a+=3,tmp));
t52=C_mutate((C_word*)lf[283]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4258,a[2]=lf[287],tmp=(C_word)a,a+=3,tmp));
t53=C_mutate((C_word*)lf[288]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4314,a[2]=lf[292],tmp=(C_word)a,a+=3,tmp));
t54=C_mutate((C_word*)lf[293]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4332,a[2]=lf[296],tmp=(C_word)a,a+=3,tmp));
t55=C_mutate((C_word*)lf[297]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4350,a[2]=lf[301],tmp=(C_word)a,a+=3,tmp));
t56=C_mutate((C_word*)lf[302]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4368,a[2]=lf[305],tmp=(C_word)a,a+=3,tmp));
t57=C_mutate(&lf[306],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4386,a[2]=lf[312],tmp=(C_word)a,a+=3,tmp));
t58=C_mutate((C_word*)lf[313]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4445,a[2]=lf[316],tmp=(C_word)a,a+=3,tmp));
t59=C_mutate((C_word*)lf[317]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4463,a[2]=lf[320],tmp=(C_word)a,a+=3,tmp));
t60=C_mutate((C_word*)lf[321]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4488,a[2]=lf[322],tmp=(C_word)a,a+=3,tmp));
t61=C_mutate((C_word*)lf[323]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4497,a[2]=lf[324],tmp=(C_word)a,a+=3,tmp));
t62=C_mutate((C_word*)lf[325]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4513,a[2]=lf[326],tmp=(C_word)a,a+=3,tmp));
t63=C_mutate((C_word*)lf[327]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4525,a[2]=lf[328],tmp=(C_word)a,a+=3,tmp));
t64=C_mutate((C_word*)lf[329]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4541,a[2]=lf[334],tmp=(C_word)a,a+=3,tmp));
t65=C_mutate((C_word*)lf[335]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4583,a[2]=lf[340],tmp=(C_word)a,a+=3,tmp));
t66=C_mutate((C_word*)lf[341]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4629,a[2]=lf[345],tmp=(C_word)a,a+=3,tmp));
t67=C_mutate((C_word*)lf[346]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4679,a[2]=lf[349],tmp=(C_word)a,a+=3,tmp));
t68=C_mutate((C_word*)lf[350]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4737,a[2]=lf[353],tmp=(C_word)a,a+=3,tmp));
t69=C_mutate((C_word*)lf[354]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4799,a[2]=lf[362],tmp=(C_word)a,a+=3,tmp));
t70=C_mutate((C_word*)lf[363]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4907,a[2]=lf[370],tmp=(C_word)a,a+=3,tmp));
t71=C_mutate((C_word*)lf[310]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5015,a[2]=lf[377],tmp=(C_word)a,a+=3,tmp));
t72=C_mutate((C_word*)lf[378]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5138,a[2]=lf[385],tmp=(C_word)a,a+=3,tmp));
t73=C_mutate((C_word*)lf[308]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5273,a[2]=lf[392],tmp=(C_word)a,a+=3,tmp));
t74=C_mutate((C_word*)lf[338]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5396,a[2]=lf[399],tmp=(C_word)a,a+=3,tmp));
t75=C_mutate((C_word*)lf[400]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5531,a[2]=lf[407],tmp=(C_word)a,a+=3,tmp));
t76=C_mutate((C_word*)lf[408]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5666,a[2]=lf[412],tmp=(C_word)a,a+=3,tmp));
t77=C_mutate((C_word*)lf[413]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5707,a[2]=lf[416],tmp=(C_word)a,a+=3,tmp));
t78=C_mutate(&lf[58],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5739,a[2]=lf[419],tmp=(C_word)a,a+=3,tmp));
t79=C_mutate((C_word*)lf[420]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5820,a[2]=lf[426],tmp=(C_word)a,a+=3,tmp));
t80=C_mutate((C_word*)lf[427]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5882,a[2]=lf[433],tmp=(C_word)a,a+=3,tmp));
t81=C_mutate(&lf[434],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5944,a[2]=lf[437],tmp=(C_word)a,a+=3,tmp));
t82=C_mutate((C_word*)lf[436]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6042,a[2]=lf[444],tmp=(C_word)a,a+=3,tmp));
t83=C_mutate((C_word*)lf[445]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6177,a[2]=lf[447],tmp=(C_word)a,a+=3,tmp));
t84=C_mutate((C_word*)lf[448]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6215,a[2]=lf[453],tmp=(C_word)a,a+=3,tmp));
t85=C_mutate((C_word*)lf[454]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6336,a[2]=lf[455],tmp=(C_word)a,a+=3,tmp));
t86=C_mutate((C_word*)lf[456]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6339,a[2]=lf[460],tmp=(C_word)a,a+=3,tmp));
t87=C_mutate((C_word*)lf[461]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6394,a[2]=lf[465],tmp=(C_word)a,a+=3,tmp));
t88=C_mutate((C_word*)lf[466]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6449,a[2]=lf[470],tmp=(C_word)a,a+=3,tmp));
t89=C_mutate((C_word*)lf[471]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6495,a[2]=lf[473],tmp=(C_word)a,a+=3,tmp));
t90=C_mutate((C_word*)lf[472]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6501,a[2]=lf[477],tmp=(C_word)a,a+=3,tmp));
t91=C_mutate((C_word*)lf[478]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6603,a[2]=lf[481],tmp=(C_word)a,a+=3,tmp));
t92=C_mutate((C_word*)lf[482]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6676,a[2]=lf[486],tmp=(C_word)a,a+=3,tmp));
t93=C_mutate((C_word*)lf[487]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6764,a[2]=lf[490],tmp=(C_word)a,a+=3,tmp));
t94=C_mutate(&lf[485],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6893,a[2]=lf[492],tmp=(C_word)a,a+=3,tmp));
t95=C_mutate((C_word*)lf[493]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6936,a[2]=lf[496],tmp=(C_word)a,a+=3,tmp));
t96=C_mutate((C_word*)lf[497]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6987,a[2]=lf[502],tmp=(C_word)a,a+=3,tmp));
t97=C_mutate((C_word*)lf[503]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7069,a[2]=lf[512],tmp=(C_word)a,a+=3,tmp));
t98=C_mutate(&lf[513],*((C_word*)lf[408]+1));
t99=C_mutate((C_word*)lf[514]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7207,a[2]=lf[520],tmp=(C_word)a,a+=3,tmp));
t100=C_mutate(&lf[509],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7347,a[2]=lf[522],tmp=(C_word)a,a+=3,tmp));
t101=C_mutate((C_word*)lf[523]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7420,a[2]=lf[535],tmp=(C_word)a,a+=3,tmp));
t102=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t102+1)))(2,t102,C_SCHEME_UNDEFINED);}

/* string-join in k1437 in k1434 */
static void C_ccall f_7420(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr3r,(void*)f_7420r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_7420r(t0,t1,t2,t3);}}

static void C_ccall f_7420r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t20;
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word *a=C_alloc(18);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?lf[524]:(C_word)C_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
t8=(C_word)C_i_nullp(t7);
t9=(C_truep(t8)?lf[525]:(C_word)C_i_car(t7));
t10=(C_word)C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t7));
if(C_truep((C_word)C_i_nullp(t11))){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7440,a[2]=t5,a[3]=lf[527],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7485,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t14=(C_word)C_eqp(t9,lf[525]);
t15=(C_truep(t14)?t14:(C_word)C_eqp(t9,lf[528]));
if(C_truep(t15)){
t16=(C_word)C_i_car(t2);
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7502,a[2]=t16,a[3]=t13,tmp=(C_word)a,a+=4,tmp);
t18=(C_word)C_i_cdr(t2);
/* srfi-13.scm: 1935 buildit */
t19=t12;
f_7440(t19,t17,t18,C_SCHEME_END_OF_LIST);}
else{
t16=(C_word)C_eqp(t9,lf[529]);
if(C_truep(t16)){
/* srfi-13.scm: 1937 buildit */
t17=t12;
f_7440(t17,t13,t2,C_SCHEME_END_OF_LIST);}
else{
t17=(C_word)C_eqp(t9,lf[530]);
if(C_truep(t17)){
t18=(C_word)C_i_car(t2);
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7532,a[2]=t18,a[3]=t13,tmp=(C_word)a,a+=4,tmp);
t20=(C_word)C_i_cdr(t2);
t21=(C_word)C_a_i_list(&a,1,t5);
/* srfi-13.scm: 1940 buildit */
t22=t12;
f_7440(t22,t19,t20,t21);}
else{
/* srfi-13.scm: 1942 ##sys#error */
t18=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t18+1)))(6,t18,t13,lf[523],lf[531],t9,*((C_word*)lf[523]+1));}}}}
else{
if(C_truep((C_word)C_i_nullp(t2))){
t13=(C_word)C_eqp(t9,lf[528]);
if(C_truep(t13)){
/* srfi-13.scm: 1951 ##sys#error */
t14=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,t1,lf[523],lf[532],*((C_word*)lf[523]+1));}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,lf[533]);}}
else{
/* srfi-13.scm: 1946 ##sys#error */
t13=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t13+1)))(6,t13,t1,lf[523],lf[534],t2,*((C_word*)lf[523]+1));}}}
else{
/* ##sys#error */
t12=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}

/* k7530 in string-join in k1437 in k1434 */
static void C_ccall f_7532(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7532,2,t0,t1);}
t2=((C_word*)t0)[3];
f_7485(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7500 in string-join in k1437 in k1434 */
static void C_ccall f_7502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7502,2,t0,t1);}
t2=((C_word*)t0)[3];
f_7485(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7483 in string-join in k1437 in k1434 */
static void C_ccall f_7485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-13.scm: 1931 string-concatenate */
t2=*((C_word*)lf[478]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* buildit in string-join in k1437 in k1434 */
static void C_fcall f_7440(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7440,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7446,a[2]=t3,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=lf[526],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_7446(t7,t1,t2);}

/* recur in buildit in string-join in k1437 in k1434 */
static void C_fcall f_7446(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(5);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7446,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7468,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cdr(t2);
/* srfi-13.scm: 1927 recur */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}}

/* k7466 in recur in buildit in string-join in k1437 in k1434 */
static void C_ccall f_7468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7468,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t2));}

/* %multispan-repcopy! in k1437 in k1434 */
static void C_fcall f_7347(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7347,NULL,8,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(C_word)C_fixnum_difference(t8,t7);
t10=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7418,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t3,a[6]=t9,a[7]=t8,a[8]=t5,a[9]=t6,a[10]=t7,tmp=(C_word)a,a+=11,tmp);
/* srfi-13.scm: 1886 modulo */
t11=*((C_word*)lf[275]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,t5,t9);}

/* k7416 in %multispan-repcopy! in k1437 in k1434 */
static void C_ccall f_7418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7418,2,t0,t1);}
t2=(C_word)C_fixnum_plus(((C_word*)t0)[10],t1);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[9],((C_word*)t0)[8]);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7360,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t3,a[9]=t2,a[10]=((C_word*)t0)[7],tmp=(C_word)a,a+=11,tmp);
/* srfi-13.scm: 1890 %string-copy! */
f_5739(t4,((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3],t2,((C_word*)t0)[7]);}

/* k7358 in k7416 in %multispan-repcopy! in k1437 in k1434 */
static void C_ccall f_7360(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7360,2,t0,t1);}
t2=(C_word)C_fixnum_difference(((C_word*)t0)[10],((C_word*)t0)[9]);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[8],t2);
t4=(C_word)C_fixnum_divide(t3,((C_word*)t0)[7]);
t5=(C_word)C_fixnum_plus(((C_word*)t0)[6],t2);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7378,a[2]=((C_word*)t0)[10],a[3]=t7,a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[6],a[10]=lf[521],tmp=(C_word)a,a+=11,tmp));
t9=((C_word*)t7)[1];
f_7378(t9,((C_word*)t0)[2],t5,t4);}

/* do1296 in k7358 in k7416 in %multispan-repcopy! in k1437 in k1434 */
static void C_fcall f_7378(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7378,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
t5=(C_word)C_fixnum_difference(t2,((C_word*)t0)[9]);
t6=(C_word)C_fixnum_difference(((C_word*)t0)[8],t5);
t7=(C_word)C_fixnum_plus(((C_word*)t0)[7],t6);
/* srfi-13.scm: 1901 %string-copy! */
f_5739(t1,((C_word*)t0)[6],t2,((C_word*)t0)[5],((C_word*)t0)[7],t7);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7403,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1903 %string-copy! */
f_5739(t5,((C_word*)t0)[6],t2,((C_word*)t0)[5],((C_word*)t0)[7],((C_word*)t0)[2]);}}

/* k7401 in do1296 in k7358 in k7416 in %multispan-repcopy! in k1437 in k1434 */
static void C_ccall f_7403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_7378(t4,((C_word*)t0)[2],t2,t3);}

/* string-xcopy! in k1437 in k1434 */
static void C_ccall f_7207(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+13)){
C_save_and_reclaim((void*)tr6r,(void*)f_7207r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_7207r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_7207r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(13);
t7=(C_word)C_i_check_exact_2(t5,lf[514]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7216,a[2]=t5,a[3]=t4,a[4]=t6,a[5]=lf[517],tmp=(C_word)a,a+=6,tmp);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7260,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=t5,a[6]=lf[519],tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1850 ##sys#call-with-values */
C_call_with_values(4,0,t1,t8,t9);}

/* a7259 in string-xcopy! in k1437 in k1434 */
static void C_ccall f_7260(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7260,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_fixnum_difference(t2,((C_word*)t0)[5]);
t6=(C_word)C_fixnum_plus(((C_word*)t0)[4],t5);
t7=(C_word)C_fixnum_difference(t4,t3);
t8=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_7273,a[2]=t6,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[3],a[10]=t7,a[11]=t1,a[12]=t5,tmp=(C_word)a,a+=13,tmp);
/* srfi-13.scm: 1864 check-substring-spec */
t9=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t8,*((C_word*)lf[514]+1),((C_word*)t0)[3],((C_word*)t0)[4],t6);}

/* k7271 in a7259 in string-xcopy! in k1437 in k1434 */
static void C_ccall f_7273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7273,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[12],C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[10],C_fix(0));
if(C_truep(t3)){
/* srfi-13.scm: 1866 ##sys#error */
t4=*((C_word*)lf[3]+1);
((C_proc12)(void*)(*((C_word*)t4+1)))(12,t4,((C_word*)t0)[11],lf[514],lf[518],*((C_word*)lf[514]+1),((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t4=(C_word)C_eqp(C_fix(1),((C_word*)t0)[10]);
if(C_truep(t4)){
t5=(C_word)C_i_string_ref(((C_word*)t0)[7],((C_word*)t0)[4]);
/* srfi-13.scm: 1871 ##srfi13#string-fill! */
t6=lf[513];
((C_proc6)(void*)(*((C_word*)t6+1)))(6,t6,((C_word*)t0)[11],((C_word*)t0)[9],t5,((C_word*)t0)[8],((C_word*)t0)[2]);}
else{
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7333,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[4],tmp=(C_word)a,a+=11,tmp);
t6=(C_word)C_fixnum_divide(((C_word*)t0)[6],((C_word*)t0)[10]);
/* srfi-13.scm: 1874 floor */
t7=*((C_word*)lf[510]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}}}}

/* k7331 in k7271 in a7259 in string-xcopy! in k1437 in k1434 */
static void C_ccall f_7333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7333,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,tmp=(C_word)a,a+=12,tmp);
t3=(C_word)C_fixnum_divide(((C_word*)t0)[5],((C_word*)t0)[4]);
/* srfi-13.scm: 1874 floor */
t4=*((C_word*)lf[510]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k7335 in k7331 in k7271 in a7259 in string-xcopy! in k1437 in k1434 */
static void C_ccall f_7337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7337,2,t0,t1);}
t2=((C_word*)t0)[11];
t3=(C_word)C_eqp(t2,t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7326,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* srfi-13.scm: 1876 modulo */
t5=*((C_word*)lf[275]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[3],((C_word*)t0)[4]);}
else{
/* srfi-13.scm: 1880 %multispan-repcopy! */
f_7347(((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[10],((C_word*)t0)[2]);}}

/* k7324 in k7335 in k7331 in k7271 in a7259 in string-xcopy! in k1437 in k1434 */
static void C_ccall f_7326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7326,2,t0,t1);}
t2=(C_word)C_fixnum_plus(((C_word*)t0)[8],t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7322,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 1877 modulo */
t4=*((C_word*)lf[275]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7320 in k7324 in k7335 in k7331 in k7271 in a7259 in string-xcopy! in k1437 in k1434 */
static void C_ccall f_7322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[7],t1);
/* srfi-13.scm: 1875 %string-copy! */
f_5739(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a7215 in string-xcopy! in k1437 in k1434 */
static void C_ccall f_7216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7216,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7228,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[515],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7238,a[2]=((C_word*)t0)[4],a[3]=lf[516],tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1852 ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}
else{
t2=(C_word)C_i_string_length(((C_word*)t0)[3]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[2],t2);
/* srfi-13.scm: 1859 values */
C_values(5,0,t1,t3,C_fix(0),t2);}}

/* a7237 in a7215 in string-xcopy! in k1437 in k1434 */
static void C_ccall f_7238(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7238,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(((C_word*)t0)[2]);
t5=(C_word)C_i_check_exact_2(t4,lf[514]);
/* srfi-13.scm: 1857 values */
C_values(5,0,t1,t4,t2,t3);}

/* a7227 in a7215 in string-xcopy! in k1437 in k1434 */
static void C_ccall f_7228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7228,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* srfi-13.scm: 1852 string-parse-final-start+end */
t3=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,*((C_word*)lf[514]+1),((C_word*)t0)[2],t2);}

/* xsubstring in k1437 in k1434 */
static void C_ccall f_7069(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr4r,(void*)f_7069r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_7069r(t0,t1,t2,t3,t4);}}

static void C_ccall f_7069r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(11);
t5=(C_word)C_i_check_exact_2(t3,lf[503]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7078,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=lf[506],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7122,a[2]=t2,a[3]=t3,a[4]=lf[511],tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 1804 ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a7121 in xsubstring in k1437 in k1434 */
static void C_ccall f_7122(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7122,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_fixnum_difference(t4,t3);
t6=(C_word)C_fixnum_difference(t2,((C_word*)t0)[3]);
t7=(C_word)C_eqp(t6,C_fix(0));
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,lf[507]);}
else{
t8=(C_word)C_eqp(t5,C_fix(0));
if(C_truep(t8)){
/* srfi-13.scm: 1820 ##sys#error */
t9=*((C_word*)lf[3]+1);
((C_proc10)(void*)(*((C_word*)t9+1)))(10,t9,t1,lf[503],lf[508],*((C_word*)lf[503]+1),((C_word*)t0)[2],((C_word*)t0)[3],t2,t3,t4);}
else{
t9=(C_word)C_eqp(C_fix(1),t5);
if(C_truep(t9)){
t10=(C_word)C_i_string_ref(((C_word*)t0)[2],t3);
/* srfi-13.scm: 1824 make-string */
t11=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,t6,t10);}
else{
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7192,a[2]=t6,a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t2,a[7]=((C_word*)t0)[2],a[8]=t1,a[9]=t3,tmp=(C_word)a,a+=10,tmp);
t11=(C_word)C_fixnum_divide(((C_word*)t0)[3],t5);
/* srfi-13.scm: 1827 floor */
t12=*((C_word*)lf[510]+1);
((C_proc3)(void*)(*((C_word*)t12+1)))(3,t12,t10,t11);}}}}

/* k7190 in a7121 in xsubstring in k1437 in k1434 */
static void C_ccall f_7192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7192,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7196,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_fixnum_divide(((C_word*)t0)[6],((C_word*)t0)[5]);
/* srfi-13.scm: 1827 floor */
t4=*((C_word*)lf[510]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}

/* k7194 in k7190 in a7121 in xsubstring in k1437 in k1434 */
static void C_ccall f_7196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7196,2,t0,t1);}
t2=((C_word*)t0)[10];
t3=(C_word)C_eqp(t2,t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7182,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1828 modulo */
t5=*((C_word*)lf[275]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[4],((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7185,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 1832 make-string */
t5=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}}

/* k7183 in k7194 in k7190 in a7121 in xsubstring in k1437 in k1434 */
static void C_ccall f_7185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7185,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7188,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1833 %multispan-repcopy! */
f_7347(t2,t1,C_fix(0),((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7186 in k7183 in k7194 in k7190 in a7121 in xsubstring in k1437 in k1434 */
static void C_ccall f_7188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k7180 in k7194 in k7190 in a7121 in xsubstring in k1437 in k1434 */
static void C_ccall f_7182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7182,2,t0,t1);}
t2=(C_word)C_fixnum_plus(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7178,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1829 modulo */
t4=*((C_word*)lf[275]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7176 in k7180 in k7194 in k7190 in a7121 in xsubstring in k1437 in k1434 */
static void C_ccall f_7178(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],t1);
/* srfi-13.scm: 1828 ##sys#substring */
t3=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a7077 in xsubstring in k1437 in k1434 */
static void C_ccall f_7078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7078,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7090,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[504],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7100,a[2]=((C_word*)t0)[4],a[3]=lf[505],tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1806 ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}
else{
t2=(C_word)C_i_string_length(((C_word*)t0)[3]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[2],t2);
/* srfi-13.scm: 1816 values */
C_values(5,0,t1,t3,C_fix(0),t2);}}

/* a7099 in a7077 in xsubstring in k1437 in k1434 */
static void C_ccall f_7100(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7100,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(((C_word*)t0)[2]);
t5=(C_word)C_i_check_exact_2(t4,lf[503]);
/* srfi-13.scm: 1813 values */
C_values(5,0,t1,t4,t2,t3);}

/* a7089 in a7077 in xsubstring in k1437 in k1434 */
static void C_ccall f_7090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7090,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* srfi-13.scm: 1806 string-parse-final-start+end */
t3=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,*((C_word*)lf[503]+1),((C_word*)t0)[2],t2);}

/* string-tokenize in k1437 in k1434 */
static void C_ccall f_6987(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_6987r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6987r(t0,t1,t2,t3);}}

static void C_ccall f_6987r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(10);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[498]+1):(C_word)C_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6999,a[2]=t7,a[3]=t2,a[4]=lf[499],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7005,a[2]=t5,a[3]=t2,a[4]=lf[501],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t8,t9);}

/* a7004 in string-tokenize in k1437 in k1434 */
static void C_ccall f_7005(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7005,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7011,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=lf[500],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_7011(t7,t1,t3,C_SCHEME_END_OF_LIST);}

/* lp in a7004 in string-tokenize in k1437 in k1434 */
static void C_fcall f_7011(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7011,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7015,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t5=((C_word*)t0)[3];
t6=t2;
if(C_truep((C_word)C_fixnum_lessp(t5,t6))){
/* srfi-13.scm: 1761 string-index-right */
t7=*((C_word*)lf[378]+1);
((C_proc6)(void*)(*((C_word*)t7+1)))(6,t7,t4,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[3],t2);}
else{
t7=t4;
f_7015(2,t7,C_SCHEME_FALSE);}}

/* k7013 in lp in a7004 in string-tokenize in k1437 in k1434 */
static void C_ccall f_7015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7015,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(C_fix(1),t1);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7024,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 1764 string-skip-right */
t4=*((C_word*)lf[338]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[3],t1);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[7]);}}

/* k7022 in k7013 in lp in a7004 in string-tokenize in k1437 in k1434 */
static void C_ccall f_7024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7024,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7038,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_fixnum_plus(C_fix(1),t1);
/* srfi-13.scm: 1767 ##sys#substring */
t4=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[4],t3,((C_word*)t0)[3]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7049,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1769 ##sys#substring */
t3=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k7047 in k7022 in k7013 in lp in a7004 in string-tokenize in k1437 in k1434 */
static void C_ccall f_7049(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7049,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k7036 in k7022 in k7013 in lp in a7004 in string-tokenize in k1437 in k1434 */
static void C_ccall f_7038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7038,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* srfi-13.scm: 1766 lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_7011(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a6998 in string-tokenize in k1437 in k1434 */
static void C_ccall f_6999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6999,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[497]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-replace in k1437 in k1434 */
static void C_ccall f_6936(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr6r,(void*)f_6936r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_6936r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_6936r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word *a=C_alloc(8);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6940,a[2]=t1,a[3]=t4,a[4]=t5,a[5]=t2,a[6]=t6,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 1738 check-substring-spec */
t8=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t7,*((C_word*)lf[493]+1),t2,t4,t5);}

/* k6938 in string-replace in k1437 in k1434 */
static void C_ccall f_6940(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6940,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6945,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=lf[494],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6951,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=lf[495],tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1739 ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a6950 in k6938 in string-replace in k1437 in k1434 */
static void C_ccall f_6951(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6951,4,t0,t1,t2,t3);}
t4=(C_word)C_i_string_length(((C_word*)t0)[5]);
t5=(C_word)C_fixnum_difference(t3,t2);
t6=(C_word)C_fixnum_difference(((C_word*)t0)[4],((C_word*)t0)[3]);
t7=(C_word)C_fixnum_difference(t4,t6);
t8=(C_word)C_fixnum_plus(t7,t5);
t9=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6964,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t5,a[9]=((C_word*)t0)[3],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* srfi-13.scm: 1743 make-string */
t10=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t9,t8);}

/* k6962 in a6950 in k6938 in string-replace in k1437 in k1434 */
static void C_ccall f_6964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6964,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6967,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* srfi-13.scm: 1744 %string-copy! */
f_5739(t2,t1,C_fix(0),((C_word*)t0)[7],C_fix(0),((C_word*)t0)[9]);}

/* k6965 in k6962 in a6950 in k6938 in string-replace in k1437 in k1434 */
static void C_ccall f_6967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6967,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6970,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
/* srfi-13.scm: 1745 %string-copy! */
f_5739(t2,((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6968 in k6965 in k6962 in a6950 in k6938 in string-replace in k1437 in k1434 */
static void C_ccall f_6970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6970,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6973,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]);
/* srfi-13.scm: 1746 %string-copy! */
f_5739(t2,((C_word*)t0)[7],t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6971 in k6968 in k6965 in k6962 in a6950 in k6938 in string-replace in k1437 in k1434 */
static void C_ccall f_6973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a6944 in k6938 in string-replace in k1437 in k1434 */
static void C_ccall f_6945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6945,2,t0,t1);}
/* srfi-13.scm: 1739 string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[493]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %finish-string-concatenate-reverse in k1437 in k1434 */
static void C_fcall f_6893(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6893,NULL,5,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6897,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t7=(C_word)C_fixnum_plus(t5,t2);
/* srfi-13.scm: 1718 make-string */
t8=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* k6895 in %finish-string-concatenate-reverse in k1437 in k1434 */
static void C_ccall f_6897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6900,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1719 %string-copy! */
f_5739(t2,t1,((C_word*)t0)[5],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k6898 in k6895 in %finish-string-concatenate-reverse in k1437 in k1434 */
static void C_ccall f_6900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6900,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6903,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6905,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=lf[491],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6905(t6,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lp in k6898 in k6895 in %finish-string-concatenate-reverse in k1437 in k1434 */
static void C_fcall f_6905(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6905,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_car(t3);
t5=(C_word)C_i_cdr(t3);
t6=(C_word)C_i_string_length(t4);
t7=(C_word)C_fixnum_difference(t2,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6927,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1726 %string-copy! */
f_5739(t8,((C_word*)t0)[2],t7,t4,C_fix(0),t6);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k6925 in lp in k6898 in k6895 in %finish-string-concatenate-reverse in k1437 in k1434 */
static void C_ccall f_6927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-13.scm: 1727 lp */
t2=((C_word*)((C_word*)t0)[5])[1];
f_6905(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6901 in k6898 in k6895 in %finish-string-concatenate-reverse in k1437 in k1434 */
static void C_ccall f_6903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* string-concatenate-reverse/shared in k1437 in k1434 */
static void C_ccall f_6764(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_6764r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6764r(t0,t1,t2,t3);}}

static void C_ccall f_6764r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?lf[488]:(C_word)C_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
t8=(C_word)C_i_nullp(t7);
t9=(C_truep(t8)?(C_word)C_i_string_length(t5):(C_word)C_i_car(t7));
t10=(C_word)C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t7));
if(C_truep((C_word)C_i_nullp(t11))){
t12=(C_word)C_i_check_exact_2(t9,lf[487]);
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6791,a[2]=t9,a[3]=t5,a[4]=t14,a[5]=lf[489],tmp=(C_word)a,a+=6,tmp));
t16=((C_word*)t14)[1];
f_6791(t16,t1,C_fix(0),C_SCHEME_FALSE,t2);}
else{
/* ##sys#error */
t12=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}

/* lp in string-concatenate-reverse/shared in k1437 in k1434 */
static void C_fcall f_6791(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t22;
C_word *a;
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6791,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_i_car(t4);
t6=(C_word)C_i_string_length(t5);
t7=(C_word)C_fixnum_plus(t2,t6);
t8=t3;
t9=(C_truep(t8)?t8:(C_word)C_eqp(t6,C_fix(0)));
t10=(C_truep(t9)?t3:t4);
t11=(C_word)C_i_cdr(t4);
/* srfi-13.scm: 1704 lp */
t19=t1;
t20=t7;
t21=t10;
t22=t11;
t1=t19;
t2=t20;
t3=t21;
t4=t22;
goto loop;}
else{
t5=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t5)){
/* srfi-13.scm: 1708 substring/shared */
t6=*((C_word*)lf[20]+1);
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t1,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t3,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t7=(C_word)C_eqp(((C_word*)t0)[2],C_fix(0));
if(C_truep(t7)){
t8=(C_word)C_i_car(t3);
t9=(C_word)C_i_string_length(t8);
t10=t2;
t11=t6;
f_6841(t11,(C_word)C_eqp(t10,t9));}
else{
t8=t6;
f_6841(t8,C_SCHEME_FALSE);}}}}

/* k6839 in lp in string-concatenate-reverse/shared in k1437 in k1434 */
static void C_fcall f_6841(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_car(((C_word*)t0)[5]));}
else{
/* srfi-13.scm: 1715 %finish-string-concatenate-reverse */
f_6893(((C_word*)t0)[6],((C_word*)t0)[4],((C_word*)t0)[5],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* string-concatenate-reverse in k1437 in k1434 */
static void C_ccall f_6676(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr3r,(void*)f_6676r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6676r(t0,t1,t2,t3);}}

static void C_ccall f_6676r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(3);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?lf[483]:(C_word)C_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
t8=(C_word)C_i_nullp(t7);
t9=(C_truep(t8)?(C_word)C_i_string_length(t5):(C_word)C_i_car(t7));
t10=(C_word)C_i_nullp(t7);
t11=(C_truep(t10)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t7));
if(C_truep((C_word)C_i_nullp(t11))){
t12=(C_word)C_i_check_exact_2(t9,lf[482]);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6706,a[2]=lf[484],tmp=(C_word)a,a+=3,tmp);
t14=f_6706(C_fix(0),t2);
/* srfi-13.scm: 1689 %finish-string-concatenate-reverse */
f_6893(t1,t14,t2,t5,t9);}
else{
/* ##sys#error */
t12=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}

/* lp in string-concatenate-reverse in k1437 in k1434 */
static C_word C_fcall f_6706(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
loop:
C_stack_check;
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_string_length(t3);
t5=(C_word)C_fixnum_plus(t1,t4);
t6=(C_word)C_i_cdr(t2);
t8=t5;
t9=t6;
t1=t8;
t2=t9;
goto loop;}
else{
return(t1);}}

/* string-concatenate in k1437 in k1434 */
static void C_ccall f_6603(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6603,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6644,a[2]=lf[479],tmp=(C_word)a,a+=3,tmp);
t4=f_6644(t2,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6610,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1656 make-string */
t6=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}

/* k6608 in string-concatenate in k1437 in k1434 */
static void C_ccall f_6610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6610,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6613,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6615,a[2]=t1,a[3]=t4,a[4]=lf[480],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6615(t6,t2,C_fix(0),((C_word*)t0)[2]);}

/* lp in k6608 in string-concatenate in k1437 in k1434 */
static void C_fcall f_6615(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6615,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_car(t3);
t5=(C_word)C_i_string_length(t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6631,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t5,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1661 %string-copy! */
f_5739(t6,((C_word*)t0)[2],t2,t4,C_fix(0),t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k6629 in lp in k6608 in string-concatenate in k1437 in k1434 */
static void C_ccall f_6631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* srfi-13.scm: 1662 lp */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6615(t4,((C_word*)t0)[2],t2,t3);}

/* k6611 in k6608 in string-concatenate in k1437 in k1434 */
static void C_ccall f_6613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* do1146 in string-concatenate in k1437 in k1434 */
static C_word C_fcall f_6644(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
loop:
C_stack_check;
if(C_truep((C_word)C_i_pairp(t1))){
t3=(C_word)C_i_cdr(t1);
t4=(C_word)C_i_car(t1);
t5=(C_word)C_i_string_length(t4);
t6=(C_word)C_fixnum_plus(t2,t5);
t8=t3;
t9=t6;
t1=t8;
t2=t9;
goto loop;}
else{
return(t2);}}

/* string-concatenate/shared in k1437 in k1434 */
static void C_ccall f_6501(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6501,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6507,a[2]=t4,a[3]=lf[476],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_6507(t6,t1,t2,C_fix(0),C_SCHEME_FALSE);}

/* lp in string-concatenate/shared in k1437 in k1434 */
static void C_fcall f_6507(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t22;
C_word *a;
loop:
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6507,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_pairp(t2))){
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_i_string_length(t5);
t8=(C_word)C_eqp(t7,C_fix(0));
if(C_truep(t8)){
/* srfi-13.scm: 1629 lp */
t19=t1;
t20=t6;
t21=t3;
t22=t4;
t1=t19;
t2=t20;
t3=t21;
t4=t22;
goto loop;}
else{
t9=(C_word)C_fixnum_plus(t3,t7);
t10=t4;
t11=(C_truep(t10)?t10:t2);
/* srfi-13.scm: 1630 lp */
t19=t1;
t20=t6;
t21=t9;
t22=t11;
t1=t19;
t2=t20;
t3=t21;
t4=t22;
goto loop;}}
else{
t5=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[474]);}
else{
t6=(C_word)C_i_car(t4);
t7=(C_word)C_i_string_length(t6);
t8=t3;
t9=(C_word)C_eqp(t8,t7);
if(C_truep(t9)){
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_i_car(t4));}
else{
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6561,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1637 make-string */
t11=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t10,t3);}}}}

/* k6559 in lp in string-concatenate/shared in k1437 in k1434 */
static void C_ccall f_6561(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6561,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6564,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6566,a[2]=t1,a[3]=t4,a[4]=lf[475],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6566(t6,t2,((C_word*)t0)[2],C_fix(0));}

/* lp in k6559 in lp in string-concatenate/shared in k1437 in k1434 */
static void C_fcall f_6566(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6566,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_string_length(t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6582,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1642 %string-copy! */
f_5739(t6,((C_word*)t0)[2],t3,t4,C_fix(0),t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k6580 in lp in k6559 in lp in string-concatenate/shared in k1437 in k1434 */
static void C_ccall f_6582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
/* srfi-13.scm: 1643 lp */
t4=((C_word*)((C_word*)t0)[3])[1];
f_6566(t4,((C_word*)t0)[2],t2,t3);}

/* k6562 in k6559 in lp in string-concatenate/shared in k1437 in k1434 */
static void C_ccall f_6564(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* string-append/shared in k1437 in k1434 */
static void C_ccall f_6495(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2r,(void*)f_6495r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6495r(t0,t1,t2);}}

static void C_ccall f_6495r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
/* srfi-13.scm: 1620 string-concatenate/shared */
t3=*((C_word*)lf[472]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,t2);}

/* string->list in k1437 in k1434 */
static void C_ccall f_6449(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_6449r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6449r(t0,t1,t2,t3);}}

static void C_ccall f_6449r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6455,a[2]=t3,a[3]=t2,a[4]=lf[467],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6461,a[2]=t2,a[3]=lf[469],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a6460 in string->list in k1437 in k1434 */
static void C_ccall f_6461(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6461,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(t3,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6471,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=lf[468],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_6471(t8,t1,t4,C_SCHEME_END_OF_LIST);}

/* do1118 in a6460 in string->list in k1437 in k1434 */
static void C_fcall f_6471(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_6471,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_lessp(t4,t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t6=(C_word)C_fixnum_difference(t2,C_fix(1));
t7=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
t8=(C_word)C_a_i_cons(&a,2,t7,t3);
t10=t1;
t11=t6;
t12=t8;
t1=t10;
t2=t11;
t3=t12;
goto loop;}}

/* a6454 in string->list in k1437 in k1434 */
static void C_ccall f_6455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6455,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[466]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-reverse! in k1437 in k1434 */
static void C_ccall f_6394(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_6394r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6394r(t0,t1,t2,t3);}}

static void C_ccall f_6394r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6400,a[2]=t3,a[3]=t2,a[4]=lf[462],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6406,a[2]=t2,a[3]=lf[464],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a6405 in string-reverse! in k1437 in k1434 */
static void C_ccall f_6406(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6406,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6416,a[2]=((C_word*)t0)[2],a[3]=lf[463],tmp=(C_word)a,a+=4,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_6416(t5,t4,t2));}

/* do1106 in a6405 in string-reverse! in k1437 in k1434 */
static C_word C_fcall f_6416(C_word t0,C_word t1,C_word t2){
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
loop:
C_stack_check;
t3=t1;
t4=t2;
if(C_truep((C_word)C_fixnum_less_or_equal_p(t3,t4))){
return(C_SCHEME_UNDEFINED);}
else{
t5=(C_word)C_i_string_ref(((C_word*)t0)[2],t1);
t6=(C_word)C_i_string_ref(((C_word*)t0)[2],t2);
t7=(C_word)C_i_string_set(((C_word*)t0)[2],t1,t6);
t8=(C_word)C_i_string_set(((C_word*)t0)[2],t2,t5);
t9=(C_word)C_fixnum_difference(t1,C_fix(1));
t10=(C_word)C_fixnum_plus(t2,C_fix(1));
t12=t9;
t13=t10;
t1=t12;
t2=t13;
goto loop;}}

/* a6399 in string-reverse! in k1437 in k1434 */
static void C_ccall f_6400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6400,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[461]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-reverse in k1437 in k1434 */
static void C_ccall f_6339(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_6339r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6339r(t0,t1,t2,t3);}}

static void C_ccall f_6339r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6345,a[2]=t3,a[3]=t2,a[4]=lf[457],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6351,a[2]=t2,a[3]=lf[459],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a6350 in string-reverse in k1437 in k1434 */
static void C_ccall f_6351(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6351,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(t3,t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6358,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1562 make-string */
t6=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}

/* k6356 in a6350 in string-reverse in k1437 in k1434 */
static void C_ccall f_6358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6358,2,t0,t1);}
t2=(C_word)C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6367,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=lf[458],tmp=(C_word)a,a+=5,tmp);
t4=f_6367(t3,((C_word*)t0)[3],t2);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}

/* do1095 in k6356 in a6350 in string-reverse in k1437 in k1434 */
static C_word C_fcall f_6367(C_word t0,C_word t1,C_word t2){
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
C_stack_check;
t3=t2;
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
return(C_SCHEME_UNDEFINED);}
else{
t4=(C_word)C_i_string_ref(((C_word*)t0)[3],t1);
t5=(C_word)C_i_string_set(((C_word*)t0)[2],t2,t4);
t6=(C_word)C_fixnum_plus(t1,C_fix(1));
t7=(C_word)C_fixnum_difference(t2,C_fix(1));
t9=t6;
t10=t7;
t1=t9;
t2=t10;
goto loop;}}

/* a6344 in string-reverse in k1437 in k1434 */
static void C_ccall f_6345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6345,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[456]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-null? in k1437 in k1434 */
static void C_ccall f_6336(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6336,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_string_null_p(t2));}

/* string-kmp-partial-search in k1437 in k1434 */
static void C_ccall f_6215(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+14)){
C_save_and_reclaim((void*)tr6r,(void*)f_6215r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_6215r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_6215r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
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
C_word *a=C_alloc(14);
t7=(C_word)C_i_nullp(t6);
t8=(C_truep(t7)?*((C_word*)lf[438]+1):(C_word)C_i_car(t6));
t9=(C_word)C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t6));
t11=(C_word)C_i_nullp(t10);
t12=(C_truep(t11)?C_fix(0):(C_word)C_i_car(t10));
t13=(C_word)C_i_nullp(t10);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t10));
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6233,a[2]=t14,a[3]=t4,a[4]=lf[449],tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6239,a[2]=t5,a[3]=t8,a[4]=t2,a[5]=t12,a[6]=t4,a[7]=t3,a[8]=lf[452],tmp=(C_word)a,a+=9,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t15,t16);}

/* a6238 in string-kmp-partial-search in k1437 in k1434 */
static void C_ccall f_6239(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6239,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_vector_length(((C_word*)t0)[7]);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6248,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=t7,a[7]=((C_word*)t0)[6],a[8]=t4,a[9]=t5,a[10]=lf[451],tmp=(C_word)a,a+=11,tmp));
t9=((C_word*)t7)[1];
f_6248(t9,t1,t3,((C_word*)t0)[2]);}

/* lp in a6238 in string-kmp-partial-search in k1437 in k1434 */
static void C_fcall f_6248(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6248,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=(C_word)C_eqp(t4,((C_word*)t0)[9]);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_fixnum_negate(t2));}
else{
t6=t2;
t7=((C_word*)t0)[8];
t8=(C_word)C_eqp(t6,t7);
if(C_truep(t8)){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t3);}
else{
t9=(C_word)C_i_string_ref(((C_word*)t0)[7],t2);
t10=(C_word)C_fixnum_plus(t2,C_fix(1));
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6278,a[2]=t10,a[3]=t1,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6280,a[2]=t9,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t13,a[7]=((C_word*)t0)[5],a[8]=lf[450],tmp=(C_word)a,a+=9,tmp));
t15=((C_word*)t13)[1];
f_6280(t15,t11,t3);}}}

/* lp2 in lp in a6238 in string-kmp-partial-search in k1437 in k1434 */
static void C_fcall f_6280(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6280,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6287,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_fixnum_plus(t2,((C_word*)t0)[5]);
t5=(C_word)C_i_string_ref(((C_word*)t0)[4],t4);
/* srfi-13.scm: 1542 c= */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t3,((C_word*)t0)[2],t5);}

/* k6285 in lp2 in lp in a6238 in string-kmp-partial-search in k1437 in k1434 */
static void C_ccall f_6287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}
else{
t2=(C_word)C_i_vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(0));}
else{
/* srfi-13.scm: 1546 lp2 */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6280(t4,((C_word*)t0)[5],t2);}}}

/* k6276 in lp in a6238 in string-kmp-partial-search in k1437 in k1434 */
static void C_ccall f_6278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-13.scm: 1540 lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_6248(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a6232 in string-kmp-partial-search in k1437 in k1434 */
static void C_ccall f_6233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6233,2,t0,t1);}
/* srfi-13.scm: 1531 string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[448]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* kmp-step in k1437 in k1434 */
static void C_ccall f_6177(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[11],*a=ab;
if(c!=8) C_bad_argc_2(c,8,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr8,(void*)f_6177,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6183,a[2]=t4,a[3]=t6,a[4]=t2,a[5]=t7,a[6]=t9,a[7]=t3,a[8]=lf[446],tmp=(C_word)a,a+=9,tmp));
t11=((C_word*)t9)[1];
f_6183(t11,t1,t5);}

/* lp in kmp-step in k1437 in k1434 */
static void C_fcall f_6183(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6183,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6190,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_fixnum_plus(t2,((C_word*)t0)[5]);
t5=(C_word)C_i_string_ref(((C_word*)t0)[4],t4);
/* srfi-13.scm: 1509 c= */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t3,((C_word*)t0)[2],t5);}

/* k6188 in lp in kmp-step in k1437 in k1434 */
static void C_ccall f_6190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}
else{
t2=(C_word)C_i_vector_ref(((C_word*)t0)[3],((C_word*)t0)[4]);
t3=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_fix(0));}
else{
/* srfi-13.scm: 1513 lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6183(t4,((C_word*)t0)[5],t2);}}}

/* make-kmp-restart-vector in k1437 in k1434 */
static void C_ccall f_6042(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_6042r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6042r(t0,t1,t2,t3);}}

static void C_ccall f_6042r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(10);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[438]+1):(C_word)C_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6054,a[2]=t7,a[3]=t2,a[4]=lf[439],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6060,a[2]=t5,a[3]=t2,a[4]=lf[443],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t8,t9);}

/* a6059 in make-kmp-restart-vector in k1437 in k1434 */
static void C_ccall f_6060(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6060,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_fixnum_difference(t4,t3);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6067,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1463 make-vector */
t7=*((C_word*)lf[442]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t5,C_fix(-1));}

/* k6065 in a6059 in make-kmp-restart-vector in k1437 in k1434 */
static void C_ccall f_6067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6067,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6070,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[5],C_fix(0)))){
t3=(C_word)C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_i_string_ref(((C_word*)t0)[4],((C_word*)t0)[3]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6084,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t6,a[6]=t1,a[7]=((C_word*)t0)[4],a[8]=t3,a[9]=lf[441],tmp=(C_word)a,a+=10,tmp));
t8=((C_word*)t6)[1];
f_6084(t8,t2,C_fix(0),C_fix(-1),((C_word*)t0)[3]);}
else{
t3=t2;
f_6070(2,t3,C_SCHEME_UNDEFINED);}}

/* lp1 in k6065 in a6059 in make-kmp-restart-vector in k1437 in k1434 */
static void C_fcall f_6084(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6084,NULL,5,t0,t1,t2,t3,t4);}
t5=t2;
if(C_truep((C_word)C_fixnum_lessp(t5,((C_word*)t0)[8]))){
t6=(C_word)C_i_string_ref(((C_word*)t0)[7],t4);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6099,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=t8,a[5]=((C_word*)t0)[3],a[6]=t6,a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=t4,a[10]=((C_word*)t0)[6],a[11]=t2,a[12]=lf[440],tmp=(C_word)a,a+=13,tmp));
t10=((C_word*)t8)[1];
f_6099(t10,t1,t3);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}

/* lp2 in lp1 in k6065 in a6059 in make-kmp-restart-vector in k1437 in k1434 */
static void C_fcall f_6099(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6099,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_eqp(t3,C_fix(-1));
if(C_truep(t4)){
t5=(C_word)C_fixnum_plus(((C_word*)t0)[11],C_fix(1));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6126,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=t5,a[6]=((C_word*)t0)[10],tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1481 c= */
t7=((C_word*)t0)[7];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6132,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=t2,a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
t6=(C_word)C_fixnum_plus(t2,((C_word*)t0)[3]);
t7=(C_word)C_i_string_ref(((C_word*)t0)[2],t6);
/* srfi-13.scm: 1485 c= */
t8=((C_word*)t0)[7];
((C_proc4)C_retrieve_proc(t8))(4,t8,t5,((C_word*)t0)[6],t7);}}

/* k6130 in lp2 in lp1 in k6065 in a6059 in make-kmp-restart-vector in k1437 in k1434 */
static void C_ccall f_6132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(C_fix(1),((C_word*)t0)[8]);
t3=(C_word)C_fixnum_plus(C_fix(1),((C_word*)t0)[7]);
t4=(C_word)C_i_vector_set(((C_word*)t0)[6],t2,t3);
t5=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* srfi-13.scm: 1489 lp1 */
t6=((C_word*)((C_word*)t0)[4])[1];
f_6084(t6,((C_word*)t0)[3],t2,t3,t5);}
else{
t2=(C_word)C_i_vector_ref(((C_word*)t0)[6],((C_word*)t0)[7]);
/* srfi-13.scm: 1491 lp2 */
t3=((C_word*)((C_word*)t0)[2])[1];
f_6099(t3,((C_word*)t0)[3],t2);}}

/* k6124 in lp2 in lp1 in k6065 in a6059 in make-kmp-restart-vector in k1437 in k1434 */
static void C_ccall f_6126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_truep(t1)?C_fix(-1):C_fix(0));
t3=(C_word)C_i_vector_set(((C_word*)t0)[6],((C_word*)t0)[5],t2);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 1482 lp1 */
t5=((C_word*)((C_word*)t0)[3])[1];
f_6084(t5,((C_word*)t0)[2],((C_word*)t0)[5],C_fix(0),t4);}

/* k6068 in k6065 in a6059 in make-kmp-restart-vector in k1437 in k1434 */
static void C_ccall f_6070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a6053 in make-kmp-restart-vector in k1437 in k1434 */
static void C_ccall f_6054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6054,2,t0,t1);}
/* srfi-13.scm: 1461 string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[436]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %kmp-search in k1437 in k1434 */
static void C_ccall f_5944(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word ab[10],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_5944,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(C_word)C_fixnum_difference(t6,t5);
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5951,a[2]=t1,a[3]=t4,a[4]=t2,a[5]=t5,a[6]=t3,a[7]=t9,a[8]=t7,a[9]=t8,tmp=(C_word)a,a+=10,tmp);
/* srfi-13.scm: 1410 make-kmp-restart-vector */
t11=*((C_word*)lf[436]+1);
((C_proc6)(void*)(*((C_word*)t11+1)))(6,t11,t10,t2,t4,t5,t6);}

/* k5949 in %kmp-search in k1437 in k1434 */
static void C_ccall f_5951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5951,2,t0,t1);}
t2=(C_word)C_fixnum_difference(((C_word*)t0)[9],((C_word*)t0)[8]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5960,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=t4,a[8]=((C_word*)t0)[7],a[9]=lf[435],tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_5960(t6,((C_word*)t0)[2],((C_word*)t0)[8],C_fix(0),t2,((C_word*)t0)[7]);}

/* lp in k5949 in %kmp-search in k1437 in k1434 */
static void C_fcall f_5960(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5960,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=t3;
t7=(C_word)C_eqp(t6,((C_word*)t0)[8]);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_fixnum_difference(t2,((C_word*)t0)[8]));}
else{
t8=t5;
t9=t4;
if(C_truep((C_word)C_fixnum_less_or_equal_p(t8,t9))){
t10=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5982,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=t5,a[7]=t4,a[8]=t3,a[9]=t2,tmp=(C_word)a,a+=10,tmp);
t11=(C_word)C_i_string_ref(((C_word*)t0)[5],t2);
t12=(C_word)C_fixnum_plus(((C_word*)t0)[4],t3);
t13=(C_word)C_i_string_ref(((C_word*)t0)[3],t12);
/* srfi-13.scm: 1421 c= */
t14=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t14))(4,t14,t10,t11,t13);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}}

/* k5980 in lp in k5949 in %kmp-search in k1437 in k1434 */
static void C_ccall f_5982(C_word c,C_word t0,C_word t1){
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
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(C_fix(1),((C_word*)t0)[9]);
t3=(C_word)C_fixnum_plus(C_fix(1),((C_word*)t0)[8]);
t4=(C_word)C_fixnum_difference(((C_word*)t0)[7],C_fix(1));
t5=(C_word)C_fixnum_difference(((C_word*)t0)[6],C_fix(1));
/* srfi-13.scm: 1423 lp */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5960(t6,((C_word*)t0)[4],t2,t3,t4,t5);}
else{
t2=(C_word)C_i_vector_ref(((C_word*)t0)[3],((C_word*)t0)[8]);
t3=(C_word)C_eqp(t2,C_fix(-1));
if(C_truep(t3)){
t4=(C_word)C_fixnum_plus(((C_word*)t0)[9],C_fix(1));
t5=(C_word)C_fixnum_difference(((C_word*)t0)[7],C_fix(1));
/* srfi-13.scm: 1427 lp */
t6=((C_word*)((C_word*)t0)[5])[1];
f_5960(t6,((C_word*)t0)[4],t4,C_fix(0),t5,((C_word*)t0)[2]);}
else{
t4=(C_word)C_fixnum_difference(((C_word*)t0)[2],t2);
/* srfi-13.scm: 1428 lp */
t5=((C_word*)((C_word*)t0)[5])[1];
f_5960(t5,((C_word*)t0)[4],((C_word*)t0)[9],t2,((C_word*)t0)[7],t4);}}}

/* string-contains-ci in k1437 in k1434 */
static void C_ccall f_5882(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_5882r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5882r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5882r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[420]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5888,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[428],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5894,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[432],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a5893 in string-contains-ci in k1437 in k1434 */
static void C_ccall f_5894(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5894,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5900,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[429],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5906,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=lf[431],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a5905 in a5893 in string-contains-ci in k1437 in k1434 */
static void C_ccall f_5906(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5906,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(t3,t2);
t5=(C_word)C_fixnum_difference(((C_word*)t0)[5],t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5918,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=t7,a[8]=t5,a[9]=lf[430],tmp=(C_word)a,a+=10,tmp));
t9=((C_word*)t7)[1];
f_5918(t9,t1,((C_word*)t0)[2]);}

/* lp in a5905 in a5893 in string-contains-ci in k1437 in k1434 */
static void C_fcall f_5918(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5918,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,((C_word*)t0)[8]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5931,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_fixnum_plus(t2,((C_word*)t0)[6]);
/* srfi-13.scm: 1380 string-ci= */
t5=*((C_word*)lf[227]+1);
((C_proc8)(void*)(*((C_word*)t5+1)))(8,t5,t3,((C_word*)t0)[5],((C_word*)t0)[4],t2,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k5929 in lp in a5905 in a5893 in string-contains-ci in k1437 in k1434 */
static void C_ccall f_5931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 1382 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5918(t3,((C_word*)t0)[4],t2);}}

/* a5899 in a5893 in string-contains-ci in k1437 in k1434 */
static void C_ccall f_5900(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5900,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5887 in string-contains-ci in k1437 in k1434 */
static void C_ccall f_5888(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5888,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-contains in k1437 in k1434 */
static void C_ccall f_5820(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_5820r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5820r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5820r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[420]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5826,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[421],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5832,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[425],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a5831 in string-contains in k1437 in k1434 */
static void C_ccall f_5832(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5832,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5838,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[422],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5844,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=lf[424],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a5843 in a5831 in string-contains in k1437 in k1434 */
static void C_ccall f_5844(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[12],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5844,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(t3,t2);
t5=(C_word)C_fixnum_difference(((C_word*)t0)[5],t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5856,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=t7,a[8]=t5,a[9]=lf[423],tmp=(C_word)a,a+=10,tmp));
t9=((C_word*)t7)[1];
f_5856(t9,t1,((C_word*)t0)[2]);}

/* lp in a5843 in a5831 in string-contains in k1437 in k1434 */
static void C_fcall f_5856(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5856,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_less_or_equal_p(t2,((C_word*)t0)[8]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5869,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_fixnum_plus(t2,((C_word*)t0)[6]);
/* srfi-13.scm: 1369 string= */
t5=*((C_word*)lf[181]+1);
((C_proc8)(void*)(*((C_word*)t5+1)))(8,t5,t3,((C_word*)t0)[5],((C_word*)t0)[4],t2,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k5867 in lp in a5843 in a5831 in string-contains in k1437 in k1434 */
static void C_ccall f_5869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 1371 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5856(t3,((C_word*)t0)[4],t2);}}

/* a5837 in a5831 in string-contains in k1437 in k1434 */
static void C_ccall f_5838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5838,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5825 in string-contains in k1437 in k1434 */
static void C_ccall f_5826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5826,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-copy! in k1437 in k1434 */
static void C_fcall f_5739(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5739,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=t5;
t8=t3;
if(C_truep((C_word)C_fixnum_greaterp(t7,t8))){
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5751,a[2]=t2,a[3]=t4,a[4]=t6,a[5]=lf[417],tmp=(C_word)a,a+=6,tmp);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,f_5751(t9,t5,t3));}
else{
t9=(C_word)C_fixnum_difference(t6,C_fix(1));
t10=(C_word)C_fixnum_difference(t6,t5);
t11=(C_word)C_fixnum_plus((C_word)C_fixnum_plus(C_fix(-1),t3),t10);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5789,a[2]=t2,a[3]=t4,a[4]=t5,a[5]=lf[418],tmp=(C_word)a,a+=6,tmp);
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,f_5789(t12,t9,t11));}}

/* do967 in %string-copy! in k1437 in k1434 */
static C_word C_fcall f_5789(C_word t0,C_word t1,C_word t2){
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
t3=t1;
t4=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
return(C_SCHEME_UNDEFINED);}
else{
t5=(C_word)C_i_string_ref(((C_word*)t0)[3],t1);
t6=(C_word)C_i_string_set(((C_word*)t0)[2],t2,t5);
t7=(C_word)C_fixnum_difference(t1,C_fix(1));
t8=(C_word)C_fixnum_difference(t2,C_fix(1));
t10=t7;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* do961 in %string-copy! in k1437 in k1434 */
static C_word C_fcall f_5751(C_word t0,C_word t1,C_word t2){
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
t3=t1;
t4=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,t4))){
return(C_SCHEME_UNDEFINED);}
else{
t5=(C_word)C_i_string_ref(((C_word*)t0)[3],t1);
t6=(C_word)C_i_string_set(((C_word*)t0)[2],t2,t5);
t7=(C_word)C_fixnum_plus(t1,C_fix(1));
t8=(C_word)C_fixnum_plus(t2,C_fix(1));
t10=t7;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* string-copy! in k1437 in k1434 */
static void C_ccall f_5707(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr5r,(void*)f_5707r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_5707r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_5707r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(11);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5713,a[2]=t5,a[3]=t4,a[4]=lf[414],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5719,a[2]=t4,a[3]=t2,a[4]=t3,a[5]=lf[415],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a5718 in string-copy! in k1437 in k1434 */
static void C_ccall f_5719(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5719,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(((C_word*)t0)[4],lf[413]);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5726,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[3],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_fixnum_difference(t3,t2);
t7=(C_word)C_fixnum_plus(((C_word*)t0)[4],t6);
/* srfi-13.scm: 1338 check-substring-spec */
t8=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t5,*((C_word*)lf[413]+1),((C_word*)t0)[3],((C_word*)t0)[4],t7);}

/* k5724 in a5718 in string-copy! in k1437 in k1434 */
static void C_ccall f_5726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-13.scm: 1339 %string-copy! */
f_5739(((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a5712 in string-copy! in k1437 in k1434 */
static void C_ccall f_5713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5713,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[413]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-fill! in k1437 in k1434 */
static void C_ccall f_5666(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_5666r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5666r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5666r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5672,a[2]=t4,a[3]=t2,a[4]=lf[409],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5678,a[2]=t3,a[3]=t2,a[4]=lf[411],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a5677 in string-fill! in k1437 in k1434 */
static void C_ccall f_5678(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5678,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5688,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=lf[410],tmp=(C_word)a,a+=6,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_5688(t5,t4));}

/* do943 in a5677 in string-fill! in k1437 in k1434 */
static C_word C_fcall f_5688(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
C_stack_check;
t2=t1;
t3=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
return(C_SCHEME_UNDEFINED);}
else{
t4=(C_word)C_i_string_set(((C_word*)t0)[3],t1,((C_word*)t0)[2]);
t5=(C_word)C_fixnum_difference(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}}

/* a5671 in string-fill! in k1437 in k1434 */
static void C_ccall f_5672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5672,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[408]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-count in k1437 in k1434 */
static void C_ccall f_5531(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_5531r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5531r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5531r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5537,a[2]=t4,a[3]=t2,a[4]=lf[401],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5543,a[2]=t2,a[3]=t3,a[4]=lf[406],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a5542 in string-count in k1437 in k1434 */
static void C_ccall f_5543(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5543,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_charp(((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5555,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=lf[402],tmp=(C_word)a,a+=6,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_5555(t4,t2,C_fix(0)));}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5589,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1304 char-set? */
t5=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k5587 in a5542 in string-count in k1437 in k1434 */
static void C_ccall f_5589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5589,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5594,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=lf[403],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_5594(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[4]))){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5633,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=lf[404],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_5633(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0));}
else{
/* srfi-13.scm: 1316 ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[400],lf[405],*((C_word*)lf[400]+1),((C_word*)t0)[4]);}}}

/* do933 in k5587 in a5542 in string-count in k1437 in k1434 */
static void C_fcall f_5633(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5633,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t6=(C_word)C_fixnum_plus(t2,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5654,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1313 criteria */
t9=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t9))(3,t9,t7,t8);}}

/* k5652 in do933 in k5587 in a5542 in string-count in k1437 in k1434 */
static void C_ccall f_5654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1)):((C_word*)t0)[5]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_5633(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* do928 in k5587 in a5542 in string-count in k1437 in k1434 */
static void C_fcall f_5594(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5594,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,t5))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t3);}
else{
t6=(C_word)C_fixnum_plus(t2,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5615,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1306 char-set-contains? */
t9=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t7,((C_word*)t0)[2],t8);}}

/* k5613 in do928 in k5587 in a5542 in string-count in k1437 in k1434 */
static void C_ccall f_5615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1)):((C_word*)t0)[5]);
t3=((C_word*)((C_word*)t0)[4])[1];
f_5594(t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* do923 in a5542 in string-count in k1437 in k1434 */
static C_word C_fcall f_5555(C_word t0,C_word t1,C_word t2){
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
t3=t1;
t4=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,t4))){
return(t2);}
else{
t5=(C_word)C_fixnum_plus(t1,C_fix(1));
t6=(C_word)C_i_string_ref(((C_word*)t0)[3],t1);
t7=(C_word)C_eqp(((C_word*)t0)[2],t6);
t8=(C_truep(t7)?(C_word)C_fixnum_plus(t2,C_fix(1)):t2);
t10=t5;
t11=t8;
t1=t10;
t2=t11;
goto loop;}}

/* a5536 in string-count in k1437 in k1434 */
static void C_ccall f_5537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5537,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[400]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-skip-right in k1437 in k1434 */
static void C_ccall f_5396(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
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
C_word *a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5402,a[2]=t4,a[3]=t2,a[4]=lf[393],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5408,a[2]=t2,a[3]=t3,a[4]=lf[398],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a5407 in string-skip-right in k1437 in k1434 */
static void C_ccall f_5408(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5408,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_charp(((C_word*)t0)[3]))){
t4=(C_word)C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5424,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=lf[394],tmp=(C_word)a,a+=5,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_5424(t5,t4));}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5454,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1278 char-set? */
t5=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k5452 in a5407 in string-skip-right in k1437 in k1434 */
static void C_ccall f_5454(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5454,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5463,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=lf[395],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5463(t6,((C_word*)t0)[2],t2);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[3]))){
t2=(C_word)C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5502,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=lf[396],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5502(t6,((C_word*)t0)[2],t2);}
else{
/* srfi-13.scm: 1289 ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[338],lf[397],*((C_word*)lf[338]+1),((C_word*)t0)[3]);}}}

/* lp in k5452 in a5407 in string-skip-right in k1437 in k1434 */
static void C_fcall f_5502(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5502,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5515,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1287 criteria */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k5513 in lp in k5452 in a5407 in string-skip-right in k1437 in k1434 */
static void C_ccall f_5515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 1287 lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5502(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* lp in k5452 in a5407 in string-skip-right in k1437 in k1434 */
static void C_fcall f_5463(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5463,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5476,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1281 char-set-contains? */
t6=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[2],t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k5474 in lp in k5452 in a5407 in string-skip-right in k1437 in k1434 */
static void C_ccall f_5476(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 1282 lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5463(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* lp in a5407 in string-skip-right in k1437 in k1434 */
static C_word C_fcall f_5424(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
C_stack_check;
t2=t1;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,C_fix(0)))){
t3=(C_word)C_i_string_ref(((C_word*)t0)[3],t1);
t4=(C_word)C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
t5=(C_word)C_fixnum_difference(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}
else{
return(t1);}}
else{
return(C_SCHEME_FALSE);}}

/* a5401 in string-skip-right in k1437 in k1434 */
static void C_ccall f_5402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5402,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[338]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-skip in k1437 in k1434 */
static void C_ccall f_5273(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_5273r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5273r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5273r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5279,a[2]=t4,a[3]=t2,a[4]=lf[386],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5285,a[2]=t2,a[3]=t3,a[4]=lf[391],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a5284 in string-skip in k1437 in k1434 */
static void C_ccall f_5285(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5285,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_charp(((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5297,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=lf[387],tmp=(C_word)a,a+=6,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_5297(t4,t2));}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5327,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1256 char-set? */
t5=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k5325 in a5284 in string-skip in k1437 in k1434 */
static void C_ccall f_5327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5327,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5332,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=lf[388],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_5332(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[4]))){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5367,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=lf[389],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_5367(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* srfi-13.scm: 1267 ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[308],lf[390],*((C_word*)lf[308]+1),((C_word*)t0)[4]);}}}

/* lp in k5325 in a5284 in string-skip in k1437 in k1434 */
static void C_fcall f_5367(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5367,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5380,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1265 criteria */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k5378 in lp in k5325 in a5284 in string-skip in k1437 in k1434 */
static void C_ccall f_5380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 1265 lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5367(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* lp in k5325 in a5284 in string-skip in k1437 in k1434 */
static void C_fcall f_5332(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5332,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5345,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1259 char-set-contains? */
t7=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k5343 in lp in k5325 in a5284 in string-skip in k1437 in k1434 */
static void C_ccall f_5345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 1260 lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5332(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* lp in a5284 in string-skip in k1437 in k1434 */
static C_word C_fcall f_5297(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
loop:
C_stack_check;
t2=t1;
t3=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
t4=(C_word)C_i_string_ref(((C_word*)t0)[3],t1);
t5=(C_word)C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
t6=(C_word)C_fixnum_plus(t1,C_fix(1));
t8=t6;
t1=t8;
goto loop;}
else{
return(t1);}}
else{
return(C_SCHEME_FALSE);}}

/* a5278 in string-skip in k1437 in k1434 */
static void C_ccall f_5279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5279,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[308]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-index-right in k1437 in k1434 */
static void C_ccall f_5138(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_5138r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5138r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5138r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5144,a[2]=t4,a[3]=t2,a[4]=lf[379],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5150,a[2]=t2,a[3]=t3,a[4]=lf[384],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a5149 in string-index-right in k1437 in k1434 */
static void C_ccall f_5150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5150,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_charp(((C_word*)t0)[3]))){
t4=(C_word)C_fixnum_difference(t3,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5166,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=lf[380],tmp=(C_word)a,a+=5,tmp);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,f_5166(t5,t4));}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5196,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1235 char-set? */
t5=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k5194 in a5149 in string-index-right in k1437 in k1434 */
static void C_ccall f_5196(C_word c,C_word t0,C_word t1){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5196,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5205,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=lf[381],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5205(t6,((C_word*)t0)[2],t2);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[3]))){
t2=(C_word)C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5244,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=lf[382],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_5244(t6,((C_word*)t0)[2],t2);}
else{
/* srfi-13.scm: 1245 ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[2],lf[378],lf[383],*((C_word*)lf[378]+1),((C_word*)t0)[3]);}}}

/* lp in k5194 in a5149 in string-index-right in k1437 in k1434 */
static void C_fcall f_5244(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5244,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5257,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1243 criteria */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k5255 in lp in k5194 in a5149 in string-index-right in k1437 in k1434 */
static void C_ccall f_5257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 1244 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5244(t3,((C_word*)t0)[4],t2);}}

/* lp in k5194 in a5149 in string-index-right in k1437 in k1434 */
static void C_fcall f_5205(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5205,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,C_fix(0)))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5218,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1238 char-set-contains? */
t6=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[2],t5);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k5216 in lp in k5194 in a5149 in string-index-right in k1437 in k1434 */
static void C_ccall f_5218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 1239 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5205(t3,((C_word*)t0)[4],t2);}}

/* lp in a5149 in string-index-right in k1437 in k1434 */
static C_word C_fcall f_5166(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
loop:
C_stack_check;
t2=t1;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,C_fix(0)))){
t3=(C_word)C_i_string_ref(((C_word*)t0)[3],t1);
t4=(C_word)C_eqp(((C_word*)t0)[2],t3);
if(C_truep(t4)){
return(t1);}
else{
t5=(C_word)C_fixnum_difference(t1,C_fix(1));
t7=t5;
t1=t7;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}

/* a5143 in string-index-right in k1437 in k1434 */
static void C_ccall f_5144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5144,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[378]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-index in k1437 in k1434 */
static void C_ccall f_5015(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_5015r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_5015r(t0,t1,t2,t3,t4);}}

static void C_ccall f_5015r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5021,a[2]=t4,a[3]=t2,a[4]=lf[371],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5027,a[2]=t2,a[3]=t3,a[4]=lf[376],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a5026 in string-index in k1437 in k1434 */
static void C_ccall f_5027(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5027,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_charp(((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5039,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=lf[372],tmp=(C_word)a,a+=6,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_5039(t4,t2));}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5069,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1215 char-set? */
t5=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k5067 in a5026 in string-index in k1437 in k1434 */
static void C_ccall f_5069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5069,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5074,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=lf[373],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_5074(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[4]))){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5109,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=lf[374],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_5109(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* srfi-13.scm: 1225 ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[310],lf[375],*((C_word*)lf[310]+1),((C_word*)t0)[4]);}}}

/* lp in k5067 in a5026 in string-index in k1437 in k1434 */
static void C_fcall f_5109(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5109,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5122,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1223 criteria */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k5120 in lp in k5067 in a5026 in string-index in k1437 in k1434 */
static void C_ccall f_5122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 1224 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5109(t3,((C_word*)t0)[4],t2);}}

/* lp in k5067 in a5026 in string-index in k1437 in k1434 */
static void C_fcall f_5074(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5074,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5087,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
/* srfi-13.scm: 1218 char-set-contains? */
t7=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k5085 in lp in k5067 in a5026 in string-index in k1437 in k1434 */
static void C_ccall f_5087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 1219 lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5074(t3,((C_word*)t0)[4],t2);}}

/* lp in a5026 in string-index in k1437 in k1434 */
static C_word C_fcall f_5039(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
loop:
C_stack_check;
t2=t1;
t3=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
t4=(C_word)C_i_string_ref(((C_word*)t0)[3],t1);
t5=(C_word)C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
return(t1);}
else{
t6=(C_word)C_fixnum_plus(t1,C_fix(1));
t8=t6;
t1=t8;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}

/* a5020 in string-index in k1437 in k1434 */
static void C_ccall f_5021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5021,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[310]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-filter in k1437 in k1434 */
static void C_ccall f_4907(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_4907r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4907r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4907r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4913,a[2]=t4,a[3]=t3,a[4]=lf[364],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4919,a[2]=t3,a[3]=t2,a[4]=lf[369],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a4918 in string-filter in k1437 in k1434 */
static void C_ccall f_4919(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4919,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[3]))){
t4=(C_word)C_fixnum_difference(t3,t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4932,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 1171 make-string */
t6=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4962,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5001,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1180 char-set? */
t6=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[3]);}}

/* k4999 in a4918 in string-filter in k1437 in k1434 */
static void C_ccall f_5001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_4962(2,t2,((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_charp(((C_word*)t0)[2]))){
/* srfi-13.scm: 1181 char-set */
t2=*((C_word*)lf[359]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* srfi-13.scm: 1182 ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[363],lf[368],((C_word*)t0)[2]);}}}

/* k4960 in a4918 in string-filter in k1437 in k1434 */
static void C_ccall f_4962(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4962,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4965,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4988,a[2]=t1,a[3]=lf[367],tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1184 string-fold */
t4=*((C_word*)lf[44]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t2,t3,C_fix(0),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4987 in k4960 in a4918 in string-filter in k1437 in k1434 */
static void C_ccall f_4988(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4988,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4995,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1184 char-set-contains? */
t5=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],t2);}

/* k4993 in a4987 in k4960 in a4918 in string-filter in k1437 in k1434 */
static void C_ccall f_4995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1)):((C_word*)t0)[2]));}

/* k4963 in k4960 in a4918 in string-filter in k1437 in k1434 */
static void C_ccall f_4965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4968,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1188 make-string */
t3=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k4966 in k4963 in k4960 in a4918 in string-filter in k1437 in k1434 */
static void C_ccall f_4968(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4968,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4971,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4973,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=lf[366],tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 1189 string-fold */
t4=*((C_word*)lf[44]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t2,t3,C_fix(0),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4972 in k4966 in k4963 in k4960 in a4918 in string-filter in k1437 in k1434 */
static void C_ccall f_4973(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4973,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4980,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1189 char-set-contains? */
t5=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],t2);}

/* k4978 in a4972 in k4966 in k4963 in k4960 in a4918 in string-filter in k1437 in k1434 */
static void C_ccall f_4980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_string_set(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k4969 in k4966 in k4963 in k4960 in a4918 in string-filter in k1437 in k1434 */
static void C_ccall f_4971(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k4930 in a4918 in string-filter in k1437 in k1434 */
static void C_ccall f_4932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4932,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4935,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4946,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=lf[365],tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 1172 string-fold */
t4=*((C_word*)lf[44]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t2,t3,C_fix(0),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4945 in k4930 in a4918 in string-filter in k1437 in k1434 */
static void C_ccall f_4946(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4946,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4953,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1173 criteria */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k4951 in a4945 in k4930 in a4918 in string-filter in k1437 in k1434 */
static void C_ccall f_4953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_string_set(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k4933 in k4930 in a4918 in string-filter in k1437 in k1434 */
static void C_ccall f_4935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=t1;
t3=(C_word)C_eqp(t2,((C_word*)t0)[4]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
/* srfi-13.scm: 1178 ##sys#substring */
t4=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t1);}}

/* a4912 in string-filter in k1437 in k1434 */
static void C_ccall f_4913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4913,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[363]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-delete in k1437 in k1434 */
static void C_ccall f_4799(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_4799r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4799r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4799r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4805,a[2]=t4,a[3]=t3,a[4]=lf[355],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4811,a[2]=t3,a[3]=t2,a[4]=lf[361],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a4810 in string-delete in k1437 in k1434 */
static void C_ccall f_4811(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4811,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[3]))){
t4=(C_word)C_fixnum_difference(t3,t2);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4824,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 1144 make-string */
t6=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4854,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4893,a[2]=((C_word*)t0)[3],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1152 char-set? */
t6=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t0)[3]);}}

/* k4891 in a4810 in string-delete in k1437 in k1434 */
static void C_ccall f_4893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_4854(2,t2,((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_charp(((C_word*)t0)[2]))){
/* srfi-13.scm: 1153 char-set */
t2=*((C_word*)lf[359]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
/* srfi-13.scm: 1154 ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[3],lf[354],lf[360],((C_word*)t0)[2]);}}}

/* k4852 in a4810 in string-delete in k1437 in k1434 */
static void C_ccall f_4854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4854,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4857,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4880,a[2]=t1,a[3]=lf[358],tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1155 string-fold */
t4=*((C_word*)lf[44]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t2,t3,C_fix(0),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4879 in k4852 in a4810 in string-delete in k1437 in k1434 */
static void C_ccall f_4880(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4880,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4887,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1155 char-set-contains? */
t5=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],t2);}

/* k4885 in a4879 in k4852 in a4810 in string-delete in k1437 in k1434 */
static void C_ccall f_4887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[2]:(C_word)C_fixnum_plus(((C_word*)t0)[2],C_fix(1))));}

/* k4855 in k4852 in a4810 in string-delete in k1437 in k1434 */
static void C_ccall f_4857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4857,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4860,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 1159 make-string */
t3=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k4858 in k4855 in k4852 in a4810 in string-delete in k1437 in k1434 */
static void C_ccall f_4860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4863,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4865,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=lf[357],tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 1160 string-fold */
t4=*((C_word*)lf[44]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t2,t3,C_fix(0),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4864 in k4858 in k4855 in k4852 in a4810 in string-delete in k1437 in k1434 */
static void C_ccall f_4865(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4865,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4872,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1160 char-set-contains? */
t5=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],t2);}

/* k4870 in a4864 in k4858 in k4855 in k4852 in a4810 in string-delete in k1437 in k1434 */
static void C_ccall f_4872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_i_string_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2]);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}}

/* k4861 in k4858 in k4855 in k4852 in a4810 in string-delete in k1437 in k1434 */
static void C_ccall f_4863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k4822 in a4810 in string-delete in k1437 in k1434 */
static void C_ccall f_4824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4824,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4827,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4838,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=lf[356],tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 1145 string-fold */
t4=*((C_word*)lf[44]+1);
((C_proc7)(void*)(*((C_word*)t4+1)))(7,t4,t2,t3,C_fix(0),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4837 in k4822 in a4810 in string-delete in k1437 in k1434 */
static void C_ccall f_4838(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4838,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4845,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1146 criteria */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}

/* k4843 in a4837 in k4822 in a4810 in string-delete in k1437 in k1434 */
static void C_ccall f_4845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_i_string_set(((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2]);
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1)));}}

/* k4825 in k4822 in a4810 in string-delete in k1437 in k1434 */
static void C_ccall f_4827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=t1;
t3=(C_word)C_eqp(t2,((C_word*)t0)[4]);
if(C_truep(t3)){
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,((C_word*)t0)[2]);}
else{
/* srfi-13.scm: 1150 ##sys#substring */
t4=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t1);}}

/* a4804 in string-delete in k1437 in k1434 */
static void C_ccall f_4805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4805,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[354]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-pad in k1437 in k1434 */
static void C_ccall f_4737(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr4r,(void*)f_4737r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4737r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4737r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(11);
t5=(C_word)C_i_check_exact_2(t3,lf[350]);
t6=(C_word)C_i_nullp(t4);
t7=(C_truep(t6)?C_make_character(32):(C_word)C_i_car(t4));
t8=(C_word)C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t4));
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4752,a[2]=t9,a[3]=t2,a[4]=lf[351],tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4758,a[2]=t7,a[3]=t2,a[4]=t3,a[5]=lf[352],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t10,t11);}

/* a4757 in string-pad in k1437 in k1434 */
static void C_ccall f_4758(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4758,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(t3,t2);
t5=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_less_or_equal_p(t5,t4))){
t6=(C_word)C_fixnum_difference(t3,((C_word*)t0)[4]);
/* srfi-13.scm: 1119 %substring/shared */
f_1654(t1,((C_word*)t0)[3],t6,t3);}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4778,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t4,a[6]=((C_word*)t0)[4],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 1120 make-string */
t7=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k4776 in a4757 in string-pad in k1437 in k1434 */
static void C_ccall f_4778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4778,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4781,a[2]=t1,a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[6],((C_word*)t0)[5]);
/* srfi-13.scm: 1121 %string-copy! */
f_5739(t2,t1,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4779 in k4776 in a4757 in string-pad in k1437 in k1434 */
static void C_ccall f_4781(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a4751 in string-pad in k1437 in k1434 */
static void C_ccall f_4752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4752,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[350]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-pad-right in k1437 in k1434 */
static void C_ccall f_4679(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr4r,(void*)f_4679r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4679r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4679r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(11);
t5=(C_word)C_i_check_exact_2(t3,lf[346]);
t6=(C_word)C_i_nullp(t4);
t7=(C_truep(t6)?C_make_character(32):(C_word)C_i_car(t4));
t8=(C_word)C_i_nullp(t4);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t4));
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4694,a[2]=t9,a[3]=t2,a[4]=lf[347],tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4700,a[2]=t7,a[3]=t2,a[4]=t3,a[5]=lf[348],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t10,t11);}

/* a4699 in string-pad-right in k1437 in k1434 */
static void C_ccall f_4700(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4700,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(t3,t2);
t5=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_less_or_equal_p(t5,t4))){
t6=(C_word)C_fixnum_plus(t2,((C_word*)t0)[4]);
/* srfi-13.scm: 1108 %substring/shared */
f_1654(t1,((C_word*)t0)[3],t2,t6);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4720,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1109 make-string */
t7=*((C_word*)lf[35]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k4718 in a4699 in string-pad-right in k1437 in k1434 */
static void C_ccall f_4720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4720,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4723,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1110 %string-copy! */
f_5739(t2,t1,C_fix(0),((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4721 in k4718 in a4699 in string-pad-right in k1437 in k1434 */
static void C_ccall f_4723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a4693 in string-pad-right in k1437 in k1434 */
static void C_ccall f_4694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4694,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[346]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-trim-both in k1437 in k1434 */
static void C_ccall f_4629(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4629r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4629r(t0,t1,t2,t3);}}

static void C_ccall f_4629r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(10);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[330]+1):(C_word)C_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4641,a[2]=t7,a[3]=t2,a[4]=lf[342],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4647,a[2]=t5,a[3]=t2,a[4]=lf[344],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t8,t9);}

/* a4646 in string-trim-both in k1437 in k1434 */
static void C_ccall f_4647(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4647,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4651,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 1096 string-skip */
t5=*((C_word*)lf[308]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* k4649 in a4646 in string-trim-both in k1437 in k1434 */
static void C_ccall f_4651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4651,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4665,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 1098 string-skip-right */
t3=*((C_word*)lf[338]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[343]);}}

/* k4663 in k4649 in a4646 in string-trim-both in k1437 in k1434 */
static void C_ccall f_4665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(C_fix(1),t1);
/* srfi-13.scm: 1098 %substring/shared */
f_1654(((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a4640 in string-trim-both in k1437 in k1434 */
static void C_ccall f_4641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4641,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[341]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-trim-right in k1437 in k1434 */
static void C_ccall f_4583(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4583r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4583r(t0,t1,t2,t3);}}

static void C_ccall f_4583r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(10);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[330]+1):(C_word)C_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4595,a[2]=t7,a[3]=t2,a[4]=lf[336],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4601,a[2]=t5,a[3]=t2,a[4]=lf[339],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t8,t9);}

/* a4600 in string-trim-right in k1437 in k1434 */
static void C_ccall f_4601(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4601,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4605,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 1089 string-skip-right */
t5=*((C_word*)lf[338]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* k4603 in a4600 in string-trim-right in k1437 in k1434 */
static void C_ccall f_4605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(C_fix(1),t1);
/* srfi-13.scm: 1090 %substring/shared */
f_1654(((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[337]);}}

/* a4594 in string-trim-right in k1437 in k1434 */
static void C_ccall f_4595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4595,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[335]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-trim in k1437 in k1434 */
static void C_ccall f_4541(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_4541r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4541r(t0,t1,t2,t3);}}

static void C_ccall f_4541r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(10);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?*((C_word*)lf[330]+1):(C_word)C_i_car(t3));
t6=(C_word)C_i_nullp(t3);
t7=(C_truep(t6)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4553,a[2]=t7,a[3]=t2,a[4]=lf[331],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4559,a[2]=t5,a[3]=t2,a[4]=lf[333],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t8,t9);}

/* a4558 in string-trim in k1437 in k1434 */
static void C_ccall f_4559(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4559,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4563,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 1082 string-skip */
t5=*((C_word*)lf[308]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* k4561 in a4558 in string-trim in k1437 in k1434 */
static void C_ccall f_4563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-13.scm: 1083 %substring/shared */
f_1654(((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,lf[332]);}}

/* a4552 in string-trim in k1437 in k1434 */
static void C_ccall f_4553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4553,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[329]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-drop-right in k1437 in k1434 */
static void C_ccall f_4525(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4525,4,t0,t1,t2,t3);}
t4=(C_word)C_i_string_length(t2);
t5=(C_word)C_i_check_exact_2(t3,lf[327]);
t6=(C_word)C_fixnum_difference(t4,t3);
/* srfi-13.scm: 1076 %substring/shared */
f_1654(t1,t2,C_fix(0),t6);}

/* string-drop in k1437 in k1434 */
static void C_ccall f_4513(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4513,4,t0,t1,t2,t3);}
t4=(C_word)C_i_string_length(t2);
t5=(C_word)C_i_check_exact_2(t3,lf[325]);
/* srfi-13.scm: 1068 %substring/shared */
f_1654(t1,t2,t3,t4);}

/* string-take-right in k1437 in k1434 */
static void C_ccall f_4497(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4497,4,t0,t1,t2,t3);}
t4=(C_word)C_i_string_length(t2);
t5=(C_word)C_i_check_exact_2(t3,lf[323]);
t6=(C_word)C_fixnum_difference(t4,t3);
/* srfi-13.scm: 1060 %substring/shared */
f_1654(t1,t2,t6,t4);}

/* string-take in k1437 in k1434 */
static void C_ccall f_4488(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4488,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t3,lf[321]);
/* srfi-13.scm: 1052 %substring/shared */
f_1654(t1,t2,C_fix(0),t3);}

/* string-titlecase in k1437 in k1434 */
static void C_ccall f_4463(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_4463r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4463r(t0,t1,t2,t3);}}

static void C_ccall f_4463r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4469,a[2]=t3,a[3]=t2,a[4]=lf[318],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4475,a[2]=t2,a[3]=lf[319],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a4474 in string-titlecase in k1437 in k1434 */
static void C_ccall f_4475(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4475,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4479,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 1023 ##sys#substring */
t5=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[2],t2,t3);}

/* k4477 in a4474 in string-titlecase in k1437 in k1434 */
static void C_ccall f_4479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4479,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4482,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[3],((C_word*)t0)[2]);
/* srfi-13.scm: 1024 %string-titlecase! */
f_4386(t2,t1,C_fix(0),t3);}

/* k4480 in k4477 in a4474 in string-titlecase in k1437 in k1434 */
static void C_ccall f_4482(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a4468 in string-titlecase in k1437 in k1434 */
static void C_ccall f_4469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4469,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[313]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-titlecase! in k1437 in k1434 */
static void C_ccall f_4445(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_4445r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4445r(t0,t1,t2,t3);}}

static void C_ccall f_4445r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4451,a[2]=t3,a[3]=t2,a[4]=lf[314],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4457,a[2]=t2,a[3]=lf[315],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a4456 in string-titlecase! in k1437 in k1434 */
static void C_ccall f_4457(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4457,4,t0,t1,t2,t3);}
/* srfi-13.scm: 1019 %string-titlecase! */
f_4386(t1,((C_word*)t0)[2],t2,t3);}

/* a4450 in string-titlecase! in k1437 in k1434 */
static void C_ccall f_4451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4451,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[313]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-titlecase! in k1437 in k1434 */
static void C_fcall f_4386(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4386,NULL,4,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4392,a[2]=t4,a[3]=t6,a[4]=t2,a[5]=lf[311],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4392(t8,t1,t3);}

/* lp in %string-titlecase! in k1437 in k1434 */
static void C_fcall f_4392(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4392,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4396,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4439,a[2]=lf[309],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 1007 string-index */
t5=*((C_word*)lf[310]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t3,((C_word*)t0)[4],t4,t2,((C_word*)t0)[2]);}

/* a4438 in lp in %string-titlecase! in k1437 in k1434 */
static void C_ccall f_4439(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4439,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_u_i_char_alphabeticp(t2));}

/* k4394 in lp in %string-titlecase! in k1437 in k1434 */
static void C_ccall f_4396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4396,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_string_ref(((C_word*)t0)[5],t1);
t3=(C_word)C_u_i_char_upcase(t2);
t4=(C_word)C_i_string_set(((C_word*)t0)[5],t1,t3);
t5=(C_word)C_fixnum_plus(t1,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4408,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4426,a[2]=lf[307],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 1011 string-skip */
t8=*((C_word*)lf[308]+1);
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t6,((C_word*)t0)[5],t7,t5,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* a4425 in k4394 in lp in %string-titlecase! in k1437 in k1434 */
static void C_ccall f_4426(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4426,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_u_i_char_alphabeticp(t2));}

/* k4406 in k4394 in lp in %string-titlecase! in k1437 in k1434 */
static void C_ccall f_4408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4408,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4414,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 1013 string-downcase! */
t3=*((C_word*)lf[302]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1);}
else{
/* srfi-13.scm: 1015 string-downcase! */
t2=*((C_word*)lf[302]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k4412 in k4406 in k4394 in lp in %string-titlecase! in k1437 in k1434 */
static void C_ccall f_4414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 1014 lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4392(t3,((C_word*)t0)[2],t2);}

/* string-downcase! in k1437 in k1434 */
static void C_ccall f_4368(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_4368r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4368r(t0,t1,t2,t3);}}

static void C_ccall f_4368r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4374,a[2]=t3,a[3]=t2,a[4]=lf[303],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4380,a[2]=t2,a[3]=lf[304],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a4379 in string-downcase! in k1437 in k1434 */
static void C_ccall f_4380(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4380,4,t0,t1,t2,t3);}
/* srfi-13.scm: 1003 %string-map! */
f_1781(t1,*((C_word*)lf[299]+1),((C_word*)t0)[2],t2,t3);}

/* a4373 in string-downcase! in k1437 in k1434 */
static void C_ccall f_4374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4374,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[302]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-downcase in k1437 in k1434 */
static void C_ccall f_4350(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_4350r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4350r(t0,t1,t2,t3);}}

static void C_ccall f_4350r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4356,a[2]=t3,a[3]=t2,a[4]=lf[298],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4362,a[2]=t2,a[3]=lf[300],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a4361 in string-downcase in k1437 in k1434 */
static void C_ccall f_4362(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4362,4,t0,t1,t2,t3);}
/* srfi-13.scm: 999  %string-map */
f_1712(t1,*((C_word*)lf[299]+1),((C_word*)t0)[2],t2,t3);}

/* a4355 in string-downcase in k1437 in k1434 */
static void C_ccall f_4356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4356,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[297]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-upcase! in k1437 in k1434 */
static void C_ccall f_4332(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_4332r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4332r(t0,t1,t2,t3);}}

static void C_ccall f_4332r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4338,a[2]=t3,a[3]=t2,a[4]=lf[294],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4344,a[2]=t2,a[3]=lf[295],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a4343 in string-upcase! in k1437 in k1434 */
static void C_ccall f_4344(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4344,4,t0,t1,t2,t3);}
/* srfi-13.scm: 995  %string-map! */
f_1781(t1,*((C_word*)lf[290]+1),((C_word*)t0)[2],t2,t3);}

/* a4337 in string-upcase! in k1437 in k1434 */
static void C_ccall f_4338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4338,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[293]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-upcase in k1437 in k1434 */
static void C_ccall f_4314(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_4314r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4314r(t0,t1,t2,t3);}}

static void C_ccall f_4314r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4320,a[2]=t3,a[3]=t2,a[4]=lf[289],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4326,a[2]=t2,a[3]=lf[291],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a4325 in string-upcase in k1437 in k1434 */
static void C_ccall f_4326(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4326,4,t0,t1,t2,t3);}
/* srfi-13.scm: 991  %string-map */
f_1712(t1,*((C_word*)lf[290]+1),((C_word*)t0)[2],t2,t3);}

/* a4319 in string-upcase in k1437 in k1434 */
static void C_ccall f_4320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4320,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[288]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-hash-ci in k1437 in k1434 */
static void C_ccall f_4258(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_4258r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4258r(t0,t1,t2,t3);}}

static void C_ccall f_4258r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(4194304):(C_word)C_i_car(t3));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(C_word)C_i_nullp(t3);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4268,a[2]=t1,a[3]=t9,a[4]=t2,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t11=(C_word)C_eqp(((C_word*)t7)[1],C_fix(0));
if(C_truep(t11)){
t12=C_set_block_item(t7,0,C_fix(4194304));
t13=t10;
f_4268(t13,t12);}
else{
t12=t10;
f_4268(t12,C_SCHEME_UNDEFINED);}}

/* k4266 in string-hash-ci in k1437 in k1434 */
static void C_fcall f_4268(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4268,NULL,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)((C_word*)t0)[5])[1],lf[283]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4276,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[284],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4282,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=lf[286],tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 973  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t3,t4);}

/* a4281 in k4266 in string-hash-ci in k1437 in k1434 */
static void C_ccall f_4282(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4282,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4288,a[2]=lf[285],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 974  %string-hash */
f_4140(t1,((C_word*)t0)[3],t4,((C_word*)((C_word*)t0)[2])[1],t2,t3);}

/* a4287 in a4281 in k4266 in string-hash-ci in k1437 in k1434 */
static void C_ccall f_4288(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4288,3,t0,t1,t2);}
t3=(C_word)C_u_i_char_downcase(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fix((C_word)C_character_code(t3)));}

/* a4275 in k4266 in string-hash-ci in k1437 in k1434 */
static void C_ccall f_4276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4276,2,t0,t1);}
/* srfi-13.scm: 973  string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[283]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-hash in k1437 in k1434 */
static void C_ccall f_4212(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_4212r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4212r(t0,t1,t2,t3);}}

static void C_ccall f_4212r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(8);
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?C_fix(4194304):(C_word)C_i_car(t3));
t6=t5;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(C_word)C_i_nullp(t3);
t9=(C_truep(t8)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t3));
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4222,a[2]=t1,a[3]=t9,a[4]=t2,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t11=(C_word)C_eqp(((C_word*)t7)[1],C_fix(0));
if(C_truep(t11)){
t12=C_set_block_item(t7,0,C_fix(4194304));
t13=t10;
f_4222(t13,t12);}
else{
t12=t10;
f_4222(t12,C_SCHEME_UNDEFINED);}}

/* k4220 in string-hash in k1437 in k1434 */
static void C_fcall f_4222(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4222,NULL,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)((C_word*)t0)[5])[1],lf[278]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4230,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[279],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4236,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=lf[281],tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 963  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t3,t4);}

/* a4235 in k4220 in string-hash in k1437 in k1434 */
static void C_ccall f_4236(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4236,4,t0,t1,t2,t3);}
/* srfi-13.scm: 964  %string-hash */
f_4140(t1,((C_word*)t0)[3],*((C_word*)lf[280]+1),((C_word*)((C_word*)t0)[2])[1],t2,t3);}

/* a4229 in k4220 in string-hash in k1437 in k1434 */
static void C_ccall f_4230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4230,2,t0,t1);}
/* srfi-13.scm: 963  string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[278]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-hash in k1437 in k1434 */
static void C_fcall f_4140(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4140,NULL,6,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4142,a[2]=t3,a[3]=lf[273],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4193,a[2]=t4,a[3]=lf[274],tmp=(C_word)a,a+=4,tmp);
t9=f_4193(t8,C_fix(65536));
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4158,a[2]=t2,a[3]=t7,a[4]=t11,a[5]=t9,a[6]=t4,a[7]=t6,a[8]=lf[276],tmp=(C_word)a,a+=9,tmp));
t13=((C_word*)t11)[1];
f_4158(t13,t1,t5,C_fix(0));}

/* lp in %string-hash in k1437 in k1434 */
static void C_fcall f_4158(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4158,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=((C_word*)t0)[7];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,t5))){
/* srfi-13.scm: 953  modulo */
t6=*((C_word*)lf[275]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,t3,((C_word*)t0)[6]);}
else{
t6=(C_word)C_fixnum_plus(t2,C_fix(1));
t7=(C_word)C_fixnum_times(C_fix(37),t3);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4191,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t7,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 954  iref */
t9=((C_word*)t0)[3];
f_4142(t9,t8,((C_word*)t0)[2],t2);}}

/* k4189 in lp in %string-hash in k1437 in k1434 */
static void C_ccall f_4191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[6],t1);
t3=(C_word)C_fixnum_and(((C_word*)t0)[5],t2);
/* srfi-13.scm: 954  lp */
t4=((C_word*)((C_word*)t0)[4])[1];
f_4158(t4,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* lp in %string-hash in k1437 in k1434 */
static C_word C_fcall f_4193(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
t2=t1;
t3=((C_word*)t0)[2];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,t3))){
return((C_word)C_fixnum_difference(t1,C_fix(1)));}
else{
t4=(C_word)C_fixnum_plus(t1,t1);
t6=t4;
t1=t6;
goto loop;}}

/* iref in %string-hash in k1437 in k1434 */
static void C_fcall f_4142(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4142,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_string_ref(t2,t3);
/* srfi-13.scm: 948  char->int */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t1,t4);}

/* string-ci>= in k1437 in k1434 */
static void C_ccall f_4092(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_4092r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4092r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4092r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[265]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4098,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[266],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4104,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[270],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a4103 in string-ci>= in k1437 in k1434 */
static void C_ccall f_4104(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4104,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4110,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[267],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4116,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=lf[269],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a4115 in a4103 in string-ci>= in k1437 in k1434 */
static void C_ccall f_4116(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4116,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4123,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_4123(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_4123(t6,C_SCHEME_FALSE);}}

/* k4121 in a4115 in a4103 in string-ci>= in k1437 in k1434 */
static void C_fcall f_4123(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4123,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_greater_or_equal_p(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4131,a[2]=lf[268],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 928  %string-compare-ci */
f_3364(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],t2,*((C_word*)lf[186]+1),*((C_word*)lf[186]+1));}}

/* a4130 in k4121 in a4115 in a4103 in string-ci>= in k1437 in k1434 */
static void C_ccall f_4131(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4131,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a4109 in a4103 in string-ci>= in k1437 in k1434 */
static void C_ccall f_4110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4110,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4097 in string-ci>= in k1437 in k1434 */
static void C_ccall f_4098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4098,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-ci<= in k1437 in k1434 */
static void C_ccall f_4044(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_4044r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4044r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4044r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[258]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4050,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[259],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4056,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[263],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a4055 in string-ci<= in k1437 in k1434 */
static void C_ccall f_4056(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4056,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4062,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[260],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4068,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=lf[262],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a4067 in a4055 in string-ci<= in k1437 in k1434 */
static void C_ccall f_4068(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4068,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4075,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_4075(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_4075(t6,C_SCHEME_FALSE);}}

/* k4073 in a4067 in a4055 in string-ci<= in k1437 in k1434 */
static void C_fcall f_4075(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4075,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_less_or_equal_p(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4083,a[2]=lf[261],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 917  %string-compare-ci */
f_3364(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],*((C_word*)lf[186]+1),*((C_word*)lf[186]+1),t2);}}

/* a4082 in k4073 in a4067 in a4055 in string-ci<= in k1437 in k1434 */
static void C_ccall f_4083(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4083,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a4061 in a4055 in string-ci<= in k1437 in k1434 */
static void C_ccall f_4062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4062,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4049 in string-ci<= in k1437 in k1434 */
static void C_ccall f_4050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4050,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-ci> in k1437 in k1434 */
static void C_ccall f_3993(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3993r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3993r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3993r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[250]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3999,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[251],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4005,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[256],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a4004 in string-ci> in k1437 in k1434 */
static void C_ccall f_4005(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4005,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4011,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[252],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4017,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=lf[255],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a4016 in a4004 in string-ci> in k1437 in k1434 */
static void C_ccall f_4017(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4017,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4024,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_4024(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_4024(t6,C_SCHEME_FALSE);}}

/* k4022 in a4016 in a4004 in string-ci> in k1437 in k1434 */
static void C_fcall f_4024(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4024,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_greaterp(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4032,a[2]=lf[253],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4035,a[2]=lf[254],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 906  %string-compare-ci */
f_3364(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],t2,t3,*((C_word*)lf[186]+1));}}

/* a4034 in k4022 in a4016 in a4004 in string-ci> in k1437 in k1434 */
static void C_ccall f_4035(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4035,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a4031 in k4022 in a4016 in a4004 in string-ci> in k1437 in k1434 */
static void C_ccall f_4032(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4032,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a4010 in a4004 in string-ci> in k1437 in k1434 */
static void C_ccall f_4011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4011,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3998 in string-ci> in k1437 in k1434 */
static void C_ccall f_3999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3999,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-ci< in k1437 in k1434 */
static void C_ccall f_3942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3942r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3942r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3942r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[242]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3948,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[243],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3954,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[248],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3953 in string-ci< in k1437 in k1434 */
static void C_ccall f_3954(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3954,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3960,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[244],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3966,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=lf[247],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3965 in a3953 in string-ci< in k1437 in k1434 */
static void C_ccall f_3966(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3966,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3973,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_3973(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_3973(t6,C_SCHEME_FALSE);}}

/* k3971 in a3965 in a3953 in string-ci< in k1437 in k1434 */
static void C_fcall f_3973(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3973,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_lessp(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3981,a[2]=lf[245],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3984,a[2]=lf[246],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 895  %string-compare-ci */
f_3364(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],*((C_word*)lf[186]+1),t2,t3);}}

/* a3983 in k3971 in a3965 in a3953 in string-ci< in k1437 in k1434 */
static void C_ccall f_3984(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3984,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3980 in k3971 in a3965 in a3953 in string-ci< in k1437 in k1434 */
static void C_ccall f_3981(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3981,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3959 in a3953 in string-ci< in k1437 in k1434 */
static void C_ccall f_3960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3960,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3947 in string-ci< in k1437 in k1434 */
static void C_ccall f_3948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3948,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-ci<> in k1437 in k1434 */
static void C_ccall f_3875(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3875r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3875r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3875r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[235]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3881,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[236],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3887,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[240],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3886 in string-ci<> in k1437 in k1434 */
static void C_ccall f_3887(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3887,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3893,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[237],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3899,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,a[6]=lf[239],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3898 in a3886 in string-ci<> in k1437 in k1434 */
static void C_ccall f_3899(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3899,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
t5=(C_word)C_fixnum_difference(t3,t2);
t6=(C_word)C_eqp(t4,t5);
t7=(C_word)C_i_not(t6);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3922,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t9=(C_word)C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t9)){
t10=((C_word*)t0)[4];
t11=t2;
t12=t8;
f_3922(t12,(C_word)C_eqp(t10,t11));}
else{
t10=t8;
f_3922(t10,C_SCHEME_FALSE);}}}

/* k3920 in a3898 in a3886 in string-ci<> in k1437 in k1434 */
static void C_fcall f_3922(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3922,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3917,a[2]=lf[238],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 884  %string-compare-ci */
f_3364(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],*((C_word*)lf[186]+1),t2,*((C_word*)lf[186]+1));}}

/* a3916 in k3920 in a3898 in a3886 in string-ci<> in k1437 in k1434 */
static void C_ccall f_3917(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3917,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3892 in a3886 in string-ci<> in k1437 in k1434 */
static void C_ccall f_3893(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3893,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3880 in string-ci<> in k1437 in k1434 */
static void C_ccall f_3881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3881,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-ci= in k1437 in k1434 */
static void C_ccall f_3813(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3813r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3813r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3813r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[227]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3819,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[228],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3825,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[233],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3824 in string-ci= in k1437 in k1434 */
static void C_ccall f_3825(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3825,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3831,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[229],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3837,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,a[6]=lf[232],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3836 in a3824 in string-ci= in k1437 in k1434 */
static void C_ccall f_3837(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3837,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
t5=(C_word)C_fixnum_difference(t3,t2);
t6=(C_word)C_eqp(t4,t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3847,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t8=(C_word)C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t8)){
t9=((C_word*)t0)[4];
t10=t2;
t11=t7;
f_3847(t11,(C_word)C_eqp(t9,t10));}
else{
t9=t7;
f_3847(t9,C_SCHEME_FALSE);}}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}

/* k3845 in a3836 in a3824 in string-ci= in k1437 in k1434 */
static void C_fcall f_3847(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3847,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3855,a[2]=lf[230],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3858,a[2]=lf[231],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 874  %string-compare-ci */
f_3364(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,*((C_word*)lf[186]+1),t3);}}

/* a3857 in k3845 in a3836 in a3824 in string-ci= in k1437 in k1434 */
static void C_ccall f_3858(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3858,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3854 in k3845 in a3836 in a3824 in string-ci= in k1437 in k1434 */
static void C_ccall f_3855(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3855,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3830 in a3824 in string-ci= in k1437 in k1434 */
static void C_ccall f_3831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3831,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3818 in string-ci= in k1437 in k1434 */
static void C_ccall f_3819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3819,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string>= in k1437 in k1434 */
static void C_ccall f_3765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3765r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3765r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3765r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[220]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3771,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[221],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3777,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[225],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3776 in string>= in k1437 in k1434 */
static void C_ccall f_3777(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3777,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3783,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[222],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3789,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=lf[224],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3788 in a3776 in string>= in k1437 in k1434 */
static void C_ccall f_3789(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3789,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3796,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_3796(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_3796(t6,C_SCHEME_FALSE);}}

/* k3794 in a3788 in a3776 in string>= in k1437 in k1434 */
static void C_fcall f_3796(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3796,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_greater_or_equal_p(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3804,a[2]=lf[223],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 864  %string-compare */
f_3302(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],t2,*((C_word*)lf[186]+1),*((C_word*)lf[186]+1));}}

/* a3803 in k3794 in a3788 in a3776 in string>= in k1437 in k1434 */
static void C_ccall f_3804(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3804,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3782 in a3776 in string>= in k1437 in k1434 */
static void C_ccall f_3783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3783,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3770 in string>= in k1437 in k1434 */
static void C_ccall f_3771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3771,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string<= in k1437 in k1434 */
static void C_ccall f_3717(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3717r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3717r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3717r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[213]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3723,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[214],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3729,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[218],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3728 in string<= in k1437 in k1434 */
static void C_ccall f_3729(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3729,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3735,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[215],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3741,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=lf[217],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3740 in a3728 in string<= in k1437 in k1434 */
static void C_ccall f_3741(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3741,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3748,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_3748(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_3748(t6,C_SCHEME_FALSE);}}

/* k3746 in a3740 in a3728 in string<= in k1437 in k1434 */
static void C_fcall f_3748(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3748,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_less_or_equal_p(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3756,a[2]=lf[216],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 853  %string-compare */
f_3302(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],*((C_word*)lf[186]+1),*((C_word*)lf[186]+1),t2);}}

/* a3755 in k3746 in a3740 in a3728 in string<= in k1437 in k1434 */
static void C_ccall f_3756(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3756,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3734 in a3728 in string<= in k1437 in k1434 */
static void C_ccall f_3735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3735,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3722 in string<= in k1437 in k1434 */
static void C_ccall f_3723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3723,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string> in k1437 in k1434 */
static void C_ccall f_3666(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3666r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3666r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3666r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[205]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3672,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[206],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3678,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[211],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3677 in string> in k1437 in k1434 */
static void C_ccall f_3678(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3678,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3684,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[207],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3690,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=lf[210],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3689 in a3677 in string> in k1437 in k1434 */
static void C_ccall f_3690(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3690,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3697,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_3697(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_3697(t6,C_SCHEME_FALSE);}}

/* k3695 in a3689 in a3677 in string> in k1437 in k1434 */
static void C_fcall f_3697(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3697,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_greaterp(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3705,a[2]=lf[208],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3708,a[2]=lf[209],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 842  %string-compare */
f_3302(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],t2,t3,*((C_word*)lf[186]+1));}}

/* a3707 in k3695 in a3689 in a3677 in string> in k1437 in k1434 */
static void C_ccall f_3708(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3708,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3704 in k3695 in a3689 in a3677 in string> in k1437 in k1434 */
static void C_ccall f_3705(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3705,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3683 in a3677 in string> in k1437 in k1434 */
static void C_ccall f_3684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3684,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3671 in string> in k1437 in k1434 */
static void C_ccall f_3672(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3672,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string< in k1437 in k1434 */
static void C_ccall f_3615(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3615r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3615r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3615r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[197]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3621,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[198],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3627,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[203],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3626 in string< in k1437 in k1434 */
static void C_ccall f_3627(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3627,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3633,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[199],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3639,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=lf[202],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3638 in a3626 in string< in k1437 in k1434 */
static void C_ccall f_3639(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3639,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3646,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[2]);
if(C_truep(t5)){
t6=((C_word*)t0)[3];
t7=t2;
t8=t4;
f_3646(t8,(C_word)C_eqp(t6,t7));}
else{
t6=t4;
f_3646(t6,C_SCHEME_FALSE);}}

/* k3644 in a3638 in a3626 in string< in k1437 in k1434 */
static void C_fcall f_3646(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3646,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
t3=((C_word*)t0)[7];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_fixnum_lessp(t2,t3));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3654,a[2]=lf[200],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3657,a[2]=lf[201],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 831  %string-compare */
f_3302(((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[8],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[7],*((C_word*)lf[186]+1),t2,t3);}}

/* a3656 in k3644 in a3638 in a3626 in string< in k1437 in k1434 */
static void C_ccall f_3657(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3657,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3653 in k3644 in a3638 in a3626 in string< in k1437 in k1434 */
static void C_ccall f_3654(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3654,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3632 in a3626 in string< in k1437 in k1434 */
static void C_ccall f_3633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3633,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3620 in string< in k1437 in k1434 */
static void C_ccall f_3621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3621,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string<> in k1437 in k1434 */
static void C_ccall f_3548(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3548r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3548r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3548r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[190]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3554,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[191],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3560,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[195],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3559 in string<> in k1437 in k1434 */
static void C_ccall f_3560(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3560,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3566,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[192],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3572,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,a[6]=lf[194],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3571 in a3559 in string<> in k1437 in k1434 */
static void C_ccall f_3572(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3572,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
t5=(C_word)C_fixnum_difference(t3,t2);
t6=(C_word)C_eqp(t4,t5);
t7=(C_word)C_i_not(t6);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3595,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t9=(C_word)C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t9)){
t10=((C_word*)t0)[4];
t11=t2;
t12=t8;
f_3595(t12,(C_word)C_eqp(t10,t11));}
else{
t10=t8;
f_3595(t10,C_SCHEME_FALSE);}}}

/* k3593 in a3571 in a3559 in string<> in k1437 in k1434 */
static void C_fcall f_3595(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3595,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3590,a[2]=lf[193],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 820  %string-compare */
f_3302(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],*((C_word*)lf[186]+1),t2,*((C_word*)lf[186]+1));}}

/* a3589 in k3593 in a3571 in a3559 in string<> in k1437 in k1434 */
static void C_ccall f_3590(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3590,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3565 in a3559 in string<> in k1437 in k1434 */
static void C_ccall f_3566(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3566,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3553 in string<> in k1437 in k1434 */
static void C_ccall f_3554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3554,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string= in k1437 in k1434 */
static void C_ccall f_3486(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3486r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3486r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3486r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[181]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3492,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[182],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3498,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[188],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3497 in string= in k1437 in k1434 */
static void C_ccall f_3498(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3498,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3504,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[183],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3510,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,a[6]=lf[187],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3509 in a3497 in string= in k1437 in k1434 */
static void C_ccall f_3510(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3510,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
t5=(C_word)C_fixnum_difference(t3,t2);
t6=(C_word)C_eqp(t4,t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3520,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t8=(C_word)C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t8)){
t9=((C_word*)t0)[4];
t10=t2;
t11=t7;
f_3520(t11,(C_word)C_eqp(t9,t10));}
else{
t9=t7;
f_3520(t9,C_SCHEME_FALSE);}}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}

/* k3518 in a3509 in a3497 in string= in k1437 in k1434 */
static void C_fcall f_3520(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3520,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3528,a[2]=lf[184],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3531,a[2]=lf[185],tmp=(C_word)a,a+=3,tmp);
/* srfi-13.scm: 810  %string-compare */
f_3302(((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,*((C_word*)lf[186]+1),t3);}}

/* a3530 in k3518 in a3509 in a3497 in string= in k1437 in k1434 */
static void C_ccall f_3531(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3531,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3527 in k3518 in a3509 in a3497 in string= in k1437 in k1434 */
static void C_ccall f_3528(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3528,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}

/* a3503 in a3497 in string= in k1437 in k1434 */
static void C_ccall f_3504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3504,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3491 in string= in k1437 in k1434 */
static void C_ccall f_3492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3492,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-compare-ci in k1437 in k1434 */
static void C_ccall f_3456(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...){
C_word tmp;
C_word t7;
va_list v;
C_word *a,c2=c;
C_save_rest(t6,c2,7);
if(c<7) C_bad_min_argc_2(c,7,t0);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr7r,(void*)f_3456r,7,t0,t1,t2,t3,t4,t5,t6);}
else{
a=C_alloc((c-7)*3);
t7=C_restore_rest(a,C_rest_count(0));
f_3456r(t0,t1,t2,t3,t4,t5,t6,t7);}}

static void C_ccall f_3456r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(15);
t8=*((C_word*)lf[175]+1);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3462,a[2]=t7,a[3]=t2,a[4]=t8,a[5]=lf[176],tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3468,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t2,a[6]=t3,a[7]=t8,a[8]=lf[179],tmp=(C_word)a,a+=9,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t9,t10);}

/* a3467 in string-compare-ci in k1437 in k1434 */
static void C_ccall f_3468(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3468,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3474,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=lf[177],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3480,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=lf[178],tmp=(C_word)a,a+=10,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3479 in a3467 in string-compare-ci in k1437 in k1434 */
static void C_ccall f_3480(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3480,4,t0,t1,t2,t3);}
/* srfi-13.scm: 794  %string-compare-ci */
f_3364(t1,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t2,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3473 in a3467 in string-compare-ci in k1437 in k1434 */
static void C_ccall f_3474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3474,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3461 in string-compare-ci in k1437 in k1434 */
static void C_ccall f_3462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3462,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-compare in k1437 in k1434 */
static void C_ccall f_3426(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,...){
C_word tmp;
C_word t7;
va_list v;
C_word *a,c2=c;
C_save_rest(t6,c2,7);
if(c<7) C_bad_min_argc_2(c,7,t0);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr7r,(void*)f_3426r,7,t0,t1,t2,t3,t4,t5,t6);}
else{
a=C_alloc((c-7)*3);
t7=C_restore_rest(a,C_rest_count(0));
f_3426r(t0,t1,t2,t3,t4,t5,t6,t7);}}

static void C_ccall f_3426r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word *a=C_alloc(15);
t8=*((C_word*)lf[169]+1);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3432,a[2]=t7,a[3]=t2,a[4]=t8,a[5]=lf[170],tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3438,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t2,a[6]=t3,a[7]=t8,a[8]=lf[173],tmp=(C_word)a,a+=9,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t9,t10);}

/* a3437 in string-compare in k1437 in k1434 */
static void C_ccall f_3438(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3438,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3444,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=lf[171],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3450,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=t3,a[8]=((C_word*)t0)[5],a[9]=lf[172],tmp=(C_word)a,a+=10,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3449 in a3437 in string-compare in k1437 in k1434 */
static void C_ccall f_3450(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3450,4,t0,t1,t2,t3);}
/* srfi-13.scm: 786  %string-compare */
f_3302(t1,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t2,t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3443 in a3437 in string-compare in k1437 in k1434 */
static void C_ccall f_3444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3444,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3431 in string-compare in k1437 in k1434 */
static void C_ccall f_3432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3432,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-compare-ci in k1437 in k1434 */
static void C_fcall f_3364(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10){
C_word tmp;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3364,NULL,10,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}
t11=(C_word)C_fixnum_difference(t4,t3);
t12=(C_word)C_fixnum_difference(t7,t6);
t13=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3374,a[2]=t5,a[3]=t6,a[4]=t2,a[5]=t10,a[6]=t3,a[7]=t4,a[8]=t1,a[9]=t8,a[10]=t9,a[11]=t12,a[12]=t11,tmp=(C_word)a,a+=13,tmp);
/* srfi-13.scm: 771  %string-prefix-length-ci */
f_2812(t13,t2,t3,t4,t5,t6,t7);}

/* k3372 in %string-compare-ci in k1437 in k1434 */
static void C_ccall f_3374(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3374,2,t0,t1);}
t2=t1;
t3=(C_word)C_eqp(t2,((C_word*)t0)[12]);
if(C_truep(t3)){
t4=t1;
t5=(C_word)C_eqp(t4,((C_word*)t0)[11]);
t6=(C_truep(t5)?((C_word*)t0)[10]:((C_word*)t0)[9]);
t7=t6;
((C_proc3)C_retrieve_proc(t7))(3,t7,((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t4=(C_word)C_fixnum_plus(((C_word*)t0)[6],t1);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3399,a[2]=t4,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t6=t1;
t7=(C_word)C_eqp(t6,((C_word*)t0)[11]);
if(C_truep(t7)){
t8=t5;
f_3399(t8,((C_word*)t0)[5]);}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3408,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[9],a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_fixnum_plus(((C_word*)t0)[6],t1);
t10=(C_word)C_i_string_ref(((C_word*)t0)[4],t9);
t11=(C_word)C_fixnum_plus(((C_word*)t0)[3],t1);
t12=(C_word)C_i_string_ref(((C_word*)t0)[2],t11);
/* srfi-13.scm: 775  char-ci<? */
t13=*((C_word*)lf[167]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t8,t10,t12);}}}

/* k3406 in k3372 in %string-compare-ci in k1437 in k1434 */
static void C_ccall f_3408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
f_3399(t2,(C_truep(t1)?((C_word*)t0)[3]:((C_word*)t0)[2]));}

/* k3397 in k3372 in %string-compare-ci in k1437 in k1434 */
static void C_fcall f_3399(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-compare in k1437 in k1434 */
static void C_fcall f_3302(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10){
C_word tmp;
C_word t11;
C_word t12;
C_word t13;
C_word t14;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3302,NULL,10,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}
t11=(C_word)C_fixnum_difference(t4,t3);
t12=(C_word)C_fixnum_difference(t7,t6);
t13=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3312,a[2]=t5,a[3]=t6,a[4]=t2,a[5]=t10,a[6]=t3,a[7]=t4,a[8]=t1,a[9]=t8,a[10]=t9,a[11]=t12,a[12]=t11,tmp=(C_word)a,a+=13,tmp);
/* srfi-13.scm: 757  %string-prefix-length */
f_2654(t13,t2,t3,t4,t5,t6,t7);}

/* k3310 in %string-compare in k1437 in k1434 */
static void C_ccall f_3312(C_word c,C_word t0,C_word t1){
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
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3312,2,t0,t1);}
t2=t1;
t3=(C_word)C_eqp(t2,((C_word*)t0)[12]);
if(C_truep(t3)){
t4=t1;
t5=(C_word)C_eqp(t4,((C_word*)t0)[11]);
t6=(C_truep(t5)?((C_word*)t0)[10]:((C_word*)t0)[9]);
t7=t6;
((C_proc3)C_retrieve_proc(t7))(3,t7,((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t4=(C_word)C_fixnum_plus(t1,((C_word*)t0)[6]);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3337,a[2]=t4,a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t6=t1;
t7=(C_word)C_eqp(t6,((C_word*)t0)[11]);
if(C_truep(t7)){
t8=t5;
f_3337(t8,((C_word*)t0)[5]);}
else{
t8=(C_word)C_fixnum_plus(((C_word*)t0)[6],t1);
t9=(C_word)C_i_string_ref(((C_word*)t0)[4],t8);
t10=(C_word)C_fixnum_plus(((C_word*)t0)[3],t1);
t11=(C_word)C_i_string_ref(((C_word*)t0)[2],t10);
t12=(C_word)C_fixnum_lessp(t9,t11);
t13=t5;
f_3337(t13,(C_truep(t12)?((C_word*)t0)[9]:((C_word*)t0)[5]));}}}

/* k3335 in k3310 in %string-compare in k1437 in k1434 */
static void C_fcall f_3337(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-suffix-ci? in k1437 in k1434 */
static void C_ccall f_3180(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3180r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3180r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3180r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[158]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3186,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[159],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3192,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[162],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3191 in string-suffix-ci? in k1437 in k1434 */
static void C_ccall f_3192(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3192,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3198,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[160],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3204,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=lf[161],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3203 in a3191 in string-suffix-ci? in k1437 in k1434 */
static void C_ccall f_3204(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3204,4,t0,t1,t2,t3);}
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[2];
t8=(C_word)C_fixnum_difference(t6,t5);
t9=(C_word)C_fixnum_difference(t3,t2);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t8,t9))){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3296,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 741  %string-suffix-length-ci */
f_2885(t10,t4,t5,t6,t7,t2,t3);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k3294 in a3203 in a3191 in string-suffix-ci? in k1437 in k1434 */
static void C_ccall f_3296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(((C_word*)t0)[2],t1));}

/* a3197 in a3191 in string-suffix-ci? in k1437 in k1434 */
static void C_ccall f_3198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3198,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3185 in string-suffix-ci? in k1437 in k1434 */
static void C_ccall f_3186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3186,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-prefix-ci? in k1437 in k1434 */
static void C_ccall f_3150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3150r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3150r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3150r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[152]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3156,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[153],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3162,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[156],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3161 in string-prefix-ci? in k1437 in k1434 */
static void C_ccall f_3162(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3162,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3168,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[154],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3174,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=lf[155],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3173 in a3161 in string-prefix-ci? in k1437 in k1434 */
static void C_ccall f_3174(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3174,4,t0,t1,t2,t3);}
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[2];
t8=(C_word)C_fixnum_difference(t6,t5);
t9=(C_word)C_fixnum_difference(t3,t2);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t8,t9))){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3273,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 735  %string-prefix-length-ci */
f_2812(t10,t4,t5,t6,t7,t2,t3);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k3271 in a3173 in a3161 in string-prefix-ci? in k1437 in k1434 */
static void C_ccall f_3273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(((C_word*)t0)[2],t1));}

/* a3167 in a3161 in string-prefix-ci? in k1437 in k1434 */
static void C_ccall f_3168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3168,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3155 in string-prefix-ci? in k1437 in k1434 */
static void C_ccall f_3156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3156,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-suffix? in k1437 in k1434 */
static void C_ccall f_3120(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3120r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3120r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3120r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[146]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3126,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[147],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3132,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[150],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3131 in string-suffix? in k1437 in k1434 */
static void C_ccall f_3132(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3132,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3138,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[148],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3144,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=lf[149],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3143 in a3131 in string-suffix? in k1437 in k1434 */
static void C_ccall f_3144(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3144,4,t0,t1,t2,t3);}
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[2];
t8=(C_word)C_fixnum_difference(t6,t5);
t9=(C_word)C_fixnum_difference(t3,t2);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t8,t9))){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3250,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 729  %string-suffix-length */
f_2727(t10,t4,t5,t6,t7,t2,t3);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k3248 in a3143 in a3131 in string-suffix? in k1437 in k1434 */
static void C_ccall f_3250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(((C_word*)t0)[2],t1));}

/* a3137 in a3131 in string-suffix? in k1437 in k1434 */
static void C_ccall f_3138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3138,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3125 in string-suffix? in k1437 in k1434 */
static void C_ccall f_3126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3126,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-prefix? in k1437 in k1434 */
static void C_ccall f_3090(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3090r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3090r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3090r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[140]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3096,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[141],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3102,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[144],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3101 in string-prefix? in k1437 in k1434 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3102,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3108,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[142],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3114,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=lf[143],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3113 in a3101 in string-prefix? in k1437 in k1434 */
static void C_ccall f_3114(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3114,4,t0,t1,t2,t3);}
t4=((C_word*)t0)[5];
t5=((C_word*)t0)[4];
t6=((C_word*)t0)[3];
t7=((C_word*)t0)[2];
t8=(C_word)C_fixnum_difference(t6,t5);
t9=(C_word)C_fixnum_difference(t3,t2);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t8,t9))){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3227,a[2]=t8,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 722  %string-prefix-length */
f_2654(t10,t4,t5,t6,t7,t2,t3);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k3225 in a3113 in a3101 in string-prefix? in k1437 in k1434 */
static void C_ccall f_3227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_eqp(t1,((C_word*)t0)[2]));}

/* a3107 in a3101 in string-prefix? in k1437 in k1434 */
static void C_ccall f_3108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3108,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3095 in string-prefix? in k1437 in k1434 */
static void C_ccall f_3096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3096,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-suffix-length-ci in k1437 in k1434 */
static void C_ccall f_3060(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3060r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3060r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3060r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[134]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3066,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[135],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3072,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[138],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3071 in string-suffix-length-ci in k1437 in k1434 */
static void C_ccall f_3072(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3072,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3078,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[136],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3084,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=lf[137],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3083 in a3071 in string-suffix-length-ci in k1437 in k1434 */
static void C_ccall f_3084(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3084,4,t0,t1,t2,t3);}
/* srfi-13.scm: 686  %string-suffix-length-ci */
f_2885(t1,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a3077 in a3071 in string-suffix-length-ci in k1437 in k1434 */
static void C_ccall f_3078(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3078,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3065 in string-suffix-length-ci in k1437 in k1434 */
static void C_ccall f_3066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3066,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-prefix-length-ci in k1437 in k1434 */
static void C_ccall f_3030(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3030r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3030r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3030r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[128]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3036,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[129],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3042,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[132],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3041 in string-prefix-length-ci in k1437 in k1434 */
static void C_ccall f_3042(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3042,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3048,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[130],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3054,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=lf[131],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3053 in a3041 in string-prefix-length-ci in k1437 in k1434 */
static void C_ccall f_3054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3054,4,t0,t1,t2,t3);}
/* srfi-13.scm: 681  %string-prefix-length-ci */
f_2812(t1,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a3047 in a3041 in string-prefix-length-ci in k1437 in k1434 */
static void C_ccall f_3048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3048,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3035 in string-prefix-length-ci in k1437 in k1434 */
static void C_ccall f_3036(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3036,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-suffix-length in k1437 in k1434 */
static void C_ccall f_3000(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_3000r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_3000r(t0,t1,t2,t3,t4);}}

static void C_ccall f_3000r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[122]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3006,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[123],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3012,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[126],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a3011 in string-suffix-length in k1437 in k1434 */
static void C_ccall f_3012(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3012,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3018,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[124],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3024,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=lf[125],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a3023 in a3011 in string-suffix-length in k1437 in k1434 */
static void C_ccall f_3024(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3024,4,t0,t1,t2,t3);}
/* srfi-13.scm: 676  %string-suffix-length */
f_2727(t1,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a3017 in a3011 in string-suffix-length in k1437 in k1434 */
static void C_ccall f_3018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3018,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3005 in string-suffix-length in k1437 in k1434 */
static void C_ccall f_3006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3006,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-prefix-length in k1437 in k1434 */
static void C_ccall f_2970(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_2970r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2970r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2970r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(12);
t5=*((C_word*)lf[116]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2976,a[2]=t4,a[3]=t2,a[4]=t5,a[5]=lf[117],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2982,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=lf[120],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a2981 in string-prefix-length in k1437 in k1434 */
static void C_ccall f_2982(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2982,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2988,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[118],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2994,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=lf[119],tmp=(C_word)a,a+=7,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a2993 in a2981 in string-prefix-length in k1437 in k1434 */
static void C_ccall f_2994(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2994,4,t0,t1,t2,t3);}
/* srfi-13.scm: 671  %string-prefix-length */
f_2654(t1,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a2987 in a2981 in string-prefix-length in k1437 in k1434 */
static void C_ccall f_2988(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2988,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2975 in string-prefix-length in k1437 in k1434 */
static void C_ccall f_2976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2976,2,t0,t1);}
/* string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-suffix-length-ci in k1437 in k1434 */
static void C_fcall f_2885(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2885,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2889,a[2]=t5,a[3]=t2,a[4]=t7,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t9=(C_word)C_fixnum_difference(t4,t3);
t10=(C_word)C_fixnum_difference(t7,t6);
/* srfi-13.scm: 654  min */
t11=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t8,t9,t10);}

/* k2887 in %string-suffix-length-ci in k1437 in k1434 */
static void C_ccall f_2889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2889,2,t0,t1);}
t2=(C_word)C_fixnum_difference(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2898,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t4)){
t5=((C_word*)t0)[6];
t6=((C_word*)t0)[4];
t7=t3;
f_2898(t7,(C_word)C_eqp(t5,t6));}
else{
t5=t3;
f_2898(t5,C_SCHEME_FALSE);}}

/* k2896 in k2887 in %string-suffix-length-ci in k1437 in k1434 */
static void C_fcall f_2898(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2898,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[7]);}
else{
t2=(C_word)C_fixnum_difference(((C_word*)t0)[6],C_fix(1));
t3=(C_word)C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2911,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=lf[114],tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_2911(t7,((C_word*)t0)[8],t2,t3);}}

/* lp in k2896 in k2887 in %string-suffix-length-ci in k1437 in k1434 */
static void C_fcall f_2911(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2911,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_fixnum_lessp(t4,((C_word*)t0)[6]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2921,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_2921(t7,t5);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2946,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
t9=(C_word)C_i_string_ref(((C_word*)t0)[2],t3);
/* srfi-13.scm: 662  char-ci=? */
t10=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t8,t9);}}

/* k2944 in lp in k2896 in k2887 in %string-suffix-length-ci in k1437 in k1434 */
static void C_ccall f_2946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2921(t2,(C_word)C_i_not(t1));}

/* k2919 in lp in k2896 in k2887 in %string-suffix-length-ci in k1437 in k1434 */
static void C_fcall f_2921(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_difference(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_fixnum_difference(t2,C_fix(1)));}
else{
t2=(C_word)C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 665  lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2911(t4,((C_word*)t0)[4],t2,t3);}}

/* %string-prefix-length-ci in k1437 in k1434 */
static void C_fcall f_2812(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2812,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2816,a[2]=t6,a[3]=t5,a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t9=(C_word)C_fixnum_difference(t4,t3);
t10=(C_word)C_fixnum_difference(t7,t6);
/* srfi-13.scm: 640  min */
t11=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t8,t9,t10);}

/* k2814 in %string-prefix-length-ci in k1437 in k1434 */
static void C_ccall f_2816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2816,2,t0,t1);}
t2=(C_word)C_fixnum_plus(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[3]);
if(C_truep(t4)){
t5=((C_word*)t0)[6];
t6=((C_word*)t0)[2];
t7=t3;
f_2825(t7,(C_word)C_eqp(t5,t6));}
else{
t5=t3;
f_2825(t5,C_SCHEME_FALSE);}}

/* k2823 in k2814 in %string-prefix-length-ci in k1437 in k1434 */
static void C_fcall f_2825(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2825,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[7]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2830,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=lf[111],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2830(t5,((C_word*)t0)[8],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* lp in k2823 in k2814 in %string-prefix-length-ci in k1437 in k1434 */
static void C_fcall f_2830(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2830,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_fixnum_greater_or_equal_p(t4,((C_word*)t0)[6]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2840,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_2840(t7,t5);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2861,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
t9=(C_word)C_i_string_ref(((C_word*)t0)[2],t3);
/* srfi-13.scm: 648  char-ci=? */
t10=*((C_word*)lf[110]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t7,t8,t9);}}

/* k2859 in lp in k2823 in k2814 in %string-prefix-length-ci in k1437 in k1434 */
static void C_ccall f_2861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2840(t2,(C_word)C_i_not(t1));}

/* k2838 in lp in k2823 in k2814 in %string-prefix-length-ci in k1437 in k1434 */
static void C_fcall f_2840(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]));}
else{
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 651  lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2830(t4,((C_word*)t0)[6],t2,t3);}}

/* %string-suffix-length in k1437 in k1434 */
static void C_fcall f_2727(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2727,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2731,a[2]=t5,a[3]=t2,a[4]=t7,a[5]=t1,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t9=(C_word)C_fixnum_difference(t4,t3);
t10=(C_word)C_fixnum_difference(t7,t6);
/* srfi-13.scm: 626  min */
t11=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t8,t9,t10);}

/* k2729 in %string-suffix-length in k1437 in k1434 */
static void C_ccall f_2731(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2731,2,t0,t1);}
t2=(C_word)C_fixnum_difference(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2740,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_eqp(((C_word*)t0)[3],((C_word*)t0)[2]);
if(C_truep(t4)){
t5=((C_word*)t0)[6];
t6=((C_word*)t0)[4];
t7=t3;
f_2740(t7,(C_word)C_eqp(t5,t6));}
else{
t5=t3;
f_2740(t5,C_SCHEME_FALSE);}}

/* k2738 in k2729 in %string-suffix-length in k1437 in k1434 */
static void C_fcall f_2740(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2740,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[7]);}
else{
t2=(C_word)C_fixnum_difference(((C_word*)t0)[6],C_fix(1));
t3=(C_word)C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2753,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[4],a[7]=lf[107],tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_2753(t7,((C_word*)t0)[8],t2,t3);}}

/* lp in k2738 in k2729 in %string-suffix-length in k1437 in k1434 */
static void C_fcall f_2753(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2753,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_fixnum_lessp(t4,((C_word*)t0)[6]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2763,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_2763(t7,t5);}
else{
t7=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
t8=(C_word)C_i_string_ref(((C_word*)t0)[2],t3);
t9=(C_word)C_eqp(t7,t8);
t10=t6;
f_2763(t10,(C_word)C_i_not(t9));}}

/* k2761 in lp in k2738 in k2729 in %string-suffix-length in k1437 in k1434 */
static void C_fcall f_2763(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_difference(((C_word*)t0)[6],((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_fixnum_difference(t2,C_fix(1)));}
else{
t2=(C_word)C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 637  lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2753(t4,((C_word*)t0)[4],t2,t3);}}

/* %string-prefix-length in k1437 in k1434 */
static void C_fcall f_2654(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2654,NULL,7,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2658,a[2]=t6,a[3]=t5,a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t9=(C_word)C_fixnum_difference(t4,t3);
t10=(C_word)C_fixnum_difference(t7,t6);
/* srfi-13.scm: 612  min */
t11=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t8,t9,t10);}

/* k2656 in %string-prefix-length in k1437 in k1434 */
static void C_ccall f_2658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2658,2,t0,t1);}
t2=(C_word)C_fixnum_plus(((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2667,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=t1,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_eqp(((C_word*)t0)[4],((C_word*)t0)[3]);
if(C_truep(t4)){
t5=((C_word*)t0)[6];
t6=((C_word*)t0)[2];
t7=t3;
f_2667(t7,(C_word)C_eqp(t5,t6));}
else{
t5=t3;
f_2667(t5,C_SCHEME_FALSE);}}

/* k2665 in k2656 in %string-prefix-length in k1437 in k1434 */
static void C_fcall f_2667(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2667,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[7]);}
else{
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2672,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=lf[104],tmp=(C_word)a,a+=8,tmp));
t5=((C_word*)t3)[1];
f_2672(t5,((C_word*)t0)[8],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* lp in k2665 in k2656 in %string-prefix-length in k1437 in k1434 */
static void C_fcall f_2672(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2672,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_fixnum_greater_or_equal_p(t4,((C_word*)t0)[6]);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2682,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
if(C_truep(t5)){
t7=t6;
f_2682(t7,t5);}
else{
t7=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
t8=(C_word)C_i_string_ref(((C_word*)t0)[2],t3);
t9=(C_word)C_eqp(t7,t8);
t10=t6;
f_2682(t10,(C_word)C_i_not(t9));}}

/* k2680 in lp in k2665 in k2656 in %string-prefix-length in k1437 in k1434 */
static void C_fcall f_2682(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]));}
else{
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 623  lp */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2672(t4,((C_word*)t0)[6],t2,t3);}}

/* string-tabulate in k1437 in k1434 */
static void C_ccall f_2615(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2615,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_exact_2(t3,lf[100]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2622,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 594  make-string */
t6=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t3);}

/* k2620 in string-tabulate in k1437 in k1434 */
static void C_ccall f_2622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2625,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[3],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2631,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t1,a[5]=lf[101],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2631(t7,t2,t3);}

/* do264 in k2620 in string-tabulate in k1437 in k1434 */
static void C_fcall f_2631(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2631,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_lessp(t3,C_fix(0)))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2652,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 597  proc */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}}

/* k2650 in do264 in k2620 in string-tabulate in k1437 in k1434 */
static void C_ccall f_2652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_string_set(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_2631(t4,((C_word*)t0)[2],t3);}

/* k2623 in k2620 in string-tabulate in k1437 in k1434 */
static void C_ccall f_2625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* string-any in k1437 in k1434 */
static void C_ccall f_2485(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_2485r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2485r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2485r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2491,a[2]=t4,a[3]=t3,a[4]=lf[93],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2497,a[2]=t3,a[3]=t2,a[4]=lf[98],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a2496 in string-any in k1437 in k1434 */
static void C_ccall f_2497(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2497,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_charp(((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2509,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=lf[94],tmp=(C_word)a,a+=6,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_2509(t4,t2));}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2539,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 571  char-set? */
t5=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k2537 in a2496 in string-any in k1437 in k1434 */
static void C_ccall f_2539(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2539,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=lf[95],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2544(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[4]))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[6];
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2585,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],a[6]=lf[96],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2585(t7,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
/* srfi-13.scm: 585  ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[92],lf[97],*((C_word*)lf[92]+1),((C_word*)t0)[4]);}}}

/* lp in k2537 in a2496 in string-any in k1437 in k1434 */
static void C_fcall f_2585(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2585,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_string_ref(((C_word*)t0)[5],t2);
t4=(C_word)C_fixnum_plus(t2,C_fix(1));
t5=((C_word*)t0)[4];
t6=(C_word)C_eqp(t4,t5);
if(C_truep(t6)){
/* srfi-13.scm: 582  criteria */
t7=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t7))(3,t7,t1,t3);}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2604,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 583  criteria */
t8=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}}

/* k2602 in lp in k2537 in a2496 in string-any in k1437 in k1434 */
static void C_ccall f_2604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* srfi-13.scm: 583  lp */
t2=((C_word*)((C_word*)t0)[3])[1];
f_2585(t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* lp in k2537 in a2496 in string-any in k1437 in k1434 */
static void C_fcall f_2544(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2544,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2554,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
/* srfi-13.scm: 574  char-set-contains? */
t7=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k2552 in lp in k2537 in a2496 in string-any in k1437 in k1434 */
static void C_ccall f_2554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* srfi-13.scm: 575  lp */
t3=((C_word*)((C_word*)t0)[2])[1];
f_2544(t3,((C_word*)t0)[4],t2);}}

/* lp in a2496 in string-any in k1437 in k1434 */
static C_word C_fcall f_2509(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
loop:
C_stack_check;
t2=t1;
t3=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
t4=(C_word)C_i_string_ref(((C_word*)t0)[3],t1);
t5=(C_word)C_eqp(((C_word*)t0)[2],t4);
if(C_truep(t5)){
return(t5);}
else{
t6=(C_word)C_fixnum_plus(t1,C_fix(1));
t8=t6;
t1=t8;
goto loop;}}
else{
return(C_SCHEME_FALSE);}}

/* a2490 in string-any in k1437 in k1434 */
static void C_ccall f_2491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2491,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[92]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-every in k1437 in k1434 */
static void C_ccall f_2355(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_2355r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2355r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2355r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2361,a[2]=t4,a[3]=t3,a[4]=lf[83],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2367,a[2]=t3,a[3]=t2,a[4]=lf[90],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a2366 in string-every in k1437 in k1434 */
static void C_ccall f_2367(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2367,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_charp(((C_word*)t0)[3]))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2379,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=lf[84],tmp=(C_word)a,a+=6,tmp);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,f_2379(t4,t2));}
else{
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2409,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 545  char-set? */
t5=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[3]);}}

/* k2407 in a2366 in string-every in k1437 in k1434 */
static void C_ccall f_2409(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2409,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,a[5]=((C_word*)t0)[6],a[6]=lf[86],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_2414(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[4]))){
t2=((C_word*)t0)[2];
t3=((C_word*)t0)[6];
t4=(C_word)C_eqp(t2,t3);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2455,a[2]=t6,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],a[6]=lf[87],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_2455(t8,((C_word*)t0)[3],((C_word*)t0)[2]);}}
else{
/* srfi-13.scm: 559  ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[3],lf[82],lf[88],*((C_word*)lf[82]+1),((C_word*)t0)[4]);}}}

/* lp in k2407 in a2366 in string-every in k1437 in k1434 */
static void C_fcall f_2455(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2455,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_string_ref(((C_word*)t0)[5],t2);
t4=(C_word)C_fixnum_plus(t2,C_fix(1));
t5=((C_word*)t0)[4];
t6=(C_word)C_eqp(t4,t5);
if(C_truep(t6)){
/* srfi-13.scm: 556  criteria */
t7=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t7))(3,t7,t1,t3);}
else{
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2477,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 557  criteria */
t8=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}}

/* k2475 in lp in k2407 in a2366 in string-every in k1437 in k1434 */
static void C_ccall f_2477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* srfi-13.scm: 557  lp */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2455(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* lp in k2407 in a2366 in string-every in k1437 in k1434 */
static void C_fcall f_2414(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2414,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
t5=(C_word)C_fixnum_greater_or_equal_p(t3,t4);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2427,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
/* srfi-13.scm: 548  char-set-contains? */
t8=*((C_word*)lf[85]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,((C_word*)t0)[2],t7);}}

/* k2425 in lp in k2407 in a2366 in string-every in k1437 in k1434 */
static void C_ccall f_2427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 549  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2414(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* lp in a2366 in string-every in k1437 in k1434 */
static C_word C_fcall f_2379(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
loop:
C_stack_check;
t2=t1;
t3=((C_word*)t0)[4];
t4=(C_word)C_fixnum_greater_or_equal_p(t2,t3);
if(C_truep(t4)){
return(t4);}
else{
t5=(C_word)C_i_string_ref(((C_word*)t0)[3],t1);
t6=(C_word)C_eqp(((C_word*)t0)[2],t5);
if(C_truep(t6)){
t7=(C_word)C_fixnum_plus(t1,C_fix(1));
t9=t7;
t1=t9;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* a2360 in string-every in k1437 in k1434 */
static void C_ccall f_2361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2361,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[82]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-for-each-index in k1437 in k1434 */
static void C_ccall f_2318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr4r,(void*)f_2318r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2318r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2318r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(9);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2324,a[2]=t4,a[3]=t3,a[4]=lf[78],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2330,a[2]=t2,a[3]=lf[80],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a2329 in string-for-each-index in k1437 in k1434 */
static void C_ccall f_2330(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2330,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2336,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=t3,a[5]=lf[79],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_2336(t7,t1,t2);}

/* lp in a2329 in string-for-each-index in k1437 in k1434 */
static void C_fcall f_2336(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2336,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[4];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2346,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* srfi-13.scm: 535  proc */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* k2344 in lp in a2329 in string-for-each-index in k1437 in k1434 */
static void C_ccall f_2346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 535  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2336(t3,((C_word*)t0)[2],t2);}

/* a2323 in string-for-each-index in k1437 in k1434 */
static void C_ccall f_2324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2324,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[77]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-for-each in k1437 in k1434 */
static void C_ccall f_2277(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_2277r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_2277r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2277r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2283,a[2]=t4,a[3]=t3,a[4]=lf[73],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2289,a[2]=t2,a[3]=t3,a[4]=lf[75],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a2288 in string-for-each in k1437 in k1434 */
static void C_ccall f_2289(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2289,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2295,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t3,a[6]=lf[74],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2295(t7,t1,t2);}

/* lp in a2288 in string-for-each in k1437 in k1434 */
static void C_fcall f_2295(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2295,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2305,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
/* srfi-13.scm: 528  proc */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,t6);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* k2303 in lp in a2288 in string-for-each in k1437 in k1434 */
static void C_ccall f_2305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 529  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_2295(t3,((C_word*)t0)[2],t2);}

/* a2282 in string-for-each in k1437 in k1434 */
static void C_ccall f_2283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2283,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[72]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-unfold-right in k1437 in k1434 */
static void C_ccall f_2088(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr6r,(void*)f_2088r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_2088r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_2088r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
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
C_word *a=C_alloc(12);
t7=(C_word)C_i_nullp(t6);
t8=(C_truep(t7)?lf[65]:(C_word)C_i_car(t6));
t9=(C_word)C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t6));
t11=(C_word)C_i_nullp(t10);
t12=(C_truep(t11)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2259,a[2]=lf[67],tmp=(C_word)a,a+=3,tmp):(C_word)C_i_car(t10));
t13=(C_word)C_i_nullp(t10);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t10));
if(C_truep((C_word)C_i_nullp(t14))){
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2114,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=t12,a[8]=t8,tmp=(C_word)a,a+=9,tmp);
/* srfi-13.scm: 481  make-string */
t16=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,C_fix(40));}
else{
/* ##sys#error */
t15=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}

/* k2112 in string-unfold-right in k1437 in k1434 */
static void C_ccall f_2114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2114,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2116,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t3,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=lf[70],tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_2116(t5,((C_word*)t0)[3],C_SCHEME_END_OF_LIST,C_fix(0),t1,C_fix(40),C_fix(40),((C_word*)t0)[2]);}

/* lp in k2112 in string-unfold-right in k1437 in k1434 */
static void C_fcall f_2116(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2116,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2122,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t9,a[7]=((C_word*)t0)[6],a[8]=t4,a[9]=t2,a[10]=t3,a[11]=t5,a[12]=((C_word*)t0)[7],a[13]=lf[69],tmp=(C_word)a,a+=14,tmp));
t11=((C_word*)t9)[1];
f_2122(t11,t1,t6,t7);}

/* lp2 in lp in k2112 in string-unfold-right in k1437 in k1434 */
static void C_fcall f_2122(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2122,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2246,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=t2,a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],tmp=(C_word)a,a+=15,tmp);
/* srfi-13.scm: 486  p */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}

/* k2244 in lp2 in lp in k2112 in string-unfold-right in k1437 in k1434 */
static void C_ccall f_2246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2246,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2179,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[11],a[6]=((C_word*)t0)[12],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[14],tmp=(C_word)a,a+=9,tmp);
/* srfi-13.scm: 503  make-final */
t3=((C_word*)t0)[7];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2132,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[13],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* srfi-13.scm: 487  f */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[6]);}}

/* k2130 in k2244 in lp2 in lp in k2112 in string-unfold-right in k1437 in k1434 */
static void C_ccall f_2132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2132,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2135,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=t1,a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* srfi-13.scm: 488  g */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2133 in k2130 in k2244 in lp2 in lp in k2112 in string-unfold-right in k1437 in k1434 */
static void C_ccall f_2135(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2135,2,t0,t1);}
t2=((C_word*)t0)[10];
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
t3=(C_word)C_fixnum_difference(((C_word*)t0)[10],C_fix(1));
t4=(C_word)C_i_string_set(((C_word*)t0)[9],t3,((C_word*)t0)[8]);
/* srfi-13.scm: 492  lp2 */
t5=((C_word*)((C_word*)t0)[7])[1];
f_2122(t5,((C_word*)t0)[6],t3,t1);}
else{
t3=(C_word)C_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2156,a[2]=t1,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* srfi-13.scm: 495  min */
t5=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_fix(4096),t3);}}

/* k2154 in k2133 in k2130 in k2244 in lp2 in lp in k2112 in string-unfold-right in k1437 in k1434 */
static void C_ccall f_2156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2156,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,tmp=(C_word)a,a+=11,tmp);
/* srfi-13.scm: 496  make-string */
t3=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k2157 in k2154 in k2133 in k2130 in k2244 in lp2 in lp in k2112 in string-unfold-right in k1437 in k1434 */
static void C_ccall f_2159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2159,2,t0,t1);}
t2=(C_word)C_fixnum_difference(((C_word*)t0)[10],C_fix(1));
t3=(C_word)C_i_string_set(t1,t2,((C_word*)t0)[9]);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],((C_word*)t0)[7]);
t5=(C_word)C_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]);
/* srfi-13.scm: 499  lp */
t6=((C_word*)((C_word*)t0)[4])[1];
f_2116(t6,((C_word*)t0)[3],t4,t5,t1,((C_word*)t0)[10],t2,((C_word*)t0)[2]);}

/* k2177 in k2244 in lp2 in lp in k2112 in string-unfold-right in k1437 in k1434 */
static void C_ccall f_2179(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_2179,2,t0,t1);}
t2=(C_word)C_i_string_length(t1);
t3=(C_word)C_i_string_length(((C_word*)t0)[8]);
t4=(C_word)C_fixnum_difference(((C_word*)t0)[7],((C_word*)t0)[6]);
t5=(C_word)C_fixnum_plus((C_word)C_fixnum_plus(t3,((C_word*)t0)[5]),t4);
t6=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2194,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=t3,a[8]=((C_word*)t0)[8],a[9]=t4,a[10]=t2,a[11]=((C_word*)t0)[4],tmp=(C_word)a,a+=12,tmp);
t7=(C_word)C_fixnum_plus(t5,t2);
/* srfi-13.scm: 508  make-string */
t8=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t6,t7);}

/* k2192 in k2177 in k2244 in lp2 in lp in k2112 in string-unfold-right in k1437 in k1434 */
static void C_ccall f_2194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2194,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2197,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=t1,a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* srfi-13.scm: 509  %string-copy! */
f_5739(t2,t1,C_fix(0),((C_word*)t0)[2],C_fix(0),((C_word*)t0)[10]);}

/* k2195 in k2192 in k2177 in k2244 in lp2 in lp in k2112 in string-unfold-right in k1437 in k1434 */
static void C_ccall f_2197(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2197,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2200,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
/* srfi-13.scm: 510  %string-copy! */
f_5739(t2,((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2198 in k2195 in k2192 in k2177 in k2244 in lp2 in lp in k2112 in string-unfold-right in k1437 in k1434 */
static void C_ccall f_2200(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2200,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2203,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2209,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=t5,a[6]=lf[68],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_2209(t7,t2,t3,((C_word*)t0)[2]);}

/* lp in k2198 in k2195 in k2192 in k2177 in k2244 in lp2 in lp in k2112 in string-unfold-right in k1437 in k1434 */
static void C_fcall f_2209(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2209,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_car(t3);
t5=(C_word)C_i_cdr(t3);
t6=(C_word)C_i_string_length(t4);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2228,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t6,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 517  %string-copy! */
f_5739(t7,((C_word*)t0)[4],t2,t4,C_fix(0),t6);}
else{
/* srfi-13.scm: 519  %string-copy! */
f_5739(t1,((C_word*)t0)[4],t2,((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}}

/* k2226 in lp in k2198 in k2195 in k2192 in k2177 in k2244 in lp2 in lp in k2112 in string-unfold-right in k1437 in k1434 */
static void C_ccall f_2228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[6],((C_word*)t0)[5]);
/* srfi-13.scm: 518  lp */
t3=((C_word*)((C_word*)t0)[4])[1];
f_2209(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k2201 in k2198 in k2195 in k2192 in k2177 in k2244 in lp2 in lp in k2112 in string-unfold-right in k1437 in k1434 */
static void C_ccall f_2203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2259 in string-unfold-right in k1437 in k1434 */
static void C_ccall f_2259(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2259,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[66]);}

/* string-unfold in k1437 in k1434 */
static void C_ccall f_1906(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr6r,(void*)f_1906r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_1906r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_1906r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
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
C_word *a=C_alloc(12);
t7=(C_word)C_i_nullp(t6);
t8=(C_truep(t7)?lf[55]:(C_word)C_i_car(t6));
t9=(C_word)C_i_nullp(t6);
t10=(C_truep(t9)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t6));
t11=(C_word)C_i_nullp(t10);
t12=(C_truep(t11)?(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2070,a[2]=lf[57],tmp=(C_word)a,a+=3,tmp):(C_word)C_i_car(t10));
t13=(C_word)C_i_nullp(t10);
t14=(C_truep(t13)?C_SCHEME_END_OF_LIST:(C_word)C_i_cdr(t10));
if(C_truep((C_word)C_i_nullp(t14))){
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1932,a[2]=t5,a[3]=t1,a[4]=t2,a[5]=t3,a[6]=t4,a[7]=t12,a[8]=t8,tmp=(C_word)a,a+=9,tmp);
/* srfi-13.scm: 436  make-string */
t16=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t16+1)))(3,t16,t15,C_fix(40));}
else{
/* ##sys#error */
t15=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,lf[0],t14);}}

/* k1930 in string-unfold in k1437 in k1434 */
static void C_ccall f_1932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1932,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1934,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t3,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=lf[62],tmp=(C_word)a,a+=9,tmp));
t5=((C_word*)t3)[1];
f_1934(t5,((C_word*)t0)[3],C_SCHEME_END_OF_LIST,C_fix(0),t1,C_fix(40),C_fix(0),((C_word*)t0)[2]);}

/* lp in k1930 in string-unfold in k1437 in k1434 */
static void C_fcall f_1934(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1934,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1940,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t9,a[7]=t5,a[8]=((C_word*)t0)[6],a[9]=t4,a[10]=t2,a[11]=t3,a[12]=((C_word*)t0)[7],a[13]=lf[61],tmp=(C_word)a,a+=14,tmp));
t11=((C_word*)t9)[1];
f_1940(t11,t1,t6,t7);}

/* lp2 in lp in k1930 in string-unfold in k1437 in k1434 */
static void C_fcall f_1940(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1940,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2057,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t3,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=t1,a[12]=t2,a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],tmp=(C_word)a,a+=15,tmp);
/* srfi-13.scm: 441  p */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}

/* k2055 in lp2 in lp in k1930 in string-unfold in k1437 in k1434 */
static void C_ccall f_2057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2057,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1995,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[14],tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 456  make-final */
t3=((C_word*)t0)[8];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1950,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[12],tmp=(C_word)a,a+=12,tmp);
/* srfi-13.scm: 442  f */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}}

/* k1948 in k2055 in lp2 in lp in k1930 in string-unfold in k1437 in k1434 */
static void C_ccall f_1950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1953,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t1,a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* srfi-13.scm: 443  g */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k1951 in k1948 in k2055 in lp2 in lp in k1930 in string-unfold in k1437 in k1434 */
static void C_ccall f_1953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1953,2,t0,t1);}
t2=((C_word*)t0)[10];
t3=((C_word*)t0)[9];
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
t4=(C_word)C_i_string_set(((C_word*)t0)[8],((C_word*)t0)[10],((C_word*)t0)[7]);
t5=(C_word)C_fixnum_plus(((C_word*)t0)[10],C_fix(1));
/* srfi-13.scm: 446  lp2 */
t6=((C_word*)((C_word*)t0)[6])[1];
f_1940(t6,((C_word*)t0)[5],t5,t1);}
else{
t4=(C_word)C_fixnum_plus(((C_word*)t0)[9],((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1975,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[3],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* srfi-13.scm: 449  min */
t6=*((C_word*)lf[60]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_fix(4096),t4);}}

/* k1973 in k1951 in k1948 in k2055 in lp2 in lp in k1930 in string-unfold in k1437 in k1434 */
static void C_ccall f_1975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1978,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* srfi-13.scm: 450  make-string */
t3=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k1976 in k1973 in k1951 in k1948 in k2055 in lp2 in lp in k1930 in string-unfold in k1437 in k1434 */
static void C_ccall f_1978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1978,2,t0,t1);}
t2=(C_word)C_i_string_set(t1,C_fix(0),((C_word*)t0)[10]);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],((C_word*)t0)[8]);
t4=(C_word)C_fixnum_plus(((C_word*)t0)[7],((C_word*)t0)[6]);
/* srfi-13.scm: 452  lp */
t5=((C_word*)((C_word*)t0)[5])[1];
f_1934(t5,((C_word*)t0)[4],t3,t4,t1,((C_word*)t0)[3],C_fix(1),((C_word*)t0)[2]);}

/* k1993 in k2055 in lp2 in lp in k1930 in string-unfold in k1437 in k1434 */
static void C_ccall f_1995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1995,2,t0,t1);}
t2=(C_word)C_i_string_length(t1);
t3=(C_word)C_i_string_length(((C_word*)t0)[7]);
t4=(C_word)C_fixnum_plus((C_word)C_fixnum_plus(t3,((C_word*)t0)[6]),((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2007,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[4],a[9]=((C_word*)t0)[5],a[10]=t4,tmp=(C_word)a,a+=11,tmp);
t6=(C_word)C_fixnum_plus(t4,t2);
/* srfi-13.scm: 460  make-string */
t7=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}

/* k2005 in k1993 in k2055 in lp2 in lp in k1930 in string-unfold in k1437 in k1434 */
static void C_ccall f_2007(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2007,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2010,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t1,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
/* srfi-13.scm: 461  %string-copy! */
f_5739(t2,t1,((C_word*)t0)[10],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k2008 in k2005 in k1993 in k2055 in lp2 in lp in k1930 in string-unfold in k1437 in k1434 */
static void C_ccall f_2010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2010,2,t0,t1);}
t2=(C_word)C_fixnum_difference(((C_word*)t0)[9],((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2016,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* srfi-13.scm: 463  %string-copy! */
f_5739(t3,((C_word*)t0)[6],t2,((C_word*)t0)[2],C_fix(0),((C_word*)t0)[8]);}

/* k2014 in k2008 in k2005 in k1993 in k2055 in lp2 in lp in k1930 in string-unfold in k1437 in k1434 */
static void C_ccall f_2016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2016,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2019,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2024,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=lf[59],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_2024(t6,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* lp in k2014 in k2008 in k2005 in k1993 in k2055 in lp2 in lp in k1930 in string-unfold in k1437 in k1434 */
static void C_fcall f_2024(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2024,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_car(t3);
t5=(C_word)C_i_cdr(t3);
t6=(C_word)C_i_string_length(t4);
t7=(C_word)C_fixnum_difference(t2,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2046,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 470  %string-copy! */
f_5739(t8,((C_word*)t0)[2],t7,t4,C_fix(0),t6);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}}

/* k2044 in lp in k2014 in k2008 in k2005 in k1993 in k2055 in lp2 in lp in k1930 in string-unfold in k1437 in k1434 */
static void C_ccall f_2046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-13.scm: 471  lp */
t2=((C_word*)((C_word*)t0)[5])[1];
f_2024(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2017 in k2014 in k2008 in k2005 in k1993 in k2055 in lp2 in lp in k1930 in string-unfold in k1437 in k1434 */
static void C_ccall f_2019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2019,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2022,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* srfi-13.scm: 472  %string-copy! */
f_5739(t2,((C_word*)t0)[4],C_fix(0),((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}

/* k2020 in k2017 in k2014 in k2008 in k2005 in k1993 in k2055 in lp2 in lp in k1930 in string-unfold in k1437 in k1434 */
static void C_ccall f_2022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* f_2070 in string-unfold in k1437 in k1434 */
static void C_ccall f_2070(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2070,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[56]);}

/* string-fold-right in k1437 in k1434 */
static void C_ccall f_1860(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr5r,(void*)f_1860r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_1860r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_1860r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(11);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1866,a[2]=t5,a[3]=t4,a[4]=lf[50],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1872,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=lf[52],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a1871 in string-fold-right in k1437 in k1434 */
static void C_ccall f_1872(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1872,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_difference(t3,C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1882,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,a[5]=t2,a[6]=lf[51],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_1882(t8,t1,((C_word*)t0)[2],t4);}

/* lp in a1871 in string-fold-right in k1437 in k1434 */
static void C_fcall f_1882(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1882,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1896,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_i_string_ref(((C_word*)t0)[3],t3);
/* srfi-13.scm: 361  kons */
t8=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t8))(4,t8,t6,t7,t2);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}}

/* k1894 in lp in a1871 in string-fold-right in k1437 in k1434 */
static void C_ccall f_1896(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 361  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1882(t3,((C_word*)t0)[2],t1,t2);}

/* a1865 in string-fold-right in k1437 in k1434 */
static void C_ccall f_1866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1866,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[49]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-fold in k1437 in k1434 */
static void C_ccall f_1818(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr5r,(void*)f_1818r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_1818r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_1818r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(11);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1824,a[2]=t5,a[3]=t4,a[4]=lf[45],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1830,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=lf[47],tmp=(C_word)a,a+=6,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t6,t7);}

/* a1829 in string-fold in k1437 in k1434 */
static void C_ccall f_1830(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1830,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1836,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=t3,a[6]=lf[46],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1836(t7,t1,((C_word*)t0)[2],t2);}

/* lp in a1829 in string-fold in k1437 in k1434 */
static void C_fcall f_1836(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1836,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t4,t5))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1850,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_i_string_ref(((C_word*)t0)[3],t3);
/* srfi-13.scm: 354  kons */
t8=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t8))(4,t8,t6,t7,t2);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t2);}}

/* k1848 in lp in a1829 in string-fold in k1437 in k1434 */
static void C_ccall f_1850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* srfi-13.scm: 354  lp */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1836(t3,((C_word*)t0)[2],t1,t2);}

/* a1823 in string-fold in k1437 in k1434 */
static void C_ccall f_1824(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1824,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[44]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-map! in k1437 in k1434 */
static void C_fcall f_1781(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1781,NULL,5,t1,t2,t3,t4,t5);}
t6=(C_word)C_fixnum_difference(t5,C_fix(1));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1791,a[2]=t2,a[3]=t8,a[4]=t3,a[5]=t4,a[6]=lf[42],tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_1791(t10,t1,t6);}

/* do70 in %string-map! in k1437 in k1434 */
static void C_fcall f_1791(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1791,NULL,3,t0,t1,t2);}
t3=t2;
t4=((C_word*)t0)[5];
if(C_truep((C_word)C_fixnum_lessp(t3,t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1812,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_string_ref(((C_word*)t0)[4],t2);
/* srfi-13.scm: 348  proc */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,t6);}}

/* k1810 in do70 in %string-map! in k1437 in k1434 */
static void C_ccall f_1812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_string_set(((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_1791(t4,((C_word*)t0)[2],t3);}

/* string-map! in k1437 in k1434 */
static void C_ccall f_1763(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_1763r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1763r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1763r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1769,a[2]=t4,a[3]=t3,a[4]=lf[38],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1775,a[2]=t3,a[3]=t2,a[4]=lf[40],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a1774 in string-map! in k1437 in k1434 */
static void C_ccall f_1775(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1775,4,t0,t1,t2,t3);}
/* srfi-13.scm: 343  %string-map! */
f_1781(t1,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a1768 in string-map! in k1437 in k1434 */
static void C_ccall f_1769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1769,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[37]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %string-map in k1437 in k1434 */
static void C_fcall f_1712(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1712,NULL,5,t1,t2,t3,t4,t5);}
t6=(C_word)C_fixnum_difference(t5,t4);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1719,a[2]=t2,a[3]=t3,a[4]=t6,a[5]=t5,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 333  make-string */
t8=*((C_word*)lf[35]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t6);}

/* k1717 in %string-map in k1437 in k1434 */
static void C_ccall f_1719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1719,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1722,a[2]=t1,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t4=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1732,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t1,a[6]=lf[34],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_1732(t8,t2,t3,t4);}

/* do54 in k1717 in %string-map in k1437 in k1434 */
static void C_fcall f_1732(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1732,NULL,4,t0,t1,t2,t3);}
t4=t3;
if(C_truep((C_word)C_fixnum_lessp(t4,C_fix(0)))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1757,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_string_ref(((C_word*)t0)[3],t2);
/* srfi-13.scm: 337  proc */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,t6);}}

/* k1755 in do54 in k1717 in %string-map in k1437 in k1434 */
static void C_ccall f_1757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_i_string_set(((C_word*)t0)[6],((C_word*)t0)[5],t1);
t3=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t4=(C_word)C_fixnum_difference(((C_word*)t0)[5],C_fix(1));
t5=((C_word*)((C_word*)t0)[3])[1];
f_1732(t5,((C_word*)t0)[2],t3,t4);}

/* k1720 in k1717 in %string-map in k1437 in k1434 */
static void C_ccall f_1722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* string-map in k1437 in k1434 */
static void C_ccall f_1694(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr4r,(void*)f_1694r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1694r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1694r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(10);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1700,a[2]=t4,a[3]=t3,a[4]=lf[30],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1706,a[2]=t3,a[3]=t2,a[4]=lf[32],tmp=(C_word)a,a+=5,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a1705 in string-map in k1437 in k1434 */
static void C_ccall f_1706(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1706,4,t0,t1,t2,t3);}
/* srfi-13.scm: 329  %string-map */
f_1712(t1,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* a1699 in string-map in k1437 in k1434 */
static void C_ccall f_1700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1700,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[29]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-copy in k1437 in k1434 */
static void C_ccall f_1676(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+9)){
C_save_and_reclaim((void*)tr3r,(void*)f_1676r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1676r(t0,t1,t2,t3);}}

static void C_ccall f_1676r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(9);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1682,a[2]=t3,a[3]=t2,a[4]=lf[26],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1688,a[2]=t2,a[3]=lf[27],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a1687 in string-copy in k1437 in k1434 */
static void C_ccall f_1688(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1688,4,t0,t1,t2,t3);}
/* srfi-13.scm: 296  ##sys#substring */
t4=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,((C_word*)t0)[2],t2,t3);}

/* a1681 in string-copy in k1437 in k1434 */
static void C_ccall f_1682(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1682,2,t0,t1);}
/* string-parse-final-start+end */
t2=*((C_word*)lf[10]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,*((C_word*)lf[25]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* %substring/shared in k1437 in k1434 */
static void C_fcall f_1654(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1654,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1661,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t6)){
t7=(C_word)C_i_string_length(t2);
t8=t4;
t9=t5;
f_1661(t9,(C_word)C_eqp(t8,t7));}
else{
t7=t5;
f_1661(t7,C_SCHEME_FALSE);}}

/* k1659 in %substring/shared in k1437 in k1434 */
static void C_fcall f_1661(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
/* srfi-13.scm: 292  ##sys#substring */
t2=*((C_word*)lf[23]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* substring/shared in k1437 in k1434 */
static void C_ccall f_1617(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_1617r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1617r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1617r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t5=(C_word)C_i_string_length(t2);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1624,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
t7=t6;
f_1624(2,t7,t5);}
else{
t7=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t7))){
t8=t6;
f_1624(2,t8,(C_word)C_i_car(t4));}
else{
/* srfi-13.scm: 275  ##sys#error */
t8=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,lf[0],t4);}}}

/* k1622 in substring/shared in k1437 in k1434 */
static void C_ccall f_1624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1624,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(t1,lf[20]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1630,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 277  check-substring-spec */
t4=*((C_word*)lf[17]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[20],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1628 in k1622 in substring/shared in k1437 in k1434 */
static void C_ccall f_1630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-13.scm: 278  %substring/shared */
f_1654(((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* check-substring-spec in k1437 in k1434 */
static void C_ccall f_1601(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_1601,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1615,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* srfi-13.scm: 245  substring-spec-ok? */
t7=*((C_word*)lf[15]+1);
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,t3,t4,t5);}

/* k1613 in check-substring-spec in k1437 in k1434 */
static void C_ccall f_1615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
/* srfi-13.scm: 246  ##sys#error */
t2=*((C_word*)lf[3]+1);
((C_proc8)(void*)(*((C_word*)t2+1)))(8,t2,((C_word*)t0)[6],lf[17],lf[18],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* substring-spec-ok? in k1437 in k1434 */
static void C_ccall f_1561(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1561,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_stringp(t2))){
if(C_truep((C_word)C_fixnump(t3))){
if(C_truep((C_word)C_fixnump(t4))){
t5=t3;
if(C_truep((C_word)C_fixnum_less_or_equal_p(C_fix(0),t5))){
t6=t3;
t7=t4;
if(C_truep((C_word)C_fixnum_less_or_equal_p(t6,t7))){
t8=(C_word)C_i_string_length(t2);
t9=t4;
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_fixnum_less_or_equal_p(t9,t8));}
else{
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* string-parse-final-start+end in k1437 in k1434 */
static void C_ccall f_1534(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1534,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1540,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=lf[11],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1546,a[2]=t2,a[3]=lf[13],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a1545 in string-parse-final-start+end in k1437 in k1434 */
static void C_ccall f_1546(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1546,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_pairp(t2))){
/* srfi-13.scm: 229  ##sys#error */
t5=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t1,lf[10],lf[12],((C_word*)t0)[2],t2);}
else{
/* srfi-13.scm: 230  values */
C_values(4,0,t1,t3,t4);}}

/* a1539 in string-parse-final-start+end in k1437 in k1434 */
static void C_ccall f_1540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1540,2,t0,t1);}
/* srfi-13.scm: 228  string-parse-start+end */
t2=*((C_word*)lf[2]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* string-parse-start+end in k1437 in k1434 */
static void C_ccall f_1441(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[13],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1441,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_check_string_2(t3,lf[2]);
t6=(C_word)C_i_string_length(t3);
if(C_truep((C_word)C_i_pairp(t4))){
t7=(C_word)C_i_car(t4);
t8=(C_word)C_i_cdr(t4);
t9=(C_truep((C_word)C_fixnump(t7))?(C_word)C_fixnum_greater_or_equal_p(t7,C_fix(0)):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1471,a[2]=t3,a[3]=t2,a[4]=t6,a[5]=t8,a[6]=lf[5],tmp=(C_word)a,a+=7,tmp);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1507,a[2]=t3,a[3]=t2,a[4]=t7,a[5]=lf[7],tmp=(C_word)a,a+=6,tmp);
/* srfi-13.scm: 211  ##sys#call-with-values */
C_call_with_values(4,0,t1,t10,t11);}
else{
/* srfi-13.scm: 223  ##sys#error */
t10=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t10+1)))(7,t10,t1,lf[2],lf[8],t2,t7,t3);}}
else{
/* srfi-13.scm: 225  values */
C_values(5,0,t1,C_SCHEME_END_OF_LIST,C_fix(0),t6);}}

/* a1506 in string-parse-start+end in k1437 in k1434 */
static void C_ccall f_1507(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1507,4,t0,t1,t2,t3);}
t4=t2;
if(C_truep((C_word)C_fixnum_less_or_equal_p(((C_word*)t0)[4],t4))){
/* srfi-13.scm: 220  values */
C_values(5,0,t1,t3,((C_word*)t0)[4],t2);}
else{
/* srfi-13.scm: 221  ##sys#error */
t5=*((C_word*)lf[3]+1);
((C_proc8)(void*)(*((C_word*)t5+1)))(8,t5,t1,lf[2],lf[6],((C_word*)t0)[3],((C_word*)t0)[4],t2,((C_word*)t0)[2]);}}

/* a1470 in string-parse-start+end in k1437 in k1434 */
static void C_ccall f_1471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1471,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[5]))){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
t4=(C_truep((C_word)C_fixnump(t2))?(C_word)C_fixnum_less_or_equal_p(t2,((C_word*)t0)[4]):C_SCHEME_FALSE);
if(C_truep(t4)){
/* srfi-13.scm: 217  values */
C_values(4,0,t1,t2,t3);}
else{
/* srfi-13.scm: 218  ##sys#error */
t5=*((C_word*)lf[3]+1);
((C_proc7)(void*)(*((C_word*)t5+1)))(7,t5,t1,lf[2],lf[4],((C_word*)t0)[3],t2,((C_word*)t0)[2]);}}
else{
/* srfi-13.scm: 219  values */
C_values(4,0,t1,((C_word*)t0)[4],((C_word*)t0)[5]);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[566] = {
{"toplevelsrfi-13.scm",(void*)C_srfi_13_toplevel},
{"f_1436srfi-13.scm",(void*)f_1436},
{"f_1439srfi-13.scm",(void*)f_1439},
{"f_7420srfi-13.scm",(void*)f_7420},
{"f_7532srfi-13.scm",(void*)f_7532},
{"f_7502srfi-13.scm",(void*)f_7502},
{"f_7485srfi-13.scm",(void*)f_7485},
{"f_7440srfi-13.scm",(void*)f_7440},
{"f_7446srfi-13.scm",(void*)f_7446},
{"f_7468srfi-13.scm",(void*)f_7468},
{"f_7347srfi-13.scm",(void*)f_7347},
{"f_7418srfi-13.scm",(void*)f_7418},
{"f_7360srfi-13.scm",(void*)f_7360},
{"f_7378srfi-13.scm",(void*)f_7378},
{"f_7403srfi-13.scm",(void*)f_7403},
{"f_7207srfi-13.scm",(void*)f_7207},
{"f_7260srfi-13.scm",(void*)f_7260},
{"f_7273srfi-13.scm",(void*)f_7273},
{"f_7333srfi-13.scm",(void*)f_7333},
{"f_7337srfi-13.scm",(void*)f_7337},
{"f_7326srfi-13.scm",(void*)f_7326},
{"f_7322srfi-13.scm",(void*)f_7322},
{"f_7216srfi-13.scm",(void*)f_7216},
{"f_7238srfi-13.scm",(void*)f_7238},
{"f_7228srfi-13.scm",(void*)f_7228},
{"f_7069srfi-13.scm",(void*)f_7069},
{"f_7122srfi-13.scm",(void*)f_7122},
{"f_7192srfi-13.scm",(void*)f_7192},
{"f_7196srfi-13.scm",(void*)f_7196},
{"f_7185srfi-13.scm",(void*)f_7185},
{"f_7188srfi-13.scm",(void*)f_7188},
{"f_7182srfi-13.scm",(void*)f_7182},
{"f_7178srfi-13.scm",(void*)f_7178},
{"f_7078srfi-13.scm",(void*)f_7078},
{"f_7100srfi-13.scm",(void*)f_7100},
{"f_7090srfi-13.scm",(void*)f_7090},
{"f_6987srfi-13.scm",(void*)f_6987},
{"f_7005srfi-13.scm",(void*)f_7005},
{"f_7011srfi-13.scm",(void*)f_7011},
{"f_7015srfi-13.scm",(void*)f_7015},
{"f_7024srfi-13.scm",(void*)f_7024},
{"f_7049srfi-13.scm",(void*)f_7049},
{"f_7038srfi-13.scm",(void*)f_7038},
{"f_6999srfi-13.scm",(void*)f_6999},
{"f_6936srfi-13.scm",(void*)f_6936},
{"f_6940srfi-13.scm",(void*)f_6940},
{"f_6951srfi-13.scm",(void*)f_6951},
{"f_6964srfi-13.scm",(void*)f_6964},
{"f_6967srfi-13.scm",(void*)f_6967},
{"f_6970srfi-13.scm",(void*)f_6970},
{"f_6973srfi-13.scm",(void*)f_6973},
{"f_6945srfi-13.scm",(void*)f_6945},
{"f_6893srfi-13.scm",(void*)f_6893},
{"f_6897srfi-13.scm",(void*)f_6897},
{"f_6900srfi-13.scm",(void*)f_6900},
{"f_6905srfi-13.scm",(void*)f_6905},
{"f_6927srfi-13.scm",(void*)f_6927},
{"f_6903srfi-13.scm",(void*)f_6903},
{"f_6764srfi-13.scm",(void*)f_6764},
{"f_6791srfi-13.scm",(void*)f_6791},
{"f_6841srfi-13.scm",(void*)f_6841},
{"f_6676srfi-13.scm",(void*)f_6676},
{"f_6706srfi-13.scm",(void*)f_6706},
{"f_6603srfi-13.scm",(void*)f_6603},
{"f_6610srfi-13.scm",(void*)f_6610},
{"f_6615srfi-13.scm",(void*)f_6615},
{"f_6631srfi-13.scm",(void*)f_6631},
{"f_6613srfi-13.scm",(void*)f_6613},
{"f_6644srfi-13.scm",(void*)f_6644},
{"f_6501srfi-13.scm",(void*)f_6501},
{"f_6507srfi-13.scm",(void*)f_6507},
{"f_6561srfi-13.scm",(void*)f_6561},
{"f_6566srfi-13.scm",(void*)f_6566},
{"f_6582srfi-13.scm",(void*)f_6582},
{"f_6564srfi-13.scm",(void*)f_6564},
{"f_6495srfi-13.scm",(void*)f_6495},
{"f_6449srfi-13.scm",(void*)f_6449},
{"f_6461srfi-13.scm",(void*)f_6461},
{"f_6471srfi-13.scm",(void*)f_6471},
{"f_6455srfi-13.scm",(void*)f_6455},
{"f_6394srfi-13.scm",(void*)f_6394},
{"f_6406srfi-13.scm",(void*)f_6406},
{"f_6416srfi-13.scm",(void*)f_6416},
{"f_6400srfi-13.scm",(void*)f_6400},
{"f_6339srfi-13.scm",(void*)f_6339},
{"f_6351srfi-13.scm",(void*)f_6351},
{"f_6358srfi-13.scm",(void*)f_6358},
{"f_6367srfi-13.scm",(void*)f_6367},
{"f_6345srfi-13.scm",(void*)f_6345},
{"f_6336srfi-13.scm",(void*)f_6336},
{"f_6215srfi-13.scm",(void*)f_6215},
{"f_6239srfi-13.scm",(void*)f_6239},
{"f_6248srfi-13.scm",(void*)f_6248},
{"f_6280srfi-13.scm",(void*)f_6280},
{"f_6287srfi-13.scm",(void*)f_6287},
{"f_6278srfi-13.scm",(void*)f_6278},
{"f_6233srfi-13.scm",(void*)f_6233},
{"f_6177srfi-13.scm",(void*)f_6177},
{"f_6183srfi-13.scm",(void*)f_6183},
{"f_6190srfi-13.scm",(void*)f_6190},
{"f_6042srfi-13.scm",(void*)f_6042},
{"f_6060srfi-13.scm",(void*)f_6060},
{"f_6067srfi-13.scm",(void*)f_6067},
{"f_6084srfi-13.scm",(void*)f_6084},
{"f_6099srfi-13.scm",(void*)f_6099},
{"f_6132srfi-13.scm",(void*)f_6132},
{"f_6126srfi-13.scm",(void*)f_6126},
{"f_6070srfi-13.scm",(void*)f_6070},
{"f_6054srfi-13.scm",(void*)f_6054},
{"f_5944srfi-13.scm",(void*)f_5944},
{"f_5951srfi-13.scm",(void*)f_5951},
{"f_5960srfi-13.scm",(void*)f_5960},
{"f_5982srfi-13.scm",(void*)f_5982},
{"f_5882srfi-13.scm",(void*)f_5882},
{"f_5894srfi-13.scm",(void*)f_5894},
{"f_5906srfi-13.scm",(void*)f_5906},
{"f_5918srfi-13.scm",(void*)f_5918},
{"f_5931srfi-13.scm",(void*)f_5931},
{"f_5900srfi-13.scm",(void*)f_5900},
{"f_5888srfi-13.scm",(void*)f_5888},
{"f_5820srfi-13.scm",(void*)f_5820},
{"f_5832srfi-13.scm",(void*)f_5832},
{"f_5844srfi-13.scm",(void*)f_5844},
{"f_5856srfi-13.scm",(void*)f_5856},
{"f_5869srfi-13.scm",(void*)f_5869},
{"f_5838srfi-13.scm",(void*)f_5838},
{"f_5826srfi-13.scm",(void*)f_5826},
{"f_5739srfi-13.scm",(void*)f_5739},
{"f_5789srfi-13.scm",(void*)f_5789},
{"f_5751srfi-13.scm",(void*)f_5751},
{"f_5707srfi-13.scm",(void*)f_5707},
{"f_5719srfi-13.scm",(void*)f_5719},
{"f_5726srfi-13.scm",(void*)f_5726},
{"f_5713srfi-13.scm",(void*)f_5713},
{"f_5666srfi-13.scm",(void*)f_5666},
{"f_5678srfi-13.scm",(void*)f_5678},
{"f_5688srfi-13.scm",(void*)f_5688},
{"f_5672srfi-13.scm",(void*)f_5672},
{"f_5531srfi-13.scm",(void*)f_5531},
{"f_5543srfi-13.scm",(void*)f_5543},
{"f_5589srfi-13.scm",(void*)f_5589},
{"f_5633srfi-13.scm",(void*)f_5633},
{"f_5654srfi-13.scm",(void*)f_5654},
{"f_5594srfi-13.scm",(void*)f_5594},
{"f_5615srfi-13.scm",(void*)f_5615},
{"f_5555srfi-13.scm",(void*)f_5555},
{"f_5537srfi-13.scm",(void*)f_5537},
{"f_5396srfi-13.scm",(void*)f_5396},
{"f_5408srfi-13.scm",(void*)f_5408},
{"f_5454srfi-13.scm",(void*)f_5454},
{"f_5502srfi-13.scm",(void*)f_5502},
{"f_5515srfi-13.scm",(void*)f_5515},
{"f_5463srfi-13.scm",(void*)f_5463},
{"f_5476srfi-13.scm",(void*)f_5476},
{"f_5424srfi-13.scm",(void*)f_5424},
{"f_5402srfi-13.scm",(void*)f_5402},
{"f_5273srfi-13.scm",(void*)f_5273},
{"f_5285srfi-13.scm",(void*)f_5285},
{"f_5327srfi-13.scm",(void*)f_5327},
{"f_5367srfi-13.scm",(void*)f_5367},
{"f_5380srfi-13.scm",(void*)f_5380},
{"f_5332srfi-13.scm",(void*)f_5332},
{"f_5345srfi-13.scm",(void*)f_5345},
{"f_5297srfi-13.scm",(void*)f_5297},
{"f_5279srfi-13.scm",(void*)f_5279},
{"f_5138srfi-13.scm",(void*)f_5138},
{"f_5150srfi-13.scm",(void*)f_5150},
{"f_5196srfi-13.scm",(void*)f_5196},
{"f_5244srfi-13.scm",(void*)f_5244},
{"f_5257srfi-13.scm",(void*)f_5257},
{"f_5205srfi-13.scm",(void*)f_5205},
{"f_5218srfi-13.scm",(void*)f_5218},
{"f_5166srfi-13.scm",(void*)f_5166},
{"f_5144srfi-13.scm",(void*)f_5144},
{"f_5015srfi-13.scm",(void*)f_5015},
{"f_5027srfi-13.scm",(void*)f_5027},
{"f_5069srfi-13.scm",(void*)f_5069},
{"f_5109srfi-13.scm",(void*)f_5109},
{"f_5122srfi-13.scm",(void*)f_5122},
{"f_5074srfi-13.scm",(void*)f_5074},
{"f_5087srfi-13.scm",(void*)f_5087},
{"f_5039srfi-13.scm",(void*)f_5039},
{"f_5021srfi-13.scm",(void*)f_5021},
{"f_4907srfi-13.scm",(void*)f_4907},
{"f_4919srfi-13.scm",(void*)f_4919},
{"f_5001srfi-13.scm",(void*)f_5001},
{"f_4962srfi-13.scm",(void*)f_4962},
{"f_4988srfi-13.scm",(void*)f_4988},
{"f_4995srfi-13.scm",(void*)f_4995},
{"f_4965srfi-13.scm",(void*)f_4965},
{"f_4968srfi-13.scm",(void*)f_4968},
{"f_4973srfi-13.scm",(void*)f_4973},
{"f_4980srfi-13.scm",(void*)f_4980},
{"f_4971srfi-13.scm",(void*)f_4971},
{"f_4932srfi-13.scm",(void*)f_4932},
{"f_4946srfi-13.scm",(void*)f_4946},
{"f_4953srfi-13.scm",(void*)f_4953},
{"f_4935srfi-13.scm",(void*)f_4935},
{"f_4913srfi-13.scm",(void*)f_4913},
{"f_4799srfi-13.scm",(void*)f_4799},
{"f_4811srfi-13.scm",(void*)f_4811},
{"f_4893srfi-13.scm",(void*)f_4893},
{"f_4854srfi-13.scm",(void*)f_4854},
{"f_4880srfi-13.scm",(void*)f_4880},
{"f_4887srfi-13.scm",(void*)f_4887},
{"f_4857srfi-13.scm",(void*)f_4857},
{"f_4860srfi-13.scm",(void*)f_4860},
{"f_4865srfi-13.scm",(void*)f_4865},
{"f_4872srfi-13.scm",(void*)f_4872},
{"f_4863srfi-13.scm",(void*)f_4863},
{"f_4824srfi-13.scm",(void*)f_4824},
{"f_4838srfi-13.scm",(void*)f_4838},
{"f_4845srfi-13.scm",(void*)f_4845},
{"f_4827srfi-13.scm",(void*)f_4827},
{"f_4805srfi-13.scm",(void*)f_4805},
{"f_4737srfi-13.scm",(void*)f_4737},
{"f_4758srfi-13.scm",(void*)f_4758},
{"f_4778srfi-13.scm",(void*)f_4778},
{"f_4781srfi-13.scm",(void*)f_4781},
{"f_4752srfi-13.scm",(void*)f_4752},
{"f_4679srfi-13.scm",(void*)f_4679},
{"f_4700srfi-13.scm",(void*)f_4700},
{"f_4720srfi-13.scm",(void*)f_4720},
{"f_4723srfi-13.scm",(void*)f_4723},
{"f_4694srfi-13.scm",(void*)f_4694},
{"f_4629srfi-13.scm",(void*)f_4629},
{"f_4647srfi-13.scm",(void*)f_4647},
{"f_4651srfi-13.scm",(void*)f_4651},
{"f_4665srfi-13.scm",(void*)f_4665},
{"f_4641srfi-13.scm",(void*)f_4641},
{"f_4583srfi-13.scm",(void*)f_4583},
{"f_4601srfi-13.scm",(void*)f_4601},
{"f_4605srfi-13.scm",(void*)f_4605},
{"f_4595srfi-13.scm",(void*)f_4595},
{"f_4541srfi-13.scm",(void*)f_4541},
{"f_4559srfi-13.scm",(void*)f_4559},
{"f_4563srfi-13.scm",(void*)f_4563},
{"f_4553srfi-13.scm",(void*)f_4553},
{"f_4525srfi-13.scm",(void*)f_4525},
{"f_4513srfi-13.scm",(void*)f_4513},
{"f_4497srfi-13.scm",(void*)f_4497},
{"f_4488srfi-13.scm",(void*)f_4488},
{"f_4463srfi-13.scm",(void*)f_4463},
{"f_4475srfi-13.scm",(void*)f_4475},
{"f_4479srfi-13.scm",(void*)f_4479},
{"f_4482srfi-13.scm",(void*)f_4482},
{"f_4469srfi-13.scm",(void*)f_4469},
{"f_4445srfi-13.scm",(void*)f_4445},
{"f_4457srfi-13.scm",(void*)f_4457},
{"f_4451srfi-13.scm",(void*)f_4451},
{"f_4386srfi-13.scm",(void*)f_4386},
{"f_4392srfi-13.scm",(void*)f_4392},
{"f_4439srfi-13.scm",(void*)f_4439},
{"f_4396srfi-13.scm",(void*)f_4396},
{"f_4426srfi-13.scm",(void*)f_4426},
{"f_4408srfi-13.scm",(void*)f_4408},
{"f_4414srfi-13.scm",(void*)f_4414},
{"f_4368srfi-13.scm",(void*)f_4368},
{"f_4380srfi-13.scm",(void*)f_4380},
{"f_4374srfi-13.scm",(void*)f_4374},
{"f_4350srfi-13.scm",(void*)f_4350},
{"f_4362srfi-13.scm",(void*)f_4362},
{"f_4356srfi-13.scm",(void*)f_4356},
{"f_4332srfi-13.scm",(void*)f_4332},
{"f_4344srfi-13.scm",(void*)f_4344},
{"f_4338srfi-13.scm",(void*)f_4338},
{"f_4314srfi-13.scm",(void*)f_4314},
{"f_4326srfi-13.scm",(void*)f_4326},
{"f_4320srfi-13.scm",(void*)f_4320},
{"f_4258srfi-13.scm",(void*)f_4258},
{"f_4268srfi-13.scm",(void*)f_4268},
{"f_4282srfi-13.scm",(void*)f_4282},
{"f_4288srfi-13.scm",(void*)f_4288},
{"f_4276srfi-13.scm",(void*)f_4276},
{"f_4212srfi-13.scm",(void*)f_4212},
{"f_4222srfi-13.scm",(void*)f_4222},
{"f_4236srfi-13.scm",(void*)f_4236},
{"f_4230srfi-13.scm",(void*)f_4230},
{"f_4140srfi-13.scm",(void*)f_4140},
{"f_4158srfi-13.scm",(void*)f_4158},
{"f_4191srfi-13.scm",(void*)f_4191},
{"f_4193srfi-13.scm",(void*)f_4193},
{"f_4142srfi-13.scm",(void*)f_4142},
{"f_4092srfi-13.scm",(void*)f_4092},
{"f_4104srfi-13.scm",(void*)f_4104},
{"f_4116srfi-13.scm",(void*)f_4116},
{"f_4123srfi-13.scm",(void*)f_4123},
{"f_4131srfi-13.scm",(void*)f_4131},
{"f_4110srfi-13.scm",(void*)f_4110},
{"f_4098srfi-13.scm",(void*)f_4098},
{"f_4044srfi-13.scm",(void*)f_4044},
{"f_4056srfi-13.scm",(void*)f_4056},
{"f_4068srfi-13.scm",(void*)f_4068},
{"f_4075srfi-13.scm",(void*)f_4075},
{"f_4083srfi-13.scm",(void*)f_4083},
{"f_4062srfi-13.scm",(void*)f_4062},
{"f_4050srfi-13.scm",(void*)f_4050},
{"f_3993srfi-13.scm",(void*)f_3993},
{"f_4005srfi-13.scm",(void*)f_4005},
{"f_4017srfi-13.scm",(void*)f_4017},
{"f_4024srfi-13.scm",(void*)f_4024},
{"f_4035srfi-13.scm",(void*)f_4035},
{"f_4032srfi-13.scm",(void*)f_4032},
{"f_4011srfi-13.scm",(void*)f_4011},
{"f_3999srfi-13.scm",(void*)f_3999},
{"f_3942srfi-13.scm",(void*)f_3942},
{"f_3954srfi-13.scm",(void*)f_3954},
{"f_3966srfi-13.scm",(void*)f_3966},
{"f_3973srfi-13.scm",(void*)f_3973},
{"f_3984srfi-13.scm",(void*)f_3984},
{"f_3981srfi-13.scm",(void*)f_3981},
{"f_3960srfi-13.scm",(void*)f_3960},
{"f_3948srfi-13.scm",(void*)f_3948},
{"f_3875srfi-13.scm",(void*)f_3875},
{"f_3887srfi-13.scm",(void*)f_3887},
{"f_3899srfi-13.scm",(void*)f_3899},
{"f_3922srfi-13.scm",(void*)f_3922},
{"f_3917srfi-13.scm",(void*)f_3917},
{"f_3893srfi-13.scm",(void*)f_3893},
{"f_3881srfi-13.scm",(void*)f_3881},
{"f_3813srfi-13.scm",(void*)f_3813},
{"f_3825srfi-13.scm",(void*)f_3825},
{"f_3837srfi-13.scm",(void*)f_3837},
{"f_3847srfi-13.scm",(void*)f_3847},
{"f_3858srfi-13.scm",(void*)f_3858},
{"f_3855srfi-13.scm",(void*)f_3855},
{"f_3831srfi-13.scm",(void*)f_3831},
{"f_3819srfi-13.scm",(void*)f_3819},
{"f_3765srfi-13.scm",(void*)f_3765},
{"f_3777srfi-13.scm",(void*)f_3777},
{"f_3789srfi-13.scm",(void*)f_3789},
{"f_3796srfi-13.scm",(void*)f_3796},
{"f_3804srfi-13.scm",(void*)f_3804},
{"f_3783srfi-13.scm",(void*)f_3783},
{"f_3771srfi-13.scm",(void*)f_3771},
{"f_3717srfi-13.scm",(void*)f_3717},
{"f_3729srfi-13.scm",(void*)f_3729},
{"f_3741srfi-13.scm",(void*)f_3741},
{"f_3748srfi-13.scm",(void*)f_3748},
{"f_3756srfi-13.scm",(void*)f_3756},
{"f_3735srfi-13.scm",(void*)f_3735},
{"f_3723srfi-13.scm",(void*)f_3723},
{"f_3666srfi-13.scm",(void*)f_3666},
{"f_3678srfi-13.scm",(void*)f_3678},
{"f_3690srfi-13.scm",(void*)f_3690},
{"f_3697srfi-13.scm",(void*)f_3697},
{"f_3708srfi-13.scm",(void*)f_3708},
{"f_3705srfi-13.scm",(void*)f_3705},
{"f_3684srfi-13.scm",(void*)f_3684},
{"f_3672srfi-13.scm",(void*)f_3672},
{"f_3615srfi-13.scm",(void*)f_3615},
{"f_3627srfi-13.scm",(void*)f_3627},
{"f_3639srfi-13.scm",(void*)f_3639},
{"f_3646srfi-13.scm",(void*)f_3646},
{"f_3657srfi-13.scm",(void*)f_3657},
{"f_3654srfi-13.scm",(void*)f_3654},
{"f_3633srfi-13.scm",(void*)f_3633},
{"f_3621srfi-13.scm",(void*)f_3621},
{"f_3548srfi-13.scm",(void*)f_3548},
{"f_3560srfi-13.scm",(void*)f_3560},
{"f_3572srfi-13.scm",(void*)f_3572},
{"f_3595srfi-13.scm",(void*)f_3595},
{"f_3590srfi-13.scm",(void*)f_3590},
{"f_3566srfi-13.scm",(void*)f_3566},
{"f_3554srfi-13.scm",(void*)f_3554},
{"f_3486srfi-13.scm",(void*)f_3486},
{"f_3498srfi-13.scm",(void*)f_3498},
{"f_3510srfi-13.scm",(void*)f_3510},
{"f_3520srfi-13.scm",(void*)f_3520},
{"f_3531srfi-13.scm",(void*)f_3531},
{"f_3528srfi-13.scm",(void*)f_3528},
{"f_3504srfi-13.scm",(void*)f_3504},
{"f_3492srfi-13.scm",(void*)f_3492},
{"f_3456srfi-13.scm",(void*)f_3456},
{"f_3468srfi-13.scm",(void*)f_3468},
{"f_3480srfi-13.scm",(void*)f_3480},
{"f_3474srfi-13.scm",(void*)f_3474},
{"f_3462srfi-13.scm",(void*)f_3462},
{"f_3426srfi-13.scm",(void*)f_3426},
{"f_3438srfi-13.scm",(void*)f_3438},
{"f_3450srfi-13.scm",(void*)f_3450},
{"f_3444srfi-13.scm",(void*)f_3444},
{"f_3432srfi-13.scm",(void*)f_3432},
{"f_3364srfi-13.scm",(void*)f_3364},
{"f_3374srfi-13.scm",(void*)f_3374},
{"f_3408srfi-13.scm",(void*)f_3408},
{"f_3399srfi-13.scm",(void*)f_3399},
{"f_3302srfi-13.scm",(void*)f_3302},
{"f_3312srfi-13.scm",(void*)f_3312},
{"f_3337srfi-13.scm",(void*)f_3337},
{"f_3180srfi-13.scm",(void*)f_3180},
{"f_3192srfi-13.scm",(void*)f_3192},
{"f_3204srfi-13.scm",(void*)f_3204},
{"f_3296srfi-13.scm",(void*)f_3296},
{"f_3198srfi-13.scm",(void*)f_3198},
{"f_3186srfi-13.scm",(void*)f_3186},
{"f_3150srfi-13.scm",(void*)f_3150},
{"f_3162srfi-13.scm",(void*)f_3162},
{"f_3174srfi-13.scm",(void*)f_3174},
{"f_3273srfi-13.scm",(void*)f_3273},
{"f_3168srfi-13.scm",(void*)f_3168},
{"f_3156srfi-13.scm",(void*)f_3156},
{"f_3120srfi-13.scm",(void*)f_3120},
{"f_3132srfi-13.scm",(void*)f_3132},
{"f_3144srfi-13.scm",(void*)f_3144},
{"f_3250srfi-13.scm",(void*)f_3250},
{"f_3138srfi-13.scm",(void*)f_3138},
{"f_3126srfi-13.scm",(void*)f_3126},
{"f_3090srfi-13.scm",(void*)f_3090},
{"f_3102srfi-13.scm",(void*)f_3102},
{"f_3114srfi-13.scm",(void*)f_3114},
{"f_3227srfi-13.scm",(void*)f_3227},
{"f_3108srfi-13.scm",(void*)f_3108},
{"f_3096srfi-13.scm",(void*)f_3096},
{"f_3060srfi-13.scm",(void*)f_3060},
{"f_3072srfi-13.scm",(void*)f_3072},
{"f_3084srfi-13.scm",(void*)f_3084},
{"f_3078srfi-13.scm",(void*)f_3078},
{"f_3066srfi-13.scm",(void*)f_3066},
{"f_3030srfi-13.scm",(void*)f_3030},
{"f_3042srfi-13.scm",(void*)f_3042},
{"f_3054srfi-13.scm",(void*)f_3054},
{"f_3048srfi-13.scm",(void*)f_3048},
{"f_3036srfi-13.scm",(void*)f_3036},
{"f_3000srfi-13.scm",(void*)f_3000},
{"f_3012srfi-13.scm",(void*)f_3012},
{"f_3024srfi-13.scm",(void*)f_3024},
{"f_3018srfi-13.scm",(void*)f_3018},
{"f_3006srfi-13.scm",(void*)f_3006},
{"f_2970srfi-13.scm",(void*)f_2970},
{"f_2982srfi-13.scm",(void*)f_2982},
{"f_2994srfi-13.scm",(void*)f_2994},
{"f_2988srfi-13.scm",(void*)f_2988},
{"f_2976srfi-13.scm",(void*)f_2976},
{"f_2885srfi-13.scm",(void*)f_2885},
{"f_2889srfi-13.scm",(void*)f_2889},
{"f_2898srfi-13.scm",(void*)f_2898},
{"f_2911srfi-13.scm",(void*)f_2911},
{"f_2946srfi-13.scm",(void*)f_2946},
{"f_2921srfi-13.scm",(void*)f_2921},
{"f_2812srfi-13.scm",(void*)f_2812},
{"f_2816srfi-13.scm",(void*)f_2816},
{"f_2825srfi-13.scm",(void*)f_2825},
{"f_2830srfi-13.scm",(void*)f_2830},
{"f_2861srfi-13.scm",(void*)f_2861},
{"f_2840srfi-13.scm",(void*)f_2840},
{"f_2727srfi-13.scm",(void*)f_2727},
{"f_2731srfi-13.scm",(void*)f_2731},
{"f_2740srfi-13.scm",(void*)f_2740},
{"f_2753srfi-13.scm",(void*)f_2753},
{"f_2763srfi-13.scm",(void*)f_2763},
{"f_2654srfi-13.scm",(void*)f_2654},
{"f_2658srfi-13.scm",(void*)f_2658},
{"f_2667srfi-13.scm",(void*)f_2667},
{"f_2672srfi-13.scm",(void*)f_2672},
{"f_2682srfi-13.scm",(void*)f_2682},
{"f_2615srfi-13.scm",(void*)f_2615},
{"f_2622srfi-13.scm",(void*)f_2622},
{"f_2631srfi-13.scm",(void*)f_2631},
{"f_2652srfi-13.scm",(void*)f_2652},
{"f_2625srfi-13.scm",(void*)f_2625},
{"f_2485srfi-13.scm",(void*)f_2485},
{"f_2497srfi-13.scm",(void*)f_2497},
{"f_2539srfi-13.scm",(void*)f_2539},
{"f_2585srfi-13.scm",(void*)f_2585},
{"f_2604srfi-13.scm",(void*)f_2604},
{"f_2544srfi-13.scm",(void*)f_2544},
{"f_2554srfi-13.scm",(void*)f_2554},
{"f_2509srfi-13.scm",(void*)f_2509},
{"f_2491srfi-13.scm",(void*)f_2491},
{"f_2355srfi-13.scm",(void*)f_2355},
{"f_2367srfi-13.scm",(void*)f_2367},
{"f_2409srfi-13.scm",(void*)f_2409},
{"f_2455srfi-13.scm",(void*)f_2455},
{"f_2477srfi-13.scm",(void*)f_2477},
{"f_2414srfi-13.scm",(void*)f_2414},
{"f_2427srfi-13.scm",(void*)f_2427},
{"f_2379srfi-13.scm",(void*)f_2379},
{"f_2361srfi-13.scm",(void*)f_2361},
{"f_2318srfi-13.scm",(void*)f_2318},
{"f_2330srfi-13.scm",(void*)f_2330},
{"f_2336srfi-13.scm",(void*)f_2336},
{"f_2346srfi-13.scm",(void*)f_2346},
{"f_2324srfi-13.scm",(void*)f_2324},
{"f_2277srfi-13.scm",(void*)f_2277},
{"f_2289srfi-13.scm",(void*)f_2289},
{"f_2295srfi-13.scm",(void*)f_2295},
{"f_2305srfi-13.scm",(void*)f_2305},
{"f_2283srfi-13.scm",(void*)f_2283},
{"f_2088srfi-13.scm",(void*)f_2088},
{"f_2114srfi-13.scm",(void*)f_2114},
{"f_2116srfi-13.scm",(void*)f_2116},
{"f_2122srfi-13.scm",(void*)f_2122},
{"f_2246srfi-13.scm",(void*)f_2246},
{"f_2132srfi-13.scm",(void*)f_2132},
{"f_2135srfi-13.scm",(void*)f_2135},
{"f_2156srfi-13.scm",(void*)f_2156},
{"f_2159srfi-13.scm",(void*)f_2159},
{"f_2179srfi-13.scm",(void*)f_2179},
{"f_2194srfi-13.scm",(void*)f_2194},
{"f_2197srfi-13.scm",(void*)f_2197},
{"f_2200srfi-13.scm",(void*)f_2200},
{"f_2209srfi-13.scm",(void*)f_2209},
{"f_2228srfi-13.scm",(void*)f_2228},
{"f_2203srfi-13.scm",(void*)f_2203},
{"f_2259srfi-13.scm",(void*)f_2259},
{"f_1906srfi-13.scm",(void*)f_1906},
{"f_1932srfi-13.scm",(void*)f_1932},
{"f_1934srfi-13.scm",(void*)f_1934},
{"f_1940srfi-13.scm",(void*)f_1940},
{"f_2057srfi-13.scm",(void*)f_2057},
{"f_1950srfi-13.scm",(void*)f_1950},
{"f_1953srfi-13.scm",(void*)f_1953},
{"f_1975srfi-13.scm",(void*)f_1975},
{"f_1978srfi-13.scm",(void*)f_1978},
{"f_1995srfi-13.scm",(void*)f_1995},
{"f_2007srfi-13.scm",(void*)f_2007},
{"f_2010srfi-13.scm",(void*)f_2010},
{"f_2016srfi-13.scm",(void*)f_2016},
{"f_2024srfi-13.scm",(void*)f_2024},
{"f_2046srfi-13.scm",(void*)f_2046},
{"f_2019srfi-13.scm",(void*)f_2019},
{"f_2022srfi-13.scm",(void*)f_2022},
{"f_2070srfi-13.scm",(void*)f_2070},
{"f_1860srfi-13.scm",(void*)f_1860},
{"f_1872srfi-13.scm",(void*)f_1872},
{"f_1882srfi-13.scm",(void*)f_1882},
{"f_1896srfi-13.scm",(void*)f_1896},
{"f_1866srfi-13.scm",(void*)f_1866},
{"f_1818srfi-13.scm",(void*)f_1818},
{"f_1830srfi-13.scm",(void*)f_1830},
{"f_1836srfi-13.scm",(void*)f_1836},
{"f_1850srfi-13.scm",(void*)f_1850},
{"f_1824srfi-13.scm",(void*)f_1824},
{"f_1781srfi-13.scm",(void*)f_1781},
{"f_1791srfi-13.scm",(void*)f_1791},
{"f_1812srfi-13.scm",(void*)f_1812},
{"f_1763srfi-13.scm",(void*)f_1763},
{"f_1775srfi-13.scm",(void*)f_1775},
{"f_1769srfi-13.scm",(void*)f_1769},
{"f_1712srfi-13.scm",(void*)f_1712},
{"f_1719srfi-13.scm",(void*)f_1719},
{"f_1732srfi-13.scm",(void*)f_1732},
{"f_1757srfi-13.scm",(void*)f_1757},
{"f_1722srfi-13.scm",(void*)f_1722},
{"f_1694srfi-13.scm",(void*)f_1694},
{"f_1706srfi-13.scm",(void*)f_1706},
{"f_1700srfi-13.scm",(void*)f_1700},
{"f_1676srfi-13.scm",(void*)f_1676},
{"f_1688srfi-13.scm",(void*)f_1688},
{"f_1682srfi-13.scm",(void*)f_1682},
{"f_1654srfi-13.scm",(void*)f_1654},
{"f_1661srfi-13.scm",(void*)f_1661},
{"f_1617srfi-13.scm",(void*)f_1617},
{"f_1624srfi-13.scm",(void*)f_1624},
{"f_1630srfi-13.scm",(void*)f_1630},
{"f_1601srfi-13.scm",(void*)f_1601},
{"f_1615srfi-13.scm",(void*)f_1615},
{"f_1561srfi-13.scm",(void*)f_1561},
{"f_1534srfi-13.scm",(void*)f_1534},
{"f_1546srfi-13.scm",(void*)f_1546},
{"f_1540srfi-13.scm",(void*)f_1540},
{"f_1441srfi-13.scm",(void*)f_1441},
{"f_1507srfi-13.scm",(void*)f_1507},
{"f_1471srfi-13.scm",(void*)f_1471},
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
