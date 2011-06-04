/* Generated from optimizer.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:17
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: optimizer.scm -output-file optimizer.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: optimizer
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[415];


C_noret_decl(C_optimizer_toplevel)
C_externexport void C_ccall C_optimizer_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1635)
static void C_ccall f_1635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9339)
static void C_ccall f_9339(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_9347)
static void C_ccall f_9347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9352)
static void C_fcall f_9352(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_9397)
static void C_ccall f_9397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9401)
static void C_ccall f_9401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9362)
static void C_ccall f_9362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9386)
static void C_ccall f_9386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9371)
static void C_fcall f_9371(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3577)
static void C_ccall f_3577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8710)
static void C_ccall f_8710(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_8744)
static void C_ccall f_8744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8786)
static void C_ccall f_8786(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8796)
static void C_fcall f_8796(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8860)
static void C_ccall f_8860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8889)
static void C_fcall f_8889(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_9012)
static void C_ccall f_9012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8905)
static void C_fcall f_8905(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8952)
static void C_ccall f_8952(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8942)
static void C_ccall f_8942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8950)
static void C_ccall f_8950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9054)
static void C_ccall f_9054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10) C_noret;
C_noret_decl(f_9067)
static void C_ccall f_9067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9102)
static void C_ccall f_9102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9086)
static void C_ccall f_9086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9090)
static void C_ccall f_9090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9079)
static void C_ccall f_9079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9176)
static void C_ccall f_9176(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13) C_noret;
C_noret_decl(f_9189)
static void C_ccall f_9189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9195)
static void C_ccall f_9195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9241)
static void C_ccall f_9241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9233)
static void C_ccall f_9233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9217)
static void C_ccall f_9217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9221)
static void C_ccall f_9221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9225)
static void C_ccall f_9225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3580)
static void C_ccall f_3580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8528)
static void C_ccall f_8528(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_8550)
static void C_ccall f_8550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8605)
static void C_ccall f_8605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8575)
static void C_ccall f_8575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8597)
static void C_ccall f_8597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8601)
static void C_ccall f_8601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8593)
static void C_ccall f_8593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8573)
static void C_ccall f_8573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8639)
static void C_ccall f_8639(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9) C_noret;
C_noret_decl(f_8653)
static void C_ccall f_8653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3583)
static void C_ccall f_3583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3911)
static void C_ccall f_3911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6868)
static void C_ccall f_6868(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8415)
static void C_ccall f_8415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8418)
static void C_ccall f_8418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8421)
static void C_ccall f_8421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8424)
static void C_ccall f_8424(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8427)
static void C_ccall f_8427(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8430)
static void C_ccall f_8430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8507)
static void C_ccall f_8507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8433)
static void C_ccall f_8433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8436)
static void C_ccall f_8436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8439)
static void C_ccall f_8439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8501)
static void C_ccall f_8501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8442)
static void C_ccall f_8442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8445)
static void C_ccall f_8445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8498)
static void C_ccall f_8498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7477)
static void C_fcall f_7477(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7495)
static void C_ccall f_7495(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7501)
static void C_ccall f_7501(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7481)
static void C_ccall f_7481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8448)
static void C_ccall f_8448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8490)
static void C_ccall f_8490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8488)
static void C_ccall f_8488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8451)
static void C_ccall f_8451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8454)
static void C_ccall f_8454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8457)
static void C_ccall f_8457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8481)
static void C_ccall f_8481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8460)
static void C_ccall f_8460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8463)
static void C_ccall f_8463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8466)
static void C_ccall f_8466(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8469)
static void C_ccall f_8469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8472)
static void C_ccall f_8472(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8475)
static void C_ccall f_8475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8268)
static void C_fcall f_8268(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8274)
static void C_ccall f_8274(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8386)
static void C_ccall f_8386(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8395)
static void C_ccall f_8395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8398)
static void C_ccall f_8398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8293)
static void C_ccall f_8293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8298)
static void C_fcall f_8298(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8339)
static void C_fcall f_8339(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8336)
static void C_ccall f_8336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8321)
static void C_ccall f_8321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8332)
static void C_ccall f_8332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8328)
static void C_ccall f_8328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8181)
static void C_fcall f_8181(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8187)
static void C_ccall f_8187(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8243)
static void C_ccall f_8243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8239)
static void C_ccall f_8239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8209)
static void C_ccall f_8209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7931)
static void C_fcall f_7931(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7945)
static void C_ccall f_7945(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7952)
static void C_ccall f_7952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7965)
static void C_ccall f_7965(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7972)
static void C_ccall f_7972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7975)
static void C_ccall f_7975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8071)
static void C_ccall f_8071(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8157)
static void C_ccall f_8157(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8176)
static void C_ccall f_8176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8172)
static void C_ccall f_8172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8138)
static void C_ccall f_8138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8127)
static void C_ccall f_8127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8114)
static void C_ccall f_8114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8097)
static void C_ccall f_8097(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8090)
static void C_ccall f_8090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8056)
static void C_ccall f_8056(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7978)
static void C_ccall f_7978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8027)
static void C_ccall f_8027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8015)
static void C_ccall f_8015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8011)
static void C_ccall f_8011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7943)
static void C_ccall f_7943(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7730)
static void C_fcall f_7730(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7917)
static void C_ccall f_7917(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7795)
static void C_ccall f_7795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7872)
static void C_ccall f_7872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7877)
static void C_ccall f_7877(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7915)
static void C_ccall f_7915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7739)
static void C_ccall f_7739(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7777)
static void C_ccall f_7777(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7782)
static void C_ccall f_7782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7759)
static void C_ccall f_7759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7737)
static void C_ccall f_7737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7907)
static void C_ccall f_7907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7893)
static void C_ccall f_7893(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7891)
static void C_ccall f_7891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7797)
static void C_ccall f_7797(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7865)
static void C_ccall f_7865(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7863)
static void C_ccall f_7863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7851)
static void C_ccall f_7851(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7817)
static void C_ccall f_7817(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7841)
static void C_ccall f_7841(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7839)
static void C_ccall f_7839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7835)
static void C_ccall f_7835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7827)
static void C_ccall f_7827(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7511)
static void C_fcall f_7511(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7517)
static void C_fcall f_7517(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7536)
static void C_fcall f_7536(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7703)
static void C_ccall f_7703(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7633)
static void C_ccall f_7633(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7649)
static void C_ccall f_7649(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7679)
static void C_ccall f_7679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7683)
static void C_ccall f_7683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7669)
static void C_ccall f_7669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7622)
static void C_ccall f_7622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7627)
static void C_ccall f_7627(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7598)
static void C_ccall f_7598(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7610)
static void C_ccall f_7610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7547)
static void C_fcall f_7547(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7568)
static void C_ccall f_7568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7565)
static void C_ccall f_7565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7515)
static void C_ccall f_7515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7267)
static void C_fcall f_7267(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7273)
static void C_fcall f_7273(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7292)
static void C_fcall f_7292(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7394)
static void C_ccall f_7394(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7385)
static void C_ccall f_7385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7351)
static void C_fcall f_7351(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7360)
static void C_ccall f_7360(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7372)
static void C_ccall f_7372(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7303)
static void C_fcall f_7303(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7324)
static void C_ccall f_7324(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7321)
static void C_ccall f_7321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7271)
static void C_ccall f_7271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7168)
static void C_fcall f_7168(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7174)
static void C_ccall f_7174(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7218)
static void C_ccall f_7218(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7223)
static void C_fcall f_7223(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7230)
static void C_ccall f_7230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7257)
static void C_ccall f_7257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7253)
static void C_ccall f_7253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7245)
static void C_ccall f_7245(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7243)
static void C_ccall f_7243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7208)
static void C_ccall f_7208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7186)
static void C_ccall f_7186(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7193)
static void C_ccall f_7193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6971)
static void C_fcall f_6971(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7125)
static void C_ccall f_7125(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7150)
static void C_ccall f_7150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7140)
static void C_ccall f_7140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7144)
static void C_ccall f_7144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7123)
static void C_ccall f_7123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6974)
static void C_fcall f_6974(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7113)
static void C_ccall f_7113(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7096)
static void C_ccall f_7096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7108)
static void C_ccall f_7108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7042)
static void C_fcall f_7042(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7066)
static void C_ccall f_7066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7060)
static void C_ccall f_7060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7024)
static void C_ccall f_7024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6999)
static void C_fcall f_6999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7002)
static void C_fcall f_7002(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7007)
static void C_ccall f_7007(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6871)
static void C_fcall f_6871(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6877)
static void C_ccall f_6877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6908)
static void C_fcall f_6908(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6912)
static void C_ccall f_6912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6916)
static void C_ccall f_6916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6875)
static void C_ccall f_6875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6863)
static void C_ccall f_6863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6866)
static void C_ccall f_6866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5736)
static void C_fcall f_5736(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5892)
static void C_ccall f_5892(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5872)
static void C_ccall f_5872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5846)
static void C_ccall f_5846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5792)
static void C_ccall f_5792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5798)
static void C_ccall f_5798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5804)
static void C_ccall f_5804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5761)
static void C_ccall f_5761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5898)
static void C_fcall f_5898(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_6308)
static void C_ccall f_6308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6315)
static void C_ccall f_6315(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5901)
static void C_fcall f_5901(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6295)
static void C_ccall f_6295(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6271)
static void C_ccall f_6271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6282)
static void C_ccall f_6282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6238)
static void C_ccall f_6238(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6177)
static void C_fcall f_6177(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6149)
static void C_fcall f_6149(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6154)
static void C_ccall f_6154(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6096)
static void C_ccall f_6096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6102)
static void C_fcall f_6102(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6107)
static void C_ccall f_6107(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6055)
static void C_ccall f_6055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6061)
static void C_fcall f_6061(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6066)
static void C_ccall f_6066(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6039)
static void C_ccall f_6039(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6035)
static void C_ccall f_6035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6005)
static void C_ccall f_6005(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5968)
static void C_ccall f_5968(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5984)
static void C_ccall f_5984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5950)
static void C_ccall f_5950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6317)
static void C_fcall f_6317(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7) C_noret;
C_noret_decl(f_6853)
static void C_ccall f_6853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6851)
static void C_ccall f_6851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6321)
static void C_ccall f_6321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6331)
static void C_ccall f_6331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6825)
static void C_ccall f_6825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6337)
static void C_fcall f_6337(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6343)
static void C_ccall f_6343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6346)
static void C_ccall f_6346(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6352)
static void C_ccall f_6352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6528)
static void C_ccall f_6528(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6750)
static void C_ccall f_6750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6753)
static void C_ccall f_6753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6703)
static void C_ccall f_6703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6706)
static void C_ccall f_6706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6572)
static void C_ccall f_6572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6627)
static void C_ccall f_6627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6630)
static void C_ccall f_6630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6657)
static void C_ccall f_6657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6633)
static void C_ccall f_6633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6636)
static void C_ccall f_6636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6581)
static void C_ccall f_6581(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6584)
static void C_ccall f_6584(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6587)
static void C_ccall f_6587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6355)
static void C_ccall f_6355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6510)
static void C_ccall f_6510(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6508)
static void C_ccall f_6508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6451)
static void C_ccall f_6451(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6461)
static void C_ccall f_6461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6358)
static void C_ccall f_6358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6370)
static void C_ccall f_6370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6409)
static void C_ccall f_6409(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6373)
static void C_ccall f_6373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6376)
static void C_ccall f_6376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6381)
static void C_ccall f_6381(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6407)
static void C_ccall f_6407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6388)
static void C_ccall f_6388(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3933)
static void C_ccall f_3933(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8) C_noret;
C_noret_decl(f_5680)
static void C_ccall f_5680(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5683)
static void C_ccall f_5683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5715)
static void C_ccall f_5715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5702)
static void C_fcall f_5702(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5526)
static void C_ccall f_5526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5619)
static void C_ccall f_5619(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5544)
static void C_ccall f_5544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5588)
static void C_ccall f_5588(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5586)
static void C_ccall f_5586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5560)
static void C_ccall f_5560(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5453)
static void C_ccall f_5453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5456)
static void C_ccall f_5456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5484)
static void C_ccall f_5484(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5496)
static void C_ccall f_5496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5474)
static void C_ccall f_5474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5469)
static void C_ccall f_5469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5305)
static void C_ccall f_5305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5308)
static void C_ccall f_5308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5389)
static void C_ccall f_5389(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5317)
static void C_ccall f_5317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5370)
static void C_ccall f_5370(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5368)
static void C_ccall f_5368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5333)
static void C_ccall f_5333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5270)
static void C_ccall f_5270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5273)
static void C_ccall f_5273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5283)
static void C_ccall f_5283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5202)
static void C_ccall f_5202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5205)
static void C_ccall f_5205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5225)
static void C_fcall f_5225(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5123)
static void C_ccall f_5123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5126)
static void C_ccall f_5126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5156)
static void C_fcall f_5156(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5030)
static void C_ccall f_5030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5033)
static void C_ccall f_5033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5052)
static void C_ccall f_5052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5045)
static void C_ccall f_5045(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4947)
static void C_ccall f_4947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4950)
static void C_ccall f_4950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4882)
static void C_ccall f_4882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4885)
static void C_ccall f_4885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4900)
static void C_fcall f_4900(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4903)
static void C_ccall f_4903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4806)
static void C_ccall f_4806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4809)
static void C_ccall f_4809(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4852)
static void C_ccall f_4852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4845)
static void C_ccall f_4845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4741)
static void C_ccall f_4741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4744)
static void C_ccall f_4744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4756)
static void C_fcall f_4756(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4769)
static void C_ccall f_4769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4762)
static void C_ccall f_4762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4654)
static void C_ccall f_4654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4676)
static void C_ccall f_4676(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4684)
static void C_ccall f_4684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4688)
static void C_ccall f_4688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4510)
static void C_ccall f_4510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4532)
static void C_fcall f_4532(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4535)
static void C_fcall f_4535(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4538)
static void C_ccall f_4538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4541)
static void C_ccall f_4541(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4572)
static void C_ccall f_4572(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4570)
static void C_ccall f_4570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4546)
static void C_ccall f_4546(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4483)
static void C_ccall f_4483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4486)
static void C_ccall f_4486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4422)
static void C_ccall f_4422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4425)
static void C_ccall f_4425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4449)
static void C_ccall f_4449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4438)
static void C_ccall f_4438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4357)
static void C_ccall f_4357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4264)
static void C_ccall f_4264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4267)
static void C_ccall f_4267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4309)
static void C_ccall f_4309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4208)
static void C_ccall f_4208(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4221)
static void C_ccall f_4221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4229)
static void C_ccall f_4229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4164)
static void C_ccall f_4164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4167)
static void C_ccall f_4167(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4177)
static void C_ccall f_4177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4060)
static void C_ccall f_4060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4063)
static void C_ccall f_4063(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4091)
static void C_fcall f_4091(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4088)
static void C_fcall f_4088(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3952)
static void C_ccall f_3952(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4015)
static void C_ccall f_4015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3955)
static void C_fcall f_3955(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3936)
static void C_fcall f_3936(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3913)
static void C_ccall f_3913r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3917)
static void C_ccall f_3917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3927)
static void C_ccall f_3927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3585)
static void C_ccall f_3585(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_3589)
static void C_ccall f_3589(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3898)
static void C_ccall f_3898(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3907)
static void C_ccall f_3907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3903)
static void C_ccall f_3903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3636)
static void C_ccall f_3636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3840)
static void C_ccall f_3840(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3872)
static void C_ccall f_3872(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3885)
static void C_ccall f_3885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3850)
static void C_ccall f_3850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3866)
static void C_ccall f_3866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3854)
static void C_ccall f_3854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3858)
static void C_ccall f_3858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3639)
static void C_ccall f_3639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3781)
static void C_ccall f_3781(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3824)
static void C_ccall f_3824(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3830)
static void C_ccall f_3830(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3788)
static void C_ccall f_3788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3798)
static void C_ccall f_3798(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3811)
static void C_ccall f_3811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3796)
static void C_ccall f_3796(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3792)
static void C_ccall f_3792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3642)
static void C_ccall f_3642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3645)
static void C_ccall f_3645(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3665)
static void C_ccall f_3665(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3678)
static void C_fcall f_3678(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3753)
static void C_ccall f_3753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3719)
static void C_ccall f_3719(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3701)
static void C_ccall f_3701(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3648)
static void C_ccall f_3648(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3657)
static void C_ccall f_3657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3591)
static void C_fcall f_3591(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3597)
static void C_fcall f_3597(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3621)
static void C_ccall f_3621(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3570)
static void C_ccall f_3570r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3109)
static void C_ccall f_3109(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3123)
static void C_ccall f_3123(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3358)
static void C_ccall f_3358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3565)
static void C_ccall f_3565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3363)
static void C_ccall f_3363(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3554)
static void C_ccall f_3554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3376)
static void C_ccall f_3376(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3379)
static void C_ccall f_3379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3385)
static void C_fcall f_3385(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3400)
static void C_fcall f_3400(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3406)
static void C_ccall f_3406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3412)
static void C_fcall f_3412(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3421)
static void C_fcall f_3421(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3428)
static void C_ccall f_3428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3431)
static void C_ccall f_3431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3434)
static void C_ccall f_3434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3140)
static void C_ccall f_3140(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3147)
static void C_ccall f_3147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3352)
static void C_ccall f_3352(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3152)
static void C_ccall f_3152(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3165)
static void C_ccall f_3165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3341)
static void C_ccall f_3341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3315)
static void C_ccall f_3315(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3313)
static void C_ccall f_3313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3174)
static void C_fcall f_3174(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3186)
static void C_fcall f_3186(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3192)
static void C_ccall f_3192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3201)
static void C_fcall f_3201(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3207)
static void C_ccall f_3207(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3210)
static void C_ccall f_3210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3228)
static void C_ccall f_3228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3213)
static void C_ccall f_3213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3116)
static void C_fcall f_3116(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3112)
static C_word C_fcall f_3112(C_word t0);
C_noret_decl(f_1638)
static void C_ccall f_1638(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3013)
static void C_ccall f_3013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3019)
static void C_ccall f_3019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3023)
static void C_ccall f_3023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3026)
static void C_ccall f_3026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3067)
static void C_ccall f_3067(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3071)
static void C_ccall f_3071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3029)
static void C_ccall f_3029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3032)
static void C_ccall f_3032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3035)
static void C_ccall f_3035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2994)
static void C_fcall f_2994(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2998)
static void C_ccall f_2998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3004)
static void C_ccall f_3004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1979)
static void C_fcall f_1979(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2904)
static void C_ccall f_2904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2907)
static void C_ccall f_2907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2986)
static void C_ccall f_2986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2948)
static void C_fcall f_2948(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2961)
static void C_ccall f_2961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2919)
static void C_fcall f_2919(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2938)
static void C_ccall f_2938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2925)
static void C_ccall f_2925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2879)
static void C_ccall f_2879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2854)
static void C_ccall f_2854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2312)
static void C_ccall f_2312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2495)
static void C_fcall f_2495(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2805)
static void C_ccall f_2805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2811)
static void C_ccall f_2811(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2516)
static void C_fcall f_2516(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2553)
static void C_ccall f_2553(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2795)
static void C_ccall f_2795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2712)
static void C_fcall f_2712(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2765)
static void C_ccall f_2765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2757)
static void C_ccall f_2757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2742)
static void C_ccall f_2742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2732)
static void C_ccall f_2732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2567)
static void C_fcall f_2567(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_2600)
static void C_ccall f_2600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2612)
static void C_ccall f_2612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2649)
static void C_ccall f_2649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2629)
static void C_ccall f_2629(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2594)
static void C_ccall f_2594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2583)
static void C_ccall f_2583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2519)
static void C_ccall f_2519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2522)
static void C_ccall f_2522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2525)
static void C_ccall f_2525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2384)
static void C_ccall f_2384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2459)
static void C_ccall f_2459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2451)
static void C_ccall f_2451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2405)
static void C_fcall f_2405(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2428)
static void C_ccall f_2428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2414)
static void C_ccall f_2414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2363)
static void C_fcall f_2363(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2330)
static void C_ccall f_2330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2333)
static void C_ccall f_2333(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2343)
static void C_ccall f_2343(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2136)
static void C_ccall f_2136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2228)
static void C_ccall f_2228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2233)
static void C_ccall f_2233(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2240)
static void C_ccall f_2240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2269)
static void C_ccall f_2269(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2253)
static void C_ccall f_2253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2141)
static void C_ccall f_2141(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2159)
static void C_ccall f_2159(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2166)
static void C_ccall f_2166(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2202)
static void C_ccall f_2202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2205)
static void C_ccall f_2205(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2195)
static void C_ccall f_2195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2147)
static void C_ccall f_2147(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2153)
static void C_ccall f_2153(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2079)
static void C_ccall f_2079(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2105)
static void C_ccall f_2105(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2114)
static void C_ccall f_2114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2121)
static void C_ccall f_2121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2082)
static void C_fcall f_2082(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2099)
static void C_ccall f_2099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2004)
static void C_fcall f_2004(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2008)
static void C_ccall f_2008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2020)
static void C_ccall f_2020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2043)
static void C_fcall f_2043(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2026)
static void C_ccall f_2026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2037)
static void C_ccall f_2037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1777)
static void C_ccall f_1777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1944)
static void C_ccall f_1944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1947)
static void C_ccall f_1947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1953)
static void C_ccall f_1953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1847)
static void C_ccall f_1847(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1929)
static void C_ccall f_1929(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1927)
static void C_ccall f_1927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1858)
static void C_ccall f_1858(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1919)
static void C_ccall f_1919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1894)
static void C_ccall f_1894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1911)
static void C_ccall f_1911(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1864)
static void C_ccall f_1864(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1870)
static void C_ccall f_1870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1874)
static void C_fcall f_1874(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1878)
static void C_ccall f_1878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1856)
static void C_ccall f_1856(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1795)
static void C_ccall f_1795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1786)
static void C_ccall f_1786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1671)
static void C_fcall f_1671(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1675)
static void C_ccall f_1675(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1686)
static void C_ccall f_1686(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1696)
static void C_ccall f_1696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1743)
static void C_ccall f_1743(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1702)
static void C_ccall f_1702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1708)
static void C_ccall f_1708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1735)
static void C_ccall f_1735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1714)
static void C_fcall f_1714(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1678)
static void C_ccall f_1678(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1667)
static C_word C_fcall f_1667(C_word t0);
C_noret_decl(f_1657)
static C_word C_fcall f_1657(C_word t0);
C_noret_decl(f_1647)
static void C_ccall f_1647(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1641)
static void C_fcall f_1641(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1453)
static void C_ccall f_1453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1465)
static void C_ccall f_1465(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1480)
static void C_fcall f_1480(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1532)
static void C_fcall f_1532(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1551)
static void C_ccall f_1551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1562)
static void C_ccall f_1562(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1535)
static void C_ccall f_1535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1505)
static void C_fcall f_1505(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1468)
static void C_fcall f_1468(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1474)
static void C_ccall f_1474(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1456)
static void C_ccall f_1456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1459)
static void C_ccall f_1459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1463)
static void C_ccall f_1463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1435)
static C_word C_fcall f_1435(C_word *a,C_word t0,C_word t1);

C_noret_decl(trf_9352)
static void C_fcall trf_9352(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9352(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_9352(t0,t1,t2);}

C_noret_decl(trf_9371)
static void C_fcall trf_9371(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9371(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9371(t0,t1);}

C_noret_decl(trf_8796)
static void C_fcall trf_8796(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8796(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8796(t0,t1,t2,t3);}

C_noret_decl(trf_8889)
static void C_fcall trf_8889(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8889(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_8889(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8905)
static void C_fcall trf_8905(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8905(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8905(t0,t1);}

C_noret_decl(trf_7477)
static void C_fcall trf_7477(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7477(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7477(t0,t1,t2,t3);}

C_noret_decl(trf_8268)
static void C_fcall trf_8268(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8268(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8268(t0,t1,t2);}

C_noret_decl(trf_8298)
static void C_fcall trf_8298(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8298(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8298(t0,t1,t2,t3);}

C_noret_decl(trf_8339)
static void C_fcall trf_8339(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8339(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8339(t0,t1);}

C_noret_decl(trf_8181)
static void C_fcall trf_8181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8181(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8181(t0,t1,t2);}

C_noret_decl(trf_7931)
static void C_fcall trf_7931(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7931(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7931(t0,t1,t2,t3);}

C_noret_decl(trf_7730)
static void C_fcall trf_7730(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7730(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7730(t0,t1,t2);}

C_noret_decl(trf_7511)
static void C_fcall trf_7511(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7511(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7511(t0,t1,t2);}

C_noret_decl(trf_7517)
static void C_fcall trf_7517(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7517(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7517(t0,t1,t2,t3);}

C_noret_decl(trf_7536)
static void C_fcall trf_7536(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7536(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7536(t0,t1);}

C_noret_decl(trf_7547)
static void C_fcall trf_7547(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7547(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7547(t0,t1,t2,t3);}

C_noret_decl(trf_7267)
static void C_fcall trf_7267(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7267(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7267(t0,t1,t2);}

C_noret_decl(trf_7273)
static void C_fcall trf_7273(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7273(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7273(t0,t1,t2,t3);}

C_noret_decl(trf_7292)
static void C_fcall trf_7292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7292(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7292(t0,t1);}

C_noret_decl(trf_7351)
static void C_fcall trf_7351(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7351(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7351(t0,t1);}

C_noret_decl(trf_7303)
static void C_fcall trf_7303(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7303(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7303(t0,t1,t2,t3);}

C_noret_decl(trf_7168)
static void C_fcall trf_7168(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7168(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7168(t0,t1,t2,t3);}

C_noret_decl(trf_7223)
static void C_fcall trf_7223(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7223(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7223(t0,t1,t2,t3);}

C_noret_decl(trf_6971)
static void C_fcall trf_6971(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6971(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6971(t0,t1,t2);}

C_noret_decl(trf_6974)
static void C_fcall trf_6974(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6974(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6974(t0,t1,t2,t3);}

C_noret_decl(trf_7042)
static void C_fcall trf_7042(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7042(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7042(t0,t1,t2,t3);}

C_noret_decl(trf_6999)
static void C_fcall trf_6999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6999(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6999(t0,t1);}

C_noret_decl(trf_7002)
static void C_fcall trf_7002(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7002(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7002(t0,t1);}

C_noret_decl(trf_6871)
static void C_fcall trf_6871(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6871(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6871(t0,t1);}

C_noret_decl(trf_6908)
static void C_fcall trf_6908(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6908(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6908(t0,t1);}

C_noret_decl(trf_5736)
static void C_fcall trf_5736(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5736(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5736(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5898)
static void C_fcall trf_5898(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5898(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5898(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5901)
static void C_fcall trf_5901(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5901(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5901(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6177)
static void C_fcall trf_6177(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6177(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6177(t0,t1);}

C_noret_decl(trf_6149)
static void C_fcall trf_6149(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6149(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6149(t0,t1);}

C_noret_decl(trf_6102)
static void C_fcall trf_6102(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6102(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6102(t0,t1);}

C_noret_decl(trf_6061)
static void C_fcall trf_6061(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6061(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6061(t0,t1);}

C_noret_decl(trf_6317)
static void C_fcall trf_6317(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6317(void *dummy){
C_word t7=C_pick(0);
C_word t6=C_pick(1);
C_word t5=C_pick(2);
C_word t4=C_pick(3);
C_word t3=C_pick(4);
C_word t2=C_pick(5);
C_word t1=C_pick(6);
C_word t0=C_pick(7);
C_adjust_stack(-8);
f_6317(t0,t1,t2,t3,t4,t5,t6,t7);}

C_noret_decl(trf_6337)
static void C_fcall trf_6337(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6337(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6337(t0,t1);}

C_noret_decl(trf_5702)
static void C_fcall trf_5702(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5702(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5702(t0,t1);}

C_noret_decl(trf_5225)
static void C_fcall trf_5225(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5225(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5225(t0,t1);}

C_noret_decl(trf_5156)
static void C_fcall trf_5156(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5156(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5156(t0,t1);}

C_noret_decl(trf_4900)
static void C_fcall trf_4900(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4900(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4900(t0,t1);}

C_noret_decl(trf_4756)
static void C_fcall trf_4756(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4756(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4756(t0,t1);}

C_noret_decl(trf_4532)
static void C_fcall trf_4532(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4532(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4532(t0,t1);}

C_noret_decl(trf_4535)
static void C_fcall trf_4535(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4535(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4535(t0,t1);}

C_noret_decl(trf_4091)
static void C_fcall trf_4091(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4091(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4091(t0,t1);}

C_noret_decl(trf_4088)
static void C_fcall trf_4088(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4088(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4088(t0,t1);}

C_noret_decl(trf_3955)
static void C_fcall trf_3955(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3955(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3955(t0,t1);}

C_noret_decl(trf_3936)
static void C_fcall trf_3936(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3936(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3936(t0,t1,t2,t3);}

C_noret_decl(trf_3678)
static void C_fcall trf_3678(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3678(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3678(t0,t1);}

C_noret_decl(trf_3591)
static void C_fcall trf_3591(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3591(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3591(t0,t1,t2,t3);}

C_noret_decl(trf_3597)
static void C_fcall trf_3597(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3597(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3597(t0,t1,t2,t3);}

C_noret_decl(trf_3385)
static void C_fcall trf_3385(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3385(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3385(t0,t1);}

C_noret_decl(trf_3400)
static void C_fcall trf_3400(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3400(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3400(t0,t1);}

C_noret_decl(trf_3412)
static void C_fcall trf_3412(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3412(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3412(t0,t1);}

C_noret_decl(trf_3421)
static void C_fcall trf_3421(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3421(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3421(t0,t1);}

C_noret_decl(trf_3174)
static void C_fcall trf_3174(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3174(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3174(t0,t1);}

C_noret_decl(trf_3186)
static void C_fcall trf_3186(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3186(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3186(t0,t1);}

C_noret_decl(trf_3201)
static void C_fcall trf_3201(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3201(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3201(t0,t1);}

C_noret_decl(trf_3116)
static void C_fcall trf_3116(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3116(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3116(t0,t1,t2,t3);}

C_noret_decl(trf_2994)
static void C_fcall trf_2994(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2994(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2994(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_1979)
static void C_fcall trf_1979(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1979(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1979(t0,t1,t2);}

C_noret_decl(trf_2948)
static void C_fcall trf_2948(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2948(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2948(t0,t1);}

C_noret_decl(trf_2919)
static void C_fcall trf_2919(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2919(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2919(t0,t1);}

C_noret_decl(trf_2495)
static void C_fcall trf_2495(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2495(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2495(t0,t1);}

C_noret_decl(trf_2516)
static void C_fcall trf_2516(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2516(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2516(t0,t1);}

C_noret_decl(trf_2712)
static void C_fcall trf_2712(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2712(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2712(t0,t1);}

C_noret_decl(trf_2567)
static void C_fcall trf_2567(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2567(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_2567(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_2405)
static void C_fcall trf_2405(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2405(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2405(t0,t1);}

C_noret_decl(trf_2363)
static void C_fcall trf_2363(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2363(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2363(t0,t1);}

C_noret_decl(trf_2082)
static void C_fcall trf_2082(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2082(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2082(t0,t1);}

C_noret_decl(trf_2004)
static void C_fcall trf_2004(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2004(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2004(t0,t1,t2);}

C_noret_decl(trf_2043)
static void C_fcall trf_2043(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2043(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2043(t0,t1);}

C_noret_decl(trf_1874)
static void C_fcall trf_1874(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1874(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1874(t0,t1);}

C_noret_decl(trf_1671)
static void C_fcall trf_1671(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1671(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1671(t0,t1,t2);}

C_noret_decl(trf_1714)
static void C_fcall trf_1714(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1714(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1714(t0,t1);}

C_noret_decl(trf_1641)
static void C_fcall trf_1641(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1641(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1641(t0,t1,t2,t3);}

C_noret_decl(trf_1480)
static void C_fcall trf_1480(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1480(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1480(t0,t1,t2,t3);}

C_noret_decl(trf_1532)
static void C_fcall trf_1532(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1532(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1532(t0,t1);}

C_noret_decl(trf_1505)
static void C_fcall trf_1505(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1505(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1505(t0,t1);}

C_noret_decl(trf_1468)
static void C_fcall trf_1468(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1468(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1468(t0,t1,t2,t3);}

C_noret_decl(tr3)
static void C_fcall tr3(C_proc3 k) C_regparm C_noret;
C_regparm static void C_fcall tr3(C_proc3 k){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
(k)(3,t0,t1,t2);}

C_noret_decl(tr10)
static void C_fcall tr10(C_proc10 k) C_regparm C_noret;
C_regparm static void C_fcall tr10(C_proc10 k){
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
(k)(10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}

C_noret_decl(tr14)
static void C_fcall tr14(C_proc14 k) C_regparm C_noret;
C_regparm static void C_fcall tr14(C_proc14 k){
C_word t13=C_pick(0);
C_word t12=C_pick(1);
C_word t11=C_pick(2);
C_word t10=C_pick(3);
C_word t9=C_pick(4);
C_word t8=C_pick(5);
C_word t7=C_pick(6);
C_word t6=C_pick(7);
C_word t5=C_pick(8);
C_word t4=C_pick(9);
C_word t3=C_pick(10);
C_word t2=C_pick(11);
C_word t1=C_pick(12);
C_word t0=C_pick(13);
C_adjust_stack(-14);
(k)(14,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);}

C_noret_decl(tr11)
static void C_fcall tr11(C_proc11 k) C_regparm C_noret;
C_regparm static void C_fcall tr11(C_proc11 k){
C_word t10=C_pick(0);
C_word t9=C_pick(1);
C_word t8=C_pick(2);
C_word t7=C_pick(3);
C_word t6=C_pick(4);
C_word t5=C_pick(5);
C_word t4=C_pick(6);
C_word t3=C_pick(7);
C_word t2=C_pick(8);
C_word t1=C_pick(9);
C_word t0=C_pick(10);
C_adjust_stack(-11);
(k)(11,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}

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

C_noret_decl(tr7)
static void C_fcall tr7(C_proc7 k) C_regparm C_noret;
C_regparm static void C_fcall tr7(C_proc7 k){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
(k)(7,t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_optimizer_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_optimizer_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("optimizer_toplevel"));
C_check_nursery_minimum(6);
if(!C_demand(6)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1914)){
C_save(t1);
C_rereclaim2(1914*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(6);
C_initialize_lf(lf,415);
lf[0]=C_h_intern(&lf[0],34,"\010compilerscan-toplevel-assignments");
lf[1]=C_static_lambda_info(C_heaptop,6,"(mark)");
lf[2]=C_h_intern(&lf[2],12,"always-bound");
lf[3]=C_h_intern(&lf[3],6,"append");
lf[4]=C_h_intern(&lf[4],18,"\010compilerdebugging");
lf[5]=C_h_intern(&lf[5],1,"o");
lf[6]=C_static_string(C_heaptop,12,"safe globals");
lf[7]=C_static_lambda_info(C_heaptop,11,"(a1473 n16)");
lf[8]=C_h_intern(&lf[8],12,"\003sysfor-each");
lf[9]=C_static_lambda_info(C_heaptop,20,"(scan-each ns14 e15)");
lf[10]=C_h_intern(&lf[10],13,"\004corevariable");
lf[11]=C_h_intern(&lf[11],2,"if");
lf[12]=C_h_intern(&lf[12],3,"let");
lf[13]=C_h_intern(&lf[13],6,"lambda");
lf[14]=C_h_intern(&lf[14],13,"\004corecallunit");
lf[15]=C_h_intern(&lf[15],9,"\004corecall");
lf[16]=C_h_intern(&lf[16],4,"set!");
lf[17]=C_h_intern(&lf[17],9,"\004corecond");
lf[18]=C_h_intern(&lf[18],11,"\004coreswitch");
lf[19]=C_static_lambda_info(C_heaptop,14,"(scan n17 e18)");
lf[20]=C_static_lambda_info(C_heaptop,16,"(a1464 return11)");
lf[21]=C_h_intern(&lf[21],30,"call-with-current-continuation");
lf[22]=C_h_intern(&lf[22],1,"p");
lf[23]=C_static_string(C_heaptop,32,"scanning toplevel assignments...");
lf[24]=C_static_lambda_info(C_heaptop,44,"(##compiler#scan-toplevel-assignments node6)");
lf[25]=C_h_intern(&lf[25],24,"\010compilersimplifications");
lf[26]=C_h_intern(&lf[26],23,"\010compilersimplified-ops");
lf[27]=C_h_intern(&lf[27],41,"\010compilerperform-high-level-optimizations");
lf[28]=C_h_intern(&lf[28],12,"\010compilerget");
lf[29]=C_static_lambda_info(C_heaptop,19,"(test sym59 item60)");
lf[30]=C_h_intern(&lf[30],5,"quote");
lf[31]=C_static_lambda_info(C_heaptop,20,"(constant-node\077 n61)");
lf[32]=C_static_lambda_info(C_heaptop,12,"(node-value)");
lf[33]=C_h_intern(&lf[33],10,"alist-cons");
lf[34]=C_h_intern(&lf[34],4,"caar");
lf[35]=C_static_lambda_info(C_heaptop,11,"(a1744 v74)");
lf[36]=C_h_intern(&lf[36],7,"\003sysmap");
lf[37]=C_h_intern(&lf[37],19,"\010compilermatch-node");
lf[38]=C_static_lambda_info(C_heaptop,11,"(a1685 s70)");
lf[39]=C_h_intern(&lf[39],3,"any");
lf[40]=C_h_intern(&lf[40],18,"\003syshash-table-ref");
lf[41]=C_static_lambda_info(C_heaptop,14,"(simplify n65)");
lf[42]=C_h_intern(&lf[42],30,"\010compilerbroken-constant-nodes");
lf[43]=C_h_intern(&lf[43],11,"lset-adjoin");
lf[44]=C_h_intern(&lf[44],3,"eq\077");
lf[45]=C_static_lambda_info(C_heaptop,7,"(a1869)");
lf[46]=C_static_lambda_info(C_heaptop,12,"(a1863 ex99)");
lf[47]=C_h_intern(&lf[47],4,"node");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[48]=C_h_pair(C_restore,tmp);
lf[49]=C_h_intern(&lf[49],14,"\010compilerqnode");
lf[50]=C_static_string(C_heaptop,27,"folding constant expression");
lf[51]=C_h_intern(&lf[51],4,"eval");
lf[52]=C_static_lambda_info(C_heaptop,7,"(a1886)");
lf[53]=C_static_lambda_info(C_heaptop,7,"(a1918)");
lf[54]=C_static_lambda_info(C_heaptop,16,"(a1912 . g97108)");
lf[55]=C_static_lambda_info(C_heaptop,7,"(a1880)");
lf[56]=C_h_intern(&lf[56],22,"with-exception-handler");
lf[57]=C_static_lambda_info(C_heaptop,13,"(a1857 g9698)");
lf[58]=C_static_lambda_info(C_heaptop,13,"(a1928 arg95)");
lf[59]=C_h_intern(&lf[59],5,"every");
lf[60]=C_h_intern(&lf[60],8,"foldable");
lf[61]=C_h_intern(&lf[61],16,"extended-binding");
lf[62]=C_h_intern(&lf[62],16,"standard-binding");
lf[63]=C_static_lambda_info(C_heaptop,10,"(walk n79)");
lf[64]=C_h_intern(&lf[64],5,"value");
lf[65]=C_static_string(C_heaptop,29,"substituted constant variable");
lf[66]=C_h_intern(&lf[66],16,"\010compilervarnode");
lf[67]=C_h_intern(&lf[67],11,"collapsable");
lf[68]=C_h_intern(&lf[68],10,"replacable");
lf[69]=C_static_lambda_info(C_heaptop,16,"(replace var119)");
lf[70]=C_h_intern(&lf[70],9,"replacing");
lf[71]=C_h_intern(&lf[71],12,"contractable");
lf[72]=C_h_intern(&lf[72],9,"removable");
lf[73]=C_h_intern(&lf[73],11,"\004corelambda");
lf[74]=C_h_intern(&lf[74],6,"unused");
lf[75]=C_static_lambda_info(C_heaptop,12,"(a2152 v142)");
lf[76]=C_h_intern(&lf[76],9,"partition");
lf[77]=C_static_lambda_info(C_heaptop,7,"(a2146)");
lf[78]=C_h_intern(&lf[78],26,"\010compilerbuild-lambda-list");
lf[79]=C_static_string(C_heaptop,39,"merged explicitly consed rest parameter");
lf[80]=C_h_intern(&lf[80],13,"explicit-rest");
lf[81]=C_static_string(C_heaptop,32,"removed unused formal parameters");
lf[82]=C_static_lambda_info(C_heaptop,25,"(a2158 unused143 used144)");
lf[83]=C_static_lambda_info(C_heaptop,31,"(a2140 vars139 argc140 rest141)");
lf[84]=C_h_intern(&lf[84],30,"\010compilerdecompose-lambda-list");
lf[85]=C_static_string(C_heaptop,39,"merged explicitly consed rest parameter");
lf[86]=C_static_lambda_info(C_heaptop,31,"(a2232 vars151 argc152 rest153)");
lf[87]=C_h_intern(&lf[87],21,"has-unused-parameters");
lf[88]=C_h_intern(&lf[88],31,"\010compilerinline-lambda-bindings");
lf[89]=C_static_string(C_heaptop,20,"contracted procedure");
lf[90]=C_h_intern(&lf[90],24,"\010compilercheck-signature");
lf[91]=C_h_intern(&lf[91],30,"\010compilerconstant-declarations");
lf[92]=C_h_intern(&lf[92],14,"\004coreundefined");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[93]=C_h_pair(C_restore,tmp);
lf[94]=C_h_intern(&lf[94],1,"x");
lf[95]=C_static_string(C_heaptop,53,"removed call to constant procedure with unused result");
lf[96]=C_h_intern(&lf[96],37,"\010compilerexpression-has-side-effects\077");
lf[97]=C_static_lambda_info(C_heaptop,15,"(a2429 g187188)");
lf[98]=C_h_intern(&lf[98],8,"assigned");
lf[99]=C_h_intern(&lf[99],10,"references");
lf[100]=C_h_intern(&lf[100],7,"unknown");
lf[101]=C_static_string(C_heaptop,18,"inlining procedure");
lf[102]=C_h_intern(&lf[102],1,"i");
lf[103]=C_static_string(C_heaptop,19,"procedure inlinable");
lf[104]=C_h_intern(&lf[104],14,"append-reverse");
lf[105]=C_h_intern(&lf[105],6,"gensym");
lf[106]=C_h_intern(&lf[106],1,"t");
lf[107]=C_static_string(C_heaptop,43,"removed unused parameter to known procedure");
lf[108]=C_static_lambda_info(C_heaptop,38,"(loop vars212 argc213 args214 used215)");
lf[109]=C_h_intern(&lf[109],8,"split-at");
lf[110]=C_static_lambda_info(C_heaptop,7,"(a2731)");
lf[111]=C_static_string(C_heaptop,10,"C_a_i_list");
lf[112]=C_h_intern(&lf[112],20,"\004coreinline_allocate");
lf[113]=C_static_lambda_info(C_heaptop,30,"(a2737 args229231 rargs230232)");
lf[114]=C_static_string(C_heaptop,34,"consed rest parameter at call site");
lf[115]=C_h_intern(&lf[115],24,"\010compilernot-inline-list");
lf[116]=C_h_intern(&lf[116],20,"\010compilerinline-list");
lf[117]=C_h_intern(&lf[117],24,"\010compilerinline-max-size");
lf[118]=C_h_intern(&lf[118],9,"inlinable");
lf[119]=C_h_intern(&lf[119],6,"simple");
lf[120]=C_static_lambda_info(C_heaptop,31,"(a2505 vars200 argc201 rest202)");
lf[121]=C_static_string(C_heaptop,54,"removed side-effect free assignment to unused variable");
lf[122]=C_h_intern(&lf[122],26,"\010compilerblock-compilation");
lf[123]=C_h_intern(&lf[123],20,"\010compilerexport-list");
lf[124]=C_h_intern(&lf[124],6,"global");
lf[125]=C_static_lambda_info(C_heaptop,12,"(walk1 n109)");
lf[126]=C_static_lambda_info(C_heaptop,46,"(walk-generic n266 class267 params268 subs269)");
lf[127]=C_static_string(C_heaptop,25,"removed conditional forms");
lf[128]=C_static_string(C_heaptop,21,"removed binding forms");
lf[129]=C_static_string(C_heaptop,18,"replaced variables");
lf[130]=C_h_intern(&lf[130],5,"print");
lf[131]=C_h_intern(&lf[131],7,"newline");
lf[132]=C_h_intern(&lf[132],6,"print*");
lf[133]=C_static_lambda_info(C_heaptop,12,"(a3066 p275)");
lf[134]=C_static_string(C_heaptop,23,"  call simplifications:");
lf[135]=C_static_string(C_heaptop,15,"simplifications");
lf[136]=C_static_string(C_heaptop,18,"traversal phase...");
lf[137]=C_h_intern(&lf[137],34,"\010compilerperform-pre-optimization!");
lf[138]=C_static_lambda_info(C_heaptop,57,"(##compiler#perform-high-level-optimizations node43 db44)");
lf[139]=C_static_lambda_info(C_heaptop,21,"(test sym299 prop300)");
lf[140]=C_static_string(C_heaptop,19,"Removed `not\047 forms");
lf[141]=C_h_intern(&lf[141],24,"node-subexpressions-set!");
lf[142]=C_h_intern(&lf[142],20,"node-parameters-set!");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[143]=C_h_pair(C_restore,tmp);
lf[144]=C_static_string(C_heaptop,28,"removed call in test-context");
lf[145]=C_static_lambda_info(C_heaptop,13,"(a3314 sn339)");
lf[146]=C_static_lambda_info(C_heaptop,15,"(a3151 site330)");
lf[147]=C_h_intern(&lf[147],10,"call-sites");
lf[148]=C_static_lambda_info(C_heaptop,18,"(a3139 varname329)");
lf[149]=C_h_intern(&lf[149],67,"\010compilerside-effect-free-standard-bindings-that-never-return-false");
lf[150]=C_h_intern(&lf[150],7,"reverse");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[151]=C_h_pair(C_restore,tmp);
lf[152]=C_static_lambda_info(C_heaptop,15,"(a3362 site301)");
lf[153]=C_h_intern(&lf[153],3,"not");
lf[154]=C_static_string(C_heaptop,25,"pre-optimization phase...");
lf[155]=C_static_lambda_info(C_heaptop,52,"(##compiler#perform-pre-optimization! node292 db293)");
lf[156]=C_h_intern(&lf[156],24,"register-simplifications");
lf[157]=C_h_intern(&lf[157],19,"\003syshash-table-set!");
lf[158]=C_static_lambda_info(C_heaptop,43,"(register-simplifications class364 . ss365)");
lf[159]=C_h_intern(&lf[159],38,"\010compilerreorganize-recursive-bindings");
lf[160]=C_static_lambda_info(C_heaptop,12,"(a3620 v512)");
lf[161]=C_static_lambda_info(C_heaptop,26,"(find var506 traversed507)");
lf[162]=C_static_lambda_info(C_heaptop,27,"(find-path var1503 var2504)");
lf[163]=C_static_string(C_heaptop,22,"eliminated assignments");
lf[164]=C_static_lambda_info(C_heaptop,22,"(a3700 var540 rest541)");
lf[165]=C_h_intern(&lf[165],10,"fold-right");
lf[166]=C_static_lambda_info(C_heaptop,22,"(a3720 var548 rest549)");
lf[167]=C_static_lambda_info(C_heaptop,21,"(a3664 gn532 body533)");
lf[168]=C_h_intern(&lf[168],4,"fold");
lf[169]=C_h_intern(&lf[169],25,"\010compilertopological-sort");
lf[170]=C_h_intern(&lf[170],6,"lset<=");
lf[171]=C_static_lambda_info(C_heaptop,13,"(a3797 g2528)");
lf[172]=C_h_intern(&lf[172],10,"filter-map");
lf[173]=C_static_lambda_info(C_heaptop,12,"(a3829 v527)");
lf[174]=C_h_intern(&lf[174],6,"filter");
lf[175]=C_static_lambda_info(C_heaptop,14,"(a3823 var526)");
lf[176]=C_h_intern(&lf[176],10,"append-map");
lf[177]=C_static_lambda_info(C_heaptop,12,"(a3780 g523)");
lf[178]=C_static_lambda_info(C_heaptop,12,"(a3871 v520)");
lf[179]=C_static_lambda_info(C_heaptop,14,"(a3839 var518)");
lf[180]=C_h_intern(&lf[180],28,"\010compilerscan-used-variables");
lf[181]=C_static_lambda_info(C_heaptop,21,"(a3897 var514 val515)");
lf[182]=C_h_intern(&lf[182],8,"for-each");
lf[183]=C_h_intern(&lf[183],3,"map");
lf[184]=C_h_intern(&lf[184],4,"cons");
lf[185]=C_static_lambda_info(C_heaptop,66,"(##compiler#reorganize-recursive-bindings vars497 vals498 body499)");
lf[186]=C_h_intern(&lf[186],27,"\010compilersubstitution-table");
lf[187]=C_h_intern(&lf[187],16,"\010compilerrewrite");
lf[188]=C_static_lambda_info(C_heaptop,48,"(##compiler#rewrite name561 . class-and-args562)");
lf[189]=C_h_intern(&lf[189],28,"\010compilersimplify-named-call");
lf[190]=C_static_lambda_info(C_heaptop,21,"(test sym575 prop576)");
lf[191]=C_h_intern(&lf[191],37,"\010compilerinline-substitutions-enabled");
lf[192]=C_h_intern(&lf[192],11,"\004coreinline");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[193]=C_h_pair(C_restore,tmp);
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[194]=C_h_pair(C_restore,tmp);
lf[195]=C_h_intern(&lf[195],6,"unsafe");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[196]=C_h_pair(C_restore,tmp);
lf[197]=C_h_intern(&lf[197],6,"vector");
lf[198]=C_h_intern(&lf[198],14,"rest-parameter");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[199]=C_h_pair(C_restore,tmp);
lf[200]=C_h_intern(&lf[200],11,"number-type");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[201]=C_h_pair(C_restore,tmp);
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[202]=C_h_pair(C_restore,tmp);
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[203]=C_h_pair(C_restore,tmp);
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[204]=C_h_pair(C_restore,tmp);
lf[205]=C_static_lambda_info(C_heaptop,22,"(a4545 x664 n665 y666)");
lf[206]=C_h_intern(&lf[206],6,"fixnum");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[207]=C_h_pair(C_restore,tmp);
lf[208]=C_static_lambda_info(C_heaptop,17,"(a4571 x674 y675)");
lf[209]=C_h_intern(&lf[209],21,"\010compilerfold-boolean");
lf[210]=C_static_lambda_info(C_heaptop,12,"(a4593 z662)");
lf[211]=C_h_intern(&lf[211],6,"flonum");
lf[212]=C_h_intern(&lf[212],7,"generic");
lf[213]=C_h_intern(&lf[213],5,"cons*");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[214]=C_h_pair(C_restore,tmp);
lf[215]=C_h_intern(&lf[215],9,"\004coreproc");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[216]=C_h_pair(C_restore,tmp);
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[217]=C_h_pair(C_restore,tmp);
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[218]=C_h_pair(C_restore,tmp);
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[219]=C_h_pair(C_restore,tmp);
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[220]=C_h_pair(C_restore,tmp);
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[221]=C_h_pair(C_restore,tmp);
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[222]=C_h_pair(C_restore,tmp);
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[223]=C_h_pair(C_restore,tmp);
lf[224]=C_static_lambda_info(C_heaptop,17,"(a5369 x786 y787)");
lf[225]=C_h_intern(&lf[225],19,"\010compilerfold-inner");
lf[226]=C_static_lambda_info(C_heaptop,12,"(a5388 x772)");
lf[227]=C_h_intern(&lf[227],6,"remove");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[228]=C_h_pair(C_restore,tmp);
lf[229]=C_static_lambda_info(C_heaptop,7,"(a5473)");
lf[230]=C_static_lambda_info(C_heaptop,29,"(a5483 head802804 tail803805)");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[231]=C_h_pair(C_restore,tmp);
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[232]=C_h_pair(C_restore,tmp);
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[233]=C_h_pair(C_restore,tmp);
lf[234]=C_static_lambda_info(C_heaptop,17,"(a5587 x827 y828)");
lf[235]=C_static_lambda_info(C_heaptop,12,"(a5618 x815)");
lf[236]=C_h_intern(&lf[236],5,"fifth");
tmp=C_SCHEME_TRUE;
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[237]=C_h_pair(C_restore,tmp);
lf[238]=C_h_intern(&lf[238],13,"\010compilerbomb");
lf[239]=C_static_string(C_heaptop,19,"bad type (optimize)");
lf[240]=C_static_lambda_info(C_heaptop,98,"(##compiler#simplify-named-call db566 params567 name568 cont569 class570 classar"
"gs571 callargs572)");
lf[241]=C_h_intern(&lf[241],34,"\010compilertransform-direct-lambdas!");
lf[242]=C_static_lambda_info(C_heaptop,13,"(a6380 h1031)");
lf[243]=C_h_intern(&lf[243],19,"\010compilercopy-node!");
lf[244]=C_static_lambda_info(C_heaptop,22,"(a6408 h1018 rest1019)");
lf[245]=C_h_intern(&lf[245],16,"\004coredirect_call");
lf[246]=C_h_intern(&lf[246],25,"\010compilercompiler-warning");
lf[247]=C_h_intern(&lf[247],4,"call");
lf[248]=C_static_string(C_heaptop,59,"known procedure called with wrong number of arguments: `~A\047");
lf[249]=C_static_lambda_info(C_heaptop,16,"(a6450 site1003)");
lf[250]=C_static_lambda_info(C_heaptop,21,"(a6509 s11011 s21012)");
lf[251]=C_h_intern(&lf[251],15,"lset-difference");
lf[252]=C_h_intern(&lf[252],15,"node-class-set!");
lf[253]=C_h_intern(&lf[253],12,"\004corerecurse");
lf[254]=C_static_string(C_heaptop,71,"known procedure called recursively with wrong number of arguments: `~A\047");
lf[255]=C_h_intern(&lf[255],4,"take");
lf[256]=C_static_string(C_heaptop,71,"known procedure called recursively with wrong number of arguments: `~A\047");
lf[257]=C_static_string(C_heaptop,12,"missing kvar");
lf[258]=C_h_intern(&lf[258],11,"\004corereturn");
lf[259]=C_static_string(C_heaptop,15,"bad call (leaf)");
lf[260]=C_static_lambda_info(C_heaptop,10,"(rec n962)");
lf[261]=C_h_intern(&lf[261],18,"\004coredirect_lambda");
lf[262]=C_h_intern(&lf[262],6,"cdaddr");
lf[263]=C_h_intern(&lf[263],6,"caaddr");
lf[264]=C_static_string(C_heaptop,22,"invalid parameter list");
lf[265]=C_static_string(C_heaptop,54,"direct leaf routine with hoistable closures/allocation");
lf[266]=C_h_intern(&lf[266],6,"unzip1");
lf[267]=C_static_lambda_info(C_heaptop,7,"(a6852)");
lf[268]=C_h_intern(&lf[268],16,"\003sysmake-promise");
lf[269]=C_static_string(C_heaptop,30,"direct leaf routine/allocation");
lf[270]=C_static_lambda_info(C_heaptop,66,"(transform n939 fnvar940 ks941 hoistable942 destn943 allocated944)");
lf[271]=C_h_intern(&lf[271],5,"boxed");
lf[272]=C_static_lambda_info(C_heaptop,31,"(a5967 vars902 argc903 rest904)");
lf[273]=C_static_lambda_info(C_heaptop,12,"(a6004 x906)");
lf[274]=C_h_intern(&lf[274],15,"\004coreinline_ref");
lf[275]=C_static_lambda_info(C_heaptop,12,"(a6065 x913)");
lf[276]=C_h_intern(&lf[276],37,"\010compilerestimate-foreign-result-size");
lf[277]=C_h_intern(&lf[277],19,"\004coreinline_loc_ref");
lf[278]=C_static_lambda_info(C_heaptop,12,"(a6106 x918)");
lf[279]=C_static_lambda_info(C_heaptop,12,"(a6153 x928)");
lf[280]=C_static_lambda_info(C_heaptop,12,"(a6237 x932)");
lf[281]=C_static_lambda_info(C_heaptop,12,"(a6294 x934)");
lf[282]=C_static_lambda_info(C_heaptop,26,"(rec n885 v886 vn887 e888)");
lf[283]=C_h_intern(&lf[283],5,"lset=");
lf[284]=C_h_intern(&lf[284],6,"delete");
lf[285]=C_static_lambda_info(C_heaptop,44,"(scan n877 kvar878 fnvar879 destn880 env881)");
lf[286]=C_static_lambda_info(C_heaptop,12,"(a5891 x876)");
lf[287]=C_static_lambda_info(C_heaptop,22,"(walk d861 n862 dn863)");
lf[288]=C_static_string(C_heaptop,40,"direct leaf routine optimization pass...");
lf[289]=C_static_lambda_info(C_heaptop,52,"(##compiler#transform-direct-lambdas! node852 db853)");
lf[290]=C_h_intern(&lf[290],32,"\010compilerperform-lambda-lifting!");
lf[291]=C_static_lambda_info(C_heaptop,25,"(a6876 sym1069 plist1070)");
lf[292]=C_h_intern(&lf[292],23,"\003syshash-table-for-each");
lf[293]=C_static_lambda_info(C_heaptop,25,"(find-lifting-candidates)");
lf[294]=C_static_lambda_info(C_heaptop,13,"(a7006 n1098)");
lf[295]=C_static_lambda_info(C_heaptop,24,"(loop vars1102 vals1103)");
lf[296]=C_static_lambda_info(C_heaptop,34,"(a7095 vars1107 argc1108 rest1109)");
lf[297]=C_static_lambda_info(C_heaptop,13,"(a7112 n1110)");
lf[298]=C_static_lambda_info(C_heaptop,20,"(walk n1083 env1084)");
lf[299]=C_static_lambda_info(C_heaptop,33,"(a7149 vars1116 arg1117 rest1118)");
lf[300]=C_static_lambda_info(C_heaptop,14,"(a7124 cs1111)");
lf[301]=C_static_lambda_info(C_heaptop,25,"(build-call-graph cs1078)");
lf[302]=C_static_lambda_info(C_heaptop,13,"(a7185 v1130)");
lf[303]=C_h_intern(&lf[303],1,"+");
lf[304]=C_static_lambda_info(C_heaptop,13,"(a7244 c1141)");
lf[305]=C_h_intern(&lf[305],17,"delete-duplicates");
lf[306]=C_static_lambda_info(C_heaptop,24,"(count n1135 walked1136)");
lf[307]=C_static_lambda_info(C_heaptop,14,"(a7173 gn1127)");
lf[308]=C_static_lambda_info(C_heaptop,28,"(eliminate cs1125 graph1126)");
lf[309]=C_static_lambda_info(C_heaptop,25,"(loop vars21165 vals1166)");
lf[310]=C_static_lambda_info(C_heaptop,35,"(a7359 vars21171 argc1172 rest1173)");
lf[311]=C_static_lambda_info(C_heaptop,13,"(a7393 n1175)");
lf[312]=C_h_intern(&lf[312],14,"\004coreprimitive");
lf[313]=C_static_lambda_info(C_heaptop,21,"(walk n1146 vars1147)");
lf[314]=C_static_lambda_info(C_heaptop,31,"(collect-accessibles graph1143)");
lf[315]=C_static_lambda_info(C_heaptop,25,"(loop vars21214 vals1215)");
lf[316]=C_static_lambda_info(C_heaptop,35,"(a7597 vars21218 argc1219 rest1220)");
lf[317]=C_static_lambda_info(C_heaptop,13,"(a7626 n1233)");
lf[318]=C_h_intern(&lf[318],7,"delete!");
lf[319]=C_static_lambda_info(C_heaptop,15,"(loop name1226)");
lf[320]=C_static_lambda_info(C_heaptop,18,"(a7632 return1222)");
lf[321]=C_static_lambda_info(C_heaptop,13,"(a7702 n1235)");
lf[322]=C_static_lambda_info(C_heaptop,21,"(walk n1195 vars1196)");
lf[323]=C_static_lambda_info(C_heaptop,22,"(eliminate4 graph1193)");
lf[324]=C_h_intern(&lf[324],11,"concatenate");
lf[325]=C_static_lambda_info(C_heaptop,14,"(a7840 n21270)");
lf[326]=C_static_lambda_info(C_heaptop,13,"(a7850 c1268)");
lf[327]=C_static_lambda_info(C_heaptop,17,"(a7864 g12651266)");
lf[328]=C_h_intern(&lf[328],5,"count");
lf[329]=C_static_lambda_info(C_heaptop,13,"(walk gn1263)");
lf[330]=C_static_lambda_info(C_heaptop,13,"(a7892 v1276)");
lf[331]=C_static_lambda_info(C_heaptop,34,"(a7776 vars1253 argc1254 rest1255)");
lf[332]=C_static_lambda_info(C_heaptop,12,"(walk n1243)");
lf[333]=C_static_lambda_info(C_heaptop,14,"(a7876 xt1273)");
lf[334]=C_static_lambda_info(C_heaptop,14,"(a7916 gn1261)");
lf[335]=C_static_lambda_info(C_heaptop,35,"(compute-extra-variables graph1238)");
lf[336]=C_h_intern(&lf[336],22,"\010compilerblock-globals");
lf[337]=C_static_lambda_info(C_heaptop,14,"(rename v1312)");
lf[338]=C_static_lambda_info(C_heaptop,34,"(a8156 vars1326 argc1327 rest1328)");
lf[339]=C_static_lambda_info(C_heaptop,12,"(walk n1315)");
lf[340]=C_static_lambda_info(C_heaptop,34,"(a7964 vars1289 argc1290 rest1291)");
lf[341]=C_static_lambda_info(C_heaptop,23,"(a7944 gn1284 body1285)");
lf[342]=C_static_lambda_info(C_heaptop,34,"(reconstruct! graph1282 extra1283)");
lf[343]=C_static_lambda_info(C_heaptop,12,"(walk n1334)");
lf[344]=C_static_lambda_info(C_heaptop,30,"(extend-call-sites! extra1332)");
lf[345]=C_static_lambda_info(C_heaptop,26,"(do1365 vars1367 vals1368)");
lf[346]=C_static_lambda_info(C_heaptop,12,"(walk n1353)");
lf[347]=C_static_lambda_info(C_heaptop,34,"(remove-local-bindings! graph1351)");
lf[348]=C_static_string(C_heaptop,31,"moving liftables to toplevel...");
lf[349]=C_static_string(C_heaptop,26,"removing local bindings...");
lf[350]=C_static_string(C_heaptop,22,"changing call sites...");
lf[351]=C_h_intern(&lf[351],12,"pretty-print");
lf[352]=C_h_intern(&lf[352],1,"l");
lf[353]=C_static_string(C_heaptop,22,"additional parameters:");
lf[354]=C_static_string(C_heaptop,29,"gathering extra parameters...");
lf[355]=C_static_string(C_heaptop,25,"liftable local procedures");
lf[356]=C_static_lambda_info(C_heaptop,7,"(a8489)");
lf[357]=C_static_lambda_info(C_heaptop,13,"(a7500 n1190)");
lf[358]=C_static_lambda_info(C_heaptop,14,"(a7494 gn1189)");
lf[359]=C_static_lambda_info(C_heaptop,22,"(loop graph1186 n1187)");
lf[360]=C_static_string(C_heaptop,65,"eliminating liftables by access-lists and non-liftable callees...");
lf[361]=C_static_string(C_heaptop,12,"accessibles:");
lf[362]=C_static_string(C_heaptop,25,"computing access-lists...");
lf[363]=C_static_string(C_heaptop,11,"call-graph:");
lf[364]=C_static_string(C_heaptop,28,"eliminating non-liftables...");
lf[365]=C_static_string(C_heaptop,22,"building call graph...");
lf[366]=C_static_string(C_heaptop,22,"gathering liftables...");
lf[367]=C_static_lambda_info(C_heaptop,52,"(##compiler#perform-lambda-lifting! node1051 db1052)");
lf[368]=C_h_intern(&lf[368],11,"make-vector");
lf[369]=C_h_intern(&lf[369],3,"var");
lf[370]=C_h_intern(&lf[370],2,"d2");
lf[371]=C_h_intern(&lf[371],1,"y");
lf[372]=C_h_intern(&lf[372],2,"d3");
lf[373]=C_h_intern(&lf[373],1,"z");
lf[374]=C_h_intern(&lf[374],2,"d1");
lf[375]=C_static_lambda_info(C_heaptop,53,"(a8638 db459 d1460 d2461 d3462 x463 y464 z465 var466)");
lf[376]=C_h_intern(&lf[376],2,"op");
lf[377]=C_h_intern(&lf[377],5,"clist");
lf[378]=C_h_intern(&lf[378],34,"\010compilermembership-test-operators");
lf[379]=C_h_intern(&lf[379],32,"\010compilermembership-unfold-limit");
lf[380]=C_static_lambda_info(C_heaptop,20,"(a8574 c489 rest490)");
lf[381]=C_static_lambda_info(C_heaptop,49,"(a8527 db473 d1474 op475 x476 clist477 y478 z479)");
lf[382]=C_h_intern(&lf[382],4,"var1");
lf[383]=C_h_intern(&lf[383],4,"var0");
lf[384]=C_h_intern(&lf[384],6,"const1");
lf[385]=C_h_intern(&lf[385],4,"var2");
lf[386]=C_h_intern(&lf[386],6,"const2");
lf[387]=C_h_intern(&lf[387],5,"body2");
lf[388]=C_h_intern(&lf[388],4,"rest");
lf[389]=C_h_intern(&lf[389],5,"body1");
lf[390]=C_h_intern(&lf[390],27,"\010compilereq-inline-operator");
tmp=C_fix(2);
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[391]=C_h_pair(C_restore,tmp);
lf[392]=C_h_intern(&lf[392],19,"\010compilerimmediate\077");
lf[393]=C_static_lambda_info(C_heaptop,101,"(a9175 db381 var0382 var1383 var2384 op385 const1386 const2387 body1388 body2389"
" d1390 d2391 rest392)");
lf[394]=C_h_intern(&lf[394],5,"const");
lf[395]=C_h_intern(&lf[395],1,"n");
lf[396]=C_h_intern(&lf[396],7,"clauses");
lf[397]=C_h_intern(&lf[397],1,"d");
lf[398]=C_h_intern(&lf[398],4,"body");
lf[399]=C_static_lambda_info(C_heaptop,72,"(a9053 db396 var397 op398 var0399 const400 d401 body402 n403 clauses404)");
lf[400]=C_h_intern(&lf[400],4,"more");
lf[401]=C_static_lambda_info(C_heaptop,7,"(a8941)");
lf[402]=C_static_lambda_info(C_heaptop,24,"(a8951 n442 progress443)");
lf[403]=C_static_lambda_info(C_heaptop,31,"(loop2 vals430 vars431 body432)");
lf[404]=C_static_lambda_info(C_heaptop,23,"(loop1 vars412 body413)");
lf[405]=C_static_lambda_info(C_heaptop,29,"(a8785 db408 var1409 more410)");
lf[406]=C_h_intern(&lf[406],4,"args");
lf[407]=C_static_lambda_info(C_heaptop,49,"(a8709 db446 var447 op448 args449 d450 x451 y452)");
lf[408]=C_h_intern(&lf[408],1,"a");
lf[409]=C_h_intern(&lf[409],1,"b");
lf[410]=C_h_intern(&lf[410],1,"c");
lf[411]=C_h_intern(&lf[411],4,"cdar");
lf[412]=C_static_lambda_info(C_heaptop,17,"(loop entries372)");
lf[413]=C_static_lambda_info(C_heaptop,33,"(a9338 db366 a367 b368 c369 d370)");
lf[414]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,415,create_ptable());
t2=C_mutate((C_word*)lf[0]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1432,a[2]=lf[24],tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1635,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 152  make-vector */
t4=*((C_word*)lf[368]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k1633 */
static void C_ccall f_1635(C_word c,C_word t0,C_word t1){
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
C_word ab[57],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1635,2,t0,t1);}
t2=C_mutate((C_word*)lf[25]+1,t1);
t3=C_set_block_item(lf[26],0,C_SCHEME_END_OF_LIST);
t4=C_mutate((C_word*)lf[27]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1638,a[2]=lf[138],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[137]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3109,a[2]=lf[155],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[156]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3570,a[2]=lf[158],tmp=(C_word)a,a+=3,tmp));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3577,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_a_i_list(&a,1,lf[408]);
t9=(C_word)C_a_i_list(&a,2,lf[10],t8);
t10=(C_word)C_a_i_cons(&a,2,lf[409],lf[410]);
t11=(C_word)C_a_i_cons(&a,2,t9,t10);
t12=(C_word)C_a_i_cons(&a,2,lf[397],t11);
t13=(C_word)C_a_i_cons(&a,2,lf[15],t12);
t14=(C_word)C_a_i_list(&a,4,lf[408],lf[409],lf[410],lf[397]);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9339,a[2]=lf[413],tmp=(C_word)a,a+=3,tmp);
t16=(C_word)C_a_i_list(&a,3,t13,t14,t15);
/* optimizer.scm: 544  register-simplifications */
t17=C_retrieve(lf[156]);
((C_proc4)C_retrieve_proc(t17))(4,t17,t7,lf[15],t16);}

/* a9338 in k1633 */
static void C_ccall f_9339(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=7) C_bad_argc_2(c,7,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr7,(void*)f_9339,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9347,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=t6,a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 550  ##sys#hash-table-ref */
t8=C_retrieve(lf[40]);
((C_proc4)C_retrieve_proc(t8))(4,t8,t7,C_retrieve(lf[186]),t3);}

/* k9345 in a9338 in k1633 */
static void C_ccall f_9347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9347,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9352,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t4,a[7]=((C_word*)t0)[7],a[8]=lf[412],tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_9352(t6,((C_word*)t0)[2],t2);}

/* loop in k9345 in a9338 in k1633 */
static void C_fcall f_9352(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9352,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9362,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9397,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=t3,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 552  caar */
t5=*((C_word*)lf[34]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}}

/* k9395 in loop in k9345 in a9338 in k1633 */
static void C_ccall f_9397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9397,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9401,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 552  cdar */
t3=*((C_word*)lf[411]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k9399 in k9395 in loop in k9345 in a9338 in k1633 */
static void C_ccall f_9401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 552  ##compiler#simplify-named-call */
t2=C_retrieve(lf[189]);
((C_proc9)C_retrieve_proc(t2))(9,t2,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k9360 in loop in k9345 in a9338 in k1633 */
static void C_ccall f_9362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9362,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_assq(((C_word*)t0)[5],C_retrieve(lf[26]));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9371,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_fixnum_increase(t4);
t6=t3;
f_9371(t6,(C_word)C_i_set_cdr(t2,t5));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9386,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 557  alist-cons */
t5=C_retrieve(lf[33]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[5],C_fix(1),C_retrieve(lf[26]));}}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 559  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_9352(t3,((C_word*)t0)[4],t2);}}

/* k9384 in k9360 in loop in k9345 in a9338 in k1633 */
static void C_ccall f_9386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[26]+1,t1);
t3=((C_word*)t0)[2];
f_9371(t3,t2);}

/* k9369 in k9360 in loop in k9345 in a9338 in k1633 */
static void C_fcall f_9371(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k3575 in k1633 */
static void C_ccall f_3577(C_word c,C_word t0,C_word t1){
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
C_word ab[438],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3577,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3580,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_a_i_list(&a,1,lf[382]);
t4=(C_word)C_a_i_list(&a,1,lf[376]);
t5=(C_word)C_a_i_list(&a,1,lf[383]);
t6=(C_word)C_a_i_list(&a,2,lf[10],t5);
t7=(C_word)C_a_i_list(&a,1,lf[384]);
t8=(C_word)C_a_i_list(&a,2,lf[30],t7);
t9=(C_word)C_a_i_list(&a,4,lf[192],t4,t6,t8);
t10=(C_word)C_a_i_list(&a,1,lf[382]);
t11=(C_word)C_a_i_list(&a,2,lf[10],t10);
t12=(C_word)C_a_i_list(&a,1,lf[385]);
t13=(C_word)C_a_i_list(&a,1,lf[376]);
t14=(C_word)C_a_i_list(&a,1,lf[383]);
t15=(C_word)C_a_i_list(&a,2,lf[10],t14);
t16=(C_word)C_a_i_list(&a,1,lf[386]);
t17=(C_word)C_a_i_list(&a,2,lf[30],t16);
t18=(C_word)C_a_i_list(&a,4,lf[192],t13,t15,t17);
t19=(C_word)C_a_i_list(&a,1,lf[385]);
t20=(C_word)C_a_i_list(&a,2,lf[10],t19);
t21=(C_word)C_a_i_list(&a,5,lf[11],lf[370],t20,lf[387],lf[388]);
t22=(C_word)C_a_i_list(&a,4,lf[12],t12,t18,t21);
t23=(C_word)C_a_i_list(&a,5,lf[11],lf[374],t11,lf[389],t22);
t24=(C_word)C_a_i_list(&a,4,lf[12],t3,t9,t23);
t25=(C_word)C_a_i_list(&a,11,lf[383],lf[382],lf[385],lf[376],lf[384],lf[386],lf[389],lf[387],lf[374],lf[370],lf[388]);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9176,a[2]=lf[393],tmp=(C_word)a,a+=3,tmp);
t27=(C_word)C_a_i_list(&a,3,t24,t25,t26);
t28=(C_word)C_a_i_list(&a,1,lf[369]);
t29=(C_word)C_a_i_list(&a,1,lf[376]);
t30=(C_word)C_a_i_list(&a,1,lf[383]);
t31=(C_word)C_a_i_list(&a,2,lf[10],t30);
t32=(C_word)C_a_i_list(&a,1,lf[394]);
t33=(C_word)C_a_i_list(&a,2,lf[30],t32);
t34=(C_word)C_a_i_list(&a,4,lf[192],t29,t31,t33);
t35=(C_word)C_a_i_list(&a,1,lf[369]);
t36=(C_word)C_a_i_list(&a,2,lf[10],t35);
t37=(C_word)C_a_i_list(&a,1,lf[395]);
t38=(C_word)C_a_i_list(&a,1,lf[383]);
t39=(C_word)C_a_i_list(&a,2,lf[10],t38);
t40=(C_word)C_a_i_cons(&a,2,t39,lf[396]);
t41=(C_word)C_a_i_cons(&a,2,t37,t40);
t42=(C_word)C_a_i_cons(&a,2,lf[18],t41);
t43=(C_word)C_a_i_list(&a,5,lf[11],lf[397],t36,lf[398],t42);
t44=(C_word)C_a_i_list(&a,4,lf[12],t28,t34,t43);
t45=(C_word)C_a_i_list(&a,8,lf[369],lf[376],lf[383],lf[394],lf[397],lf[398],lf[395],lf[396]);
t46=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_9054,a[2]=lf[399],tmp=(C_word)a,a+=3,tmp);
t47=(C_word)C_a_i_list(&a,3,t44,t45,t46);
t48=(C_word)C_a_i_list(&a,1,lf[382]);
t49=(C_word)C_a_i_list(&a,2,lf[92],C_SCHEME_END_OF_LIST);
t50=(C_word)C_a_i_list(&a,4,lf[12],t48,t49,lf[400]);
t51=(C_word)C_a_i_list(&a,2,lf[382],lf[400]);
t52=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8786,a[2]=lf[405],tmp=(C_word)a,a+=3,tmp);
t53=(C_word)C_a_i_list(&a,3,t50,t51,t52);
t54=(C_word)C_a_i_list(&a,1,lf[369]);
t55=(C_word)C_a_i_list(&a,1,lf[376]);
t56=(C_word)C_a_i_cons(&a,2,t55,lf[406]);
t57=(C_word)C_a_i_cons(&a,2,lf[192],t56);
t58=(C_word)C_a_i_list(&a,1,lf[369]);
t59=(C_word)C_a_i_list(&a,2,lf[10],t58);
t60=(C_word)C_a_i_list(&a,5,lf[11],lf[397],t59,lf[94],lf[371]);
t61=(C_word)C_a_i_list(&a,4,lf[12],t54,t57,t60);
t62=(C_word)C_a_i_list(&a,6,lf[369],lf[376],lf[406],lf[397],lf[94],lf[371]);
t63=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8710,a[2]=lf[407],tmp=(C_word)a,a+=3,tmp);
t64=(C_word)C_a_i_list(&a,3,t61,t62,t63);
/* optimizer.scm: 562  register-simplifications */
t65=C_retrieve(lf[156]);
((C_proc7)C_retrieve_proc(t65))(7,t65,t2,lf[12],t27,t47,t53,t64);}

/* a8709 in k3575 in k1633 */
static void C_ccall f_8710(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word ab[8],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_8710,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
if(C_truep((C_word)C_i_equalp(t4,C_retrieve(lf[390])))){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}
else{
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8744,a[2]=t1,a[3]=t8,a[4]=t7,a[5]=t5,a[6]=t4,a[7]=t6,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 697  ##compiler#get */
t10=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t10))(5,t10,t9,t2,t3,lf[99]);}}

/* k8742 in a8709 in k3575 in k1633 */
static void C_ccall f_8744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8744,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=((C_word*)t0)[7];
t5=(C_word)C_a_i_list(&a,1,((C_word*)t0)[6]);
t6=((C_word*)t0)[5];
t7=(C_word)C_a_i_record(&a,4,lf[47],lf[192],t5,t6);
t8=(C_word)C_a_i_list(&a,3,t7,((C_word*)t0)[4],((C_word*)t0)[3]);
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_record(&a,4,lf[47],lf[11],t4,t8));}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* a8785 in k3575 in k1633 */
static void C_ccall f_8786(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8786,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_list(&a,1,t3);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8796,a[2]=t2,a[3]=t7,a[4]=lf[404],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_8796(t9,t1,t5,t4);}

/* loop1 in a8785 in k3575 in k1633 */
static void C_fcall f_8796(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(10);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8796,NULL,4,t0,t1,t2,t3);}
t4=t3;
t5=(C_word)C_slot(t4,C_fix(1));
t6=t3;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t3;
t9=(C_word)C_slot(t8,C_fix(3));
t10=(C_word)C_eqp(t5,lf[12]);
if(C_truep(t10)){
t11=(C_word)C_i_cdr(t7);
if(C_truep((C_word)C_i_nullp(t11))){
t12=(C_word)C_i_car(t9);
t13=(C_word)C_slot(t12,C_fix(2));
t14=(C_word)C_slot(t12,C_fix(3));
t15=(C_word)C_slot(t12,C_fix(1));
t16=(C_word)C_eqp(t15,lf[92]);
if(C_truep(t16)){
t17=(C_word)C_i_car(t7);
t18=(C_word)C_a_i_cons(&a,2,t17,t2);
t19=(C_word)C_i_cadr(t9);
/* optimizer.scm: 643  loop1 */
t23=t1;
t24=t18;
t25=t19;
t1=t23;
t2=t24;
t3=t25;
goto loop;}
else{
t17=(C_word)C_eqp(t15,lf[16]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8860,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t9,a[5]=t14,a[6]=t13,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 645  reverse */
t19=*((C_word*)lf[150]+1);
((C_proc3)C_retrieve_proc(t19))(3,t19,t18,t2);}
else{
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,C_SCHEME_FALSE);}}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}

/* k8858 in loop1 in a8785 in k3575 in k1633 */
static void C_ccall f_8860(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8860,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(t1))){
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_i_car(t1);
t4=(C_word)C_eqp(t2,t3);
if(C_truep(t4)){
t5=(C_word)C_i_car(((C_word*)t0)[5]);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_i_cdr(t1);
t8=(C_word)C_i_cadr(((C_word*)t0)[4]);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8889,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t10,a[5]=lf[403],tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_8889(t12,((C_word*)t0)[2],t6,t7,t8);}
else{
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* loop2 in k8858 in loop1 in a8785 in k3575 in k1633 */
static void C_fcall f_8889(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8889,NULL,5,t0,t1,t2,t3,t4);}
t5=t4;
t6=(C_word)C_slot(t5,C_fix(1));
t7=t4;
t8=(C_word)C_slot(t7,C_fix(2));
t9=t4;
t10=(C_word)C_slot(t9,C_fix(3));
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8905,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=t2,a[8]=t10,tmp=(C_word)a,a+=9,tmp);
t12=(C_word)C_eqp(t6,lf[12]);
if(C_truep(t12)){
t13=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t13))){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_9012,a[2]=t10,a[3]=t3,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
t15=(C_word)C_i_car(t8);
/* optimizer.scm: 656  ##compiler#get */
t16=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t16))(5,t16,t14,((C_word*)t0)[2],t15,lf[99]);}
else{
t14=t11;
f_8905(t14,C_SCHEME_FALSE);}}
else{
t13=t11;
f_8905(t13,C_SCHEME_FALSE);}}

/* k9010 in loop2 in k8858 in loop1 in a8785 in k3575 in k1633 */
static void C_ccall f_9012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_8905(t2,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t2=(C_word)C_i_car(((C_word*)t0)[2]);
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_eqp(lf[16],t3);
if(C_truep(t4)){
t5=(C_word)C_i_car(((C_word*)t0)[3]);
t6=(C_word)C_i_car(((C_word*)t0)[2]);
t7=(C_word)C_slot(t6,C_fix(2));
t8=(C_word)C_i_car(t7);
t9=((C_word*)t0)[4];
f_8905(t9,(C_word)C_eqp(t5,t8));}
else{
t5=((C_word*)t0)[4];
f_8905(t5,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
f_8905(t2,C_SCHEME_FALSE);}}}

/* k8903 in loop2 in k8858 in loop1 in a8785 in k3575 in k1633 */
static void C_fcall f_8905(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8905,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[8]);
t3=(C_word)C_slot(t2,C_fix(3));
t4=(C_word)C_i_car(t3);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[7]);
t6=(C_word)C_i_cdr(((C_word*)t0)[6]);
t7=(C_word)C_i_cadr(((C_word*)t0)[8]);
/* optimizer.scm: 660  loop2 */
t8=((C_word*)((C_word*)t0)[5])[1];
f_8889(t8,((C_word*)t0)[4],t5,t6,t7);}
else{
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[6]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8942,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=lf[401],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8952,a[2]=lf[402],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 664  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[4],t2,t3);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* a8951 in k8903 in loop2 in k8858 in loop1 in a8785 in k3575 in k1633 */
static void C_ccall f_8952(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8952,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t2:C_SCHEME_FALSE));}

/* a8941 in k8903 in loop2 in k8858 in loop1 in a8785 in k3575 in k1633 */
static void C_ccall f_8942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8950,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 665  reverse */
t3=*((C_word*)lf[150]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k8948 in a8941 in k8903 in loop2 in k8858 in loop1 in a8785 in k3575 in k1633 */
static void C_ccall f_8950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 665  ##compiler#reorganize-recursive-bindings */
t2=C_retrieve(lf[159]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a9053 in k3575 in k1633 */
static void C_ccall f_9054(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10){
C_word tmp;
C_word t11;
C_word t12;
C_word ab[10],*a=ab;
if(c!=11) C_bad_argc_2(c,11,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr11,(void*)f_9054,11,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10);}
if(C_truep((C_word)C_i_equalp(t4,C_retrieve(lf[390])))){
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9067,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=t6,a[6]=t10,a[7]=t8,a[8]=t1,a[9]=t9,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 609  ##compiler#immediate? */
t12=C_retrieve(lf[392]);
((C_proc3)C_retrieve_proc(t12))(3,t12,t11,t6);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_FALSE);}}

/* k9065 in a9053 in k3575 in k1633 */
static void C_ccall f_9067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9067,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9102,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 610  ##compiler#get */
t3=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[99]);}
else{
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9100 in k9065 in a9053 in k3575 in k1633 */
static void C_ccall f_9102(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_9102,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(C_word)C_fixnum_increase(((C_word*)t0)[7]);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9079,a[2]=t5,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9086,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 614  ##compiler#varnode */
t8=C_retrieve(lf[66]);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k9084 in k9100 in k9065 in a9053 in k3575 in k1633 */
static void C_ccall f_9086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9086,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_9090,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 615  ##compiler#qnode */
t3=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k9088 in k9084 in k9100 in k9065 in a9053 in k3575 in k1633 */
static void C_ccall f_9090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 614  cons* */
t2=C_retrieve(lf[213]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k9077 in k9100 in k9065 in a9053 in k3575 in k1633 */
static void C_ccall f_9079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9079,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[47],lf[18],((C_word*)t0)[2],t1));}

/* a9175 in k3575 in k1633 */
static void C_ccall f_9176(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9,C_word t10,C_word t11,C_word t12,C_word t13){
C_word tmp;
C_word t14;
C_word t15;
C_word ab[12],*a=ab;
if(c!=14) C_bad_argc_2(c,14,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr14,(void*)f_9176,14,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9,t10,t11,t12,t13);}
if(C_truep((C_word)C_i_equalp(t6,C_retrieve(lf[390])))){
t14=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9189,a[2]=t4,a[3]=t5,a[4]=t2,a[5]=t3,a[6]=t7,a[7]=t8,a[8]=t1,a[9]=t13,a[10]=t10,a[11]=t9,tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm: 582  ##compiler#immediate? */
t15=C_retrieve(lf[392]);
((C_proc3)C_retrieve_proc(t15))(3,t15,t14,t7);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}

/* k9187 in a9175 in k3575 in k1633 */
static void C_ccall f_9189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9189,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_9195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm: 583  ##compiler#immediate? */
t3=C_retrieve(lf[392]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}
else{
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9193 in k9187 in a9175 in k3575 in k1633 */
static void C_ccall f_9195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9195,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9241,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 584  ##compiler#get */
t3=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[99]);}
else{
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k9239 in k9193 in k9187 in a9175 in k3575 in k1633 */
static void C_ccall f_9241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9241,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_9233,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 585  ##compiler#get */
t5=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[3],((C_word*)t0)[2],lf[99]);}
else{
t4=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k9231 in k9239 in k9193 in k9187 in a9175 in k3575 in k1633 */
static void C_ccall f_9233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9233,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9217,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 589  ##compiler#varnode */
t5=C_retrieve(lf[66]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[2]);}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k9215 in k9231 in k9239 in k9193 in k9187 in a9175 in k3575 in k1633 */
static void C_ccall f_9217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9221,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 590  ##compiler#qnode */
t3=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k9219 in k9215 in k9231 in k9239 in k9193 in k9187 in a9175 in k3575 in k1633 */
static void C_ccall f_9221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9221,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9225,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 592  ##compiler#qnode */
t3=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k9223 in k9219 in k9215 in k9231 in k9239 in k9193 in k9187 in a9175 in k3575 in k1633 */
static void C_ccall f_9225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9225,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,6,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[18],lf[391],t2));}

/* k3578 in k3575 in k1633 */
static void C_ccall f_3580(C_word c,C_word t0,C_word t1){
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
C_word ab[162],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3580,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3583,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_a_i_list(&a,1,lf[369]);
t4=(C_word)C_a_i_list(&a,2,lf[10],t3);
t5=(C_word)C_a_i_list(&a,4,lf[15],lf[370],t4,lf[371]);
t6=(C_word)C_a_i_list(&a,1,lf[369]);
t7=(C_word)C_a_i_list(&a,2,lf[10],t6);
t8=(C_word)C_a_i_list(&a,4,lf[15],lf[372],t7,lf[373]);
t9=(C_word)C_a_i_list(&a,5,lf[11],lf[374],lf[94],t5,t8);
t10=(C_word)C_a_i_list(&a,7,lf[374],lf[370],lf[372],lf[94],lf[371],lf[373],lf[369]);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8639,a[2]=lf[375],tmp=(C_word)a,a+=3,tmp);
t12=(C_word)C_a_i_list(&a,3,t9,t10,t11);
t13=(C_word)C_a_i_list(&a,1,lf[376]);
t14=(C_word)C_a_i_list(&a,1,lf[377]);
t15=(C_word)C_a_i_list(&a,2,lf[30],t14);
t16=(C_word)C_a_i_list(&a,4,lf[192],t13,lf[94],t15);
t17=(C_word)C_a_i_list(&a,5,lf[11],lf[374],t16,lf[371],lf[373]);
t18=(C_word)C_a_i_list(&a,6,lf[374],lf[376],lf[94],lf[377],lf[371],lf[373]);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8528,a[2]=lf[381],tmp=(C_word)a,a+=3,tmp);
t20=(C_word)C_a_i_list(&a,3,t17,t18,t19);
/* optimizer.scm: 704  register-simplifications */
t21=C_retrieve(lf[156]);
((C_proc5)C_retrieve_proc(t21))(5,t21,t2,lf[11],t12,t20);}

/* a8527 in k3578 in k3575 in k1633 */
static void C_ccall f_8528(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[9],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_8528,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(C_word)C_i_assoc(t4,C_retrieve(lf[378]));
if(C_truep(t9)){
if(C_truep((C_word)C_i_listp(t6))){
t10=(C_word)C_i_length(t6);
t11=C_retrieve(lf[379]);
if(C_truep((C_word)C_fixnum_lessp(t10,t11))){
t12=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8550,a[2]=t6,a[3]=t1,a[4]=t5,a[5]=t8,a[6]=t7,a[7]=t3,a[8]=t9,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 735  gensym */
t13=C_retrieve(lf[105]);
((C_proc2)C_retrieve_proc(t13))(2,t13,t12);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k8548 in a8527 in k3578 in k3575 in k1633 */
static void C_ccall f_8550(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8550,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[8]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_list(&a,1,t1);
t5=((C_word*)t0)[7];
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8573,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t5,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8575,a[2]=t1,a[3]=t3,a[4]=lf[380],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8605,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 752  ##compiler#qnode */
t9=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,C_SCHEME_FALSE);}

/* k8603 in k8548 in a8527 in k3578 in k3575 in k1633 */
static void C_ccall f_8605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 744  fold-right */
t2=C_retrieve(lf[165]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a8574 in k8548 in a8527 in k3578 in k3575 in k1633 */
static void C_ccall f_8575(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8575,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8597,a[2]=t2,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 749  ##compiler#varnode */
t5=C_retrieve(lf[66]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[2]);}

/* k8595 in a8574 in k8548 in a8527 in k3578 in k3575 in k1633 */
static void C_ccall f_8597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8597,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8601,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 749  ##compiler#qnode */
t3=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k8599 in k8595 in a8574 in k8548 in a8527 in k3578 in k3575 in k1633 */
static void C_ccall f_8601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8601,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_record(&a,4,lf[47],lf[192],((C_word*)t0)[4],t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8593,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 750  ##compiler#qnode */
t5=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,C_SCHEME_TRUE);}

/* k8591 in k8599 in k8595 in a8574 in k8548 in a8527 in k3578 in k3575 in k1633 */
static void C_ccall f_8593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8593,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,((C_word*)t0)[4],t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[17],C_SCHEME_END_OF_LIST,t2));}

/* k8571 in k8548 in a8527 in k3578 in k3575 in k1633 */
static void C_ccall f_8573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8573,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,t1,((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(C_word)C_a_i_record(&a,4,lf[47],lf[11],((C_word*)t0)[5],t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[47],lf[12],((C_word*)t0)[2],t4));}

/* a8638 in k3578 in k3575 in k1633 */
static void C_ccall f_8639(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8,C_word t9){
C_word tmp;
C_word t10;
C_word t11;
C_word ab[7],*a=ab;
if(c!=10) C_bad_argc_2(c,10,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr10,(void*)f_8639,10,t0,t1,t2,t3,t4,t5,t6,t7,t8,t9);}
if(C_truep(C_retrieve(lf[191]))){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8653,a[2]=t4,a[3]=t1,a[4]=t8,a[5]=t7,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 720  ##compiler#varnode */
t11=C_retrieve(lf[66]);
((C_proc3)C_retrieve_proc(t11))(3,t11,t10,t9);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}

/* k8651 in a8638 in k3578 in k3575 in k1633 */
static void C_ccall f_8653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8653,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(C_word)C_a_i_record(&a,4,lf[47],lf[17],C_SCHEME_END_OF_LIST,t2);
t4=(C_word)C_a_i_list(&a,2,t1,t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[47],lf[15],((C_word*)t0)[2],t4));}

/* k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3583,2,t0,t1);}
t2=C_mutate((C_word*)lf[159]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3585,a[2]=lf[185],tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3911,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 847  make-vector */
t4=*((C_word*)lf[368]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_fix(301),C_SCHEME_END_OF_LIST);}

/* k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3911,2,t0,t1);}
t2=C_mutate((C_word*)lf[186]+1,t1);
t3=C_mutate((C_word*)lf[187]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3913,a[2]=lf[188],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[189]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3933,a[2]=lf[240],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[241]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5733,a[2]=lf[289],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[290]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6868,a[2]=lf[367],tmp=(C_word)a,a+=3,tmp));
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_UNDEFINED);}

/* ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6868(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[53],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6868,4,t0,t1,t2,t3);}
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6871,a[2]=t3,a[3]=t5,a[4]=lf[293],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6971,a[2]=t3,a[3]=lf[301],tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7168,a[2]=t3,a[3]=lf[308],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7267,a[2]=t2,a[3]=t5,a[4]=lf[314],tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7511,a[2]=t2,a[3]=lf[323],tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7730,a[2]=t3,a[3]=lf[335],tmp=(C_word)a,a+=4,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7931,a[2]=t3,a[3]=t2,a[4]=lf[342],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8181,a[2]=t2,a[3]=lf[344],tmp=(C_word)a,a+=4,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8268,a[2]=t2,a[3]=lf[347],tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8415,a[2]=t6,a[3]=t7,a[4]=t8,a[5]=t9,a[6]=t10,a[7]=t11,a[8]=t13,a[9]=t14,a[10]=t1,a[11]=t12,tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm: 1795 ##compiler#debugging */
t16=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t16))(4,t16,t15,lf[22],lf[366]);}

/* k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8415,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8418,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 1796 find-lifting-candidates */
t3=((C_word*)t0)[2];
f_6871(t3,t2);}

/* k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8418,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8421,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm: 1797 ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[22],lf[365]);}

/* k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8421,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8424,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 1798 build-call-graph */
t3=((C_word*)t0)[2];
f_6971(t3,t2,((C_word*)t0)[3]);}

/* k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8424(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8424,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8427,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm: 1799 ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[22],lf[364]);}

/* k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8427(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8427,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8430,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 1800 eliminate */
t3=((C_word*)t0)[4];
f_7168(t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8430,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8433,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8507,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1801 ##compiler#debugging */
t4=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[352],lf[363]);}

/* k8505 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm: 1801 pretty-print */
t2=C_retrieve(lf[351]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8433(2,t2,C_SCHEME_UNDEFINED);}}

/* k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8433,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8436,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 1802 ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[22],lf[362]);}

/* k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8439,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 1803 collect-accessibles */
t3=((C_word*)t0)[2];
f_7267(t3,t2,((C_word*)t0)[3]);}

/* k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8501,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1804 ##compiler#debugging */
t4=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[352],lf[361]);}

/* k8499 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm: 1804 pretty-print */
t2=C_retrieve(lf[351]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8442(2,t2,C_SCHEME_UNDEFINED);}}

/* k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8442,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8445,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 1805 ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[22],lf[360]);}

/* k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8445,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8448,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8498,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 1806 eliminate4 */
t4=((C_word*)t0)[3];
f_7511(t4,t3,((C_word*)t0)[2]);}

/* k8496 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8498,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7477,a[2]=t4,a[3]=lf[359],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_7477(t6,((C_word*)t0)[2],t1,t2);}

/* loop in k8496 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7477(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7477,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7481,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7495,a[2]=t2,a[3]=lf[358],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1600 filter */
t6=C_retrieve(lf[174]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,t5,t2);}

/* a7494 in loop in k8496 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7495(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7495,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7501,a[2]=((C_word*)t0)[2],a[3]=lf[357],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cddr(t2);
/* optimizer.scm: 1600 every */
t5=C_retrieve(lf[59]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t3,t4);}

/* a7500 in a7494 in loop in k8496 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7501(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7501,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_assq(t2,((C_word*)t0)[2]));}

/* k7479 in loop in k8496 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_i_length(t1);
t3=((C_word*)t0)[4];
t4=(C_word)C_eqp(t3,t2);
if(C_truep(t4)){
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}
else{
/* optimizer.scm: 1604 loop */
t5=((C_word*)((C_word*)t0)[2])[1];
f_7477(t5,((C_word*)t0)[3],t1,t2);}}

/* k8446 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8451,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8488,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8490,a[2]=t1,a[3]=lf[356],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1807 ##sys#make-promise */
t5=*((C_word*)lf[268]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t3,t4);}

/* a8489 in k8446 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8490,2,t0,t1);}
/* optimizer.scm: 1807 unzip1 */
t2=C_retrieve(lf[266]);
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* k8486 in k8446 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1807 ##compiler#debugging */
t2=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],lf[5],lf[355],t1);}

/* k8449 in k8446 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8451,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8454,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 1808 ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[22],lf[354]);}

/* k8452 in k8449 in k8446 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8454,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8457,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1809 compute-extra-variables */
t3=((C_word*)t0)[2];
f_7730(t3,t2,((C_word*)t0)[5]);}

/* k8455 in k8452 in k8449 in k8446 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8457,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8481,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1810 ##compiler#debugging */
t4=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[352],lf[353]);}

/* k8479 in k8455 in k8452 in k8449 in k8446 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm: 1810 pretty-print */
t2=C_retrieve(lf[351]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_8460(2,t2,C_SCHEME_UNDEFINED);}}

/* k8458 in k8455 in k8452 in k8449 in k8446 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8460,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8463,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 1811 ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[22],lf[350]);}

/* k8461 in k8458 in k8455 in k8452 in k8449 in k8446 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8463,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8466,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1812 extend-call-sites! */
t3=((C_word*)t0)[2];
f_8181(t3,t2,((C_word*)t0)[4]);}

/* k8464 in k8461 in k8458 in k8455 in k8452 in k8449 in k8446 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8466(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8466,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1813 ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[22],lf[349]);}

/* k8467 in k8464 in k8461 in k8458 in k8455 in k8452 in k8449 in k8446 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8469,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8472,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1814 remove-local-bindings! */
t3=((C_word*)t0)[2];
f_8268(t3,t2,((C_word*)t0)[4]);}

/* k8470 in k8467 in k8464 in k8461 in k8458 in k8455 in k8452 in k8449 in k8446 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8472(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8472,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8475,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1815 ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[22],lf[348]);}

/* k8473 in k8470 in k8467 in k8464 in k8461 in k8458 in k8455 in k8452 in k8449 in k8446 in k8443 in k8440 in k8437 in k8434 in k8431 in k8428 in k8425 in k8422 in k8419 in k8416 in k8413 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1816 reconstruct! */
t2=((C_word*)t0)[5];
f_7931(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* remove-local-bindings! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_8268(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8268,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8274,a[2]=t4,a[3]=t2,a[4]=lf[346],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8274(3,t6,t1,((C_word*)t0)[2]);}

/* walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8274(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word t16;
C_word t17;
C_word ab[13],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8274,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(3));
t9=(C_word)C_eqp(t4,lf[12]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8293,a[2]=t8,a[3]=t6,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t11=t2;
t12=(C_word)C_slot(t11,C_fix(3));
/* for-each */
t13=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t10,((C_word*)((C_word*)t0)[2])[1],t12);}
else{
t10=(C_word)C_eqp(t4,lf[16]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8386,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t12=t2;
t13=(C_word)C_slot(t12,C_fix(3));
/* for-each */
t14=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t11,((C_word*)((C_word*)t0)[2])[1],t13);}
else{
/* for-each */
t11=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,((C_word*)((C_word*)t0)[2])[1],t8);}}}

/* k8384 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8386(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8386,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_assq(t2,((C_word*)t0)[4]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8395,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1790 node-class-set! */
t4=C_retrieve(lf[252]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],lf[92]);}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k8393 in k8384 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8395,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8398,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1791 node-parameters-set! */
t3=C_retrieve(lf[142]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k8396 in k8393 in k8384 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1792 node-subexpressions-set! */
t2=C_retrieve(lf[141]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k8291 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8293,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8298,a[2]=((C_word*)t0)[5],a[3]=t7,a[4]=t5,a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=lf[345],tmp=(C_word)a,a+=8,tmp));
t9=((C_word*)t7)[1];
f_8298(t9,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* do1365 in k8291 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_8298(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8298,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep((C_word)C_i_nullp(((C_word*)((C_word*)t0)[6])[1]))){
t4=(C_word)C_i_car(t3);
/* optimizer.scm: 1780 ##compiler#copy-node! */
t5=C_retrieve(lf[243]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t4,((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8321,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8336,a[2]=((C_word*)t0)[5],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1782 reverse */
t6=*((C_word*)lf[150]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)((C_word*)t0)[6])[1]);}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8339,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_assq(t5,((C_word*)t0)[2]))){
t6=t4;
f_8339(t6,C_SCHEME_UNDEFINED);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_a_i_cons(&a,2,t6,((C_word*)((C_word*)t0)[6])[1]);
t8=C_mutate(((C_word *)((C_word*)t0)[6])+1,t7);
t9=(C_word)C_i_car(t3);
t10=(C_word)C_a_i_cons(&a,2,t9,((C_word*)((C_word*)t0)[4])[1]);
t11=C_mutate(((C_word *)((C_word*)t0)[4])+1,t10);
t12=t4;
f_8339(t12,t11);}}}

/* k8337 in do1365 in k8291 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_8339(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=((C_word*)((C_word*)t0)[3])[1];
f_8298(t4,((C_word*)t0)[2],t2,t3);}

/* k8334 in do1365 in k8291 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1782 node-parameters-set! */
t2=C_retrieve(lf[142]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8319 in do1365 in k8291 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8321,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8328,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8332,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1783 reverse */
t4=*((C_word*)lf[150]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k8330 in k8319 in do1365 in k8291 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1783 append */
t2=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k8326 in k8319 in do1365 in k8291 in walk in remove-local-bindings! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1783 node-subexpressions-set! */
t2=C_retrieve(lf[141]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* extend-call-sites! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_8181(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8181,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8187,a[2]=t2,a[3]=t4,a[4]=lf[343],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8187(3,t6,t1,((C_word*)t0)[2]);}

/* walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8187(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8187,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(3));
t9=(C_word)C_eqp(t4,lf[15]);
if(C_truep(t9)){
t10=(C_word)C_i_car(t8);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8209,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t12=(C_word)C_slot(t10,C_fix(1));
t13=(C_word)C_eqp(lf[10],t12);
if(C_truep(t13)){
t14=(C_word)C_slot(t10,C_fix(2));
t15=(C_word)C_i_car(t14);
t16=(C_word)C_i_assq(t15,((C_word*)t0)[2]);
if(C_truep(t16)){
t17=(C_word)C_i_set_car(t6,C_SCHEME_TRUE);
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8239,a[2]=t2,a[3]=t11,a[4]=t10,tmp=(C_word)a,a+=5,tmp);
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8243,a[2]=t18,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t20=(C_word)C_i_cdr(t16);
/* map */
t21=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t21+1)))(4,t21,t19,C_retrieve(lf[66]),t20);}
else{
t17=t11;
f_8209(2,t17,C_SCHEME_UNDEFINED);}}
else{
t14=t11;
f_8209(2,t14,C_SCHEME_UNDEFINED);}}
else{
/* for-each */
t10=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t1,((C_word*)((C_word*)t0)[3])[1],t8);}}

/* k8241 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 1762 append */
t3=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t1,t2);}

/* k8237 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8239,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* optimizer.scm: 1760 node-subexpressions-set! */
t3=C_retrieve(lf[141]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k8207 in walk in extend-call-sites! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=((C_word*)t0)[4];
t3=(C_word)C_slot(t2,C_fix(3));
/* for-each */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t3);}

/* reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7931(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7931,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7943,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7945,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=lf[341],tmp=(C_word)a,a+=5,tmp);
t6=((C_word*)t0)[3];
t7=(C_word)C_slot(t6,C_fix(3));
t8=(C_word)C_i_car(t7);
/* optimizer.scm: 1696 fold-right */
t9=C_retrieve(lf[165]);
((C_proc5)C_retrieve_proc(t9))(5,t9,t4,t5,t8,t2);}

/* a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7945(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7945,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7952,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1699 ##compiler#get */
t6=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,((C_word*)t0)[2],t4,lf[64]);}

/* k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7952(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7952,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],C_retrieve(lf[336]));
t3=C_mutate((C_word*)lf[336]+1,t2);
t4=(C_word)C_slot(t1,C_fix(2));
t5=(C_word)C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7965,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=lf[340],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1701 ##compiler#decompose-lambda-list */
t7=C_retrieve(lf[84]);
((C_proc4)C_retrieve_proc(t7))(4,t7,((C_word*)t0)[2],t5,t6);}

/* a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7965(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[10],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7965,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_assq(((C_word*)t0)[5],((C_word*)t0)[4]);
t6=(C_word)C_i_cdr(t5);
t7=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7972,a[2]=t2,a[3]=t4,a[4]=t3,a[5]=t6,a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[5],tmp=(C_word)a,a+=10,tmp);
/* map */
t8=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_retrieve(lf[105]),t6);}

/* k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7972,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7975,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 1706 map */
t3=*((C_word*)lf[183]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,*((C_word*)lf[184]+1),((C_word*)t0)[5],t1);}

/* k7973 in k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_slot(((C_word*)t0)[9],C_fix(3));
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8056,a[2]=t1,a[3]=lf[337],tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8071,a[2]=t5,a[3]=t7,a[4]=lf[339],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_8071(3,t9,t2,t4);}

/* walk in k7973 in k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8071(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word t21;
C_word t22;
C_word ab[29],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8071,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(3));
t9=(C_word)C_eqp(t4,lf[12]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8090,a[2]=t8,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8097,a[2]=t2,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
/* map */
t12=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,((C_word*)t0)[2],t6);}
else{
t10=(C_word)C_eqp(t4,lf[10]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8114,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t12=(C_word)C_i_car(t6);
/* optimizer.scm: 1735 rename */
t13=((C_word*)t0)[2];
f_8056(3,t13,t11,t12);}
else{
t11=(C_word)C_eqp(t4,lf[16]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8127,a[2]=t8,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8138,a[2]=t2,a[3]=t12,tmp=(C_word)a,a+=4,tmp);
t14=(C_word)C_i_car(t6);
/* optimizer.scm: 1737 rename */
t15=((C_word*)t0)[2];
f_8056(3,t15,t13,t14);}
else{
t12=(C_word)C_eqp(t4,lf[13]);
if(C_truep(t12)){
t13=(C_word)C_i_car(t6);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8157,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t8,a[5]=t6,a[6]=lf[338],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1740 ##compiler#decompose-lambda-list */
t15=C_retrieve(lf[84]);
((C_proc4)C_retrieve_proc(t15))(4,t15,t1,t13,t14);}
else{
/* for-each */
t13=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t1,((C_word*)((C_word*)t0)[3])[1],t8);}}}}}

/* a8156 in walk in k7973 in k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8157(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_8157,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8172,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8176,a[2]=t4,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* map */
t7=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[2],t2);}

/* k8174 in a8156 in walk in k7973 in k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1743 ##compiler#build-lambda-list */
t2=C_retrieve(lf[78]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8170 in a8156 in walk in k7973 in k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_set_car(((C_word*)t0)[5],t1);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* optimizer.scm: 1744 walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_8071(3,t4,((C_word*)t0)[2],t3);}

/* k8136 in walk in k7973 in k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8138,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* optimizer.scm: 1737 node-parameters-set! */
t3=C_retrieve(lf[142]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k8125 in walk in k7973 in k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* k8112 in walk in k7973 in k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8114,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* optimizer.scm: 1735 node-parameters-set! */
t3=C_retrieve(lf[142]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k8095 in walk in k7973 in k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8097(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1732 node-parameters-set! */
t2=C_retrieve(lf[142]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8088 in walk in k7973 in k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* rename in k7973 in k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8056(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8056,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?(C_word)C_i_cdr(t3):t2));}

/* k7976 in k7973 in k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8027,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 1709 gensym */
t3=C_retrieve(lf[105]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[106]);}

/* k8025 in k7976 in k7973 in k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8027,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[10]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8011,a[2]=t2,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t3,a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8015,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1715 append */
t6=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8013 in k8025 in k7976 in k7973 in k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_length(((C_word*)t0)[5]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],t2);
/* optimizer.scm: 1715 ##compiler#build-lambda-list */
t4=C_retrieve(lf[78]);
((C_proc5)C_retrieve_proc(t4))(5,t4,((C_word*)t0)[3],t1,t3,((C_word*)t0)[2]);}

/* k8009 in k8025 in k7976 in k7973 in k7970 in a7964 in k7950 in a7944 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_8011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8011,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_slot(((C_word*)t0)[6],C_fix(3));
t4=(C_word)C_a_i_record(&a,4,lf[47],lf[13],t2,t3);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_a_i_record(&a,4,lf[47],lf[16],((C_word*)t0)[5],t5);
t7=(C_word)C_a_i_list(&a,2,t6,((C_word*)t0)[4]);
t8=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_record(&a,4,lf[47],lf[12],((C_word*)t0)[2],t7));}

/* k7941 in reconstruct! in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7943(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7943,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* optimizer.scm: 1693 node-subexpressions-set! */
t3=C_retrieve(lf[141]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7730(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7730,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7795,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7917,a[2]=lf[334],tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t2);}

/* a7916 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7917(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7917,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cadr(t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,t3,t4));}

/* k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7795,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7797,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,a[6]=lf[329],tmp=(C_word)a,a+=7,tmp));
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7872,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* for-each */
t8=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,((C_word*)t5)[1],((C_word*)t0)[4]);}

/* k7870 in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7877,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=lf[333],tmp=(C_word)a,a+=5,tmp);
/* map */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a7876 in k7870 in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7877(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7877,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7915,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1682 ##compiler#get */
t5=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[2],t3,lf[64]);}

/* k7913 in a7876 in k7870 in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7915(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7915,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7737,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7739,a[2]=t6,a[3]=t3,a[4]=lf[332],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7739(3,t8,t4,t1);}

/* walk in k7913 in a7876 in k7870 in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7739(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7739,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(3));
t9=(C_word)C_eqp(t4,lf[12]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7759,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1658 append */
t11=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t11))(4,t11,t10,t6,((C_word*)((C_word*)t0)[3])[1]);}
else{
t10=(C_word)C_eqp(t4,lf[13]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t6);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7777,a[2]=((C_word*)t0)[2],a[3]=t8,a[4]=((C_word*)t0)[3],a[5]=lf[331],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1661 ##compiler#decompose-lambda-list */
t13=C_retrieve(lf[84]);
((C_proc4)C_retrieve_proc(t13))(4,t13,t1,t11,t12);}
else{
/* for-each */
t11=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,((C_word*)((C_word*)t0)[2])[1],t8);}}}

/* a7776 in walk in k7913 in a7876 in k7870 in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7777(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7777,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7782,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1664 append */
t6=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t2,((C_word*)((C_word*)t0)[4])[1]);}

/* k7780 in a7776 in walk in k7913 in a7876 in k7870 in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
t3=(C_word)C_i_car(((C_word*)t0)[4]);
/* optimizer.scm: 1665 walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7739(3,t4,((C_word*)t0)[2],t3);}

/* k7757 in walk in k7913 in a7876 in k7870 in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
/* for-each */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1],((C_word*)t0)[2]);}

/* k7735 in k7913 in a7876 in k7870 in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7737,2,t0,t1);}
t2=((C_word*)((C_word*)t0)[6])[1];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7891,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7893,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=lf[330],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7907,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* optimizer.scm: 1688 delete-duplicates */
t7=C_retrieve(lf[305]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t5,t6,*((C_word*)lf[44]+1));}

/* k7905 in k7735 in k7913 in a7876 in k7870 in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1684 remove */
t2=C_retrieve(lf[227]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a7892 in k7735 in k7913 in a7876 in k7870 in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7893(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7893,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)t0)[3]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:(C_word)C_i_memq(t2,((C_word*)t0)[2])));}

/* k7889 in k7735 in k7913 in a7876 in k7870 in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7891,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* walk in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7797(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7797,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7863,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7865,a[2]=t3,a[3]=lf[327],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1673 count */
t6=C_retrieve(lf[328]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)((C_word*)t0)[5])[1]);}

/* a7864 in walk in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7865(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7865,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_eqp(((C_word*)t0)[2],t2));}

/* k7861 in walk in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7863,2,t0,t1);}
if(C_truep((C_word)C_fixnum_greaterp(t1,C_fix(1)))){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=(C_word)C_i_cddr(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7817,a[2]=t4,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7851,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=lf[326],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t7=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t4);}}

/* a7850 in k7861 in walk in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7851(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7851,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)t0)[3]);
/* optimizer.scm: 1676 walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7797(3,t4,t1,t3);}

/* k7815 in k7861 in walk in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7817(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7817,2,t0,t1);}
t2=(C_word)C_i_assq(((C_word*)t0)[5],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7827,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7835,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7839,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7841,a[2]=((C_word*)t0)[4],a[3]=lf[325],tmp=(C_word)a,a+=4,tmp);
/* map */
t8=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,((C_word*)t0)[2]);}

/* a7840 in k7815 in k7861 in walk in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7841(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7841,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_cdr(t3));}

/* k7837 in k7815 in k7861 in walk in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1678 concatenate */
t2=C_retrieve(lf[324]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k7833 in k7815 in k7861 in walk in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1678 append */
t2=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7825 in k7815 in k7861 in walk in k7793 in compute-extra-variables in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7827(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_cdr(((C_word*)t0)[2],t1));}

/* eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7511(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7511,NULL,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7515,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7517,a[2]=t3,a[3]=t6,a[4]=lf[322],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7517(t8,t4,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* walk in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7517(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7517,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(1));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(3));
t10=(C_word)C_eqp(t5,lf[10]);
t11=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7536,a[2]=((C_word*)t0)[2],a[3]=t9,a[4]=t3,a[5]=t7,a[6]=((C_word*)t0)[3],a[7]=t5,a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t10)){
t12=t11;
f_7536(t12,t10);}
else{
t12=(C_word)C_eqp(t5,lf[30]);
if(C_truep(t12)){
t13=t11;
f_7536(t13,t12);}
else{
t13=(C_word)C_eqp(t5,lf[92]);
if(C_truep(t13)){
t14=t11;
f_7536(t14,t13);}
else{
t14=(C_word)C_eqp(t5,lf[312]);
t15=t11;
f_7536(t15,(C_truep(t14)?t14:(C_word)C_eqp(t5,lf[215])));}}}}

/* k7534 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7536(C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7536,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[7],lf[12]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7547,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=lf[315],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_7547(t6,((C_word*)t0)[8],((C_word*)t0)[5],((C_word*)t0)[3]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[7],lf[13]);
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7598,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=lf[316],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1623 ##compiler#decompose-lambda-list */
t6=C_retrieve(lf[84]);
((C_proc4)C_retrieve_proc(t6))(4,t6,((C_word*)t0)[8],t4,t5);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[7],lf[15]);
if(C_truep(t4)){
t5=(C_word)C_i_car(((C_word*)t0)[3]);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7622,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7633,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=lf[320],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1629 call-with-current-continuation */
t8=*((C_word*)lf[21]+1);
((C_proc3)C_retrieve_proc(t8))(3,t8,t6,t7);}
else{
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7703,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],a[4]=lf[321],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[8],t5,((C_word*)t0)[3]);}}}}}

/* a7702 in k7534 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7703(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7703,3,t0,t1,t2);}
/* optimizer.scm: 1644 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7517(t3,t1,t2,((C_word*)t0)[2]);}

/* a7632 in k7534 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7633(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7633,3,t0,t1,t2);}
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t4=(C_word)C_eqp(lf[10],t3);
if(C_truep(t4)){
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(C_word)C_slot(((C_word*)t0)[4],C_fix(2));
t8=(C_word)C_i_car(t7);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7649,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t10,a[5]=((C_word*)t0)[3],a[6]=t6,a[7]=lf[319],tmp=(C_word)a,a+=8,tmp));
t12=((C_word*)t10)[1];
f_7649(3,t12,t1,t8);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* loop in a7632 in k7534 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7649(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7649,3,t0,t1,t2);}
if(C_truep((C_word)C_i_memq(t2,((C_word*)((C_word*)t0)[6])[1]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[6])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t5=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[5])[1]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7669,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7679,a[2]=t5,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=t6,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_i_cadr(t5);
/* optimizer.scm: 1638 lset<= */
t9=C_retrieve(lf[170]);
((C_proc5)C_retrieve_proc(t9))(5,t9,t7,*((C_word*)lf[44]+1),t8,((C_word*)t0)[2]);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}}

/* k7677 in loop in a7632 in k7534 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7679,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
f_7669(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7683,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1640 delete! */
t3=C_retrieve(lf[318]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[2],((C_word*)((C_word*)t0)[4])[1],*((C_word*)lf[44]+1));}}

/* k7681 in k7677 in loop in a7632 in k7534 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[4])+1,t1);
/* optimizer.scm: 1641 return */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k7667 in loop in a7632 in k7534 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cddr(((C_word*)t0)[4]);
/* for-each */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t2);}

/* k7620 in k7534 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7622,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7627,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=lf[317],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a7626 in k7620 in k7534 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7627(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7627,3,t0,t1,t2);}
/* optimizer.scm: 1643 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7517(t3,t1,t2,((C_word*)t0)[2]);}

/* a7597 in k7534 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7598(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7598,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7610,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1626 append */
t7=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,t2,((C_word*)t0)[2]);}

/* k7608 in a7597 in k7534 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1626 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_7517(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k7534 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7547(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7547,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7565,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1618 append */
t6=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7568,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t3);
/* optimizer.scm: 1620 walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_7517(t6,t4,t5,((C_word*)t0)[3]);}}

/* k7566 in loop in k7534 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm: 1621 loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7547(t4,((C_word*)t0)[2],t2,t3);}

/* k7563 in loop in k7534 in walk in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1618 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_7517(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7513 in eliminate4 in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* collect-accessibles in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7267(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7267,NULL,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7271,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7273,a[2]=t4,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t7,a[6]=lf[313],tmp=(C_word)a,a+=7,tmp));
t9=((C_word*)t7)[1];
f_7273(t9,t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7273(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7273,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(1));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(3));
t10=(C_word)C_eqp(t5,lf[10]);
t11=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_7292,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t2,a[6]=t9,a[7]=t3,a[8]=t7,a[9]=((C_word*)t0)[5],a[10]=t5,a[11]=t1,tmp=(C_word)a,a+=12,tmp);
if(C_truep(t10)){
t12=t11;
f_7292(t12,t10);}
else{
t12=(C_word)C_eqp(t5,lf[30]);
if(C_truep(t12)){
t13=t11;
f_7292(t13,t12);}
else{
t13=(C_word)C_eqp(t5,lf[92]);
if(C_truep(t13)){
t14=t11;
f_7292(t14,t13);}
else{
t14=(C_word)C_eqp(t5,lf[312]);
t15=t11;
f_7292(t15,(C_truep(t14)?t14:(C_word)C_eqp(t5,lf[215])));}}}}

/* k7290 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7292(C_word t0,C_word t1){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7292,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[11];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[10],lf[12]);
if(C_truep(t2)){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7303,a[2]=t4,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=lf[309],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_7303(t6,((C_word*)t0)[11],((C_word*)t0)[8],((C_word*)t0)[6]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[10],lf[13]);
if(C_truep(t3)){
t4=(C_word)C_i_assq(((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7351,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t4)){
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_assq(t6,((C_word*)t0)[3]))){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7385,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_i_cdr(t4);
/* optimizer.scm: 1575 alist-cons */
t9=C_retrieve(lf[33]);
((C_proc5)C_retrieve_proc(t9))(5,t9,t7,t8,((C_word*)t0)[7],((C_word*)((C_word*)t0)[2])[1]);}
else{
t7=t5;
f_7351(t7,C_SCHEME_UNDEFINED);}}
else{
t6=t5;
f_7351(t6,C_SCHEME_UNDEFINED);}}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7394,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[9],a[4]=lf[311],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[11],t4,((C_word*)t0)[6]);}}}}

/* a7393 in k7290 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7394(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7394,3,t0,t1,t2);}
/* optimizer.scm: 1581 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7273(t3,t1,t2,((C_word*)t0)[2]);}

/* k7383 in k7290 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_7351(t3,t2);}

/* k7349 in k7290 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7351(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7351,NULL,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7360,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=lf[310],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1576 ##compiler#decompose-lambda-list */
t4=C_retrieve(lf[84]);
((C_proc4)C_retrieve_proc(t4))(4,t4,((C_word*)t0)[2],t2,t3);}

/* a7359 in k7349 in k7290 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7360(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7360,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7372,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1579 append */
t7=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,t2,((C_word*)t0)[2]);}

/* k7370 in a7359 in k7349 in k7290 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7372(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1579 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_7273(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k7290 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7303(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7303,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7321,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1566 append */
t6=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7324,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t3);
/* optimizer.scm: 1568 walk */
t6=((C_word*)((C_word*)t0)[5])[1];
f_7273(t6,t4,t5,((C_word*)t0)[3]);}}

/* k7322 in loop in k7290 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7324(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm: 1569 loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7303(t4,((C_word*)t0)[2],t2,t3);}

/* k7319 in loop in k7290 in walk in collect-accessibles in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1566 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_7273(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7269 in collect-accessibles in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* eliminate in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7168(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7168,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7174,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=lf[307],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1536 remove */
t5=C_retrieve(lf[227]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t4,t3);}

/* a7173 in eliminate in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7174(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7174,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7208,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_i_car(t2);
t5=((C_word*)t0)[2];
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7218,a[2]=t4,a[3]=t3,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1546 unzip1 */
t7=C_retrieve(lf[266]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t5);}

/* k7216 in a7173 in eliminate in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7218(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7218,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7223,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=lf[306],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_7223(t5,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* count in k7216 in a7173 in eliminate in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7223(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7223,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_assq(t2,((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7230,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_cddr(t4);
/* optimizer.scm: 1549 lset-difference */
t7=C_retrieve(lf[251]);
((C_proc6)C_retrieve_proc(t7))(6,t7,t5,*((C_word*)lf[44]+1),t6,t3,((C_word*)t0)[2]);}

/* k7228 in count in k7216 in a7173 in eliminate in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7230,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7257,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm: 1550 delete-duplicates */
t4=C_retrieve(lf[305]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,*((C_word*)lf[44]+1));}

/* k7255 in k7228 in count in k7216 in a7173 in eliminate in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7257,2,t0,t1);}
t2=(C_word)C_i_length(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7253,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1551 append */
t4=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k7251 in k7255 in k7228 in count in k7216 in a7173 in eliminate in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7253,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7243,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7245,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=lf[304],tmp=(C_word)a,a+=5,tmp);
/* map */
t5=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a7244 in k7251 in k7255 in k7228 in count in k7216 in a7173 in eliminate in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7245(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7245,3,t0,t1,t2);}
/* optimizer.scm: 1552 count */
t3=((C_word*)((C_word*)t0)[3])[1];
f_7223(t3,t1,t2,((C_word*)t0)[2]);}

/* k7241 in k7251 in k7255 in k7228 in count in k7216 in a7173 in eliminate in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1552 fold */
t2=C_retrieve(lf[168]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],*((C_word*)lf[303]+1),((C_word*)t0)[2],t1);}

/* k7206 in a7173 in eliminate in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7208,2,t0,t1);}
t2=(C_word)C_fixnum_greaterp(t1,C_fix(16));
if(C_truep(t2)){
t3=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7186,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[302],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm: 1539 any */
t5=C_retrieve(lf[39]);
((C_proc4)C_retrieve_proc(t5))(4,t5,((C_word*)t0)[5],t3,t4);}}

/* a7185 in k7206 in a7173 in eliminate in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7186(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7186,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7193,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1540 ##compiler#get */
t4=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[2],t2,lf[98]);}

/* k7191 in a7185 in k7206 in a7173 in eliminate in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_assq(((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_not(t2));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_6971(C_word t0,C_word t1,C_word t2){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6971,NULL,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6974,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t8,a[5]=t2,a[6]=t10,a[7]=lf[298],tmp=(C_word)a,a+=8,tmp));
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7123,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7125,a[2]=t10,a[3]=t4,a[4]=t8,a[5]=t6,a[6]=lf[300],tmp=(C_word)a,a+=7,tmp);
/* for-each */
t14=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t14+1)))(4,t14,t12,t13,t2);}

/* a7124 in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7125(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7125,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_slot(t4,C_fix(2));
t6=(C_word)C_i_car(t5);
t7=C_set_block_item(((C_word*)t0)[5],0,C_SCHEME_END_OF_LIST);
t8=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_END_OF_LIST);
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7140,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7150,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=lf[299],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1525 ##compiler#decompose-lambda-list */
t11=C_retrieve(lf[84]);
((C_proc4)C_retrieve_proc(t11))(4,t11,t9,t6,t10);}

/* a7149 in a7124 in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7150(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7150,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_slot(((C_word*)t0)[3],C_fix(3));
t6=(C_word)C_i_car(t5);
/* optimizer.scm: 1528 walk */
t7=((C_word*)((C_word*)t0)[2])[1];
f_6974(t7,t1,t6,t2);}

/* k7138 in a7124 in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7144,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)((C_word*)t0)[4])[1],((C_word*)((C_word*)t0)[3])[1]);
/* optimizer.scm: 1529 alist-cons */
t4=C_retrieve(lf[33]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,((C_word*)t0)[2],t3,((C_word*)((C_word*)t0)[6])[1]);}

/* k7142 in k7138 in a7124 in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k7121 in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* walk in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_6974(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6974,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(1));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(3));
t10=(C_word)C_eqp(t5,lf[10]);
t11=(C_truep(t10)?t10:(C_word)C_eqp(t5,lf[16]));
if(C_truep(t11)){
t12=(C_word)C_i_car(t7);
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6999,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t12,a[5]=t9,a[6]=t1,a[7]=t3,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t14=(C_word)C_i_memq(t12,t3);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7024,a[2]=((C_word*)t0)[3],a[3]=t12,a[4]=t13,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t14)){
t16=t15;
f_7024(2,t16,t14);}
else{
/* optimizer.scm: 1501 ##compiler#get */
t16=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t16))(5,t16,t15,((C_word*)t0)[2],t12,lf[124]);}}
else{
t12=(C_word)C_eqp(t5,lf[12]);
if(C_truep(t12)){
t13=C_SCHEME_UNDEFINED;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_set_block_item(t14,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7042,a[2]=t14,a[3]=t3,a[4]=t7,a[5]=((C_word*)t0)[6],a[6]=lf[295],tmp=(C_word)a,a+=7,tmp));
t16=((C_word*)t14)[1];
f_7042(t16,t1,t7,t9);}
else{
t13=(C_word)C_eqp(t5,lf[13]);
if(C_truep(t13)){
t14=(C_word)C_i_car(t7);
t15=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7096,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=t9,a[5]=lf[296],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1513 ##compiler#decompose-lambda-list */
t16=C_retrieve(lf[84]);
((C_proc4)C_retrieve_proc(t16))(4,t16,t1,t14,t15);}
else{
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7113,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=lf[297],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t15=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,t14,t9);}}}}

/* a7112 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7113(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7113,3,t0,t1,t2);}
/* optimizer.scm: 1516 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6974(t3,t1,t2,((C_word*)t0)[2]);}

/* a7095 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7096(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_7096,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[4]);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7108,a[2]=t5,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1515 append */
t7=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,t2,((C_word*)t0)[2]);}

/* k7106 in a7095 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1515 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_6974(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7042(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7042,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=(C_word)C_i_car(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7060,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1508 append */
t6=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7066,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_car(t3);
/* optimizer.scm: 1510 walk */
t7=((C_word*)((C_word*)t0)[5])[1];
f_6974(t7,t5,t6,((C_word*)t0)[3]);}}

/* k7064 in loop in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm: 1511 loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7042(t4,((C_word*)t0)[2],t2,t3);}

/* k7058 in loop in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1508 walk */
t2=((C_word*)((C_word*)t0)[4])[1];
f_6974(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7022 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7024(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7024,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_6999(t2,C_SCHEME_UNDEFINED);}
else{
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
t4=((C_word*)t0)[4];
f_6999(t4,t3);}}

/* k6997 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_6999(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6999,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7002,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_assq(((C_word*)t0)[4],((C_word*)t0)[3]))){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t2;
f_7002(t5,t4);}
else{
t3=t2;
f_7002(t3,C_SCHEME_UNDEFINED);}}

/* k7000 in k6997 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_7002(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7002,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7007,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=lf[294],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a7006 in k7000 in k6997 in walk in build-call-graph in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_7007(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7007,3,t0,t1,t2);}
/* optimizer.scm: 1504 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6974(t3,t1,t2,((C_word*)t0)[2]);}

/* find-lifting-candidates in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_6871(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6871,NULL,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6875,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6877,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=lf[291],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1472 ##sys#hash-table-for-each */
t6=C_retrieve(lf[292]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)t0)[2]);}

/* a6876 in find-lifting-candidates in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6877(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[7],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6877,4,t0,t1,t2,t3);}
t4=(C_word)C_i_assq(lf[64],t3);
if(C_truep(t4)){
t5=(C_word)C_i_assq(lf[99],t3);
if(C_truep(t5)){
t6=(C_word)C_i_assq(lf[147],t3);
if(C_truep(t6)){
t7=(C_word)C_i_cdr(t5);
t8=(C_word)C_i_length(t7);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6908,a[2]=t2,a[3]=t4,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_assq(lf[100],t3))){
t10=t9;
f_6908(t10,C_SCHEME_FALSE);}
else{
t10=(C_word)C_i_cdr(t4);
t11=(C_word)C_slot(t10,C_fix(1));
t12=(C_word)C_eqp(lf[13],t11);
if(C_truep(t12)){
if(C_truep((C_word)C_i_assq(lf[124],t3))){
t13=t9;
f_6908(t13,C_SCHEME_FALSE);}
else{
t13=(C_word)C_i_cdr(t6);
t14=(C_word)C_i_length(t13);
t15=t9;
f_6908(t15,(C_word)C_eqp(t8,t14));}}
else{
t13=t9;
f_6908(t13,C_SCHEME_FALSE);}}}
else{
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_FALSE);}}
else{
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}

/* k6906 in a6876 in find-lifting-candidates in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_6908(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6908,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6912,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 1483 alist-cons */
t4=C_retrieve(lf[33]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,t3,((C_word*)t0)[2],((C_word*)((C_word*)t0)[6])[1]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k6910 in k6906 in a6876 in find-lifting-candidates in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6912,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6916,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 1484 alist-cons */
t5=C_retrieve(lf[33]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,((C_word*)t0)[2],t4,((C_word*)((C_word*)t0)[5])[1]);}

/* k6914 in k6910 in k6906 in a6876 in find-lifting-candidates in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k6873 in find-lifting-candidates in ##compiler#perform-lambda-lifting! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5733(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[38],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5733,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_END_OF_LIST;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_END_OF_LIST;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_fix(0);
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6317,a[2]=t3,a[3]=t5,a[4]=lf[270],tmp=(C_word)a,a+=5,tmp);
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5898,a[2]=t7,a[3]=t9,a[4]=t3,a[5]=t11,a[6]=lf[285],tmp=(C_word)a,a+=7,tmp);
t14=C_SCHEME_UNDEFINED;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=C_set_block_item(t15,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5736,a[2]=t3,a[3]=t13,a[4]=t15,a[5]=t11,a[6]=t9,a[7]=t7,a[8]=t12,a[9]=lf[287],tmp=(C_word)a,a+=10,tmp));
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6863,a[2]=t2,a[3]=t15,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1451 ##compiler#debugging */
t18=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t18))(4,t18,t17,lf[22],lf[288]);}

/* k6861 in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6866,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1452 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5736(t3,t2,C_SCHEME_FALSE,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k6864 in k6861 in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* walk in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_5736(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t23;
C_word t24;
C_word t25;
C_word t26;
C_word t27;
C_word *a;
loop:
a=C_alloc(31);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5736,NULL,5,t0,t1,t2,t3,t4);}
t5=t3;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t3;
t8=(C_word)C_slot(t7,C_fix(3));
t9=t3;
t10=(C_word)C_slot(t9,C_fix(1));
t11=(C_word)C_eqp(t10,lf[73]);
if(C_truep(t11)){
t12=(C_word)C_i_caddr(t6);
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_5761,a[2]=((C_word*)t0)[4],a[3]=t8,a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=t3,a[10]=t1,a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
if(C_truep(t2)){
if(C_truep((C_word)C_i_cadr(t6))){
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5846,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t8,a[7]=t3,a[8]=t12,a[9]=t13,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 1245 ##compiler#get */
t15=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t15))(5,t15,t14,((C_word*)t0)[2],t2,lf[100]);}
else{
t14=t13;
f_5761(2,t14,C_SCHEME_FALSE);}}
else{
t14=t13;
f_5761(2,t14,C_SCHEME_FALSE);}}
else{
t12=(C_word)C_eqp(t10,lf[16]);
if(C_truep(t12)){
t13=(C_word)C_i_car(t6);
t14=(C_word)C_i_car(t8);
/* optimizer.scm: 1255 walk */
t24=t1;
t25=t13;
t26=t14;
t27=C_SCHEME_FALSE;
t1=t24;
t2=t25;
t3=t26;
t4=t27;
goto loop;}
else{
t13=(C_word)C_eqp(t10,lf[12]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5872,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t15=(C_word)C_i_car(t6);
t16=(C_word)C_i_car(t8);
/* optimizer.scm: 1257 walk */
t24=t14;
t25=t15;
t26=t16;
t27=t3;
t1=t24;
t2=t25;
t3=t26;
t4=t27;
goto loop;}
else{
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5892,a[2]=((C_word*)t0)[4],a[3]=lf[286],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t15=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t1,t14,t8);}}}}

/* a5891 in walk in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5892(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5892,3,t0,t1,t2);}
/* optimizer.scm: 1259 walk */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5736(t3,t1,C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}

/* k5870 in walk in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* optimizer.scm: 1258 walk */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5736(t3,((C_word*)t0)[2],C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}

/* k5844 in walk in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5846,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[9];
f_5761(2,t2,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_listp(((C_word*)t0)[8]))){
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5792,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 1247 ##compiler#get */
t3=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[5],lf[64]);}
else{
t2=((C_word*)t0)[9];
f_5761(2,t2,C_SCHEME_FALSE);}}}

/* k5790 in k5844 in walk in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5792,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5798,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t1,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 1248 ##compiler#get */
t3=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[6],lf[99]);}
else{
t2=((C_word*)t0)[4];
f_5761(2,t2,C_SCHEME_FALSE);}}

/* k5796 in k5790 in k5844 in walk in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5798,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5804,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
/* optimizer.scm: 1249 ##compiler#get */
t3=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[6],lf[147]);}
else{
t2=((C_word*)t0)[4];
f_5761(2,t2,C_SCHEME_FALSE);}}

/* k5802 in k5796 in k5790 in k5844 in walk in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5804,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_eqp(((C_word*)t0)[10],((C_word*)t0)[9]);
if(C_truep(t2)){
t3=(C_word)C_i_length(((C_word*)t0)[8]);
t4=(C_word)C_i_length(t1);
t5=(C_word)C_eqp(t3,t4);
if(C_truep(t5)){
t6=(C_word)C_i_car(((C_word*)t0)[7]);
t7=(C_word)C_i_car(((C_word*)t0)[6]);
t8=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[6]);
/* optimizer.scm: 1252 scan */
t9=((C_word*)t0)[4];
f_5898(t9,((C_word*)t0)[3],t6,t7,((C_word*)t0)[5],((C_word*)t0)[2],t8);}
else{
t6=((C_word*)t0)[3];
f_5761(2,t6,C_SCHEME_FALSE);}}
else{
t3=((C_word*)t0)[3];
f_5761(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
f_5761(2,t2,C_SCHEME_FALSE);}}

/* k5759 in walk in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm: 1253 transform */
t2=((C_word*)t0)[11];
f_6317(t2,((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)((C_word*)t0)[7])[1],((C_word*)((C_word*)t0)[6])[1],((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[3]);
/* optimizer.scm: 1254 walk */
t3=((C_word*)((C_word*)t0)[2])[1];
f_5736(t3,((C_word*)t0)[10],C_SCHEME_FALSE,t2,C_SCHEME_FALSE);}}

/* scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_5898(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word t18;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5898,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_SCHEME_FALSE;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_5901,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=t5,a[7]=t12,a[8]=t8,a[9]=((C_word*)t0)[4],a[10]=((C_word*)t0)[5],a[11]=t10,a[12]=t6,a[13]=lf[282],tmp=(C_word)a,a+=14,tmp));
t14=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_END_OF_LIST);
t15=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_END_OF_LIST);
t16=C_set_block_item(((C_word*)t0)[5],0,C_fix(0));
t17=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6308,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t8,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1338 rec */
t18=((C_word*)t12)[1];
f_5901(t18,t17,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,t6);}

/* k6306 in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6308,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6315,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1339 delete */
t3=C_retrieve(lf[284]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[44]+1));}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6313 in k6306 in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6315(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1339 lset= */
t2=C_retrieve(lf[283]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],*((C_word*)lf[44]+1),((C_word*)((C_word*)t0)[2])[1],t1);}

/* rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_5901(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
a=C_alloc(72);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5901,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(3));
t10=t2;
t11=(C_word)C_slot(t10,C_fix(1));
t12=(C_word)C_eqp(t11,lf[10]);
if(C_truep(t12)){
t13=(C_word)C_i_car(t7);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5950,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[12],a[5]=t13,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1270 ##compiler#get */
t15=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t15))(5,t15,t14,((C_word*)t0)[9],t13,lf[271]);}
else{
t13=(C_word)C_eqp(t11,lf[73]);
if(C_truep(t13)){
if(C_truep(t3)){
t14=(C_word)C_i_caddr(t7);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5968,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=t9,a[5]=((C_word*)t0)[8],a[6]=t3,a[7]=lf[272],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 1278 ##compiler#decompose-lambda-list */
t16=C_retrieve(lf[84]);
((C_proc4)C_retrieve_proc(t16))(4,t16,t1,t14,t15);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t14=(C_word)C_eqp(t11,lf[112]);
if(C_truep(t14)){
t15=((C_word*)((C_word*)t0)[11])[1];
if(C_truep(t15)){
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}
else{
t16=(C_word)C_i_cadr(t7);
t17=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[10])[1],t16);
t18=C_mutate(((C_word *)((C_word*)t0)[10])+1,t17);
t19=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6005,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=lf[273],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1287 every */
t20=C_retrieve(lf[59]);
((C_proc4)C_retrieve_proc(t20))(4,t20,t1,t19,t9);}}
else{
t15=(C_word)C_eqp(t11,lf[261]);
if(C_truep(t15)){
if(C_truep(t4)){
if(C_truep(((C_word*)t0)[6])){
t16=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6039,a[2]=t4,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t17=(C_word)C_i_car(t9);
/* optimizer.scm: 1290 ##compiler#scan-used-variables */
t18=C_retrieve(lf[180]);
((C_proc4)C_retrieve_proc(t18))(4,t18,t16,t17,t5);}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_FALSE);}}
else{
t16=(C_word)C_eqp(t11,lf[274]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6055,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t9,a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t18=(C_word)C_i_cadr(t7);
/* optimizer.scm: 1295 ##compiler#estimate-foreign-result-size */
t19=C_retrieve(lf[276]);
((C_proc3)C_retrieve_proc(t19))(3,t19,t17,t18);}
else{
t17=(C_word)C_eqp(t11,lf[277]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6096,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],a[4]=t9,a[5]=t1,a[6]=t5,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t19=(C_word)C_i_car(t7);
/* optimizer.scm: 1303 ##compiler#estimate-foreign-result-size */
t20=C_retrieve(lf[276]);
((C_proc3)C_retrieve_proc(t20))(3,t20,t18,t19);}
else{
t18=(C_word)C_eqp(t11,lf[15]);
if(C_truep(t18)){
t19=(C_word)C_i_car(t9);
t20=(C_word)C_slot(t19,C_fix(1));
t21=(C_word)C_eqp(lf[10],t20);
if(C_truep(t21)){
t22=(C_word)C_slot(t19,C_fix(2));
t23=(C_word)C_i_car(t22);
t24=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6149,a[2]=t1,a[3]=t9,a[4]=t5,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t25=(C_word)C_eqp(t23,((C_word*)t0)[4]);
if(C_truep(t25)){
t26=(C_word)C_eqp(((C_word*)((C_word*)t0)[10])[1],C_fix(0));
if(C_truep(t26)){
t27=(C_word)C_i_cadr(t9);
t28=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6177,a[2]=t24,a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp);
t29=(C_word)C_slot(t27,C_fix(1));
t30=(C_word)C_eqp(lf[10],t29);
if(C_truep(t30)){
t31=(C_word)C_slot(t27,C_fix(2));
t32=(C_word)C_i_car(t31);
t33=(C_word)C_a_i_cons(&a,2,t32,((C_word*)((C_word*)t0)[3])[1]);
t34=C_mutate(((C_word *)((C_word*)t0)[3])+1,t33);
t35=t28;
f_6177(t35,t34);}
else{
t31=t28;
f_6177(t31,C_SCHEME_UNDEFINED);}}
else{
t27=t24;
f_6149(t27,C_SCHEME_FALSE);}}
else{
t26=t24;
f_6149(t26,(C_word)C_eqp(t23,((C_word*)t0)[2]));}}
else{
t22=t1;
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,C_SCHEME_FALSE);}}
else{
t19=(C_word)C_eqp(t11,lf[245]);
if(C_truep(t19)){
t20=(C_word)C_i_cadddr(t7);
t21=(C_word)C_eqp(t20,C_fix(0));
if(C_truep(t21)){
t22=t1;
((C_proc2)(void*)(*((C_word*)t22+1)))(2,t22,t21);}
else{
t22=((C_word*)((C_word*)t0)[11])[1];
if(C_truep(t22)){
t23=t1;
((C_proc2)(void*)(*((C_word*)t23+1)))(2,t23,C_SCHEME_FALSE);}
else{
t23=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[10])[1],t20);
t24=C_mutate(((C_word *)((C_word*)t0)[10])+1,t23);
t25=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6238,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=lf[280],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1329 every */
t26=C_retrieve(lf[59]);
((C_proc4)C_retrieve_proc(t26))(4,t26,t1,t25,t9);}}}
else{
t20=(C_word)C_eqp(t11,lf[16]);
if(C_truep(t20)){
t21=(C_word)C_i_car(t9);
t22=(C_word)C_i_car(t7);
/* optimizer.scm: 1330 rec */
t66=t1;
t67=t21;
t68=t22;
t69=C_SCHEME_FALSE;
t70=t5;
t1=t66;
t2=t67;
t3=t68;
t4=t69;
t5=t70;
goto loop;}
else{
t21=(C_word)C_eqp(t11,lf[12]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6271,a[2]=t5,a[3]=t7,a[4]=t1,a[5]=((C_word*)t0)[7],a[6]=t9,tmp=(C_word)a,a+=7,tmp);
t23=(C_word)C_i_car(t9);
t24=(C_word)C_i_car(t7);
/* optimizer.scm: 1332 rec */
t66=t22;
t67=t23;
t68=t24;
t69=t2;
t70=t5;
t1=t66;
t2=t67;
t3=t68;
t4=t69;
t5=t70;
goto loop;}
else{
t22=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6295,a[2]=t5,a[3]=((C_word*)t0)[7],a[4]=lf[281],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1334 every */
t23=C_retrieve(lf[59]);
((C_proc4)C_retrieve_proc(t23))(4,t23,t1,t22,t9);}}}}}}}}}}}

/* a6294 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6295(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6295,3,t0,t1,t2);}
/* optimizer.scm: 1334 rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5901(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k6269 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6271,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6282,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1333 append */
t4=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6280 in k6269 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1333 rec */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5901(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* a6237 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6238(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6238,3,t0,t1,t2);}
/* optimizer.scm: 1329 rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5901(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k6175 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_6177(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[2];
f_6149(t3,C_SCHEME_TRUE);}

/* k6147 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_6149(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6149,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6154,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=lf[279],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 1322 every */
t4=C_retrieve(lf[59]);
((C_proc4)C_retrieve_proc(t4))(4,t4,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a6153 in k6147 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6154(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6154,3,t0,t1,t2);}
/* optimizer.scm: 1322 rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5901(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k6094 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6096,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_fix(0));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6102,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_6102(t4,t2);}
else{
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t4)){
t5=t3;
f_6102(t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t1);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=t3;
f_6102(t7,C_SCHEME_TRUE);}}}

/* k6100 in k6094 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_6102(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6102,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6107,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=lf[278],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1309 every */
t3=C_retrieve(lf[59]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a6106 in k6100 in k6094 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6107(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6107,3,t0,t1,t2);}
/* optimizer.scm: 1309 rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5901(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k6053 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6055,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_fix(0));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6061,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=t3;
f_6061(t4,t2);}
else{
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t4)){
t5=t3;
f_6061(t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t1);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
t7=t3;
f_6061(t7,C_SCHEME_TRUE);}}}

/* k6059 in k6053 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_6061(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6061,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6066,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=lf[275],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1301 every */
t3=C_retrieve(lf[59]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a6065 in k6059 in k6053 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6066(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6066,3,t0,t1,t2);}
/* optimizer.scm: 1301 rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5901(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* k6037 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6039(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6039,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6035,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1292 alist-cons */
t3=C_retrieve(lf[33]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k6033 in k6037 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_TRUE);}

/* a6004 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6005(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6005,3,t0,t1,t2);}
/* optimizer.scm: 1287 rec */
t3=((C_word*)((C_word*)t0)[3])[1];
f_5901(t3,t1,t2,C_SCHEME_FALSE,C_SCHEME_FALSE,((C_word*)t0)[2]);}

/* a5967 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5968(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_5968,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1]);
t6=C_mutate(((C_word *)((C_word*)t0)[5])+1,t5);
t7=(C_word)C_i_car(((C_word*)t0)[4]);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5984,a[2]=t7,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1282 append */
t9=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t9))(4,t9,t8,t2,((C_word*)t0)[2]);}

/* k5982 in a5967 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1282 rec */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5901(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE,t1);}

/* k5948 in rec in scan in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
t2=(C_word)C_i_not(t1);
if(C_truep(t2)){
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_i_memq(((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(C_word)C_i_not(t3);
if(C_truep(t4)){
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t5=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t5)){
t6=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(2));
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_TRUE);}}}}

/* transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_6317(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7){
C_word tmp;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6317,NULL,8,t0,t1,t2,t3,t4,t5,t6,t7);}
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6321,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,a[5]=t7,a[6]=t1,a[7]=t5,a[8]=t6,a[9]=t2,a[10]=((C_word*)t0)[3],tmp=(C_word)a,a+=11,tmp);
if(C_truep((C_word)C_i_pairp(t5))){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6851,a[2]=t7,a[3]=t3,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6853,a[2]=t5,a[3]=lf[267],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1343 ##sys#make-promise */
t11=*((C_word*)lf[268]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t9,t10);}
else{
/* optimizer.scm: 1344 ##compiler#debugging */
t9=C_retrieve(lf[4]);
((C_proc6)C_retrieve_proc(t9))(6,t9,t8,lf[5],lf[269],t3,t7);}}

/* a6852 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6853,2,t0,t1);}
/* optimizer.scm: 1343 unzip1 */
t2=C_retrieve(lf[266]);
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* k6849 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1343 ##compiler#debugging */
t2=C_retrieve(lf[4]);
((C_proc7)C_retrieve_proc(t2))(7,t2,((C_word*)t0)[4],lf[5],lf[265],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6321(C_word c,C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6321,2,t0,t1);}
t2=C_set_block_item(((C_word*)t0)[10],0,C_SCHEME_TRUE);
t3=((C_word*)t0)[9];
t4=(C_word)C_slot(t3,C_fix(2));
t5=(C_word)C_i_caddr(t4);
t6=(C_word)C_i_length(t5);
t7=C_SCHEME_END_OF_LIST;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6331,a[2]=((C_word*)t0)[3],a[3]=t8,a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[4],a[6]=t6,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=t4,tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm: 1349 ##compiler#get */
t10=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t10))(5,t10,t9,((C_word*)t0)[2],((C_word*)t0)[4],lf[147]);}

/* k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6331,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_6337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[10],a[13]=((C_word*)t0)[11],tmp=(C_word)a,a+=14,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[11]))){
t5=(C_word)C_i_cdr(((C_word*)t0)[11]);
if(C_truep((C_word)C_i_pairp(t5))){
t6=(C_word)C_i_cddr(((C_word*)t0)[11]);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(C_word)C_i_caddr(((C_word*)t0)[11]);
if(C_truep((C_word)C_i_pairp(t7))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6825,a[2]=t4,a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp);
/* cdaddr */
t9=*((C_word*)lf[262]+1);
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,((C_word*)t0)[11]);}
else{
t8=t4;
f_6337(t8,C_SCHEME_FALSE);}}
else{
t7=t4;
f_6337(t7,C_SCHEME_FALSE);}}
else{
t6=t4;
f_6337(t6,C_SCHEME_FALSE);}}
else{
t5=t4;
f_6337(t5,C_SCHEME_FALSE);}}

/* k6823 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(C_truep((C_word)C_i_listp(t1))){
t2=(C_word)C_i_cdddr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_i_cddddr(((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
f_6337(t4,(C_word)C_i_nullp(t3));}
else{
t3=((C_word*)t0)[2];
f_6337(t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
f_6337(t2,C_SCHEME_FALSE);}}

/* k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_6337(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6337,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[13]);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6343,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t2,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],tmp=(C_word)a,a+=15,tmp);
/* caaddr */
t4=*((C_word*)lf[263]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[13]);}
else{
/* ##compiler#bomb */
t2=C_retrieve(lf[238]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[10],lf[264],((C_word*)t0)[13]);}}

/* k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6343,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_6346,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[13],a[15]=((C_word*)t0)[14],tmp=(C_word)a,a+=16,tmp);
/* cdaddr */
t3=*((C_word*)lf[262]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[14]);}

/* k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6346(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6346,2,t0,t1);}
t2=(C_word)C_i_cddr(((C_word*)t0)[15]);
t3=(C_word)C_i_set_car(t2,t1);
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_6352,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],tmp=(C_word)a,a+=15,tmp);
/* optimizer.scm: 1356 node-class-set! */
t5=C_retrieve(lf[252]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[5],lf[261]);}

/* k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6352(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6352,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6355,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[12],a[9]=((C_word*)t0)[13],a[10]=((C_word*)t0)[14],tmp=(C_word)a,a+=11,tmp);
t3=((C_word*)t0)[5];
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_car(t4);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6528,a[2]=((C_word*)t0)[2],a[3]=t7,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[8],a[10]=lf[260],tmp=(C_word)a,a+=11,tmp));
t9=((C_word*)t7)[1];
f_6528(3,t9,t2,t5);}

/* rec in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6528(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[25],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6528,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(2));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(3));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(1));
t9=(C_word)C_eqp(t8,lf[15]);
if(C_truep(t9)){
t10=(C_word)C_i_car(t6);
t11=(C_word)C_i_cadr(t6);
t12=(C_word)C_slot(t10,C_fix(2));
t13=(C_word)C_slot(t11,C_fix(2));
t14=(C_word)C_slot(t10,C_fix(1));
t15=(C_word)C_eqp(lf[10],t14);
if(C_truep(t15)){
t16=(C_word)C_i_car(t12);
t17=(C_word)C_eqp(((C_word*)t0)[9],t16);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_6572,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,a[8]=t1,a[9]=t6,a[10]=((C_word*)t0)[7],a[11]=t13,a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
/* optimizer.scm: 1370 alist-cons */
t19=C_retrieve(lf[33]);
((C_proc5)C_retrieve_proc(t19))(5,t19,t18,C_SCHEME_FALSE,t2,((C_word*)((C_word*)t0)[8])[1]);}
else{
t18=(C_word)C_i_car(t12);
t19=(C_word)C_eqp(((C_word*)t0)[7],t18);
if(C_truep(t19)){
t20=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6703,a[2]=t2,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1395 node-class-set! */
t21=C_retrieve(lf[252]);
((C_proc4)C_retrieve_proc(t21))(4,t21,t20,t2,lf[258]);}
else{
/* optimizer.scm: 1398 ##compiler#bomb */
t20=C_retrieve(lf[238]);
((C_proc3)C_retrieve_proc(t20))(3,t20,t1,lf[259]);}}}
else{
t16=t1;
((C_proc2)(void*)(*((C_word*)t16+1)))(2,t16,C_SCHEME_UNDEFINED);}}
else{
t10=(C_word)C_eqp(t8,lf[12]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t4);
t12=(C_word)C_i_car(t6);
if(C_truep((C_word)C_i_memq(t11,((C_word*)t0)[2]))){
t13=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6750,a[2]=t6,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1403 alist-cons */
t14=C_retrieve(lf[33]);
((C_proc5)C_retrieve_proc(t14))(5,t14,t13,t11,t12,((C_word*)((C_word*)t0)[4])[1]);}
else{
/* for-each */
t13=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t1,((C_word*)((C_word*)t0)[3])[1],t6);}}
else{
/* for-each */
t11=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,((C_word*)((C_word*)t0)[3])[1],t6);}}}

/* k6748 in rec in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6750,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6753,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm: 1404 ##compiler#copy-node! */
t5=C_retrieve(lf[243]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,((C_word*)t0)[3]);}

/* k6751 in k6748 in rec in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1405 rec */
t2=((C_word*)((C_word*)t0)[4])[1];
f_6528(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6701 in rec in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6703,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6706,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 1396 node-parameters-set! */
t3=C_retrieve(lf[142]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* k6704 in k6701 in rec in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm: 1397 node-subexpressions-set! */
t3=C_retrieve(lf[141]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k6570 in rec in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6572(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6572,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[12])+1,t1);
t3=(C_word)C_i_car(((C_word*)t0)[11]);
t4=(C_word)C_eqp(((C_word*)t0)[10],t3);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6581,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[9]);
t7=(C_word)C_i_length(t6);
t8=(C_word)C_eqp(((C_word*)t0)[5],t7);
if(C_truep(t8)){
t9=t5;
f_6581(2,t9,C_SCHEME_UNDEFINED);}
else{
/* optimizer.scm: 1373 ##compiler#compiler-warning */
t9=C_retrieve(lf[246]);
((C_proc5)C_retrieve_proc(t9))(5,t9,t5,lf[247],lf[254],((C_word*)t0)[4]);}}
else{
t5=(C_word)C_i_car(((C_word*)t0)[11]);
t6=(C_word)C_i_assq(t5,((C_word*)((C_word*)t0)[3])[1]);
if(C_truep(t6)){
t7=(C_word)C_i_cdr(t6);
t8=(C_word)C_slot(t7,C_fix(3));
t9=(C_word)C_i_car(t8);
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6627,a[2]=t7,a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[6],a[6]=t9,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[2],tmp=(C_word)a,a+=9,tmp);
t11=(C_word)C_i_cdr(((C_word*)t0)[9]);
t12=(C_word)C_i_length(t11);
t13=(C_word)C_eqp(((C_word*)t0)[5],t12);
if(C_truep(t13)){
t14=t10;
f_6627(2,t14,C_SCHEME_UNDEFINED);}
else{
/* optimizer.scm: 1384 ##compiler#compiler-warning */
t14=C_retrieve(lf[246]);
((C_proc5)C_retrieve_proc(t14))(5,t14,t10,lf[247],lf[256],((C_word*)t0)[4]);}}
else{
/* optimizer.scm: 1393 ##compiler#bomb */
t7=C_retrieve(lf[238]);
((C_proc4)C_retrieve_proc(t7))(4,t7,((C_word*)t0)[8],lf[257],((C_word*)t0)[11]);}}}

/* k6625 in k6570 in rec in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6627,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6630,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 1387 node-class-set! */
t3=C_retrieve(lf[252]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],lf[12]);}

/* k6628 in k6625 in k6570 in rec in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6630,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6633,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6657,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(((C_word*)t0)[2],C_fix(2));
t5=(C_word)C_i_caddr(t4);
/* optimizer.scm: 1388 take */
t6=C_retrieve(lf[255]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t3,t5,C_fix(1));}

/* k6655 in k6628 in k6625 in k6570 in rec in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1388 node-parameters-set! */
t2=C_retrieve(lf[142]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6631 in k6628 in k6625 in k6570 in rec in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6636,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_a_i_list(&a,2,C_SCHEME_FALSE,((C_word*)t0)[4]);
t4=(C_word)C_i_cddr(((C_word*)t0)[3]);
t5=(C_word)C_a_i_record(&a,4,lf[47],lf[253],t3,t4);
t6=(C_word)C_a_i_list(&a,2,t5,((C_word*)t0)[5]);
/* optimizer.scm: 1389 node-subexpressions-set! */
t7=C_retrieve(lf[141]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t2,((C_word*)t0)[2],t6);}

/* k6634 in k6631 in k6628 in k6625 in k6570 in rec in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1392 rec */
t2=((C_word*)((C_word*)t0)[4])[1];
f_6528(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6579 in k6570 in rec in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6581(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6581,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6584,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1376 node-class-set! */
t3=C_retrieve(lf[252]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],lf[253]);}

/* k6582 in k6579 in k6570 in rec in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6584(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6584,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6587,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_a_i_list(&a,2,C_SCHEME_TRUE,((C_word*)t0)[2]);
/* optimizer.scm: 1377 node-parameters-set! */
t4=C_retrieve(lf[142]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[3],t3);}

/* k6585 in k6582 in k6579 in k6570 in rec in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cddr(((C_word*)t0)[4]);
/* optimizer.scm: 1378 node-subexpressions-set! */
t3=C_retrieve(lf[141]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k6353 in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6355,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6358,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6451,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=lf[249],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6508,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6510,a[2]=lf[250],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 1426 lset-difference */
t6=C_retrieve(lf[251]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t4,t5,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* a6509 in k6353 in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6510(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6510,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_i_cdr(t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_eqp(t4,t5));}

/* k6506 in k6353 in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a6450 in k6353 in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6451(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6451,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_slot(t3,C_fix(3));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6461,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t4,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_cdr(t4);
t7=(C_word)C_i_length(t6);
t8=(C_word)C_eqp(((C_word*)t0)[3],t7);
if(C_truep(t8)){
t9=t5;
f_6461(2,t9,C_SCHEME_UNDEFINED);}
else{
/* optimizer.scm: 1416 ##compiler#compiler-warning */
t9=C_retrieve(lf[246]);
((C_proc5)C_retrieve_proc(t9))(5,t9,t5,lf[247],lf[248],((C_word*)t0)[2]);}}

/* k6459 in a6450 in k6353 in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6461,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,4,C_SCHEME_TRUE,C_SCHEME_FALSE,((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(C_word)C_i_car(((C_word*)t0)[6]);
t5=(C_word)C_i_cddr(((C_word*)t0)[6]);
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(C_word)C_a_i_record(&a,4,lf[47],lf[245],t3,t6);
t8=(C_word)C_a_i_list(&a,2,t2,t7);
/* optimizer.scm: 1419 node-subexpressions-set! */
t9=C_retrieve(lf[141]);
((C_proc4)C_retrieve_proc(t9))(4,t9,((C_word*)t0)[3],((C_word*)t0)[2],t8);}

/* k6356 in k6353 in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6358,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[4])?(C_word)C_i_pairp(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t2)){
t3=(C_word)C_a_i_record(&a,4,lf[47],C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6370,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1431 ##compiler#copy-node! */
t5=C_retrieve(lf[243]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[4],t3);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k6368 in k6356 in k6353 in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6370,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6373,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6409,a[2]=lf[244],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 1433 fold-right */
t4=C_retrieve(lf[165]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,t3,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* a6408 in k6368 in k6356 in k6353 in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6409(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[19],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6409,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(t2);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_slot(t6,C_fix(3));
t8=(C_word)C_i_car(t7);
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_slot(t8,C_fix(2));
t11=(C_word)C_slot(t8,C_fix(3));
t12=(C_word)C_a_i_record(&a,4,lf[47],t9,t10,t11);
t13=(C_word)C_a_i_list(&a,2,t12,t3);
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,(C_word)C_a_i_record(&a,4,lf[47],lf[12],t5,t13));}

/* k6371 in k6368 in k6356 in k6353 in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6373,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6376,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1442 ##compiler#copy-node! */
t3=C_retrieve(lf[243]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,t1,((C_word*)t0)[2]);}

/* k6374 in k6371 in k6368 in k6356 in k6353 in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6381,a[2]=lf[242],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a6380 in k6374 in k6371 in k6368 in k6356 in k6353 in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6381(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6381,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6388,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6407,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1446 gensym */
t6=C_retrieve(lf[105]);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k6405 in a6380 in k6374 in k6371 in k6368 in k6356 in k6353 in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6407,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* optimizer.scm: 1446 node-parameters-set! */
t3=C_retrieve(lf[142]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k6386 in a6380 in k6374 in k6371 in k6368 in k6356 in k6353 in k6350 in k6344 in k6341 in k6335 in k6329 in k6319 in transform in ##compiler#transform-direct-lambdas! in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_6388(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6388,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(3));
t3=(C_word)C_a_i_record(&a,4,lf[47],lf[92],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_set_car(t2,t3));}

/* ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3933(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6,C_word t7,C_word t8){
C_word tmp;
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
C_word ab[175],*a=ab;
if(c!=9) C_bad_argc_2(c,9,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr9,(void*)f_3933,9,t0,t1,t2,t3,t4,t5,t6,t7,t8);}
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3936,a[2]=t2,a[3]=lf[190],tmp=(C_word)a,a+=4,tmp);
switch(t6){
case C_fix(1):
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3952,a[2]=t5,a[3]=t8,a[4]=t7,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 861  test */
t11=t9;
f_3936(t11,t10,t4,lf[62]);
case C_fix(2):
if(C_truep(C_retrieve(lf[191]))){
t10=(C_word)C_i_length(t8);
t11=(C_word)C_i_car(t7);
t12=(C_word)C_eqp(t10,t11);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4060,a[2]=t4,a[3]=t9,a[4]=t2,a[5]=t1,a[6]=t5,a[7]=t8,a[8]=t7,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 879  test */
t14=t9;
f_3936(t14,t13,t4,lf[61]);}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(3):
if(C_truep(C_retrieve(lf[191]))){
if(C_truep((C_word)C_i_nullp(t8))){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4164,a[2]=t4,a[3]=t9,a[4]=t7,a[5]=t1,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 897  test */
t11=t9;
f_3936(t11,t10,t4,lf[62]);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(4):
if(C_truep(C_retrieve(lf[191]))){
if(C_truep(C_retrieve(lf[195]))){
t10=(C_word)C_i_length(t8);
t11=(C_word)C_eqp(C_fix(2),t10);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4208,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 905  test */
t13=t9;
f_3936(t13,t12,t4,lf[62]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(5):
if(C_truep(C_retrieve(lf[191]))){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4264,a[2]=t4,a[3]=t9,a[4]=t1,a[5]=t5,a[6]=t7,a[7]=t8,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 917  test */
t11=t9;
f_3936(t11,t10,t4,lf[61]);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(6):
t10=(C_word)C_i_caddr(t7);
t11=(C_truep(t10)?t10:C_retrieve(lf[195]));
if(C_truep(t11)){
if(C_truep(C_retrieve(lf[191]))){
t12=(C_word)C_i_length(t8);
t13=(C_word)C_eqp(C_fix(1),t12);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4357,a[2]=t1,a[3]=t5,a[4]=t8,a[5]=t7,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 933  test */
t15=t9;
f_3936(t15,t14,t4,lf[62]);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(7):
t10=(C_word)C_i_cadddr(t7);
t11=(C_truep(t10)?t10:C_retrieve(lf[195]));
if(C_truep(t11)){
if(C_truep(C_retrieve(lf[191]))){
t12=(C_word)C_i_length(t8);
t13=(C_word)C_i_car(t7);
t14=(C_word)C_eqp(t12,t13);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4422,a[2]=t4,a[3]=t9,a[4]=t8,a[5]=t1,a[6]=t5,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 945  test */
t16=t9;
f_3936(t16,t15,t4,lf[62]);}
else{
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}
case C_fix(8):
if(C_truep(C_retrieve(lf[191]))){
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4483,a[2]=t4,a[3]=t9,a[4]=t8,a[5]=t5,a[6]=t2,a[7]=t1,a[8]=t7,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 955  test */
t11=t9;
f_3936(t11,t10,t4,lf[62]);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(9):
if(C_truep(C_retrieve(lf[191]))){
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4510,a[2]=t7,a[3]=t1,a[4]=t5,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 963  test */
t11=t9;
f_3936(t11,t10,t4,lf[62]);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(10):
if(C_truep(C_retrieve(lf[191]))){
t10=(C_word)C_i_cadddr(t7);
t11=(C_truep(t10)?t10:C_retrieve(lf[195]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4654,a[2]=t1,a[3]=t5,a[4]=t7,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 990  test */
t13=t9;
f_3936(t13,t12,t4,lf[62]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(11):
if(C_truep(C_retrieve(lf[191]))){
t10=(C_word)C_i_caddr(t7);
t11=(C_truep(t10)?t10:C_retrieve(lf[195]));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4741,a[2]=t4,a[3]=t9,a[4]=t8,a[5]=t5,a[6]=t1,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 1007 test */
t13=t9;
f_3936(t13,t12,t4,lf[62]);}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(12):
if(C_truep(C_retrieve(lf[191]))){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4806,a[2]=t4,a[3]=t9,a[4]=t1,a[5]=t5,a[6]=t8,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 1020 test */
t11=t9;
f_3936(t11,t10,t4,lf[62]);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(13):
if(C_truep(C_retrieve(lf[191]))){
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4882,a[2]=t4,a[3]=t9,a[4]=t3,a[5]=t8,a[6]=t5,a[7]=t1,a[8]=t7,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 1033 test */
t11=t9;
f_3936(t11,t10,t4,lf[61]);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(14):
if(C_truep(C_retrieve(lf[191]))){
t10=(C_word)C_i_cadr(t7);
t11=(C_word)C_i_length(t8);
t12=(C_word)C_eqp(t10,t11);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4947,a[2]=t4,a[3]=t9,a[4]=t1,a[5]=t5,a[6]=t8,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 1044 test */
t14=t9;
f_3936(t14,t13,t4,lf[61]);}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(15):
if(C_truep(C_retrieve(lf[191]))){
t10=(C_word)C_i_length(t8);
t11=(C_word)C_eqp(C_fix(1),t10);
if(C_truep(t11)){
t12=C_retrieve(lf[195]);
t13=(C_truep(t12)?t12:(C_word)C_i_cadddr(t7));
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5030,a[2]=t4,a[3]=t9,a[4]=t8,a[5]=t5,a[6]=t1,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 1062 test */
t15=t9;
f_3936(t15,t14,t4,lf[61]);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(16):
t10=(C_word)C_i_car(t7);
t11=(C_word)C_i_length(t8);
t12=(C_word)C_i_cadddr(t7);
if(C_truep(C_retrieve(lf[191]))){
t13=(C_word)C_i_not(t10);
t14=(C_truep(t13)?t13:(C_word)C_eqp(t11,t10));
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5123,a[2]=t4,a[3]=t9,a[4]=t11,a[5]=t12,a[6]=t1,a[7]=t5,a[8]=t8,a[9]=t7,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 1083 test */
t16=t9;
f_3936(t16,t15,t4,lf[61]);}
else{
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_SCHEME_FALSE);}}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}
case C_fix(17):
if(C_truep(C_retrieve(lf[191]))){
t10=(C_word)C_i_length(t8);
t11=(C_word)C_i_car(t7);
t12=(C_word)C_eqp(t10,t11);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5202,a[2]=t4,a[3]=t9,a[4]=t1,a[5]=t5,a[6]=t8,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 1100 test */
t14=t9;
f_3936(t14,t13,t4,lf[61]);}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(18):
if(C_truep(C_retrieve(lf[191]))){
if(C_truep((C_word)C_i_nullp(t8))){
t10=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5270,a[2]=t4,a[3]=t9,a[4]=t7,a[5]=t1,a[6]=t5,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1114 test */
t11=t9;
f_3936(t11,t10,t4,lf[61]);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(19):
if(C_truep(C_retrieve(lf[191]))){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5305,a[2]=t4,a[3]=t9,a[4]=t8,a[5]=t1,a[6]=t5,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 1124 test */
t11=t9;
f_3936(t11,t10,t4,lf[62]);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(20):
t10=(C_word)C_i_length(t8);
t11=(C_word)C_i_cadddr(t7);
t12=(C_truep(t11)?t11:C_retrieve(lf[195]));
if(C_truep(t12)){
if(C_truep(C_retrieve(lf[191]))){
t13=(C_word)C_i_car(t7);
t14=(C_word)C_eqp(t10,t13);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5453,a[2]=t4,a[3]=t9,a[4]=t8,a[5]=t10,a[6]=t1,a[7]=t5,a[8]=t7,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 1153 test */
t16=t9;
f_3936(t16,t15,t4,lf[62]);}
else{
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,C_SCHEME_FALSE);}}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}
case C_fix(21):
if(C_truep(C_retrieve(lf[191]))){
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5526,a[2]=t4,a[3]=t9,a[4]=t8,a[5]=t1,a[6]=t5,a[7]=t7,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 1171 test */
t11=t9;
f_3936(t11,t10,t4,lf[62]);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_FALSE);}
case C_fix(22):
t10=(C_word)C_i_car(t7);
t11=(C_word)C_i_length(t8);
t12=(C_word)C_i_cadddr(t7);
if(C_truep(C_retrieve(lf[191]))){
t13=(C_word)C_eqp(t11,t10);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5680,a[2]=t4,a[3]=t9,a[4]=t12,a[5]=t8,a[6]=t1,a[7]=t5,a[8]=t7,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 1205 test */
t15=t9;
f_3936(t15,t14,t4,lf[61]);}
else{
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_FALSE);}}
else{
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,C_SCHEME_FALSE);}
default:
/* optimizer.scm: 1220 ##compiler#bomb */
t10=C_retrieve(lf[238]);
((C_proc3)C_retrieve_proc(t10))(3,t10,t1,lf[239]);}}

/* k5678 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5680(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5680,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5683,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_5683(2,t3,t1);}
else{
/* optimizer.scm: 1205 test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[62]);}}

/* k5681 in k5678 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5683(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5683,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_caddr(((C_word*)t0)[6]);
t3=(C_truep(t2)?t2:C_retrieve(lf[195]));
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5702,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_eqp(C_retrieve(lf[200]),lf[206]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5715,a[2]=t4,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1213 fifth */
t7=C_retrieve(lf[236]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[6]);}
else{
t6=(C_word)C_i_cadr(((C_word*)t0)[6]);
t7=(C_word)C_a_i_list(&a,2,t6,((C_word*)t0)[2]);
t8=((C_word*)t0)[3];
t9=t4;
f_5702(t9,(C_word)C_a_i_record(&a,4,lf[47],lf[112],t7,t8));}}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5713 in k5681 in k5678 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5715,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
f_5702(t4,(C_word)C_a_i_record(&a,4,lf[47],lf[192],t2,t3));}

/* k5700 in k5681 in k5678 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_5702(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5702,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[237],t2));}

/* k5524 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5526,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5529,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_5529(2,t3,t1);}
else{
/* optimizer.scm: 1171 test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[61]);}}

/* k5527 in k5524 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5529,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5535,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 1173 fifth */
t4=C_retrieve(lf[236]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5533 in k5527 in k5524 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5535,2,t0,t1);}
t2=(C_word)C_i_cadddr(((C_word*)t0)[6]);
t3=(C_truep(C_retrieve(lf[195]))?(C_word)C_i_caddr(((C_word*)t0)[6]):(C_word)C_i_cadr(((C_word*)t0)[6]));
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5544,a[2]=t1,a[3]=t2,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5619,a[2]=((C_word*)t0)[3],a[3]=lf[235],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1177 remove */
t6=C_retrieve(lf[227]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)t0)[2]);}

/* a5618 in k5533 in k5527 in k5524 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5619(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_5619,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_eqp(lf[30],t4);
if(C_truep(t5)){
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=(C_word)C_i_car(t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_eqp(((C_word*)t0)[2],t8));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k5542 in k5533 in k5527 in k5524 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5544,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5560,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1182 ##compiler#qnode */
t3=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[5]);}
else{
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_car(t1);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[7],t3);
t5=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[232],t4));}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5586,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5588,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[234],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 1190 ##compiler#fold-inner */
t5=C_retrieve(lf[225]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,t1);}}}

/* a5587 in k5542 in k5533 in k5527 in k5524 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5588(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[31],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5588,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(C_retrieve(lf[200]),lf[206]);
if(C_truep(t4)){
t5=(C_word)C_a_i_list(&a,1,((C_word*)t0)[4]);
t6=(C_word)C_a_i_list(&a,2,t2,t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[47],lf[192],t5,t6));}
else{
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t6=(C_word)C_a_i_list(&a,2,t2,t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[47],lf[112],t5,t6));}}

/* k5584 in k5542 in k5533 in k5527 in k5524 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5586,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[233],t2));}

/* k5558 in k5542 in k5533 in k5527 in k5524 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5560(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5560,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[231],t2));}

/* k5451 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5453,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5456,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_5456(2,t3,t1);}
else{
/* optimizer.scm: 1153 test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[61]);}}

/* k5454 in k5451 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5456,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5469,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5474,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=lf[229],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5484,a[2]=((C_word*)t0)[6],a[3]=lf[230],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1159 ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,t6);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a5483 in k5454 in k5451 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5484(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5484,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5496,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_caddr(((C_word*)t0)[2]);
/* optimizer.scm: 1161 ##compiler#qnode */
t6=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}

/* k5494 in a5483 in k5454 in k5451 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5496,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* optimizer.scm: 1160 append */
t3=*((C_word*)lf[3]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,((C_word*)t0)[4],((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a5473 in k5454 in k5451 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5474,2,t0,t1);}
t2=(C_word)C_fixnum_decrease(((C_word*)t0)[3]);
/* optimizer.scm: 1159 split-at */
t3=C_retrieve(lf[109]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}

/* k5467 in k5454 in k5451 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5469,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,4,lf[47],lf[192],((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[228],t3));}

/* k5303 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5308,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_5308(2,t3,t1);}
else{
/* optimizer.scm: 1124 test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[61]);}}

/* k5306 in k5303 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5308,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_truep(C_retrieve(lf[195]))?(C_word)C_i_caddr(((C_word*)t0)[5]):(C_word)C_i_cadr(((C_word*)t0)[5]));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5317,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5389,a[2]=t2,a[3]=lf[226],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1128 remove */
t6=C_retrieve(lf[227]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,t5,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a5388 in k5306 in k5303 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5389(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_5389,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(1));
t5=(C_word)C_eqp(lf[30],t4);
if(C_truep(t5)){
t6=t2;
t7=(C_word)C_slot(t6,C_fix(2));
t8=(C_word)C_i_car(t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_eqp(((C_word*)t0)[2],t8));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}

/* k5315 in k5306 in k5303 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5317(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5317,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5333,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1133 ##compiler#qnode */
t3=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[4]);}
else{
t2=(C_word)C_i_cdr(t1);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_car(t1);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t3);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[222],t4));}
else{
t3=(C_word)C_i_cadddr(((C_word*)t0)[3]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(C_retrieve(lf[200]),lf[206]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5368,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5370,a[2]=((C_word*)t0)[2],a[3]=lf[224],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 1141 ##compiler#fold-inner */
t7=C_retrieve(lf[225]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t5,t6,t1);}
else{
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}}}}

/* a5369 in k5315 in k5306 in k5303 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5370(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5370,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
t5=(C_word)C_a_i_list(&a,2,t2,t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[47],lf[192],t4,t5));}

/* k5366 in k5315 in k5306 in k5303 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5368,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[223],t2));}

/* k5331 in k5315 in k5306 in k5303 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5333,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[221],t2));}

/* k5268 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5270,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5273,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_5273(2,t3,t1);}
else{
/* optimizer.scm: 1114 test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[62]);}}

/* k5271 in k5268 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5273,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5283,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
/* optimizer.scm: 1115 ##compiler#qnode */
t4=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5281 in k5271 in k5268 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5283,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[220],t2));}

/* k5200 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5202,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5205,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_5205(2,t3,t1);}
else{
/* optimizer.scm: 1100 test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[62]);}}

/* k5203 in k5200 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5205,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5225,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve(lf[195]))){
t3=(C_word)C_i_cddr(((C_word*)t0)[5]);
t4=t2;
f_5225(t4,(C_word)C_i_pairp(t3));}
else{
t3=t2;
f_5225(t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5223 in k5203 in k5200 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_5225(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5225,NULL,2,t0,t1);}
t2=(C_truep(t1)?(C_word)C_i_caddr(((C_word*)t0)[5]):(C_word)C_i_cadr(((C_word*)t0)[5]));
t3=(C_word)C_a_i_list(&a,1,t2);
t4=((C_word*)t0)[4];
t5=(C_word)C_a_i_record(&a,4,lf[47],lf[192],t3,t4);
t6=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[219],t6));}

/* k5121 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5126,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t1)){
t3=t2;
f_5126(2,t3,t1);}
else{
/* optimizer.scm: 1083 test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[62]);}}

/* k5124 in k5121 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5126,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_caddr(((C_word*)t0)[7]);
t3=(C_truep(t2)?t2:C_retrieve(lf[195]));
if(C_truep(t3)){
t4=(C_word)C_i_cadr(((C_word*)t0)[7]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5156,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_eqp(C_SCHEME_TRUE,((C_word*)t0)[3]);
if(C_truep(t6)){
t7=t5;
f_5156(t7,(C_word)C_fixnum_increase(((C_word*)t0)[2]));}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t7=(C_word)C_i_car(((C_word*)t0)[3]);
t8=t5;
f_5156(t8,(C_word)C_fixnum_times(((C_word*)t0)[2],t7));}
else{
t7=t5;
f_5156(t7,((C_word*)t0)[3]);}}}
else{
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5154 in k5124 in k5121 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_5156(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5156,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t3=((C_word*)t0)[4];
t4=(C_word)C_a_i_record(&a,4,lf[47],lf[112],t2,t3);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[218],t5));}

/* k5028 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5033,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_5033(2,t3,t1);}
else{
/* optimizer.scm: 1063 test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[62]);}}

/* k5031 in k5028 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5033(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5033,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_eqp(C_retrieve(lf[200]),t2);
if(C_truep(t3)){
t4=(C_word)C_i_caddr(((C_word*)t0)[5]);
t5=(C_word)C_a_i_list(&a,2,C_SCHEME_TRUE,t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5045,a[2]=t5,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_i_caddr(((C_word*)t0)[5]);
/* optimizer.scm: 1066 ##compiler#varnode */
t9=C_retrieve(lf[66]);
((C_proc3)C_retrieve_proc(t9))(3,t9,t7,t8);}
else{
t4=(C_word)C_i_cadr(((C_word*)t0)[5]);
t5=(C_word)C_eqp(C_retrieve(lf[200]),t4);
if(C_truep(t5)){
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
t7=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[217],t6));}
else{
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k5050 in k5031 in k5028 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1066 cons* */
t2=C_retrieve(lf[213]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5043 in k5031 in k5028 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_5045(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5045,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[47],lf[15],((C_word*)t0)[2],t1));}

/* k4945 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4947,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4950,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_4950(2,t3,t1);}
else{
/* optimizer.scm: 1045 test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[62]);}}

/* k4948 in k4945 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4950(C_word c,C_word t0,C_word t1){
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
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4950,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_eqp(C_retrieve(lf[200]),t2);
if(C_truep(t3)){
t4=(C_word)C_i_cadddr(((C_word*)t0)[5]);
t5=(C_truep(t4)?t4:C_retrieve(lf[195]));
if(C_truep(t5)){
t6=(C_truep(C_retrieve(lf[195]))?(C_word)C_i_cadddr(((C_word*)t0)[5]):(C_word)C_i_caddr(((C_word*)t0)[5]));
t7=(C_word)C_a_i_list(&a,1,t6);
t8=((C_word*)t0)[4];
t9=(C_word)C_a_i_record(&a,4,lf[47],lf[192],t7,t8);
t10=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t9);
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[216],t10));}
else{
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4880 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4882,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4885,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_4885(2,t3,t1);}
else{
/* optimizer.scm: 1033 test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[62]);}}

/* k4883 in k4880 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4885,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(C_truep(t2)?t2:C_retrieve(lf[195]));
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[6]);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4900,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t6=(C_word)C_i_cdr(((C_word*)t0)[2]);
t7=t5;
f_4900(t7,(C_word)C_a_i_cons(&a,2,C_SCHEME_TRUE,t6));}
else{
t6=t5;
f_4900(t6,((C_word*)t0)[2]);}}
else{
t4=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4898 in k4883 in k4880 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_4900(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4900,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4903,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],C_SCHEME_TRUE);
t4=(C_word)C_a_i_record(&a,4,lf[47],lf[215],t3,C_SCHEME_END_OF_LIST);
/* optimizer.scm: 1037 cons* */
t5=C_retrieve(lf[213]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t2,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4901 in k4898 in k4883 in k4880 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4903,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[47],lf[15],((C_word*)t0)[2],t1));}

/* k4804 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4806,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4809,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_4809(2,t3,t1);}
else{
/* optimizer.scm: 1020 test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[61]);}}

/* k4807 in k4804 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4809(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4809,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_truep(t2)?t2:C_retrieve(lf[195]));
if(C_truep(t3)){
t4=(C_word)C_i_length(((C_word*)t0)[4]);
t5=(C_word)C_i_caddr(((C_word*)t0)[5]);
if(C_truep((C_word)C_fixnum_less_or_equal_p(t4,t5))){
t6=(C_word)C_eqp(t4,C_fix(1));
if(C_truep(t6)){
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[4]);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[214],t7));}
else{
t7=(C_word)C_i_car(((C_word*)t0)[5]);
t8=(C_word)C_a_i_list(&a,2,C_SCHEME_TRUE,t7);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4845,a[2]=t8,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4852,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t9,tmp=(C_word)a,a+=5,tmp);
t11=(C_word)C_i_car(((C_word*)t0)[5]);
/* optimizer.scm: 1027 ##compiler#varnode */
t12=C_retrieve(lf[66]);
((C_proc3)C_retrieve_proc(t12))(3,t12,t10,t11);}}
else{
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4850 in k4807 in k4804 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1027 cons* */
t2=C_retrieve(lf[213]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4843 in k4807 in k4804 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4845,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[47],lf[15],((C_word*)t0)[2],t1));}

/* k4739 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4741,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4744,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_4744(2,t3,t1);}
else{
/* optimizer.scm: 1007 test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[61]);}}

/* k4742 in k4739 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4744,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t5=t4;
f_4756(t5,t3);}
else{
t5=(C_word)C_i_length(((C_word*)t0)[2]);
t6=(C_word)C_i_car(((C_word*)t0)[5]);
t7=t4;
f_4756(t7,(C_word)C_eqp(t5,t6));}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4754 in k4742 in k4739 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_4756(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4756,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,2,C_SCHEME_TRUE,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4762,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4769,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* optimizer.scm: 1012 ##compiler#varnode */
t7=C_retrieve(lf[66]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,t6);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4767 in k4754 in k4742 in k4739 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 1012 cons* */
t2=C_retrieve(lf[213]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4760 in k4754 in k4742 in k4739 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4762,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[47],lf[15],((C_word*)t0)[2],t1));}

/* k4652 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4654,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_length(((C_word*)t0)[5]);
if(C_truep((C_word)C_and((C_word)C_fixnum_lessp(C_fix(0),t2),(C_word)C_fixnum_lessp(t2,C_fix(3))))){
t3=(C_word)C_i_car(((C_word*)t0)[4]);
t4=(C_word)C_a_i_list(&a,2,C_SCHEME_FALSE,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4676,a[2]=((C_word*)t0)[4],a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_car(((C_word*)t0)[4]);
/* optimizer.scm: 994  ##compiler#varnode */
t7=C_retrieve(lf[66]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,t6);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4674 in k4652 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4676(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4676,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4684,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm: 997  ##compiler#qnode */
t5=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}

/* k4682 in k4674 in k4652 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4688,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_i_caddr(((C_word*)t0)[2]);
/* optimizer.scm: 999  ##compiler#varnode */
t5=C_retrieve(lf[66]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t2,t4);}
else{
t4=t2;
f_4688(2,t4,(C_word)C_i_cadr(((C_word*)t0)[3]));}}

/* k4686 in k4682 in k4674 in k4652 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4688(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4688,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,5,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[15],((C_word*)t0)[2],t2));}

/* k4508 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4510,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_length(((C_word*)t0)[5]);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4526,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 965  ##compiler#qnode */
t4=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_SCHEME_TRUE);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4532,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep(C_retrieve(lf[195]))){
t4=(C_word)C_eqp(C_retrieve(lf[200]),lf[212]);
t5=t3;
f_4532(t5,(C_word)C_i_not(t4));}
else{
t4=t3;
f_4532(t4,C_SCHEME_FALSE);}}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4530 in k4508 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_4532(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4532,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4535,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_4535(t3,t1);}
else{
t3=(C_word)C_eqp(C_retrieve(lf[200]),lf[206]);
t4=(C_truep(t3)?(C_word)C_i_caddr(((C_word*)t0)[5]):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=t2;
f_4535(t5,t4);}
else{
t5=(C_word)C_eqp(C_retrieve(lf[200]),lf[211]);
t6=t2;
f_4535(t6,(C_truep(t5)?(C_word)C_i_cadddr(((C_word*)t0)[5]):C_SCHEME_FALSE));}}}

/* k4533 in k4530 in k4508 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_4535(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4535,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4538,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4594,a[2]=lf[210],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a4593 in k4533 in k4530 in k4508 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4594(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4594,3,t0,t1,t2);}
/* optimizer.scm: 969  gensym */
t3=C_retrieve(lf[105]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k4536 in k4533 in k4530 in k4508 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4538,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4541,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* map */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_retrieve(lf[66]),t1);}

/* k4539 in k4536 in k4533 in k4530 in k4508 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4541(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4541,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4546,a[2]=lf[205],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_eqp(C_retrieve(lf[200]),lf[206]);
t4=(C_truep(t3)?(C_word)C_i_car(((C_word*)t0)[6]):(C_word)C_i_cadr(((C_word*)t0)[6]));
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4570,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4572,a[2]=t5,a[3]=lf[208],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 981  ##compiler#fold-boolean */
t8=C_retrieve(lf[209]);
((C_proc4)C_retrieve_proc(t8))(4,t8,t6,t7,t1);}

/* a4571 in k4539 in k4536 in k4533 in k4530 in k4508 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4572(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4572,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_list(&a,2,t2,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[47],lf[192],((C_word*)t0)[2],t4));}

/* k4568 in k4539 in k4536 in k4533 in k4530 in k4508 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4570,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t1);
t3=(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[207],t2);
/* optimizer.scm: 971  fold-right */
t4=C_retrieve(lf[165]);
((C_proc6)C_retrieve_proc(t4))(6,t4,((C_word*)t0)[5],((C_word*)t0)[4],t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a4545 in k4539 in k4536 in k4533 in k4530 in k4508 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4546(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4546,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_a_i_list(&a,1,t3);
t6=(C_word)C_a_i_list(&a,2,t2,t4);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[47],lf[12],t5,t6));}

/* k4524 in k4508 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4526,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[204],t2));}

/* k4481 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4486,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_4486(2,t3,t1);}
else{
/* optimizer.scm: 956  test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[61]);}}

/* k4484 in k4481 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=t2;
((C_proc6)C_retrieve_proc(t3))(6,t3,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4420 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4422,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4425,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_4425(2,t3,t1);}
else{
/* optimizer.scm: 945  test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[61]);}}

/* k4423 in k4420 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4425,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4438,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4449,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_caddr(((C_word*)t0)[5]);
/* optimizer.scm: 950  ##compiler#qnode */
t7=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,t6);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4447 in k4423 in k4420 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4449,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* optimizer.scm: 949  append */
t3=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k4436 in k4423 in k4420 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4438,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,4,lf[47],lf[192],((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[203],t3));}

/* k4355 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4357(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4357,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_i_cadr(((C_word*)t0)[5]);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=((C_word*)t0)[4];
t7=(C_word)C_a_i_record(&a,4,lf[47],lf[192],t5,t6);
t8=(C_word)C_a_i_list(&a,1,t7);
t9=(C_word)C_a_i_record(&a,4,lf[47],lf[192],t3,t8);
t10=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t9);
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[202],t10));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4262 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4267,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=t2;
f_4267(2,t3,t1);}
else{
/* optimizer.scm: 918  test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[62]);}}

/* k4265 in k4262 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4267(C_word c,C_word t0,C_word t1){
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
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4267,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_length(((C_word*)t0)[5]);
t3=(C_word)C_eqp(C_fix(1),t2);
if(C_truep(t3)){
t4=(C_word)C_i_caddr(((C_word*)t0)[4]);
t5=(C_word)C_i_not(t4);
t6=(C_truep(t5)?t5:(C_word)C_eqp(t4,C_retrieve(lf[200])));
if(C_truep(t6)){
t7=(C_word)C_i_car(((C_word*)t0)[4]);
t8=(C_word)C_a_i_list(&a,1,t7);
t9=(C_word)C_i_car(((C_word*)t0)[5]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4309,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t8,a[5]=t9,tmp=(C_word)a,a+=6,tmp);
t11=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* optimizer.scm: 926  ##compiler#qnode */
t12=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t12))(3,t12,t10,t11);}
else{
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4307 in k4265 in k4262 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4309,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_record(&a,4,lf[47],lf[192],((C_word*)t0)[4],t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[201],t4));}

/* k4206 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4208(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4208,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,2,C_SCHEME_FALSE,t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4221,a[2]=((C_word*)t0)[5],a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[5]);
/* optimizer.scm: 907  ##compiler#varnode */
t6=C_retrieve(lf[66]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4219 in k4206 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4221,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4229,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(C_word)C_i_cadr(((C_word*)t0)[2]);
/* optimizer.scm: 910  ##compiler#qnode */
t5=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}

/* k4227 in k4219 in k4206 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4229,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,5,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t1,t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[47],lf[15],((C_word*)t0)[2],t3));}

/* k4162 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4164,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4167,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t1)){
t3=t2;
f_4167(2,t3,t1);}
else{
/* optimizer.scm: 897  test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[61]);}}

/* k4165 in k4162 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4167(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4167,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4177,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
/* optimizer.scm: 898  ##compiler#varnode */
t4=C_retrieve(lf[66]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4175 in k4165 in k4162 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4177,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[199],t2));}

/* k4058 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4060,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4063,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_4063(2,t3,t1);}
else{
/* optimizer.scm: 879  test */
t3=((C_word*)t0)[3];
f_3936(t3,t2,((C_word*)t0)[2],lf[62]);}}

/* k4061 in k4058 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4063(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4063,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_caddr(((C_word*)t0)[6]);
t3=(C_truep(t2)?t2:C_retrieve(lf[195]));
if(C_truep(t3)){
t4=(C_word)C_i_car(((C_word*)t0)[5]);
t5=(C_word)C_i_cadddr(((C_word*)t0)[6]);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4088,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4091,a[2]=((C_word*)t0)[6],a[3]=t6,a[4]=((C_word*)t0)[5],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t8=(C_word)C_slot(t4,C_fix(1));
t9=(C_word)C_eqp(lf[10],t8);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4120,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t11=(C_word)C_slot(t4,C_fix(2));
t12=(C_word)C_i_car(t11);
/* optimizer.scm: 889  ##compiler#get */
t13=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t13))(5,t13,t10,((C_word*)t0)[2],t12,lf[198]);}
else{
t10=t7;
f_4091(t10,C_SCHEME_FALSE);}}
else{
t8=t7;
f_4091(t8,C_SCHEME_FALSE);}}
else{
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4118 in k4061 in k4058 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_4091(t2,(C_word)C_eqp(lf[197],t1));}

/* k4089 in k4061 in k4058 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_4091(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4091,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
t4=((C_word*)t0)[3];
f_4088(t4,(C_word)C_a_i_record(&a,4,lf[47],lf[192],t2,t3));}
else{
t2=(C_word)C_i_cadr(((C_word*)t0)[2]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=((C_word*)t0)[4];
t5=((C_word*)t0)[3];
f_4088(t5,(C_word)C_a_i_record(&a,4,lf[47],lf[192],t3,t4));}}

/* k4086 in k4061 in k4058 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_4088(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4088,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[196],t2));}

/* k3950 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3952(C_word c,C_word t0,C_word t1){
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
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3952,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3955,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_length(((C_word*)t0)[3]);
t4=(C_word)C_i_car(((C_word*)t0)[4]);
t5=(C_word)C_eqp(t3,t4);
if(C_truep(t5)){
t6=(C_word)C_i_car(((C_word*)t0)[3]);
t7=(C_word)C_i_cadr(((C_word*)t0)[3]);
t8=(C_word)C_slot(t6,C_fix(1));
t9=(C_word)C_eqp(lf[10],t8);
if(C_truep(t9)){
t10=(C_word)C_slot(t7,C_fix(1));
t11=(C_word)C_eqp(lf[10],t10);
if(C_truep(t11)){
t12=(C_word)C_slot(t6,C_fix(2));
t13=(C_word)C_slot(t7,C_fix(2));
if(C_truep((C_word)C_i_equalp(t12,t13))){
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4015,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 868  ##compiler#qnode */
t15=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t15))(3,t15,t14,C_SCHEME_TRUE);}
else{
t14=t2;
f_3955(t14,C_SCHEME_FALSE);}}
else{
t12=t2;
f_3955(t12,C_SCHEME_FALSE);}}
else{
t10=t2;
f_3955(t10,C_SCHEME_FALSE);}}
else{
t6=t2;
f_3955(t6,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k4013 in k3950 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_4015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4015,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
f_3955(t3,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[194],t2));}

/* k3953 in k3950 in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_3955(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3955,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
if(C_truep(C_retrieve(lf[191]))){
t2=(C_word)C_i_cadr(((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=((C_word*)t0)[3];
t5=(C_word)C_a_i_record(&a,4,lf[47],lf[192],t3,t4);
t6=(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t5);
t7=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[193],t6));}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}}

/* test in ##compiler#simplify-named-call in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_3936(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3936,NULL,4,t0,t1,t2,t3);}
/* optimizer.scm: 854  ##compiler#get */
t4=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,((C_word*)t0)[2],t2,t3);}

/* ##compiler#rewrite in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3913(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_3913r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3913r(t0,t1,t2,t3);}}

static void C_ccall f_3913r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3917,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 850  ##sys#hash-table-ref */
t5=C_retrieve(lf[40]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,C_retrieve(lf[186]),t2);}

/* k3915 in ##compiler#rewrite in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3917,2,t0,t1);}
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3927,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
/* optimizer.scm: 851  append */
t5=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t2,t4);}

/* k3925 in k3915 in ##compiler#rewrite in k3909 in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 851  ##sys#hash-table-set! */
t2=C_retrieve(lf[157]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],C_retrieve(lf[186]),((C_word*)t0)[2],t1);}

/* ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3585(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_3585,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3589,a[2]=t3,a[3]=t2,a[4]=t4,a[5]=t1,a[6]=t6,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 762  map */
t8=*((C_word*)lf[183]+1);
((C_proc5)C_retrieve_proc(t8))(5,t8,t7,*((C_word*)lf[184]+1),t2,t3);}

/* k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3589(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3589,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3591,a[2]=((C_word*)t0)[6],a[3]=lf[162],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3636,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3898,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[6],a[4]=lf[181],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 773  for-each */
t5=*((C_word*)lf[182]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a3897 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3898(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3898,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3903,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3907,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 774  ##compiler#scan-used-variables */
t6=C_retrieve(lf[180]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t3,((C_word*)t0)[2]);}

/* k3905 in a3897 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 774  alist-cons */
t2=C_retrieve(lf[33]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k3901 in a3897 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3636,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_END_OF_LIST;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3639,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3840,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t5,a[6]=lf[179],tmp=(C_word)a,a+=7,tmp);
/* for-each */
t8=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,t7,((C_word*)t0)[2]);}

/* a3839 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3840(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3840,3,t0,t1,t2);}
if(C_truep((C_word)C_i_memq(t2,((C_word*)((C_word*)t0)[5])[1]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3850,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3872,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=lf[178],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 783  filter */
t5=C_retrieve(lf[174]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,((C_word*)t0)[2]);}}

/* a3871 in a3839 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3872(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3872,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3885,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 784  find-path */
t5=((C_word*)t0)[2];
f_3591(t5,t4,((C_word*)t0)[3],t2);}}

/* k3883 in a3871 in a3839 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* optimizer.scm: 784  find-path */
t2=((C_word*)t0)[5];
f_3591(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k3848 in a3839 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3850,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3854,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3866,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 786  gensym */
t4=C_retrieve(lf[105]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k3864 in k3848 in a3839 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3866,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
/* optimizer.scm: 786  alist-cons */
t3=C_retrieve(lf[33]);
((C_proc5)C_retrieve_proc(t3))(5,t3,((C_word*)t0)[3],t1,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* k3852 in k3848 in a3839 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3854,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[6])+1,t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3858,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[3]);
/* optimizer.scm: 787  append */
t5=*((C_word*)lf[3]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,t4,((C_word*)t0)[2],((C_word*)((C_word*)t0)[5])[1]);}

/* k3856 in k3852 in k3848 in a3839 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3639,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3642,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3781,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[7],a[5]=t3,a[6]=lf[177],tmp=(C_word)a,a+=7,tmp);
/* for-each */
t6=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)((C_word*)t0)[7])[1]);}

/* a3780 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3781(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3781,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3788,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t3,a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3824,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=lf[175],tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_cdr(t2);
/* optimizer.scm: 796  append-map */
t7=C_retrieve(lf[176]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t4,t5,t6);}

/* a3823 in a3780 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3824(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3824,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3830,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=lf[173],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 797  filter */
t4=C_retrieve(lf[174]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,t3,((C_word*)t0)[2]);}

/* a3829 in a3823 in a3780 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3830(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3830,3,t0,t1,t2);}
/* optimizer.scm: 797  find-path */
t3=((C_word*)t0)[3];
f_3591(t3,t1,((C_word*)t0)[2],t2);}

/* k3786 in a3780 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3788,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3792,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3796,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3798,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=lf[171],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 802  filter-map */
t5=C_retrieve(lf[172]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,((C_word*)((C_word*)t0)[2])[1]);}

/* a3797 in k3786 in a3780 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3798(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3798,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3811,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_cdr(t2);
/* optimizer.scm: 803  lset<= */
t6=C_retrieve(lf[170]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t4,*((C_word*)lf[44]+1),t5,((C_word*)t0)[2]);}}

/* k3809 in a3797 in k3786 in a3780 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?(C_word)C_i_car(((C_word*)t0)[2]):C_SCHEME_FALSE));}

/* k3794 in k3786 in a3780 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3796(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 800  alist-cons */
t2=C_retrieve(lf[33]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k3790 in k3786 in a3780 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k3640 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3642,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3645,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 809  ##compiler#topological-sort */
t3=C_retrieve(lf[169]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],*((C_word*)lf[44]+1));}

/* k3643 in k3640 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3645(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3645,2,t0,t1);}
t2=C_SCHEME_END_OF_LIST;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3648,a[2]=((C_word*)t0)[6],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3665,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=lf[167],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 814  fold */
t6=C_retrieve(lf[168]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t4,t5,((C_word*)t0)[2],t1);}

/* a3664 in k3643 in k3640 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3665(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3665,4,t0,t1,t2,t3);}
t4=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[5])[1]);
t5=(C_word)C_i_cdr(t4);
t6=(C_word)C_i_car(t5);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3678,a[2]=t5,a[3]=t1,a[4]=t3,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t6,tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_i_cdr(t5);
if(C_truep((C_word)C_i_nullp(t8))){
t9=(C_word)C_i_assq(t6,((C_word*)((C_word*)t0)[2])[1]);
t10=(C_word)C_i_cdr(t9);
t11=(C_word)C_i_memq(t6,t10);
t12=t7;
f_3678(t12,(C_word)C_i_not(t11));}
else{
t9=t7;
f_3678(t9,C_SCHEME_FALSE);}}

/* k3676 in a3664 in k3643 in k3640 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_3678(C_word t0,C_word t1){
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
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3678,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[6])+1,t2);
t4=(C_word)C_i_assq(((C_word*)t0)[7],((C_word*)t0)[5]);
t5=(C_word)C_i_cdr(t4);
t6=(C_word)C_a_i_list(&a,2,t5,((C_word*)t0)[4]);
t7=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[47],lf[12],((C_word*)t0)[2],t6));}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3701,a[2]=lf[164],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3719,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3721,a[2]=((C_word*)t0)[5],a[3]=lf[166],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 828  fold-right */
t5=C_retrieve(lf[165]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,t4,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* a3720 in k3676 in a3664 in k3643 in k3640 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3721(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3721,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3753,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 831  gensym */
t5=C_retrieve(lf[105]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k3751 in a3720 in k3676 in a3664 in k3643 in k3640 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3753,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
t4=(C_word)C_i_assq(((C_word*)t0)[5],((C_word*)t0)[4]);
t5=(C_word)C_i_cdr(t4);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_a_i_record(&a,4,lf[47],lf[16],t3,t6);
t8=(C_word)C_a_i_list(&a,2,t7,((C_word*)t0)[3]);
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_record(&a,4,lf[47],lf[12],t2,t8));}

/* k3717 in k3676 in a3664 in k3643 in k3640 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3719(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 823  fold-right */
t2=C_retrieve(lf[165]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* a3700 in k3676 in a3664 in k3643 in k3640 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3701(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[19],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3701,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_list(&a,1,t2);
t5=(C_word)C_a_i_record(&a,4,lf[47],lf[92],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t6=(C_word)C_a_i_list(&a,2,t5,t3);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_record(&a,4,lf[47],lf[12],t4,t6));}

/* k3646 in k3643 in k3640 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3648(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3648,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(((C_word*)((C_word*)t0)[3])[1]))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3657,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 840  ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[5],lf[163],((C_word*)((C_word*)t0)[3])[1]);}
else{
/* optimizer.scm: 842  values */
C_values(4,0,((C_word*)t0)[2],t1,C_SCHEME_FALSE);}}

/* k3655 in k3646 in k3643 in k3640 in k3637 in k3634 in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 841  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_TRUE);}

/* find-path in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_3591(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3591,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3597,a[2]=t5,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=lf[161],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_3597(t7,t1,t2,C_SCHEME_END_OF_LIST);}

/* find in find-path in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_fcall f_3597(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3597,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_memq(t2,t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_assq(t2,((C_word*)((C_word*)t0)[4])[1]);
t5=(C_word)C_i_cdr(t4);
t6=(C_word)C_i_memq(((C_word*)t0)[3],t5);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
t7=(C_word)C_a_i_cons(&a,2,t2,t3);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3621,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=lf[160],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 770  any */
t9=C_retrieve(lf[39]);
((C_proc4)C_retrieve_proc(t9))(4,t9,t1,t8,t5);}}}

/* a3620 in find in find-path in k3587 in ##compiler#reorganize-recursive-bindings in k3581 in k3578 in k3575 in k1633 */
static void C_ccall f_3621(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3621,3,t0,t1,t2);}
/* optimizer.scm: 770  find */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3597(t3,t1,t2,((C_word*)t0)[2]);}

/* register-simplifications in k1633 */
static void C_ccall f_3570(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_3570r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3570r(t0,t1,t2,t3);}}

static void C_ccall f_3570r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* optimizer.scm: 541  ##sys#hash-table-set! */
t4=C_retrieve(lf[157]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,*((C_word*)lf[25]+1),t2,t3);}

/* ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3109(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[19],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3109,4,t0,t1,t2,t3);}
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3112,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3116,a[2]=t3,a[3]=lf[139],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3123,a[2]=t3,a[3]=t9,a[4]=t8,a[5]=t7,a[6]=t5,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 454  ##compiler#debugging */
t11=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t11))(4,t11,t10,lf[22],lf[154]);}

/* k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3123(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3123,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3126,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3358,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 457  test */
t4=((C_word*)t0)[3];
f_3116(t4,t3,lf[153],lf[62]);}

/* k3356 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3358,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3363,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=lf[152],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3565,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 493  test */
t4=((C_word*)t0)[3];
f_3116(t4,t3,lf[153],lf[147]);}
else{
t2=((C_word*)t0)[2];
f_3126(2,t2,C_SCHEME_UNDEFINED);}}

/* k3563 in k3356 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
/* for-each */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a3362 in k3356 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3363(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3363,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_cadr(t4);
t6=(C_word)C_slot(t5,C_fix(2));
t7=(C_word)C_i_car(t6);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3376,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t1,a[8]=((C_word*)t0)[4],tmp=(C_word)a,a+=9,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3554,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 463  test */
t10=((C_word*)t0)[2];
f_3116(t10,t9,t7,lf[100]);}

/* k3552 in a3362 in k3356 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_3376(2,t2,C_SCHEME_FALSE);}
else{
/* optimizer.scm: 463  test */
t2=((C_word*)t0)[3];
f_3116(t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[64]);}}

/* k3374 in a3362 in k3356 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3376(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3376,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3379,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 464  test */
t3=((C_word*)t0)[3];
f_3116(t3,t2,((C_word*)t0)[2],lf[99]);}

/* k3377 in k3374 in a3362 in k3356 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3379(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3379,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3385,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[8])){
if(C_truep(t1)){
t3=(C_word)C_i_length(t1);
t4=(C_word)C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=(C_word)C_i_length(((C_word*)t0)[4]);
t6=(C_word)C_eqp(C_fix(3),t5);
if(C_truep(t6)){
t7=(C_word)C_slot(((C_word*)t0)[8],C_fix(1));
t8=t2;
f_3385(t8,(C_word)C_eqp(lf[73],t7));}
else{
t7=t2;
f_3385(t7,C_SCHEME_FALSE);}}
else{
t5=t2;
f_3385(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_3385(t3,C_SCHEME_FALSE);}}
else{
t3=t2;
f_3385(t3,C_SCHEME_FALSE);}}

/* k3383 in k3377 in k3374 in a3362 in k3356 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_fcall f_3385(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3385,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[8],C_fix(2));
t3=(C_word)C_i_caddr(t2);
t4=(C_word)C_slot(((C_word*)t0)[8],C_fix(3));
t5=(C_word)C_i_car(t4);
t6=(C_word)C_slot(t5,C_fix(3));
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t6,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t5,a[10]=t3,tmp=(C_word)a,a+=11,tmp);
if(C_truep((C_word)C_i_listp(t3))){
t8=(C_word)C_i_cdr(t3);
t9=t7;
f_3400(t9,(C_word)C_i_nullp(t8));}
else{
t8=t7;
f_3400(t8,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k3398 in k3383 in k3377 in k3374 in a3362 in k3356 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_fcall f_3400(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3400,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[10]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3406,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 475  test */
t4=((C_word*)t0)[2];
f_3116(t4,t3,t2,lf[99]);}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k3404 in k3398 in k3383 in k3377 in k3374 in a3362 in k3356 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t1)){
t3=(C_word)C_i_length(t1);
t4=(C_word)C_eqp(C_fix(1),t3);
if(C_truep(t4)){
t5=(C_word)C_slot(((C_word*)t0)[9],C_fix(1));
t6=t2;
f_3412(t6,(C_word)C_eqp(lf[11],t5));}
else{
t5=t2;
f_3412(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_3412(t3,C_SCHEME_FALSE);}}

/* k3410 in k3404 in k3398 in k3383 in k3377 in k3374 in a3362 in k3356 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_fcall f_3412(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3412,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[9],C_fix(3));
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3421,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_slot(t3,C_fix(1));
t6=(C_word)C_eqp(lf[10],t5);
if(C_truep(t6)){
t7=(C_word)C_slot(t3,C_fix(2));
t8=(C_word)C_i_car(t7);
t9=t4;
f_3421(t9,(C_word)C_eqp(((C_word*)t0)[2],t8));}
else{
t7=t4;
f_3421(t7,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k3419 in k3410 in k3404 in k3398 in k3383 in k3377 in k3374 in a3362 in k3356 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_fcall f_3421(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3421,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[8])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[8])+1,t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3428,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 487  node-parameters-set! */
t5=C_retrieve(lf[142]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[2],lf[151]);}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k3426 in k3419 in k3410 in k3404 in k3398 in k3383 in k3377 in k3374 in a3362 in k3356 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3428,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3431,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 488  node-subexpressions-set! */
t4=C_retrieve(lf[141]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[2],t3);}

/* k3429 in k3426 in k3419 in k3410 in k3404 in k3398 in k3383 in k3377 in k3374 in a3362 in k3356 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3434,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3449,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 491  reverse */
t6=*((C_word*)lf[150]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}

/* k3447 in k3429 in k3426 in k3419 in k3410 in k3404 in k3398 in k3383 in k3377 in k3374 in a3362 in k3356 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3449,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* optimizer.scm: 489  node-subexpressions-set! */
t3=C_retrieve(lf[141]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k3432 in k3429 in k3426 in k3419 in k3410 in k3404 in k3398 in k3383 in k3377 in k3374 in a3362 in k3356 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 492  touch */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,f_3112(((C_word*)t0)[2]));}

/* k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3126,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3129,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3140,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[148],tmp=(C_word)a,a+=6,tmp);
/* for-each */
t4=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_retrieve(lf[149]));}

/* a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3140(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3140,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3147,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 498  test */
t4=((C_word*)t0)[3];
f_3116(t4,t3,t2,lf[62]);}

/* k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3147,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3152,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=lf[146],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3352,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 531  test */
t4=((C_word*)t0)[4];
f_3116(t4,t3,((C_word*)t0)[5],lf[147]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k3350 in k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?t1:C_SCHEME_END_OF_LIST);
/* for-each */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a3151 in k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3152(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3152,3,t0,t1,t2);}
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_i_cadr(t4);
t6=(C_word)C_slot(t5,C_fix(2));
t7=(C_word)C_i_car(t6);
t8=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3165,a[2]=t7,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=t4,a[8]=((C_word*)t0)[5],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 504  test */
t9=((C_word*)t0)[3];
f_3116(t9,t8,t7,lf[99]);}

/* k3163 in a3151 in k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3165,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3168,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3341,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 505  test */
t4=((C_word*)t0)[4];
f_3116(t4,t3,((C_word*)t0)[2],lf[100]);}

/* k3339 in k3163 in a3151 in k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_3168(2,t2,C_SCHEME_FALSE);}
else{
/* optimizer.scm: 505  test */
t2=((C_word*)t0)[3];
f_3116(t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[64]);}}

/* k3166 in k3163 in a3151 in k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3168(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3168,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3174,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=t1,tmp=(C_word)a,a+=9,tmp);
if(C_truep(t1)){
t3=(C_word)C_slot(t1,C_fix(1));
t4=(C_word)C_eqp(lf[73],t3);
if(C_truep(t4)){
if(C_truep(((C_word*)t0)[3])){
t5=(C_word)C_i_length(((C_word*)t0)[3]);
t6=(C_word)C_eqp(C_fix(1),t5);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3313,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3315,a[2]=((C_word*)t0)[2],a[3]=lf[145],tmp=(C_word)a,a+=4,tmp);
t9=(C_word)C_i_cddr(((C_word*)t0)[7]);
/* optimizer.scm: 510  any */
t10=C_retrieve(lf[39]);
((C_proc4)C_retrieve_proc(t10))(4,t10,t7,t8,t9);}
else{
t7=t2;
f_3174(t7,C_SCHEME_FALSE);}}
else{
t5=t2;
f_3174(t5,C_SCHEME_FALSE);}}
else{
t5=t2;
f_3174(t5,C_SCHEME_FALSE);}}
else{
t3=t2;
f_3174(t3,C_SCHEME_FALSE);}}

/* a3314 in k3166 in k3163 in a3151 in k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3315(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3315,3,t0,t1,t2);}
/* optimizer.scm: 510  ##compiler#expression-has-side-effects? */
t3=C_retrieve(lf[96]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* k3311 in k3166 in k3163 in a3151 in k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_3174(t2,(C_word)C_i_not(t1));}

/* k3172 in k3166 in k3163 in a3151 in k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_fcall f_3174(C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3174,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[8],C_fix(2));
t3=(C_word)C_i_caddr(t2);
t4=(C_word)C_slot(((C_word*)t0)[8],C_fix(3));
t5=(C_word)C_i_car(t4);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3186,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t5,a[9]=t3,tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_word)C_i_listp(t3))){
t7=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t7))){
t8=(C_word)C_slot(t5,C_fix(1));
t9=t6;
f_3186(t9,(C_word)C_eqp(lf[11],t8));}
else{
t8=t6;
f_3186(t8,C_SCHEME_FALSE);}}
else{
t7=t6;
f_3186(t7,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k3184 in k3172 in k3166 in k3163 in a3151 in k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_fcall f_3186(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3186,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3192,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 518  test */
t4=((C_word*)t0)[2];
f_3116(t4,t3,t2,lf[99]);}
else{
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k3190 in k3184 in k3172 in k3166 in k3163 in a3151 in k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3192(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3192,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[8],C_fix(3));
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3201,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t1)){
t5=(C_word)C_i_length(t1);
t6=(C_word)C_eqp(C_fix(1),t5);
if(C_truep(t6)){
t7=(C_word)C_slot(t3,C_fix(1));
t8=(C_word)C_eqp(lf[10],t7);
if(C_truep(t8)){
t9=(C_word)C_slot(t3,C_fix(2));
t10=(C_word)C_i_car(t9);
t11=t4;
f_3201(t11,(C_word)C_eqp(((C_word*)t0)[2],t10));}
else{
t9=t4;
f_3201(t9,C_SCHEME_FALSE);}}
else{
t7=t4;
f_3201(t7,C_SCHEME_FALSE);}}
else{
t5=t4;
f_3201(t5,C_SCHEME_FALSE);}}

/* k3199 in k3190 in k3184 in k3172 in k3166 in k3163 in a3151 in k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_fcall f_3201(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3201,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[7],C_fix(3));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3207,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 527  ##compiler#debugging */
t4=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[5],lf[144],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k3205 in k3199 in k3190 in k3184 in k3172 in k3166 in k3163 in a3151 in k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3207(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3207,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3210,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 528  node-parameters-set! */
t3=C_retrieve(lf[142]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],lf[143]);}

/* k3208 in k3205 in k3199 in k3190 in k3184 in k3172 in k3166 in k3163 in a3151 in k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3210,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3213,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3228,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 529  ##compiler#qnode */
t5=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,C_SCHEME_TRUE);}

/* k3226 in k3208 in k3205 in k3199 in k3190 in k3184 in k3172 in k3166 in k3163 in a3151 in k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3228,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
/* optimizer.scm: 529  node-subexpressions-set! */
t3=C_retrieve(lf[141]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k3211 in k3208 in k3205 in k3199 in k3190 in k3184 in k3172 in k3166 in k3163 in a3151 in k3145 in a3139 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 530  touch */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,f_3112(((C_word*)t0)[2]));}

/* k3127 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3132,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
/* optimizer.scm: 534  ##compiler#debugging */
t4=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,lf[5],lf[140],((C_word*)((C_word*)t0)[2])[1]);}
else{
t4=t2;
f_3132(2,t4,C_SCHEME_UNDEFINED);}}

/* k3130 in k3127 in k3124 in k3121 in ##compiler#perform-pre-optimization! in k1633 */
static void C_ccall f_3132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* test in ##compiler#perform-pre-optimization! in k1633 */
static void C_fcall f_3116(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3116,NULL,4,t0,t1,t2,t3);}
/* optimizer.scm: 452  ##compiler#get */
t4=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,((C_word*)t0)[2],t2,t3);}

/* touch in ##compiler#perform-pre-optimization! in k1633 */
static C_word C_fcall f_3112(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_check;
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(C_SCHEME_TRUE);}

/* ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1638(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word t27;
C_word t28;
C_word t29;
C_word t30;
C_word t31;
C_word t32;
C_word t33;
C_word ab[77],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1638,4,t0,t1,t2,t3);}
t4=C_fix(0);
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_fix(0);
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_fix(0);
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_SCHEME_END_OF_LIST;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_SCHEME_FALSE;
t15=(*a=C_VECTOR_TYPE|1,a[1]=t14,tmp=(C_word)a,a+=2,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1641,a[2]=t3,a[3]=lf[29],tmp=(C_word)a,a+=4,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1647,a[2]=lf[31],tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1657,a[2]=lf[32],tmp=(C_word)a,a+=3,tmp);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1667,a[2]=t15,tmp=(C_word)a,a+=3,tmp);
t20=C_SCHEME_UNDEFINED;
t21=(*a=C_VECTOR_TYPE|1,a[1]=t20,tmp=(C_word)a,a+=2,tmp);
t22=C_set_block_item(t21,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1671,a[2]=t3,a[3]=t21,a[4]=t19,a[5]=t13,a[6]=lf[41],tmp=(C_word)a,a+=7,tmp));
t23=C_SCHEME_UNDEFINED;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=C_SCHEME_UNDEFINED;
t26=(*a=C_VECTOR_TYPE|1,a[1]=t25,tmp=(C_word)a,a+=2,tmp);
t27=C_SCHEME_UNDEFINED;
t28=(*a=C_VECTOR_TYPE|1,a[1]=t27,tmp=(C_word)a,a+=2,tmp);
t29=C_set_block_item(t24,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1763,a[2]=t26,a[3]=t16,a[4]=t17,a[5]=t24,a[6]=t18,a[7]=t19,a[8]=t7,a[9]=t21,a[10]=t15,a[11]=lf[63],tmp=(C_word)a,a+=12,tmp));
t30=C_set_block_item(t26,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1979,a[2]=t11,a[3]=t3,a[4]=t28,a[5]=t24,a[6]=t5,a[7]=t9,a[8]=t16,a[9]=t19,a[10]=lf[125],tmp=(C_word)a,a+=11,tmp));
t31=C_set_block_item(t28,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2994,a[2]=t24,a[3]=lf[126],tmp=(C_word)a,a+=4,tmp));
t32=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3013,a[2]=t24,a[3]=t13,a[4]=t9,a[5]=t5,a[6]=t7,a[7]=t15,a[8]=t2,a[9]=t1,tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 420  ##compiler#perform-pre-optimization! */
t33=C_retrieve(lf[137]);
((C_proc4)C_retrieve_proc(t33))(4,t33,t32,t2,t3);}

/* k3011 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_3013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3013,2,t0,t1);}
if(C_truep(t1)){
/* optimizer.scm: 421  values */
C_values(4,0,((C_word*)t0)[9],((C_word*)t0)[8],C_SCHEME_TRUE);}
else{
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3019,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 423  ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[22],lf[136]);}}

/* k3017 in k3011 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_3019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3019,2,t0,t1);}
t2=C_set_block_item(lf[26],0,C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3023,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 425  walk */
t4=((C_word*)((C_word*)t0)[3])[1];
f_1763(3,t4,t3,((C_word*)t0)[2]);}

/* k3021 in k3017 in k3011 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_3023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3023,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3026,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)((C_word*)t0)[2])[1]))){
/* optimizer.scm: 426  ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[5],lf[135],((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=t2;
f_3026(2,t3,C_SCHEME_UNDEFINED);}}

/* k3024 in k3021 in k3017 in k3011 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_3026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3026,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3029,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3062,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(C_retrieve(lf[26])))){
/* optimizer.scm: 427  ##compiler#debugging */
t4=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[5],lf[134]);}
else{
t4=t3;
f_3062(2,t4,C_SCHEME_FALSE);}}

/* k3060 in k3024 in k3021 in k3017 in k3011 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_3062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3062,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3067,a[2]=lf[133],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t3=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,C_retrieve(lf[26]));}
else{
t2=((C_word*)t0)[2];
f_3029(2,t2,C_SCHEME_UNDEFINED);}}

/* a3066 in k3060 in k3024 in k3021 in k3017 in k3011 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_3067(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3067,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3071,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_car(t2);
/* optimizer.scm: 430  print* */
t5=*((C_word*)lf[132]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,C_make_character(9),t4);}

/* k3069 in a3066 in k3060 in k3024 in k3021 in k3017 in k3011 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_3071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(1)))){
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* optimizer.scm: 432  print */
t4=*((C_word*)lf[130]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,((C_word*)t0)[2],C_make_character(9),t3);}
else{
/* optimizer.scm: 433  newline */
t3=*((C_word*)lf[131]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,((C_word*)t0)[2]);}}

/* k3027 in k3024 in k3021 in k3017 in k3011 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_3029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3029,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3032,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
/* optimizer.scm: 435  ##compiler#debugging */
t4=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,lf[5],lf[129],((C_word*)((C_word*)t0)[2])[1]);}
else{
t4=t2;
f_3032(2,t4,C_SCHEME_UNDEFINED);}}

/* k3030 in k3027 in k3024 in k3021 in k3017 in k3011 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_3032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3032,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3035,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
/* optimizer.scm: 436  ##compiler#debugging */
t4=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,lf[5],lf[128],((C_word*)((C_word*)t0)[2])[1]);}
else{
t4=t2;
f_3035(2,t4,C_SCHEME_UNDEFINED);}}

/* k3033 in k3030 in k3027 in k3024 in k3021 in k3017 in k3011 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_3035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3035,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3038,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=((C_word*)((C_word*)t0)[2])[1];
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
/* optimizer.scm: 437  ##compiler#debugging */
t4=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,lf[5],lf[127],((C_word*)((C_word*)t0)[2])[1]);}
else{
t4=t2;
f_3038(2,t4,C_SCHEME_UNDEFINED);}}

/* k3036 in k3033 in k3030 in k3027 in k3024 in k3021 in k3017 in k3011 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_3038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 438  values */
C_values(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* walk-generic in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_2994(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2994,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2998,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* map */
t7=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)((C_word*)t0)[2])[1],t5);}

/* k2996 in walk-generic in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2998,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3004,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 416  every */
t3=C_retrieve(lf[59]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,*((C_word*)lf[44]+1),((C_word*)t0)[2],t1);}

/* k3002 in k2996 in walk-generic in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_3004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3004,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}
else{
t2=((C_word*)t0)[4];
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_record(&a,4,lf[47],t2,t3,((C_word*)t0)[2]));}}

/* walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_1979(C_word t0,C_word t1,C_word t2){
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
C_word ab[69],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1979,NULL,3,t0,t1,t2);}
t3=t2;
t4=(C_word)C_slot(t3,C_fix(3));
t5=t2;
t6=(C_word)C_slot(t5,C_fix(2));
t7=t2;
t8=(C_word)C_slot(t7,C_fix(1));
t9=(C_word)C_eqp(t8,lf[10]);
if(C_truep(t9)){
t10=(C_word)C_i_car(t6);
t11=C_SCHEME_UNDEFINED;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_set_block_item(t12,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2004,a[2]=((C_word*)t0)[7],a[3]=t6,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t12,a[7]=lf[69],tmp=(C_word)a,a+=8,tmp));
t14=((C_word*)t12)[1];
f_2004(t14,t1,t10);}
else{
t10=(C_word)C_eqp(t8,lf[12]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t6);
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2079,a[2]=t11,a[3]=((C_word*)t0)[8],a[4]=t6,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t4,a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 251  test */
t13=((C_word*)t0)[8];
f_1641(t13,t12,t11,lf[68]);}
else{
t11=(C_word)C_eqp(t8,lf[73]);
if(C_truep(t11)){
t12=(C_word)C_i_caddr(t6);
t13=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2136,a[2]=t8,a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t12,a[6]=t1,a[7]=((C_word*)t0)[5],a[8]=t4,a[9]=t6,a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
t14=(C_word)C_i_car(t6);
/* optimizer.scm: 261  test */
t15=((C_word*)t0)[8];
f_1641(t15,t13,t14,lf[87]);}
else{
t12=(C_word)C_eqp(t8,lf[15]);
if(C_truep(t12)){
t13=(C_word)C_i_car(t4);
t14=(C_word)C_slot(t13,C_fix(1));
t15=(C_word)C_eqp(t14,lf[10]);
if(C_truep(t15)){
t16=(C_word)C_slot(t13,C_fix(2));
t17=(C_word)C_i_car(t16);
t18=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2312,a[2]=((C_word*)t0)[2],a[3]=t13,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],a[6]=t6,a[7]=t8,a[8]=t2,a[9]=((C_word*)t0)[4],a[10]=t17,a[11]=t1,a[12]=((C_word*)t0)[5],a[13]=((C_word*)t0)[9],a[14]=t4,tmp=(C_word)a,a+=15,tmp);
t19=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2854,a[2]=t17,a[3]=((C_word*)t0)[8],a[4]=t18,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 299  test */
t20=((C_word*)t0)[8];
f_1641(t20,t19,t17,lf[100]);}
else{
t16=(C_word)C_eqp(t14,lf[73]);
if(C_truep(t16)){
if(C_truep((C_word)C_i_car(t6))){
/* optimizer.scm: 393  walk-generic */
t17=((C_word*)((C_word*)t0)[4])[1];
f_2994(t17,t1,t2,t8,t6,t4);}
else{
t17=(C_word)C_i_cdr(t6);
t18=(C_word)C_a_i_cons(&a,2,C_SCHEME_TRUE,t17);
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2879,a[2]=t18,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* map */
t20=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t20+1)))(4,t20,t19,((C_word*)((C_word*)t0)[5])[1],t4);}}
else{
/* optimizer.scm: 395  walk-generic */
t17=((C_word*)((C_word*)t0)[4])[1];
f_2994(t17,t1,t2,t8,t6,t4);}}}
else{
t13=(C_word)C_eqp(t8,lf[16]);
if(C_truep(t13)){
t14=(C_word)C_i_car(t6);
t15=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2904,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=t6,a[7]=t14,a[8]=t1,a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 399  test */
t16=((C_word*)t0)[8];
f_1641(t16,t15,t14,lf[71]);}
else{
/* optimizer.scm: 412  walk-generic */
t14=((C_word*)((C_word*)t0)[4])[1];
f_2994(t14,t1,t2,t8,t6,t4);}}}}}}

/* k2902 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2904,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2907,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(t1)){
t3=t2;
f_2907(2,t3,t1);}
else{
/* optimizer.scm: 399  test */
t3=((C_word*)t0)[2];
f_1641(t3,t2,((C_word*)t0)[7],lf[68]);}}

/* k2905 in k2902 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2907,2,t0,t1);}
if(C_truep(t1)){
t2=f_1667(((C_word*)t0)[9]);
t3=((C_word*)t0)[8];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[92],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2919,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2986,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 402  test */
t4=((C_word*)t0)[2];
f_1641(t4,t3,((C_word*)t0)[7],lf[124]);}}

/* k2984 in k2905 in k2902 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2986,2,t0,t1);}
t2=(C_word)C_i_not(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t4=t3;
f_2948(t4,t2);}
else{
t4=C_retrieve(lf[122]);
if(C_truep(t4)){
t5=t3;
f_2948(t5,t4);}
else{
if(C_truep(C_retrieve(lf[123]))){
t5=(C_word)C_i_memq(((C_word*)t0)[2],C_retrieve(lf[123]));
t6=t3;
f_2948(t6,(C_word)C_i_not(t5));}
else{
t5=t3;
f_2948(t5,C_SCHEME_FALSE);}}}}

/* k2946 in k2984 in k2905 in k2902 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_2948(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2948,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2969,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 405  test */
t3=((C_word*)t0)[3];
f_1641(t3,t2,((C_word*)t0)[2],lf[99]);}
else{
t2=((C_word*)t0)[6];
f_2919(t2,C_SCHEME_FALSE);}}

/* k2967 in k2946 in k2984 in k2905 in k2902 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2969,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_2919(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2961,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* optimizer.scm: 406  ##compiler#expression-has-side-effects? */
t4=C_retrieve(lf[96]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,((C_word*)t0)[2]);}}

/* k2959 in k2967 in k2946 in k2984 in k2905 in k2902 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2919(t2,(C_word)C_i_not(t1));}

/* k2917 in k2905 in k2902 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_2919(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2919,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=f_1667(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2925,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 408  ##compiler#debugging */
t4=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[5],lf[121],((C_word*)t0)[5]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2938,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* optimizer.scm: 410  walk */
t4=((C_word*)((C_word*)t0)[2])[1];
f_1763(3,t4,t2,t3);}}

/* k2936 in k2917 in k2905 in k2902 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2938,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[16],((C_word*)t0)[2],t2));}

/* k2923 in k2917 in k2905 in k2902 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2925,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[47],lf[92],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST));}

/* k2877 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2879,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[47],lf[15],((C_word*)t0)[2],t1));}

/* k2852 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_2312(2,t2,C_SCHEME_FALSE);}
else{
/* optimizer.scm: 299  test */
t2=((C_word*)t0)[3];
f_1641(t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[64]);}}

/* k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2312,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[14]);
t3=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2321,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[14],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=t2,a[13]=((C_word*)t0)[11],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[13],a[16]=t1,tmp=(C_word)a,a+=17,tmp);
/* optimizer.scm: 301  test */
t4=((C_word*)t0)[4];
f_1641(t4,t3,((C_word*)t0)[10],lf[71]);}

/* k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2321(C_word c,C_word t0,C_word t1){
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
C_word ab[47],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2321,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[16],C_fix(2));
t3=(C_word)C_i_caddr(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2330,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[12],a[4]=t3,a[5]=((C_word*)t0)[16],a[6]=((C_word*)t0)[13],a[7]=((C_word*)t0)[14],a[8]=((C_word*)t0)[15],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 304  ##compiler#check-signature */
t5=C_retrieve(lf[90]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[11],((C_word*)t0)[12],t3);}
else{
if(C_truep((C_word)C_i_memq(((C_word*)t0)[11],C_retrieve(lf[91])))){
t2=(C_word)C_i_car(((C_word*)t0)[12]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2363,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[13],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t2)){
t4=(C_word)C_slot(t2,C_fix(1));
t5=(C_word)C_eqp(lf[10],t4);
if(C_truep(t5)){
t6=(C_word)C_slot(t2,C_fix(2));
t7=(C_word)C_i_car(t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2384,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[11],a[6]=t2,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2481,a[2]=t7,a[3]=((C_word*)t0)[4],a[4]=t8,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 312  test */
t10=((C_word*)t0)[4];
f_1641(t10,t9,t7,lf[100]);}
else{
t8=t3;
f_2363(t8,C_SCHEME_FALSE);}}
else{
t6=t3;
f_2363(t6,C_SCHEME_FALSE);}}
else{
t4=t3;
f_2363(t4,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|16,a[1]=(C_word)f_2495,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],a[16]=((C_word*)t0)[16],tmp=(C_word)a,a+=17,tmp);
if(C_truep(((C_word*)t0)[16])){
t3=(C_word)C_slot(((C_word*)t0)[16],C_fix(1));
t4=t2;
f_2495(t4,(C_word)C_eqp(lf[73],t3));}
else{
t3=t2;
f_2495(t3,C_SCHEME_FALSE);}}}}

/* k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_2495(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2495,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[16],C_fix(2));
t3=(C_word)C_i_caddr(t2);
t4=(*a=C_CLOSURE_TYPE|18,a[1]=(C_word)f_2506,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=t3,a[14]=((C_word*)t0)[16],a[15]=((C_word*)t0)[14],a[16]=((C_word*)t0)[15],a[17]=t2,a[18]=lf[120],tmp=(C_word)a,a+=19,tmp);
/* optimizer.scm: 327  ##compiler#decompose-lambda-list */
t5=C_retrieve(lf[84]);
((C_proc4)C_retrieve_proc(t5))(4,t5,((C_word*)t0)[2],t3,t4);}
else{
/* optimizer.scm: 390  walk-generic */
t2=((C_word*)((C_word*)t0)[11])[1];
f_2994(t2,((C_word*)t0)[2],((C_word*)t0)[10],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}}

/* a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[28],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2506,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_car(((C_word*)t0)[17]);
t6=(*a=C_CLOSURE_TYPE|21,a[1]=(C_word)f_2516,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=t3,a[13]=t5,a[14]=((C_word*)t0)[17],a[15]=((C_word*)t0)[11],a[16]=((C_word*)t0)[12],a[17]=((C_word*)t0)[13],a[18]=((C_word*)t0)[14],a[19]=t1,a[20]=((C_word*)t0)[15],a[21]=((C_word*)t0)[16],tmp=(C_word)a,a+=22,tmp);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2805,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[17],a[4]=t6,a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 331  test */
t8=((C_word*)t0)[3];
f_1641(t8,t7,t5,lf[119]);}

/* k2803 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2805,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2811,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 332  test */
t3=((C_word*)t0)[2];
f_1641(t3,t2,((C_word*)t0)[5],lf[118]);}
else{
t2=((C_word*)t0)[4];
f_2516(t2,C_SCHEME_FALSE);}}

/* k2809 in k2803 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2811(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(C_truep(t1)){
if(C_truep((C_word)C_i_memq(((C_word*)t0)[4],C_retrieve(lf[115])))){
t2=((C_word*)t0)[3];
f_2516(t2,C_SCHEME_FALSE);}
else{
t2=(C_word)C_i_memq(((C_word*)t0)[4],C_retrieve(lf[116]));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
f_2516(t3,t2);}
else{
t3=(C_word)C_i_cadddr(((C_word*)t0)[2]);
t4=C_retrieve(lf[117]);
t5=((C_word*)t0)[3];
f_2516(t5,(C_word)C_fixnum_lessp(t3,t4));}}}
else{
t2=((C_word*)t0)[3];
f_2516(t2,C_SCHEME_FALSE);}}

/* k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_2516(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2516,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2519,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[16],a[4]=((C_word*)t0)[17],a[5]=((C_word*)t0)[18],a[6]=((C_word*)t0)[19],a[7]=((C_word*)t0)[20],a[8]=((C_word*)t0)[21],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_i_cadddr(((C_word*)t0)[14]);
/* optimizer.scm: 336  ##compiler#debugging */
t4=C_retrieve(lf[4]);
((C_proc7)C_retrieve_proc(t4))(7,t4,t2,lf[102],lf[103],((C_word*)t0)[15],((C_word*)t0)[13],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|19,a[1]=(C_word)f_2553,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[17],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[15],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[20],a[10]=((C_word*)t0)[6],a[11]=((C_word*)t0)[21],a[12]=((C_word*)t0)[7],a[13]=((C_word*)t0)[8],a[14]=((C_word*)t0)[9],a[15]=((C_word*)t0)[10],a[16]=((C_word*)t0)[19],a[17]=((C_word*)t0)[11],a[18]=((C_word*)t0)[12],a[19]=((C_word*)t0)[16],tmp=(C_word)a,a+=20,tmp);
/* optimizer.scm: 341  test */
t3=((C_word*)t0)[4];
f_1641(t3,t2,((C_word*)t0)[13],lf[87]);}}

/* k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2553(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2553,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_length(((C_word*)t0)[19]);
t3=((C_word*)t0)[18];
if(C_truep((C_word)C_fixnum_lessp(t2,t3))){
/* optimizer.scm: 343  walk-generic */
t4=((C_word*)((C_word*)t0)[17])[1];
f_2994(t4,((C_word*)t0)[16],((C_word*)t0)[15],((C_word*)t0)[14],((C_word*)t0)[13],((C_word*)t0)[12]);}
else{
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2567,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t5,a[6]=((C_word*)t0)[9],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[11],a[10]=lf[108],tmp=(C_word)a,a+=11,tmp));
t7=((C_word*)t5)[1];
f_2567(t7,((C_word*)t0)[16],((C_word*)t0)[5],((C_word*)t0)[18],((C_word*)t0)[19],C_SCHEME_END_OF_LIST);}}
else{
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2712,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[14],a[10]=((C_word*)t0)[16],a[11]=((C_word*)t0)[17],a[12]=((C_word*)t0)[19],a[13]=((C_word*)t0)[4],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2795,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[15],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 365  test */
t4=((C_word*)t0)[6];
f_1641(t4,t3,((C_word*)t0)[2],lf[80]);}}

/* k2793 in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_memq(((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=((C_word*)t0)[2];
f_2712(t3,(C_word)C_i_not(t2));}
else{
t2=((C_word*)t0)[2];
f_2712(t2,C_SCHEME_FALSE);}}

/* k2710 in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_2712(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2712,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_length(((C_word*)t0)[13]);
t3=(C_word)C_i_length(((C_word*)t0)[12]);
if(C_truep((C_word)C_fixnum_lessp(t3,t2))){
/* optimizer.scm: 369  walk-generic */
t4=((C_word*)((C_word*)t0)[11])[1];
f_2994(t4,((C_word*)t0)[10],t2,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}
else{
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2727,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],a[7]=t2,a[8]=((C_word*)t0)[12],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 371  ##compiler#debugging */
t5=C_retrieve(lf[4]);
((C_proc6)C_retrieve_proc(t5))(6,t5,t4,lf[5],lf[114],((C_word*)t0)[3],t2);}}
else{
/* optimizer.scm: 389  walk-generic */
t2=((C_word*)((C_word*)t0)[11])[1];
f_2994(t2,((C_word*)t0)[10],((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7]);}}

/* k2725 in k2710 in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2727(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2727,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2732,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=lf[110],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2738,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=lf[113],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 372  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2737 in k2725 in k2710 in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2738(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[25],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2738,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2742,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2757,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2765,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* optimizer.scm: 382  ##compiler#qnode */
t7=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,C_SCHEME_END_OF_LIST);}
else{
t7=(C_word)C_i_length(t3);
t8=(C_word)C_fixnum_times(C_fix(3),t7);
t9=(C_word)C_a_i_list(&a,2,lf[111],t8);
t10=t6;
f_2765(2,t10,(C_word)C_a_i_record(&a,4,lf[47],lf[112],t9,t3));}}

/* k2763 in a2737 in k2725 in k2710 in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2765,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* optimizer.scm: 378  append */
t3=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k2755 in a2737 in k2725 in k2710 in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2757,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* map */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t2);}

/* k2740 in a2737 in k2725 in k2710 in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2742,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,4,lf[47],lf[15],((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* a2731 in k2725 in k2710 in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2732,2,t0,t1);}
/* optimizer.scm: 372  split-at */
t2=C_retrieve(lf[109]);
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* loop in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_2567(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word t13;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2567,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_nullp(t2);
t7=(C_truep(t6)?t6:(C_word)C_eqp(t3,C_fix(0)));
if(C_truep(t7)){
t8=f_1667(((C_word*)t0)[9]);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2583,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2594,a[2]=((C_word*)t0)[6],a[3]=t9,a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 350  append-reverse */
t11=C_retrieve(lf[104]);
((C_proc4)C_retrieve_proc(t11))(4,t11,t10,t5,t4);}
else{
t8=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2600,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=t5,a[6]=((C_word*)t0)[5],a[7]=t4,a[8]=t3,a[9]=t2,a[10]=t1,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
t9=(C_word)C_i_car(t2);
/* optimizer.scm: 351  test */
t10=((C_word*)t0)[2];
f_1641(t10,t8,t9,lf[74]);}}

/* k2598 in loop in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2600(C_word c,C_word t0,C_word t1){
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
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2600,2,t0,t1);}
if(C_truep(t1)){
t2=f_1667(((C_word*)t0)[11]);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2606,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],tmp=(C_word)a,a+=10,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[9]);
/* optimizer.scm: 353  ##compiler#debugging */
t5=C_retrieve(lf[4]);
((C_proc6)C_retrieve_proc(t5))(6,t5,t3,lf[5],lf[107],t4,((C_word*)t0)[2]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[9]);
t3=(C_word)C_fixnum_decrease(((C_word*)t0)[8]);
t4=(C_word)C_i_cdr(((C_word*)t0)[7]);
t5=(C_word)C_i_car(((C_word*)t0)[7]);
t6=(C_word)C_a_i_cons(&a,2,t5,((C_word*)t0)[5]);
/* optimizer.scm: 361  loop */
t7=((C_word*)((C_word*)t0)[6])[1];
f_2567(t7,((C_word*)t0)[10],t2,t3,t4,t6);}}

/* k2604 in k2598 in loop in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2606,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2612,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[6]);
/* optimizer.scm: 354  ##compiler#expression-has-side-effects? */
t4=C_retrieve(lf[96]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* k2610 in k2604 in k2598 in loop in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2612,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2649,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 357  gensym */
t3=C_retrieve(lf[105]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[106]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(C_word)C_fixnum_decrease(((C_word*)t0)[6]);
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* optimizer.scm: 360  loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_2567(t5,((C_word*)t0)[8],t2,t3,t4,((C_word*)t0)[3]);}}

/* k2647 in k2610 in k2604 in k2598 in loop in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2649,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2625,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[5]);
/* optimizer.scm: 358  walk */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1763(3,t5,t3,t4);}

/* k2623 in k2647 in k2610 in k2604 in k2598 in loop in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2625,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2629,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[6]);
t4=(C_word)C_fixnum_decrease(((C_word*)t0)[5]);
t5=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* optimizer.scm: 359  loop */
t6=((C_word*)((C_word*)t0)[3])[1];
f_2567(t6,t2,t3,t4,t5,((C_word*)t0)[2]);}

/* k2627 in k2623 in k2647 in k2610 in k2604 in k2598 in loop in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2629(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2629,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[12],((C_word*)t0)[2],t2));}

/* k2592 in loop in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2594,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* map */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t2);}

/* k2581 in loop in k2551 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2583,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[47],lf[15],((C_word*)t0)[2],t1));}

/* k2517 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2519,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2522,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 337  ##compiler#check-signature */
t3=C_retrieve(lf[90]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[4]);}

/* k2520 in k2517 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2522,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2525,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 338  ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[5],lf[101],((C_word*)t0)[2]);}

/* k2523 in k2520 in k2517 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2525,2,t0,t1);}
t2=f_1667(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2535,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(3));
t5=(C_word)C_i_car(t4);
/* optimizer.scm: 340  ##compiler#inline-lambda-bindings */
t6=C_retrieve(lf[88]);
((C_proc6)C_retrieve_proc(t6))(6,t6,t3,((C_word*)t0)[3],((C_word*)t0)[2],t5,C_SCHEME_TRUE);}

/* k2533 in k2523 in k2520 in k2517 in k2514 in a2505 in k2493 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 340  walk */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1763(3,t2,((C_word*)t0)[2],t1);}

/* k2479 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_2384(2,t2,C_SCHEME_FALSE);}
else{
/* optimizer.scm: 312  test */
t2=((C_word*)t0)[3];
f_1641(t2,((C_word*)t0)[4],((C_word*)t0)[2],lf[64]);}}

/* k2382 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2384,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(t1,C_fix(2));
t3=(C_word)C_i_caddr(t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2402,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_i_car(t3);
/* optimizer.scm: 315  test */
t6=((C_word*)t0)[2];
f_1641(t6,t4,t5,lf[74]);}
else{
t4=((C_word*)t0)[7];
f_2363(t4,C_SCHEME_FALSE);}}
else{
t2=((C_word*)t0)[7];
f_2363(t2,C_SCHEME_FALSE);}}

/* k2400 in k2382 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2402,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2405,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_2405(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2459,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[3]);
/* optimizer.scm: 316  test */
t5=((C_word*)t0)[2];
f_1641(t5,t3,t4,lf[99]);}}

/* k2457 in k2400 in k2382 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2459,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_2405(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2451,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
/* optimizer.scm: 317  test */
t4=((C_word*)t0)[2];
f_1641(t4,t2,t3,lf[98]);}}

/* k2449 in k2457 in k2400 in k2382 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2405(t2,(C_word)C_i_not(t1));}

/* k2403 in k2400 in k2382 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_2405(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2405,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2428,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2430,a[2]=((C_word*)t0)[3],a[3]=lf[97],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[2]);
/* optimizer.scm: 318  any */
t5=C_retrieve(lf[39]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,t3,t4);}
else{
t2=((C_word*)t0)[6];
f_2363(t2,C_SCHEME_FALSE);}}

/* a2429 in k2403 in k2400 in k2382 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2430(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2430,3,t0,t1,t2);}
/* ##compiler#expression-has-side-effects? */
t3=C_retrieve(lf[96]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* k2426 in k2403 in k2400 in k2382 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2428,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_2363(t2,C_SCHEME_FALSE);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2414,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 319  ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[94],lf[95],((C_word*)t0)[2]);}}

/* k2412 in k2426 in k2403 in k2400 in k2382 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2414,2,t0,t1);}
t2=(C_word)C_a_i_record(&a,4,lf[47],lf[92],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
f_2363(t4,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[93],t3));}

/* k2361 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_2363(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[7];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
/* optimizer.scm: 323  walk-generic */
t2=((C_word*)((C_word*)t0)[6])[1];
f_2994(t2,((C_word*)t0)[7],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* k2328 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2330,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2333,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 305  ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[5],lf[89],((C_word*)t0)[2]);}

/* k2331 in k2328 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2333(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2333,2,t0,t1);}
t2=f_1667(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2343,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(3));
t5=(C_word)C_i_car(t4);
/* optimizer.scm: 307  ##compiler#inline-lambda-bindings */
t6=C_retrieve(lf[88]);
((C_proc6)C_retrieve_proc(t6))(6,t6,t3,((C_word*)t0)[3],((C_word*)t0)[2],t5,C_SCHEME_FALSE);}

/* k2341 in k2331 in k2328 in k2319 in k2310 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2343(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 307  walk */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1763(3,t2,((C_word*)t0)[2],t1);}

/* k2134 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2136,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2141,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=lf[83],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 262  ##compiler#decompose-lambda-list */
t3=C_retrieve(lf[84]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[6],((C_word*)t0)[5],t2);}
else{
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],tmp=(C_word)a,a+=11,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[9]);
/* optimizer.scm: 277  test */
t4=((C_word*)t0)[11];
f_1641(t4,t2,t3,lf[80]);}}

/* k2226 in k2134 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2228,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2233,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],a[6]=lf[86],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 278  ##compiler#decompose-lambda-list */
t3=C_retrieve(lf[84]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[6],((C_word*)t0)[5],t2);}
else{
/* optimizer.scm: 290  walk-generic */
t2=((C_word*)((C_word*)t0)[4])[1];
f_2994(t2,((C_word*)t0)[6],((C_word*)t0)[3],((C_word*)t0)[2],((C_word*)t0)[9],((C_word*)t0)[8]);}}

/* a2232 in k2226 in k2134 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2233(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2233,5,t0,t1,t2,t3,t4);}
t5=f_1667(((C_word*)t0)[5]);
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2240,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t1,a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 282  ##compiler#debugging */
t7=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t7))(5,t7,t6,lf[5],lf[85],t4);}

/* k2238 in a2232 in k2226 in k2134 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2240,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[7]);
t3=(C_word)C_i_cadr(((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2269,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t5=(C_word)C_fixnum_increase(((C_word*)t0)[3]);
/* optimizer.scm: 287  ##compiler#build-lambda-list */
t6=C_retrieve(lf[78]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t4,((C_word*)t0)[2],t5,C_SCHEME_FALSE);}

/* k2267 in k2238 in a2232 in k2226 in k2134 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2269(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2269,2,t0,t1);}
t2=(C_word)C_i_cadddr(((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,4,((C_word*)t0)[6],((C_word*)t0)[5],t1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2253,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[3]);
/* optimizer.scm: 289  walk */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1763(3,t6,t4,t5);}

/* k2251 in k2267 in k2238 in a2232 in k2226 in k2134 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2253,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[73],((C_word*)t0)[2],t2));}

/* a2140 in k2134 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2141(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2141,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2147,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=lf[77],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2159,a[2]=((C_word*)t0)[6],a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=lf[82],tmp=(C_word)a,a+=10,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t5,t6);}

/* a2158 in a2140 in k2134 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2159(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2159,4,t0,t1,t2,t3);}
t4=f_1667(((C_word*)t0)[8]);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2166,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=t1,a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp);
/* optimizer.scm: 267  ##compiler#debugging */
t6=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,lf[5],lf[81],t2);}

/* k2164 in a2158 in a2140 in k2134 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2166(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2166,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[9]);
t3=(C_word)C_i_cadr(((C_word*)t0)[9]);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2195,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2202,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t6=(C_word)C_i_car(((C_word*)t0)[9]);
/* optimizer.scm: 271  test */
t7=((C_word*)t0)[2];
f_1641(t7,t5,t6,lf[80]);}
else{
t6=t5;
f_2202(2,t6,C_SCHEME_FALSE);}}

/* k2200 in k2164 in a2158 in a2140 in k2134 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2202,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2205,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 272  ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[5],lf[79],((C_word*)t0)[2]);}
else{
/* optimizer.scm: 274  ##compiler#build-lambda-list */
t2=C_retrieve(lf[78]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k2203 in k2200 in k2164 in a2158 in a2140 in k2134 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2205(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[4]);
/* optimizer.scm: 273  ##compiler#build-lambda-list */
t3=C_retrieve(lf[78]);
((C_proc5)C_retrieve_proc(t3))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2,C_SCHEME_FALSE);}

/* k2193 in k2164 in a2158 in a2140 in k2134 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2195(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2195,2,t0,t1);}
t2=(C_word)C_i_cadddr(((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,4,((C_word*)t0)[6],((C_word*)t0)[5],t1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2179,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_car(((C_word*)t0)[3]);
/* optimizer.scm: 276  walk */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1763(3,t6,t4,t5);}

/* k2177 in k2193 in k2164 in a2158 in a2140 in k2134 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2179,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[73],((C_word*)t0)[2],t2));}

/* a2146 in a2140 in k2134 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2147(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2147,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2153,a[2]=((C_word*)t0)[3],a[3]=lf[75],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 265  partition */
t3=C_retrieve(lf[76]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,t2,((C_word*)t0)[2]);}

/* a2152 in a2146 in a2140 in k2134 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2153(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2153,3,t0,t1,t2);}
/* optimizer.scm: 265  test */
t3=((C_word*)t0)[2];
f_1641(t3,t1,t2,lf[74]);}

/* k2077 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2079(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2079,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2082,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
if(C_truep(t1)){
t3=t2;
f_2082(t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2105,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 252  test */
t4=((C_word*)t0)[3];
f_1641(t4,t3,((C_word*)t0)[2],lf[72]);}}

/* k2103 in k2077 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2105(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2105,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_2082(t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2114,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 253  test */
t3=((C_word*)t0)[3];
f_1641(t3,t2,((C_word*)t0)[2],lf[71]);}}

/* k2112 in k2103 in k2077 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2114,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2121,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 253  test */
t3=((C_word*)t0)[3];
f_1641(t3,t2,((C_word*)t0)[2],lf[70]);}
else{
t2=((C_word*)t0)[4];
f_2082(t2,C_SCHEME_FALSE);}}

/* k2119 in k2112 in k2103 in k2077 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2082(t2,(C_word)C_i_not(t1));}

/* k2080 in k2077 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_2082(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2082,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=f_1667(((C_word*)t0)[7]);
t3=(C_word)C_fixnum_increase(((C_word*)((C_word*)t0)[6])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[6])+1,t3);
t5=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* optimizer.scm: 256  walk */
t6=((C_word*)((C_word*)t0)[4])[1];
f_1763(3,t6,((C_word*)t0)[3],t5);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* map */
t3=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)((C_word*)t0)[4])[1],((C_word*)t0)[5]);}}

/* k2097 in k2080 in k2077 in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2099,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[47],lf[12],((C_word*)t0)[2],t1));}

/* replace in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_2004(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2004,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t1,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* optimizer.scm: 237  test */
t4=((C_word*)t0)[4];
f_1641(t4,t3,t2,lf[68]);}

/* k2006 in replace in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2008,2,t0,t1);}
if(C_truep(t1)){
/* replace118 */
t2=((C_word*)((C_word*)t0)[8])[1];
f_2004(t2,((C_word*)t0)[7],t1);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2020,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 238  test */
t3=((C_word*)t0)[5];
f_1641(t3,t2,((C_word*)t0)[4],lf[67]);}}

/* k2018 in k2006 in replace in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2020(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2020,2,t0,t1);}
if(C_truep(t1)){
t2=f_1667(((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2026,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 240  ##compiler#debugging */
t4=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[5],lf[65],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2043,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
t4=(C_word)C_eqp(((C_word*)t0)[4],t3);
if(C_truep(t4)){
t5=t2;
f_2043(t5,C_SCHEME_UNDEFINED);}
else{
t5=f_1667(((C_word*)t0)[7]);
t6=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],C_fix(1));
t7=C_mutate(((C_word *)((C_word*)t0)[2])+1,t6);
t8=t2;
f_2043(t8,t7);}}}

/* k2041 in k2018 in k2006 in replace in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_2043(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 247  ##compiler#varnode */
t2=C_retrieve(lf[66]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2024 in k2018 in k2006 in replace in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2026,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2037,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 241  test */
t3=((C_word*)t0)[3];
f_1641(t3,t2,((C_word*)t0)[2],lf[64]);}

/* k2035 in k2024 in k2018 in k2006 in replace in walk1 in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_2037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_slot(t1,C_fix(2));
t3=(C_word)C_i_car(t2);
/* optimizer.scm: 241  ##compiler#qnode */
t4=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[2],t3);}

/* walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1763(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1763,3,t0,t1,t2);}
if(C_truep((C_word)C_i_memq(t2,C_retrieve(lf[42])))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=((C_word*)((C_word*)t0)[10])[1];
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1777,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[10],a[4]=t3,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=t1,a[11]=((C_word*)t0)[9],tmp=(C_word)a,a+=12,tmp);
/* optimizer.scm: 190  walk1 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1979(t5,t4,t2);}}

/* k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1777(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1777,2,t0,t1);}
t2=(C_word)C_slot(t1,C_fix(3));
t3=(C_word)C_slot(t1,C_fix(1));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1786,a[2]=((C_word*)t0)[10],a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_eqp(t3,lf[11]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1795,a[2]=t1,a[3]=t4,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=t2,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t7=(C_word)C_i_car(t2);
/* optimizer.scm: 195  constant-node? */
t8=((C_word*)t0)[5];
f_1647(3,t8,t6,t7);}
else{
t6=(C_word)C_eqp(t3,lf[15]);
if(C_truep(t6)){
t7=(C_word)C_i_car(t2);
t8=(C_word)C_slot(t7,C_fix(1));
t9=(C_word)C_eqp(lf[10],t8);
if(C_truep(t9)){
t10=(C_word)C_i_car(t2);
t11=(C_word)C_slot(t10,C_fix(2));
t12=(C_word)C_i_car(t11);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1847,a[2]=((C_word*)t0)[7],a[3]=t2,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=t1,a[8]=t4,a[9]=t12,tmp=(C_word)a,a+=10,tmp);
t14=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1944,a[2]=t12,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[5],a[5]=t13,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 206  test */
t15=((C_word*)t0)[2];
f_1641(t15,t14,t12,lf[62]);}
else{
t10=t4;
f_1786(2,t10,t1);}}
else{
t7=t4;
f_1786(2,t7,t1);}}}

/* k1942 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1947,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_1947(2,t3,t1);}
else{
/* optimizer.scm: 207  test */
t3=((C_word*)t0)[3];
f_1641(t3,t2,((C_word*)t0)[2],lf[61]);}}

/* k1945 in k1942 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1947,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1953,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 208  test */
t3=((C_word*)t0)[3];
f_1641(t3,t2,((C_word*)t0)[2],lf[60]);}
else{
t2=((C_word*)t0)[5];
f_1847(2,t2,C_SCHEME_FALSE);}}

/* k1951 in k1945 in k1942 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cddr(((C_word*)t0)[4]);
/* optimizer.scm: 209  every */
t3=C_retrieve(lf[59]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[3];
f_1847(2,t2,C_SCHEME_FALSE);}}

/* k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1847(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1847,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1927,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1929,a[2]=((C_word*)t0)[2],a[3]=lf[58],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cddr(((C_word*)t0)[3]);
/* map */
t5=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}
else{
t2=((C_word*)t0)[8];
f_1786(2,t2,((C_word*)t0)[7]);}}

/* a1928 in k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1929(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1929,3,t0,t1,t2);}
t3=f_1657(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,2,lf[30],t3));}

/* k1925 in k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1927,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1856,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1858,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=lf[57],tmp=(C_word)a,a+=9,tmp);
/* call-with-current-continuation */
t5=*((C_word*)lf[21]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}

/* a1857 in k1925 in k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1858(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1858,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1864,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=lf[46],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1881,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=lf[55],tmp=(C_word)a,a+=7,tmp);
/* with-exception-handler */
t5=C_retrieve(lf[56]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t3,t4);}

/* a1880 in a1857 in k1925 in k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1887,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=lf[52],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1913,a[2]=((C_word*)t0)[2],a[3]=lf[54],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a1912 in a1880 in a1857 in k1925 in k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
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
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1919,a[2]=t2,a[3]=lf[53],tmp=(C_word)a,a+=4,tmp);
/* g9698 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1918 in a1912 in a1880 in a1857 in k1925 in k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1919,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a1886 in a1880 in a1857 in k1925 in k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1887,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1891,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 217  eval */
t3=C_retrieve(lf[51]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k1889 in a1886 in a1880 in a1857 in k1925 in k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1891,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1894,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* optimizer.scm: 218  ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[5],lf[50],((C_word*)t0)[2]);}

/* k1892 in k1889 in a1886 in a1880 in a1857 in k1925 in k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1894,2,t0,t1);}
t2=f_1667(((C_word*)t0)[5]);
t3=(C_word)C_i_cadr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1911,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 223  ##compiler#qnode */
t5=C_retrieve(lf[49]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[2]);}

/* k1909 in k1892 in k1889 in a1886 in a1880 in a1857 in k1925 in k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1911(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1911,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[47],lf[15],lf[48],t2));}

/* a1863 in a1857 in k1925 in k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1864(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1864,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1870,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=lf[45],tmp=(C_word)a,a+=6,tmp);
/* g9698 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a1869 in a1863 in a1857 in k1925 in k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1874,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=t2;
f_1874(t3,C_SCHEME_UNDEFINED);}
else{
t3=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_FALSE);
t4=t2;
f_1874(t4,t3);}}

/* k1872 in a1869 in a1863 in a1857 in k1925 in k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_1874(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1874,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1878,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 215  lset-adjoin */
t3=C_retrieve(lf[43]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,*((C_word*)lf[44]+1),C_retrieve(lf[42]),((C_word*)t0)[2]);}

/* k1876 in k1872 in a1869 in a1863 in a1857 in k1925 in k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[42]+1,t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* k1854 in k1925 in k1845 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1856(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1793 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[8])[1],C_fix(1));
t3=C_mutate(((C_word *)((C_word*)t0)[8])+1,t2);
t4=f_1667(((C_word*)t0)[7]);
t5=(C_word)C_i_car(((C_word*)t0)[6]);
t6=f_1657(t5);
t7=(C_truep(t6)?(C_word)C_i_cadr(((C_word*)t0)[6]):(C_word)C_i_caddr(((C_word*)t0)[6]));
/* optimizer.scm: 198  walk */
t8=((C_word*)((C_word*)t0)[4])[1];
f_1763(3,t8,((C_word*)t0)[3],t7);}
else{
t2=((C_word*)t0)[3];
f_1786(2,t2,((C_word*)t0)[2]);}}

/* k1784 in k1775 in walk in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 188  simplify */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1671(t2,((C_word*)t0)[2],t1);}

/* simplify in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_1671(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1671,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1675,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t2,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
t4=t2;
t5=(C_word)C_slot(t4,C_fix(1));
/* optimizer.scm: 169  ##sys#hash-table-ref */
t6=C_retrieve(lf[40]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t3,*((C_word*)lf[25]+1),t5);}

/* k1673 in simplify in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1675(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1675,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1678,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1686,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=lf[38],tmp=(C_word)a,a+=8,tmp);
/* optimizer.scm: 170  any */
t4=C_retrieve(lf[39]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,t1);}
else{
t3=t2;
f_1678(2,t3,C_SCHEME_FALSE);}}

/* a1685 in k1673 in simplify in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1686(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1686,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1696,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_i_car(t2);
/* optimizer.scm: 172  ##compiler#match-node */
t6=C_retrieve(lf[37]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t4,((C_word*)t0)[2],t5,t3);}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k1694 in a1685 in k1673 in simplify in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1696,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1702,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_caddr(((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1743,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1745,a[2]=t1,a[3]=lf[35],tmp=(C_word)a,a+=4,tmp);
/* map */
t6=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a1744 in k1694 in a1685 in k1673 in simplify in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1745(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1745,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_cdr(t3));}

/* k1741 in k1694 in a1685 in k1673 in simplify in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1743(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1700 in k1694 in a1685 in k1673 in simplify in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1702,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1708,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 175  caar */
t3=*((C_word*)lf[34]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k1706 in k1700 in k1694 in a1685 in k1673 in simplify in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1708,2,t0,t1);}
t2=(C_word)C_i_assq(t1,((C_word*)((C_word*)t0)[6])[1]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t2)){
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_fixnum_increase(t4);
t6=t3;
f_1714(t6,(C_word)C_i_set_cdr(t2,t5));}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1735,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 179  alist-cons */
t5=C_retrieve(lf[33]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,t1,C_fix(1),((C_word*)((C_word*)t0)[6])[1]);}}

/* k1733 in k1706 in k1700 in k1694 in a1685 in k1673 in simplify in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_1714(t3,t2);}

/* k1712 in k1706 in k1700 in k1694 in a1685 in k1673 in simplify in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_1714(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=f_1667(((C_word*)t0)[5]);
/* optimizer.scm: 181  simplify */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1671(t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1676 in k1673 in simplify in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1678(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?t1:((C_word*)t0)[2]));}

/* touch in ##compiler#perform-high-level-optimizations in k1633 */
static C_word C_fcall f_1667(C_word t0){
C_word tmp;
C_word t1;
C_word t2;
C_stack_check;
t1=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
return(t1);}

/* node-value in ##compiler#perform-high-level-optimizations in k1633 */
static C_word C_fcall f_1657(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_slot(t1,C_fix(2));
return((C_word)C_i_car(t2));}

/* constant-node? in ##compiler#perform-high-level-optimizations in k1633 */
static void C_ccall f_1647(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1647,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_eqp(lf[30],t3));}

/* test in ##compiler#perform-high-level-optimizations in k1633 */
static void C_fcall f_1641(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1641,NULL,4,t0,t1,t2,t3);}
/* optimizer.scm: 163  ##compiler#get */
t4=C_retrieve(lf[28]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,((C_word*)t0)[2],t2,t3);}

/* ##compiler#scan-toplevel-assignments */
static void C_ccall f_1432(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1432,3,t0,t1,t2);}
t3=C_SCHEME_END_OF_LIST;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_END_OF_LIST;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1435,a[2]=t4,a[3]=t6,a[4]=lf[1],tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1453,a[2]=t2,a[3]=t7,a[4]=t6,a[5]=t4,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 95   ##compiler#debugging */
t9=C_retrieve(lf[4]);
((C_proc4)C_retrieve_proc(t9))(4,t9,t8,lf[22],lf[23]);}

/* k1451 in ##compiler#scan-toplevel-assignments */
static void C_ccall f_1453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1453,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1456,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],a[6]=lf[20],tmp=(C_word)a,a+=7,tmp);
/* optimizer.scm: 96   call-with-current-continuation */
t4=*((C_word*)lf[21]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* a1464 in k1451 in ##compiler#scan-toplevel-assignments */
static void C_ccall f_1465(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[17],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1465,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1468,a[2]=t6,a[3]=lf[9],tmp=(C_word)a,a+=4,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1480,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t6,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=lf[19],tmp=(C_word)a,a+=9,tmp));
/* optimizer.scm: 131  scan */
t9=((C_word*)t6)[1];
f_1480(t9,t1,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* scan in a1464 in k1451 in ##compiler#scan-toplevel-assignments */
static void C_fcall f_1480(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1480,NULL,4,t0,t1,t2,t3);}
t4=t2;
t5=(C_word)C_slot(t4,C_fix(2));
t6=t2;
t7=(C_word)C_slot(t6,C_fix(3));
t8=t2;
t9=(C_word)C_slot(t8,C_fix(1));
t10=(C_word)C_eqp(t9,lf[10]);
if(C_truep(t10)){
t11=(C_word)C_i_car(t5);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1505,a[2]=t1,a[3]=((C_word*)t0)[7],a[4]=t11,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_memq(t11,t3))){
t13=t12;
f_1505(t13,C_SCHEME_FALSE);}
else{
t13=(C_word)C_i_memq(t11,((C_word*)((C_word*)t0)[6])[1]);
t14=t12;
f_1505(t14,(C_word)C_i_not(t13));}}
else{
t11=(C_word)C_eqp(t9,lf[11]);
t12=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1532,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t9,a[6]=t3,a[7]=((C_word*)t0)[4],a[8]=t7,a[9]=t1,a[10]=((C_word*)t0)[5],tmp=(C_word)a,a+=11,tmp);
if(C_truep(t11)){
t13=t12;
f_1532(t13,t11);}
else{
t13=(C_word)C_eqp(t9,lf[17]);
t14=t12;
f_1532(t14,(C_truep(t13)?t13:(C_word)C_eqp(t9,lf[18])));}}}

/* k1530 in scan in a1464 in k1451 in ##compiler#scan-toplevel-assignments */
static void C_fcall f_1532(C_word t0,C_word t1){
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
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1532,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1535,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[8]);
/* optimizer.scm: 113  scan */
t4=((C_word*)((C_word*)t0)[7])[1];
f_1480(t4,t2,t3,((C_word*)t0)[6]);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[5],lf[12]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1551,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[8]);
/* optimizer.scm: 117  scan */
t5=((C_word*)((C_word*)t0)[7])[1];
f_1480(t5,t3,t4,((C_word*)t0)[6]);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[5],lf[13]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(((C_word*)t0)[5],lf[14]));
if(C_truep(t4)){
t5=((C_word*)t0)[9];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[5],lf[15]);
if(C_truep(t5)){
/* optimizer.scm: 122  return */
t6=((C_word*)t0)[10];
((C_proc3)C_retrieve_proc(t6))(3,t6,((C_word*)t0)[9],C_SCHEME_FALSE);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[5],lf[16]);
if(C_truep(t6)){
t7=(C_word)C_i_car(((C_word*)t0)[4]);
t8=(C_truep((C_word)C_i_memq(t7,((C_word*)t0)[6]))?C_SCHEME_UNDEFINED:f_1435(C_a_i(&a,3),((C_word*)t0)[3],t7));
t9=(C_word)C_i_car(((C_word*)t0)[8]);
/* optimizer.scm: 127  scan */
t10=((C_word*)((C_word*)t0)[7])[1];
f_1480(t10,((C_word*)t0)[9],t9,((C_word*)t0)[6]);}
else{
/* optimizer.scm: 129  scan-each */
t7=((C_word*)((C_word*)t0)[2])[1];
f_1468(t7,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[6]);}}}}}}

/* k1549 in k1530 in scan in a1464 in k1451 in ##compiler#scan-toplevel-assignments */
static void C_ccall f_1551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1551,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[6]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1562,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* optimizer.scm: 118  append */
t4=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1560 in k1549 in k1530 in scan in a1464 in k1451 in ##compiler#scan-toplevel-assignments */
static void C_ccall f_1562(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 118  scan */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1480(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1533 in k1530 in scan in a1464 in k1451 in ##compiler#scan-toplevel-assignments */
static void C_ccall f_1535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* optimizer.scm: 114  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k1503 in scan in a1464 in k1451 in ##compiler#scan-toplevel-assignments */
static void C_fcall f_1505(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1505,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* scan-each in a1464 in k1451 in ##compiler#scan-toplevel-assignments */
static void C_fcall f_1468(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1468,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1474,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=lf[7],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t5=*((C_word*)lf[8]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t4,t2);}

/* a1473 in scan-each in a1464 in k1451 in ##compiler#scan-toplevel-assignments */
static void C_ccall f_1474(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1474,3,t0,t1,t2);}
/* optimizer.scm: 100  scan */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1480(t3,t1,t2,((C_word*)t0)[2]);}

/* k1454 in k1451 in ##compiler#scan-toplevel-assignments */
static void C_ccall f_1456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1459,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* optimizer.scm: 132  ##compiler#debugging */
t3=C_retrieve(lf[4]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[5],lf[6],((C_word*)((C_word*)t0)[2])[1]);}

/* k1457 in k1454 in k1451 in ##compiler#scan-toplevel-assignments */
static void C_ccall f_1459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1459,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1463,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* optimizer.scm: 133  append */
t3=*((C_word*)lf[3]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)((C_word*)t0)[2])[1],C_retrieve(lf[2]));}

/* k1461 in k1457 in k1454 in k1451 in ##compiler#scan-toplevel-assignments */
static void C_ccall f_1463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[2]+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* mark in ##compiler#scan-toplevel-assignments */
static C_word C_fcall f_1435(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_stack_check;
if(C_truep((C_word)C_i_memq(t1,((C_word*)((C_word*)t0)[3])[1]))){
return(C_SCHEME_UNDEFINED);}
else{
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[2])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[2])+1,t2);
return(t3);}}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[598] = {
{"topleveloptimizer.scm",(void*)C_optimizer_toplevel},
{"f_1635optimizer.scm",(void*)f_1635},
{"f_9339optimizer.scm",(void*)f_9339},
{"f_9347optimizer.scm",(void*)f_9347},
{"f_9352optimizer.scm",(void*)f_9352},
{"f_9397optimizer.scm",(void*)f_9397},
{"f_9401optimizer.scm",(void*)f_9401},
{"f_9362optimizer.scm",(void*)f_9362},
{"f_9386optimizer.scm",(void*)f_9386},
{"f_9371optimizer.scm",(void*)f_9371},
{"f_3577optimizer.scm",(void*)f_3577},
{"f_8710optimizer.scm",(void*)f_8710},
{"f_8744optimizer.scm",(void*)f_8744},
{"f_8786optimizer.scm",(void*)f_8786},
{"f_8796optimizer.scm",(void*)f_8796},
{"f_8860optimizer.scm",(void*)f_8860},
{"f_8889optimizer.scm",(void*)f_8889},
{"f_9012optimizer.scm",(void*)f_9012},
{"f_8905optimizer.scm",(void*)f_8905},
{"f_8952optimizer.scm",(void*)f_8952},
{"f_8942optimizer.scm",(void*)f_8942},
{"f_8950optimizer.scm",(void*)f_8950},
{"f_9054optimizer.scm",(void*)f_9054},
{"f_9067optimizer.scm",(void*)f_9067},
{"f_9102optimizer.scm",(void*)f_9102},
{"f_9086optimizer.scm",(void*)f_9086},
{"f_9090optimizer.scm",(void*)f_9090},
{"f_9079optimizer.scm",(void*)f_9079},
{"f_9176optimizer.scm",(void*)f_9176},
{"f_9189optimizer.scm",(void*)f_9189},
{"f_9195optimizer.scm",(void*)f_9195},
{"f_9241optimizer.scm",(void*)f_9241},
{"f_9233optimizer.scm",(void*)f_9233},
{"f_9217optimizer.scm",(void*)f_9217},
{"f_9221optimizer.scm",(void*)f_9221},
{"f_9225optimizer.scm",(void*)f_9225},
{"f_3580optimizer.scm",(void*)f_3580},
{"f_8528optimizer.scm",(void*)f_8528},
{"f_8550optimizer.scm",(void*)f_8550},
{"f_8605optimizer.scm",(void*)f_8605},
{"f_8575optimizer.scm",(void*)f_8575},
{"f_8597optimizer.scm",(void*)f_8597},
{"f_8601optimizer.scm",(void*)f_8601},
{"f_8593optimizer.scm",(void*)f_8593},
{"f_8573optimizer.scm",(void*)f_8573},
{"f_8639optimizer.scm",(void*)f_8639},
{"f_8653optimizer.scm",(void*)f_8653},
{"f_3583optimizer.scm",(void*)f_3583},
{"f_3911optimizer.scm",(void*)f_3911},
{"f_6868optimizer.scm",(void*)f_6868},
{"f_8415optimizer.scm",(void*)f_8415},
{"f_8418optimizer.scm",(void*)f_8418},
{"f_8421optimizer.scm",(void*)f_8421},
{"f_8424optimizer.scm",(void*)f_8424},
{"f_8427optimizer.scm",(void*)f_8427},
{"f_8430optimizer.scm",(void*)f_8430},
{"f_8507optimizer.scm",(void*)f_8507},
{"f_8433optimizer.scm",(void*)f_8433},
{"f_8436optimizer.scm",(void*)f_8436},
{"f_8439optimizer.scm",(void*)f_8439},
{"f_8501optimizer.scm",(void*)f_8501},
{"f_8442optimizer.scm",(void*)f_8442},
{"f_8445optimizer.scm",(void*)f_8445},
{"f_8498optimizer.scm",(void*)f_8498},
{"f_7477optimizer.scm",(void*)f_7477},
{"f_7495optimizer.scm",(void*)f_7495},
{"f_7501optimizer.scm",(void*)f_7501},
{"f_7481optimizer.scm",(void*)f_7481},
{"f_8448optimizer.scm",(void*)f_8448},
{"f_8490optimizer.scm",(void*)f_8490},
{"f_8488optimizer.scm",(void*)f_8488},
{"f_8451optimizer.scm",(void*)f_8451},
{"f_8454optimizer.scm",(void*)f_8454},
{"f_8457optimizer.scm",(void*)f_8457},
{"f_8481optimizer.scm",(void*)f_8481},
{"f_8460optimizer.scm",(void*)f_8460},
{"f_8463optimizer.scm",(void*)f_8463},
{"f_8466optimizer.scm",(void*)f_8466},
{"f_8469optimizer.scm",(void*)f_8469},
{"f_8472optimizer.scm",(void*)f_8472},
{"f_8475optimizer.scm",(void*)f_8475},
{"f_8268optimizer.scm",(void*)f_8268},
{"f_8274optimizer.scm",(void*)f_8274},
{"f_8386optimizer.scm",(void*)f_8386},
{"f_8395optimizer.scm",(void*)f_8395},
{"f_8398optimizer.scm",(void*)f_8398},
{"f_8293optimizer.scm",(void*)f_8293},
{"f_8298optimizer.scm",(void*)f_8298},
{"f_8339optimizer.scm",(void*)f_8339},
{"f_8336optimizer.scm",(void*)f_8336},
{"f_8321optimizer.scm",(void*)f_8321},
{"f_8332optimizer.scm",(void*)f_8332},
{"f_8328optimizer.scm",(void*)f_8328},
{"f_8181optimizer.scm",(void*)f_8181},
{"f_8187optimizer.scm",(void*)f_8187},
{"f_8243optimizer.scm",(void*)f_8243},
{"f_8239optimizer.scm",(void*)f_8239},
{"f_8209optimizer.scm",(void*)f_8209},
{"f_7931optimizer.scm",(void*)f_7931},
{"f_7945optimizer.scm",(void*)f_7945},
{"f_7952optimizer.scm",(void*)f_7952},
{"f_7965optimizer.scm",(void*)f_7965},
{"f_7972optimizer.scm",(void*)f_7972},
{"f_7975optimizer.scm",(void*)f_7975},
{"f_8071optimizer.scm",(void*)f_8071},
{"f_8157optimizer.scm",(void*)f_8157},
{"f_8176optimizer.scm",(void*)f_8176},
{"f_8172optimizer.scm",(void*)f_8172},
{"f_8138optimizer.scm",(void*)f_8138},
{"f_8127optimizer.scm",(void*)f_8127},
{"f_8114optimizer.scm",(void*)f_8114},
{"f_8097optimizer.scm",(void*)f_8097},
{"f_8090optimizer.scm",(void*)f_8090},
{"f_8056optimizer.scm",(void*)f_8056},
{"f_7978optimizer.scm",(void*)f_7978},
{"f_8027optimizer.scm",(void*)f_8027},
{"f_8015optimizer.scm",(void*)f_8015},
{"f_8011optimizer.scm",(void*)f_8011},
{"f_7943optimizer.scm",(void*)f_7943},
{"f_7730optimizer.scm",(void*)f_7730},
{"f_7917optimizer.scm",(void*)f_7917},
{"f_7795optimizer.scm",(void*)f_7795},
{"f_7872optimizer.scm",(void*)f_7872},
{"f_7877optimizer.scm",(void*)f_7877},
{"f_7915optimizer.scm",(void*)f_7915},
{"f_7739optimizer.scm",(void*)f_7739},
{"f_7777optimizer.scm",(void*)f_7777},
{"f_7782optimizer.scm",(void*)f_7782},
{"f_7759optimizer.scm",(void*)f_7759},
{"f_7737optimizer.scm",(void*)f_7737},
{"f_7907optimizer.scm",(void*)f_7907},
{"f_7893optimizer.scm",(void*)f_7893},
{"f_7891optimizer.scm",(void*)f_7891},
{"f_7797optimizer.scm",(void*)f_7797},
{"f_7865optimizer.scm",(void*)f_7865},
{"f_7863optimizer.scm",(void*)f_7863},
{"f_7851optimizer.scm",(void*)f_7851},
{"f_7817optimizer.scm",(void*)f_7817},
{"f_7841optimizer.scm",(void*)f_7841},
{"f_7839optimizer.scm",(void*)f_7839},
{"f_7835optimizer.scm",(void*)f_7835},
{"f_7827optimizer.scm",(void*)f_7827},
{"f_7511optimizer.scm",(void*)f_7511},
{"f_7517optimizer.scm",(void*)f_7517},
{"f_7536optimizer.scm",(void*)f_7536},
{"f_7703optimizer.scm",(void*)f_7703},
{"f_7633optimizer.scm",(void*)f_7633},
{"f_7649optimizer.scm",(void*)f_7649},
{"f_7679optimizer.scm",(void*)f_7679},
{"f_7683optimizer.scm",(void*)f_7683},
{"f_7669optimizer.scm",(void*)f_7669},
{"f_7622optimizer.scm",(void*)f_7622},
{"f_7627optimizer.scm",(void*)f_7627},
{"f_7598optimizer.scm",(void*)f_7598},
{"f_7610optimizer.scm",(void*)f_7610},
{"f_7547optimizer.scm",(void*)f_7547},
{"f_7568optimizer.scm",(void*)f_7568},
{"f_7565optimizer.scm",(void*)f_7565},
{"f_7515optimizer.scm",(void*)f_7515},
{"f_7267optimizer.scm",(void*)f_7267},
{"f_7273optimizer.scm",(void*)f_7273},
{"f_7292optimizer.scm",(void*)f_7292},
{"f_7394optimizer.scm",(void*)f_7394},
{"f_7385optimizer.scm",(void*)f_7385},
{"f_7351optimizer.scm",(void*)f_7351},
{"f_7360optimizer.scm",(void*)f_7360},
{"f_7372optimizer.scm",(void*)f_7372},
{"f_7303optimizer.scm",(void*)f_7303},
{"f_7324optimizer.scm",(void*)f_7324},
{"f_7321optimizer.scm",(void*)f_7321},
{"f_7271optimizer.scm",(void*)f_7271},
{"f_7168optimizer.scm",(void*)f_7168},
{"f_7174optimizer.scm",(void*)f_7174},
{"f_7218optimizer.scm",(void*)f_7218},
{"f_7223optimizer.scm",(void*)f_7223},
{"f_7230optimizer.scm",(void*)f_7230},
{"f_7257optimizer.scm",(void*)f_7257},
{"f_7253optimizer.scm",(void*)f_7253},
{"f_7245optimizer.scm",(void*)f_7245},
{"f_7243optimizer.scm",(void*)f_7243},
{"f_7208optimizer.scm",(void*)f_7208},
{"f_7186optimizer.scm",(void*)f_7186},
{"f_7193optimizer.scm",(void*)f_7193},
{"f_6971optimizer.scm",(void*)f_6971},
{"f_7125optimizer.scm",(void*)f_7125},
{"f_7150optimizer.scm",(void*)f_7150},
{"f_7140optimizer.scm",(void*)f_7140},
{"f_7144optimizer.scm",(void*)f_7144},
{"f_7123optimizer.scm",(void*)f_7123},
{"f_6974optimizer.scm",(void*)f_6974},
{"f_7113optimizer.scm",(void*)f_7113},
{"f_7096optimizer.scm",(void*)f_7096},
{"f_7108optimizer.scm",(void*)f_7108},
{"f_7042optimizer.scm",(void*)f_7042},
{"f_7066optimizer.scm",(void*)f_7066},
{"f_7060optimizer.scm",(void*)f_7060},
{"f_7024optimizer.scm",(void*)f_7024},
{"f_6999optimizer.scm",(void*)f_6999},
{"f_7002optimizer.scm",(void*)f_7002},
{"f_7007optimizer.scm",(void*)f_7007},
{"f_6871optimizer.scm",(void*)f_6871},
{"f_6877optimizer.scm",(void*)f_6877},
{"f_6908optimizer.scm",(void*)f_6908},
{"f_6912optimizer.scm",(void*)f_6912},
{"f_6916optimizer.scm",(void*)f_6916},
{"f_6875optimizer.scm",(void*)f_6875},
{"f_5733optimizer.scm",(void*)f_5733},
{"f_6863optimizer.scm",(void*)f_6863},
{"f_6866optimizer.scm",(void*)f_6866},
{"f_5736optimizer.scm",(void*)f_5736},
{"f_5892optimizer.scm",(void*)f_5892},
{"f_5872optimizer.scm",(void*)f_5872},
{"f_5846optimizer.scm",(void*)f_5846},
{"f_5792optimizer.scm",(void*)f_5792},
{"f_5798optimizer.scm",(void*)f_5798},
{"f_5804optimizer.scm",(void*)f_5804},
{"f_5761optimizer.scm",(void*)f_5761},
{"f_5898optimizer.scm",(void*)f_5898},
{"f_6308optimizer.scm",(void*)f_6308},
{"f_6315optimizer.scm",(void*)f_6315},
{"f_5901optimizer.scm",(void*)f_5901},
{"f_6295optimizer.scm",(void*)f_6295},
{"f_6271optimizer.scm",(void*)f_6271},
{"f_6282optimizer.scm",(void*)f_6282},
{"f_6238optimizer.scm",(void*)f_6238},
{"f_6177optimizer.scm",(void*)f_6177},
{"f_6149optimizer.scm",(void*)f_6149},
{"f_6154optimizer.scm",(void*)f_6154},
{"f_6096optimizer.scm",(void*)f_6096},
{"f_6102optimizer.scm",(void*)f_6102},
{"f_6107optimizer.scm",(void*)f_6107},
{"f_6055optimizer.scm",(void*)f_6055},
{"f_6061optimizer.scm",(void*)f_6061},
{"f_6066optimizer.scm",(void*)f_6066},
{"f_6039optimizer.scm",(void*)f_6039},
{"f_6035optimizer.scm",(void*)f_6035},
{"f_6005optimizer.scm",(void*)f_6005},
{"f_5968optimizer.scm",(void*)f_5968},
{"f_5984optimizer.scm",(void*)f_5984},
{"f_5950optimizer.scm",(void*)f_5950},
{"f_6317optimizer.scm",(void*)f_6317},
{"f_6853optimizer.scm",(void*)f_6853},
{"f_6851optimizer.scm",(void*)f_6851},
{"f_6321optimizer.scm",(void*)f_6321},
{"f_6331optimizer.scm",(void*)f_6331},
{"f_6825optimizer.scm",(void*)f_6825},
{"f_6337optimizer.scm",(void*)f_6337},
{"f_6343optimizer.scm",(void*)f_6343},
{"f_6346optimizer.scm",(void*)f_6346},
{"f_6352optimizer.scm",(void*)f_6352},
{"f_6528optimizer.scm",(void*)f_6528},
{"f_6750optimizer.scm",(void*)f_6750},
{"f_6753optimizer.scm",(void*)f_6753},
{"f_6703optimizer.scm",(void*)f_6703},
{"f_6706optimizer.scm",(void*)f_6706},
{"f_6572optimizer.scm",(void*)f_6572},
{"f_6627optimizer.scm",(void*)f_6627},
{"f_6630optimizer.scm",(void*)f_6630},
{"f_6657optimizer.scm",(void*)f_6657},
{"f_6633optimizer.scm",(void*)f_6633},
{"f_6636optimizer.scm",(void*)f_6636},
{"f_6581optimizer.scm",(void*)f_6581},
{"f_6584optimizer.scm",(void*)f_6584},
{"f_6587optimizer.scm",(void*)f_6587},
{"f_6355optimizer.scm",(void*)f_6355},
{"f_6510optimizer.scm",(void*)f_6510},
{"f_6508optimizer.scm",(void*)f_6508},
{"f_6451optimizer.scm",(void*)f_6451},
{"f_6461optimizer.scm",(void*)f_6461},
{"f_6358optimizer.scm",(void*)f_6358},
{"f_6370optimizer.scm",(void*)f_6370},
{"f_6409optimizer.scm",(void*)f_6409},
{"f_6373optimizer.scm",(void*)f_6373},
{"f_6376optimizer.scm",(void*)f_6376},
{"f_6381optimizer.scm",(void*)f_6381},
{"f_6407optimizer.scm",(void*)f_6407},
{"f_6388optimizer.scm",(void*)f_6388},
{"f_3933optimizer.scm",(void*)f_3933},
{"f_5680optimizer.scm",(void*)f_5680},
{"f_5683optimizer.scm",(void*)f_5683},
{"f_5715optimizer.scm",(void*)f_5715},
{"f_5702optimizer.scm",(void*)f_5702},
{"f_5526optimizer.scm",(void*)f_5526},
{"f_5529optimizer.scm",(void*)f_5529},
{"f_5535optimizer.scm",(void*)f_5535},
{"f_5619optimizer.scm",(void*)f_5619},
{"f_5544optimizer.scm",(void*)f_5544},
{"f_5588optimizer.scm",(void*)f_5588},
{"f_5586optimizer.scm",(void*)f_5586},
{"f_5560optimizer.scm",(void*)f_5560},
{"f_5453optimizer.scm",(void*)f_5453},
{"f_5456optimizer.scm",(void*)f_5456},
{"f_5484optimizer.scm",(void*)f_5484},
{"f_5496optimizer.scm",(void*)f_5496},
{"f_5474optimizer.scm",(void*)f_5474},
{"f_5469optimizer.scm",(void*)f_5469},
{"f_5305optimizer.scm",(void*)f_5305},
{"f_5308optimizer.scm",(void*)f_5308},
{"f_5389optimizer.scm",(void*)f_5389},
{"f_5317optimizer.scm",(void*)f_5317},
{"f_5370optimizer.scm",(void*)f_5370},
{"f_5368optimizer.scm",(void*)f_5368},
{"f_5333optimizer.scm",(void*)f_5333},
{"f_5270optimizer.scm",(void*)f_5270},
{"f_5273optimizer.scm",(void*)f_5273},
{"f_5283optimizer.scm",(void*)f_5283},
{"f_5202optimizer.scm",(void*)f_5202},
{"f_5205optimizer.scm",(void*)f_5205},
{"f_5225optimizer.scm",(void*)f_5225},
{"f_5123optimizer.scm",(void*)f_5123},
{"f_5126optimizer.scm",(void*)f_5126},
{"f_5156optimizer.scm",(void*)f_5156},
{"f_5030optimizer.scm",(void*)f_5030},
{"f_5033optimizer.scm",(void*)f_5033},
{"f_5052optimizer.scm",(void*)f_5052},
{"f_5045optimizer.scm",(void*)f_5045},
{"f_4947optimizer.scm",(void*)f_4947},
{"f_4950optimizer.scm",(void*)f_4950},
{"f_4882optimizer.scm",(void*)f_4882},
{"f_4885optimizer.scm",(void*)f_4885},
{"f_4900optimizer.scm",(void*)f_4900},
{"f_4903optimizer.scm",(void*)f_4903},
{"f_4806optimizer.scm",(void*)f_4806},
{"f_4809optimizer.scm",(void*)f_4809},
{"f_4852optimizer.scm",(void*)f_4852},
{"f_4845optimizer.scm",(void*)f_4845},
{"f_4741optimizer.scm",(void*)f_4741},
{"f_4744optimizer.scm",(void*)f_4744},
{"f_4756optimizer.scm",(void*)f_4756},
{"f_4769optimizer.scm",(void*)f_4769},
{"f_4762optimizer.scm",(void*)f_4762},
{"f_4654optimizer.scm",(void*)f_4654},
{"f_4676optimizer.scm",(void*)f_4676},
{"f_4684optimizer.scm",(void*)f_4684},
{"f_4688optimizer.scm",(void*)f_4688},
{"f_4510optimizer.scm",(void*)f_4510},
{"f_4532optimizer.scm",(void*)f_4532},
{"f_4535optimizer.scm",(void*)f_4535},
{"f_4594optimizer.scm",(void*)f_4594},
{"f_4538optimizer.scm",(void*)f_4538},
{"f_4541optimizer.scm",(void*)f_4541},
{"f_4572optimizer.scm",(void*)f_4572},
{"f_4570optimizer.scm",(void*)f_4570},
{"f_4546optimizer.scm",(void*)f_4546},
{"f_4526optimizer.scm",(void*)f_4526},
{"f_4483optimizer.scm",(void*)f_4483},
{"f_4486optimizer.scm",(void*)f_4486},
{"f_4422optimizer.scm",(void*)f_4422},
{"f_4425optimizer.scm",(void*)f_4425},
{"f_4449optimizer.scm",(void*)f_4449},
{"f_4438optimizer.scm",(void*)f_4438},
{"f_4357optimizer.scm",(void*)f_4357},
{"f_4264optimizer.scm",(void*)f_4264},
{"f_4267optimizer.scm",(void*)f_4267},
{"f_4309optimizer.scm",(void*)f_4309},
{"f_4208optimizer.scm",(void*)f_4208},
{"f_4221optimizer.scm",(void*)f_4221},
{"f_4229optimizer.scm",(void*)f_4229},
{"f_4164optimizer.scm",(void*)f_4164},
{"f_4167optimizer.scm",(void*)f_4167},
{"f_4177optimizer.scm",(void*)f_4177},
{"f_4060optimizer.scm",(void*)f_4060},
{"f_4063optimizer.scm",(void*)f_4063},
{"f_4120optimizer.scm",(void*)f_4120},
{"f_4091optimizer.scm",(void*)f_4091},
{"f_4088optimizer.scm",(void*)f_4088},
{"f_3952optimizer.scm",(void*)f_3952},
{"f_4015optimizer.scm",(void*)f_4015},
{"f_3955optimizer.scm",(void*)f_3955},
{"f_3936optimizer.scm",(void*)f_3936},
{"f_3913optimizer.scm",(void*)f_3913},
{"f_3917optimizer.scm",(void*)f_3917},
{"f_3927optimizer.scm",(void*)f_3927},
{"f_3585optimizer.scm",(void*)f_3585},
{"f_3589optimizer.scm",(void*)f_3589},
{"f_3898optimizer.scm",(void*)f_3898},
{"f_3907optimizer.scm",(void*)f_3907},
{"f_3903optimizer.scm",(void*)f_3903},
{"f_3636optimizer.scm",(void*)f_3636},
{"f_3840optimizer.scm",(void*)f_3840},
{"f_3872optimizer.scm",(void*)f_3872},
{"f_3885optimizer.scm",(void*)f_3885},
{"f_3850optimizer.scm",(void*)f_3850},
{"f_3866optimizer.scm",(void*)f_3866},
{"f_3854optimizer.scm",(void*)f_3854},
{"f_3858optimizer.scm",(void*)f_3858},
{"f_3639optimizer.scm",(void*)f_3639},
{"f_3781optimizer.scm",(void*)f_3781},
{"f_3824optimizer.scm",(void*)f_3824},
{"f_3830optimizer.scm",(void*)f_3830},
{"f_3788optimizer.scm",(void*)f_3788},
{"f_3798optimizer.scm",(void*)f_3798},
{"f_3811optimizer.scm",(void*)f_3811},
{"f_3796optimizer.scm",(void*)f_3796},
{"f_3792optimizer.scm",(void*)f_3792},
{"f_3642optimizer.scm",(void*)f_3642},
{"f_3645optimizer.scm",(void*)f_3645},
{"f_3665optimizer.scm",(void*)f_3665},
{"f_3678optimizer.scm",(void*)f_3678},
{"f_3721optimizer.scm",(void*)f_3721},
{"f_3753optimizer.scm",(void*)f_3753},
{"f_3719optimizer.scm",(void*)f_3719},
{"f_3701optimizer.scm",(void*)f_3701},
{"f_3648optimizer.scm",(void*)f_3648},
{"f_3657optimizer.scm",(void*)f_3657},
{"f_3591optimizer.scm",(void*)f_3591},
{"f_3597optimizer.scm",(void*)f_3597},
{"f_3621optimizer.scm",(void*)f_3621},
{"f_3570optimizer.scm",(void*)f_3570},
{"f_3109optimizer.scm",(void*)f_3109},
{"f_3123optimizer.scm",(void*)f_3123},
{"f_3358optimizer.scm",(void*)f_3358},
{"f_3565optimizer.scm",(void*)f_3565},
{"f_3363optimizer.scm",(void*)f_3363},
{"f_3554optimizer.scm",(void*)f_3554},
{"f_3376optimizer.scm",(void*)f_3376},
{"f_3379optimizer.scm",(void*)f_3379},
{"f_3385optimizer.scm",(void*)f_3385},
{"f_3400optimizer.scm",(void*)f_3400},
{"f_3406optimizer.scm",(void*)f_3406},
{"f_3412optimizer.scm",(void*)f_3412},
{"f_3421optimizer.scm",(void*)f_3421},
{"f_3428optimizer.scm",(void*)f_3428},
{"f_3431optimizer.scm",(void*)f_3431},
{"f_3449optimizer.scm",(void*)f_3449},
{"f_3434optimizer.scm",(void*)f_3434},
{"f_3126optimizer.scm",(void*)f_3126},
{"f_3140optimizer.scm",(void*)f_3140},
{"f_3147optimizer.scm",(void*)f_3147},
{"f_3352optimizer.scm",(void*)f_3352},
{"f_3152optimizer.scm",(void*)f_3152},
{"f_3165optimizer.scm",(void*)f_3165},
{"f_3341optimizer.scm",(void*)f_3341},
{"f_3168optimizer.scm",(void*)f_3168},
{"f_3315optimizer.scm",(void*)f_3315},
{"f_3313optimizer.scm",(void*)f_3313},
{"f_3174optimizer.scm",(void*)f_3174},
{"f_3186optimizer.scm",(void*)f_3186},
{"f_3192optimizer.scm",(void*)f_3192},
{"f_3201optimizer.scm",(void*)f_3201},
{"f_3207optimizer.scm",(void*)f_3207},
{"f_3210optimizer.scm",(void*)f_3210},
{"f_3228optimizer.scm",(void*)f_3228},
{"f_3213optimizer.scm",(void*)f_3213},
{"f_3129optimizer.scm",(void*)f_3129},
{"f_3132optimizer.scm",(void*)f_3132},
{"f_3116optimizer.scm",(void*)f_3116},
{"f_3112optimizer.scm",(void*)f_3112},
{"f_1638optimizer.scm",(void*)f_1638},
{"f_3013optimizer.scm",(void*)f_3013},
{"f_3019optimizer.scm",(void*)f_3019},
{"f_3023optimizer.scm",(void*)f_3023},
{"f_3026optimizer.scm",(void*)f_3026},
{"f_3062optimizer.scm",(void*)f_3062},
{"f_3067optimizer.scm",(void*)f_3067},
{"f_3071optimizer.scm",(void*)f_3071},
{"f_3029optimizer.scm",(void*)f_3029},
{"f_3032optimizer.scm",(void*)f_3032},
{"f_3035optimizer.scm",(void*)f_3035},
{"f_3038optimizer.scm",(void*)f_3038},
{"f_2994optimizer.scm",(void*)f_2994},
{"f_2998optimizer.scm",(void*)f_2998},
{"f_3004optimizer.scm",(void*)f_3004},
{"f_1979optimizer.scm",(void*)f_1979},
{"f_2904optimizer.scm",(void*)f_2904},
{"f_2907optimizer.scm",(void*)f_2907},
{"f_2986optimizer.scm",(void*)f_2986},
{"f_2948optimizer.scm",(void*)f_2948},
{"f_2969optimizer.scm",(void*)f_2969},
{"f_2961optimizer.scm",(void*)f_2961},
{"f_2919optimizer.scm",(void*)f_2919},
{"f_2938optimizer.scm",(void*)f_2938},
{"f_2925optimizer.scm",(void*)f_2925},
{"f_2879optimizer.scm",(void*)f_2879},
{"f_2854optimizer.scm",(void*)f_2854},
{"f_2312optimizer.scm",(void*)f_2312},
{"f_2321optimizer.scm",(void*)f_2321},
{"f_2495optimizer.scm",(void*)f_2495},
{"f_2506optimizer.scm",(void*)f_2506},
{"f_2805optimizer.scm",(void*)f_2805},
{"f_2811optimizer.scm",(void*)f_2811},
{"f_2516optimizer.scm",(void*)f_2516},
{"f_2553optimizer.scm",(void*)f_2553},
{"f_2795optimizer.scm",(void*)f_2795},
{"f_2712optimizer.scm",(void*)f_2712},
{"f_2727optimizer.scm",(void*)f_2727},
{"f_2738optimizer.scm",(void*)f_2738},
{"f_2765optimizer.scm",(void*)f_2765},
{"f_2757optimizer.scm",(void*)f_2757},
{"f_2742optimizer.scm",(void*)f_2742},
{"f_2732optimizer.scm",(void*)f_2732},
{"f_2567optimizer.scm",(void*)f_2567},
{"f_2600optimizer.scm",(void*)f_2600},
{"f_2606optimizer.scm",(void*)f_2606},
{"f_2612optimizer.scm",(void*)f_2612},
{"f_2649optimizer.scm",(void*)f_2649},
{"f_2625optimizer.scm",(void*)f_2625},
{"f_2629optimizer.scm",(void*)f_2629},
{"f_2594optimizer.scm",(void*)f_2594},
{"f_2583optimizer.scm",(void*)f_2583},
{"f_2519optimizer.scm",(void*)f_2519},
{"f_2522optimizer.scm",(void*)f_2522},
{"f_2525optimizer.scm",(void*)f_2525},
{"f_2535optimizer.scm",(void*)f_2535},
{"f_2481optimizer.scm",(void*)f_2481},
{"f_2384optimizer.scm",(void*)f_2384},
{"f_2402optimizer.scm",(void*)f_2402},
{"f_2459optimizer.scm",(void*)f_2459},
{"f_2451optimizer.scm",(void*)f_2451},
{"f_2405optimizer.scm",(void*)f_2405},
{"f_2430optimizer.scm",(void*)f_2430},
{"f_2428optimizer.scm",(void*)f_2428},
{"f_2414optimizer.scm",(void*)f_2414},
{"f_2363optimizer.scm",(void*)f_2363},
{"f_2330optimizer.scm",(void*)f_2330},
{"f_2333optimizer.scm",(void*)f_2333},
{"f_2343optimizer.scm",(void*)f_2343},
{"f_2136optimizer.scm",(void*)f_2136},
{"f_2228optimizer.scm",(void*)f_2228},
{"f_2233optimizer.scm",(void*)f_2233},
{"f_2240optimizer.scm",(void*)f_2240},
{"f_2269optimizer.scm",(void*)f_2269},
{"f_2253optimizer.scm",(void*)f_2253},
{"f_2141optimizer.scm",(void*)f_2141},
{"f_2159optimizer.scm",(void*)f_2159},
{"f_2166optimizer.scm",(void*)f_2166},
{"f_2202optimizer.scm",(void*)f_2202},
{"f_2205optimizer.scm",(void*)f_2205},
{"f_2195optimizer.scm",(void*)f_2195},
{"f_2179optimizer.scm",(void*)f_2179},
{"f_2147optimizer.scm",(void*)f_2147},
{"f_2153optimizer.scm",(void*)f_2153},
{"f_2079optimizer.scm",(void*)f_2079},
{"f_2105optimizer.scm",(void*)f_2105},
{"f_2114optimizer.scm",(void*)f_2114},
{"f_2121optimizer.scm",(void*)f_2121},
{"f_2082optimizer.scm",(void*)f_2082},
{"f_2099optimizer.scm",(void*)f_2099},
{"f_2004optimizer.scm",(void*)f_2004},
{"f_2008optimizer.scm",(void*)f_2008},
{"f_2020optimizer.scm",(void*)f_2020},
{"f_2043optimizer.scm",(void*)f_2043},
{"f_2026optimizer.scm",(void*)f_2026},
{"f_2037optimizer.scm",(void*)f_2037},
{"f_1763optimizer.scm",(void*)f_1763},
{"f_1777optimizer.scm",(void*)f_1777},
{"f_1944optimizer.scm",(void*)f_1944},
{"f_1947optimizer.scm",(void*)f_1947},
{"f_1953optimizer.scm",(void*)f_1953},
{"f_1847optimizer.scm",(void*)f_1847},
{"f_1929optimizer.scm",(void*)f_1929},
{"f_1927optimizer.scm",(void*)f_1927},
{"f_1858optimizer.scm",(void*)f_1858},
{"f_1881optimizer.scm",(void*)f_1881},
{"f_1913optimizer.scm",(void*)f_1913},
{"f_1919optimizer.scm",(void*)f_1919},
{"f_1887optimizer.scm",(void*)f_1887},
{"f_1891optimizer.scm",(void*)f_1891},
{"f_1894optimizer.scm",(void*)f_1894},
{"f_1911optimizer.scm",(void*)f_1911},
{"f_1864optimizer.scm",(void*)f_1864},
{"f_1870optimizer.scm",(void*)f_1870},
{"f_1874optimizer.scm",(void*)f_1874},
{"f_1878optimizer.scm",(void*)f_1878},
{"f_1856optimizer.scm",(void*)f_1856},
{"f_1795optimizer.scm",(void*)f_1795},
{"f_1786optimizer.scm",(void*)f_1786},
{"f_1671optimizer.scm",(void*)f_1671},
{"f_1675optimizer.scm",(void*)f_1675},
{"f_1686optimizer.scm",(void*)f_1686},
{"f_1696optimizer.scm",(void*)f_1696},
{"f_1745optimizer.scm",(void*)f_1745},
{"f_1743optimizer.scm",(void*)f_1743},
{"f_1702optimizer.scm",(void*)f_1702},
{"f_1708optimizer.scm",(void*)f_1708},
{"f_1735optimizer.scm",(void*)f_1735},
{"f_1714optimizer.scm",(void*)f_1714},
{"f_1678optimizer.scm",(void*)f_1678},
{"f_1667optimizer.scm",(void*)f_1667},
{"f_1657optimizer.scm",(void*)f_1657},
{"f_1647optimizer.scm",(void*)f_1647},
{"f_1641optimizer.scm",(void*)f_1641},
{"f_1432optimizer.scm",(void*)f_1432},
{"f_1453optimizer.scm",(void*)f_1453},
{"f_1465optimizer.scm",(void*)f_1465},
{"f_1480optimizer.scm",(void*)f_1480},
{"f_1532optimizer.scm",(void*)f_1532},
{"f_1551optimizer.scm",(void*)f_1551},
{"f_1562optimizer.scm",(void*)f_1562},
{"f_1535optimizer.scm",(void*)f_1535},
{"f_1505optimizer.scm",(void*)f_1505},
{"f_1468optimizer.scm",(void*)f_1468},
{"f_1474optimizer.scm",(void*)f_1474},
{"f_1456optimizer.scm",(void*)f_1456},
{"f_1459optimizer.scm",(void*)f_1459},
{"f_1463optimizer.scm",(void*)f_1463},
{"f_1435optimizer.scm",(void*)f_1435},
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
