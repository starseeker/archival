/* Generated from csi.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:16
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: csi.scm -output-file csi.c -quiet -no-trace -optimize-level 2 -include-path .
   used units: library eval extras match
*/

#include "chicken.h"

#if (defined(_MSC_VER) && defined(_WIN32)) || defined(HAVE_DIRECT_H)
# include <direct.h>
#else
# define _getcwd(buf, len)       NULL
#endif

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_match_toplevel)
C_externimport void C_ccall C_match_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[764];


/* from k4148 */
static C_word C_fcall stub860(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub860(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
C_word t1=(C_word )(C_a1);
C_r=((C_word)C_enumerate_symbols(t0,t1));
return C_r;}

/* from k4134 in ##csi#find-symbol-table in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static C_word C_fcall stub852(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub852(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * t0=(char * )C_string_or_null(C_a0);
C_r=C_mpointer_or_false(&C_a,(void*)C_find_symbol_table(t0));
return C_r;}

/* from k1495 */
static C_word C_fcall stub486(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub486(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_data_pointer_or_null(C_a0);
int t1=(int )C_unfix(C_a1);
C_r=C_mpointer(&C_a,(void*)_getcwd(t0,t1));
return C_r;}

C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1095)
static void C_ccall f_1095(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1098)
static void C_ccall f_1098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1101)
static void C_ccall f_1101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1104)
static void C_ccall f_1104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1107)
static void C_ccall f_1107(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8928)
static void C_ccall f_8928(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8928)
static void C_ccall f_8928r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8932)
static void C_ccall f_8932(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8935)
static void C_ccall f_8935(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8938)
static void C_ccall f_8938(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8944)
static void C_ccall f_8944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9150)
static void C_ccall f_9150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9130)
static void C_ccall f_9130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9126)
static void C_ccall f_9126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9106)
static void C_ccall f_9106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8969)
static void C_fcall f_8969(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8979)
static void C_ccall f_8979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9098)
static void C_ccall f_9098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8982)
static void C_ccall f_8982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9094)
static void C_ccall f_9094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8985)
static void C_ccall f_8985(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_9016)
static void C_fcall f_9016(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8996)
static void C_ccall f_8996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8967)
static void C_ccall f_8967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1110)
static void C_ccall f_1110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8840)
static void C_ccall f_8840(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8840)
static void C_ccall f_8840r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8857)
static void C_ccall f_8857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8860)
static void C_ccall f_8860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8866)
static void C_fcall f_8866(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8799)
static void C_ccall f_8799(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_8799)
static void C_ccall f_8799r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_8803)
static void C_ccall f_8803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1116)
static void C_ccall f_1116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8783)
static void C_ccall f_8783(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_8783)
static void C_ccall f_8783r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_8793)
static void C_ccall f_8793(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8791)
static void C_ccall f_8791(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1119)
static void C_ccall f_1119(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8728)
static void C_ccall f_8728(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8732)
static void C_ccall f_8732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8778)
static void C_ccall f_8778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8735)
static void C_ccall f_8735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8744)
static void C_ccall f_8744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8752)
static void C_ccall f_8752(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8754)
static void C_fcall f_8754(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8771)
static void C_ccall f_8771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8742)
static void C_ccall f_8742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1122)
static void C_ccall f_1122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8668)
static void C_ccall f_8668(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8668)
static void C_ccall f_8668r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8672)
static void C_fcall f_8672(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1125)
static void C_ccall f_1125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8609)
static void C_ccall f_8609(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_8609)
static void C_ccall f_8609r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_8613)
static void C_ccall f_8613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8640)
static void C_fcall f_8640(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1128)
static void C_ccall f_1128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8435)
static void C_ccall f_8435(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8435)
static void C_ccall f_8435r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8439)
static void C_ccall f_8439(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8442)
static void C_ccall f_8442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8603)
static void C_ccall f_8603(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8445)
static void C_ccall f_8445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8597)
static void C_ccall f_8597(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8448)
static void C_ccall f_8448(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8595)
static void C_ccall f_8595(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8559)
static void C_ccall f_8559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8573)
static void C_fcall f_8573(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8587)
static void C_ccall f_8587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8567)
static void C_ccall f_8567(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8563)
static void C_ccall f_8563(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8455)
static void C_ccall f_8455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8551)
static void C_ccall f_8551(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8527)
static void C_ccall f_8527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8545)
static void C_ccall f_8545(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8535)
static void C_ccall f_8535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8531)
static void C_ccall f_8531(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8523)
static void C_ccall f_8523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8507)
static void C_ccall f_8507(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8483)
static void C_ccall f_8483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8501)
static void C_ccall f_8501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8491)
static void C_ccall f_8491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8487)
static void C_ccall f_8487(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8479)
static void C_ccall f_8479(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1131)
static void C_ccall f_1131(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8340)
static void C_ccall f_8340(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8340)
static void C_ccall f_8340r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8376)
static void C_fcall f_8376(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8389)
static void C_ccall f_8389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8347)
static void C_ccall f_8347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1134)
static void C_ccall f_1134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8230)
static void C_ccall f_8230(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8230)
static void C_ccall f_8230r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_8234)
static void C_ccall f_8234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8237)
static void C_ccall f_8237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8240)
static void C_ccall f_8240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8243)
static void C_ccall f_8243(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8334)
static void C_ccall f_8334(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8246)
static void C_ccall f_8246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8328)
static void C_ccall f_8328(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8249)
static void C_ccall f_8249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8322)
static void C_ccall f_8322(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8326)
static void C_ccall f_8326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8256)
static void C_ccall f_8256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8294)
static void C_ccall f_8294(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8292)
static void C_ccall f_8292(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1137)
static void C_ccall f_1137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8220)
static void C_ccall f_8220(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8220)
static void C_ccall f_8220r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1140)
static void C_ccall f_1140(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8206)
static void C_ccall f_8206(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_8206)
static void C_ccall f_8206r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1143)
static void C_ccall f_1143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1217)
static void C_ccall f_1217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1220)
static void C_ccall f_1220(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7944)
static void C_ccall f_7944(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7948)
static void C_ccall f_7948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7957)
static void C_ccall f_7957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8166)
static void C_fcall f_8166(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8179)
static void C_ccall f_8179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7960)
static void C_ccall f_7960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8156)
static void C_ccall f_8156(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8164)
static void C_ccall f_8164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7963)
static void C_ccall f_7963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8110)
static void C_fcall f_8110(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_8143)
static void C_ccall f_8143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8150)
static void C_ccall f_8150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8126)
static void C_fcall f_8126(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7975)
static void C_ccall f_7975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8104)
static void C_ccall f_8104(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7982)
static void C_ccall f_7982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7984)
static void C_fcall f_7984(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_8098)
static void C_ccall f_8098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8018)
static void C_fcall f_8018(C_word t0,C_word t1) C_noret;
C_noret_decl(f_8072)
static void C_ccall f_8072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8049)
static void C_ccall f_8049(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8029)
static void C_ccall f_8029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8004)
static void C_ccall f_8004(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_8012)
static void C_ccall f_8012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_8002)
static void C_ccall f_8002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7964)
static void C_ccall f_7964(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7904)
static void C_fcall f_7904(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7927)
static void C_ccall f_7927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7931)
static void C_ccall f_7931(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7873)
static void C_fcall f_7873(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7894)
static void C_ccall f_7894(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1223)
static void C_ccall f_1223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7822)
static void C_ccall f_7822(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7826)
static void C_ccall f_7826(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7837)
static void C_fcall f_7837(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7862)
static void C_ccall f_7862(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1226)
static void C_ccall f_1226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7702)
static void C_ccall f_7702(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7706)
static void C_ccall f_7706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7816)
static void C_ccall f_7816(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7814)
static void C_ccall f_7814(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7715)
static void C_ccall f_7715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7802)
static void C_ccall f_7802(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7810)
static void C_ccall f_7810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7718)
static void C_ccall f_7718(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7796)
static void C_ccall f_7796(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7738)
static void C_ccall f_7738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7748)
static void C_ccall f_7748(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7768)
static void C_ccall f_7768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7774)
static void C_ccall f_7774(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7782)
static void C_ccall f_7782(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7772)
static void C_ccall f_7772(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7746)
static void C_ccall f_7746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7742)
static void C_ccall f_7742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7719)
static void C_ccall f_7719(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1229)
static void C_ccall f_1229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7681)
static void C_ccall f_7681(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_7685)
static void C_ccall f_7685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1232)
static void C_ccall f_1232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7671)
static void C_ccall f_7671(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1238)
static void C_ccall f_1238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1247)
static void C_fcall f_1247(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1263)
static void C_fcall f_1263(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7650)
static void C_ccall f_7650(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7654)
static void C_ccall f_7654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1314)
static void C_ccall f_1314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7636)
static void C_ccall f_7636(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7520)
static void C_ccall f_7520(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7524)
static void C_ccall f_7524(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7533)
static void C_fcall f_7533(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7547)
static void C_fcall f_7547(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7611)
static void C_ccall f_7611(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7593)
static void C_ccall f_7593(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7576)
static void C_ccall f_7576(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1320)
static void C_ccall f_1320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7274)
static void C_ccall f_7274(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7429)
static void C_fcall f_7429(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7500)
static void C_ccall f_7500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7445)
static void C_ccall f_7445(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7443)
static void C_ccall f_7443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7287)
static void C_fcall f_7287(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7413)
static void C_ccall f_7413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7375)
static void C_ccall f_7375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7336)
static void C_ccall f_7336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7277)
static void C_fcall f_7277(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1323)
static void C_ccall f_1323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7185)
static void C_ccall f_7185(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7195)
static void C_ccall f_7195(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7208)
static void C_fcall f_7208(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7224)
static void C_ccall f_7224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7252)
static void C_ccall f_7252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7206)
static void C_ccall f_7206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1326)
static void C_ccall f_1326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6899)
static void C_ccall f_6899(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_6899)
static void C_ccall f_6899r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_7096)
static void C_ccall f_7096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7099)
static void C_ccall f_7099(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7102)
static void C_ccall f_7102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7175)
static void C_ccall f_7175(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7183)
static void C_ccall f_7183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7118)
static void C_ccall f_7118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7121)
static void C_ccall f_7121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7124)
static void C_ccall f_7124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7127)
static void C_ccall f_7127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7165)
static void C_ccall f_7165(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7173)
static void C_ccall f_7173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7130)
static void C_ccall f_7130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6910)
static void C_ccall f_6910(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6914)
static void C_ccall f_6914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6918)
static void C_ccall f_6918(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6920)
static void C_fcall f_6920(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_6965)
static void C_ccall f_6965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6977)
static void C_ccall f_6977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6973)
static void C_ccall f_6973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6941)
static void C_ccall f_6941(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7133)
static void C_ccall f_7133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6993)
static void C_fcall f_6993(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_7093)
static void C_ccall f_7093(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7057)
static void C_ccall f_7057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7027)
static void C_ccall f_7027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7136)
static void C_ccall f_7136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7103)
static void C_fcall f_7103(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_7115)
static void C_ccall f_7115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7111)
static void C_ccall f_7111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1329)
static void C_ccall f_1329(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6842)
static void C_ccall f_6842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6846)
static void C_ccall f_6846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1332)
static void C_ccall f_1332(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6689)
static void C_ccall f_6689(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_6689)
static void C_ccall f_6689r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_6693)
static void C_ccall f_6693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6696)
static void C_ccall f_6696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6699)
static void C_ccall f_6699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6712)
static void C_fcall f_6712(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6762)
static void C_ccall f_6762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6773)
static void C_ccall f_6773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6710)
static void C_ccall f_6710(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1335)
static void C_ccall f_1335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6413)
static void C_ccall f_6413(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6447)
static void C_ccall f_6447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6450)
static void C_ccall f_6450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6676)
static void C_ccall f_6676(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6686)
static void C_ccall f_6686(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6674)
static void C_ccall f_6674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6453)
static void C_ccall f_6453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6422)
static void C_fcall f_6422(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6436)
static void C_ccall f_6436(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6440)
static void C_ccall f_6440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6456)
static void C_ccall f_6456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6459)
static void C_ccall f_6459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6462)
static void C_ccall f_6462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6469)
static void C_ccall f_6469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6483)
static void C_ccall f_6483(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6493)
static void C_ccall f_6493(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6497)
static void C_ccall f_6497(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6507)
static void C_fcall f_6507(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6523)
static void C_ccall f_6523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6542)
static void C_fcall f_6542(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6598)
static void C_ccall f_6598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6609)
static void C_ccall f_6609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6527)
static void C_ccall f_6527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6540)
static void C_ccall f_6540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6513)
static void C_ccall f_6513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6521)
static void C_ccall f_6521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6511)
static void C_ccall f_6511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6481)
static void C_ccall f_6481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1338)
static void C_ccall f_1338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6356)
static void C_ccall f_6356(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6356)
static void C_ccall f_6356r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6396)
static void C_ccall f_6396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6366)
static void C_ccall f_6366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1341)
static void C_ccall f_1341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6280)
static void C_ccall f_6280(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_6280)
static void C_ccall f_6280r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_6284)
static void C_ccall f_6284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6287)
static void C_ccall f_6287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1344)
static void C_ccall f_1344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6096)
static void C_ccall f_6096(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6096)
static void C_ccall f_6096r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6100)
static void C_ccall f_6100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6103)
static void C_ccall f_6103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6246)
static void C_ccall f_6246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6242)
static void C_ccall f_6242(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6105)
static void C_ccall f_6105(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6193)
static void C_ccall f_6193(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6191)
static void C_ccall f_6191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6161)
static void C_fcall f_6161(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6128)
static void C_fcall f_6128(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1347)
static void C_ccall f_1347(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5906)
static void C_ccall f_5906(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_5906)
static void C_ccall f_5906r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_5913)
static void C_ccall f_5913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6087)
static void C_ccall f_6087(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6085)
static void C_ccall f_6085(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5938)
static void C_fcall f_5938(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5964)
static void C_fcall f_5964(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5992)
static void C_fcall f_5992(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5984)
static void C_ccall f_5984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5976)
static void C_ccall f_5976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5936)
static void C_ccall f_5936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1350)
static void C_ccall f_1350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5897)
static void C_ccall f_5897(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5901)
static void C_ccall f_5901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1353)
static void C_ccall f_1353(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5878)
static void C_ccall f_5878(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5882)
static void C_ccall f_5882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5891)
static void C_ccall f_5891(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5889)
static void C_ccall f_5889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1356)
static void C_ccall f_1356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5859)
static void C_ccall f_5859(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5863)
static void C_ccall f_5863(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5872)
static void C_ccall f_5872(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5870)
static void C_ccall f_5870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1359)
static void C_ccall f_1359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5731)
static void C_ccall f_5731(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5737)
static void C_fcall f_5737(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5818)
static void C_ccall f_5818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5747)
static void C_ccall f_5747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5750)
static void C_ccall f_5750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5756)
static void C_ccall f_5756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5763)
static void C_ccall f_5763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5779)
static void C_ccall f_5779(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1362)
static void C_ccall f_1362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5588)
static void C_ccall f_5588(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5594)
static void C_fcall f_5594(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_5706)
static void C_ccall f_5706(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5679)
static void C_ccall f_5679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5604)
static void C_ccall f_5604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5607)
static void C_ccall f_5607(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5613)
static void C_ccall f_5613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5624)
static void C_ccall f_5624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5640)
static void C_ccall f_5640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1365)
static void C_ccall f_1365(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_5529)
static void C_ccall f_5529r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_1368)
static void C_ccall f_1368(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5358)
static void C_ccall f_5358(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5358)
static void C_ccall f_5358r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5364)
static void C_fcall f_5364(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_5438)
static void C_fcall f_5438(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5441)
static void C_ccall f_5441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5514)
static void C_ccall f_5514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5507)
static void C_ccall f_5507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5499)
static void C_ccall f_5499(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5486)
static void C_ccall f_5486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5465)
static void C_ccall f_5465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5374)
static void C_fcall f_5374(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1371)
static void C_ccall f_1371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5307)
static void C_ccall f_5307(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5307)
static void C_ccall f_5307r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1374)
static void C_ccall f_1374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5247)
static void C_ccall f_5247(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_5247)
static void C_ccall f_5247r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_5257)
static void C_fcall f_5257(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5276)
static void C_ccall f_5276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5260)
static void C_ccall f_5260(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1377)
static void C_ccall f_1377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1380)
static void C_ccall f_1380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5241)
static void C_ccall f_5241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1734)
static void C_ccall f_1734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1763)
static void C_ccall f_1763(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2995)
static void C_ccall f_2995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5233)
static void C_ccall f_5233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5239)
static void C_ccall f_5239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5236)
static void C_ccall f_5236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4575)
static void C_ccall f_4575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5227)
static void C_ccall f_5227(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2722)
static void C_ccall f_2722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2752)
static void C_ccall f_2752(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2770)
static void C_ccall f_2770(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2809)
static void C_ccall f_2809(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2809)
static void C_ccall f_2809r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2815)
static void C_ccall f_2815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2776)
static void C_ccall f_2776(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2784)
static void C_ccall f_2784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2786)
static void C_fcall f_2786(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2803)
static void C_ccall f_2803(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2758)
static void C_ccall f_2758(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2764)
static void C_ccall f_2764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2750)
static void C_ccall f_2750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2747)
static void C_ccall f_2747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2727)
static void C_ccall f_2727(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2737)
static void C_ccall f_2737(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2740)
static void C_ccall f_2740(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4579)
static void C_ccall f_4579(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5223)
static void C_ccall f_5223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4582)
static void C_ccall f_4582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4585)
static void C_ccall f_4585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4588)
static void C_ccall f_4588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5215)
static void C_ccall f_5215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5202)
static void C_ccall f_5202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5162)
static void C_fcall f_5162(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5098)
static void C_ccall f_5098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5101)
static void C_ccall f_5101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5104)
static void C_ccall f_5104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5148)
static void C_ccall f_5148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5144)
static void C_ccall f_5144(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5113)
static void C_fcall f_5113(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5116)
static void C_ccall f_5116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4591)
static void C_fcall f_4591(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4594)
static void C_ccall f_4594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5092)
static void C_ccall f_5092(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4597)
static void C_fcall f_4597(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5086)
static void C_ccall f_5086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4600)
static void C_fcall f_4600(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5080)
static void C_ccall f_5080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5076)
static void C_ccall f_5076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4603)
static void C_ccall f_4603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5066)
static void C_ccall f_5066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5069)
static void C_ccall f_5069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4690)
static void C_ccall f_4690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5057)
static void C_ccall f_5057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5060)
static void C_ccall f_5060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4693)
static void C_ccall f_4693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5054)
static void C_ccall f_5054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5047)
static void C_ccall f_5047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4696)
static void C_ccall f_4696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5034)
static void C_ccall f_5034(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5037)
static void C_ccall f_5037(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4699)
static void C_fcall f_4699(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5028)
static void C_ccall f_5028(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4702)
static void C_ccall f_4702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5013)
static void C_ccall f_5013(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5016)
static void C_ccall f_5016(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5019)
static void C_ccall f_5019(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4705)
static void C_ccall f_4705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5010)
static void C_ccall f_5010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4708)
static void C_ccall f_4708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5006)
static void C_ccall f_5006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5002)
static void C_ccall f_5002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4990)
static void C_ccall f_4990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4998)
static void C_ccall f_4998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4994)
static void C_ccall f_4994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4986)
static void C_ccall f_4986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4715)
static void C_ccall f_4715(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4722)
static void C_ccall f_4722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4725)
static void C_ccall f_4725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4920)
static void C_ccall f_4920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4652)
static void C_ccall f_4652(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4658)
static void C_ccall f_4658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4684)
static void C_ccall f_4684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4664)
static void C_ccall f_4664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4667)
static void C_ccall f_4667(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4673)
static void C_ccall f_4673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4728)
static void C_ccall f_4728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4733)
static void C_fcall f_4733(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4859)
static void C_ccall f_4859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4865)
static void C_fcall f_4865(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_4880)
static void C_ccall f_4880r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_4891)
static void C_fcall f_4891(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4870)
static void C_ccall f_4870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4878)
static void C_ccall f_4878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4822)
static void C_ccall f_4822(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4833)
static void C_ccall f_4833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4835)
static void C_fcall f_4835(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4845)
static void C_ccall f_4845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4852)
static void C_ccall f_4852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4825)
static void C_ccall f_4825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4806)
static void C_ccall f_4806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4790)
static void C_ccall f_4790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4761)
static void C_ccall f_4761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4746)
static void C_ccall f_4746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4605)
static void C_fcall f_4605(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4611)
static void C_fcall f_4611(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4638)
static void C_ccall f_4638(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4414)
static void C_fcall f_4414(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4420)
static void C_fcall f_4420(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4445)
static void C_fcall f_4445(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4451)
static void C_fcall f_4451(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4501)
static void C_ccall f_4501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4467)
static void C_ccall f_4467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4490)
static void C_ccall f_4490(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4480)
static void C_ccall f_4480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4549)
static C_word C_fcall f_4549(C_word t0);
C_noret_decl(f_4357)
static void C_fcall f_4357(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4363)
static void C_fcall f_4363(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4375)
static void C_fcall f_4375(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4298)
static void C_ccall f_4298r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4302)
static void C_ccall f_4302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4307)
static void C_fcall f_4307(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4336)
static void C_ccall f_4336(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4323)
static void C_ccall f_4323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4260)
static void C_ccall f_4260(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4267)
static void C_ccall f_4267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4272)
static void C_fcall f_4272(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4276)
static void C_ccall f_4276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4296)
static void C_ccall f_4296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4289)
static void C_ccall f_4289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4215)
static void C_ccall f_4215(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4222)
static void C_ccall f_4222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4225)
static void C_ccall f_4225(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4230)
static void C_fcall f_4230(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4234)
static void C_ccall f_4234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4258)
static void C_ccall f_4258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4247)
static void C_ccall f_4247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4254)
static void C_ccall f_4254(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4244)
static void C_fcall f_4244(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4183)
static void C_ccall f_4183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4190)
static void C_ccall f_4190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4195)
static void C_fcall f_4195(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4199)
static void C_ccall f_4199(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4213)
static void C_ccall f_4213(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4155)
static void C_ccall f_4155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4162)
static void C_ccall f_4162(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4167)
static void C_fcall f_4167(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4171)
static void C_ccall f_4171(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4145)
static void C_ccall f_4145(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4131)
static void C_ccall f_4131(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4136)
static void C_ccall f_4136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3922)
static void C_ccall f_3922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3954)
static void C_fcall f_3954(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4129)
static void C_ccall f_4129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3964)
static void C_ccall f_3964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3967)
static void C_ccall f_3967(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4039)
static void C_fcall f_4039(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4100)
static void C_ccall f_4100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4122)
static void C_ccall f_4122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4118)
static void C_ccall f_4118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4103)
static void C_ccall f_4103(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4058)
static void C_ccall f_4058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4076)
static void C_fcall f_4076(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4086)
static void C_ccall f_4086(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3970)
static void C_ccall f_3970(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3973)
static void C_ccall f_3973(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3988)
static void C_fcall f_3988(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4001)
static void C_ccall f_4001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4004)
static void C_ccall f_4004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3976)
static void C_ccall f_3976(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3979)
static void C_ccall f_3979(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3925)
static void C_fcall f_3925(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3929)
static void C_ccall f_3929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3945)
static void C_ccall f_3945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3761)
static void C_ccall f_3761(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3761)
static void C_ccall f_3761r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3874)
static void C_fcall f_3874(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3869)
static void C_fcall f_3869(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3763)
static void C_fcall f_3763(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3788)
static void C_ccall f_3788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3831)
static void C_fcall f_3831(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3841)
static void C_ccall f_3841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3812)
static void C_ccall f_3812(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3795)
static void C_ccall f_3795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3766)
static void C_fcall f_3766(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3755)
static void C_ccall f_3755(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2997)
static void C_ccall f_2997(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2997)
static void C_ccall f_2997r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3001)
static void C_ccall f_3001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3734)
static void C_ccall f_3734(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3129)
static void C_ccall f_3129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3228)
static void C_ccall f_3228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3375)
static void C_ccall f_3375(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3403)
static void C_ccall f_3403(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3412)
static void C_ccall f_3412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3506)
static void C_ccall f_3506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3640)
static void C_ccall f_3640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3655)
static void C_ccall f_3655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3694)
static void C_ccall f_3694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3683)
static void C_ccall f_3683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3679)
static void C_ccall f_3679(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3662)
static void C_ccall f_3662(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3573)
static void C_ccall f_3573(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3578)
static void C_ccall f_3578(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3582)
static void C_ccall f_3582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3591)
static void C_fcall f_3591(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3626)
static void C_ccall f_3626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3618)
static void C_ccall f_3618(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3601)
static void C_ccall f_3601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3537)
static void C_ccall f_3537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3540)
static void C_ccall f_3540(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3545)
static void C_ccall f_3545(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3525)
static void C_ccall f_3525(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3512)
static void C_ccall f_3512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3500)
static void C_ccall f_3500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3419)
static void C_ccall f_3419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3430)
static void C_fcall f_3430(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3394)
static void C_ccall f_3394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3335)
static void C_fcall f_3335(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3349)
static void C_ccall f_3349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3345)
static void C_ccall f_3345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3258)
static void C_ccall f_3258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3271)
static void C_fcall f_3271(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3261)
static void C_ccall f_3261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3268)
static void C_ccall f_3268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3204)
static void C_ccall f_3204(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3132)
static void C_ccall f_3132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3003)
static void C_ccall f_3003(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3126)
static void C_ccall f_3126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3010)
static void C_ccall f_3010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3015)
static void C_fcall f_3015(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3038)
static void C_ccall f_3038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3047)
static void C_fcall f_3047(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3111)
static void C_ccall f_3111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3057)
static void C_ccall f_3057(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3060)
static void C_ccall f_3060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2829)
static void C_ccall f_2829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2831)
static void C_ccall f_2831(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2835)
static void C_ccall f_2835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2838)
static void C_ccall f_2838(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2841)
static void C_ccall f_2841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2858)
static void C_ccall f_2858(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2981)
static void C_ccall f_2981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2977)
static void C_ccall f_2977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2960)
static void C_ccall f_2960(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2964)
static void C_ccall f_2964(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2969)
static void C_ccall f_2969(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2861)
static void C_ccall f_2861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2897)
static void C_ccall f_2897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2901)
static void C_ccall f_2901(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2864)
static void C_ccall f_2864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2867)
static void C_ccall f_2867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2870)
static void C_ccall f_2870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2873)
static void C_ccall f_2873(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2843)
static void C_fcall f_2843(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2851)
static void C_ccall f_2851(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2427)
static void C_ccall f_2427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2432)
static void C_ccall f_2432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2441)
static void C_ccall f_2441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2452)
static void C_ccall f_2452(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2456)
static void C_ccall f_2456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2444)
static void C_ccall f_2444(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2447)
static void C_ccall f_2447(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2404)
static void C_ccall f_2404(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2408)
static void C_ccall f_2408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2412)
static void C_ccall f_2412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2415)
static void C_ccall f_2415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2376)
static void C_fcall f_2376(C_word t0) C_noret;
C_noret_decl(f_2380)
static void C_ccall f_2380(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2385)
static void C_fcall f_2385(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2395)
static void C_ccall f_2395(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2341)
static void C_fcall f_2341(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2357)
static void C_ccall f_2357(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1806)
static void C_ccall f_1806(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1823)
static void C_fcall f_1823(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2316)
static void C_ccall f_2316r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2320)
static void C_ccall f_2320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2310)
static void C_ccall f_2310(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1829)
static void C_ccall f_1829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2296)
static void C_ccall f_2296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2272)
static void C_ccall f_2272(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2280)
static void C_ccall f_2280(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2275)
static void C_ccall f_2275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2253)
static void C_ccall f_2253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2256)
static void C_ccall f_2256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2259)
static void C_ccall f_2259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2230)
static void C_ccall f_2230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2233)
static void C_ccall f_2233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2240)
static void C_ccall f_2240(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2214)
static void C_ccall f_2214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2186)
static void C_ccall f_2186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2176)
static void C_ccall f_2176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2154)
static void C_ccall f_2154(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2150)
static void C_ccall f_2150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2133)
static void C_ccall f_2133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2129)
static void C_ccall f_2129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2125)
static void C_ccall f_2125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2689)
static void C_ccall f_2689(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2693)
static void C_ccall f_2693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2712)
static void C_ccall f_2712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2112)
static void C_ccall f_2112(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2108)
static void C_ccall f_2108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2104)
static void C_ccall f_2104(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2621)
static void C_ccall f_2621(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2677)
static void C_ccall f_2677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2631)
static void C_fcall f_2631(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2652)
static void C_ccall f_2652r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2656)
static void C_ccall f_2656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2608)
static void C_ccall f_2608(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2087)
static void C_ccall f_2087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2083)
static void C_ccall f_2083(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2567)
static void C_ccall f_2567(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2571)
static void C_ccall f_2571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2590)
static void C_ccall f_2590(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2070)
static void C_ccall f_2070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2062)
static void C_ccall f_2062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2486)
static void C_ccall f_2486(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2490)
static void C_ccall f_2490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2529)
static void C_ccall f_2529r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2533)
static void C_ccall f_2533(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2544)
static void C_ccall f_2544r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2548)
static void C_ccall f_2548(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2538)
static void C_ccall f_2538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2473)
static void C_ccall f_2473(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2009)
static void C_ccall f_2009(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2042)
static void C_ccall f_2042r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2046)
static void C_ccall f_2046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2014)
static void C_ccall f_2014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2018)
static void C_ccall f_2018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2029)
static void C_ccall f_2029(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2029)
static void C_ccall f_2029r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2040)
static void C_ccall f_2040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2033)
static void C_ccall f_2033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2023)
static void C_ccall f_2023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2000)
static void C_ccall f_2000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1975)
static void C_ccall f_1975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1983)
static void C_ccall f_1983(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1989)
static void C_ccall f_1989(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1993)
static void C_ccall f_1993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1978)
static void C_ccall f_1978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1966)
static void C_ccall f_1966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1956)
static void C_ccall f_1956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1959)
static void C_ccall f_1959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1920)
static void C_ccall f_1920(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1923)
static void C_ccall f_1923(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1926)
static void C_ccall f_1926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1902)
static void C_ccall f_1902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1905)
static void C_ccall f_1905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1887)
static void C_ccall f_1887(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1890)
static void C_ccall f_1890(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1869)
static void C_ccall f_1869(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1872)
static void C_ccall f_1872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1875)
static void C_ccall f_1875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1850)
static void C_ccall f_1850(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1860)
static void C_ccall f_1860(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1853)
static void C_ccall f_1853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1835)
static void C_ccall f_1835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1765)
static void C_ccall f_1765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1765)
static void C_ccall f_1765r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1769)
static void C_ccall f_1769(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1749)
static void C_ccall f_1749(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1756)
static void C_ccall f_1756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1736)
static void C_ccall f_1736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1709)
static void C_ccall f_1709(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1694)
static void C_ccall f_1694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1680)
static void C_fcall f_1680(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1550)
static void C_ccall f_1550(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1554)
static void C_ccall f_1554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1599)
static void C_ccall f_1599(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1605)
static void C_ccall f_1605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1612)
static void C_ccall f_1612(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1614)
static void C_fcall f_1614(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1624)
static void C_ccall f_1624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1627)
static void C_ccall f_1627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1578)
static void C_ccall f_1578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1592)
static void C_ccall f_1592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1588)
static void C_ccall f_1588(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1529)
static C_word C_fcall f_1529(C_word t0,C_word t1);
C_noret_decl(f_1502)
static void C_fcall f_1502(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1509)
static void C_ccall f_1509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1512)
static void C_ccall f_1512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1518)
static void C_ccall f_1518(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1451)
static void C_ccall f_1451(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1455)
static void C_ccall f_1455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1461)
static void C_fcall f_1461(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1449)
static void C_ccall f_1449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1412)
static void C_ccall f_1412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1429)
static void C_ccall f_1429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1402)
static void C_ccall f_1402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1410)
static void C_ccall f_1410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1390)
static void C_ccall f_1390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1394)
static void C_ccall f_1394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1397)
static void C_ccall f_1397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1144)
static void C_ccall f_1144(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1148)
static void C_ccall f_1148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1185)
static void C_ccall f_1185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1206)
static void C_ccall f_1206(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1204)
static void C_ccall f_1204(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_8969)
static void C_fcall trf_8969(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8969(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8969(t0,t1,t2,t3);}

C_noret_decl(trf_9016)
static void C_fcall trf_9016(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_9016(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_9016(t0,t1);}

C_noret_decl(trf_8866)
static void C_fcall trf_8866(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8866(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8866(t0,t1);}

C_noret_decl(trf_8754)
static void C_fcall trf_8754(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8754(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8754(t0,t1,t2,t3);}

C_noret_decl(trf_8672)
static void C_fcall trf_8672(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8672(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8672(t0,t1);}

C_noret_decl(trf_8640)
static void C_fcall trf_8640(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8640(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8640(t0,t1);}

C_noret_decl(trf_8573)
static void C_fcall trf_8573(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8573(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8573(t0,t1,t2);}

C_noret_decl(trf_8376)
static void C_fcall trf_8376(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8376(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_8376(t0,t1,t2);}

C_noret_decl(trf_8166)
static void C_fcall trf_8166(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8166(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8166(t0,t1,t2,t3);}

C_noret_decl(trf_8110)
static void C_fcall trf_8110(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8110(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_8110(t0,t1,t2,t3);}

C_noret_decl(trf_8126)
static void C_fcall trf_8126(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8126(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8126(t0,t1);}

C_noret_decl(trf_7984)
static void C_fcall trf_7984(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7984(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_7984(t0,t1,t2,t3,t4);}

C_noret_decl(trf_8018)
static void C_fcall trf_8018(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_8018(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_8018(t0,t1);}

C_noret_decl(trf_7904)
static void C_fcall trf_7904(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7904(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7904(t0,t1,t2,t3);}

C_noret_decl(trf_7873)
static void C_fcall trf_7873(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7873(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_7873(t0,t1,t2,t3);}

C_noret_decl(trf_7837)
static void C_fcall trf_7837(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7837(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7837(t0,t1,t2);}

C_noret_decl(trf_1247)
static void C_fcall trf_1247(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1247(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1247(t0,t1);}

C_noret_decl(trf_1263)
static void C_fcall trf_1263(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1263(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1263(t0,t1);}

C_noret_decl(trf_7533)
static void C_fcall trf_7533(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7533(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7533(t0,t1);}

C_noret_decl(trf_7547)
static void C_fcall trf_7547(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7547(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7547(t0,t1,t2);}

C_noret_decl(trf_7429)
static void C_fcall trf_7429(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7429(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7429(t0,t1,t2);}

C_noret_decl(trf_7287)
static void C_fcall trf_7287(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7287(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7287(t0,t1,t2);}

C_noret_decl(trf_7277)
static void C_fcall trf_7277(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7277(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7277(t0,t1,t2);}

C_noret_decl(trf_7208)
static void C_fcall trf_7208(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7208(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7208(t0,t1,t2);}

C_noret_decl(trf_6920)
static void C_fcall trf_6920(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6920(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_6920(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_6993)
static void C_fcall trf_6993(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6993(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_6993(t0,t1,t2,t3,t4);}

C_noret_decl(trf_7103)
static void C_fcall trf_7103(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7103(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_7103(t0,t1,t2);}

C_noret_decl(trf_6712)
static void C_fcall trf_6712(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6712(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6712(t0,t1,t2,t3);}

C_noret_decl(trf_6422)
static void C_fcall trf_6422(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6422(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6422(t0,t1,t2);}

C_noret_decl(trf_6507)
static void C_fcall trf_6507(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6507(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6507(t0,t1);}

C_noret_decl(trf_6542)
static void C_fcall trf_6542(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6542(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6542(t0,t1,t2,t3);}

C_noret_decl(trf_6161)
static void C_fcall trf_6161(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6161(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6161(t0,t1);}

C_noret_decl(trf_6128)
static void C_fcall trf_6128(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6128(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6128(t0,t1);}

C_noret_decl(trf_5938)
static void C_fcall trf_5938(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5938(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5938(t0,t1,t2,t3);}

C_noret_decl(trf_5964)
static void C_fcall trf_5964(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5964(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5964(t0,t1);}

C_noret_decl(trf_5992)
static void C_fcall trf_5992(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5992(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5992(t0,t1);}

C_noret_decl(trf_5737)
static void C_fcall trf_5737(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5737(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5737(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5594)
static void C_fcall trf_5594(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5594(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_5594(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_5364)
static void C_fcall trf_5364(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5364(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_5364(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5438)
static void C_fcall trf_5438(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5438(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5438(t0,t1);}

C_noret_decl(trf_5374)
static void C_fcall trf_5374(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5374(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5374(t0,t1);}

C_noret_decl(trf_5257)
static void C_fcall trf_5257(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5257(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5257(t0,t1);}

C_noret_decl(trf_2786)
static void C_fcall trf_2786(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2786(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_2786(t0,t1,t2,t3);}

C_noret_decl(trf_5162)
static void C_fcall trf_5162(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5162(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5162(t0,t1);}

C_noret_decl(trf_5113)
static void C_fcall trf_5113(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5113(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5113(t0,t1);}

C_noret_decl(trf_4591)
static void C_fcall trf_4591(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4591(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4591(t0,t1);}

C_noret_decl(trf_4597)
static void C_fcall trf_4597(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4597(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4597(t0,t1);}

C_noret_decl(trf_4600)
static void C_fcall trf_4600(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4600(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4600(t0,t1);}

C_noret_decl(trf_4699)
static void C_fcall trf_4699(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4699(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4699(t0,t1);}

C_noret_decl(trf_4733)
static void C_fcall trf_4733(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4733(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4733(t0,t1,t2);}

C_noret_decl(trf_4865)
static void C_fcall trf_4865(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4865(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4865(t0,t1);}

C_noret_decl(trf_4891)
static void C_fcall trf_4891(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4891(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4891(t0,t1);}

C_noret_decl(trf_4835)
static void C_fcall trf_4835(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4835(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4835(t0,t1,t2);}

C_noret_decl(trf_4605)
static void C_fcall trf_4605(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4605(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4605(t0,t1,t2);}

C_noret_decl(trf_4611)
static void C_fcall trf_4611(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4611(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4611(t0,t1,t2);}

C_noret_decl(trf_4414)
static void C_fcall trf_4414(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4414(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4414(t0,t1);}

C_noret_decl(trf_4420)
static void C_fcall trf_4420(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4420(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4420(t0,t1,t2);}

C_noret_decl(trf_4445)
static void C_fcall trf_4445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4445(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4445(t0,t1);}

C_noret_decl(trf_4451)
static void C_fcall trf_4451(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4451(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4451(t0,t1);}

C_noret_decl(trf_4357)
static void C_fcall trf_4357(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4357(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4357(t0,t1,t2);}

C_noret_decl(trf_4363)
static void C_fcall trf_4363(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4363(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4363(t0,t1,t2);}

C_noret_decl(trf_4375)
static void C_fcall trf_4375(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4375(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4375(t0,t1,t2);}

C_noret_decl(trf_4307)
static void C_fcall trf_4307(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4307(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4307(t0,t1,t2);}

C_noret_decl(trf_4272)
static void C_fcall trf_4272(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4272(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4272(t0,t1,t2);}

C_noret_decl(trf_4230)
static void C_fcall trf_4230(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4230(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4230(t0,t1,t2);}

C_noret_decl(trf_4244)
static void C_fcall trf_4244(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4244(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4244(t0,t1);}

C_noret_decl(trf_4195)
static void C_fcall trf_4195(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4195(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4195(t0,t1,t2);}

C_noret_decl(trf_4167)
static void C_fcall trf_4167(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4167(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4167(t0,t1,t2);}

C_noret_decl(trf_3954)
static void C_fcall trf_3954(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3954(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3954(t0,t1,t2);}

C_noret_decl(trf_4039)
static void C_fcall trf_4039(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4039(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4039(t0,t1,t2,t3);}

C_noret_decl(trf_4076)
static void C_fcall trf_4076(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4076(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4076(t0,t1,t2);}

C_noret_decl(trf_3988)
static void C_fcall trf_3988(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3988(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3988(t0,t1,t2,t3);}

C_noret_decl(trf_3925)
static void C_fcall trf_3925(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3925(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3925(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3874)
static void C_fcall trf_3874(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3874(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3874(t0,t1);}

C_noret_decl(trf_3869)
static void C_fcall trf_3869(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3869(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3869(t0,t1,t2);}

C_noret_decl(trf_3763)
static void C_fcall trf_3763(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3763(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3763(t0,t1,t2,t3);}

C_noret_decl(trf_3831)
static void C_fcall trf_3831(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3831(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3831(t0,t1);}

C_noret_decl(trf_3766)
static void C_fcall trf_3766(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3766(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3766(t0,t1,t2);}

C_noret_decl(trf_3591)
static void C_fcall trf_3591(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3591(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3591(t0,t1,t2);}

C_noret_decl(trf_3430)
static void C_fcall trf_3430(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3430(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3430(t0,t1);}

C_noret_decl(trf_3335)
static void C_fcall trf_3335(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3335(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3335(t0,t1);}

C_noret_decl(trf_3271)
static void C_fcall trf_3271(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3271(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3271(t0,t1);}

C_noret_decl(trf_3015)
static void C_fcall trf_3015(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3015(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_3015(t0,t1,t2);}

C_noret_decl(trf_3047)
static void C_fcall trf_3047(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3047(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3047(t0,t1,t2,t3);}

C_noret_decl(trf_2843)
static void C_fcall trf_2843(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2843(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2843(t0,t1);}

C_noret_decl(trf_2376)
static void C_fcall trf_2376(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2376(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_2376(t0);}

C_noret_decl(trf_2385)
static void C_fcall trf_2385(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2385(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2385(t0,t1,t2);}

C_noret_decl(trf_2341)
static void C_fcall trf_2341(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2341(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2341(t0,t1,t2);}

C_noret_decl(trf_1823)
static void C_fcall trf_1823(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1823(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1823(t0,t1);}

C_noret_decl(trf_2631)
static void C_fcall trf_2631(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2631(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2631(t0,t1);}

C_noret_decl(trf_1680)
static void C_fcall trf_1680(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1680(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1680(t0,t1);}

C_noret_decl(trf_1614)
static void C_fcall trf_1614(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1614(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1614(t0,t1,t2);}

C_noret_decl(trf_1502)
static void C_fcall trf_1502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1502(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1502(t0,t1);}

C_noret_decl(trf_1461)
static void C_fcall trf_1461(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1461(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1461(t0,t1);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_main_entry_point
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("toplevel"));
C_resize_stack(131072);
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(4657)){
C_save(t1);
C_rereclaim2(4657*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,764);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[2]=C_h_intern(&lf[2],3,"map");
lf[3]=C_h_intern(&lf[3],6,"lambda");
lf[4]=C_h_intern(&lf[4],14,"\004coreundefined");
lf[5]=C_h_intern(&lf[5],20,"\003syscall-with-values");
lf[6]=C_h_intern(&lf[6],9,"\004coreset!");
lf[7]=C_static_lambda_info(C_heaptop,17,"(a1205 v105 a106)");
lf[8]=C_h_intern(&lf[8],6,"gensym");
lf[9]=C_h_intern(&lf[9],16,"\003syscheck-syntax");
lf[10]=C_h_intern(&lf[10],25,"set!-values/define-values");
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[11]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[12]=C_static_lambda_info(C_heaptop,23,"(assign vars102 exp103)");
lf[14]=C_static_string(C_heaptop,134,"\012      /    /      /             \012 ___ (___    ___ (     ___  ___ \012|    |   )| |"
"    |___)|___)|   )\012|__  |  / | |__  | \134  |__  |  / \012\012");
lf[16]=C_static_string(C_heaptop,32,"(c)2000-2007 Felix L. Winkelmann");
lf[18]=C_static_string(C_heaptop,6,".csirc");
lf[19]=C_h_intern(&lf[19],27,"\003sysrepl-print-length-limit");
lf[20]=C_h_intern(&lf[20],4,"\000csi");
lf[21]=C_h_intern(&lf[21],12,"\003sysfeatures");
lf[22]=C_h_intern(&lf[22],15,"\003csiprint-usage");
lf[23]=C_h_intern(&lf[23],7,"display");
lf[24]=C_static_string(C_heaptop,546,"\047\012    -b  -batch                  terminate after command-line processing\012    -w"
"  -no-warnings            disable all warnings\012    -k  -keyword-style STYLE    e"
"nable alternative keyword-syntax (none, prefix or suffix)\012    -s  -script PATHNA"
"ME        use interpreter for shell scripts\012        -ss PATHNAME            shel"
"l script with `main\047 procedure\012    -R  -require-extension NAME require extension"
" before executing code\012    -I  -include-path PATHNAME  add PATHNAME to include p"
"ath\012    --                          ignore all following options\012\012");
lf[25]=C_static_string(C_heaptop,554,"Usage: csi {FILENAME | OPTION}\012\012  where OPTION may be one of the following:\012\012   "
" -h  -help  --help           display this text and exit\012    -v  -version        "
"        display version and exit\012        -release                print release n"
"umber and exit\012    -i  -case-insensitive       enable case-insensitive reading\012 "
"   -e  -eval EXPRESSION        evaluate given expression\012    -D  -feature SYMBOL"
"         register feature identifier\012    -q  -quiet                  do not prin"
"t banner\012    -n  -no-init                do not load initialization file `");
lf[26]=C_static_lambda_info(C_heaptop,19,"(##csi#print-usage)");
lf[27]=C_h_intern(&lf[27],16,"\003csiprint-banner");
lf[28]=C_h_intern(&lf[28],5,"print");
lf[29]=C_static_string(C_heaptop,1,"\012");
lf[30]=C_h_intern(&lf[30],15,"chicken-version");
lf[31]=C_static_lambda_info(C_heaptop,20,"(##csi#print-banner)");
lf[32]=C_h_intern(&lf[32],9,"read-char");
lf[33]=C_h_intern(&lf[33],4,"read");
lf[34]=C_h_intern(&lf[34],18,"\003sysuser-read-hook");
lf[35]=C_h_intern(&lf[35],5,"quote");
lf[36]=C_h_intern(&lf[36],17,"\003csihistory-count");
lf[37]=C_h_intern(&lf[37],15,"\003csihistory-ref");
lf[38]=C_static_lambda_info(C_heaptop,38,"(##sys#user-read-hook char472 port473)");
lf[39]=C_h_intern(&lf[39],21,"\003syssharp-number-hook");
lf[40]=C_static_lambda_info(C_heaptop,38,"(##sys#sharp-number-hook port476 n477)");
lf[41]=C_h_intern(&lf[41],32,"\003syspathname-directory-separator");
lf[42]=C_h_intern(&lf[42],9,"substring");
lf[43]=C_h_intern(&lf[43],18,"\003csichop-separator");
lf[44]=C_h_intern(&lf[44],4,"sub1");
lf[45]=C_static_lambda_info(C_heaptop,29,"(##csi#chop-separator str480)");
lf[46]=C_h_intern(&lf[46],1,"@");
lf[47]=C_h_intern(&lf[47],12,"file-exists\077");
lf[48]=C_h_intern(&lf[48],13,"string-append");
lf[49]=C_static_string(C_heaptop,4,".bat");
lf[50]=C_static_lambda_info(C_heaptop,16,"(addext name495)");
lf[51]=C_h_intern(&lf[51],22,"\003csilookup-script-file");
lf[52]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[53]=C_h_intern(&lf[53],25,"\003syspeek-nonnull-c-string");
lf[54]=C_static_lambda_info(C_heaptop,12,"(loop ps511)");
lf[55]=C_h_intern(&lf[55],12,"string-split");
lf[56]=C_static_string(C_heaptop,1,";");
lf[57]=C_h_intern(&lf[57],6,"getenv");
lf[58]=C_static_string(C_heaptop,4,"PATH");
lf[59]=C_static_lambda_info(C_heaptop,34,"(##csi#lookup-script-file name503)");
lf[60]=C_h_intern(&lf[60],16,"\003csihistory-list");
lf[61]=C_h_intern(&lf[61],13,"vector-resize");
lf[62]=C_h_intern(&lf[62],15,"\003csihistory-add");
lf[63]=C_h_intern(&lf[63],19,"\003sysundefined-value");
lf[64]=C_static_lambda_info(C_heaptop,27,"(##csi#history-add vals519)");
lf[65]=C_h_intern(&lf[65],9,"\003syserror");
lf[66]=C_static_string(C_heaptop,32,"history entry index out of range");
lf[67]=C_static_lambda_info(C_heaptop,28,"(##csi#history-ref index525)");
lf[68]=C_h_intern(&lf[68],14,"\003csitty-input\077");
lf[69]=C_h_intern(&lf[69],13,"\003systty-port\077");
lf[70]=C_h_intern(&lf[70],18,"\003sysstandard-input");
lf[71]=C_static_lambda_info(C_heaptop,18,"(##csi#tty-input\077)");
lf[72]=C_h_intern(&lf[72],18,"\003sysbreak-on-error");
lf[73]=C_h_intern(&lf[73],20,"\003sysread-prompt-hook");
lf[74]=C_static_lambda_info(C_heaptop,24,"(##sys#read-prompt-hook)");
lf[76]=C_h_intern(&lf[76],15,"hash-table-set!");
lf[77]=C_h_intern(&lf[77],16,"toplevel-command");
lf[78]=C_static_lambda_info(C_heaptop,44,"(toplevel-command name533 proc534 . g532535)");
lf[79]=C_h_intern(&lf[79],4,"eval");
lf[80]=C_h_intern(&lf[80],12,"load-noisily");
lf[81]=C_h_intern(&lf[81],10,"singlestep");
lf[82]=C_h_intern(&lf[82],14,"hash-table-ref");
lf[83]=C_h_intern(&lf[83],15,"hash-table-walk");
lf[84]=C_h_intern(&lf[84],9,"read-line");
lf[85]=C_h_intern(&lf[85],6,"length");
lf[86]=C_h_intern(&lf[86],5,"write");
lf[87]=C_h_intern(&lf[87],6,"printf");
lf[88]=C_h_intern(&lf[88],12,"pretty-print");
lf[89]=C_h_intern(&lf[89],8,"integer\077");
lf[90]=C_h_intern(&lf[90],6,"values");
lf[91]=C_h_intern(&lf[91],18,"\003sysrepl-eval-hook");
lf[92]=C_h_intern(&lf[92],22,"\003csitrace-indent-level");
lf[93]=C_h_intern(&lf[93],4,"exit");
lf[94]=C_h_intern(&lf[94],1,"x");
lf[95]=C_h_intern(&lf[95],11,"macroexpand");
lf[96]=C_h_intern(&lf[96],1,"p");
lf[97]=C_h_intern(&lf[97],1,"d");
lf[98]=C_h_intern(&lf[98],12,"\003csidescribe");
lf[99]=C_h_intern(&lf[99],2,"du");
lf[100]=C_h_intern(&lf[100],8,"\003csidump");
lf[101]=C_h_intern(&lf[101],3,"dur");
lf[102]=C_h_intern(&lf[102],1,"r");
lf[103]=C_h_intern(&lf[103],10,"\003csireport");
lf[104]=C_h_intern(&lf[104],1,"q");
lf[105]=C_h_intern(&lf[105],1,"l");
lf[106]=C_h_intern(&lf[106],12,"\003sysfor-each");
lf[107]=C_h_intern(&lf[107],4,"load");
lf[108]=C_h_intern(&lf[108],2,"ln");
lf[109]=C_h_intern(&lf[109],6,"print*");
lf[110]=C_static_string(C_heaptop,4,"==> ");
lf[111]=C_static_lambda_info(C_heaptop,12,"(a1988 x583)");
lf[112]=C_h_intern(&lf[112],8,"\000printer");
lf[113]=C_static_lambda_info(C_heaptop,15,"(a1982 g581582)");
lf[114]=C_h_intern(&lf[114],1,"t");
lf[115]=C_static_lambda_info(C_heaptop,7,"(a2022)");
lf[116]=C_h_intern(&lf[116],17,"\003sysdisplay-times");
lf[117]=C_h_intern(&lf[117],14,"\003sysstop-timer");
lf[118]=C_static_lambda_info(C_heaptop,17,"(a2028 . t587588)");
lf[119]=C_h_intern(&lf[119],15,"\003sysstart-timer");
lf[120]=C_static_lambda_info(C_heaptop,7,"(a2013)");
lf[121]=C_static_lambda_info(C_heaptop,15,"(a2041 . rs591)");
lf[122]=C_h_intern(&lf[122],2,"tr");
lf[123]=C_static_lambda_info(C_heaptop,12,"(a2472 a641)");
lf[125]=C_h_intern(&lf[125],8,"\003syswarn");
lf[126]=C_static_string(C_heaptop,24,"procedure already traced");
lf[128]=C_static_string(C_heaptop,32,"procedure already has breakpoint");
lf[129]=C_static_lambda_info(C_heaptop,7,"(a2537)");
lf[130]=C_h_intern(&lf[130],25,"\003csitraced-procedure-exit");
lf[131]=C_static_lambda_info(C_heaptop,20,"(a2543 . results646)");
lf[132]=C_h_intern(&lf[132],26,"\003csitraced-procedure-entry");
lf[133]=C_static_lambda_info(C_heaptop,17,"(a2528 . args645)");
lf[134]=C_static_string(C_heaptop,27,"can not trace non-procedure");
lf[135]=C_static_lambda_info(C_heaptop,12,"(a2485 s642)");
lf[136]=C_h_intern(&lf[136],7,"\003sysmap");
lf[137]=C_h_intern(&lf[137],14,"string->symbol");
lf[138]=C_h_intern(&lf[138],3,"utr");
lf[139]=C_h_intern(&lf[139],7,"\003csidel");
lf[140]=C_h_intern(&lf[140],3,"eq\077");
lf[141]=C_static_string(C_heaptop,20,"procedure not traced");
lf[142]=C_static_lambda_info(C_heaptop,12,"(a2566 s651)");
lf[143]=C_h_intern(&lf[143],2,"br");
lf[144]=C_h_intern(&lf[144],1,"a");
lf[145]=C_static_lambda_info(C_heaptop,12,"(a2607 b656)");
lf[146]=C_h_intern(&lf[146],15,"\003sysbreak-entry");
lf[147]=C_static_lambda_info(C_heaptop,17,"(a2651 . args663)");
lf[148]=C_static_string(C_heaptop,39,"can not set breakpoint on non-procedure");
lf[149]=C_static_string(C_heaptop,20,"un-tracing procedure");
lf[150]=C_static_lambda_info(C_heaptop,12,"(a2620 s657)");
lf[151]=C_h_intern(&lf[151],3,"ubr");
lf[152]=C_static_string(C_heaptop,27,"procedure has no breakpoint");
lf[153]=C_static_lambda_info(C_heaptop,12,"(a2688 s668)");
lf[154]=C_h_intern(&lf[154],8,"breakall");
lf[155]=C_h_intern(&lf[155],19,"\003sysbreak-in-thread");
lf[156]=C_h_intern(&lf[156],9,"breakonly");
lf[157]=C_h_intern(&lf[157],4,"info");
lf[158]=C_static_string(C_heaptop,17,"Breakpoints: ~s~%");
lf[159]=C_h_intern(&lf[159],3,"car");
lf[160]=C_static_string(C_heaptop,12,"Traced: ~s~%");
lf[161]=C_h_intern(&lf[161],1,"c");
lf[162]=C_h_intern(&lf[162],19,"\003syslast-breakpoint");
lf[163]=C_h_intern(&lf[163],16,"\003sysbreak-resume");
lf[164]=C_static_string(C_heaptop,22,"no breakpoint pending\012");
lf[165]=C_h_intern(&lf[165],3,"exn");
lf[166]=C_h_intern(&lf[166],18,"\003syslast-exception");
lf[167]=C_h_intern(&lf[167],4,"step");
lf[168]=C_h_intern(&lf[168],1,"s");
lf[169]=C_h_intern(&lf[169],6,"system");
lf[170]=C_h_intern(&lf[170],1,"\077");
lf[171]=C_static_string(C_heaptop,2," ,");
lf[172]=C_static_lambda_info(C_heaptop,17,"(a2279 k602 v603)");
lf[173]=C_static_string(C_heaptop,1066,"Toplevel commands:\012\012 ,\077                Show this text\012 ,p EXP            Pretty "
"print evaluated expression EXP\012 ,d EXP            Describe result of evaluated e"
"xpression EXP\012 ,du EXP           Dump data of expression EXP\012 ,dur EXP N        "
"Dump range\012 ,q                Quit interpreter\012 ,l FILENAME ...   Load one or mo"
"re files\012 ,ln FILENAME ...  Load one or more files and print result of each top-"
"level expression\012 ,r                Show system information\012 ,s TEXT ...       E"
"xecute shell-command\012 ,tr NAME ...      Trace procedures\012 ,utr NAME ...     Untr"
"ace procedures\012 ,br NAME ...      Set breakpoints\012 ,ubr NAME ...     Remove brea"
"kpoints\012 ,breakall         Break in all threads (default)\012 ,breakonly THREAD Bre"
"ak only in specified thread\012 ,c                Continue from breakpoint\012 ,info  "
"           List traced procedures and breakpoints\012 ,step EXPR        Execute EXP"
"R in single-stepping mode\012 ,exn              Describe last exception\012 ,t EXP    "
"        Evaluate form and print elapsed time\012 ,x EXP            Pretty print mac"
"roexpanded expression EXP\012");
lf[174]=C_static_string(C_heaptop,53,"Undefined toplevel command ~s - enter `,\077\047 for help~%");
lf[175]=C_h_intern(&lf[175],22,"hash-table-ref/default");
lf[176]=C_static_lambda_info(C_heaptop,7,"(a2309)");
lf[177]=C_static_lambda_info(C_heaptop,15,"(a2315 . rs608)");
lf[178]=C_h_intern(&lf[178],7,"unquote");
lf[179]=C_static_lambda_info(C_heaptop,30,"(##sys#repl-eval-hook form557)");
lf[180]=C_static_lambda_info(C_heaptop,13,"(loop lst615)");
lf[181]=C_static_lambda_info(C_heaptop,30,"(##csi#del x611 lst612 tst613)");
lf[183]=C_h_intern(&lf[183],10,"write-char");
lf[184]=C_static_lambda_info(C_heaptop,12,"(do618 i620)");
lf[185]=C_static_lambda_info(C_heaptop,20,"(##csi#trace-indent)");
lf[186]=C_h_intern(&lf[186],12,"flush-output");
lf[187]=C_h_intern(&lf[187],16,"\003syswrite-char-0");
lf[188]=C_h_intern(&lf[188],19,"\003sysstandard-output");
lf[189]=C_h_intern(&lf[189],4,"add1");
lf[190]=C_static_lambda_info(C_heaptop,46,"(##csi#traced-procedure-entry name624 args625)");
lf[191]=C_static_lambda_info(C_heaptop,12,"(a2451 x632)");
lf[192]=C_static_string(C_heaptop,4," -> ");
lf[193]=C_static_lambda_info(C_heaptop,48,"(##csi#traced-procedure-exit name630 results631)");
lf[194]=C_h_intern(&lf[194],4,"chop");
lf[195]=C_h_intern(&lf[195],19,"with-output-to-port");
lf[196]=C_h_intern(&lf[196],19,"current-output-port");
lf[197]=C_h_intern(&lf[197],8,"truncate");
lf[198]=C_static_lambda_info(C_heaptop,14,"(shorten n695)");
lf[199]=C_static_string(C_heaptop,21,"symbol gc is enabled\012");
lf[200]=C_static_string(C_heaptop,23,"interrupts are enabled\012");
lf[201]=C_static_string(C_heaptop,8,"(64-bit)");
lf[202]=C_static_string(C_heaptop,0,"");
lf[203]=C_static_string(C_heaptop,8," (fixed)");
lf[204]=C_static_string(C_heaptop,0,"");
lf[205]=C_static_string(C_heaptop,8,"downward");
lf[206]=C_static_string(C_heaptop,6,"upward");
lf[207]=C_static_string(C_heaptop,508,"~%~\012                   Machine type:    \011~A ~A~%~\012                   Software ty"
"pe:   \011~A~%~\012                   Software version:\011~A~%~\012                   Build"
" platform:  \011~A~%~\012                   Include path:    \011~A~%~\012                  "
" Symbol-table load:\011~S~%  ~\012                     Avg bucket length:\011~S~%  ~\012    "
"                 Total symbols:\011~S~%~\012                   Memory:\011heap size is ~S"
" bytes~A with ~S bytes currently in use~%~  \012                     nursery size i"
"s ~S bytes, stack grows ~A~%");
lf[208]=C_h_intern(&lf[208],21,"\003sysinclude-pathnames");
lf[209]=C_h_intern(&lf[209],14,"build-platform");
lf[210]=C_h_intern(&lf[210],16,"software-version");
lf[211]=C_h_intern(&lf[211],13,"software-type");
lf[212]=C_h_intern(&lf[212],12,"machine-type");
lf[213]=C_static_lambda_info(C_heaptop,15,"(a2968 g697698)");
lf[214]=C_h_intern(&lf[214],7,"newline");
lf[215]=C_static_lambda_info(C_heaptop,14,"(a2959 lst696)");
lf[216]=C_h_intern(&lf[216],15,"keyword->string");
lf[217]=C_static_string(C_heaptop,9,"Features:");
lf[218]=C_h_intern(&lf[218],17,"memory-statistics");
lf[219]=C_h_intern(&lf[219],21,"\003syssymbol-table-info");
lf[220]=C_h_intern(&lf[220],2,"gc");
lf[221]=C_static_lambda_info(C_heaptop,7,"(a2830)");
lf[222]=C_static_lambda_info(C_heaptop,24,"(##csi#report . port691)");
tmp=C_intern(C_heaptop,8,"u8vector");
C_save(tmp);
tmp=C_static_string(C_heaptop,24,"vector of unsigned bytes");
C_save(tmp);
tmp=C_intern(C_heaptop,15,"u8vector-length");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"u8vector-ref");
C_save(tmp);
tmp=C_h_list(4,C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(4);
C_save(tmp);
tmp=C_intern(C_heaptop,8,"s8vector");
C_save(tmp);
tmp=C_static_string(C_heaptop,22,"vector of signed bytes");
C_save(tmp);
tmp=C_intern(C_heaptop,15,"s8vector-length");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"s8vector-ref");
C_save(tmp);
tmp=C_h_list(4,C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(4);
C_save(tmp);
tmp=C_intern(C_heaptop,9,"u16vector");
C_save(tmp);
tmp=C_static_string(C_heaptop,31,"vector of unsigned 16-bit words");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"u16vector-length");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"u16vector-ref");
C_save(tmp);
tmp=C_h_list(4,C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(4);
C_save(tmp);
tmp=C_intern(C_heaptop,9,"s16vector");
C_save(tmp);
tmp=C_static_string(C_heaptop,29,"vector of signed 16-bit words");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"s16vector-length");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"s16vector-ref");
C_save(tmp);
tmp=C_h_list(4,C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(4);
C_save(tmp);
tmp=C_intern(C_heaptop,9,"u32vector");
C_save(tmp);
tmp=C_static_string(C_heaptop,31,"vector of unsigned 32-bit words");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"u32vector-length");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"u32vector-ref");
C_save(tmp);
tmp=C_h_list(4,C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(4);
C_save(tmp);
tmp=C_intern(C_heaptop,9,"s32vector");
C_save(tmp);
tmp=C_static_string(C_heaptop,29,"vector of signed 32-bit words");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"s32vector-length");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"s32vector-ref");
C_save(tmp);
tmp=C_h_list(4,C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(4);
C_save(tmp);
tmp=C_intern(C_heaptop,9,"f32vector");
C_save(tmp);
tmp=C_static_string(C_heaptop,23,"vector of 32-bit floats");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"f32vector-length");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"f32vector-ref");
C_save(tmp);
tmp=C_h_list(4,C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(4);
C_save(tmp);
tmp=C_intern(C_heaptop,9,"f64vector");
C_save(tmp);
tmp=C_static_string(C_heaptop,23,"vector of 64-bit floats");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"f64vector-length");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"f64vector-ref");
C_save(tmp);
tmp=C_h_list(4,C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(4);
C_save(tmp);
lf[224]=C_h_list(8,C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(8);
lf[226]=C_h_intern(&lf[226],7,"sprintf");
lf[227]=C_h_intern(&lf[227],7,"fprintf");
lf[228]=C_h_intern(&lf[228],8,"list-ref");
lf[229]=C_h_intern(&lf[229],10,"string-ref");
lf[230]=C_static_string(C_heaptop,32,"~% (~A elements not displayed)~%");
lf[231]=C_static_string(C_heaptop,0,"");
lf[232]=C_static_string(C_heaptop,1,"s");
lf[233]=C_static_string(C_heaptop,46,"\011(followed by ~A identical instance~a)~% ...~%");
lf[234]=C_static_string(C_heaptop,7," ~S: ~S");
lf[235]=C_static_lambda_info(C_heaptop,17,"(loop2 n733 j734)");
lf[236]=C_static_lambda_info(C_heaptop,12,"(loop1 i728)");
lf[237]=C_static_string(C_heaptop,17,"~A of length ~S~%");
lf[238]=C_static_lambda_info(C_heaptop,42,"(descseq name722 plen723 pref724 start725)");
lf[239]=C_static_string(C_heaptop,36,"character ~S, code: ~S, #x~X, #o~O~%");
lf[240]=C_static_string(C_heaptop,14,"boolean true~%");
lf[241]=C_static_string(C_heaptop,15,"boolean false~%");
lf[242]=C_static_string(C_heaptop,12,"empty list~%");
lf[243]=C_static_string(C_heaptop,20,"end-of-file object~%");
lf[244]=C_static_string(C_heaptop,20,"unspecified object~%");
lf[245]=C_static_string(C_heaptop,14,", character ~S");
lf[246]=C_static_string(C_heaptop,34,"exact integer ~S, #x~X, #o~O, #b~B");
lf[247]=C_h_intern(&lf[247],28,"\003sysarbitrary-unbound-symbol");
lf[248]=C_static_string(C_heaptop,15,"unbound value~%");
lf[249]=C_static_string(C_heaptop,11,"number ~S~%");
lf[250]=C_static_string(C_heaptop,6,"string");
lf[251]=C_h_intern(&lf[251],8,"\003syssize");
lf[252]=C_static_string(C_heaptop,6,"vector");
lf[253]=C_h_intern(&lf[253],8,"\003sysslot");
lf[254]=C_static_string(C_heaptop,21,"symbol with name ~S~%");
lf[255]=C_h_intern(&lf[255],18,"\003syssymbol->string");
lf[256]=C_static_string(C_heaptop,8,"keyword ");
lf[257]=C_static_string(C_heaptop,8,"unbound ");
lf[258]=C_h_intern(&lf[258],32,"\003syssymbol-has-toplevel-binding\077");
lf[259]=C_static_string(C_heaptop,4,"list");
lf[260]=C_static_string(C_heaptop,29,"pair with car ~S and cdr ~S~%");
lf[261]=C_h_intern(&lf[261],15,"describe-object");
lf[262]=C_static_string(C_heaptop,30,"procedure with code pointer ~X");
lf[263]=C_h_intern(&lf[263],25,"\003syspeek-unsigned-integer");
lf[264]=C_h_intern(&lf[264],9,"\000tinyclos");
lf[265]=C_h_intern(&lf[265],19,"\010tinyclosentity-tag");
lf[266]=C_static_string(C_heaptop,5,"input");
lf[267]=C_static_string(C_heaptop,6,"output");
lf[268]=C_static_string(C_heaptop,53,"~A port of type ~A with name ~S and file pointer ~X~%");
lf[269]=C_static_string(C_heaptop,47,"locative~%  pointer ~X~%  index ~A~%  type ~A~%");
lf[270]=C_static_string(C_heaptop,4,"slot");
lf[271]=C_static_string(C_heaptop,4,"char");
lf[272]=C_static_string(C_heaptop,8,"u8vector");
lf[273]=C_static_string(C_heaptop,8,"s8vector");
lf[274]=C_static_string(C_heaptop,9,"u16vector");
lf[275]=C_static_string(C_heaptop,9,"s16vector");
lf[276]=C_static_string(C_heaptop,9,"u32vector");
lf[277]=C_static_string(C_heaptop,9,"s32vector");
lf[278]=C_static_string(C_heaptop,9,"f32vector");
lf[279]=C_static_string(C_heaptop,9,"f64vector");
lf[280]=C_static_string(C_heaptop,20,"machine pointer ~X~%");
lf[281]=C_h_intern(&lf[281],11,"\003csihexdump");
lf[282]=C_h_intern(&lf[282],8,"\003sysbyte");
lf[283]=C_static_string(C_heaptop,25,"byte vector of size ~S:~%");
lf[284]=C_static_string(C_heaptop,24,"lambda information: ~s~%");
lf[285]=C_h_intern(&lf[285],23,"\003syslambda-info->string");
lf[286]=C_h_intern(&lf[286],10,"hash-table");
lf[287]=C_static_string(C_heaptop,11," ~S\011-> ~S~%");
lf[288]=C_static_lambda_info(C_heaptop,17,"(a3544 k752 v753)");
lf[289]=C_static_string(C_heaptop,21,"  hash function: ~a~%");
lf[290]=C_static_string(C_heaptop,0,"");
lf[291]=C_static_string(C_heaptop,1,"s");
lf[292]=C_static_string(C_heaptop,58,"hash-table with ~S element~a~%  comparison procedure: ~A~%");
lf[293]=C_h_intern(&lf[293],9,"condition");
lf[294]=C_static_string(C_heaptop,9,"\011~s: ~s~%");
lf[295]=C_h_intern(&lf[295],4,"cdar");
lf[296]=C_h_intern(&lf[296],4,"caar");
lf[297]=C_static_lambda_info(C_heaptop,15,"(loop props758)");
lf[298]=C_static_string(C_heaptop,5," ~s~%");
lf[299]=C_static_lambda_info(C_heaptop,12,"(a3577 k756)");
lf[300]=C_static_string(C_heaptop,15,"condition: ~s~%");
lf[301]=C_h_intern(&lf[301],6,"unveil");
lf[302]=C_static_lambda_info(C_heaptop,16,"(f_3662 g767768)");
lf[303]=C_h_intern(&lf[303],6,"append");
lf[304]=C_static_string(C_heaptop,25,"structure of type `~S\047:~%");
lf[305]=C_static_string(C_heaptop,16,"unknown object~%");
lf[306]=C_h_intern(&lf[306],15,"meroon-instance");
lf[307]=C_h_intern(&lf[307],9,"provided\077");
lf[308]=C_h_intern(&lf[308],6,"meroon");
lf[309]=C_h_intern(&lf[309],15,"\003sysbytevector\077");
lf[310]=C_h_intern(&lf[310],13,"\003syslocative\077");
lf[311]=C_h_intern(&lf[311],9,"instance\077");
lf[312]=C_h_intern(&lf[312],5,"port\077");
lf[313]=C_h_intern(&lf[313],11,"\003sysnumber\077");
lf[314]=C_static_string(C_heaptop,28,"statically allocated (0x~X) ");
lf[315]=C_h_intern(&lf[315],17,"\003sysblock-address");
lf[316]=C_static_lambda_info(C_heaptop,31,"(##csi#describe x716 . port717)");
lf[317]=C_h_intern(&lf[317],14,"set-describer!");
lf[318]=C_static_lambda_info(C_heaptop,31,"(set-describer! tag776 proc777)");
lf[319]=C_h_intern(&lf[319],3,"min");
lf[320]=C_static_lambda_info(C_heaptop,14,"(bestlen n791)");
lf[321]=C_static_string(C_heaptop,29,"can not dump immediate object");
lf[322]=C_h_intern(&lf[322],13,"\003syspeek-byte");
lf[323]=C_static_string(C_heaptop,19,"can not dump object");
lf[324]=C_static_lambda_info(C_heaptop,23,"(body782 len788 out789)");
lf[325]=C_static_lambda_info(C_heaptop,23,"(def-out785 %len780795)");
lf[326]=C_static_lambda_info(C_heaptop,12,"(def-len784)");
lf[327]=C_static_lambda_info(C_heaptop,30,"(##csi#dump x778 . len-out779)");
lf[328]=C_h_intern(&lf[328],11,"make-string");
lf[329]=C_static_lambda_info(C_heaptop,35,"(justify n811 m812 base813 lead814)");
lf[330]=C_static_lambda_info(C_heaptop,17,"(do834 j836 a837)");
lf[331]=C_static_string(C_heaptop,3,"   ");
lf[332]=C_static_lambda_info(C_heaptop,12,"(do826 k828)");
lf[333]=C_h_intern(&lf[333],5,"fxmod");
lf[334]=C_static_lambda_info(C_heaptop,17,"(do819 j821 a822)");
lf[335]=C_static_lambda_info(C_heaptop,12,"(do809 a818)");
lf[336]=C_static_lambda_info(C_heaptop,42,"(##csi#hexdump bv805 len806 ref807 out808)");
lf[337]=C_h_intern(&lf[337],21,"\003csifind-symbol-table");
lf[338]=C_h_intern(&lf[338],17,"\003sysmake-c-string");
lf[339]=C_static_lambda_info(C_heaptop,33,"(##csi#find-symbol-table a851855)");
lf[340]=C_h_intern(&lf[340],17,"\003csienum-symbols!");
lf[341]=C_static_lambda_info(C_heaptop,37,"(##csi#enum-symbols! a859863 a858864)");
lf[342]=C_h_intern(&lf[342],10,"\003csioblist");
lf[343]=C_static_lambda_info(C_heaptop,13,"(loop lst869)");
lf[344]=C_static_string(C_heaptop,1,".");
lf[345]=C_static_lambda_info(C_heaptop,14,"(##csi#oblist)");
lf[346]=C_h_intern(&lf[346],19,"\003csioblist->strings");
lf[347]=C_h_intern(&lf[347],8,"->string");
lf[348]=C_static_lambda_info(C_heaptop,13,"(loop lst875)");
lf[349]=C_static_string(C_heaptop,1,".");
lf[350]=C_static_lambda_info(C_heaptop,23,"(##csi#oblist->strings)");
lf[351]=C_h_intern(&lf[351],33,"\003csiname-of-symbols-starting-with");
lf[352]=C_h_intern(&lf[352],14,"symbol->string");
lf[353]=C_h_intern(&lf[353],13,"string-search");
lf[354]=C_static_lambda_info(C_heaptop,13,"(loop lst883)");
lf[355]=C_static_string(C_heaptop,1,"^");
lf[356]=C_static_string(C_heaptop,1,".");
lf[357]=C_static_lambda_info(C_heaptop,47,"(##csi#name-of-symbols-starting-with prefix878)");
lf[358]=C_h_intern(&lf[358],20,"\003csisymbols-matching");
lf[359]=C_static_lambda_info(C_heaptop,13,"(loop lst890)");
lf[360]=C_static_string(C_heaptop,1,".");
lf[361]=C_static_lambda_info(C_heaptop,37,"(##csi#symbols-matching re-string886)");
lf[362]=C_h_intern(&lf[362],11,"\003csideldups");
lf[363]=C_static_lambda_info(C_heaptop,14,"(recur lis899)");
lf[364]=C_h_intern(&lf[364],6,"equal\077");
lf[365]=C_static_lambda_info(C_heaptop,35,"(##csi#deldups lis893 . maybe-=894)");
lf[367]=C_static_lambda_info(C_heaptop,12,"(find ks909)");
lf[368]=C_static_lambda_info(C_heaptop,13,"(loop set907)");
lf[369]=C_static_lambda_info(C_heaptop,24,"(member* keys904 set905)");
tmp=C_make_character(107);
C_save(tmp);
tmp=C_make_character(115);
C_save(tmp);
tmp=C_make_character(118);
C_save(tmp);
tmp=C_make_character(104);
C_save(tmp);
tmp=C_make_character(68);
C_save(tmp);
tmp=C_make_character(101);
C_save(tmp);
tmp=C_make_character(105);
C_save(tmp);
tmp=C_make_character(82);
C_save(tmp);
tmp=C_make_character(98);
C_save(tmp);
tmp=C_make_character(110);
C_save(tmp);
tmp=C_make_character(113);
C_save(tmp);
tmp=C_make_character(119);
C_save(tmp);
tmp=C_make_character(45);
C_save(tmp);
tmp=C_make_character(73);
C_save(tmp);
tmp=C_SCHEME_FALSE;
C_save(tmp);
tmp=C_SCHEME_FALSE;
C_save(tmp);
lf[371]=C_h_list(16,C_pick(15),C_pick(14),C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(16);
tmp=C_static_string(C_heaptop,14,"-keyword-style");
C_save(tmp);
tmp=C_static_string(C_heaptop,7,"-script");
C_save(tmp);
tmp=C_static_string(C_heaptop,8,"-version");
C_save(tmp);
tmp=C_static_string(C_heaptop,5,"-help");
C_save(tmp);
tmp=C_static_string(C_heaptop,6,"--help");
C_save(tmp);
tmp=C_static_string(C_heaptop,2,"--");
C_save(tmp);
tmp=C_static_string(C_heaptop,8,"-feature");
C_save(tmp);
tmp=C_static_string(C_heaptop,5,"-eval");
C_save(tmp);
tmp=C_static_string(C_heaptop,17,"-case-insensitive");
C_save(tmp);
tmp=C_static_string(C_heaptop,18,"-require-extension");
C_save(tmp);
tmp=C_static_string(C_heaptop,6,"-batch");
C_save(tmp);
tmp=C_static_string(C_heaptop,6,"-quiet");
C_save(tmp);
tmp=C_static_string(C_heaptop,12,"-no-warnings");
C_save(tmp);
tmp=C_static_string(C_heaptop,8,"-no-init");
C_save(tmp);
tmp=C_static_string(C_heaptop,13,"-include-path");
C_save(tmp);
tmp=C_static_string(C_heaptop,8,"-release");
C_save(tmp);
tmp=C_static_string(C_heaptop,3,"-ss");
C_save(tmp);
lf[373]=C_h_list(17,C_pick(16),C_pick(15),C_pick(14),C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(17);
lf[375]=C_static_string(C_heaptop,2,"--");
lf[376]=C_static_string(C_heaptop,2,"-s");
lf[377]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[378]=C_static_lambda_info(C_heaptop,15,"(a4489 g923924)");
lf[379]=C_static_string(C_heaptop,14,"invalid option");
lf[380]=C_h_intern(&lf[380],12,"string->list");
lf[381]=C_static_string(C_heaptop,3,"-ss");
lf[382]=C_static_string(C_heaptop,7,"-script");
lf[383]=C_static_lambda_info(C_heaptop,14,"(loop args916)");
lf[384]=C_static_lambda_info(C_heaptop,27,"(canonicalize-args args914)");
lf[385]=C_h_intern(&lf[385],7,"\003csirun");
lf[386]=C_static_string(C_heaptop,39,"missing argument to command-line option");
lf[387]=C_static_lambda_info(C_heaptop,14,"(loop opts968)");
lf[388]=C_static_lambda_info(C_heaptop,24,"(collect-options opt966)");
lf[389]=C_h_intern(&lf[389],6,"\000match");
lf[390]=C_h_intern(&lf[390],4,"repl");
tmp=C_static_string(C_heaptop,2,"--");
C_save(tmp);
tmp=C_static_string(C_heaptop,6,"-batch");
C_save(tmp);
tmp=C_static_string(C_heaptop,6,"-quiet");
C_save(tmp);
tmp=C_static_string(C_heaptop,8,"-no-init");
C_save(tmp);
tmp=C_static_string(C_heaptop,12,"-no-warnings");
C_save(tmp);
tmp=C_static_string(C_heaptop,7,"-script");
C_save(tmp);
tmp=C_static_string(C_heaptop,2,"-b");
C_save(tmp);
tmp=C_static_string(C_heaptop,2,"-q");
C_save(tmp);
tmp=C_static_string(C_heaptop,2,"-n");
C_save(tmp);
tmp=C_static_string(C_heaptop,2,"-w");
C_save(tmp);
tmp=C_static_string(C_heaptop,2,"-s");
C_save(tmp);
tmp=C_static_string(C_heaptop,2,"-i");
C_save(tmp);
tmp=C_static_string(C_heaptop,17,"-case-insensitive");
C_save(tmp);
tmp=C_static_string(C_heaptop,3,"-ss");
C_save(tmp);
lf[391]=C_h_list(14,C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(14);
lf[392]=C_static_string(C_heaptop,8,"-feature");
lf[393]=C_static_string(C_heaptop,13,"-include-path");
lf[394]=C_static_string(C_heaptop,14,"-keyword-style");
lf[395]=C_static_string(C_heaptop,2,"-D");
lf[396]=C_static_string(C_heaptop,2,"-I");
lf[397]=C_static_string(C_heaptop,2,"-k");
lf[398]=C_static_string(C_heaptop,2,"-R");
lf[399]=C_static_string(C_heaptop,18,"-require-extension");
lf[400]=C_h_intern(&lf[400],22,"\004corerequire-extension");
lf[401]=C_static_string(C_heaptop,2,"-e");
lf[402]=C_static_string(C_heaptop,5,"-eval");
lf[403]=C_static_lambda_info(C_heaptop,14,"(do1001 x1003)");
lf[404]=C_h_intern(&lf[404],17,"open-input-string");
lf[405]=C_h_intern(&lf[405],4,"main");
lf[406]=C_h_intern(&lf[406],22,"command-line-arguments");
lf[407]=C_static_lambda_info(C_heaptop,7,"(a4869)");
lf[408]=C_static_lambda_info(C_heaptop,21,"(a4879 . results1007)");
lf[409]=C_static_string(C_heaptop,3,"-ss");
lf[410]=C_static_lambda_info(C_heaptop,15,"(do987 args989)");
lf[411]=C_static_string(C_heaptop,1,".");
lf[412]=C_static_string(C_heaptop,4,"HOME");
lf[413]=C_h_intern(&lf[413],17,"\003sysstring-append");
lf[414]=C_static_string(C_heaptop,2,"./");
tmp=C_static_string(C_heaptop,2,"-n");
C_save(tmp);
tmp=C_static_string(C_heaptop,8,"-no-init");
C_save(tmp);
lf[415]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[416]=C_static_string(C_heaptop,6,"prefix");
lf[417]=C_h_intern(&lf[417],13,"keyword-style");
lf[418]=C_h_intern(&lf[418],7,"\000prefix");
lf[419]=C_static_string(C_heaptop,4,"none");
lf[420]=C_h_intern(&lf[420],5,"\000none");
lf[421]=C_static_string(C_heaptop,6,"suffix");
lf[422]=C_h_intern(&lf[422],7,"\000suffix");
lf[423]=C_static_string(C_heaptop,43,"missing argument to `-keyword-style\047 option");
lf[424]=C_h_intern(&lf[424],7,"provide");
lf[425]=C_h_intern(&lf[425],5,"match");
lf[426]=C_h_intern(&lf[426],8,"string=\077");
lf[427]=C_static_string(C_heaptop,2,"-I");
lf[428]=C_static_string(C_heaptop,13,"-include-path");
lf[429]=C_h_intern(&lf[429],17,"register-feature!");
lf[430]=C_static_string(C_heaptop,2,"-D");
lf[431]=C_static_string(C_heaptop,8,"-feature");
lf[432]=C_h_intern(&lf[432],14,"case-sensitive");
lf[433]=C_h_intern(&lf[433],16,"case-insensitive");
lf[434]=C_static_string(C_heaptop,45,"Identifiers and symbols are case insensitive\012");
tmp=C_static_string(C_heaptop,2,"-i");
C_save(tmp);
tmp=C_static_string(C_heaptop,17,"-case-insensitive");
C_save(tmp);
lf[435]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[436]=C_h_intern(&lf[436],12,"load-verbose");
lf[437]=C_h_intern(&lf[437],20,"\003syswarnings-enabled");
lf[438]=C_static_string(C_heaptop,22,"Warnings are disabled\012");
tmp=C_static_string(C_heaptop,2,"-w");
C_save(tmp);
tmp=C_static_string(C_heaptop,12,"-no-warnings");
C_save(tmp);
lf[439]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[440]=C_static_string(C_heaptop,8,"-release");
tmp=C_static_string(C_heaptop,2,"-v");
C_save(tmp);
tmp=C_static_string(C_heaptop,8,"-version");
C_save(tmp);
lf[441]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_static_string(C_heaptop,2,"-h");
C_save(tmp);
tmp=C_static_string(C_heaptop,5,"-help");
C_save(tmp);
tmp=C_static_string(C_heaptop,6,"--help");
C_save(tmp);
lf[442]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
lf[443]=C_static_string(C_heaptop,0,"");
lf[444]=C_static_string(C_heaptop,1,";");
lf[445]=C_static_string(C_heaptop,20,"CHICKEN_INCLUDE_PATH");
tmp=C_static_string(C_heaptop,2,"-q");
C_save(tmp);
tmp=C_static_string(C_heaptop,6,"-quiet");
C_save(tmp);
lf[446]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_static_string(C_heaptop,2,"-b");
C_save(tmp);
tmp=C_static_string(C_heaptop,6,"-batch");
C_save(tmp);
lf[447]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_static_string(C_heaptop,2,"-e");
C_save(tmp);
tmp=C_static_string(C_heaptop,5,"-eval");
C_save(tmp);
lf[448]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[449]=C_h_intern(&lf[449],7,"windows");
lf[450]=C_h_intern(&lf[450],6,"cygwin");
lf[451]=C_h_intern(&lf[451],6,"script");
lf[452]=C_static_string(C_heaptop,34,"missing or invalid script argument");
lf[453]=C_static_string(C_heaptop,2,"--");
tmp=C_static_string(C_heaptop,2,"-s");
C_save(tmp);
tmp=C_static_string(C_heaptop,3,"-ss");
C_save(tmp);
tmp=C_static_string(C_heaptop,7,"-script");
C_save(tmp);
lf[454]=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
tmp=C_static_string(C_heaptop,2,"-k");
C_save(tmp);
tmp=C_static_string(C_heaptop,14,"-keyword-style");
C_save(tmp);
lf[455]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[456]=C_h_intern(&lf[456],4,"argv");
lf[457]=C_static_string(C_heaptop,0,"");
lf[458]=C_h_intern(&lf[458],17,"get-output-string");
lf[459]=C_h_intern(&lf[459],18,"open-output-string");
lf[460]=C_static_lambda_info(C_heaptop,12,"(a2726 o674)");
lf[461]=C_static_string(C_heaptop,21,"invalid option syntax");
lf[462]=C_static_lambda_info(C_heaptop,7,"(a2763)");
lf[463]=C_static_lambda_info(C_heaptop,13,"(a2757 ex680)");
lf[464]=C_h_intern(&lf[464],7,"reverse");
lf[465]=C_static_lambda_info(C_heaptop,18,"(do681 x683 xs684)");
lf[466]=C_static_lambda_info(C_heaptop,7,"(a2775)");
lf[467]=C_static_lambda_info(C_heaptop,7,"(a2814)");
lf[468]=C_static_lambda_info(C_heaptop,17,"(a2808 . g678686)");
lf[469]=C_static_lambda_info(C_heaptop,7,"(a2769)");
lf[470]=C_h_intern(&lf[470],22,"with-exception-handler");
lf[471]=C_static_lambda_info(C_heaptop,15,"(a2751 g677679)");
lf[472]=C_h_intern(&lf[472],30,"call-with-current-continuation");
lf[473]=C_static_string(C_heaptop,11,"CSI_OPTIONS");
lf[474]=C_static_lambda_info(C_heaptop,11,"(##csi#run)");
lf[475]=C_h_intern(&lf[475],25,"\003sysimplicit-exit-handler");
lf[476]=C_h_intern(&lf[476],15,"make-hash-table");
lf[477]=C_static_string(C_heaptop,6,"#;~A> ");
lf[478]=C_static_lambda_info(C_heaptop,7,"(a5240)");
lf[479]=C_h_intern(&lf[479],11,"repl-prompt");
lf[480]=C_h_intern(&lf[480],6,"srfi-8");
lf[481]=C_h_intern(&lf[481],7,"srfi-16");
lf[482]=C_h_intern(&lf[482],7,"srfi-26");
lf[483]=C_h_intern(&lf[483],7,"srfi-31");
lf[484]=C_h_intern(&lf[484],7,"srfi-15");
lf[485]=C_h_intern(&lf[485],7,"srfi-11");
tmp=C_intern(C_heaptop,4,"void");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[486]=C_h_pair(C_restore,tmp);
lf[487]=C_h_intern(&lf[487],25,"\003sysenable-runtime-macros");
lf[488]=C_h_intern(&lf[488],6,"define");
tmp=C_intern(C_heaptop,5,"begin");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[489]=C_h_pair(C_restore,tmp);
lf[490]=C_h_intern(&lf[490],12,"syntax-error");
lf[491]=C_h_intern(&lf[491],17,"define-for-syntax");
lf[492]=C_static_string(C_heaptop,18,"invalid identifier");
lf[493]=C_static_lambda_info(C_heaptop,25,"(a5246 head416 . body417)");
lf[494]=C_h_intern(&lf[494],18,"\003sysregister-macro");
lf[495]=C_h_intern(&lf[495],6,"letrec");
lf[496]=C_static_lambda_info(C_heaptop,25,"(a5306 head414 . args415)");
lf[497]=C_h_intern(&lf[497],3,"rec");
lf[498]=C_h_intern(&lf[498],22,"chicken-compile-shared");
lf[499]=C_h_intern(&lf[499],3,"not");
lf[500]=C_h_intern(&lf[500],9,"compiling");
lf[501]=C_h_intern(&lf[501],4,"unit");
lf[502]=C_h_intern(&lf[502],7,"declare");
lf[503]=C_h_intern(&lf[503],4,"else");
lf[504]=C_h_intern(&lf[504],11,"cond-expand");
lf[505]=C_h_intern(&lf[505],6,"export");
tmp=C_intern(C_heaptop,5,"begin");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[506]=C_h_pair(C_restore,tmp);
lf[507]=C_h_intern(&lf[507],6,"static");
lf[508]=C_h_intern(&lf[508],5,"begin");
lf[509]=C_h_intern(&lf[509],7,"dynamic");
lf[510]=C_h_intern(&lf[510],16,"define-extension");
lf[511]=C_static_string(C_heaptop,24,"invalid clause specifier");
lf[512]=C_static_string(C_heaptop,21,"invalid clause syntax");
lf[513]=C_static_lambda_info(C_heaptop,33,"(loop s404 d405 cs406 exports407)");
lf[514]=C_static_lambda_info(C_heaptop,28,"(a5357 name401 . clauses402)");
lf[515]=C_h_intern(&lf[515],22,"string-parse-start+end");
lf[516]=C_h_intern(&lf[516],7,"receive");
lf[517]=C_h_intern(&lf[517],28,"string-parse-final-start+end");
lf[518]=C_static_lambda_info(C_heaptop,55,"(a5528 s-e-r395 proc396 s-exp397 args-exp398 . body399)");
lf[519]=C_h_intern(&lf[519],20,"let-string-start+end");
lf[520]=C_h_intern(&lf[520],5,"apply");
lf[521]=C_h_intern(&lf[521],3,"let");
lf[522]=C_h_intern(&lf[522],10,"\003sysappend");
lf[523]=C_h_intern(&lf[523],2,"<>");
lf[524]=C_h_intern(&lf[524],5,"<...>");
lf[525]=C_static_lambda_info(C_heaptop,42,"(loop xs382 vars383 bs384 vals385 rest386)");
lf[526]=C_static_lambda_info(C_heaptop,15,"(a5587 more380)");
lf[527]=C_h_intern(&lf[527],20,"\003sysregister-macro-2");
lf[528]=C_h_intern(&lf[528],4,"cute");
lf[529]=C_static_lambda_info(C_heaptop,36,"(loop xs368 vars369 vals370 rest371)");
lf[530]=C_static_lambda_info(C_heaptop,15,"(a5730 more366)");
lf[531]=C_h_intern(&lf[531],3,"cut");
lf[532]=C_static_lambda_info(C_heaptop,12,"(a5871 x363)");
lf[533]=C_h_intern(&lf[533],3,"use");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[534]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[535]=C_static_lambda_info(C_heaptop,14,"(a5858 ids362)");
lf[536]=C_static_lambda_info(C_heaptop,12,"(a5890 x360)");
lf[537]=C_h_intern(&lf[537],17,"require-extension");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[538]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[539]=C_static_lambda_info(C_heaptop,14,"(a5877 ids359)");
lf[540]=C_h_intern(&lf[540],23,"\004corerequire-for-syntax");
lf[541]=C_h_intern(&lf[541],18,"require-for-syntax");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[542]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[543]=C_static_lambda_info(C_heaptop,16,"(a5896 names357)");
lf[544]=C_h_intern(&lf[544],18,"\003sysmake-structure");
lf[545]=C_h_intern(&lf[545],14,"\003sysstructure\077");
lf[546]=C_h_intern(&lf[546],15,"\000record-setters");
lf[547]=C_h_intern(&lf[547],19,"\003syscheck-structure");
lf[548]=C_h_intern(&lf[548],10,"\004corecheck");
lf[549]=C_h_intern(&lf[549],13,"\003sysblock-ref");
lf[550]=C_h_intern(&lf[550],18,"getter-with-setter");
lf[551]=C_h_intern(&lf[551],1,"y");
lf[552]=C_h_intern(&lf[552],14,"\003sysblock-set!");
lf[553]=C_static_lambda_info(C_heaptop,20,"(loop slots350 i351)");
tmp=C_intern(C_heaptop,8,"\003sysvoid");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[554]=C_h_pair(C_restore,tmp);
lf[555]=C_static_lambda_info(C_heaptop,16,"(a6086 sname348)");
lf[556]=C_static_lambda_info(C_heaptop,41,"(a5905 t342 conser343 pred344 . slots345)");
lf[557]=C_h_intern(&lf[557],18,"define-record-type");
lf[558]=C_h_intern(&lf[558],3,"and");
lf[559]=C_h_intern(&lf[559],4,"memv");
lf[560]=C_static_lambda_info(C_heaptop,12,"(a6192 k340)");
lf[561]=C_static_lambda_info(C_heaptop,19,"(parse-clause c336)");
lf[562]=C_h_intern(&lf[562],4,"cond");
lf[563]=C_h_intern(&lf[563],17,"handle-exceptions");
lf[564]=C_h_intern(&lf[564],10,"\003syssignal");
lf[565]=C_static_lambda_info(C_heaptop,27,"(a6095 exp331 . clauses332)");
lf[566]=C_h_intern(&lf[566],14,"condition-case");
lf[567]=C_h_intern(&lf[567],9,"\003sysapply");
lf[568]=C_h_intern(&lf[568],10,"\003sysvalues");
lf[569]=C_static_lambda_info(C_heaptop,35,"(a6279 var326 handler327 . body328)");
lf[570]=C_h_intern(&lf[570],27,"\003sysregister-record-printer");
lf[571]=C_h_intern(&lf[571],21,"define-record-printer");
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_h_list(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[572]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
lf[573]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[574]=C_static_lambda_info(C_heaptop,25,"(a6355 head322 . body323)");
lf[575]=C_h_intern(&lf[575],2,"if");
lf[576]=C_h_intern(&lf[576],9,"split-at!");
lf[577]=C_h_intern(&lf[577],4,"take");
lf[578]=C_static_lambda_info(C_heaptop,7,"(a6512)");
lf[579]=C_h_intern(&lf[579],4,"list");
lf[580]=C_h_intern(&lf[580],3,"cdr");
lf[581]=C_static_lambda_info(C_heaptop,25,"(build vars2314 vrest315)");
lf[582]=C_static_lambda_info(C_heaptop,25,"(a6522 vars1310 vars2311)");
lf[583]=C_h_intern(&lf[583],4,"fx>=");
lf[584]=C_h_intern(&lf[584],3,"fx=");
lf[585]=C_h_intern(&lf[585],11,"case-lambda");
lf[586]=C_h_intern(&lf[586],11,"lambda-list");
lf[587]=C_static_lambda_info(C_heaptop,31,"(a6492 vars306 argc307 rest308)");
lf[588]=C_h_intern(&lf[588],25,"\003sysdecompose-lambda-list");
lf[589]=C_static_lambda_info(C_heaptop,20,"(a6482 c304 body305)");
lf[590]=C_h_intern(&lf[590],10,"fold-right");
tmp=C_intern(C_heaptop,10,"\004corecheck");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"\003syserror");
C_save(tmp);
tmp=C_intern(C_heaptop,14,"\004coreimmutable");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"quote");
C_save(tmp);
tmp=C_static_string(C_heaptop,48,"no matching clause in call to \047case-lambda\047 form");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
lf[591]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[592]=C_static_lambda_info(C_heaptop,11,"(loop i294)");
lf[593]=C_static_lambda_info(C_heaptop,31,"(a6685 vars298 argc299 rest300)");
lf[594]=C_static_lambda_info(C_heaptop,12,"(a6675 c297)");
lf[595]=C_h_intern(&lf[595],7,"require");
lf[596]=C_h_intern(&lf[596],6,"srfi-1");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[597]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[598]=C_static_lambda_info(C_heaptop,18,"(a6412 clauses290)");
lf[599]=C_h_intern(&lf[599],5,"null\077");
lf[600]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[601]=C_h_intern(&lf[601],14,"\004coreimmutable");
lf[602]=C_static_lambda_info(C_heaptop,25,"(loop args283 vardefs284)");
lf[603]=C_h_intern(&lf[603],14,"let-optionals*");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[604]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[605]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[606]=C_static_lambda_info(C_heaptop,37,"(a6688 args278 var/defs279 . body280)");
lf[607]=C_static_lambda_info(C_heaptop,30,"(a6841 rest275 default-exp276)");
lf[608]=C_h_intern(&lf[608],9,":optional");
lf[609]=C_static_lambda_info(C_heaptop,29,"(prefix-sym prefix260 sym261)");
lf[610]=C_h_intern(&lf[610],4,"let*");
lf[611]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[612]=C_static_lambda_info(C_heaptop,45,"(recur vars253 defaulters254 non-defaults255)");
lf[613]=C_static_lambda_info(C_heaptop,54,"(recur vars241 defaulter-names242 defs243 next-guy244)");
lf[614]=C_static_string(C_heaptop,4,"def-");
lf[615]=C_static_lambda_info(C_heaptop,14,"(a7164 var268)");
lf[616]=C_h_intern(&lf[616],5,"%rest");
lf[617]=C_h_intern(&lf[617],4,"body");
lf[618]=C_h_intern(&lf[618],4,"cadr");
lf[619]=C_static_string(C_heaptop,1,"%");
lf[620]=C_static_lambda_info(C_heaptop,12,"(a7174 v263)");
lf[621]=C_h_intern(&lf[621],13,"let-optionals");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[622]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[623]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[624]=C_static_lambda_info(C_heaptop,41,"(a6898 arg-list230 var/defs231 . body232)");
lf[625]=C_h_intern(&lf[625],4,"eqv\077");
lf[626]=C_h_intern(&lf[626],6,"switch");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[627]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[628]=C_h_pair(C_restore,tmp);
lf[629]=C_static_lambda_info(C_heaptop,19,"(expand clauses225)");
lf[630]=C_static_lambda_info(C_heaptop,15,"(a7184 form220)");
lf[631]=C_static_string(C_heaptop,34,"syntax error in `cond-expand\047 form");
lf[632]=C_static_lambda_info(C_heaptop,10,"(err x200)");
lf[633]=C_h_intern(&lf[633],12,"\003sysfeature\077");
lf[634]=C_h_intern(&lf[634],2,"or");
lf[635]=C_static_lambda_info(C_heaptop,12,"(test fx201)");
lf[636]=C_static_string(C_heaptop,40,"no matching clause in `cond-expand\047 form");
lf[637]=C_static_lambda_info(C_heaptop,12,"(a7444 x211)");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[638]=C_h_pair(C_restore,tmp);
lf[639]=C_static_lambda_info(C_heaptop,15,"(expand cls210)");
lf[640]=C_static_lambda_info(C_heaptop,18,"(a7273 clauses197)");
lf[641]=C_h_intern(&lf[641],21,"\003syssyntax-error-hook");
lf[642]=C_static_string(C_heaptop,31,"syntax error in \047and-let*\047 form");
lf[643]=C_static_lambda_info(C_heaptop,12,"(fold bs191)");
lf[644]=C_h_intern(&lf[644],8,"and-let*");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[645]=C_h_pair(C_restore,tmp);
lf[646]=C_static_lambda_info(C_heaptop,16,"(a7519 forms185)");
lf[647]=C_h_intern(&lf[647],16,"\003sysdynamic-wind");
lf[648]=C_h_intern(&lf[648],22,"\003sysdisable-interrupts");
lf[649]=C_h_intern(&lf[649],21,"\003sysenable-interrupts");
lf[650]=C_static_lambda_info(C_heaptop,15,"(a7635 form184)");
lf[651]=C_h_intern(&lf[651],16,"critical-section");
lf[652]=C_h_intern(&lf[652],20,"\004coredefine-constant");
lf[653]=C_h_intern(&lf[653],15,"define-constant");
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
lf[654]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[655]=C_static_lambda_info(C_heaptop,15,"(a7649 form182)");
lf[656]=C_h_intern(&lf[656],18,"\004coredefine-inline");
lf[657]=C_h_intern(&lf[657],13,"define-inline");
lf[658]=C_static_string(C_heaptop,42,"invalid substitution form - must be lambda");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[659]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[660]=C_static_lambda_info(C_heaptop,15,"(a7670 form180)");
lf[661]=C_static_lambda_info(C_heaptop,19,"(a7680 i167 exp168)");
lf[662]=C_h_intern(&lf[662],9,"nth-value");
lf[663]=C_static_lambda_info(C_heaptop,13,"(lookup v162)");
lf[664]=C_static_lambda_info(C_heaptop,12,"(a7773 v165)");
lf[665]=C_static_lambda_info(C_heaptop,13,"(a7747 vb164)");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[666]=C_h_pair(C_restore,tmp);
lf[667]=C_static_lambda_info(C_heaptop,12,"(a7795 v163)");
lf[668]=C_static_lambda_info(C_heaptop,12,"(a7801 v160)");
lf[669]=C_static_lambda_info(C_heaptop,12,"(a7815 x158)");
lf[670]=C_h_intern(&lf[670],13,"letrec-values");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[671]=C_h_pair(C_restore,tmp);
lf[672]=C_static_lambda_info(C_heaptop,15,"(a7701 form154)");
lf[673]=C_h_intern(&lf[673],10,"let-values");
lf[674]=C_static_lambda_info(C_heaptop,19,"(fold vbindings151)");
lf[675]=C_h_intern(&lf[675],11,"let*-values");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[676]=C_h_pair(C_restore,tmp);
lf[677]=C_static_lambda_info(C_heaptop,15,"(a7821 form147)");
lf[678]=C_static_lambda_info(C_heaptop,20,"(append* il111 l112)");
lf[679]=C_static_lambda_info(C_heaptop,19,"(map* proc113 l114)");
lf[680]=C_static_lambda_info(C_heaptop,13,"(lookup v129)");
lf[681]=C_static_lambda_info(C_heaptop,12,"(a8003 v141)");
lf[682]=C_static_lambda_info(C_heaptop,35,"(fold llists138 exps139 llists2140)");
lf[683]=C_static_lambda_info(C_heaptop,12,"(a8103 x143)");
lf[684]=C_static_lambda_info(C_heaptop,23,"(loop llists132 acc133)");
lf[685]=C_static_lambda_info(C_heaptop,12,"(a8155 v127)");
lf[686]=C_static_lambda_info(C_heaptop,23,"(loop llists121 acc122)");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[687]=C_h_pair(C_restore,tmp);
lf[688]=C_static_lambda_info(C_heaptop,15,"(a7871 form115)");
lf[689]=C_h_intern(&lf[689],13,"define-values");
lf[690]=C_h_intern(&lf[690],11,"set!-values");
lf[691]=C_static_lambda_info(C_heaptop,23,"(a8205 test98 . body99)");
lf[692]=C_h_intern(&lf[692],6,"unless");
lf[693]=C_static_lambda_info(C_heaptop,23,"(a8219 test96 . body97)");
lf[694]=C_h_intern(&lf[694],4,"when");
lf[695]=C_static_lambda_info(C_heaptop,16,"(a8293 a93 a294)");
lf[696]=C_h_intern(&lf[696],8,"\003syslist");
lf[697]=C_static_lambda_info(C_heaptop,11,"(a8327 z92)");
lf[698]=C_static_lambda_info(C_heaptop,11,"(a8333 z90)");
lf[699]=C_h_intern(&lf[699],12,"parameterize");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[700]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[701]=C_static_lambda_info(C_heaptop,27,"(a8229 bindings84 . body85)");
lf[702]=C_h_intern(&lf[702],10,"\000compiling");
lf[703]=C_h_intern(&lf[703],19,"\004corecompiletimetoo");
lf[704]=C_h_intern(&lf[704],20,"\004corecompiletimeonly");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[705]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[706]=C_h_pair(C_restore,tmp);
lf[707]=C_h_intern(&lf[707],8,"run-time");
lf[708]=C_h_intern(&lf[708],7,"compile");
lf[709]=C_h_intern(&lf[709],12,"compile-time");
lf[710]=C_static_string(C_heaptop,27,"invalid situation specifier");
lf[711]=C_static_lambda_info(C_heaptop,11,"(loop ss71)");
lf[712]=C_static_lambda_info(C_heaptop,29,"(a8339 situations64 . body65)");
lf[713]=C_h_intern(&lf[713],9,"eval-when");
lf[714]=C_h_intern(&lf[714],8,"\003sysvoid");
lf[715]=C_static_lambda_info(C_heaptop,17,"(a8500 id61 ot62)");
lf[716]=C_static_lambda_info(C_heaptop,17,"(a8506 nt59 id60)");
lf[717]=C_static_lambda_info(C_heaptop,17,"(a8544 id57 nt58)");
lf[718]=C_static_lambda_info(C_heaptop,17,"(a8550 ot55 id56)");
lf[719]=C_static_lambda_info(C_heaptop,10,"(loop n53)");
lf[720]=C_static_lambda_info(C_heaptop,11,"(a8596 x51)");
lf[721]=C_static_lambda_info(C_heaptop,11,"(a8602 x50)");
lf[722]=C_h_intern(&lf[722],9,"fluid-let");
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[723]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[724]=C_static_lambda_info(C_heaptop,26,"(a8434 clauses45 . body46)");
lf[725]=C_h_intern(&lf[725],11,"\000type-error");
lf[726]=C_h_intern(&lf[726],15,"\003syssignal-hook");
lf[727]=C_static_string(C_heaptop,27,"argument has incorrect type");
lf[728]=C_static_lambda_info(C_heaptop,29,"(a8608 pred40 exp41 . args42)");
lf[729]=C_h_intern(&lf[729],6,"ensure");
lf[730]=C_static_string(C_heaptop,16,"assertion failed");
lf[731]=C_static_lambda_info(C_heaptop,30,"(a8667 exp37 . msg-and-args38)");
lf[732]=C_h_intern(&lf[732],6,"assert");
lf[733]=C_h_intern(&lf[733],20,"with-input-from-file");
lf[734]=C_static_lambda_info(C_heaptop,15,"(do31 x33 xs34)");
lf[735]=C_static_lambda_info(C_heaptop,7,"(a8743)");
lf[736]=C_static_string(C_heaptop,12,"; including ");
lf[737]=C_static_string(C_heaptop,4," ...");
lf[738]=C_h_intern(&lf[738],28,"\003sysresolve-include-filename");
lf[739]=C_static_lambda_info(C_heaptop,18,"(a8727 filename29)");
lf[740]=C_h_intern(&lf[740],7,"include");
lf[741]=C_h_intern(&lf[741],12,"\004coredeclare");
lf[742]=C_static_lambda_info(C_heaptop,11,"(a8792 x25)");
lf[743]=C_static_lambda_info(C_heaptop,17,"(a8782 . specs24)");
lf[744]=C_static_lambda_info(C_heaptop,16,"(a8798 . exps22)");
lf[745]=C_h_intern(&lf[745],4,"time");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
lf[746]=C_h_pair(C_restore,tmp);
lf[747]=C_static_lambda_info(C_heaptop,23,"(a8839 vars17 . rest18)");
lf[748]=C_h_intern(&lf[748],3,"val");
lf[749]=C_h_intern(&lf[749],28,"\003sysstring->qualified-symbol");
lf[750]=C_static_string(C_heaptop,1,"-");
lf[751]=C_static_string(C_heaptop,1,"-");
lf[752]=C_static_string(C_heaptop,5,"-set!");
lf[753]=C_static_lambda_info(C_heaptop,21,"(mapslots slots9 i10)");
lf[754]=C_static_string(C_heaptop,1,"\077");
lf[755]=C_static_string(C_heaptop,5,"make-");
lf[756]=C_h_intern(&lf[756],27,"\003sysqualified-symbol-prefix");
lf[757]=C_h_intern(&lf[757],13,"define-record");
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[758]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[759]=C_h_intern(&lf[759],6,"symbol");
lf[760]=C_static_lambda_info(C_heaptop,22,"(a8927 name3 . slots4)");
lf[761]=C_h_intern(&lf[761],11,"\003sysprovide");
lf[762]=C_h_intern(&lf[762],19,"chicken-more-macros");
lf[763]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,764,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1095,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k1093 */
static void C_ccall f_1095(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1095,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1098,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1096 in k1093 */
static void C_ccall f_1098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1101,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1099 in k1096 in k1093 */
static void C_ccall f_1101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1104,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_match_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1104,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1107,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#provide */
t3=C_retrieve(lf[761]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[762]);}

/* k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1107(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1107,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1110,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[352]+1);
t4=*((C_word*)lf[137]+1);
t5=*((C_word*)lf[48]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8928,a[2]=t3,a[3]=t5,a[4]=lf[760],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   ##sys#register-macro */
t7=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t2,lf[757],t6);}

/* a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8928(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_8928r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8928r(t0,t1,t2,t3);}}

static void C_ccall f_8928r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8932,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t5=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[757],t2,lf[759]);}

/* k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8932(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8932,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8935,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t3=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[757],((C_word*)t0)[5],lf[758]);}

/* k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8935(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8935,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8938,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 52   symbol->string */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[6]);}

/* k8936 in k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8938(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8938,2,t0,t1);}
t2=(C_word)C_i_memq(lf[546],C_retrieve(lf[21]));
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8944,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* csi.scm: 52   ##sys#qualified-symbol-prefix */
t4=C_retrieve(lf[756]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[6]);}

/* k8942 in k8936 in k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8944,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_9130,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9150,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   string-append */
t4=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[755],((C_word*)t0)[3]);}

/* k9148 in k8942 in k8936 in k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_9150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   ##sys#string->qualified-symbol */
t2=C_retrieve(lf[749]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k9128 in k8942 in k8936 in k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_9130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[45],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9130,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[35],((C_word*)t0)[9]);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[8]);
t4=(C_word)C_a_i_cons(&a,2,lf[544],t3);
t5=(C_word)C_a_i_list(&a,3,lf[3],((C_word*)t0)[8],t4);
t6=(C_word)C_a_i_list(&a,3,lf[488],t1,t5);
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_9106,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t6,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9126,a[2]=((C_word*)t0)[5],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   string-append */
t9=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t9))(4,t9,t8,((C_word*)t0)[3],lf[754]);}

/* k9124 in k9128 in k8942 in k8936 in k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_9126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   ##sys#string->qualified-symbol */
t2=C_retrieve(lf[749]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k9104 in k9128 in k8942 in k8936 in k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_9106(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_9106,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,lf[94]);
t3=(C_word)C_a_i_list(&a,2,lf[35],((C_word*)t0)[10]);
t4=(C_word)C_a_i_list(&a,3,lf[545],lf[94],t3);
t5=(C_word)C_a_i_list(&a,3,lf[3],t2,t4);
t6=(C_word)C_a_i_list(&a,3,lf[488],t1,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8967,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_8969,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t9,a[8]=((C_word*)t0)[10],a[9]=lf[753],tmp=(C_word)a,a+=10,tmp));
t11=((C_word*)t9)[1];
f_8969(t11,t7,((C_word*)t0)[2],C_fix(1));}

/* mapslots in k9104 in k9128 in k8942 in k8936 in k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_8969(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8969,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_8979,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=t1,a[9]=t3,a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t6=(C_word)C_slot(t2,C_fix(0));
/* csi.scm: 52   symbol->string */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,t6);}}

/* k8977 in mapslots in k9104 in k9128 in k8942 in k8936 in k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8979,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_8982,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9098,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   string-append */
t4=((C_word*)t0)[3];
((C_proc6)C_retrieve_proc(t4))(6,t4,t3,((C_word*)t0)[2],lf[751],t1,lf[752]);}

/* k9096 in k8977 in mapslots in k9104 in k9128 in k8942 in k8936 in k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_9098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   ##sys#string->qualified-symbol */
t2=C_retrieve(lf[749]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8980 in k8977 in mapslots in k9104 in k9128 in k8942 in k8936 in k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8982,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8985,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t1,a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_9094,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   string-append */
t4=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[3],lf[750],((C_word*)t0)[2]);}

/* k9092 in k8980 in k8977 in mapslots in k9104 in k9128 in k8942 in k8936 in k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_9094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   ##sys#string->qualified-symbol */
t2=C_retrieve(lf[749]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8983 in k8980 in k8977 in mapslots in k9104 in k9128 in k8942 in k8936 in k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8985(C_word c,C_word t0,C_word t1){
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
C_word ab[167],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8985,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[94],lf[748]);
t3=(C_word)C_a_i_list(&a,2,lf[35],((C_word*)t0)[8]);
t4=(C_word)C_a_i_list(&a,3,lf[547],lf[94],t3);
t5=(C_word)C_a_i_list(&a,2,lf[548],t4);
t6=(C_word)C_a_i_list(&a,4,lf[552],lf[94],((C_word*)t0)[7],lf[748]);
t7=(C_word)C_a_i_list(&a,4,lf[3],t2,t5,t6);
t8=(C_word)C_a_i_list(&a,3,lf[488],((C_word*)t0)[6],t7);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_9016,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t8,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
t10=(C_word)C_a_i_list(&a,1,lf[94]);
t11=(C_word)C_a_i_list(&a,2,lf[35],((C_word*)t0)[8]);
t12=(C_word)C_a_i_list(&a,3,lf[547],lf[94],t11);
t13=(C_word)C_a_i_list(&a,2,lf[548],t12);
t14=(C_word)C_a_i_list(&a,3,lf[549],lf[94],((C_word*)t0)[7]);
t15=(C_word)C_a_i_list(&a,4,lf[3],t10,t13,t14);
t16=t9;
f_9016(t16,(C_word)C_a_i_list(&a,3,lf[550],t15,((C_word*)t0)[6]));}
else{
t10=(C_word)C_a_i_list(&a,1,lf[94]);
t11=(C_word)C_a_i_list(&a,2,lf[35],((C_word*)t0)[8]);
t12=(C_word)C_a_i_list(&a,3,lf[547],lf[94],t11);
t13=(C_word)C_a_i_list(&a,2,lf[548],t12);
t14=(C_word)C_a_i_list(&a,3,lf[549],lf[94],((C_word*)t0)[7]);
t15=t9;
f_9016(t15,(C_word)C_a_i_list(&a,4,lf[3],t10,t13,t14));}}

/* k9014 in k8983 in k8980 in k8977 in mapslots in k9104 in k9128 in k8942 in k8936 in k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_9016(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_9016,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[488],((C_word*)t0)[7],t1);
t3=(C_word)C_a_i_list(&a,3,lf[508],((C_word*)t0)[6],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8996,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t6=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* csi.scm: 52   mapslots */
t7=((C_word*)((C_word*)t0)[2])[1];
f_8969(t7,t4,t5,t6);}

/* k8994 in k9014 in k8983 in k8980 in k8977 in mapslots in k9104 in k9128 in k8942 in k8936 in k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8996,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k8965 in k9104 in k9128 in k8942 in k8936 in k8933 in k8930 in a8927 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8967,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[508],t3));}

/* k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1110,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1113,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8840,a[2]=lf[747],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[516],t3);}

/* a8839 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8840(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+23)){
C_save_and_reclaim((void*)tr3r,(void*)f_8840r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8840r(t0,t1,t2,t3);}}

static void C_ccall f_8840r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(23);
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_a_i_list(&a,3,lf[3],C_SCHEME_END_OF_LIST,t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[5],t4,lf[696]));}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8857,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t5=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[516],t2,lf[586]);}}

/* k8855 in a8839 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8857,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8860,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t3=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[516],((C_word*)t0)[3],lf[746]);}

/* k8858 in k8855 in a8839 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8860,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8866,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=t2;
f_8866(t4,(C_word)C_i_nullp(t3));}
else{
t3=t2;
f_8866(t3,C_SCHEME_FALSE);}}

/* k8864 in k8858 in k8855 in a8839 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_8866(C_word t0,C_word t1){
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
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8866,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
t4=(C_word)C_a_i_list(&a,2,t2,t3);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_i_cdr(((C_word*)t0)[3]);
t7=(C_word)C_a_i_cons(&a,2,t5,t6);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_cons(&a,2,lf[521],t7));}
else{
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,3,lf[3],C_SCHEME_END_OF_LIST,t2);
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=(C_word)C_a_i_cons(&a,2,lf[3],t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_list(&a,3,lf[5],t3,t6));}}

/* k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1113,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1116,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve(lf[8]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8799,a[2]=t3,a[3]=lf[744],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#register-macro */
t5=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,lf[745],t4);}

/* a8798 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8799(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_8799r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_8799r(t0,t1,t2);}}

static void C_ccall f_8799r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8803,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   gensym */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[114]);}

/* k8801 in a8798 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8803(C_word c,C_word t0,C_word t1){
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
C_word ab[57],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8803,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,lf[119]);
t3=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t4=(C_word)C_a_i_cons(&a,2,lf[3],t3);
t5=(C_word)C_a_i_list(&a,1,lf[117]);
t6=(C_word)C_a_i_list(&a,2,lf[116],t5);
t7=(C_word)C_a_i_list(&a,3,lf[567],lf[568],t1);
t8=(C_word)C_a_i_list(&a,4,lf[3],t1,t6,t7);
t9=(C_word)C_a_i_list(&a,3,lf[5],t4,t8);
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_list(&a,3,lf[508],t2,t9));}

/* k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1116,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1119,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8783,a[2]=lf[743],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[502],t3);}

/* a8782 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8783(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_8783r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_8783r(t0,t1,t2);}}

static void C_ccall f_8783r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8791,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8793,a[2]=lf[742],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#map */
t5=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t2);}

/* a8792 in a8782 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8793(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8793,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[35],t2));}

/* k8789 in a8782 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8791(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8791,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[741],t1));}

/* k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1119(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1119,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1122,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve(lf[733]);
t4=*((C_word*)lf[33]+1);
t5=*((C_word*)lf[464]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8728,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=lf[739],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   ##sys#register-macro */
t7=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t2,lf[740],t6);}

/* a8727 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8728(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8728,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8732,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   ##sys#resolve-include-filename */
t4=C_retrieve(lf[738]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,t2,C_SCHEME_TRUE);}

/* k8730 in a8727 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8732,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8735,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8778,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   load-verbose */
t4=C_retrieve(lf[436]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k8776 in k8730 in a8727 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* csi.scm: 52   print */
t2=*((C_word*)lf[28]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[736],((C_word*)t0)[2],lf[737]);}
else{
t2=((C_word*)t0)[3];
f_8735(2,t2,C_SCHEME_UNDEFINED);}}

/* k8733 in k8730 in a8727 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8735,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8742,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8744,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=lf[735],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   with-input-from-file */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[2],t3);}

/* a8743 in k8733 in k8730 in a8727 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8752,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   read */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k8750 in a8743 in k8733 in k8730 in a8727 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8752(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8752,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8754,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=lf[734],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_8754(t5,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* do31 in k8750 in a8743 in k8733 in k8730 in a8727 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_8754(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8754,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_eofp(t2))){
/* csi.scm: 52   reverse */
t4=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8771,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   read */
t5=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}}

/* k8769 in do31 in k8750 in a8743 in k8733 in k8730 in a8727 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8771,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_8754(t3,((C_word*)t0)[2],t1,t2);}

/* k8740 in k8733 in k8730 in a8727 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8742,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[508],t1));}

/* k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1122,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1125,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8668,a[2]=lf[731],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[732],t3);}

/* a8667 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8668(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_8668r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8668r(t0,t1,t2,t3);}}

static void C_ccall f_8668r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(17);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8672,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t3);
if(C_truep(t5)){
t6=(C_word)C_a_i_list(&a,2,lf[35],lf[730]);
t7=t4;
f_8672(t7,(C_word)C_a_i_list(&a,2,lf[601],t6));}
else{
t6=t4;
f_8672(t6,(C_word)C_slot(t3,C_fix(0)));}}

/* k8670 in a8667 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_8672(C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8672,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[548],((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,lf[4]);
t4=(C_word)C_a_i_list(&a,2,lf[35],((C_word*)t0)[4]);
t5=(C_word)C_i_length(((C_word*)t0)[3]);
t6=(C_word)C_fixnum_greaterp(t5,C_fix(1));
t7=(C_truep(t6)?(C_word)C_slot(((C_word*)t0)[3],C_fix(1)):C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,t4,t7);
t9=(C_word)C_a_i_cons(&a,2,t1,t8);
t10=(C_word)C_a_i_cons(&a,2,lf[65],t9);
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_list(&a,4,lf[575],t2,t3,t10));}

/* k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1125,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1128,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8609,a[2]=lf[728],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[729],t3);}

/* a8608 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8609(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_8609r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_8609r(t0,t1,t2,t3,t4);}}

static void C_ccall f_8609r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8613,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   gensym */
t6=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k8611 in a8608 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8613(C_word c,C_word t0,C_word t1){
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
C_word ab[54],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8613,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t5=(C_word)C_a_i_list(&a,2,lf[548],t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8640,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t7=t6;
f_8640(t7,((C_word*)t0)[2]);}
else{
t7=(C_word)C_a_i_list(&a,2,lf[35],lf[727]);
t8=(C_word)C_a_i_list(&a,2,lf[601],t7);
t9=(C_word)C_a_i_list(&a,2,lf[35],((C_word*)t0)[4]);
t10=t6;
f_8640(t10,(C_word)C_a_i_list(&a,3,t8,t1,t9));}}

/* k8638 in k8611 in a8608 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_8640(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8640,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[725],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[726],t2);
t4=(C_word)C_a_i_list(&a,4,lf[575],((C_word*)t0)[5],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[521],((C_word*)t0)[2],t4));}

/* k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1128,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1131,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve(lf[8]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8435,a[2]=t3,a[3]=lf[724],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#register-macro */
t5=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,lf[722],t4);}

/* a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8435(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_8435r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8435r(t0,t1,t2,t3);}}

static void C_ccall f_8435r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8439,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t5=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[722],t2,lf[723]);}

/* k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8439(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8439,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8442,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   ##sys#map */
t3=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[159]+1),((C_word*)t0)[3]);}

/* k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8442,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8445,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8603,a[2]=((C_word*)t0)[2],a[3]=lf[721],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#map */
t4=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}

/* a8602 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8603(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8603,3,t0,t1,t2);}
/* csi.scm: 52   gensym */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8445,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8448,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8597,a[2]=((C_word*)t0)[2],a[3]=lf[720],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#map */
t4=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}

/* a8596 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8597(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8597,3,t0,t1,t2);}
/* csi.scm: 52   gensym */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8448(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8448,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8455,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8559,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8595,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#map */
t5=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[618]+1),((C_word*)t0)[2]);}

/* k8593 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8595(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   map */
t2=*((C_word*)lf[2]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],*((C_word*)lf[696]+1),((C_word*)t0)[2],t1);}

/* k8557 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8559,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8563,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8567,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_length(((C_word*)t0)[2]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8573,a[2]=t6,a[3]=lf[719],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_8573(t8,t3,t4);}

/* loop in k8557 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_8573(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
loop:
a=C_alloc(3);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_8573,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8587,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_fixnum_difference(t2,C_fix(1));
/* csi.scm: 52   loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k8585 in loop in k8557 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8587(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8587,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,t1));}

/* k8565 in k8557 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8567(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   map */
t2=*((C_word*)lf[2]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],*((C_word*)lf[696]+1),((C_word*)t0)[2],t1);}

/* k8561 in k8557 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8563(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[522]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8453 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8523,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8527,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8551,a[2]=lf[718],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   map */
t5=*((C_word*)lf[2]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,t4,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* a8550 in k8453 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8551(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8551,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[6],t2,t3));}

/* k8525 in k8453 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8527,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8531,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8535,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8545,a[2]=lf[717],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   map */
t5=*((C_word*)lf[2]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a8544 in k8525 in k8453 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8545(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8545,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[6],t2,t3));}

/* k8533 in k8525 in k8453 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8535,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,lf[714]);
t3=(C_word)C_a_i_list(&a,1,t2);
/* ##sys#append */
t4=*((C_word*)lf[522]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k8529 in k8525 in k8453 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8531(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[522]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8521 in k8453 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8523(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8523,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,lf[3],t2);
t4=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[7]);
t5=(C_word)C_a_i_cons(&a,2,lf[3],t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8479,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8483,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8507,a[2]=lf[716],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   map */
t9=*((C_word*)lf[2]+1);
((C_proc5)C_retrieve_proc(t9))(5,t9,t7,t8,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* a8506 in k8521 in k8453 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8507(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8507,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[6],t2,t3));}

/* k8481 in k8521 in k8453 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8487,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8491,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8501,a[2]=lf[715],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   map */
t5=*((C_word*)lf[2]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a8500 in k8481 in k8521 in k8453 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8501(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8501,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[6],t2,t3));}

/* k8489 in k8481 in k8521 in k8453 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8491,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,lf[714]);
t3=(C_word)C_a_i_list(&a,1,t2);
/* ##sys#append */
t4=*((C_word*)lf[522]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k8485 in k8481 in k8521 in k8453 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8487(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[522]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8477 in k8521 in k8453 in k8446 in k8443 in k8440 in k8437 in a8434 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8479(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8479,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,lf[3],t2);
t4=(C_word)C_a_i_list(&a,4,lf[647],((C_word*)t0)[5],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[521],((C_word*)t0)[2],t4));}

/* k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1131(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1131,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1134,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8340,a[2]=lf[712],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[713],t3);}

/* a8339 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8340(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+25)){
C_save_and_reclaim((void*)tr3r,(void*)f_8340r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8340r(t0,t1,t2,t3);}}

static void C_ccall f_8340r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(25);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_SCHEME_FALSE;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=(C_word)C_a_i_cons(&a,2,lf[508],t3);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8347,a[2]=t5,a[3]=t10,a[4]=t1,a[5]=t9,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8376,a[2]=t7,a[3]=t9,a[4]=t5,a[5]=t13,a[6]=lf[711],tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_8376(t15,t11,t2);}

/* loop in a8339 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_8376(C_word t0,C_word t1,C_word t2){
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
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8376,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8389,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_eqp(t3,lf[79]);
if(C_truep(t5)){
t6=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t7=t4;
f_8389(2,t7,t6);}
else{
t6=(C_word)C_eqp(t3,lf[107]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(t3,lf[707]));
if(C_truep(t7)){
t8=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t9=t4;
f_8389(2,t9,t8);}
else{
t8=(C_word)C_eqp(t3,lf[708]);
t9=(C_truep(t8)?t8:(C_word)C_eqp(t3,lf[709]));
if(C_truep(t9)){
t10=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t11=t4;
f_8389(2,t11,t10);}
else{
t10=(C_word)C_slot(t2,C_fix(0));
/* csi.scm: 52   ##sys#error */
t11=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t4,lf[710],t10);}}}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k8387 in loop in a8339 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* csi.scm: 52   loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8376(t3,((C_word*)t0)[2],t2);}

/* k8345 in a8339 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8347,2,t0,t1);}
if(C_truep((C_word)C_i_memq(lf[702],C_retrieve(lf[21])))){
t2=(C_truep(((C_word*)((C_word*)t0)[6])[1])?((C_word*)((C_word*)t0)[5])[1]:C_SCHEME_FALSE);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?(C_word)C_a_i_list(&a,2,lf[703],((C_word*)t0)[3]):(C_truep(((C_word*)((C_word*)t0)[6])[1])?(C_word)C_a_i_list(&a,2,lf[704],((C_word*)t0)[3]):(C_truep(((C_word*)((C_word*)t0)[5])[1])?((C_word*)t0)[3]:lf[705]))));}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(((C_word*)((C_word*)t0)[2])[1])?((C_word*)t0)[3]:lf[706]));}}

/* k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1137,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[159]+1);
t4=*((C_word*)lf[618]+1);
t5=*((C_word*)lf[2]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8230,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=lf[701],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   ##sys#register-macro */
t7=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t2,lf[699],t6);}

/* a8229 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8230(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_8230r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8230r(t0,t1,t2,t3);}}

static void C_ccall f_8230r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8234,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t5=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[699],t2,lf[700]);}

/* k8232 in a8229 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8234,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8237,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* csi.scm: 52   gensym */
t3=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k8235 in k8232 in a8229 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8237,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8240,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* csi.scm: 52   ##sys#map */
t3=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k8238 in k8235 in k8232 in a8229 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8240,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8243,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 52   ##sys#map */
t3=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8241 in k8238 in k8235 in k8232 in a8229 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8243(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8243,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8246,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8334,a[2]=lf[698],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#map */
t4=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a8333 in k8241 in k8238 in k8235 in k8232 in a8229 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8334(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8334,3,t0,t1,t2);}
/* csi.scm: 52   gensym */
t3=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k8244 in k8241 in k8238 in k8235 in k8232 in a8229 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8246,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_8249,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8328,a[2]=lf[697],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#map */
t4=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a8327 in k8244 in k8241 in k8238 in k8235 in k8232 in a8229 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8328(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8328,3,t0,t1,t2);}
/* csi.scm: 52   gensym */
t3=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k8247 in k8244 in k8241 in k8238 in k8235 in k8232 in a8229 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8249,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_8256,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8322,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   map */
t4=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,*((C_word*)lf[696]+1),((C_word*)t0)[4],((C_word*)t0)[2]);}

/* k8320 in k8247 in k8244 in k8241 in k8238 in k8235 in k8232 in a8229 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8322(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8322,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8326,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   map */
t3=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,*((C_word*)lf[696]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k8324 in k8320 in k8247 in k8244 in k8241 in k8238 in k8235 in k8232 in a8229 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   ##sys#append */
t2=*((C_word*)lf[522]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k8254 in k8247 in k8244 in k8241 in k8238 in k8235 in k8232 in a8229 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8256,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8292,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8294,a[2]=lf[695],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   map */
t4=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a8293 in k8254 in k8247 in k8244 in k8241 in k8238 in k8235 in k8232 in a8229 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8294(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[39],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_8294,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_list(&a,1,t2);
t5=(C_word)C_a_i_list(&a,2,lf[114],t4);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_a_i_list(&a,2,t2,t3);
t8=(C_word)C_a_i_list(&a,3,lf[6],t3,lf[114]);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_list(&a,4,lf[521],t6,t7,t8));}

/* k8290 in k8254 in k8247 in k8244 in k8241 in k8238 in k8235 in k8232 in a8229 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8292(C_word c,C_word t0,C_word t1){
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
C_word ab[51],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8292,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,lf[3],t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t7=(C_word)C_a_i_cons(&a,2,lf[3],t6);
t8=(C_word)C_a_i_list(&a,4,lf[647],((C_word*)t0)[5],t7,((C_word*)t0)[5]);
t9=(C_word)C_a_i_list(&a,3,lf[521],t5,t8);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_list(&a,3,lf[521],((C_word*)t0)[2],t9));}

/* k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1137,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1140,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8220,a[2]=lf[693],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[694],t3);}

/* a8219 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8220(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_8220r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8220r(t0,t1,t2,t3);}}

static void C_ccall f_8220r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(12);
t4=(C_word)C_a_i_cons(&a,2,lf[508],t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[575],t2,t4));}

/* k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1140(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1140,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1143,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8206,a[2]=lf[691],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[692],t3);}

/* a8205 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8206(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr3r,(void*)f_8206r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_8206r(t0,t1,t2,t3);}}

static void C_ccall f_8206r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(18);
t4=(C_word)C_a_i_list(&a,1,lf[4]);
t5=(C_word)C_a_i_cons(&a,2,lf[508],t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,4,lf[575],t2,t4,t5));}

/* k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1143,2,t0,t1);}
t2=*((C_word*)lf[2]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1144,a[2]=t2,a[3]=lf[12],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1217,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#register-macro */
t5=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,lf[690],t3);}

/* k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1217,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1220,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t3=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[689],((C_word*)t0)[2]);}

/* k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1220(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1220,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1223,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7873,a[2]=t4,a[3]=lf[678],tmp=(C_word)a,a+=4,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7904,a[2]=t6,a[3]=lf[679],tmp=(C_word)a,a+=4,tmp));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7944,a[2]=t4,a[3]=t6,a[4]=lf[688],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   ##sys#register-macro-2 */
t10=C_retrieve(lf[527]);
((C_proc4)C_retrieve_proc(t10))(4,t10,t2,lf[673],t9);}

/* a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7944(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7944,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7948,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t4=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[673],t2,lf[687]);}

/* k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7948,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* map */
t5=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[159]+1),t2);}

/* k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7960,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8166,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=lf[686],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_8166(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* loop in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_8166(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8166,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8179,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_listp(t4))){
/* csi.scm: 52   append */
t6=*((C_word*)lf[303]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t4,t3);}
else{
if(C_truep((C_word)C_i_pairp(t4))){
/* csi.scm: 52   append* */
t6=((C_word*)((C_word*)t0)[2])[1];
f_7873(t6,t5,t4,t3);}
else{
t6=t5;
f_8179(2,t6,(C_word)C_a_i_cons(&a,2,t4,t3));}}}}

/* k8177 in loop in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* csi.scm: 52   loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8166(t3,((C_word*)t0)[2],t2,t1);}

/* k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8156,a[2]=lf[685],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}

/* a8155 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8156(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8156,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8164,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   gensym */
t4=C_retrieve(lf[8]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k8162 in a8155 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8164,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7963,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7964,a[2]=t1,a[3]=lf[680],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7975,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_8110,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=lf[684],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_8110(t7,t3,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}

/* loop in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_8110(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8110,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* csi.scm: 52   reverse */
t4=*((C_word*)lf[464]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8126,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8150,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   map* */
t7=((C_word*)((C_word*)t0)[3])[1];
f_7904(t7,t6,((C_word*)t0)[2],t4);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8143,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   lookup */
t7=((C_word*)t0)[2];
f_7964(3,t7,t6,t4);}}}

/* k8141 in loop in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8143,2,t0,t1);}
t2=((C_word*)t0)[3];
f_8126(t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k8148 in loop in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8150,2,t0,t1);}
t2=((C_word*)t0)[3];
f_8126(t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k8124 in loop in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_8126(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* csi.scm: 52   loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_8110(t3,((C_word*)t0)[2],t2,t1);}

/* k7973 in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7982,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8104,a[2]=lf[683],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a8103 in k7973 in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8104(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8104,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_cadr(t2));}

/* k7980 in k7973 in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7982,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7984,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=lf[682],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_7984(t5,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* fold in k7980 in k7973 in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_7984(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7984,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8002,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8004,a[2]=((C_word*)t0)[4],a[3]=lf[681],tmp=(C_word)a,a+=4,tmp);
/* map */
t7=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8018,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_car(t4);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_8098,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   cdar */
t8=*((C_word*)lf[295]+1);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t4);}
else{
t7=t5;
f_8018(t7,C_SCHEME_FALSE);}}}

/* k8096 in fold in k7980 in k7973 in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_8018(t2,(C_word)C_i_nullp(t1));}

/* k8016 in fold in k7980 in k7973 in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_8018(C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_8018,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_8049,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 52   caar */
t3=*((C_word*)lf[296]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,3,lf[3],C_SCHEME_END_OF_LIST,t2);
t4=(C_word)C_i_car(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_8072,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[4]);
t7=(C_word)C_i_cdr(((C_word*)t0)[6]);
t8=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* csi.scm: 52   fold */
t9=((C_word*)((C_word*)t0)[2])[1];
f_7984(t9,t5,t6,t7,t8);}}

/* k8070 in k8016 in fold in k7980 in k7973 in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8072,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[3],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,3,lf[5],((C_word*)t0)[2],t2));}

/* k8047 in k8016 in fold in k7980 in k7973 in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8049(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_8049,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8029,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[4]);
t7=(C_word)C_i_cdr(((C_word*)t0)[6]);
t8=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* csi.scm: 52   fold */
t9=((C_word*)((C_word*)t0)[2])[1];
f_7984(t9,t5,t6,t7,t8);}

/* k8027 in k8047 in k8016 in fold in k7980 in k7973 in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8029,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[521],((C_word*)t0)[2],t1));}

/* a8003 in fold in k7980 in k7973 in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8004(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_8004,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_8012,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   lookup */
t4=((C_word*)t0)[2];
f_7964(3,t4,t3,t2);}

/* k8010 in a8003 in fold in k7980 in k7973 in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8012,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k8000 in fold in k7980 in k7973 in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_8002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_8002,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[521],t2));}

/* lookup in k7961 in k7958 in k7955 in k7946 in a7871 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7964(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7964,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_cdr(t3));}

/* map* in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_7904(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7904,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7927,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t3);
/* csi.scm: 52   proc */
t6=t2;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
/* csi.scm: 52   proc */
t4=t2;
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}}}

/* k7925 in map* in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7927,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7931,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* csi.scm: 52   map* */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7904(t4,t2,((C_word*)t0)[2],t3);}

/* k7929 in k7925 in map* in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7931(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7931,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* append* in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_7873(C_word t0,C_word t1,C_word t2,C_word t3){
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
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7873,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7894,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
/* csi.scm: 52   append* */
t8=t5;
t9=t6;
t10=t3;
t1=t8;
t2=t9;
t3=t10;
goto loop;}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,t2,t3));}}

/* k7892 in append* in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7894(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7894,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1223,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1226,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7822,a[2]=lf[677],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro-2 */
t4=C_retrieve(lf[527]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[675],t3);}

/* a7821 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7822(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7822,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7826,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t4=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[675],t2,lf[676]);}

/* k7824 in a7821 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7826(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7826,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7837,a[2]=t5,a[3]=t3,a[4]=lf[674],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_7837(t7,((C_word*)t0)[2],t2);}

/* fold in k7824 in a7821 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_7837(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(13);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7837,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[521],t3));}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7862,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
/* csi.scm: 52   fold */
t9=t5;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}

/* k7860 in fold in k7824 in a7821 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7862(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7862,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[673],((C_word*)t0)[2],t1));}

/* k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1226,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1229,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7702,a[2]=lf[672],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro-2 */
t4=C_retrieve(lf[527]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[670],t3);}

/* a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7702(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7702,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7706,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t4=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[670],t2,lf[671]);}

/* k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7706,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7715,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7814,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7816,a[2]=lf[669],tmp=(C_word)a,a+=3,tmp);
/* map */
t7=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t2);}

/* a7815 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7816(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7816,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_car(t2));}

/* k7812 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7814(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[522]+1),t1);}

/* k7713 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7715,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7718,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7802,a[2]=lf[668],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}

/* a7801 in k7713 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7802(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7802,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7810,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   gensym */
t4=C_retrieve(lf[8]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k7808 in a7801 in k7713 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7810,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7716 in k7713 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7718(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7718,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7719,a[2]=t1,a[3]=lf[663],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7738,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7796,a[2]=lf[667],tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a7795 in k7716 in k7713 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7796(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7796,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,t2,lf[666]));}

/* k7736 in k7716 in k7713 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7738,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7742,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7746,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7748,a[2]=((C_word*)t0)[3],a[3]=lf[665],tmp=(C_word)a,a+=4,tmp);
/* map */
t5=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a7747 in k7736 in k7716 in k7713 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7748(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7748,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
t4=(C_word)C_a_i_list(&a,3,lf[3],C_SCHEME_END_OF_LIST,t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7768,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_car(t2);
/* map */
t7=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}

/* k7766 in a7747 in k7736 in k7716 in k7713 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7768,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7772,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7774,a[2]=((C_word*)t0)[3],a[3]=lf[664],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[2]);
/* map */
t5=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}

/* a7773 in k7766 in a7747 in k7736 in k7716 in k7713 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7774(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7774,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7782,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   lookup */
t4=((C_word*)t0)[2];
f_7719(3,t4,t3,t2);}

/* k7780 in a7773 in k7766 in a7747 in k7736 in k7716 in k7713 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7782(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7782,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[6],((C_word*)t0)[2],t1));}

/* k7770 in k7766 in a7747 in k7736 in k7716 in k7713 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7772(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7772,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[3],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[5],((C_word*)t0)[2],t3));}

/* k7744 in k7736 in k7716 in k7713 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[522]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k7740 in k7736 in k7716 in k7713 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7742,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[521],t2));}

/* lookup in k7716 in k7713 in k7704 in a7701 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7719(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7719,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_cdr(t3));}

/* k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1229,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1232,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7681,a[2]=lf[661],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[662],t3);}

/* a7680 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7681(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_7681,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7685,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   gensym */
t5=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k7683 in a7680 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7685,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[3],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,3,lf[228],t1,((C_word*)t0)[3]);
t4=(C_word)C_a_i_list(&a,3,lf[3],t1,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[5],t2,t4));}

/* k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1232,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1311,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7671,a[2]=lf[660],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro-2 */
t4=C_retrieve(lf[527]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[657],t3);}

/* a7670 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7671(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7671,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1238,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t4=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[657],t2,lf[659]);}

/* k1236 in a7670 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1238(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1238,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_i_pairp(t2);
t4=(C_truep(t3)?(C_word)C_i_car(t2):t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1247,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_i_cdr(((C_word*)t0)[3]);
t8=(C_word)C_a_i_cons(&a,2,t6,t7);
t9=t5;
f_1247(t9,(C_word)C_a_i_cons(&a,2,lf[3],t8));}
else{
t6=t5;
f_1247(t6,(C_word)C_i_cadr(((C_word*)t0)[3]));}}

/* k1245 in k1236 in a7670 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_1247(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1247,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1250,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_pairp(t1);
t4=(C_word)C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1263,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_1263(t6,t4);}
else{
t6=(C_word)C_i_car(t1);
t7=(C_word)C_eqp(lf[3],t6);
t8=t5;
f_1263(t8,(C_word)C_i_not(t7));}}

/* k1261 in k1245 in k1236 in a7670 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_1263(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* csi.scm: 52   syntax-error */
t2=C_retrieve(lf[490]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[657],lf[658],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_1250(2,t2,C_SCHEME_UNDEFINED);}}

/* k1248 in k1245 in k1236 in a7670 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1250,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[35],((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,2,t2,((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[656],t3));}

/* k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1314,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7650,a[2]=lf[655],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro-2 */
t4=C_retrieve(lf[527]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[653],t3);}

/* a7649 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7650(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7650,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7654,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t4=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[653],t2,lf[654]);}

/* k7652 in a7649 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7654,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,2,lf[35],t2);
t4=(C_word)C_i_cadr(((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[652],t3,t4));}

/* k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1314(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1314,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1317,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7636,a[2]=lf[650],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro-2 */
t4=C_retrieve(lf[527]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[651],t3);}

/* a7635 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7636(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7636,3,t0,t1,t2);}
t3=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t2);
t4=(C_word)C_a_i_cons(&a,2,lf[3],t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,4,lf[647],lf[648],t4,lf[649]));}

/* k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1317,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1320,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7520,a[2]=lf[646],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro-2 */
t4=C_retrieve(lf[527]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[644],t3);}

/* a7519 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7520(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7520,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7524,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t4=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[644],t2,lf[645]);}

/* k7522 in a7519 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7524(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7524,2,t0,t1);}
t2=(C_word)C_i_listp(((C_word*)t0)[3]);
t3=(C_word)C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7533,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_7533(t5,t3);}
else{
t5=(C_word)C_i_length(((C_word*)t0)[3]);
t6=t4;
f_7533(t6,(C_word)C_fixnum_lessp(t5,C_fix(2)));}}

/* k7531 in k7522 in a7519 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_7533(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7533,NULL,2,t0,t1);}
if(C_truep(t1)){
/* csi.scm: 52   ##sys#syntax-error-hook */
t2=C_retrieve(lf[641]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],lf[642],((C_word*)t0)[2]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[2],C_fix(0));
t3=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7547,a[2]=t5,a[3]=t3,a[4]=lf[643],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_7547(t7,((C_word*)t0)[3],t2);}}

/* fold in k7531 in k7522 in a7519 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_7547(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(25);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7547,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[508],((C_word*)t0)[3]));}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_not_pair_p(t3))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7576,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   fold */
t15=t5;
t16=t4;
t1=t15;
t2=t16;
goto loop;}
else{
t5=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t5))){
t6=(C_word)C_slot(t3,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7593,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   fold */
t15=t7;
t16=t4;
t1=t15;
t2=t16;
goto loop;}
else{
t6=(C_word)C_slot(t3,C_fix(0));
t7=(C_word)C_i_cadr(t3);
t8=(C_word)C_a_i_list(&a,2,t6,t7);
t9=(C_word)C_a_i_list(&a,1,t8);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7611,a[2]=t9,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   fold */
t15=t10;
t16=t4;
t1=t15;
t2=t16;
goto loop;}}}}

/* k7609 in fold in k7531 in k7522 in a7519 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7611(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7611,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,lf[575],((C_word*)t0)[4],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,3,lf[521],((C_word*)t0)[2],t2));}

/* k7591 in fold in k7531 in k7522 in a7519 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7593(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7593,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[575],((C_word*)t0)[2],t1,C_SCHEME_FALSE));}

/* k7574 in fold in k7531 in k7522 in a7519 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7576(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7576,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[575],((C_word*)t0)[2],t1,C_SCHEME_FALSE));}

/* k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1323,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7274,a[2]=lf[640],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro-2 */
t4=C_retrieve(lf[527]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[504],t3);}

/* a7273 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7274(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[20],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7274,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7277,a[2]=t2,a[3]=lf[632],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7287,a[2]=t3,a[3]=t5,a[4]=lf[635],tmp=(C_word)a,a+=5,tmp));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7429,a[2]=t3,a[3]=t5,a[4]=t8,a[5]=t2,a[6]=lf[639],tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_7429(t10,t1,t2);}

/* expand in a7273 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_7429(C_word t0,C_word t1,C_word t2){
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
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7429,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7443,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7445,a[2]=lf[637],tmp=(C_word)a,a+=3,tmp);
/* map */
t6=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_pairp(t4))){
t6=(C_word)C_slot(t4,C_fix(0));
t7=(C_word)C_eqp(t6,lf[503]);
if(C_truep(t7)){
t8=(C_word)C_slot(t4,C_fix(1));
t9=(C_word)C_eqp(t8,C_SCHEME_END_OF_LIST);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_truep(t9)?lf[638]:(C_word)C_a_i_cons(&a,2,lf[508],t8)));}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7500,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   test */
t9=((C_word*)((C_word*)t0)[3])[1];
f_7287(t9,t8,t6);}}
else{
/* csi.scm: 52   err */
t6=((C_word*)t0)[2];
f_7277(t6,t1,t4);}}
else{
/* csi.scm: 52   err */
t4=((C_word*)t0)[2];
f_7277(t4,t1,t2);}}}

/* k7498 in expand in a7273 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7500,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[508],t2));}
else{
/* csi.scm: 52   expand */
t2=((C_word*)((C_word*)t0)[3])[1];
f_7429(t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* a7444 in expand in a7273 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7445(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7445,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_car(t2));}

/* k7441 in expand in a7273 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[2],*((C_word*)lf[65]+1),lf[636],t1);}

/* test in a7273 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_7287(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(13);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_7287,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_symbolp(t2))){
/* csi.scm: 52   ##sys#feature? */
t3=C_retrieve(lf[633]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_eqp(t4,lf[558]);
if(C_truep(t5)){
t6=(C_word)C_eqp(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
if(C_truep((C_word)C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7336,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_slot(t3,C_fix(0));
/* csi.scm: 52   test */
t17=t7;
t18=t8;
t1=t17;
t2=t18;
goto loop;}
else{
/* csi.scm: 52   err */
t7=((C_word*)t0)[2];
f_7277(t7,t1,t2);}}}
else{
t6=(C_word)C_eqp(t4,lf[634]);
if(C_truep(t6)){
t7=(C_word)C_eqp(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_pairp(t3))){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7375,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_slot(t3,C_fix(0));
/* csi.scm: 52   test */
t17=t8;
t18=t9;
t1=t17;
t2=t18;
goto loop;}
else{
/* csi.scm: 52   err */
t8=((C_word*)t0)[2];
f_7277(t8,t1,t2);}}}
else{
t7=(C_word)C_eqp(t4,lf[499]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7413,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t9=(C_word)C_i_cadr(t2);
/* csi.scm: 52   test */
t17=t8;
t18=t9;
t1=t17;
t2=t18;
goto loop;}
else{
/* csi.scm: 52   err */
t8=((C_word*)t0)[2];
f_7277(t8,t1,t2);}}}}
else{
/* csi.scm: 52   err */
t3=((C_word*)t0)[2];
f_7277(t3,t1,t2);}}}

/* k7411 in test in a7273 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* k7373 in test in a7273 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7375(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7375,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t3=(C_word)C_a_i_cons(&a,2,lf[634],t2);
/* csi.scm: 52   test */
t4=((C_word*)((C_word*)t0)[2])[1];
f_7287(t4,((C_word*)t0)[4],t3);}}

/* k7334 in test in a7273 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7336,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=(C_word)C_a_i_cons(&a,2,lf[558],t2);
/* csi.scm: 52   test */
t4=((C_word*)((C_word*)t0)[3])[1];
f_7287(t4,((C_word*)t0)[2],t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* err in a7273 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_7277(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7277,NULL,3,t0,t1,t2);}
t3=(C_word)C_a_i_cons(&a,2,lf[504],((C_word*)t0)[2]);
/* csi.scm: 52   ##sys#error */
t4=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[631],t2,t3);}

/* k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1326,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve(lf[8]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7185,a[2]=t3,a[3]=lf[630],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#register-macro-2 */
t5=C_retrieve(lf[527]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,lf[626],t4);}

/* a7184 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7185(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7185,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7195,a[2]=t4,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   gensym */
t6=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k7193 in a7184 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7195(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7195,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7206,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7208,a[2]=t6,a[3]=t1,a[4]=lf[629],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_7208(t8,t4,((C_word*)t0)[2]);}

/* expand in k7193 in a7184 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_7208(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7208,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_7224,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t6=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,lf[626],t3,lf[627]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[628]);}}

/* k7222 in expand in k7193 in a7184 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7224(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7224,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_eqp(lf[503],t2);
if(C_truep(t3)){
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,lf[508],t4));}
else{
t4=(C_word)C_i_car(((C_word*)t0)[6]);
t5=(C_word)C_a_i_list(&a,3,lf[625],((C_word*)t0)[4],t4);
t6=(C_word)C_i_cdr(((C_word*)t0)[6]);
t7=(C_word)C_a_i_cons(&a,2,lf[508],t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_7252,a[2]=t7,a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   expand */
t9=((C_word*)((C_word*)t0)[3])[1];
f_7208(t9,t8,((C_word*)t0)[2]);}}

/* k7250 in k7222 in expand in k7193 in a7184 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7252,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[575],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k7204 in k7193 in a7184 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7206,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[521],((C_word*)t0)[2],t1));}

/* k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1326(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1326,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1329,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6899,a[2]=lf[624],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[621],t3);}

/* a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6899(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_6899r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_6899r(t0,t1,t2,t3,t4);}}

static void C_ccall f_6899r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7096,a[2]=t3,a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t6=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,lf[621],t3,lf[623]);}

/* k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7096,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7099,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t3=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[621],((C_word*)t0)[4],lf[622]);}

/* k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7099(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7099,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7102,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* map */
t3=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[159]+1),((C_word*)t0)[2]);}

/* k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7102,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7103,a[2]=lf[609],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7118,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7175,a[2]=t2,a[3]=lf[620],tmp=(C_word)a,a+=4,tmp);
/* map */
t5=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t1);}

/* a7174 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7175(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7175,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7183,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   prefix-sym */
f_7103(t3,lf[619],t2);}

/* k7181 in a7174 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   gensym */
t2=C_retrieve(lf[8]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7118,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7121,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* map */
t3=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[618]+1),((C_word*)t0)[2]);}

/* k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7121,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7124,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* csi.scm: 52   gensym */
t3=C_retrieve(lf[8]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[617]);}

/* k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7124,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7127,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* csi.scm: 52   gensym */
t3=C_retrieve(lf[8]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[616]);}

/* k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7127,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7130,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7165,a[2]=((C_word*)t0)[2],a[3]=lf[615],tmp=(C_word)a,a+=4,tmp);
/* map */
t4=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[8]);}

/* a7164 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7165(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_7165,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7173,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   prefix-sym */
f_7103(t3,lf[614],t2);}

/* k7171 in a7164 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   gensym */
t2=C_retrieve(lf[8]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k7128 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7130,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7133,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[5];
t5=t1;
t6=((C_word*)t0)[2];
t7=C_retrieve(lf[8]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6910,a[2]=t5,a[3]=t6,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   reverse */
t9=*((C_word*)lf[464]+1);
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t3);}

/* k6908 in k7128 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6910(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6910,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6914,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   reverse */
t3=*((C_word*)lf[464]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k6912 in k6908 in k7128 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6914,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6918,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   reverse */
t3=*((C_word*)lf[464]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k6916 in k6912 in k6908 in k7128 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6918(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6918,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6920,a[2]=t3,a[3]=lf[613],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_6920(t5,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* recur in k6916 in k6912 in k6908 in k7128 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_6920(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6920,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_i_nullp(t2))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_i_car(t3);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6965,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=t7,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
/* csi.scm: 52   reverse */
t9=*((C_word*)lf[464]+1);
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t6);}}

/* k6963 in recur in k6916 in k6912 in k6908 in k7128 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6965,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6977,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   reverse */
t4=*((C_word*)lf[464]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k6975 in k6963 in recur in k6916 in k6912 in k6908 in k7128 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6977,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,1,t2);
/* ##sys#append */
t4=*((C_word*)lf[522]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k6971 in k6963 in recur in k6916 in k6912 in k6908 in k7128 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6973(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6973,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t1);
t3=(C_word)C_a_i_list(&a,3,lf[3],((C_word*)t0)[8],t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[7],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6941,a[2]=t4,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[5]);
t7=(C_word)C_i_cdr(((C_word*)t0)[4]);
t8=(C_word)C_i_car(((C_word*)t0)[5]);
/* csi.scm: 52   recur */
t9=((C_word*)((C_word*)t0)[3])[1];
f_6920(t9,t5,((C_word*)t0)[2],t6,t7,t8);}

/* k6939 in k6971 in k6963 in recur in k6916 in k6912 in k6908 in k7128 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6941(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6941,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7133(C_word c,C_word t0,C_word t1){
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
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7133,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7136,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[9];
t7=C_retrieve(lf[8]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6993,a[2]=t9,a[3]=t5,a[4]=t6,a[5]=lf[612],tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_6993(t11,t2,t3,t4,C_SCHEME_END_OF_LIST);}

/* recur in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_6993(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6993,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(C_word)C_a_i_list(&a,2,lf[599],((C_word*)t0)[4]);
t6=(C_word)C_a_i_list(&a,2,lf[548],t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7027,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   reverse */
t8=*((C_word*)lf[464]+1);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t4);}
else{
t5=(C_word)C_i_car(t2);
t6=(C_word)C_a_i_list(&a,2,lf[599],((C_word*)t0)[4]);
t7=(C_word)C_i_car(t3);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7093,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t6,a[7]=t1,a[8]=t5,a[9]=((C_word*)t0)[4],a[10]=t7,tmp=(C_word)a,a+=11,tmp);
/* csi.scm: 52   reverse */
t9=*((C_word*)lf[464]+1);
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t4);}}

/* k7091 in recur in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7093(C_word c,C_word t0,C_word t1){
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
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7093,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t1);
t3=(C_word)C_a_i_list(&a,2,lf[159],((C_word*)t0)[9]);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[8],t3);
t5=(C_word)C_a_i_list(&a,2,lf[580],((C_word*)t0)[9]);
t6=(C_word)C_a_i_list(&a,2,((C_word*)t0)[9],t5);
t7=(C_word)C_a_i_list(&a,2,t4,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_7057,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_i_cdr(((C_word*)t0)[5]);
t10=(C_word)C_i_cdr(((C_word*)t0)[4]);
t11=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],((C_word*)t0)[3]);
/* csi.scm: 52   recur */
t12=((C_word*)((C_word*)t0)[2])[1];
f_6993(t12,t8,t9,t10,t11);}

/* k7055 in k7091 in recur in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7057,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[521],((C_word*)t0)[5],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,4,lf[575],((C_word*)t0)[3],((C_word*)t0)[2],t2));}

/* k7025 in recur in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7027,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_list(&a,2,lf[35],lf[611]);
t4=(C_word)C_a_i_list(&a,2,lf[601],t3);
t5=(C_word)C_a_i_list(&a,3,lf[65],t4,((C_word*)t0)[4]);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,4,lf[575],((C_word*)t0)[2],t2,t5));}

/* k7134 in k7131 in k7128 in k7125 in k7122 in k7119 in k7116 in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7136,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[8],((C_word*)t0)[7]);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t4=(C_word)C_a_i_cons(&a,2,lf[3],t3);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,((C_word*)t0)[3]);
t7=(C_word)C_a_i_cons(&a,2,t2,t6);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_list(&a,3,lf[610],t7,t1));}

/* prefix-sym in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_7103(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7103,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_7111,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7115,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   symbol->string */
t6=*((C_word*)lf[352]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t3);}

/* k7113 in prefix-sym in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   string-append */
t2=*((C_word*)lf[48]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7109 in prefix-sym in k7100 in k7097 in k7094 in a6898 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_7111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   string->symbol */
t2=*((C_word*)lf[137]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1329(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1329,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1332,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6842,a[2]=lf[607],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[608],t3);}

/* a6841 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6842(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6842,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6846,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   gensym */
t5=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k6844 in a6841 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6846(C_word c,C_word t0,C_word t1){
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
C_word ab[93],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6846,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_list(&a,2,lf[599],t1);
t5=(C_word)C_a_i_list(&a,2,lf[580],t1);
t6=(C_word)C_a_i_list(&a,2,lf[599],t5);
t7=(C_word)C_a_i_list(&a,2,lf[548],t6);
t8=(C_word)C_a_i_list(&a,2,lf[159],t1);
t9=(C_word)C_a_i_list(&a,2,lf[35],lf[1]);
t10=(C_word)C_a_i_list(&a,2,lf[601],t9);
t11=(C_word)C_a_i_list(&a,3,lf[65],t10,t1);
t12=(C_word)C_a_i_list(&a,4,lf[575],t7,t8,t11);
t13=(C_word)C_a_i_list(&a,4,lf[575],t4,((C_word*)t0)[3],t12);
t14=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,(C_word)C_a_i_list(&a,3,lf[521],t3,t13));}

/* k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1332(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1332,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1335,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6689,a[2]=lf[606],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[603],t3);}

/* a6688 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6689(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_6689r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_6689r(t0,t1,t2,t3,t4);}}

static void C_ccall f_6689r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6693,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t6=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,lf[603],t3,lf[605]);}

/* k6691 in a6688 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6693,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t3=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[603],((C_word*)t0)[3],lf[604]);}

/* k6694 in k6691 in a6688 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6696,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6699,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   gensym */
t3=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k6697 in k6694 in k6691 in a6688 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6699(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6699,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6710,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6712,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=lf[602],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_6712(t8,t4,t1,((C_word*)t0)[2]);}

/* loop in k6697 in k6694 in k6691 in a6688 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_6712(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[73],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6712,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_a_i_list(&a,2,lf[599],t2);
t5=(C_word)C_a_i_list(&a,2,lf[548],t4);
t6=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t7=(C_word)C_a_i_cons(&a,2,lf[521],t6);
t8=(C_word)C_a_i_list(&a,2,lf[35],lf[600]);
t9=(C_word)C_a_i_list(&a,2,lf[601],t8);
t10=(C_word)C_a_i_list(&a,3,lf[65],t9,t2);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_list(&a,4,lf[575],t5,t7,t10));}
else{
t4=(C_word)C_i_car(t3);
if(C_truep((C_word)C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6762,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 52   gensym */
t6=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}
else{
t5=(C_word)C_a_i_list(&a,2,t4,t2);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_cons(&a,2,lf[521],t7));}}}

/* k6760 in loop in k6697 in k6694 in k6691 in a6688 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6762(C_word c,C_word t0,C_word t1){
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
C_word ab[76],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6762,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,2,lf[599],((C_word*)t0)[5]);
t4=(C_word)C_i_cadr(((C_word*)t0)[6]);
t5=(C_word)C_a_i_list(&a,2,lf[159],((C_word*)t0)[5]);
t6=(C_word)C_a_i_list(&a,4,lf[575],t3,t4,t5);
t7=(C_word)C_a_i_list(&a,2,t2,t6);
t8=(C_word)C_a_i_list(&a,2,lf[599],((C_word*)t0)[5]);
t9=(C_word)C_a_i_list(&a,2,lf[35],C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_list(&a,2,lf[580],((C_word*)t0)[5]);
t11=(C_word)C_a_i_list(&a,4,lf[575],t8,t9,t10);
t12=(C_word)C_a_i_list(&a,2,t1,t11);
t13=(C_word)C_a_i_list(&a,2,t7,t12);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6773,a[2]=t13,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t15=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* csi.scm: 52   loop */
t16=((C_word*)((C_word*)t0)[2])[1];
f_6712(t16,t14,t1,t15);}

/* k6771 in k6760 in loop in k6697 in k6694 in k6691 in a6688 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6773,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[521],((C_word*)t0)[2],t1));}

/* k6708 in k6697 in k6694 in k6691 in a6688 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6710(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6710,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[521],((C_word*)t0)[2],t1));}

/* k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1335,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1338,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6413,a[2]=lf[598],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro-2 */
t4=C_retrieve(lf[527]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[585],t3);}

/* a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6413(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6413,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6447,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t4=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[585],t2,lf[597]);}

/* k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6447,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6450,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   require */
t3=C_retrieve(lf[595]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[596]);}

/* k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6450,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6453,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6674,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6676,a[2]=lf[594],tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a6675 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6676(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6676,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6686,a[2]=lf[593],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#decompose-lambda-list */
t5=C_retrieve(lf[588]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t3,t4);}

/* a6685 in a6675 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6686(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6686,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* k6672 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[319]+1),t1);}

/* k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6453,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6456,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=t1;
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6422,a[2]=t5,a[3]=t3,a[4]=lf[592],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_6422(t7,t2,C_fix(0));}

/* loop in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_6422(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6422,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[3]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6436,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   gensym */
t4=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}}

/* k6434 in loop in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6436(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6436,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6440,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* csi.scm: 52   loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_6422(t4,t2,t3);}

/* k6438 in k6434 in loop in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6440,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6456,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6459,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   gensym */
t3=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6459,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6462,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 52   gensym */
t3=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6462,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6469,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm: 52   append */
t3=*((C_word*)lf[303]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[6]);}

/* k6467 in k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6469,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[85],((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6481,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6483,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=lf[589],tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 52   fold-right */
t7=C_retrieve(lf[590]);
((C_proc5)C_retrieve_proc(t7))(5,t7,t5,t6,lf[591],((C_word*)t0)[2]);}

/* a6482 in k6467 in k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6483(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6483,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6493,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=lf[587],tmp=(C_word)a,a+=9,tmp);
/* csi.scm: 52   ##sys#decompose-lambda-list */
t6=C_retrieve(lf[588]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t1,t4,t5);}

/* a6492 in a6482 in k6467 in k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6493(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_6493,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6497,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],a[9]=t1,a[10]=((C_word*)t0)[7],a[11]=t3,tmp=(C_word)a,a+=12,tmp);
t6=(C_word)C_i_car(((C_word*)t0)[4]);
/* csi.scm: 52   ##sys#check-syntax */
t7=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t7))(5,t7,t5,lf[585],t6,lf[586]);}

/* k6495 in a6492 in a6482 in k6467 in k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6497(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6497,2,t0,t1);}
t2=(C_word)C_fixnum_difference(((C_word*)t0)[11],((C_word*)t0)[10]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6507,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=(C_word)C_i_zerop(t2);
t5=t3;
f_6507(t5,(C_truep(t4)?C_SCHEME_TRUE:(C_word)C_a_i_list(&a,3,lf[583],((C_word*)t0)[2],t2)));}
else{
t4=t3;
f_6507(t4,(C_word)C_a_i_list(&a,3,lf[584],((C_word*)t0)[2],t2));}}

/* k6505 in k6495 in a6492 in a6482 in k6467 in k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_6507(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6507,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6511,a[2]=((C_word*)t0)[9],a[3]=t1,a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6513,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=lf[578],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6523,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=lf[582],tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 52   ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}

/* a6522 in k6505 in k6495 in a6492 in a6482 in k6467 in k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6523(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6523,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6527,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6542,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[581],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_6542(t8,t4,t3,((C_word*)t0)[2]);}

/* build in a6522 in k6505 in k6495 in a6492 in a6482 in k6467 in k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_6542(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6542,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep(((C_word*)t0)[4])){
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_i_cdr(((C_word*)t0)[3]);
t7=(C_word)C_a_i_cons(&a,2,t5,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_cons(&a,2,lf[521],t7));}
else{
t4=(C_word)C_i_cddr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_cadr(((C_word*)t0)[3]));}
else{
t5=(C_word)C_i_cdr(((C_word*)t0)[3]);
t6=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_cons(&a,2,lf[521],t6));}}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6598,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   gensym */
t5=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}}

/* k6596 in build in a6522 in k6505 in k6495 in a6492 in a6482 in k6467 in k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6598(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6598,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,2,lf[159],((C_word*)t0)[4]);
t4=(C_word)C_a_i_list(&a,2,t2,t3);
t5=(C_word)C_a_i_list(&a,2,lf[580],((C_word*)t0)[4]);
t6=(C_word)C_a_i_list(&a,2,t1,t5);
t7=(C_word)C_a_i_list(&a,2,t4,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6609,a[2]=t7,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t9=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_pairp(t9))){
t10=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* csi.scm: 52   build */
t11=((C_word*)((C_word*)t0)[2])[1];
f_6542(t11,t8,t10,t1);}
else{
/* csi.scm: 52   build */
t10=((C_word*)((C_word*)t0)[2])[1];
f_6542(t10,t8,C_SCHEME_END_OF_LIST,t1);}}

/* k6607 in k6596 in build in a6522 in k6505 in k6495 in a6492 in a6482 in k6467 in k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6609,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[521],((C_word*)t0)[2],t1));}

/* k6525 in a6522 in k6505 in k6495 in a6492 in a6482 in k6467 in k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6527(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6527,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6540,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   map */
t3=*((C_word*)lf[2]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,*((C_word*)lf[579]+1),((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k6538 in k6525 in a6522 in k6505 in k6495 in a6492 in a6482 in k6467 in k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6540,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[521],t1,((C_word*)t0)[2]));}

/* a6512 in k6505 in k6495 in a6492 in a6482 in k6467 in k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6513,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6521,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   take */
t3=C_retrieve(lf[577]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6519 in a6512 in k6505 in k6495 in a6492 in a6482 in k6467 in k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   split-at! */
t2=C_retrieve(lf[576]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k6509 in k6505 in k6495 in a6492 in a6482 in k6467 in k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6511,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[575],((C_word*)t0)[3],t1,((C_word*)t0)[2]));}

/* k6479 in k6467 in k6460 in k6457 in k6454 in k6451 in k6448 in k6445 in a6412 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6481,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[521],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,3,lf[3],((C_word*)t0)[2],t2));}

/* k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1338,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1341,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6356,a[2]=lf[574],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[571],t3);}

/* a6355 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6356(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr3r,(void*)f_6356r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6356r(t0,t1,t2,t3);}}

static void C_ccall f_6356r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(16);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6366,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_a_i_cons(&a,2,t2,t3);
/* csi.scm: 52   ##sys#check-syntax */
t6=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t4,lf[571],t5,lf[572]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6396,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_a_i_cons(&a,2,t2,t3);
/* csi.scm: 52   ##sys#check-syntax */
t6=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t4,lf[571],t5,lf[573]);}}

/* k6394 in a6355 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6396,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[35],((C_word*)t0)[4]);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[570],t3));}

/* k6364 in a6355 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6366,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(0));
t3=(C_word)C_a_i_list(&a,2,lf[35],t2);
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=(C_word)C_a_i_cons(&a,2,lf[3],t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_list(&a,3,lf[570],t3,t6));}

/* k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1341,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1344,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6280,a[2]=lf[569],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[563],t3);}

/* a6279 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6280(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_6280r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_6280r(t0,t1,t2,t3,t4);}}

static void C_ccall f_6280r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6284,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   gensym */
t6=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k6282 in a6279 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6284,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6287,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 52   gensym */
t3=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k6285 in k6282 in a6279 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6287(C_word c,C_word t0,C_word t1){
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
C_word ab[114],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6287,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
t4=(C_word)C_a_i_list(&a,3,lf[3],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t4);
t6=(C_word)C_a_i_list(&a,3,lf[3],t3,t5);
t7=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t8=(C_word)C_a_i_cons(&a,2,lf[3],t7);
t9=(C_word)C_a_i_list(&a,3,lf[567],lf[568],t1);
t10=(C_word)C_a_i_list(&a,3,lf[3],C_SCHEME_END_OF_LIST,t9);
t11=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t10);
t12=(C_word)C_a_i_list(&a,3,lf[3],t1,t11);
t13=(C_word)C_a_i_list(&a,3,lf[5],t8,t12);
t14=(C_word)C_a_i_list(&a,3,lf[3],C_SCHEME_END_OF_LIST,t13);
t15=(C_word)C_a_i_list(&a,3,lf[470],t6,t14);
t16=(C_word)C_a_i_list(&a,3,lf[3],t2,t15);
t17=(C_word)C_a_i_list(&a,2,lf[472],t16);
t18=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,(C_word)C_a_i_list(&a,1,t17));}

/* k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1344,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1347,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6096,a[2]=lf[565],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[566],t3);}

/* a6095 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6096(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_6096r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6096r(t0,t1,t2,t3);}}

static void C_ccall f_6096r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6100,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   gensym */
t5=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k6098 in a6095 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6100,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6103,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   gensym */
t3=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k6101 in k6098 in a6095 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6103(C_word c,C_word t0,C_word t1){
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
C_word ab[57],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6103,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6105,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=lf[561],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_a_i_list(&a,2,lf[35],lf[293]);
t4=(C_word)C_a_i_list(&a,3,lf[545],((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_list(&a,3,lf[253],((C_word*)t0)[5],C_fix(1));
t6=(C_word)C_a_i_list(&a,3,lf[558],t4,t5);
t7=(C_word)C_a_i_list(&a,2,t1,t6);
t8=(C_word)C_a_i_list(&a,1,t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6242,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6246,a[2]=t9,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* map */
t11=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,t2,((C_word*)t0)[2]);}

/* k6244 in k6101 in k6098 in a6095 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6246,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[564],((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,2,lf[503],t2);
t4=(C_word)C_a_i_list(&a,1,t3);
/* ##sys#append */
t5=*((C_word*)lf[522]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t1,t4);}

/* k6240 in k6101 in k6098 in a6095 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6242(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6242,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[562],t1);
t3=(C_word)C_a_i_list(&a,3,lf[521],((C_word*)t0)[5],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,4,lf[563],((C_word*)t0)[3],t3,((C_word*)t0)[2]));}

/* parse-clause in k6101 in k6098 in a6095 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6105(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[35],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6105,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_symbolp(t3);
t5=(C_truep(t4)?(C_word)C_i_car(t2):C_SCHEME_FALSE);
t6=(C_truep(t5)?(C_word)C_i_cadr(t2):(C_word)C_i_car(t2));
t7=(C_truep(t5)?(C_word)C_i_cddr(t2):(C_word)C_i_cdr(t2));
if(C_truep((C_word)C_i_nullp(t6))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6128,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t5)){
t9=(C_word)C_a_i_list(&a,2,t5,((C_word*)t0)[3]);
t10=(C_word)C_a_i_list(&a,1,t9);
t11=(C_word)C_a_i_cons(&a,2,t10,t7);
t12=t8;
f_6128(t12,(C_word)C_a_i_cons(&a,2,lf[521],t11));}
else{
t9=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t7);
t10=t8;
f_6128(t10,(C_word)C_a_i_cons(&a,2,lf[521],t9));}}
else{
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6191,a[2]=t7,a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6193,a[2]=((C_word*)t0)[2],a[3]=lf[560],tmp=(C_word)a,a+=4,tmp);
/* map */
t10=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,t9,t6);}}

/* a6192 in parse-clause in k6101 in k6098 in a6095 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6193(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6193,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,2,lf[35],t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[559],t3,((C_word*)t0)[2]));}

/* k6189 in parse-clause in k6101 in k6098 in a6095 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6191,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[558],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6161,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_a_i_cons(&a,2,t6,((C_word*)t0)[2]);
t8=t4;
f_6161(t8,(C_word)C_a_i_cons(&a,2,lf[521],t7));}
else{
t5=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t6=t4;
f_6161(t6,(C_word)C_a_i_cons(&a,2,lf[521],t5));}}

/* k6159 in k6189 in parse-clause in k6101 in k6098 in a6095 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_6161(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6161,NULL,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k6126 in parse-clause in k6101 in k6098 in a6095 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_6128(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6128,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,lf[503],t1));}

/* k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1347(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1347,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1350,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5906,a[2]=lf[556],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[557],t3);}

/* a5905 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5906(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_5906r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_5906r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_5906r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(8);
t6=(C_word)C_i_cdr(t3);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5913,a[2]=t6,a[3]=t5,a[4]=t1,a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* map */
t8=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,*((C_word*)lf[159]+1),t5);}

/* k5911 in a5905 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5913,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[35],((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6085,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6087,a[2]=((C_word*)t0)[2],a[3]=lf[555],tmp=(C_word)a,a+=4,tmp);
/* map */
t5=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t1);}

/* a6086 in k5911 in a5905 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6087(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6087,3,t0,t1,t2);}
t3=(C_word)C_i_memq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t2:lf[554]));}

/* k6083 in k5911 in a5905 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_6085(C_word c,C_word t0,C_word t1){
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
C_word ab[57],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6085,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[544],t2);
t4=(C_word)C_a_i_list(&a,3,lf[488],((C_word*)t0)[6],t3);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],lf[94]);
t6=(C_word)C_a_i_list(&a,2,lf[35],((C_word*)t0)[4]);
t7=(C_word)C_a_i_list(&a,3,lf[545],lf[94],t6);
t8=(C_word)C_a_i_list(&a,3,lf[488],t5,t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5936,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5938,a[2]=t11,a[3]=((C_word*)t0)[4],a[4]=lf[553],tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_5938(t13,t9,((C_word*)t0)[2],C_fix(1));}

/* loop in k6083 in k5911 in a5905 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_5938(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[112],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5938,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_memq(lf[546],C_retrieve(lf[21]));
t6=(C_word)C_i_cddr(t4);
t7=(C_word)C_i_pairp(t6);
t8=(C_word)C_a_i_list(&a,1,lf[94]);
t9=(C_word)C_a_i_list(&a,2,lf[35],((C_word*)t0)[3]);
t10=(C_word)C_a_i_list(&a,3,lf[547],lf[94],t9);
t11=(C_word)C_a_i_list(&a,2,lf[548],t10);
t12=(C_word)C_a_i_list(&a,3,lf[549],lf[94],t3);
t13=(C_word)C_a_i_list(&a,4,lf[3],t8,t11,t12);
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5964,a[2]=t13,a[3]=t5,a[4]=t7,a[5]=t3,a[6]=((C_word*)t0)[2],a[7]=t2,a[8]=t1,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t7)){
t15=(C_word)C_i_caddr(t4);
t16=(C_word)C_a_i_list(&a,3,t15,lf[94],lf[551]);
t17=(C_word)C_a_i_list(&a,2,lf[35],((C_word*)t0)[3]);
t18=(C_word)C_a_i_list(&a,3,lf[547],lf[94],t17);
t19=(C_word)C_a_i_list(&a,2,lf[548],t18);
t20=(C_word)C_a_i_list(&a,4,lf[552],lf[94],t3,lf[551]);
t21=(C_word)C_a_i_list(&a,4,lf[488],t16,t19,t20);
t22=t14;
f_5964(t22,(C_word)C_a_i_list(&a,1,t21));}
else{
t15=t14;
f_5964(t15,C_SCHEME_END_OF_LIST);}}}

/* k5962 in loop in k6083 in k5911 in a5905 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_5964(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5964,NULL,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5992,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[8],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[3]:C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_i_caddr(((C_word*)t0)[9]);
t6=t3;
f_5992(t6,(C_word)C_a_i_list(&a,3,lf[550],((C_word*)t0)[2],t5));}
else{
t5=t3;
f_5992(t5,((C_word*)t0)[2]);}}

/* k5990 in k5962 in loop in k6083 in k5911 in a5905 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_5992(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5992,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[488],((C_word*)t0)[7],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5976,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[4]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5984,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   add1 */
t6=*((C_word*)lf[189]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}

/* k5982 in k5990 in k5962 in loop in k6083 in k5911 in a5905 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_5938(t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5974 in k5990 in k5962 in loop in k6083 in k5911 in a5905 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5976,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* ##sys#append */
t3=*((C_word*)lf[522]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k5934 in k6083 in k5911 in a5905 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5936,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[508],t3));}

/* k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1350,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1353,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5897,a[2]=lf[543],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro-2 */
t4=C_retrieve(lf[527]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[541],t3);}

/* a5896 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5897(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5897,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5901,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t4=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[541],t2,lf[542]);}

/* k5899 in a5896 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5901,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[540],((C_word*)t0)[2]));}

/* k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1353(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1353,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1356,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5878,a[2]=lf[539],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro-2 */
t4=C_retrieve(lf[527]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[537],t3);}

/* a5877 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5878(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5878,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5882,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t4=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[537],t2,lf[538]);}

/* k5880 in a5877 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5882,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5889,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5891,a[2]=lf[536],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a5890 in k5880 in a5877 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5891(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5891,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[35],t2));}

/* k5887 in k5880 in a5877 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5889,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[400],t1));}

/* k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1359,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5859,a[2]=lf[535],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro-2 */
t4=C_retrieve(lf[527]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[533],t3);}

/* a5858 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5859(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5859,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5863,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t4=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[533],t2,lf[534]);}

/* k5861 in a5858 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5863(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5863,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5870,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5872,a[2]=lf[532],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a5871 in k5861 in a5858 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5872(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5872,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[35],t2));}

/* k5868 in k5861 in a5858 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5870,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[400],t1));}

/* k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1362,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5731,a[2]=lf[530],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro-2 */
t4=C_retrieve(lf[527]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[531],t3);}

/* a5730 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5731(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5731,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5737,a[2]=t4,a[3]=lf[529],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5737(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in a5730 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_5737(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a;
loop:
a=C_alloc(15);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5737,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5747,a[2]=t4,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   reverse */
t7=*((C_word*)lf[464]+1);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t3);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_eqp(t6,lf[523]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5818,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 52   gensym */
t9=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t9))(2,t9,t8);}
else{
t8=(C_word)C_eqp(t6,lf[524]);
if(C_truep(t8)){
/* csi.scm: 52   loop */
t15=t1;
t16=C_SCHEME_END_OF_LIST;
t17=t3;
t18=t4;
t19=C_SCHEME_TRUE;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
t5=t19;
goto loop;}
else{
t9=(C_word)C_i_cdr(t2);
t10=(C_word)C_i_car(t2);
t11=(C_word)C_a_i_cons(&a,2,t10,t4);
/* csi.scm: 52   loop */
t15=t1;
t16=t9;
t17=t3;
t18=t11;
t19=C_SCHEME_FALSE;
t1=t15;
t2=t16;
t3=t17;
t4=t18;
t5=t19;
goto loop;}}}}

/* k5816 in loop in a5730 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5818(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5818,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t4=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* csi.scm: 52   loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_5737(t5,((C_word*)t0)[2],t2,t3,t4,C_SCHEME_FALSE);}

/* k5745 in loop in a5730 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5750,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   reverse */
t3=*((C_word*)lf[464]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5748 in k5745 in loop in a5730 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5750,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5756,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 52   gensym */
t3=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=(C_word)C_i_car(t1);
t3=(C_word)C_a_i_list(&a,2,lf[508],t2);
t4=(C_word)C_i_cdr(t1);
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,3,lf[3],((C_word*)t0)[2],t5));}}

/* k5754 in k5748 in k5745 in loop in a5730 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5756,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5763,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#append */
t3=*((C_word*)lf[522]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k5761 in k5754 in k5748 in k5745 in loop in a5730 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5763(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5763,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5779,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[4]);
t5=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
/* ##sys#append */
t6=*((C_word*)lf[522]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}

/* k5777 in k5761 in k5754 in k5748 in k5745 in loop in a5730 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5779(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5779,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[520],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[3],((C_word*)t0)[2],t3));}

/* k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1362,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1365,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5588,a[2]=lf[526],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro-2 */
t4=C_retrieve(lf[527]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[528],t3);}

/* a5587 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5588(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5588,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5594,a[2]=t4,a[3]=lf[525],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_5594(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in a5587 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_5594(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word t19;
C_word *a;
loop:
a=C_alloc(22);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_5594,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep((C_word)C_i_nullp(t2))){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5604,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   reverse */
t8=*((C_word*)lf[464]+1);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}
else{
t7=(C_word)C_i_car(t2);
t8=(C_word)C_eqp(t7,lf[523]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5679,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t5,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* csi.scm: 52   gensym */
t10=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t10))(2,t10,t9);}
else{
t9=(C_word)C_eqp(t7,lf[524]);
if(C_truep(t9)){
/* csi.scm: 52   loop */
t14=t1;
t15=C_SCHEME_END_OF_LIST;
t16=t3;
t17=t4;
t18=t5;
t19=C_SCHEME_TRUE;
t1=t14;
t2=t15;
t3=t16;
t4=t17;
t5=t18;
t6=t19;
goto loop;}
else{
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5706,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t5,a[6]=t4,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* csi.scm: 52   gensym */
t11=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t11))(2,t11,t10);}}}}

/* k5704 in loop in a5587 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5706(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5706,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(C_word)C_i_car(((C_word*)t0)[7]);
t4=(C_word)C_a_i_list(&a,2,t1,t3);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[6]);
t6=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* csi.scm: 52   loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_5594(t7,((C_word*)t0)[3],t2,((C_word*)t0)[2],t5,t6,C_SCHEME_FALSE);}

/* k5677 in loop in a5587 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5679,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
t4=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* csi.scm: 52   loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_5594(t5,((C_word*)t0)[3],t2,t3,((C_word*)t0)[2],t4,C_SCHEME_FALSE);}

/* k5602 in loop in a5587 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5604,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5607,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   reverse */
t3=*((C_word*)lf[464]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k5605 in k5602 in loop in a5587 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5607(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5607,2,t0,t1);}
if(C_truep(((C_word*)t0)[5])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5613,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   gensym */
t3=C_retrieve(lf[8]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=(C_word)C_i_car(t1);
t3=(C_word)C_i_cdr(t1);
t4=(C_word)C_a_i_cons(&a,2,t2,t3);
t5=(C_word)C_a_i_list(&a,3,lf[3],((C_word*)t0)[2],t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,3,lf[521],((C_word*)t0)[3],t5));}}

/* k5611 in k5605 in k5602 in loop in a5587 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5613,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5624,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* ##sys#append */
t3=*((C_word*)lf[522]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k5622 in k5611 in k5605 in k5602 in loop in a5587 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5624,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5640,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
t5=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
/* ##sys#append */
t6=*((C_word*)lf[522]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}

/* k5638 in k5622 in k5611 in k5605 in k5602 in loop in a5587 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5640,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[520],t2);
t4=(C_word)C_a_i_list(&a,3,lf[3],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[521],((C_word*)t0)[2],t4));}

/* k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1365(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1365,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1368,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5529,a[2]=lf[518],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[519],t3);}

/* a5528 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5529(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+51)){
C_save_and_reclaim((void*)tr6r,(void*)f_5529r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_5529r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_5529r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_word *a=C_alloc(51);
t7=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_pairp(t7))){
t8=(C_word)C_i_caddr(t2);
t9=(C_word)C_i_car(t2);
t10=(C_word)C_i_cadr(t2);
t11=(C_word)C_a_i_list(&a,3,t8,t9,t10);
t12=(C_word)C_a_i_list(&a,4,lf[515],t3,t4,t5);
t13=(C_word)C_a_i_cons(&a,2,t12,t6);
t14=(C_word)C_a_i_cons(&a,2,t11,t13);
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,(C_word)C_a_i_cons(&a,2,lf[516],t14));}
else{
t8=(C_word)C_a_i_list(&a,4,lf[517],t3,t4,t5);
t9=(C_word)C_a_i_cons(&a,2,t8,t6);
t10=(C_word)C_a_i_cons(&a,2,t2,t9);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_cons(&a,2,lf[516],t10));}}

/* k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1368(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1368,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1371,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5358,a[2]=lf[514],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[510],t3);}

/* a5357 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5358(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_5358r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5358r(t0,t1,t2,t3);}}

static void C_ccall f_5358r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5364,a[2]=t5,a[3]=t2,a[4]=lf[513],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_5364(t7,t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t3,C_SCHEME_FALSE);}

/* loop in a5357 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_5364(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5364,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_i_nullp(t4))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5374,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=(C_word)C_a_i_cons(&a,2,lf[505],t5);
t8=t6;
f_5374(t8,(C_word)C_a_i_list(&a,2,lf[502],t7));}
else{
t7=t6;
f_5374(t7,lf[506]);}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5438,a[2]=t5,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
t7=(C_word)C_i_car(t4);
t8=t6;
f_5438(t8,(C_word)C_i_pairp(t7));}
else{
t7=t6;
f_5438(t7,C_SCHEME_FALSE);}}}

/* k5436 in loop in a5357 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_5438(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5438,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* csi.scm: 52   caar */
t3=*((C_word*)lf[296]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}
else{
/* csi.scm: 52   syntax-error */
t2=C_retrieve(lf[490]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],lf[510],lf[512],((C_word*)t0)[7]);}}

/* k5439 in k5436 in loop in a5357 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5441(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5441,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(C_word)C_eqp(lf[507],t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5465,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm: 52   cdar */
t5=*((C_word*)lf[295]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[7]);}
else{
t4=(C_word)C_eqp(lf[509],t1);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5486,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* csi.scm: 52   cdar */
t6=*((C_word*)lf[295]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[7]);}
else{
t5=(C_word)C_eqp(lf[505],t1);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5499,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=((C_word*)t0)[2];
t8=(C_truep(t7)?t7:C_SCHEME_END_OF_LIST);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5507,a[2]=t8,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   cdar */
t10=*((C_word*)lf[295]+1);
((C_proc3)C_retrieve_proc(t10))(3,t10,t9,((C_word*)t0)[7]);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5514,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   caar */
t7=*((C_word*)lf[296]+1);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[7]);}}}}

/* k5512 in k5439 in k5436 in loop in a5357 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   syntax-error */
t2=C_retrieve(lf[490]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],lf[510],lf[511],t1);}

/* k5505 in k5439 in k5436 in loop in a5357 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   append */
t2=*((C_word*)lf[303]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5497 in k5439 in k5436 in loop in a5357 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5499(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 52   loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_5364(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5484 in k5439 in k5436 in loop in a5357 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5486,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[508],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
/* csi.scm: 52   loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_5364(t4,((C_word*)t0)[5],((C_word*)t0)[4],t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5463 in k5439 in k5436 in loop in a5357 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5465,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[508],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
/* csi.scm: 52   loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_5364(t4,((C_word*)t0)[5],t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k5372 in loop in a5357 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_5374(C_word t0,C_word t1){
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
C_word ab[63],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5374,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t3=(C_word)C_a_i_cons(&a,2,lf[498],t2);
t4=(C_word)C_a_i_list(&a,2,lf[499],lf[500]);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
t6=(C_word)C_a_i_list(&a,2,lf[501],((C_word*)t0)[4]);
t7=(C_word)C_a_i_list(&a,2,lf[502],t6);
t8=(C_word)C_a_i_list(&a,2,lf[35],((C_word*)t0)[4]);
t9=(C_word)C_a_i_list(&a,2,lf[424],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,((C_word*)t0)[3]);
t11=(C_word)C_a_i_cons(&a,2,t1,t10);
t12=(C_word)C_a_i_cons(&a,2,t7,t11);
t13=(C_word)C_a_i_cons(&a,2,lf[503],t12);
t14=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,(C_word)C_a_i_list(&a,4,lf[504],t3,t5,t13));}

/* k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1371,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1374,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5307,a[2]=lf[496],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[497],t3);}

/* a5306 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5307(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+39)){
C_save_and_reclaim((void*)tr3r,(void*)f_5307r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5307r(t0,t1,t2,t3);}}

static void C_ccall f_5307r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(39);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cdr(t2);
t6=(C_word)C_a_i_cons(&a,2,t5,t3);
t7=(C_word)C_a_i_cons(&a,2,lf[3],t6);
t8=(C_word)C_a_i_list(&a,2,t4,t7);
t9=(C_word)C_a_i_list(&a,1,t8);
t10=(C_word)C_i_car(t2);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_list(&a,3,lf[495],t9,t10));}
else{
t4=(C_word)C_a_i_cons(&a,2,t2,t3);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,3,lf[495],t5,t2));}}

/* k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1374,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1377,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5247,a[2]=lf[493],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   ##sys#register-macro */
t4=C_retrieve(lf[494]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[491],t3);}

/* a5246 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5247(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_5247r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_5247r(t0,t1,t2,t3);}}

static void C_ccall f_5247r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(C_word)C_i_nullp(t3);
t5=(C_truep(t4)?lf[486]:t3);
t6=(C_word)C_i_pairp(t2);
t7=(C_truep(t6)?(C_word)C_i_car(t2):t2);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5257,a[2]=t7,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t9=(C_word)C_i_cdr(t2);
t10=(C_word)C_a_i_cons(&a,2,t9,t5);
t11=t8;
f_5257(t11,(C_word)C_a_i_cons(&a,2,lf[3],t10));}
else{
t9=t8;
f_5257(t9,(C_word)C_i_car(t5));}}

/* k5255 in a5246 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_5257(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5257,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5260,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5276,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 52   eval */
t4=C_retrieve(lf[79]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t1);}
else{
/* csi.scm: 52   syntax-error */
t3=C_retrieve(lf[490]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[491],lf[492],((C_word*)t0)[2]);}}

/* k5274 in k5255 in a5246 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_5260(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(0),t1));}

/* k5258 in k5255 in a5246 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5260(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5260,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(C_retrieve(lf[487]))?(C_word)C_a_i_list(&a,3,lf[488],((C_word*)t0)[3],((C_word*)t0)[2]):lf[489]));}

/* k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1377,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1380,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   register-feature! */
t3=C_retrieve(lf[429]);
((C_proc8)C_retrieve_proc(t3))(8,t3,t2,lf[480],lf[481],lf[482],lf[483],lf[484],lf[485]);}

/* k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1380(C_word c,C_word t0,C_word t1){
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
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1380,2,t0,t1);}
t2=C_mutate(&lf[13],lf[14]);
t3=C_mutate(&lf[15],lf[16]);
t4=C_mutate(&lf[17],lf[18]);
t5=C_set_block_item(lf[19],0,C_fix(2048));
t6=(C_word)C_a_i_cons(&a,2,lf[20],C_retrieve(lf[21]));
t7=C_mutate((C_word*)lf[21]+1,t6);
t8=C_mutate((C_word*)lf[22]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1390,a[2]=lf[26],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[27]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1402,a[2]=lf[31],tmp=(C_word)a,a+=3,tmp));
t10=*((C_word*)lf[32]+1);
t11=*((C_word*)lf[33]+1);
t12=C_retrieve(lf[34]);
t13=C_mutate((C_word*)lf[34]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1412,a[2]=t12,a[3]=lf[38],tmp=(C_word)a,a+=4,tmp));
t14=C_mutate((C_word*)lf[39]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1441,a[2]=lf[40],tmp=(C_word)a,a+=3,tmp));
t15=C_retrieve(lf[41]);
t16=*((C_word*)lf[42]+1);
t17=C_mutate((C_word*)lf[43]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1451,a[2]=t15,a[3]=t16,a[4]=lf[45],tmp=(C_word)a,a+=5,tmp));
t18=C_set_block_item(lf[46],0,C_SCHEME_FALSE);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1483,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 146  make-string */
t20=*((C_word*)lf[328]+1);
((C_proc3)C_retrieve_proc(t20))(3,t20,t19,C_fix(256));}

/* k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1483(C_word c,C_word t0,C_word t1){
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
C_word ab[55],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1483,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1502,a[2]=lf[50],tmp=(C_word)a,a+=3,tmp);
t3=C_mutate((C_word*)lf[51]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1550,a[2]=t1,a[3]=t2,a[4]=lf[59],tmp=(C_word)a,a+=5,tmp));
t4=C_SCHEME_UNDEFINED;
t5=(C_word)C_a_i_vector(&a,32,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4,t4);
t6=C_mutate((C_word*)lf[60]+1,t5);
t7=C_set_block_item(lf[36],0,C_fix(1));
t8=C_retrieve(lf[61]);
t9=C_mutate((C_word*)lf[62]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1670,a[2]=t8,a[3]=lf[64],tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[37]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1709,a[2]=lf[67],tmp=(C_word)a,a+=3,tmp));
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1734,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t12=C_retrieve(lf[226]);
t13=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5241,a[2]=t12,a[3]=lf[478],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 198  repl-prompt */
t14=C_retrieve(lf[479]);
((C_proc3)C_retrieve_proc(t14))(3,t14,t11,t13);}

/* a5240 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5241,2,t0,t1);}
/* csi.scm: 201  sprintf */
t2=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t2))(4,t2,t1,lf[477],C_retrieve(lf[36]));}

/* k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1734,2,t0,t1);}
t2=C_mutate((C_word*)lf[68]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1736,a[2]=lf[71],tmp=(C_word)a,a+=3,tmp));
t3=C_set_block_item(lf[72],0,C_SCHEME_FALSE);
t4=C_retrieve(lf[73]);
t5=C_mutate((C_word*)lf[73]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1749,a[2]=t4,a[3]=lf[74],tmp=(C_word)a,a+=4,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1763,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 213  make-hash-table */
t7=C_retrieve(lf[476]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,*((C_word*)lf[140]+1));}

/* k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1763(C_word c,C_word t0,C_word t1){
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
C_word ab[40],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1763,2,t0,t1);}
t2=C_mutate(&lf[75],t1);
t3=C_retrieve(lf[76]);
t4=C_mutate((C_word*)lf[77]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1765,a[2]=t3,a[3]=lf[78],tmp=(C_word)a,a+=4,tmp));
t5=C_retrieve(lf[79]);
t6=C_retrieve(lf[80]);
t7=*((C_word*)lf[33]+1);
t8=C_retrieve(lf[81]);
t9=*((C_word*)lf[82]+1);
t10=C_retrieve(lf[83]);
t11=C_retrieve(lf[84]);
t12=*((C_word*)lf[85]+1);
t13=*((C_word*)lf[23]+1);
t14=*((C_word*)lf[86]+1);
t15=C_retrieve(lf[55]);
t16=C_retrieve(lf[87]);
t17=C_retrieve(lf[88]);
t18=*((C_word*)lf[89]+1);
t19=*((C_word*)lf[90]+1);
t20=C_mutate((C_word*)lf[91]+1,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1806,a[2]=t10,a[3]=t8,a[4]=t13,a[5]=t16,a[6]=t19,a[7]=t6,a[8]=t11,a[9]=t15,a[10]=t5,a[11]=t7,a[12]=t17,a[13]=lf[179],tmp=(C_word)a,a+=14,tmp));
t21=C_mutate((C_word*)lf[139]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2335,a[2]=lf[181],tmp=(C_word)a,a+=3,tmp));
t22=C_set_block_item(lf[92],0,C_fix(0));
t23=lf[124]=C_SCHEME_END_OF_LIST;;
t24=lf[127]=C_SCHEME_END_OF_LIST;;
t25=C_mutate(&lf[182],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2376,a[2]=lf[185],tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[132]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2404,a[2]=lf[190],tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[130]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2427,a[2]=lf[193],tmp=(C_word)a,a+=3,tmp));
t28=C_retrieve(lf[87]);
t29=C_retrieve(lf[194]);
t30=C_retrieve(lf[195]);
t31=*((C_word*)lf[196]+1);
t32=C_mutate((C_word*)lf[103]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2821,a[2]=t31,a[3]=t30,a[4]=t29,a[5]=t28,a[6]=lf[222],tmp=(C_word)a,a+=7,tmp));
t33=C_mutate(&lf[223],lf[224]);
t34=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2995,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 563  make-hash-table */
t35=C_retrieve(lf[476]);
((C_proc3)C_retrieve_proc(t35))(3,t35,t34,*((C_word*)lf[140]+1));}

/* k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2995(C_word c,C_word t0,C_word t1){
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
C_word ab[57],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2995,2,t0,t1);}
t2=C_mutate(&lf[225],t1);
t3=C_retrieve(lf[226]);
t4=C_retrieve(lf[87]);
t5=C_retrieve(lf[227]);
t6=*((C_word*)lf[85]+1);
t7=*((C_word*)lf[228]+1);
t8=*((C_word*)lf[229]+1);
t9=C_retrieve(lf[175]);
t10=C_retrieve(lf[83]);
t11=C_mutate((C_word*)lf[98]+1,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2997,a[2]=t9,a[3]=t10,a[4]=t3,a[5]=t7,a[6]=t6,a[7]=t8,a[8]=t5,a[9]=lf[316],tmp=(C_word)a,a+=10,tmp));
t12=C_retrieve(lf[76]);
t13=C_mutate((C_word*)lf[317]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3755,a[2]=t12,a[3]=lf[318],tmp=(C_word)a,a+=4,tmp));
t14=C_mutate((C_word*)lf[100]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3761,a[2]=lf[327],tmp=(C_word)a,a+=3,tmp));
t15=*((C_word*)lf[23]+1);
t16=*((C_word*)lf[48]+1);
t17=*((C_word*)lf[328]+1);
t18=*((C_word*)lf[183]+1);
t19=C_mutate((C_word*)lf[281]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3922,a[2]=t15,a[3]=t18,a[4]=t17,a[5]=t16,a[6]=lf[336],tmp=(C_word)a,a+=7,tmp));
t20=C_mutate((C_word*)lf[337]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4131,a[2]=lf[339],tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[340]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4145,a[2]=lf[341],tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[342]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4155,a[2]=lf[345],tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[346]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4183,a[2]=lf[350],tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[351]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4215,a[2]=lf[357],tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[358]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4260,a[2]=lf[361],tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[362]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4298,a[2]=lf[365],tmp=(C_word)a,a+=3,tmp));
t27=C_mutate(&lf[366],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4357,a[2]=lf[369],tmp=(C_word)a,a+=3,tmp));
t28=C_mutate(&lf[370],lf[371]);
t29=C_mutate(&lf[372],lf[373]);
t30=C_mutate(&lf[374],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4414,a[2]=lf[384],tmp=(C_word)a,a+=3,tmp));
t31=C_mutate((C_word*)lf[385]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4575,a[2]=lf[474],tmp=(C_word)a,a+=3,tmp));
t32=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5233,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 972  ##csi#run */
t33=C_retrieve(lf[385]);
((C_proc2)C_retrieve_proc(t33))(2,t33,t32);}

/* k5231 in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5233,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5236,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5239,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
t4=C_retrieve(lf[475]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k5237 in k5231 in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5239(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k5234 in k5231 in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4575,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4579,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5227,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 861  getenv */
t4=C_retrieve(lf[57]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[473]);}

/* k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5227(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5227,2,t0,t1);}
t2=(C_truep(t1)?t1:lf[457]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2722,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 485  open-input-string */
t4=C_retrieve(lf[404]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2727,a[2]=lf[460],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2747,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2750,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2752,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=lf[471],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 492  call-with-current-continuation */
t6=*((C_word*)lf[472]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}

/* a2751 in k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2752(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2752,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2758,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=lf[463],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2770,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[469],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 492  with-exception-handler */
t5=C_retrieve(lf[470]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t3,t4);}

/* a2769 in a2751 in k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2770(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2770,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2776,a[2]=((C_word*)t0)[3],a[3]=lf[466],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2809,a[2]=((C_word*)t0)[2],a[3]=lf[468],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 492  ##sys#call-with-values */
C_call_with_values(4,0,t1,t2,t3);}

/* a2808 in a2769 in a2751 in k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2809(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2809r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2809r(t0,t1,t2);}}

static void C_ccall f_2809r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2815,a[2]=t2,a[3]=lf[467],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 492  g677 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a2814 in a2808 in a2769 in a2751 in k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2815,2,t0,t1);}
C_apply_values(3,0,t1,((C_word*)t0)[2]);}

/* a2775 in a2769 in a2751 in k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2776(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2776,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2784,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 493  read */
t3=*((C_word*)lf[33]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2782 in a2775 in a2769 in a2751 in k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2784,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2786,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=lf[465],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2786(t5,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* do681 in k2782 in a2775 in a2769 in a2751 in k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_2786(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2786,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_eofp(t2))){
/* csi.scm: 495  reverse */
t4=*((C_word*)lf[464]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2803,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 493  read */
t5=*((C_word*)lf[33]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[2]);}}

/* k2801 in do681 in k2782 in a2775 in a2769 in a2751 in k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2803(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2803,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_2786(t3,((C_word*)t0)[2],t1,t2);}

/* a2757 in a2751 in k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2758(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2758,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2764,a[2]=((C_word*)t0)[3],a[3]=lf[462],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 492  g677 */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* a2763 in a2757 in a2751 in k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2764(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2764,2,t0,t1);}
/* csi.scm: 492  ##sys#error */
t2=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,t1,lf[461],((C_word*)t0)[2]);}

/* k2748 in k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k2745 in k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2726 in k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2727(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2727,3,t0,t1,t2);}
if(C_truep((C_word)C_i_stringp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2737,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 489  open-output-string */
t4=C_retrieve(lf[459]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}}

/* k2735 in a2726 in k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2737(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2737,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2740,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 490  write */
t3=*((C_word*)lf[86]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k2738 in k2735 in a2726 in k2720 in k5225 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2740(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 491  get-output-string */
t2=C_retrieve(lf[458]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4579(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4579,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4582,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5223,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 862  argv */
t4=C_retrieve(lf[456]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k5221 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5223(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(t1);
/* csi.scm: 862  canonicalize-args */
f_4414(((C_word*)t0)[2],t2);}

/* k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4582,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4585,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 863  member* */
f_4357(t4,lf[455],((C_word*)t3)[1]);}

/* k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4585,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4588,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 864  member* */
f_4357(t2,lf[454],((C_word*)((C_word*)t0)[4])[1]);}

/* k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4588(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4588,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4591,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep(t1)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5098,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_cdr(t1);
t5=(C_word)C_i_pairp(t4);
t6=(C_word)C_i_not(t5);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5162,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t6)){
t8=t7;
f_5162(t8,t6);}
else{
t8=(C_word)C_i_cadr(t1);
t9=(C_word)C_i_string_length(t8);
t10=(C_word)C_i_zerop(t9);
if(C_truep(t10)){
t11=t7;
f_5162(t11,t10);}
else{
t11=(C_word)C_i_cadr(t1);
t12=(C_word)C_i_string_ref(t11,C_fix(0));
t13=t7;
f_5162(t13,(C_word)C_eqp(C_make_character(45),t12));}}}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5202,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5215,a[2]=((C_word*)t0)[5],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 877  canonicalize-args */
f_4414(t4,((C_word*)t0)[2]);}}

/* k5213 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 877  append */
t2=*((C_word*)lf[303]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k5200 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=(C_word)C_i_member(lf[453],((C_word*)((C_word*)t0)[3])[1]);
t4=((C_word*)t0)[2];
f_4591(t4,(C_truep(t3)?(C_word)C_i_set_cdr(t3,C_SCHEME_END_OF_LIST):C_SCHEME_FALSE));}

/* k5160 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_5162(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* csi.scm: 869  ##sys#error */
t2=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],lf[452]);}
else{
t2=((C_word*)t0)[2];
f_5098(2,t2,C_SCHEME_UNDEFINED);}}

/* k5096 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5098,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5101,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cddr(((C_word*)t0)[3]);
/* csi.scm: 870  command-line-arguments */
t4=C_retrieve(lf[406]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* k5099 in k5096 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5101,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5104,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 871  register-feature! */
t3=C_retrieve(lf[429]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[451]);}

/* k5102 in k5099 in k5096 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5104,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
t3=(C_word)C_i_set_cdr(t2,C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5113,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5148,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 873  software-type */
t6=C_retrieve(lf[211]);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k5146 in k5102 in k5099 in k5096 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5148,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[449]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5144,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 873  build-platform */
t4=C_retrieve(lf[209]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}
else{
t3=((C_word*)t0)[2];
f_5113(t3,C_SCHEME_FALSE);}}

/* k5142 in k5146 in k5102 in k5099 in k5096 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5144(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(t1,lf[450]);
t3=((C_word*)t0)[2];
f_5113(t3,(C_word)C_i_not(t2));}

/* k5111 in k5102 in k5099 in k5096 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_5113(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5113,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5116,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(((C_word*)t0)[3]);
/* csi.scm: 874  ##csi#lookup-script-file */
t4=C_retrieve(lf[51]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}
else{
t2=((C_word*)t0)[2];
f_4591(t2,C_SCHEME_UNDEFINED);}}

/* k5114 in k5111 in k5102 in k5099 in k5096 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
f_4591(t3,(C_word)C_i_set_car(t2,t1));}
else{
t2=((C_word*)t0)[2];
f_4591(t2,C_SCHEME_FALSE);}}

/* k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4591(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4591,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4594,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 880  member* */
f_4357(t2,lf[448],((C_word*)((C_word*)t0)[5])[1]);}

/* k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4594,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4597,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[4])){
t3=t2;
f_4597(t3,((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5092,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 881  member* */
f_4357(t3,lf[447],((C_word*)((C_word*)t0)[5])[1]);}}

/* k5090 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5092(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_4597(t2,(C_truep(t1)?t1:((C_word*)t0)[2]));}

/* k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4597(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4597,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4600,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(((C_word*)t0)[5])){
t3=t2;
f_4600(t3,((C_word*)t0)[5]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5086,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 882  member* */
f_4357(t3,lf[446],((C_word*)((C_word*)t0)[6])[1]);}}

/* k5084 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_4600(t2,(C_truep(t1)?t1:((C_word*)t0)[2]));}

/* k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4600(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4600,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4603,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5076,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5080,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 883  getenv */
t5=C_retrieve(lf[57]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[445]);}

/* k5078 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?t1:lf[443]);
/* csi.scm: 883  string-split */
t3=C_retrieve(lf[55]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t2,lf[444]);}

/* k5074 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve(lf[43]),t1);}

/* k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4603(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4603,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4605,a[2]=((C_word*)t0)[7],a[3]=lf[388],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4690,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[5],a[9]=((C_word*)t0)[6],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5066,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 900  member* */
f_4357(t4,lf[442],((C_word*)((C_word*)t0)[7])[1]);}

/* k5064 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5066,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5069,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 901  ##csi#print-usage */
t3=C_retrieve(lf[22]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
f_4690(2,t2,C_SCHEME_UNDEFINED);}}

/* k5067 in k5064 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 902  exit */
t2=C_retrieve(lf[93]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4690,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5057,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 903  member* */
f_4357(t3,lf[441],((C_word*)((C_word*)t0)[6])[1]);}

/* k5055 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5057,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5060,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 904  ##csi#print-banner */
t3=C_retrieve(lf[27]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=((C_word*)t0)[2];
f_4693(2,t2,C_SCHEME_UNDEFINED);}}

/* k5058 in k5055 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 905  exit */
t2=C_retrieve(lf[93]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4693,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4696,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_word)C_i_member(lf[440],((C_word*)((C_word*)t0)[6])[1]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5047,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5054,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 907  chicken-version */
t5=C_retrieve(lf[30]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}
else{
t3=t2;
f_4696(2,t3,C_SCHEME_UNDEFINED);}}

/* k5052 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 907  print */
t2=*((C_word*)lf[28]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k5045 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 908  exit */
t2=C_retrieve(lf[93]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4696,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4699,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5034,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 909  member* */
f_4357(t3,lf[439],((C_word*)((C_word*)t0)[6])[1]);}

/* k5032 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5034(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5034,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5037,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_5037(2,t3,C_SCHEME_UNDEFINED);}
else{
/* csi.scm: 910  display */
t3=*((C_word*)lf[23]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[438]);}}
else{
t2=((C_word*)t0)[3];
f_4699(t2,C_SCHEME_UNDEFINED);}}

/* k5035 in k5032 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5037(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_set_block_item(lf[437],0,C_SCHEME_FALSE);
t3=((C_word*)t0)[2];
f_4699(t3,t2);}

/* k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4699(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4699,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4702,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_4702(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5028,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 913  load-verbose */
t4=C_retrieve(lf[436]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_SCHEME_TRUE);}}

/* k5026 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5028(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 914  ##csi#print-banner */
t2=C_retrieve(lf[27]);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4702,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4705,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5013,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 915  member* */
f_4357(t3,lf[435],((C_word*)((C_word*)t0)[6])[1]);}

/* k5011 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5013(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5013,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5016,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=t2;
f_5016(2,t3,C_SCHEME_UNDEFINED);}
else{
/* csi.scm: 916  display */
t3=*((C_word*)lf[23]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[434]);}}
else{
t2=((C_word*)t0)[3];
f_4705(2,t2,C_SCHEME_UNDEFINED);}}

/* k5014 in k5011 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5016(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5016,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5019,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 917  register-feature! */
t3=C_retrieve(lf[429]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[433]);}

/* k5017 in k5014 in k5011 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5019(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 918  case-sensitive */
t2=C_retrieve(lf[432]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4708,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5010,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 919  collect-options */
t4=((C_word*)t0)[2];
f_4605(t4,t3,lf[431]);}

/* k5008 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve(lf[429]),t1);}

/* k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5006,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 920  collect-options */
t4=((C_word*)t0)[2];
f_4605(t4,t3,lf[430]);}

/* k5004 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve(lf[429]),t1);}

/* k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4715,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4986,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4990,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5002,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 923  collect-options */
t6=((C_word*)t0)[2];
f_4605(t6,t5,lf[428]);}

/* k5000 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_5002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve(lf[43]),t1);}

/* k4988 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4990,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4994,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4998,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 924  collect-options */
t4=((C_word*)t0)[2];
f_4605(t4,t3,lf[427]);}

/* k4996 in k4988 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve(lf[43]),t1);}

/* k4992 in k4988 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 923  append */
t2=*((C_word*)lf[303]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,C_retrieve(lf[208]),((C_word*)t0)[2]);}

/* k4984 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 922  ##csi#deldups */
t2=C_retrieve(lf[362]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[426]+1));}

/* k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4715(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4715,2,t0,t1);}
t2=C_mutate((C_word*)lf[208]+1,t1);
t3=(C_word)C_a_i_cons(&a,2,lf[389],C_retrieve(lf[21]));
t4=C_mutate((C_word*)lf[21]+1,t3);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4722,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 929  provide */
t6=C_retrieve(lf[424]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,lf[425]);}

/* k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4722,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4725,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(C_word)C_i_cdr(((C_word*)t0)[2]);
if(C_truep((C_word)C_i_pairp(t3))){
t4=(C_word)C_i_cadr(((C_word*)t0)[2]);
if(C_truep((C_word)C_i_string_equal_p(lf[416],t4))){
/* csi.scm: 934  keyword-style */
t5=C_retrieve(lf[417]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t2,lf[418]);}
else{
t5=(C_word)C_i_cadr(((C_word*)t0)[2]);
if(C_truep((C_word)C_i_string_equal_p(lf[419],t5))){
/* csi.scm: 936  keyword-style */
t6=C_retrieve(lf[417]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t2,lf[420]);}
else{
t6=(C_word)C_i_cadr(((C_word*)t0)[2]);
if(C_truep((C_word)C_i_string_equal_p(lf[421],t6))){
/* csi.scm: 938  keyword-style */
t7=C_retrieve(lf[417]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t2,lf[422]);}
else{
t7=t2;
f_4725(2,t7,C_SCHEME_UNDEFINED);}}}}
else{
/* csi.scm: 932  ##sys#error */
t4=*((C_word*)lf[65]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,lf[423]);}}
else{
t3=t2;
f_4725(2,t3,C_SCHEME_UNDEFINED);}}

/* k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4725,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4728,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4920,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 939  member* */
f_4357(t3,lf[415],((C_word*)((C_word*)t0)[2])[1]);}

/* k4918 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4920,2,t0,t1);}
t2=(C_truep(t1)?t1:((C_word*)t0)[3]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_4728(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4652,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 893  ##sys#string-append */
t4=C_retrieve(lf[413]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[414],lf[17]);}}

/* k4650 in k4918 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4652(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4652,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4658,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 894  file-exists? */
t3=C_retrieve(lf[47]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k4656 in k4650 in k4918 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4658,2,t0,t1);}
if(C_truep(t1)){
/* csi.scm: 895  load */
t2=C_retrieve(lf[107]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4664,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4684,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 896  getenv */
t4=C_retrieve(lf[57]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[412]);}}

/* k4682 in k4656 in k4650 in k4918 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?t1:lf[411]);
/* csi.scm: 896  ##csi#chop-separator */
t3=C_retrieve(lf[43]);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}

/* k4662 in k4656 in k4650 in k4918 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4664,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4667,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_a_i_string(&a,1,C_retrieve(lf[41]));
/* csi.scm: 897  string-append */
t4=*((C_word*)lf[48]+1);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,t1,t3,lf[17]);}

/* k4665 in k4662 in k4656 in k4650 in k4918 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4667(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4667,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4673,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 898  file-exists? */
t3=C_retrieve(lf[47]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k4671 in k4665 in k4662 in k4656 in k4650 in k4918 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* csi.scm: 899  load */
t2=C_retrieve(lf[107]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_4728(2,t2,C_SCHEME_UNDEFINED);}}

/* k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4728,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4733,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=((C_word*)t0)[5],a[5]=lf[410],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_4733(t5,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4733(C_word t0,C_word t1,C_word t2){
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
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4733,NULL,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)t3)[1]))){
if(C_truep(((C_word*)t0)[4])){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4746,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 943  repl */
t5=C_retrieve(lf[390]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}}
else{
t4=(C_word)C_i_car(((C_word*)t3)[1]);
t5=(C_word)C_i_string_length(t4);
t6=(C_word)C_i_member(t4,lf[391]);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4761,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t6)){
t8=t7;
f_4761(2,t8,t6);}
else{
if(C_truep((C_truep((C_word)C_i_equalp(t4,lf[392]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t4,lf[393]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t4,lf[394]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t4,lf[395]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t4,lf[396]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t4,lf[397]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))){
t8=(C_word)C_i_cdr(((C_word*)t3)[1]);
t9=C_set_block_item(t3,0,t8);
t10=t7;
f_4761(2,t10,t9);}
else{
t8=(C_word)C_i_string_equal_p(lf[398],t4);
t9=(C_truep(t8)?t8:(C_word)C_i_string_equal_p(lf[399],t4));
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4790,a[2]=t7,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4806,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
t12=(C_word)C_i_cadr(((C_word*)t3)[1]);
/* csi.scm: 954  string->symbol */
t13=*((C_word*)lf[137]+1);
((C_proc3)C_retrieve_proc(t13))(3,t13,t11,t12);}
else{
t10=(C_word)C_i_string_equal_p(lf[401],t4);
t11=(C_truep(t10)?t10:(C_word)C_i_string_equal_p(lf[402],t4));
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4822,a[2]=t7,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t13=(C_word)C_i_cadr(((C_word*)t3)[1]);
/* csi.scm: 957  open-input-string */
t14=C_retrieve(lf[404]);
((C_proc3)C_retrieve_proc(t14))(3,t14,t12,t13);}
else{
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4859,a[2]=((C_word*)t0)[2],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 963  load */
t13=C_retrieve(lf[107]);
((C_proc3)C_retrieve_proc(t13))(3,t13,t12,t4);}}}}}}

/* k4857 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4859,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4865,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(((C_word*)t0)[2])){
t3=(C_word)C_i_car(((C_word*)t0)[2]);
t4=t2;
f_4865(t4,(C_word)C_i_string_equal_p(lf[409],t3));}
else{
t3=t2;
f_4865(t3,C_SCHEME_FALSE);}}

/* k4863 in k4857 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4865(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4865,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4870,a[2]=lf[407],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4880,a[2]=lf[408],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 965  call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}
else{
t2=((C_word*)t0)[2];
f_4761(2,t2,C_SCHEME_UNDEFINED);}}

/* a4879 in k4863 in k4857 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4880(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2rv,(void*)f_4880r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_4880r(t0,t1,t2);}}

static void C_ccall f_4880r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4891,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_notvemptyp(t2))){
t4=(C_word)C_i_vector_ref(t2,C_fix(0));
t5=t3;
f_4891(t5,(C_word)C_fixnump(t4));}
else{
t4=t3;
f_4891(t4,C_SCHEME_FALSE);}}

/* k4889 in a4879 in k4863 in k4857 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4891(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?(C_word)C_i_vector_ref(((C_word*)t0)[3],C_fix(0)):C_fix(0));
/* csi.scm: 967  exit */
t3=C_retrieve(lf[93]);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}

/* a4869 in k4863 in k4857 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4878,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 965  command-line-arguments */
t3=C_retrieve(lf[406]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k4876 in a4869 in k4863 in k4857 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* main */
t2=C_retrieve(lf[405]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4820 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4822(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4822,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4825,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4833,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 958  read */
t4=*((C_word*)lf[33]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t1);}

/* k4831 in k4820 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4833,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4835,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=lf[403],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4835(t5,((C_word*)t0)[2],t1);}

/* do1001 in k4831 in k4820 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4835(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4835,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_eofp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4845,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 960  eval */
t4=C_retrieve(lf[79]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}}

/* k4843 in do1001 in k4831 in k4820 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4845,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4852,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 958  read */
t3=*((C_word*)lf[33]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k4850 in k4843 in do1001 in k4831 in k4820 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
f_4835(t2,((C_word*)t0)[2],t1);}

/* k4823 in k4820 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_4761(2,t4,t3);}

/* k4804 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4806,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[35],t1);
t3=(C_word)C_a_i_list(&a,2,lf[400],t2);
/* csi.scm: 954  eval */
t4=C_retrieve(lf[79]);
((C_proc3)C_retrieve_proc(t4))(3,t4,((C_word*)t0)[2],t3);}

/* k4788 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_4761(2,t4,t3);}

/* k4759 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[4])[1]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_4733(t3,((C_word*)t0)[2],t2);}

/* k4744 in do987 in k4726 in k4723 in k4720 in k4713 in k4709 in k4706 in k4703 in k4700 in k4697 in k4694 in k4691 in k4688 in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 944  ##sys#write-char-0 */
t2=C_retrieve(lf[187]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(10),*((C_word*)lf[188]+1));}

/* collect-options in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4605(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4605,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4611,a[2]=t4,a[3]=t2,a[4]=lf[387],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_4611(t6,t1,((C_word*)((C_word*)t0)[2])[1]);}

/* loop in collect-options in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4611(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(4);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_4611,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_member(((C_word*)t0)[3],t2);
if(C_truep(t3)){
t4=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t4))){
/* csi.scm: 889  ##sys#error */
t5=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,lf[386],((C_word*)t0)[3]);}
else{
t5=(C_word)C_i_cadr(t3);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4638,a[2]=t5,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_i_cddr(t3);
/* csi.scm: 890  loop */
t9=t6;
t10=t7;
t1=t9;
t2=t10;
goto loop;}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}}

/* k4636 in loop in collect-options in k4601 in k4598 in k4595 in k4592 in k4589 in k4586 in k4583 in k4580 in k4577 in ##csi#run in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4638(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4638,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* canonicalize-args in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4414(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4414,NULL,2,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4420,a[2]=t4,a[3]=lf[383],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_4420(t6,t1,t2);}

/* loop in canonicalize-args in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4420(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4420,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_string_equal_p(lf[375],t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(C_word)C_i_string_equal_p(lf[376],t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4445,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t4)){
t6=t5;
f_4445(t6,t4);}
else{
t6=(C_word)C_i_string_equal_p(lf[381],t3);
t7=t5;
f_4445(t7,(C_truep(t6)?t6:(C_word)C_i_string_equal_p(lf[382],t3)));}}}}

/* k4443 in loop in canonicalize-args in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4445(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4445,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4451,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[3]);
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(2)))){
t4=(C_word)C_eqp(C_make_character(45),(C_word)C_subchar(((C_word*)t0)[3],C_fix(0)));
if(C_truep(t4)){
t5=(C_word)C_i_member(((C_word*)t0)[3],lf[373]);
t6=t2;
f_4451(t6,(C_word)C_i_not(t5));}
else{
t5=t2;
f_4451(t5,C_SCHEME_FALSE);}}
else{
t4=t2;
f_4451(t4,C_SCHEME_FALSE);}}}

/* k4449 in k4443 in loop in canonicalize-args in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4451(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_4451,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_eqp(C_make_character(58),(C_word)C_subchar(((C_word*)t0)[5],C_fix(1)));
if(C_truep(t2)){
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* csi.scm: 847  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4420(t4,((C_word*)t0)[2],t3);}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4467,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4501,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 848  substring */
t5=*((C_word*)lf[42]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[5],C_fix(1));}}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4508,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* csi.scm: 852  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4420(t4,t2,t3);}}

/* k4506 in k4449 in k4443 in loop in canonicalize-args in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4508(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4508,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k4499 in k4449 in k4443 in loop in canonicalize-args in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 848  string->list */
t2=*((C_word*)lf[380]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k4465 in k4449 in k4443 in loop in canonicalize-args in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4467,2,t0,t1);}
t2=t1;
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4549,a[2]=lf[377],tmp=(C_word)a,a+=3,tmp);
t4=f_4549(t2);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4480,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4490,a[2]=lf[378],tmp=(C_word)a,a+=3,tmp);
/* map */
t7=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t1);}
else{
/* csi.scm: 851  ##sys#error */
t5=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[5],lf[379],((C_word*)t0)[2]);}}

/* a4489 in k4465 in k4449 in k4443 in loop in canonicalize-args in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4490(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4490,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_string(&a,2,C_make_character(45),t2));}

/* k4478 in k4465 in k4449 in k4443 in loop in canonicalize-args in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4480,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4484,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* csi.scm: 850  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4420(t4,t2,t3);}

/* k4482 in k4478 in k4465 in k4449 in k4443 in loop in canonicalize-args in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 850  append */
t2=*((C_word*)lf[303]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* loop in k4465 in k4449 in k4443 in loop in canonicalize-args in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static C_word C_fcall f_4549(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
t2=(C_word)C_i_nullp(t1);
if(C_truep(t2)){
return(t2);}
else{
t3=(C_word)C_i_car(t1);
if(C_truep((C_truep((C_word)C_eqp(t3,C_make_character(107)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(115)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(118)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(104)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(68)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(101)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(105)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(82)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(98)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(110)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(113)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(119)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(45)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(73)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_SCHEME_FALSE))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_SCHEME_FALSE))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))))))))))))){
t4=(C_word)C_i_cdr(t1);
t6=t4;
t1=t6;
goto loop;}
else{
return(C_SCHEME_FALSE);}}}

/* member* in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4357(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4357,NULL,3,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4363,a[2]=t2,a[3]=t5,a[4]=lf[368],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4363(t7,t1,t3);}

/* loop in member* in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4363(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4363,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4375,a[2]=t4,a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=lf[367],tmp=(C_word)a,a+=6,tmp));
t6=((C_word*)t4)[1];
f_4375(t6,t1,((C_word*)t0)[2]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* find in loop in member* in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4375(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a;
loop:
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4375,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* csi.scm: 824  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_4363(t4,t1,t3);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_car(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_equalp(t3,t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[4]);}
else{
t5=(C_word)C_i_cdr(t2);
/* csi.scm: 826  find */
t8=t1;
t9=t5;
t1=t8;
t2=t9;
goto loop;}}}

/* ##csi#deldups in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4298(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_4298r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4298r(t0,t1,t2,t3);}}

static void C_ccall f_4298r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4302,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_4302(2,t5,*((C_word*)lf[364]+1));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_4302(2,t6,(C_word)C_i_car(t3));}
else{
/* csi.scm: 812  ##sys#error */
t6=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k4300 in ##csi#deldups in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4302,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4307,a[2]=t1,a[3]=t3,a[4]=lf[363],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_4307(t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* recur in k4300 in ##csi#deldups in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4307(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4307,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4323,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4336,a[2]=t5,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 817  ##csi#del */
t7=C_retrieve(lf[139]);
((C_proc5)C_retrieve_proc(t7))(5,t7,t6,t3,t4,((C_word*)t0)[2]);}}

/* k4334 in recur in k4300 in ##csi#deldups in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4336(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 817  recur */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4307(t2,((C_word*)t0)[2],t1);}

/* k4321 in recur in k4300 in ##csi#deldups in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4323,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[5],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?((C_word*)t0)[3]:(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1)));}

/* ##csi#symbols-matching in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4260(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4260,3,t0,t1,t2);}
t3=(C_word)C_a_i_cons(&a,2,C_fix(-1),C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4267,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 799  ##csi#find-symbol-table */
t5=C_retrieve(lf[337]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[360]);}

/* k4265 in ##csi#symbols-matching in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4267,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4272,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=lf[359],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_4272(t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* loop in k4265 in ##csi#symbols-matching in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4272(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4272,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4276,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 801  ##csi#enum-symbols! */
t4=C_retrieve(lf[340]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4274 in loop in k4265 in ##csi#symbols-matching in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4276,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4289,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4296,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 803  symbol->string */
t4=*((C_word*)lf[352]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t1);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[5]);}}

/* k4294 in k4274 in loop in k4265 in ##csi#symbols-matching in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 803  string-search */
t2=C_retrieve(lf[353]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4287 in k4274 in loop in k4265 in ##csi#symbols-matching in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4289,2,t0,t1);}
t2=(C_truep(t1)?(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]):((C_word*)t0)[4]);
/* csi.scm: 803  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4272(t3,((C_word*)t0)[2],t2);}

/* ##csi#name-of-symbols-starting-with in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4215(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4215,3,t0,t1,t2);}
t3=(C_word)C_a_i_cons(&a,2,C_fix(-1),C_SCHEME_END_OF_LIST);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4222,a[2]=t2,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 787  ##csi#find-symbol-table */
t5=C_retrieve(lf[337]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[356]);}

/* k4220 in ##csi#name-of-symbols-starting-with in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4222,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4225,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 788  string-append */
t3=*((C_word*)lf[48]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[355],((C_word*)t0)[2]);}

/* k4223 in k4220 in ##csi#name-of-symbols-starting-with in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4225(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4225,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4230,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t3,a[6]=lf[354],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_4230(t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* loop in k4223 in k4220 in ##csi#name-of-symbols-starting-with in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4230(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4230,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4234,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 790  ##csi#enum-symbols! */
t4=C_retrieve(lf[340]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4232 in loop in k4223 in k4220 in ##csi#name-of-symbols-starting-with in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4234,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4244,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4247,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4258,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 792  symbol->string */
t5=*((C_word*)lf[352]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t1);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* k4256 in k4232 in loop in k4223 in k4220 in ##csi#name-of-symbols-starting-with in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 792  string-search */
t2=C_retrieve(lf[353]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k4245 in k4232 in loop in k4223 in k4220 in ##csi#name-of-symbols-starting-with in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4247,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4254,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 793  symbol->string */
t3=*((C_word*)lf[352]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
f_4244(t2,((C_word*)t0)[3]);}}

/* k4252 in k4245 in k4232 in loop in k4223 in k4220 in ##csi#name-of-symbols-starting-with in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4254(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4254,2,t0,t1);}
t2=((C_word*)t0)[3];
f_4244(t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k4242 in k4232 in loop in k4223 in k4220 in ##csi#name-of-symbols-starting-with in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4244(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 792  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_4230(t2,((C_word*)t0)[2],t1);}

/* ##csi#oblist->strings in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4183,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_fix(-1),C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4190,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 778  ##csi#find-symbol-table */
t4=C_retrieve(lf[337]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[349]);}

/* k4188 in ##csi#oblist->strings in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4190,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4195,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=lf[348],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_4195(t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* loop in k4188 in ##csi#oblist->strings in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4195(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4195,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4199,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 780  ##csi#enum-symbols! */
t4=C_retrieve(lf[340]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4197 in loop in k4188 in ##csi#oblist->strings in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4199(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4199,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4213,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 782  ->string */
t3=C_retrieve(lf[347]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* k4211 in k4197 in loop in k4188 in ##csi#oblist->strings in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4213(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4213,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* csi.scm: 782  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4195(t3,((C_word*)t0)[2],t2);}

/* ##csi#oblist in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4155,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_fix(-1),C_SCHEME_END_OF_LIST);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4162,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 769  ##csi#find-symbol-table */
t4=C_retrieve(lf[337]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[344]);}

/* k4160 in ##csi#oblist in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4162(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4162,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4167,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=lf[343],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_4167(t5,((C_word*)t0)[2],C_SCHEME_END_OF_LIST);}

/* loop in k4160 in ##csi#oblist in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4167(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4167,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4171,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 771  ##csi#enum-symbols! */
t4=C_retrieve(lf[340]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4169 in loop in k4160 in ##csi#oblist in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4171(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4171,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* csi.scm: 773  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_4167(t3,((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[4]);}}

/* ##csi#enum-symbols! in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4145(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4145,4,t0,t1,t2,t3);}
t4=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)stub860(C_SCHEME_UNDEFINED,t4,t3));}

/* ##csi#find-symbol-table in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4131(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4131,3,t0,t1,t2);}
t3=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4136,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t5=(C_word)C_i_foreign_string_argumentp(t2);
/* ##sys#make-c-string */
t6=C_retrieve(lf[338]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t5=t4;
f_4136(2,t5,C_SCHEME_FALSE);}}

/* k4134 in ##csi#find-symbol-table in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub852(((C_word*)t0)[2],t1));}

/* ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3922(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[18],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3922,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3925,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=lf[329],tmp=(C_word)a,a+=5,tmp);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3954,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=t5,a[8]=t8,a[9]=t3,a[10]=lf[335],tmp=(C_word)a,a+=11,tmp));
t10=((C_word*)t8)[1];
f_3954(t10,t1,C_fix(0));}

/* do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_3954(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3954,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[9]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3964,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[7],a[9]=t1,a[10]=((C_word*)t0)[8],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4129,a[2]=((C_word*)t0)[7],a[3]=t3,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 738  justify */
t5=((C_word*)t0)[2];
f_3925(t5,t4,t2,C_fix(4),C_fix(10),C_make_character(32));}}

/* k4127 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 738  display */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3964,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3967,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
/* csi.scm: 739  write-char */
t3=((C_word*)t0)[6];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_make_character(58),((C_word*)t0)[8]);}

/* k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3967(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3967,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3970,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],tmp=(C_word)a,a+=10,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4039,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[2],a[6]=t4,a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[7],a[10]=lf[334],tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_4039(t6,t2,C_fix(0),((C_word*)t0)[11]);}

/* do819 in k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4039(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4039,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:(C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[9]));
if(C_truep(t5)){
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[9]))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4058,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 744  fxmod */
t7=*((C_word*)lf[333]+1);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[9],C_fix(16));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_FALSE);}}
else{
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4100,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=t3,a[10]=t2,tmp=(C_word)a,a+=11,tmp);
/* csi.scm: 749  write-char */
t7=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,C_make_character(32),((C_word*)t0)[7]);}}

/* k4098 in do819 in k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4100,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4103,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[10],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4118,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4122,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 750  ref */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[2],((C_word*)t0)[9]);}

/* k4120 in k4098 in do819 in k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 750  justify */
t2=((C_word*)t0)[3];
f_3925(t2,((C_word*)t0)[2],t1,C_fix(2),C_fix(16),C_make_character(48));}

/* k4116 in k4098 in do819 in k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4118(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 750  display */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4101 in k4098 in do819 in k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4103(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_4039(t4,((C_word*)t0)[2],t2,t3);}

/* k4056 in do819 in k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4058,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}
else{
t3=(C_word)C_fixnum_difference(C_fix(16),t1);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4076,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=lf[332],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_4076(t7,((C_word*)t0)[4],t3);}}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* do826 in k4056 in do819 in k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_4076(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4076,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4086,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 748  display */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,lf[331],((C_word*)t0)[2]);}}

/* k4084 in do826 in k4056 in do819 in k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4086(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_difference(((C_word*)t0)[4],C_fix(1));
t3=((C_word*)((C_word*)t0)[3])[1];
f_4076(t3,((C_word*)t0)[2],t2);}

/* k3968 in k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3970(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3970,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3973,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* csi.scm: 751  write-char */
t3=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_make_character(32),((C_word*)t0)[6]);}

/* k3971 in k3968 in k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3973(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3973,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3976,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],tmp=(C_word)a,a+=6,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3988,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=t4,a[7]=((C_word*)t0)[5],a[8]=lf[330],tmp=(C_word)a,a+=9,tmp));
t6=((C_word*)t4)[1];
f_3988(t6,t2,C_fix(0),((C_word*)t0)[9]);}

/* do834 in k3971 in k3968 in k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_3988(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3988,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_greater_or_equal_p(t2,C_fix(16));
t5=(C_truep(t4)?t4:(C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[7]));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4001,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,a[5]=((C_word*)t0)[6],a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* csi.scm: 755  ref */
t7=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[2],t3);}}

/* k3999 in do834 in k3971 in k3968 in k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4001,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4004,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_fixnum_greater_or_equal_p(t1,C_fix(32));
t4=(C_truep(t3)?(C_word)C_fixnum_lessp(t1,C_fix(128)):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_make_character((C_word)C_unfix(t1));
/* csi.scm: 757  write-char */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t2,t5,((C_word*)t0)[2]);}
else{
/* csi.scm: 758  write-char */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,C_make_character(46),((C_word*)t0)[2]);}}

/* k4002 in k3999 in do834 in k3971 in k3968 in k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_4004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
t4=((C_word*)((C_word*)t0)[3])[1];
f_3988(t4,((C_word*)t0)[2],t2,t3);}

/* k3974 in k3971 in k3968 in k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3976(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3976,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3979,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 759  ##sys#write-char-0 */
t3=C_retrieve(lf[187]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_make_character(10),((C_word*)t0)[2]);}

/* k3977 in k3974 in k3971 in k3968 in k3965 in k3962 in do809 in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3979(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(16));
t3=((C_word*)((C_word*)t0)[3])[1];
f_3954(t3,((C_word*)t0)[2],t2);}

/* justify in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_3925(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3925,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3929,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 730  number->string */
C_number_to_string(4,0,t6,t2,t4);}

/* k3927 in justify in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3929,2,t0,t1);}
t2=(C_word)C_block_size(t1);
if(C_truep((C_word)C_fixnum_lessp(t2,((C_word*)t0)[6]))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3945,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_fixnum_difference(((C_word*)t0)[6],t2);
/* csi.scm: 733  make-string */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t1);}}

/* k3943 in k3927 in justify in ##csi#hexdump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 733  string-append */
t2=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* ##csi#dump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3761(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_3761r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3761r(t0,t1,t2,t3);}}

static void C_ccall f_3761r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3763,a[2]=t2,a[3]=lf[324],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3869,a[2]=t4,a[3]=lf[325],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3874,a[2]=t5,a[3]=lf[326],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
/* def-len784796 */
t7=t6;
f_3874(t7,t1);}
else{
t7=(C_word)C_i_car(t3);
t8=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t8))){
/* def-out785794 */
t9=t5;
f_3869(t9,t1,t7);}
else{
t9=(C_word)C_i_car(t8);
t10=(C_word)C_i_cdr(t8);
if(C_truep((C_word)C_i_nullp(t10))){
/* body782787 */
t11=t4;
f_3763(t11,t1,t7,t9);}
else{
/* ##sys#error */
t11=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t1,lf[0],t10);}}}}

/* def-len784 in ##csi#dump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_3874(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3874,NULL,2,t0,t1);}
/* def-out785794 */
t2=((C_word*)t0)[2];
f_3869(t2,t1,C_SCHEME_FALSE);}

/* def-out785 in ##csi#dump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_3869(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3869,NULL,3,t0,t1,t2);}
/* body782787 */
t3=((C_word*)t0)[2];
f_3763(t3,t1,t2,*((C_word*)lf[188]+1));}

/* body782 in ##csi#dump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_3763(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3763,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3766,a[2]=t2,a[3]=lf[320],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_immp(((C_word*)t0)[2]))){
/* csi.scm: 712  ##sys#error */
t5=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,lf[100],lf[321],((C_word*)t0)[2]);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3788,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[2],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 713  ##sys#bytevector? */
t6=*((C_word*)lf[309]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[2]);}}

/* k3786 in body782 in ##csi#dump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3788(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3788,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3795,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[4]);
/* csi.scm: 713  bestlen */
t4=((C_word*)t0)[2];
f_3766(t4,t2,t3);}
else{
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[4]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3812,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[4]);
/* csi.scm: 714  bestlen */
t4=((C_word*)t0)[2];
f_3766(t4,t2,t3);}
else{
t2=(C_word)C_immp(((C_word*)t0)[4]);
t3=(C_truep(t2)?C_SCHEME_FALSE:(C_word)C_pointerp(((C_word*)t0)[4]));
if(C_truep(t3)){
/* csi.scm: 716  ##csi#hexdump */
t4=C_retrieve(lf[281]);
((C_proc6)C_retrieve_proc(t4))(6,t4,((C_word*)t0)[5],((C_word*)t0)[4],C_fix(32),*((C_word*)lf[322]+1),((C_word*)t0)[3]);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3831,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_structurep(((C_word*)t0)[4]))){
t5=(C_word)C_slot(((C_word*)t0)[4],C_fix(0));
t6=t4;
f_3831(t6,(C_word)C_i_assq(t5,C_retrieve2(lf[223],"bytevector-data")));}
else{
t5=t4;
f_3831(t5,C_SCHEME_FALSE);}}}}}

/* k3829 in k3786 in body782 in ##csi#dump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_3831(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3831,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3841,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_block_size(t2);
/* csi.scm: 719  bestlen */
t5=((C_word*)t0)[2];
f_3766(t5,t3,t4);}
else{
/* csi.scm: 720  ##sys#error */
t2=*((C_word*)lf[65]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],lf[100],lf[323],((C_word*)t0)[5]);}}

/* k3839 in k3829 in k3786 in body782 in ##csi#dump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 719  ##csi#hexdump */
t2=C_retrieve(lf[281]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,*((C_word*)lf[282]+1),((C_word*)t0)[2]);}

/* k3810 in k3786 in body782 in ##csi#dump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3812(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 714  ##csi#hexdump */
t2=C_retrieve(lf[281]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,*((C_word*)lf[282]+1),((C_word*)t0)[2]);}

/* k3793 in k3786 in body782 in ##csi#dump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 713  ##csi#hexdump */
t2=C_retrieve(lf[281]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,*((C_word*)lf[282]+1),((C_word*)t0)[2]);}

/* bestlen in body782 in ##csi#dump in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_3766(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3766,NULL,3,t0,t1,t2);}
if(C_truep(((C_word*)t0)[2])){
/* csi.scm: 711  min */
t3=*((C_word*)lf[319]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[2],t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* set-describer! in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3755(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3755,4,t0,t1,t2,t3);}
/* csi.scm: 701  hash-table-set! */
t4=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,C_retrieve2(lf[225],"describer-table"),t2,t3);}

/* ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2997(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+11)){
C_save_and_reclaim((void*)tr3r,(void*)f_2997r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2997r(t0,t1,t2,t3);}}

static void C_ccall f_2997r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(11);
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=t2,a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_3001(2,t5,*((C_word*)lf[188]+1));}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_3001(2,t6,(C_word)C_i_car(t3));}
else{
/* csi.scm: 575  ##sys#error */
t6=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3001,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3003,a[2]=((C_word*)t0)[9],a[3]=t1,a[4]=((C_word*)t0)[10],a[5]=lf[238],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3129,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,a[9]=t1,a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[9],a[12]=((C_word*)t0)[8],tmp=(C_word)a,a+=13,tmp);
if(C_truep((C_word)C_permanentp(((C_word*)t0)[9]))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3734,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 599  ##sys#block-address */
t5=C_retrieve(lf[315]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[9]);}
else{
t4=t3;
f_3129(2,t4,C_SCHEME_UNDEFINED);}}

/* k3732 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3734(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 599  fprintf */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[314],t1);}

/* k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3129(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3129,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3132,a[2]=((C_word*)t0)[12],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_charp(((C_word*)t0)[11]))){
t3=(C_word)C_fix((C_word)C_character_code(((C_word*)t0)[11]));
/* csi.scm: 602  fprintf */
t4=((C_word*)t0)[10];
((C_proc8)C_retrieve_proc(t4))(8,t4,t2,((C_word*)t0)[9],lf[239],((C_word*)t0)[11],t3,t3,t3);}
else{
switch(((C_word*)t0)[11]){
case C_SCHEME_TRUE:
/* csi.scm: 603  fprintf */
t3=((C_word*)t0)[10];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[9],lf[240]);
case C_SCHEME_FALSE:
/* csi.scm: 604  fprintf */
t3=((C_word*)t0)[10];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[9],lf[241]);
default:
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[11]))){
/* csi.scm: 605  fprintf */
t3=((C_word*)t0)[10];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[9],lf[242]);}
else{
if(C_truep((C_word)C_eofp(((C_word*)t0)[11]))){
/* csi.scm: 606  fprintf */
t3=((C_word*)t0)[10];
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[9],lf[243]);}
else{
t3=C_retrieve(lf[63]);
t4=(C_word)C_eqp(t3,((C_word*)t0)[11]);
if(C_truep(t4)){
/* csi.scm: 607  fprintf */
t5=((C_word*)t0)[10];
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,((C_word*)t0)[9],lf[244]);}
else{
if(C_truep((C_word)C_fixnump(((C_word*)t0)[11]))){
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3198,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=t2,a[5]=((C_word*)t0)[11],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 609  fprintf */
t6=((C_word*)t0)[10];
((C_proc8)C_retrieve_proc(t6))(8,t6,t5,((C_word*)t0)[9],lf[246],((C_word*)t0)[11],((C_word*)t0)[11],((C_word*)t0)[11],((C_word*)t0)[11]);}
else{
t5=(C_word)C_slot(lf[247],C_fix(0));
t6=(C_word)C_eqp(((C_word*)t0)[11],t5);
if(C_truep(t6)){
/* csi.scm: 614  fprintf */
t7=((C_word*)t0)[10];
((C_proc4)C_retrieve_proc(t7))(4,t7,t2,((C_word*)t0)[9],lf[248]);}
else{
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_3228,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[9],a[11]=t2,a[12]=((C_word*)t0)[10],tmp=(C_word)a,a+=13,tmp);
/* csi.scm: 615  ##sys#number? */
t8=C_retrieve(lf[313]);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,((C_word*)t0)[11]);}}}}}}}}

/* k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3228(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3228,2,t0,t1);}
if(C_truep(t1)){
/* csi.scm: 615  fprintf */
t2=((C_word*)t0)[12];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[11],((C_word*)t0)[10],lf[249],((C_word*)t0)[9]);}
else{
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[9]))){
/* csi.scm: 616  descseq */
t2=((C_word*)t0)[8];
f_3003(6,t2,((C_word*)t0)[11],lf[250],*((C_word*)lf[251]+1),((C_word*)t0)[7],C_fix(0));}
else{
if(C_truep((C_word)C_i_vectorp(((C_word*)t0)[9]))){
/* csi.scm: 617  descseq */
t2=((C_word*)t0)[8];
f_3003(6,t2,((C_word*)t0)[11],lf[252],*((C_word*)lf[251]+1),*((C_word*)lf[253]+1),C_fix(0));}
else{
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[9]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3258,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[10],a[4]=((C_word*)t0)[11],a[5]=((C_word*)t0)[12],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3291,a[2]=((C_word*)t0)[10],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 619  ##sys#symbol-has-toplevel-binding? */
t4=C_retrieve(lf[258]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[9]);}
else{
if(C_truep((C_word)C_i_listp(((C_word*)t0)[9]))){
/* csi.scm: 623  descseq */
t2=((C_word*)t0)[8];
f_3003(6,t2,((C_word*)t0)[11],lf[259],((C_word*)t0)[6],((C_word*)t0)[5],C_fix(0));}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[9]))){
t2=(C_word)C_i_car(((C_word*)t0)[9]);
t3=(C_word)C_i_cdr(((C_word*)t0)[9]);
/* csi.scm: 624  fprintf */
t4=((C_word*)t0)[12];
((C_proc6)C_retrieve_proc(t4))(6,t4,((C_word*)t0)[11],((C_word*)t0)[10],lf[260],t2,t3);}
else{
if(C_truep((C_word)C_i_closurep(((C_word*)t0)[9]))){
t2=(C_word)C_block_size(((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3335,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
if(C_truep((C_word)C_i_greaterp(t2,C_fix(3)))){
if(C_truep((C_word)C_i_memq(lf[264],C_retrieve(lf[21])))){
t4=(C_word)C_fixnum_difference(t2,C_fix(1));
t5=(C_word)C_slot(((C_word*)t0)[9],t4);
t6=t3;
f_3335(t6,(C_word)C_eqp(C_retrieve(lf[265]),t5));}
else{
t4=t3;
f_3335(t4,C_SCHEME_FALSE);}}
else{
t4=t3;
f_3335(t4,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3375,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[10],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[12],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
/* csi.scm: 634  port? */
t3=C_retrieve(lf[312]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[9]);}}}}}}}}

/* k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3375(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3375,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[8],C_fix(1));
t3=(C_truep(t2)?lf[266]:lf[267]);
t4=(C_word)C_slot(((C_word*)t0)[8],C_fix(7));
t5=(C_word)C_slot(((C_word*)t0)[8],C_fix(3));
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3394,a[2]=t5,a[3]=t4,a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* csi.scm: 640  ##sys#peek-unsigned-integer */
t7=C_retrieve(lf[263]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[8],C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3403,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_memq(lf[264],C_retrieve(lf[21])))){
/* csi.scm: 641  instance? */
t3=C_retrieve(lf[311]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[8]);}
else{
t3=t2;
f_3403(2,t3,C_SCHEME_FALSE);}}}

/* k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3403(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3403,2,t0,t1);}
if(C_truep(t1)){
/* csi.scm: 642  describe-object */
t2=C_retrieve(lf[261]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* csi.scm: 643  ##sys#locative? */
t3=C_retrieve(lf[310]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}}

/* k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3412,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3419,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 645  ##sys#peek-unsigned-integer */
t3=C_retrieve(lf[263]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[8],C_fix(0));}
else{
if(C_truep((C_word)C_pointerp(((C_word*)t0)[8]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3500,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 658  ##sys#peek-unsigned-integer */
t3=C_retrieve(lf[263]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[8],C_fix(0));}
else{
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3506,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* csi.scm: 659  ##sys#bytevector? */
t3=*((C_word*)lf[309]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[8]);}}}

/* k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3506(C_word c,C_word t0,C_word t1){
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
C_word ab[32],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3506,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_block_size(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3512,a[2]=((C_word*)t0)[6],a[3]=t2,a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 661  fprintf */
t4=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[6],lf[283],t2);}
else{
if(C_truep((C_word)C_lambdainfop(((C_word*)t0)[8]))){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3525,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 664  ##sys#lambda-info->string */
t3=C_retrieve(lf[285]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[8]);}
else{
if(C_truep((C_word)C_i_structurep(((C_word*)t0)[8],lf[286]))){
t2=(C_word)C_slot(((C_word*)t0)[8],C_fix(2));
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3537,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_eqp(t2,C_fix(1));
t5=(C_truep(t4)?lf[290]:lf[291]);
t6=(C_word)C_slot(((C_word*)t0)[8],C_fix(3));
/* csi.scm: 667  fprintf */
t7=((C_word*)t0)[5];
((C_proc7)C_retrieve_proc(t7))(7,t7,t3,((C_word*)t0)[6],lf[292],t2,t5,t6);}
else{
if(C_truep((C_word)C_i_structurep(((C_word*)t0)[8],lf[293]))){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3573,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_slot(((C_word*)t0)[8],C_fix(1));
/* csi.scm: 674  fprintf */
t4=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,((C_word*)t0)[6],lf[300],t3);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3640,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_structurep(((C_word*)t0)[8],lf[306]))){
/* csi.scm: 684  provided? */
t3=C_retrieve(lf[307]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[308]);}
else{
t3=t2;
f_3640(2,t3,C_SCHEME_FALSE);}}}}}}

/* k3638 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3640,2,t0,t1);}
if(C_truep(t1)){
/* csi.scm: 685  unveil */
t2=C_retrieve(lf[301]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_structurep(((C_word*)t0)[6]))){
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(0));
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3655,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* csi.scm: 688  hash-table-ref/default */
t4=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,C_retrieve2(lf[225],"describer-table"),t2,C_SCHEME_FALSE);}
else{
/* csi.scm: 695  fprintf */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[7],((C_word*)t0)[5],lf[305]);}}}

/* k3653 in k3638 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3655(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3655,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3662,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=lf[302],tmp=(C_word)a,a+=5,tmp);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[5],t1);}
else{
t2=(C_word)C_i_assq(((C_word*)t0)[4],C_retrieve2(lf[223],"bytevector-data"));
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3679,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3683,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_i_cdr(t2);
/* map */
t6=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,C_retrieve(lf[79]),t5);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3694,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_slot(((C_word*)t0)[7],C_fix(0));
/* csi.scm: 693  fprintf */
t5=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,((C_word*)t0)[6],lf[304],t4);}}}

/* k3692 in k3653 in k3638 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 694  descseq */
t2=((C_word*)t0)[3];
f_3003(6,t2,((C_word*)t0)[2],C_SCHEME_FALSE,*((C_word*)lf[251]+1),*((C_word*)lf[253]+1),C_fix(1));}

/* k3681 in k3653 in k3638 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3683,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,C_fix(0));
/* csi.scm: 691  append */
t3=*((C_word*)lf[303]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t1,t2);}

/* k3677 in k3653 in k3638 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3679(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* f_3662 in k3653 in k3638 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3662(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3662,3,t0,t1,t2);}
/* g767768 */
t3=t2;
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3571 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3573(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3573,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3578,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=lf[299],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* for-each */
t4=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t2,t3);}

/* a3577 in k3571 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3578(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3578,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3582,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 677  fprintf */
t4=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[2],lf[298],t2);}

/* k3580 in a3577 in k3571 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3582,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[6],C_fix(2));
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3591,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=lf[297],tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_3591(t6,((C_word*)t0)[2],t2);}

/* loop in k3580 in a3577 in k3571 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_3591(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3591,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3601,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3626,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 680  caar */
t5=*((C_word*)lf[296]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t2);}}

/* k3624 in loop in k3580 in a3577 in k3571 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3626,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[6],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3618,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 681  cdar */
t4=*((C_word*)lf[295]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[5]);}
else{
t3=((C_word*)t0)[3];
f_3601(2,t3,C_SCHEME_UNDEFINED);}}

/* k3616 in k3624 in loop in k3580 in a3577 in k3571 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3618(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cadr(((C_word*)t0)[5]);
/* csi.scm: 681  fprintf */
t3=((C_word*)t0)[4];
((C_proc6)C_retrieve_proc(t3))(6,t3,((C_word*)t0)[3],((C_word*)t0)[2],lf[294],t1,t2);}

/* k3599 in loop in k3580 in a3577 in k3571 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cddr(((C_word*)t0)[4]);
/* csi.scm: 682  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3591(t3,((C_word*)t0)[2],t2);}

/* k3535 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3537,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3540,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_slot(((C_word*)t0)[2],C_fix(4));
/* csi.scm: 669  fprintf */
t4=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,((C_word*)t0)[5],lf[289],t3);}

/* k3538 in k3535 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3540(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3540,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3545,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=lf[288],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 670  hash-table-walk */
t3=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a3544 in k3538 in k3535 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3545(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_3545,4,t0,t1,t2,t3);}
/* csi.scm: 672  fprintf */
t4=((C_word*)t0)[3];
((C_proc6)C_retrieve_proc(t4))(6,t4,t1,((C_word*)t0)[2],lf[287],t2,t3);}

/* k3523 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3525(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 664  fprintf */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[284],t1);}

/* k3510 in k3504 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 662  ##csi#hexdump */
t2=C_retrieve(lf[281]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],*((C_word*)lf[282]+1),((C_word*)t0)[2]);}

/* k3498 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 658  fprintf */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[280],t1);}

/* k3417 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3419,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(2));
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3430,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
switch(t3){
case C_fix(0):
t5=t4;
f_3430(t5,lf[270]);
case C_fix(1):
t5=t4;
f_3430(t5,lf[271]);
case C_fix(2):
t5=t4;
f_3430(t5,lf[272]);
case C_fix(3):
t5=t4;
f_3430(t5,lf[273]);
case C_fix(4):
t5=t4;
f_3430(t5,lf[274]);
case C_fix(5):
t5=t4;
f_3430(t5,lf[275]);
case C_fix(6):
t5=t4;
f_3430(t5,lf[276]);
case C_fix(7):
t5=t4;
f_3430(t5,lf[277]);
case C_fix(8):
t5=t4;
f_3430(t5,lf[278]);
default:
t5=(C_word)C_eqp(t3,C_fix(9));
t6=t4;
f_3430(t6,(C_truep(t5)?lf[279]:C_SCHEME_UNDEFINED));}}

/* k3428 in k3417 in k3410 in k3401 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_3430(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 644  fprintf */
t2=((C_word*)t0)[6];
((C_proc7)C_retrieve_proc(t2))(7,t2,((C_word*)t0)[5],((C_word*)t0)[4],lf[269],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3392 in k3373 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 635  fprintf */
t2=((C_word*)t0)[7];
((C_proc8)C_retrieve_proc(t2))(8,t2,((C_word*)t0)[6],((C_word*)t0)[5],lf[268],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3333 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_3335(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3335,NULL,2,t0,t1);}
if(C_truep(t1)){
/* csi.scm: 630  describe-object */
t2=C_retrieve(lf[261]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3345,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3349,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 632  ##sys#peek-unsigned-integer */
t4=C_retrieve(lf[263]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[5],C_fix(0));}}

/* k3347 in k3333 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 632  sprintf */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[262],t1);}

/* k3343 in k3333 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 631  descseq */
t2=((C_word*)t0)[3];
f_3003(6,t2,((C_word*)t0)[2],t1,*((C_word*)lf[251]+1),*((C_word*)lf[253]+1),C_fix(1));}

/* k3289 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_3258(2,t2,C_SCHEME_UNDEFINED);}
else{
/* csi.scm: 619  display */
t2=*((C_word*)lf[23]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],lf[257],((C_word*)t0)[2]);}}

/* k3256 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3258,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3271,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[2]))){
t4=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
t5=(C_word)C_subbyte(t4,C_fix(0));
t6=t3;
f_3271(t6,(C_word)C_eqp(C_fix(0),t5));}
else{
t4=t3;
f_3271(t4,C_SCHEME_FALSE);}}

/* k3269 in k3256 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_3271(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* csi.scm: 621  display */
t2=*((C_word*)lf[23]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],lf[256],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_3261(2,t2,C_SCHEME_UNDEFINED);}}

/* k3259 in k3256 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3268,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 622  ##sys#symbol->string */
t3=C_retrieve(lf[255]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k3266 in k3259 in k3256 in k3226 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 622  fprintf */
t2=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[254],t1);}

/* k3196 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3198,2,t0,t1);}
t2=(C_word)C_make_character((C_word)C_unfix(((C_word*)t0)[5]));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3204,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fixnum_lessp(t2,C_fix(65536)))){
/* csi.scm: 611  fprintf */
t4=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[2],lf[245],t2);}
else{
t4=t3;
f_3204(2,t4,C_SCHEME_UNDEFINED);}}

/* k3202 in k3196 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 612  ##sys#write-char-0 */
t2=C_retrieve(lf[187]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_make_character(10),*((C_word*)lf[188]+1));}

/* k3130 in k3127 in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_retrieve(lf[63]));}

/* descseq in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3003(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=6) C_bad_argc_2(c,6,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr6,(void*)f_3003,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3126,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t4,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],a[8]=t5,tmp=(C_word)a,a+=9,tmp);
/* csi.scm: 578  plen */
t7=t3;
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[2]);}

/* k3124 in descseq in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3126,2,t0,t1);}
t2=(C_word)C_fixnum_difference(t1,((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_3010,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep(((C_word*)t0)[2])){
/* csi.scm: 579  fprintf */
t4=((C_word*)t0)[7];
((C_proc6)C_retrieve_proc(t4))(6,t4,t3,((C_word*)t0)[6],lf[237],((C_word*)t0)[2],t2);}
else{
t4=t3;
f_3010(2,t4,C_SCHEME_UNDEFINED);}}

/* k3008 in k3124 in descseq in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3010,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3015,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=lf[236],tmp=(C_word)a,a+=10,tmp));
t5=((C_word*)t3)[1];
f_3015(t5,((C_word*)t0)[2],C_fix(0));}

/* loop1 in k3008 in k3124 in descseq in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_3015(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3015,NULL,3,t0,t1,t2);}
t3=(C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[8]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,C_fix(40)))){
t4=(C_word)C_fixnum_difference(((C_word*)t0)[8],t2);
/* csi.scm: 583  fprintf */
t5=((C_word*)t0)[7];
((C_proc5)C_retrieve_proc(t5))(5,t5,t1,((C_word*)t0)[6],lf[230],t4);}
else{
t4=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_3038,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[4],a[8]=((C_word*)t0)[8],a[9]=t2,a[10]=((C_word*)t0)[5],tmp=(C_word)a,a+=11,tmp);
t5=(C_word)C_fixnum_plus(((C_word*)t0)[5],t2);
/* csi.scm: 585  pref */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,((C_word*)t0)[2],t5);}}}

/* k3036 in loop1 in k3008 in k3124 in descseq in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3038,2,t0,t1);}
t2=(C_word)C_fixnum_plus(((C_word*)t0)[10],C_fix(1));
t3=(C_word)C_fixnum_plus(((C_word*)t0)[9],t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_3047,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[8],a[11]=lf[235],tmp=(C_word)a,a+=12,tmp));
t7=((C_word*)t5)[1];
f_3047(t7,((C_word*)t0)[2],C_fix(1),t3);}

/* loop2 in k3036 in loop1 in k3008 in k3124 in descseq in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_3047(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3047,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[10]))){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3057,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=t1,a[5]=((C_word*)t0)[8],a[6]=t2,a[7]=((C_word*)t0)[9],tmp=(C_word)a,a+=8,tmp);
/* csi.scm: 588  fprintf */
t5=((C_word*)t0)[7];
((C_proc6)C_retrieve_proc(t5))(6,t5,t4,((C_word*)t0)[6],lf[234],((C_word*)t0)[9],((C_word*)t0)[5]);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3111,a[2]=((C_word*)t0)[10],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* csi.scm: 595  pref */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[2],t3);}}

/* k3109 in loop2 in k3036 in loop1 in k3008 in k3124 in descseq in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[7],t1);
if(C_truep(t2)){
t3=(C_word)C_fixnum_plus(((C_word*)t0)[6],C_fix(1));
t4=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* csi.scm: 595  loop2 */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3047(t5,((C_word*)t0)[3],t3,t4);}
else{
/* csi.scm: 596  loop2 */
t3=((C_word*)((C_word*)t0)[4])[1];
f_3047(t3,((C_word*)t0)[3],((C_word*)t0)[6],((C_word*)t0)[2]);}}

/* k3055 in loop2 in k3036 in loop1 in k3008 in k3124 in descseq in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3057(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3057,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3060,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_greaterp(((C_word*)t0)[6],C_fix(1)))){
t3=(C_word)C_fixnum_difference(((C_word*)t0)[6],C_fix(1));
t4=(C_word)C_eqp(((C_word*)t0)[6],C_fix(2));
t5=(C_truep(t4)?lf[231]:lf[232]);
/* csi.scm: 590  fprintf */
t6=((C_word*)t0)[3];
((C_proc6)C_retrieve_proc(t6))(6,t6,t2,((C_word*)t0)[2],lf[233],t3,t5);}
else{
/* csi.scm: 593  newline */
t3=*((C_word*)lf[214]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}}

/* k3058 in k3055 in loop2 in k3036 in loop1 in k3008 in k3124 in descseq in k2999 in ##csi#describe in k2993 in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_3060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[5],((C_word*)t0)[4]);
/* csi.scm: 594  loop1 */
t3=((C_word*)((C_word*)t0)[3])[1];
f_3015(t3,((C_word*)t0)[2],t2);}

/* ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2821(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2rv,(void*)f_2821r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_2821r(t0,t1,t2);}}

static void C_ccall f_2821r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2829,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_notvemptyp(t2))){
t4=t3;
f_2829(2,t4,(C_word)C_i_vector_ref(t2,C_fix(0)));}
else{
/* csi.scm: 506  current-output-port */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}}

/* k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2829,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2831,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=lf[221],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 506  with-output-to-port */
t3=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],t1,t2);}

/* a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2831(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2831,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2835,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 508  gc */
t3=C_retrieve(lf[220]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2835,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2838,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 509  ##sys#symbol-table-info */
t3=C_retrieve(lf[219]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2838(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2838,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2841,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 510  memory-statistics */
t3=C_retrieve(lf[218]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2841,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2843,a[2]=lf[198],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2858,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
/* csi.scm: 512  printf */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[217]);}

/* k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2858(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2858,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2861,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2960,a[2]=lf[215],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2977,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2981,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* map */
t6=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_retrieve(lf[216]),C_retrieve(lf[21]));}

/* k2979 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 517  chop */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_fix(8));}

/* k2975 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2959 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2960(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2960,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2964,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 515  newline */
t4=*((C_word*)lf[214]+1);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k2962 in a2959 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2964(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2964,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2969,a[2]=lf[213],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t3=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a2968 in k2962 in a2959 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2969(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2969,3,t0,t1,t2);}
/* print* */
t3=*((C_word*)lf[109]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,C_make_character(9),t2);}

/* k2859 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2861,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2864,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2889,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csi.scm: 529  machine-type */
t4=C_retrieve(lf[212]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k2887 in k2859 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2889,2,t0,t1);}
t2=(C_word)C_fudge(C_fix(3));
t3=(C_truep(t2)?lf[201]:lf[202]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2897,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* csi.scm: 531  software-type */
t5=C_retrieve(lf[211]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k2895 in k2887 in k2859 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2901,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* csi.scm: 532  software-version */
t3=C_retrieve(lf[210]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k2899 in k2895 in k2887 in k2859 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2901(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2901,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2905,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
/* csi.scm: 533  build-platform */
t3=C_retrieve(lf[209]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k2903 in k2899 in k2895 in k2887 in k2859 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2905,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2909,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(C_word)C_i_vector_ref(((C_word*)t0)[10],C_fix(0));
/* csi.scm: 535  shorten */
f_2843(t2,t3);}

/* k2907 in k2903 in k2899 in k2895 in k2887 in k2859 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2909,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2913,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],tmp=(C_word)a,a+=12,tmp);
t3=(C_word)C_i_vector_ref(((C_word*)t0)[11],C_fix(1));
/* csi.scm: 536  shorten */
f_2843(t2,t3);}

/* k2911 in k2907 in k2903 in k2899 in k2895 in k2887 in k2859 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2913(C_word c,C_word t0,C_word t1){
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
t2=(C_word)C_i_vector_ref(((C_word*)t0)[11],C_fix(2));
t3=(C_word)C_i_vector_ref(((C_word*)t0)[10],C_fix(0));
t4=(C_word)C_fudge(C_fix(17));
t5=(C_truep(t4)?lf[203]:lf[204]);
t6=(C_word)C_i_vector_ref(((C_word*)t0)[10],C_fix(1));
t7=(C_word)C_i_vector_ref(((C_word*)t0)[10],C_fix(2));
t8=(C_word)C_fudge(C_fix(18));
t9=(C_word)C_i_nequalp(C_fix(1),t8);
t10=(C_truep(t9)?lf[205]:lf[206]);
/* csi.scm: 518  printf */
t11=((C_word*)t0)[9];
((C_proc17)C_retrieve_proc(t11))(17,t11,((C_word*)t0)[8],lf[207],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],C_retrieve(lf[208]),((C_word*)t0)[2],t1,t2,t3,t5,t6,t7,t10);}

/* k2862 in k2859 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2864,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2867,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 543  ##sys#write-char-0 */
t3=C_retrieve(lf[187]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_make_character(10),*((C_word*)lf[188]+1));}

/* k2865 in k2862 in k2859 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2867,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2870,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fudge(C_fix(14)))){
/* csi.scm: 544  display */
t3=*((C_word*)lf[23]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[200]);}
else{
t3=t2;
f_2870(2,t3,C_SCHEME_UNDEFINED);}}

/* k2868 in k2865 in k2862 in k2859 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2870,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2873,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_fudge(C_fix(15)))){
/* csi.scm: 545  display */
t3=*((C_word*)lf[23]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[199]);}
else{
t3=t2;
f_2873(2,t3,C_SCHEME_UNDEFINED);}}

/* k2871 in k2868 in k2865 in k2862 in k2859 in k2856 in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2873(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* shorten in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_2843(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2843,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2851,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_a_i_times(&a,2,t2,C_fix(100));
/* csi.scm: 511  truncate */
t5=*((C_word*)lf[197]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}

/* k2849 in shorten in k2839 in k2836 in k2833 in a2830 in k2827 in ##csi#report in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2851(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2851,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_divide(&a,2,t1,C_fix(100)));}

/* ##csi#traced-procedure-exit in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2427(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2427,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2432,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 396  sub1 */
t5=*((C_word*)lf[44]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,C_retrieve(lf[92]));}

/* k2430 in ##csi#traced-procedure-exit in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2432,2,t0,t1);}
t2=C_mutate((C_word*)lf[92]+1,t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2435,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 397  ##csi#trace-indent */
f_2376(t3);}

/* k2433 in k2430 in ##csi#traced-procedure-exit in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2435,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2438,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 398  write */
t3=*((C_word*)lf[86]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2436 in k2433 in k2430 in ##csi#traced-procedure-exit in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2438,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2441,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 399  display */
t3=*((C_word*)lf[23]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[192]);}

/* k2439 in k2436 in k2433 in k2430 in ##csi#traced-procedure-exit in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2441,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2444,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2452,a[2]=lf[191],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a2451 in k2439 in k2436 in k2433 in k2430 in ##csi#traced-procedure-exit in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2452(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2452,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2456,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 402  write */
t4=*((C_word*)lf[86]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2454 in a2451 in k2439 in k2436 in k2433 in k2430 in ##csi#traced-procedure-exit in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2456(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 403  write-char */
t2=*((C_word*)lf[183]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_make_character(32));}

/* k2442 in k2439 in k2436 in k2433 in k2430 in ##csi#traced-procedure-exit in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2444(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2444,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2447,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 405  ##sys#write-char-0 */
t3=C_retrieve(lf[187]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_make_character(10),*((C_word*)lf[188]+1));}

/* k2445 in k2442 in k2439 in k2436 in k2433 in k2430 in ##csi#traced-procedure-exit in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2447(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 406  flush-output */
t2=*((C_word*)lf[186]+1);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* ##csi#traced-procedure-entry in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2404(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2404,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2408,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 388  ##csi#trace-indent */
f_2376(t4);}

/* k2406 in ##csi#traced-procedure-entry in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2408,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2412,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 389  add1 */
t3=*((C_word*)lf[189]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_retrieve(lf[92]));}

/* k2410 in k2406 in ##csi#traced-procedure-entry in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2412,2,t0,t1);}
t2=C_mutate((C_word*)lf[92]+1,t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2415,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]);
/* csi.scm: 390  write */
t5=*((C_word*)lf[86]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}

/* k2413 in k2410 in k2406 in ##csi#traced-procedure-entry in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2415,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2418,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 391  ##sys#write-char-0 */
t3=C_retrieve(lf[187]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_make_character(10),*((C_word*)lf[188]+1));}

/* k2416 in k2413 in k2410 in k2406 in ##csi#traced-procedure-entry in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 392  flush-output */
t2=*((C_word*)lf[186]+1);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* ##csi#trace-indent in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_2376(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2376,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2380,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 381  write-char */
t3=*((C_word*)lf[183]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(124));}

/* k2378 in ##csi#trace-indent in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2380(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2380,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2385,a[2]=t3,a[3]=lf[184],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_2385(t5,((C_word*)t0)[2],C_retrieve(lf[92]));}

/* do618 in k2378 in ##csi#trace-indent in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_2385(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2385,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_less_or_equalp(t2,C_fix(0)))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2395,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 384  write-char */
t4=*((C_word*)lf[183]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,C_make_character(32));}}

/* k2393 in do618 in k2378 in ##csi#trace-indent in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2395(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2395,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2402,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 382  sub1 */
t3=*((C_word*)lf[44]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2400 in k2393 in do618 in k2378 in ##csi#trace-indent in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
f_2385(t2,((C_word*)t0)[2],t1);}

/* ##csi#del in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2335(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2335,5,t0,t1,t2,t3,t4);}
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2341,a[2]=t2,a[3]=t4,a[4]=t6,a[5]=lf[180],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_2341(t8,t1,t3);}

/* loop in ##csi#del in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_2341(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2341,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2357,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 371  tst */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[2],t3);}}

/* k2355 in loop in ##csi#del in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2357(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2357,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_cdr(((C_word*)t0)[4]));}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2367,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* csi.scm: 373  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2341(t4,t2,t3);}}

/* k2365 in k2355 in loop in ##csi#del in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2367,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1806(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1806,3,t0,t1,t2);}
t3=C_set_block_item(lf[92],0,C_fix(0));
if(C_truep((C_word)C_eofp(t2))){
/* csi.scm: 241  exit */
t4=C_retrieve(lf[93]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t1);}
else{
t4=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1823,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=t1,a[14]=t2,tmp=(C_word)a,a+=15,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t5=(C_word)C_slot(t2,C_fix(0));
t6=t4;
f_1823(t6,(C_word)C_eqp(lf[178],t5));}
else{
t5=t4;
f_1823(t5,C_SCHEME_FALSE);}}}

/* k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_1823(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[25],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1823,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cadr(((C_word*)t0)[14]);
t3=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1829,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],a[14]=t2,a[15]=((C_word*)t0)[13],tmp=(C_word)a,a+=16,tmp);
if(C_truep((C_word)C_i_symbolp(t2))){
/* csi.scm: 245  hash-table-ref/default */
t4=C_retrieve(lf[175]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,C_retrieve2(lf[75],"command-table"),t2,C_SCHEME_FALSE);}
else{
t4=t3;
f_1829(2,t4,C_SCHEME_FALSE);}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2310,a[2]=((C_word*)t0)[14],a[3]=((C_word*)t0)[10],a[4]=lf[176],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2316,a[2]=((C_word*)t0)[6],a[3]=lf[177],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 359  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[13],t2,t3);}}

/* a2315 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2316(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2316r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2316r(t0,t1,t2);}}

static void C_ccall f_2316r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2320,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 360  ##csi#history-add */
t4=C_retrieve(lf[62]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2318 in a2315 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2309 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2310(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2310,2,t0,t1);}
/* csi.scm: 359  eval */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1829(C_word c,C_word t0,C_word t1){
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
C_word ab[123],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1829,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1835,a[2]=((C_word*)t0)[15],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_car(t1);
t4=t3;
((C_proc2)C_retrieve_proc(t4))(2,t4,t2);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[14],lf[94]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1850,a[2]=((C_word*)t0)[13],a[3]=((C_word*)t0)[15],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 252  read */
t4=((C_word*)t0)[12];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}
else{
t3=(C_word)C_eqp(((C_word*)t0)[14],lf[96]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1869,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[15],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 256  read */
t5=((C_word*)t0)[12];
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[14],lf[97]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1887,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[15],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 261  read */
t6=((C_word*)t0)[12];
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[14],lf[99]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1902,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[15],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 265  read */
t7=((C_word*)t0)[12];
((C_proc2)C_retrieve_proc(t7))(2,t7,t6);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[14],lf[101]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1917,a[2]=((C_word*)t0)[12],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[15],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 269  read */
t8=((C_word*)t0)[12];
((C_proc2)C_retrieve_proc(t8))(2,t8,t7);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[14],lf[102]);
if(C_truep(t7)){
/* csi.scm: 274  ##csi#report */
t8=C_retrieve(lf[103]);
((C_proc2)C_retrieve_proc(t8))(2,t8,((C_word*)t0)[15]);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[14],lf[104]);
if(C_truep(t8)){
/* csi.scm: 275  exit */
t9=C_retrieve(lf[93]);
((C_proc2)C_retrieve_proc(t9))(2,t9,((C_word*)t0)[15]);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[14],lf[105]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1956,a[2]=((C_word*)t0)[15],tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1966,a[2]=t10,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 277  read-line */
t12=((C_word*)t0)[9];
((C_proc2)C_retrieve_proc(t12))(2,t12,t11);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[14],lf[108]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1975,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[13],a[4]=((C_word*)t0)[15],tmp=(C_word)a,a+=5,tmp);
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2000,a[2]=t11,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 281  read-line */
t13=((C_word*)t0)[9];
((C_proc2)C_retrieve_proc(t13))(2,t13,t12);}
else{
t11=(C_word)C_eqp(((C_word*)t0)[14],lf[114]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2009,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[11],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 285  read */
t13=((C_word*)t0)[12];
((C_proc2)C_retrieve_proc(t13))(2,t13,t12);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[14],lf[122]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2062,a[2]=((C_word*)t0)[15],tmp=(C_word)a,a+=3,tmp);
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2066,a[2]=t13,tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2070,a[2]=t14,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 289  read-line */
t16=((C_word*)t0)[9];
((C_proc2)C_retrieve_proc(t16))(2,t16,t15);}
else{
t13=(C_word)C_eqp(((C_word*)t0)[14],lf[138]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2083,a[2]=((C_word*)t0)[15],tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2087,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2091,a[2]=t15,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 290  read-line */
t17=((C_word*)t0)[9];
((C_proc2)C_retrieve_proc(t17))(2,t17,t16);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[14],lf[143]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2104,a[2]=((C_word*)t0)[15],tmp=(C_word)a,a+=3,tmp);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2108,a[2]=t15,tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2112,a[2]=t16,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 291  read-line */
t18=((C_word*)t0)[9];
((C_proc2)C_retrieve_proc(t18))(2,t18,t17);}
else{
t15=(C_word)C_eqp(((C_word*)t0)[14],lf[151]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2125,a[2]=((C_word*)t0)[15],tmp=(C_word)a,a+=3,tmp);
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2129,a[2]=t16,tmp=(C_word)a,a+=3,tmp);
t18=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2133,a[2]=t17,a[3]=((C_word*)t0)[10],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 292  read-line */
t19=((C_word*)t0)[9];
((C_proc2)C_retrieve_proc(t19))(2,t19,t18);}
else{
t16=(C_word)C_eqp(((C_word*)t0)[14],lf[154]);
if(C_truep(t16)){
t17=C_set_block_item(lf[155],0,C_SCHEME_FALSE);
t18=((C_word*)t0)[15];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,t17);}
else{
t17=(C_word)C_eqp(((C_word*)t0)[14],lf[156]);
if(C_truep(t17)){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2150,a[2]=((C_word*)t0)[15],tmp=(C_word)a,a+=3,tmp);
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2154,a[2]=t18,a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 296  read */
t20=((C_word*)t0)[12];
((C_proc2)C_retrieve_proc(t20))(2,t20,t19);}
else{
t18=(C_word)C_eqp(((C_word*)t0)[14],lf[157]);
if(C_truep(t18)){
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2163,a[2]=((C_word*)t0)[15],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(C_retrieve2(lf[124],"traced-procedures")))){
t20=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2186,a[2]=t19,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* map */
t21=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t21+1)))(4,t21,t20,*((C_word*)lf[159]+1),C_retrieve2(lf[124],"traced-procedures"));}
else{
t20=t19;
f_2163(2,t20,C_SCHEME_UNDEFINED);}}
else{
t19=(C_word)C_eqp(((C_word*)t0)[14],lf[161]);
if(C_truep(t19)){
if(C_truep(C_retrieve(lf[162]))){
t20=C_retrieve(lf[162]);
t21=C_set_block_item(lf[162],0,C_SCHEME_FALSE);
/* csi.scm: 306  ##sys#break-resume */
t22=C_retrieve(lf[163]);
((C_proc3)C_retrieve_proc(t22))(3,t22,((C_word*)t0)[15],t20);}
else{
/* csi.scm: 307  display */
t20=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t20))(3,t20,((C_word*)t0)[15],lf[164]);}}
else{
t20=(C_word)C_eqp(((C_word*)t0)[14],lf[165]);
if(C_truep(t20)){
if(C_truep(C_retrieve(lf[166]))){
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2214,a[2]=((C_word*)t0)[15],tmp=(C_word)a,a+=3,tmp);
t22=(C_word)C_a_i_list(&a,1,C_retrieve(lf[166]));
/* csi.scm: 310  ##csi#history-add */
t23=C_retrieve(lf[62]);
((C_proc3)C_retrieve_proc(t23))(3,t23,t21,t22);}
else{
t21=((C_word*)t0)[15];
((C_proc2)(void*)(*((C_word*)t21+1)))(2,t21,C_SCHEME_UNDEFINED);}}
else{
t21=(C_word)C_eqp(((C_word*)t0)[14],lf[167]);
if(C_truep(t21)){
t22=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2230,a[2]=((C_word*)t0)[9],a[3]=((C_word*)t0)[11],a[4]=((C_word*)t0)[15],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 313  read */
t23=((C_word*)t0)[12];
((C_proc2)C_retrieve_proc(t23))(2,t23,t22);}
else{
t22=(C_word)C_eqp(((C_word*)t0)[14],lf[168]);
if(C_truep(t22)){
t23=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2253,a[2]=((C_word*)t0)[15],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 317  read-line */
t24=((C_word*)t0)[9];
((C_proc2)C_retrieve_proc(t24))(2,t24,t23);}
else{
t23=(C_word)C_eqp(((C_word*)t0)[14],lf[170]);
if(C_truep(t23)){
t24=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2272,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[15],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 322  display */
t25=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t25))(3,t25,t24,lf[173]);}
else{
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2296,a[2]=((C_word*)t0)[15],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 356  printf */
t25=((C_word*)t0)[6];
((C_proc4)C_retrieve_proc(t25))(4,t25,t24,lf[174],((C_word*)t0)[2]);}}}}}}}}}}}}}}}}}}}}}}}}

/* k2294 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_retrieve(lf[63]));}

/* k2270 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2272,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2275,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2280,a[2]=lf[172],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 347  hash-table-walk */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,C_retrieve2(lf[75],"command-table"),t3);}

/* a2279 in k2270 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2280(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2280,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cdr(t3);
if(C_truep(t4)){
/* csi.scm: 352  print */
t5=*((C_word*)lf[28]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,C_make_character(32),t4);}
else{
/* csi.scm: 353  print */
t5=*((C_word*)lf[28]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,lf[171],t2);}}

/* k2273 in k2270 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_retrieve(lf[63]));}

/* k2251 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2253,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2256,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 318  system */
t3=C_retrieve(lf[169]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k2254 in k2251 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2256,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2259,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_a_i_list(&a,1,t1);
/* csi.scm: 319  ##csi#history-add */
t4=C_retrieve(lf[62]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* k2257 in k2254 in k2251 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k2228 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2230,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2233,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 314  read-line */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k2231 in k2228 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2233,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2240,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_a_i_list(&a,3,lf[3],C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
/* csi.scm: 315  eval */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* k2238 in k2231 in k2228 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2240(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 315  singlestep */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2212 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 311  ##csi#describe */
t2=C_retrieve(lf[98]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_retrieve(lf[166]));}

/* k2184 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 299  printf */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[160],t1);}

/* k2161 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2163,2,t0,t1);}
if(C_truep((C_word)C_i_pairp(C_retrieve2(lf[127],"broken-procedures")))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2176,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* map */
t3=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[159]+1),C_retrieve2(lf[127],"broken-procedures"));}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k2174 in k2161 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 301  printf */
t2=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[158],t1);}

/* k2152 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2154(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 296  eval */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2148 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[155]+1,t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2131 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 292  string-split */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2127 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],*((C_word*)lf[137]+1),t1);}

/* k2123 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2125,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2689,a[2]=lf[153],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}

/* a2688 in k2123 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2689(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2689,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2693,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 473  macroexpand */
t4=C_retrieve(lf[95]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2691 in a2688 in k2123 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2693,2,t0,t1);}
t2=(C_word)C_i_assq(t1,C_retrieve2(lf[127],"broken-procedures"));
if(C_truep(t2)){
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_i_setslot(t1,C_fix(0),t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2712,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 478  ##csi#del */
t6=C_retrieve(lf[139]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,t2,C_retrieve2(lf[127],"broken-procedures"),*((C_word*)lf[140]+1));}
else{
/* csi.scm: 475  ##sys#warn */
t3=C_retrieve(lf[125]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],lf[152],t1);}}

/* k2710 in k2691 in a2688 in k2123 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[127],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2110 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2112(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 291  string-split */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2106 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2108(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],*((C_word*)lf[137]+1),t1);}

/* k2102 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2104(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2104,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep((C_word)C_i_nullp(t1))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2608,a[2]=lf[145],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_retrieve2(lf[127],"broken-procedures"));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2621,a[2]=lf[150],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}}

/* a2620 in k2102 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2621(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2621,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2625,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 452  macroexpand */
t4=C_retrieve(lf[95]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2623 in a2620 in k2102 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2625,2,t0,t1);}
t2=(C_word)C_i_assq(t1,C_retrieve2(lf[124],"traced-procedures"));
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2631,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2670,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 455  ##sys#warn */
t5=C_retrieve(lf[125]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,lf[149],t1);}
else{
t4=t3;
f_2631(t4,C_SCHEME_UNDEFINED);}}

/* k2668 in k2623 in a2620 in k2102 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2670,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(0),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2677,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 457  ##csi#del */
t5=C_retrieve(lf[139]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[4],C_retrieve2(lf[124],"traced-procedures"),*((C_word*)lf[140]+1));}

/* k2675 in k2668 in k2623 in a2620 in k2102 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[124],t1);
t3=((C_word*)t0)[2];
f_2631(t3,t2);}

/* k2629 in k2623 in a2620 in k2102 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_2631(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2631,NULL,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
if(C_truep((C_word)C_i_closurep(t2))){
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_retrieve2(lf[127],"broken-procedures"));
t5=C_mutate(&lf[127],t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2652,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=lf[147],tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(0),t6));}
else{
/* csi.scm: 459  ##sys#error */
t3=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[148],((C_word*)t0)[3]);}}

/* a2651 in k2629 in k2623 in a2620 in k2102 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2652(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2652r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2652r(t0,t1,t2);}}

static void C_ccall f_2652r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2656,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 465  ##sys#break-entry */
t4=C_retrieve(lf[146]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],t2);}

/* k2654 in a2651 in k2629 in k2623 in a2620 in k2102 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2607 in k2102 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2608(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2608,3,t0,t1,t2);}
t3=(C_word)C_i_car(C_retrieve(lf[144]));
/* csi.scm: 449  print */
t4=*((C_word*)lf[28]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* k2089 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 290  string-split */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2085 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],*((C_word*)lf[137]+1),t1);}

/* k2081 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2083(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2083,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2567,a[2]=lf[142],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}

/* a2566 in k2081 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2567(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2567,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2571,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 438  macroexpand */
t4=C_retrieve(lf[95]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2569 in a2566 in k2081 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2571,2,t0,t1);}
t2=(C_word)C_i_assq(t1,C_retrieve2(lf[124],"traced-procedures"));
if(C_truep(t2)){
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_i_setslot(t1,C_fix(0),t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2590,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 443  ##csi#del */
t6=C_retrieve(lf[139]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,t2,C_retrieve2(lf[124],"traced-procedures"),*((C_word*)lf[140]+1));}
else{
/* csi.scm: 440  ##sys#warn */
t3=C_retrieve(lf[125]);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],lf[141],t1);}}

/* k2588 in k2569 in a2566 in k2081 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2590(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[124],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2068 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2070(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 289  string-split */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2064 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[136]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],*((C_word*)lf[137]+1),t1);}

/* k2060 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2062,2,t0,t1);}
t2=((C_word*)t0)[2];
if(C_truep((C_word)C_i_nullp(t1))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2473,a[2]=lf[123],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,C_retrieve2(lf[124],"traced-procedures"));}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2486,a[2]=lf[135],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t4=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}}

/* a2485 in k2060 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2486(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2486,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2490,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 414  macroexpand */
t4=C_retrieve(lf[95]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2488 in a2485 in k2060 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2490(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2490,2,t0,t1);}
if(C_truep((C_word)C_i_assq(t1,C_retrieve2(lf[124],"traced-procedures")))){
/* csi.scm: 416  ##sys#warn */
t2=C_retrieve(lf[125]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[126],t1);}
else{
if(C_truep((C_word)C_i_assq(t1,C_retrieve2(lf[127],"broken-procedures")))){
/* csi.scm: 418  ##sys#warn */
t2=C_retrieve(lf[125]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[128]);}
else{
t2=(C_word)C_slot(t1,C_fix(0));
if(C_truep((C_word)C_i_closurep(t2))){
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,t3,C_retrieve2(lf[124],"traced-procedures"));
t5=C_mutate(&lf[124],t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2529,a[2]=t1,a[3]=t2,a[4]=lf[133],tmp=(C_word)a,a+=5,tmp);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_setslot(t1,C_fix(0),t6));}
else{
/* csi.scm: 421  ##sys#error */
t3=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],lf[134],t1);}}}}

/* a2528 in k2488 in a2485 in k2060 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2529(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_2529r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2529r(t0,t1,t2);}}

static void C_ccall f_2529r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2533,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 427  ##csi#traced-procedure-entry */
t4=C_retrieve(lf[132]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],t2);}

/* k2531 in a2528 in k2488 in a2485 in k2060 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2533(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2533,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2538,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=lf[129],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2544,a[2]=((C_word*)t0)[3],a[3]=lf[131],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 428  call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2543 in k2531 in a2528 in k2488 in a2485 in k2060 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2544(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_2544r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2544r(t0,t1,t2);}}

static void C_ccall f_2544r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2548,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 430  ##csi#traced-procedure-exit */
t4=C_retrieve(lf[130]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],t2);}

/* k2546 in a2543 in k2531 in a2528 in k2488 in a2485 in k2060 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2548(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2537 in k2531 in a2528 in k2488 in a2485 in k2060 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2538,2,t0,t1);}
C_apply(4,0,t1,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2472 in k2060 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2473(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2473,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
/* csi.scm: 411  print */
t4=*((C_word*)lf[28]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}

/* k2007 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2009(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2009,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2014,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=lf[120],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2042,a[2]=((C_word*)t0)[3],a[3]=lf[121],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2041 in k2007 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2042(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_2042r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2042r(t0,t1,t2);}}

static void C_ccall f_2042r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2046,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 287  ##csi#history-add */
t4=C_retrieve(lf[62]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k2044 in a2041 in k2007 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2046(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2013 in k2007 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2018,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* ##sys#start-timer */
t3=*((C_word*)lf[119]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2016 in a2013 in k2007 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2018,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2023,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[115],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2029,a[2]=lf[118],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[2],t2,t3);}

/* a2028 in k2016 in a2013 in k2007 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2029(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr2r,(void*)f_2029r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_2029r(t0,t1,t2);}}

static void C_ccall f_2029r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(7);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2033,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2040,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#stop-timer */
t5=*((C_word*)lf[117]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* k2038 in a2028 in k2016 in a2013 in k2007 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#display-times */
t2=C_retrieve(lf[116]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2031 in a2028 in k2016 in a2013 in k2007 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply_values(3,0,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2022 in k2016 in a2013 in k2007 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2023,2,t0,t1);}
/* csi.scm: 286  eval */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* k1998 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_2000(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 281  string-split */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1973 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1978,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1983,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=lf[113],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t4=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}

/* a1982 in k1973 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1983(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1983,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1989,a[2]=((C_word*)t0)[3],a[3]=lf[111],tmp=(C_word)a,a+=4,tmp);
/* load-noisily543 */
t4=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,t2,lf[112],t3);}

/* a1988 in a1982 in k1973 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1989(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1989,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1993,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 282  pretty-print */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k1991 in a1988 in a1982 in k1973 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 282  print* */
t2=*((C_word*)lf[109]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[110]);}

/* k1976 in k1973 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_retrieve(lf[63]));}

/* k1964 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 277  string-split */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1954 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1956,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1959,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t3=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_retrieve(lf[107]),t1);}

/* k1957 in k1954 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_retrieve(lf[63]));}

/* k1915 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1917(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1917,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1920,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 270  read */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1918 in k1915 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1920(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1920,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1923,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 271  eval */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k1921 in k1918 in k1915 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1923(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1923,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1926,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 272  eval */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k1924 in k1921 in k1918 in k1915 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 273  ##csi#dump */
t2=C_retrieve(lf[100]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1900 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1902,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1905,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 266  eval */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k1903 in k1900 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 267  ##csi#dump */
t2=C_retrieve(lf[100]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1885 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1887(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1887,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1890,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 262  eval */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k1888 in k1885 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1890(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 263  ##csi#describe */
t2=C_retrieve(lf[98]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1867 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1869(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1869,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1872,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 257  eval */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k1870 in k1867 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1875,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 258  pretty-print */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k1873 in k1870 in k1867 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_retrieve(lf[63]));}

/* k1848 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1850(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1850,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1853,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1860,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 253  macroexpand */
t4=C_retrieve(lf[95]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t1);}

/* k1858 in k1848 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1860(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 253  pretty-print */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1851 in k1848 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_retrieve(lf[63]));}

/* k1833 in k1827 in k1821 in ##sys#repl-eval-hook in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_retrieve(lf[63]));}

/* toplevel-command in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1765(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_1765r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_1765r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1765r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1769,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
t6=t5;
f_1769(2,t6,C_SCHEME_FALSE);}
else{
t6=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t6))){
t7=t5;
f_1769(2,t7,(C_word)C_i_car(t4));}
else{
/* ##sys#error */
t7=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,lf[0],t4);}}}

/* k1767 in toplevel-command in k1761 in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1769(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1769,2,t0,t1);}
t2=(C_word)C_i_check_symbol_2(((C_word*)t0)[5],lf[77]);
t3=(C_truep(t1)?(C_word)C_i_check_string_2(t1,lf[77]):C_SCHEME_UNDEFINED);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* csi.scm: 220  hash-table-set! */
t5=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t5))(5,t5,((C_word*)t0)[2],C_retrieve2(lf[75],"command-table"),((C_word*)t0)[5],t4);}

/* ##sys#read-prompt-hook in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1749(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1749,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1756,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 211  ##csi#tty-input? */
t3=C_retrieve(lf[68]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1754 in ##sys#read-prompt-hook in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* csi.scm: 211  old */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* ##csi#tty-input? in k1732 in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1736,2,t0,t1);}
t2=(C_word)C_fudge(C_fix(12));
if(C_truep(t2)){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* csi.scm: 204  ##sys#tty-port? */
t3=C_retrieve(lf[69]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,*((C_word*)lf[70]+1));}}

/* ##csi#history-ref in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1709(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1709,3,t0,t1,t2);}
t3=(C_word)C_i_inexact_to_exact(t2);
t4=(C_word)C_fixnum_greaterp(t3,C_fix(0));
t5=(C_truep(t4)?(C_word)C_fixnum_less_or_equal_p(t3,C_retrieve(lf[36])):C_SCHEME_FALSE);
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_vector_ref(C_retrieve(lf[60]),t3));}
else{
/* csi.scm: 196  ##sys#error */
t6=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t1,lf[66],t2);}}

/* ##csi#history-add in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1670(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_1670,3,t0,t1,t2);}
t3=(C_word)C_i_nullp(t2);
t4=(C_truep(t3)?C_retrieve(lf[63]):(C_word)C_slot(t2,C_fix(0)));
t5=(C_word)C_block_size(C_retrieve(lf[60]));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1680,a[2]=t1,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(C_retrieve(lf[36]),t5))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1694,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_fixnum_times(C_fix(2),t5);
/* csi.scm: 187  vector-resize */
t9=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t9))(4,t9,t7,C_retrieve(lf[60]),t8);}
else{
t7=t6;
f_1680(t7,C_SCHEME_UNDEFINED);}}

/* k1692 in ##csi#history-add in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate((C_word*)lf[60]+1,t1);
t3=((C_word*)t0)[2];
f_1680(t3,t2);}

/* k1678 in ##csi#history-add in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_1680(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_i_vector_set(C_retrieve(lf[60]),C_retrieve(lf[36]),((C_word*)t0)[3]);
t3=(C_word)C_fixnum_plus(C_retrieve(lf[36]),C_fix(1));
t4=C_mutate((C_word*)lf[36]+1,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,((C_word*)t0)[3]);}

/* ##csi#lookup-script-file in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1550(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1550,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1554,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 160  getenv */
t4=C_retrieve(lf[57]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[58]);}

/* k1552 in ##csi#lookup-script-file in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1554(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1554,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_greaterp(t2,C_fix(0)))){
t3=(C_word)C_i_string_ref(((C_word*)t0)[5],C_fix(0));
t4=(C_word)C_eqp(C_retrieve(lf[41]),t3);
if(C_truep(t4)){
/* csi.scm: 162  addext */
f_1502(((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
t5=((C_word*)t0)[5];
t6=(C_word)C_block_size(t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1529,a[2]=t5,a[3]=t6,a[4]=lf[52],tmp=(C_word)a,a+=5,tmp);
t8=f_1529(t7,C_fix(0));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1578,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t10=((C_word*)t0)[2];
t11=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t12=(C_truep(t10)?(C_word)C_i_foreign_block_argumentp(t10):C_SCHEME_FALSE);
t13=(C_word)C_i_foreign_fixnum_argumentp(C_fix(256));
t14=(C_word)stub486(t11,t12,t13);
/* ##sys#peek-nonnull-c-string */
t15=*((C_word*)lf[53]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t9,t14,C_fix(0));}
else{
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1599,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 166  addext */
f_1502(t9,((C_word*)t0)[5]);}}}
else{
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1597 in k1552 in ##csi#lookup-script-file in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1599(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1599,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1605,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_a_i_string(&a,1,C_retrieve(lf[41]));
/* csi.scm: 168  string-append */
t4=*((C_word*)lf[48]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,((C_word*)t0)[2]);}}

/* k1603 in k1597 in k1552 in ##csi#lookup-script-file in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1605,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1612,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 169  string-split */
t3=C_retrieve(lf[55]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],lf[56]);}

/* k1610 in k1603 in k1597 in k1552 in ##csi#lookup-script-file in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1612(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1612,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1614,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=lf[54],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_1614(t5,((C_word*)t0)[2],t1);}

/* loop in k1610 in k1603 in k1597 in k1552 in ##csi#lookup-script-file in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_1614(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1614,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1624,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1641,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(t2,C_fix(0));
/* csi.scm: 171  ##csi#chop-separator */
t6=C_retrieve(lf[43]);
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k1639 in loop in k1610 in k1603 in k1597 in k1552 in ##csi#lookup-script-file in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 171  string-append */
t2=*((C_word*)lf[48]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1622 in loop in k1610 in k1603 in k1597 in k1552 in ##csi#lookup-script-file in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1627,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* csi.scm: 172  addext */
f_1502(t2,t1);}

/* k1625 in k1622 in loop in k1610 in k1603 in k1597 in k1552 in ##csi#lookup-script-file in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* csi.scm: 173  loop */
t3=((C_word*)((C_word*)t0)[2])[1];
f_1614(t3,((C_word*)t0)[4],t2);}}

/* k1576 in k1552 in ##csi#lookup-script-file in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1578,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1588,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1592,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 165  ##csi#chop-separator */
t4=C_retrieve(lf[43]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t1);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k1590 in k1576 in k1552 in ##csi#lookup-script-file in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1592,2,t0,t1);}
t2=(C_word)C_a_i_string(&a,1,C_retrieve(lf[41]));
/* csi.scm: 165  string-append */
t3=*((C_word*)lf[48]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,((C_word*)t0)[3],t1,t2,((C_word*)t0)[2]);}

/* k1586 in k1576 in k1552 in ##csi#lookup-script-file in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1588(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 165  addext */
f_1502(((C_word*)t0)[2],t1);}

/* loop in k1552 in ##csi#lookup-script-file in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static C_word C_fcall f_1529(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
loop:
C_stack_check;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t1,((C_word*)t0)[3]))){
return(C_SCHEME_FALSE);}
else{
t2=(C_word)C_subchar(((C_word*)t0)[2],t1);
t3=(C_word)C_eqp(t2,C_retrieve(lf[41]));
if(C_truep(t3)){
return(t1);}
else{
t4=(C_word)C_fixnum_plus(t1,C_fix(1));
t6=t4;
t1=t6;
goto loop;}}}

/* addext in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_1502(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1502,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1509,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 149  file-exists? */
t4=C_retrieve(lf[47]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k1507 in addext in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1509,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1512,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 151  string-append */
t3=*((C_word*)lf[48]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],lf[49]);}}

/* k1510 in k1507 in addext in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1512,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1518,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csi.scm: 152  file-exists? */
t3=C_retrieve(lf[47]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k1516 in k1510 in k1507 in addext in k1481 in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1518(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?((C_word*)t0)[2]:C_SCHEME_FALSE));}

/* ##csi#chop-separator in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1451(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1451,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1455,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_block_size(t2);
/* csi.scm: 135  sub1 */
t5=*((C_word*)lf[44]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}

/* k1453 in ##csi#chop-separator in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1461,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t1,C_fix(0)))){
t3=(C_word)C_i_string_ref(((C_word*)t0)[3],t1);
t4=t2;
f_1461(t4,(C_word)C_eqp(t3,((C_word*)t0)[2]));}
else{
t3=t2;
f_1461(t3,C_SCHEME_FALSE);}}

/* k1459 in k1453 in ##csi#chop-separator in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_fcall f_1461(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* csi.scm: 137  substring */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],C_fix(0),((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[3]);}}

/* ##sys#sharp-number-hook in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1441(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1441,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1449,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 126  ##csi#history-ref */
t5=C_retrieve(lf[37]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}

/* k1447 in ##sys#sharp-number-hook in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1449,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,lf[35],t1));}

/* ##sys#user-read-hook in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1412(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1412,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(C_make_character(41),t2);
t5=(C_truep(t4)?t4:(C_word)C_u_i_char_whitespacep(t2));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1429,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t7=(C_word)C_fixnum_difference(C_retrieve(lf[36]),C_fix(1));
/* csi.scm: 121  ##csi#history-ref */
t8=C_retrieve(lf[37]);
((C_proc3)C_retrieve_proc(t8))(3,t8,t6,t7);}
else{
/* csi.scm: 122  old-hook */
t6=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t6))(4,t6,t1,t2,t3);}}

/* k1427 in ##sys#user-read-hook in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1429,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,lf[35],t1));}

/* ##csi#print-banner in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1402,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1410,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 110  chicken-version */
t3=C_retrieve(lf[30]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_SCHEME_TRUE);}

/* k1408 in ##csi#print-banner in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 110  print */
t2=*((C_word*)lf[28]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[2],lf[14],t1,lf[29],lf[16]);}

/* ##csi#print-usage in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1390,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1394,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 82   display */
t3=*((C_word*)lf[23]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[25]);}

/* k1392 in ##csi#print-usage in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1394,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1397,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 95   display */
t3=*((C_word*)lf[23]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[17]);}

/* k1395 in k1392 in ##csi#print-usage in k1378 in k1375 in k1372 in k1369 in k1366 in k1363 in k1360 in k1357 in k1354 in k1351 in k1348 in k1345 in k1342 in k1339 in k1336 in k1333 in k1330 in k1327 in k1324 in k1321 in k1318 in k1315 in k1312 in k1309 in k1230 in k1227 in k1224 in k1221 in k1218 in k1215 in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csi.scm: 96   display */
t2=*((C_word*)lf[23]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],lf[24]);}

/* assign in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1144(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1144,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1148,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   ##sys#check-syntax */
t5=C_retrieve(lf[9]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[10],t2,lf[11]);}

/* k1146 in assign in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1148(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[45],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1148,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[5]))){
t2=(C_word)C_a_i_list(&a,3,lf[3],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,lf[4]);
t4=(C_word)C_a_i_list(&a,3,lf[3],C_SCHEME_END_OF_LIST,t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[5],t2,t4));}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_car(((C_word*)t0)[5]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[6],t3,((C_word*)t0)[4]));}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1185,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csi.scm: 52   map */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_retrieve(lf[8]),((C_word*)t0)[5]);}}}

/* k1183 in k1146 in assign in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1185,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[3],C_SCHEME_END_OF_LIST,((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1204,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1206,a[2]=lf[7],tmp=(C_word)a,a+=3,tmp);
/* csi.scm: 52   map */
t5=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,t4,((C_word*)t0)[2],t1);}

/* a1205 in k1183 in k1146 in assign in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1206(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1206,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[6],t2,t3));}

/* k1202 in k1183 in k1146 in assign in k1141 in k1138 in k1135 in k1132 in k1129 in k1126 in k1123 in k1120 in k1117 in k1114 in k1111 in k1108 in k1105 in k1102 in k1099 in k1096 in k1093 */
static void C_ccall f_1204(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1204,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[3],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[5],((C_word*)t0)[2],t3));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[778] = {
{"toplevelcsi.scm",(void*)C_toplevel},
{"f_1095csi.scm",(void*)f_1095},
{"f_1098csi.scm",(void*)f_1098},
{"f_1101csi.scm",(void*)f_1101},
{"f_1104csi.scm",(void*)f_1104},
{"f_1107csi.scm",(void*)f_1107},
{"f_8928csi.scm",(void*)f_8928},
{"f_8932csi.scm",(void*)f_8932},
{"f_8935csi.scm",(void*)f_8935},
{"f_8938csi.scm",(void*)f_8938},
{"f_8944csi.scm",(void*)f_8944},
{"f_9150csi.scm",(void*)f_9150},
{"f_9130csi.scm",(void*)f_9130},
{"f_9126csi.scm",(void*)f_9126},
{"f_9106csi.scm",(void*)f_9106},
{"f_8969csi.scm",(void*)f_8969},
{"f_8979csi.scm",(void*)f_8979},
{"f_9098csi.scm",(void*)f_9098},
{"f_8982csi.scm",(void*)f_8982},
{"f_9094csi.scm",(void*)f_9094},
{"f_8985csi.scm",(void*)f_8985},
{"f_9016csi.scm",(void*)f_9016},
{"f_8996csi.scm",(void*)f_8996},
{"f_8967csi.scm",(void*)f_8967},
{"f_1110csi.scm",(void*)f_1110},
{"f_8840csi.scm",(void*)f_8840},
{"f_8857csi.scm",(void*)f_8857},
{"f_8860csi.scm",(void*)f_8860},
{"f_8866csi.scm",(void*)f_8866},
{"f_1113csi.scm",(void*)f_1113},
{"f_8799csi.scm",(void*)f_8799},
{"f_8803csi.scm",(void*)f_8803},
{"f_1116csi.scm",(void*)f_1116},
{"f_8783csi.scm",(void*)f_8783},
{"f_8793csi.scm",(void*)f_8793},
{"f_8791csi.scm",(void*)f_8791},
{"f_1119csi.scm",(void*)f_1119},
{"f_8728csi.scm",(void*)f_8728},
{"f_8732csi.scm",(void*)f_8732},
{"f_8778csi.scm",(void*)f_8778},
{"f_8735csi.scm",(void*)f_8735},
{"f_8744csi.scm",(void*)f_8744},
{"f_8752csi.scm",(void*)f_8752},
{"f_8754csi.scm",(void*)f_8754},
{"f_8771csi.scm",(void*)f_8771},
{"f_8742csi.scm",(void*)f_8742},
{"f_1122csi.scm",(void*)f_1122},
{"f_8668csi.scm",(void*)f_8668},
{"f_8672csi.scm",(void*)f_8672},
{"f_1125csi.scm",(void*)f_1125},
{"f_8609csi.scm",(void*)f_8609},
{"f_8613csi.scm",(void*)f_8613},
{"f_8640csi.scm",(void*)f_8640},
{"f_1128csi.scm",(void*)f_1128},
{"f_8435csi.scm",(void*)f_8435},
{"f_8439csi.scm",(void*)f_8439},
{"f_8442csi.scm",(void*)f_8442},
{"f_8603csi.scm",(void*)f_8603},
{"f_8445csi.scm",(void*)f_8445},
{"f_8597csi.scm",(void*)f_8597},
{"f_8448csi.scm",(void*)f_8448},
{"f_8595csi.scm",(void*)f_8595},
{"f_8559csi.scm",(void*)f_8559},
{"f_8573csi.scm",(void*)f_8573},
{"f_8587csi.scm",(void*)f_8587},
{"f_8567csi.scm",(void*)f_8567},
{"f_8563csi.scm",(void*)f_8563},
{"f_8455csi.scm",(void*)f_8455},
{"f_8551csi.scm",(void*)f_8551},
{"f_8527csi.scm",(void*)f_8527},
{"f_8545csi.scm",(void*)f_8545},
{"f_8535csi.scm",(void*)f_8535},
{"f_8531csi.scm",(void*)f_8531},
{"f_8523csi.scm",(void*)f_8523},
{"f_8507csi.scm",(void*)f_8507},
{"f_8483csi.scm",(void*)f_8483},
{"f_8501csi.scm",(void*)f_8501},
{"f_8491csi.scm",(void*)f_8491},
{"f_8487csi.scm",(void*)f_8487},
{"f_8479csi.scm",(void*)f_8479},
{"f_1131csi.scm",(void*)f_1131},
{"f_8340csi.scm",(void*)f_8340},
{"f_8376csi.scm",(void*)f_8376},
{"f_8389csi.scm",(void*)f_8389},
{"f_8347csi.scm",(void*)f_8347},
{"f_1134csi.scm",(void*)f_1134},
{"f_8230csi.scm",(void*)f_8230},
{"f_8234csi.scm",(void*)f_8234},
{"f_8237csi.scm",(void*)f_8237},
{"f_8240csi.scm",(void*)f_8240},
{"f_8243csi.scm",(void*)f_8243},
{"f_8334csi.scm",(void*)f_8334},
{"f_8246csi.scm",(void*)f_8246},
{"f_8328csi.scm",(void*)f_8328},
{"f_8249csi.scm",(void*)f_8249},
{"f_8322csi.scm",(void*)f_8322},
{"f_8326csi.scm",(void*)f_8326},
{"f_8256csi.scm",(void*)f_8256},
{"f_8294csi.scm",(void*)f_8294},
{"f_8292csi.scm",(void*)f_8292},
{"f_1137csi.scm",(void*)f_1137},
{"f_8220csi.scm",(void*)f_8220},
{"f_1140csi.scm",(void*)f_1140},
{"f_8206csi.scm",(void*)f_8206},
{"f_1143csi.scm",(void*)f_1143},
{"f_1217csi.scm",(void*)f_1217},
{"f_1220csi.scm",(void*)f_1220},
{"f_7944csi.scm",(void*)f_7944},
{"f_7948csi.scm",(void*)f_7948},
{"f_7957csi.scm",(void*)f_7957},
{"f_8166csi.scm",(void*)f_8166},
{"f_8179csi.scm",(void*)f_8179},
{"f_7960csi.scm",(void*)f_7960},
{"f_8156csi.scm",(void*)f_8156},
{"f_8164csi.scm",(void*)f_8164},
{"f_7963csi.scm",(void*)f_7963},
{"f_8110csi.scm",(void*)f_8110},
{"f_8143csi.scm",(void*)f_8143},
{"f_8150csi.scm",(void*)f_8150},
{"f_8126csi.scm",(void*)f_8126},
{"f_7975csi.scm",(void*)f_7975},
{"f_8104csi.scm",(void*)f_8104},
{"f_7982csi.scm",(void*)f_7982},
{"f_7984csi.scm",(void*)f_7984},
{"f_8098csi.scm",(void*)f_8098},
{"f_8018csi.scm",(void*)f_8018},
{"f_8072csi.scm",(void*)f_8072},
{"f_8049csi.scm",(void*)f_8049},
{"f_8029csi.scm",(void*)f_8029},
{"f_8004csi.scm",(void*)f_8004},
{"f_8012csi.scm",(void*)f_8012},
{"f_8002csi.scm",(void*)f_8002},
{"f_7964csi.scm",(void*)f_7964},
{"f_7904csi.scm",(void*)f_7904},
{"f_7927csi.scm",(void*)f_7927},
{"f_7931csi.scm",(void*)f_7931},
{"f_7873csi.scm",(void*)f_7873},
{"f_7894csi.scm",(void*)f_7894},
{"f_1223csi.scm",(void*)f_1223},
{"f_7822csi.scm",(void*)f_7822},
{"f_7826csi.scm",(void*)f_7826},
{"f_7837csi.scm",(void*)f_7837},
{"f_7862csi.scm",(void*)f_7862},
{"f_1226csi.scm",(void*)f_1226},
{"f_7702csi.scm",(void*)f_7702},
{"f_7706csi.scm",(void*)f_7706},
{"f_7816csi.scm",(void*)f_7816},
{"f_7814csi.scm",(void*)f_7814},
{"f_7715csi.scm",(void*)f_7715},
{"f_7802csi.scm",(void*)f_7802},
{"f_7810csi.scm",(void*)f_7810},
{"f_7718csi.scm",(void*)f_7718},
{"f_7796csi.scm",(void*)f_7796},
{"f_7738csi.scm",(void*)f_7738},
{"f_7748csi.scm",(void*)f_7748},
{"f_7768csi.scm",(void*)f_7768},
{"f_7774csi.scm",(void*)f_7774},
{"f_7782csi.scm",(void*)f_7782},
{"f_7772csi.scm",(void*)f_7772},
{"f_7746csi.scm",(void*)f_7746},
{"f_7742csi.scm",(void*)f_7742},
{"f_7719csi.scm",(void*)f_7719},
{"f_1229csi.scm",(void*)f_1229},
{"f_7681csi.scm",(void*)f_7681},
{"f_7685csi.scm",(void*)f_7685},
{"f_1232csi.scm",(void*)f_1232},
{"f_7671csi.scm",(void*)f_7671},
{"f_1238csi.scm",(void*)f_1238},
{"f_1247csi.scm",(void*)f_1247},
{"f_1263csi.scm",(void*)f_1263},
{"f_1250csi.scm",(void*)f_1250},
{"f_1311csi.scm",(void*)f_1311},
{"f_7650csi.scm",(void*)f_7650},
{"f_7654csi.scm",(void*)f_7654},
{"f_1314csi.scm",(void*)f_1314},
{"f_7636csi.scm",(void*)f_7636},
{"f_1317csi.scm",(void*)f_1317},
{"f_7520csi.scm",(void*)f_7520},
{"f_7524csi.scm",(void*)f_7524},
{"f_7533csi.scm",(void*)f_7533},
{"f_7547csi.scm",(void*)f_7547},
{"f_7611csi.scm",(void*)f_7611},
{"f_7593csi.scm",(void*)f_7593},
{"f_7576csi.scm",(void*)f_7576},
{"f_1320csi.scm",(void*)f_1320},
{"f_7274csi.scm",(void*)f_7274},
{"f_7429csi.scm",(void*)f_7429},
{"f_7500csi.scm",(void*)f_7500},
{"f_7445csi.scm",(void*)f_7445},
{"f_7443csi.scm",(void*)f_7443},
{"f_7287csi.scm",(void*)f_7287},
{"f_7413csi.scm",(void*)f_7413},
{"f_7375csi.scm",(void*)f_7375},
{"f_7336csi.scm",(void*)f_7336},
{"f_7277csi.scm",(void*)f_7277},
{"f_1323csi.scm",(void*)f_1323},
{"f_7185csi.scm",(void*)f_7185},
{"f_7195csi.scm",(void*)f_7195},
{"f_7208csi.scm",(void*)f_7208},
{"f_7224csi.scm",(void*)f_7224},
{"f_7252csi.scm",(void*)f_7252},
{"f_7206csi.scm",(void*)f_7206},
{"f_1326csi.scm",(void*)f_1326},
{"f_6899csi.scm",(void*)f_6899},
{"f_7096csi.scm",(void*)f_7096},
{"f_7099csi.scm",(void*)f_7099},
{"f_7102csi.scm",(void*)f_7102},
{"f_7175csi.scm",(void*)f_7175},
{"f_7183csi.scm",(void*)f_7183},
{"f_7118csi.scm",(void*)f_7118},
{"f_7121csi.scm",(void*)f_7121},
{"f_7124csi.scm",(void*)f_7124},
{"f_7127csi.scm",(void*)f_7127},
{"f_7165csi.scm",(void*)f_7165},
{"f_7173csi.scm",(void*)f_7173},
{"f_7130csi.scm",(void*)f_7130},
{"f_6910csi.scm",(void*)f_6910},
{"f_6914csi.scm",(void*)f_6914},
{"f_6918csi.scm",(void*)f_6918},
{"f_6920csi.scm",(void*)f_6920},
{"f_6965csi.scm",(void*)f_6965},
{"f_6977csi.scm",(void*)f_6977},
{"f_6973csi.scm",(void*)f_6973},
{"f_6941csi.scm",(void*)f_6941},
{"f_7133csi.scm",(void*)f_7133},
{"f_6993csi.scm",(void*)f_6993},
{"f_7093csi.scm",(void*)f_7093},
{"f_7057csi.scm",(void*)f_7057},
{"f_7027csi.scm",(void*)f_7027},
{"f_7136csi.scm",(void*)f_7136},
{"f_7103csi.scm",(void*)f_7103},
{"f_7115csi.scm",(void*)f_7115},
{"f_7111csi.scm",(void*)f_7111},
{"f_1329csi.scm",(void*)f_1329},
{"f_6842csi.scm",(void*)f_6842},
{"f_6846csi.scm",(void*)f_6846},
{"f_1332csi.scm",(void*)f_1332},
{"f_6689csi.scm",(void*)f_6689},
{"f_6693csi.scm",(void*)f_6693},
{"f_6696csi.scm",(void*)f_6696},
{"f_6699csi.scm",(void*)f_6699},
{"f_6712csi.scm",(void*)f_6712},
{"f_6762csi.scm",(void*)f_6762},
{"f_6773csi.scm",(void*)f_6773},
{"f_6710csi.scm",(void*)f_6710},
{"f_1335csi.scm",(void*)f_1335},
{"f_6413csi.scm",(void*)f_6413},
{"f_6447csi.scm",(void*)f_6447},
{"f_6450csi.scm",(void*)f_6450},
{"f_6676csi.scm",(void*)f_6676},
{"f_6686csi.scm",(void*)f_6686},
{"f_6674csi.scm",(void*)f_6674},
{"f_6453csi.scm",(void*)f_6453},
{"f_6422csi.scm",(void*)f_6422},
{"f_6436csi.scm",(void*)f_6436},
{"f_6440csi.scm",(void*)f_6440},
{"f_6456csi.scm",(void*)f_6456},
{"f_6459csi.scm",(void*)f_6459},
{"f_6462csi.scm",(void*)f_6462},
{"f_6469csi.scm",(void*)f_6469},
{"f_6483csi.scm",(void*)f_6483},
{"f_6493csi.scm",(void*)f_6493},
{"f_6497csi.scm",(void*)f_6497},
{"f_6507csi.scm",(void*)f_6507},
{"f_6523csi.scm",(void*)f_6523},
{"f_6542csi.scm",(void*)f_6542},
{"f_6598csi.scm",(void*)f_6598},
{"f_6609csi.scm",(void*)f_6609},
{"f_6527csi.scm",(void*)f_6527},
{"f_6540csi.scm",(void*)f_6540},
{"f_6513csi.scm",(void*)f_6513},
{"f_6521csi.scm",(void*)f_6521},
{"f_6511csi.scm",(void*)f_6511},
{"f_6481csi.scm",(void*)f_6481},
{"f_1338csi.scm",(void*)f_1338},
{"f_6356csi.scm",(void*)f_6356},
{"f_6396csi.scm",(void*)f_6396},
{"f_6366csi.scm",(void*)f_6366},
{"f_1341csi.scm",(void*)f_1341},
{"f_6280csi.scm",(void*)f_6280},
{"f_6284csi.scm",(void*)f_6284},
{"f_6287csi.scm",(void*)f_6287},
{"f_1344csi.scm",(void*)f_1344},
{"f_6096csi.scm",(void*)f_6096},
{"f_6100csi.scm",(void*)f_6100},
{"f_6103csi.scm",(void*)f_6103},
{"f_6246csi.scm",(void*)f_6246},
{"f_6242csi.scm",(void*)f_6242},
{"f_6105csi.scm",(void*)f_6105},
{"f_6193csi.scm",(void*)f_6193},
{"f_6191csi.scm",(void*)f_6191},
{"f_6161csi.scm",(void*)f_6161},
{"f_6128csi.scm",(void*)f_6128},
{"f_1347csi.scm",(void*)f_1347},
{"f_5906csi.scm",(void*)f_5906},
{"f_5913csi.scm",(void*)f_5913},
{"f_6087csi.scm",(void*)f_6087},
{"f_6085csi.scm",(void*)f_6085},
{"f_5938csi.scm",(void*)f_5938},
{"f_5964csi.scm",(void*)f_5964},
{"f_5992csi.scm",(void*)f_5992},
{"f_5984csi.scm",(void*)f_5984},
{"f_5976csi.scm",(void*)f_5976},
{"f_5936csi.scm",(void*)f_5936},
{"f_1350csi.scm",(void*)f_1350},
{"f_5897csi.scm",(void*)f_5897},
{"f_5901csi.scm",(void*)f_5901},
{"f_1353csi.scm",(void*)f_1353},
{"f_5878csi.scm",(void*)f_5878},
{"f_5882csi.scm",(void*)f_5882},
{"f_5891csi.scm",(void*)f_5891},
{"f_5889csi.scm",(void*)f_5889},
{"f_1356csi.scm",(void*)f_1356},
{"f_5859csi.scm",(void*)f_5859},
{"f_5863csi.scm",(void*)f_5863},
{"f_5872csi.scm",(void*)f_5872},
{"f_5870csi.scm",(void*)f_5870},
{"f_1359csi.scm",(void*)f_1359},
{"f_5731csi.scm",(void*)f_5731},
{"f_5737csi.scm",(void*)f_5737},
{"f_5818csi.scm",(void*)f_5818},
{"f_5747csi.scm",(void*)f_5747},
{"f_5750csi.scm",(void*)f_5750},
{"f_5756csi.scm",(void*)f_5756},
{"f_5763csi.scm",(void*)f_5763},
{"f_5779csi.scm",(void*)f_5779},
{"f_1362csi.scm",(void*)f_1362},
{"f_5588csi.scm",(void*)f_5588},
{"f_5594csi.scm",(void*)f_5594},
{"f_5706csi.scm",(void*)f_5706},
{"f_5679csi.scm",(void*)f_5679},
{"f_5604csi.scm",(void*)f_5604},
{"f_5607csi.scm",(void*)f_5607},
{"f_5613csi.scm",(void*)f_5613},
{"f_5624csi.scm",(void*)f_5624},
{"f_5640csi.scm",(void*)f_5640},
{"f_1365csi.scm",(void*)f_1365},
{"f_5529csi.scm",(void*)f_5529},
{"f_1368csi.scm",(void*)f_1368},
{"f_5358csi.scm",(void*)f_5358},
{"f_5364csi.scm",(void*)f_5364},
{"f_5438csi.scm",(void*)f_5438},
{"f_5441csi.scm",(void*)f_5441},
{"f_5514csi.scm",(void*)f_5514},
{"f_5507csi.scm",(void*)f_5507},
{"f_5499csi.scm",(void*)f_5499},
{"f_5486csi.scm",(void*)f_5486},
{"f_5465csi.scm",(void*)f_5465},
{"f_5374csi.scm",(void*)f_5374},
{"f_1371csi.scm",(void*)f_1371},
{"f_5307csi.scm",(void*)f_5307},
{"f_1374csi.scm",(void*)f_1374},
{"f_5247csi.scm",(void*)f_5247},
{"f_5257csi.scm",(void*)f_5257},
{"f_5276csi.scm",(void*)f_5276},
{"f_5260csi.scm",(void*)f_5260},
{"f_1377csi.scm",(void*)f_1377},
{"f_1380csi.scm",(void*)f_1380},
{"f_1483csi.scm",(void*)f_1483},
{"f_5241csi.scm",(void*)f_5241},
{"f_1734csi.scm",(void*)f_1734},
{"f_1763csi.scm",(void*)f_1763},
{"f_2995csi.scm",(void*)f_2995},
{"f_5233csi.scm",(void*)f_5233},
{"f_5239csi.scm",(void*)f_5239},
{"f_5236csi.scm",(void*)f_5236},
{"f_4575csi.scm",(void*)f_4575},
{"f_5227csi.scm",(void*)f_5227},
{"f_2722csi.scm",(void*)f_2722},
{"f_2752csi.scm",(void*)f_2752},
{"f_2770csi.scm",(void*)f_2770},
{"f_2809csi.scm",(void*)f_2809},
{"f_2815csi.scm",(void*)f_2815},
{"f_2776csi.scm",(void*)f_2776},
{"f_2784csi.scm",(void*)f_2784},
{"f_2786csi.scm",(void*)f_2786},
{"f_2803csi.scm",(void*)f_2803},
{"f_2758csi.scm",(void*)f_2758},
{"f_2764csi.scm",(void*)f_2764},
{"f_2750csi.scm",(void*)f_2750},
{"f_2747csi.scm",(void*)f_2747},
{"f_2727csi.scm",(void*)f_2727},
{"f_2737csi.scm",(void*)f_2737},
{"f_2740csi.scm",(void*)f_2740},
{"f_4579csi.scm",(void*)f_4579},
{"f_5223csi.scm",(void*)f_5223},
{"f_4582csi.scm",(void*)f_4582},
{"f_4585csi.scm",(void*)f_4585},
{"f_4588csi.scm",(void*)f_4588},
{"f_5215csi.scm",(void*)f_5215},
{"f_5202csi.scm",(void*)f_5202},
{"f_5162csi.scm",(void*)f_5162},
{"f_5098csi.scm",(void*)f_5098},
{"f_5101csi.scm",(void*)f_5101},
{"f_5104csi.scm",(void*)f_5104},
{"f_5148csi.scm",(void*)f_5148},
{"f_5144csi.scm",(void*)f_5144},
{"f_5113csi.scm",(void*)f_5113},
{"f_5116csi.scm",(void*)f_5116},
{"f_4591csi.scm",(void*)f_4591},
{"f_4594csi.scm",(void*)f_4594},
{"f_5092csi.scm",(void*)f_5092},
{"f_4597csi.scm",(void*)f_4597},
{"f_5086csi.scm",(void*)f_5086},
{"f_4600csi.scm",(void*)f_4600},
{"f_5080csi.scm",(void*)f_5080},
{"f_5076csi.scm",(void*)f_5076},
{"f_4603csi.scm",(void*)f_4603},
{"f_5066csi.scm",(void*)f_5066},
{"f_5069csi.scm",(void*)f_5069},
{"f_4690csi.scm",(void*)f_4690},
{"f_5057csi.scm",(void*)f_5057},
{"f_5060csi.scm",(void*)f_5060},
{"f_4693csi.scm",(void*)f_4693},
{"f_5054csi.scm",(void*)f_5054},
{"f_5047csi.scm",(void*)f_5047},
{"f_4696csi.scm",(void*)f_4696},
{"f_5034csi.scm",(void*)f_5034},
{"f_5037csi.scm",(void*)f_5037},
{"f_4699csi.scm",(void*)f_4699},
{"f_5028csi.scm",(void*)f_5028},
{"f_4702csi.scm",(void*)f_4702},
{"f_5013csi.scm",(void*)f_5013},
{"f_5016csi.scm",(void*)f_5016},
{"f_5019csi.scm",(void*)f_5019},
{"f_4705csi.scm",(void*)f_4705},
{"f_5010csi.scm",(void*)f_5010},
{"f_4708csi.scm",(void*)f_4708},
{"f_5006csi.scm",(void*)f_5006},
{"f_4711csi.scm",(void*)f_4711},
{"f_5002csi.scm",(void*)f_5002},
{"f_4990csi.scm",(void*)f_4990},
{"f_4998csi.scm",(void*)f_4998},
{"f_4994csi.scm",(void*)f_4994},
{"f_4986csi.scm",(void*)f_4986},
{"f_4715csi.scm",(void*)f_4715},
{"f_4722csi.scm",(void*)f_4722},
{"f_4725csi.scm",(void*)f_4725},
{"f_4920csi.scm",(void*)f_4920},
{"f_4652csi.scm",(void*)f_4652},
{"f_4658csi.scm",(void*)f_4658},
{"f_4684csi.scm",(void*)f_4684},
{"f_4664csi.scm",(void*)f_4664},
{"f_4667csi.scm",(void*)f_4667},
{"f_4673csi.scm",(void*)f_4673},
{"f_4728csi.scm",(void*)f_4728},
{"f_4733csi.scm",(void*)f_4733},
{"f_4859csi.scm",(void*)f_4859},
{"f_4865csi.scm",(void*)f_4865},
{"f_4880csi.scm",(void*)f_4880},
{"f_4891csi.scm",(void*)f_4891},
{"f_4870csi.scm",(void*)f_4870},
{"f_4878csi.scm",(void*)f_4878},
{"f_4822csi.scm",(void*)f_4822},
{"f_4833csi.scm",(void*)f_4833},
{"f_4835csi.scm",(void*)f_4835},
{"f_4845csi.scm",(void*)f_4845},
{"f_4852csi.scm",(void*)f_4852},
{"f_4825csi.scm",(void*)f_4825},
{"f_4806csi.scm",(void*)f_4806},
{"f_4790csi.scm",(void*)f_4790},
{"f_4761csi.scm",(void*)f_4761},
{"f_4746csi.scm",(void*)f_4746},
{"f_4605csi.scm",(void*)f_4605},
{"f_4611csi.scm",(void*)f_4611},
{"f_4638csi.scm",(void*)f_4638},
{"f_4414csi.scm",(void*)f_4414},
{"f_4420csi.scm",(void*)f_4420},
{"f_4445csi.scm",(void*)f_4445},
{"f_4451csi.scm",(void*)f_4451},
{"f_4508csi.scm",(void*)f_4508},
{"f_4501csi.scm",(void*)f_4501},
{"f_4467csi.scm",(void*)f_4467},
{"f_4490csi.scm",(void*)f_4490},
{"f_4480csi.scm",(void*)f_4480},
{"f_4484csi.scm",(void*)f_4484},
{"f_4549csi.scm",(void*)f_4549},
{"f_4357csi.scm",(void*)f_4357},
{"f_4363csi.scm",(void*)f_4363},
{"f_4375csi.scm",(void*)f_4375},
{"f_4298csi.scm",(void*)f_4298},
{"f_4302csi.scm",(void*)f_4302},
{"f_4307csi.scm",(void*)f_4307},
{"f_4336csi.scm",(void*)f_4336},
{"f_4323csi.scm",(void*)f_4323},
{"f_4260csi.scm",(void*)f_4260},
{"f_4267csi.scm",(void*)f_4267},
{"f_4272csi.scm",(void*)f_4272},
{"f_4276csi.scm",(void*)f_4276},
{"f_4296csi.scm",(void*)f_4296},
{"f_4289csi.scm",(void*)f_4289},
{"f_4215csi.scm",(void*)f_4215},
{"f_4222csi.scm",(void*)f_4222},
{"f_4225csi.scm",(void*)f_4225},
{"f_4230csi.scm",(void*)f_4230},
{"f_4234csi.scm",(void*)f_4234},
{"f_4258csi.scm",(void*)f_4258},
{"f_4247csi.scm",(void*)f_4247},
{"f_4254csi.scm",(void*)f_4254},
{"f_4244csi.scm",(void*)f_4244},
{"f_4183csi.scm",(void*)f_4183},
{"f_4190csi.scm",(void*)f_4190},
{"f_4195csi.scm",(void*)f_4195},
{"f_4199csi.scm",(void*)f_4199},
{"f_4213csi.scm",(void*)f_4213},
{"f_4155csi.scm",(void*)f_4155},
{"f_4162csi.scm",(void*)f_4162},
{"f_4167csi.scm",(void*)f_4167},
{"f_4171csi.scm",(void*)f_4171},
{"f_4145csi.scm",(void*)f_4145},
{"f_4131csi.scm",(void*)f_4131},
{"f_4136csi.scm",(void*)f_4136},
{"f_3922csi.scm",(void*)f_3922},
{"f_3954csi.scm",(void*)f_3954},
{"f_4129csi.scm",(void*)f_4129},
{"f_3964csi.scm",(void*)f_3964},
{"f_3967csi.scm",(void*)f_3967},
{"f_4039csi.scm",(void*)f_4039},
{"f_4100csi.scm",(void*)f_4100},
{"f_4122csi.scm",(void*)f_4122},
{"f_4118csi.scm",(void*)f_4118},
{"f_4103csi.scm",(void*)f_4103},
{"f_4058csi.scm",(void*)f_4058},
{"f_4076csi.scm",(void*)f_4076},
{"f_4086csi.scm",(void*)f_4086},
{"f_3970csi.scm",(void*)f_3970},
{"f_3973csi.scm",(void*)f_3973},
{"f_3988csi.scm",(void*)f_3988},
{"f_4001csi.scm",(void*)f_4001},
{"f_4004csi.scm",(void*)f_4004},
{"f_3976csi.scm",(void*)f_3976},
{"f_3979csi.scm",(void*)f_3979},
{"f_3925csi.scm",(void*)f_3925},
{"f_3929csi.scm",(void*)f_3929},
{"f_3945csi.scm",(void*)f_3945},
{"f_3761csi.scm",(void*)f_3761},
{"f_3874csi.scm",(void*)f_3874},
{"f_3869csi.scm",(void*)f_3869},
{"f_3763csi.scm",(void*)f_3763},
{"f_3788csi.scm",(void*)f_3788},
{"f_3831csi.scm",(void*)f_3831},
{"f_3841csi.scm",(void*)f_3841},
{"f_3812csi.scm",(void*)f_3812},
{"f_3795csi.scm",(void*)f_3795},
{"f_3766csi.scm",(void*)f_3766},
{"f_3755csi.scm",(void*)f_3755},
{"f_2997csi.scm",(void*)f_2997},
{"f_3001csi.scm",(void*)f_3001},
{"f_3734csi.scm",(void*)f_3734},
{"f_3129csi.scm",(void*)f_3129},
{"f_3228csi.scm",(void*)f_3228},
{"f_3375csi.scm",(void*)f_3375},
{"f_3403csi.scm",(void*)f_3403},
{"f_3412csi.scm",(void*)f_3412},
{"f_3506csi.scm",(void*)f_3506},
{"f_3640csi.scm",(void*)f_3640},
{"f_3655csi.scm",(void*)f_3655},
{"f_3694csi.scm",(void*)f_3694},
{"f_3683csi.scm",(void*)f_3683},
{"f_3679csi.scm",(void*)f_3679},
{"f_3662csi.scm",(void*)f_3662},
{"f_3573csi.scm",(void*)f_3573},
{"f_3578csi.scm",(void*)f_3578},
{"f_3582csi.scm",(void*)f_3582},
{"f_3591csi.scm",(void*)f_3591},
{"f_3626csi.scm",(void*)f_3626},
{"f_3618csi.scm",(void*)f_3618},
{"f_3601csi.scm",(void*)f_3601},
{"f_3537csi.scm",(void*)f_3537},
{"f_3540csi.scm",(void*)f_3540},
{"f_3545csi.scm",(void*)f_3545},
{"f_3525csi.scm",(void*)f_3525},
{"f_3512csi.scm",(void*)f_3512},
{"f_3500csi.scm",(void*)f_3500},
{"f_3419csi.scm",(void*)f_3419},
{"f_3430csi.scm",(void*)f_3430},
{"f_3394csi.scm",(void*)f_3394},
{"f_3335csi.scm",(void*)f_3335},
{"f_3349csi.scm",(void*)f_3349},
{"f_3345csi.scm",(void*)f_3345},
{"f_3291csi.scm",(void*)f_3291},
{"f_3258csi.scm",(void*)f_3258},
{"f_3271csi.scm",(void*)f_3271},
{"f_3261csi.scm",(void*)f_3261},
{"f_3268csi.scm",(void*)f_3268},
{"f_3198csi.scm",(void*)f_3198},
{"f_3204csi.scm",(void*)f_3204},
{"f_3132csi.scm",(void*)f_3132},
{"f_3003csi.scm",(void*)f_3003},
{"f_3126csi.scm",(void*)f_3126},
{"f_3010csi.scm",(void*)f_3010},
{"f_3015csi.scm",(void*)f_3015},
{"f_3038csi.scm",(void*)f_3038},
{"f_3047csi.scm",(void*)f_3047},
{"f_3111csi.scm",(void*)f_3111},
{"f_3057csi.scm",(void*)f_3057},
{"f_3060csi.scm",(void*)f_3060},
{"f_2821csi.scm",(void*)f_2821},
{"f_2829csi.scm",(void*)f_2829},
{"f_2831csi.scm",(void*)f_2831},
{"f_2835csi.scm",(void*)f_2835},
{"f_2838csi.scm",(void*)f_2838},
{"f_2841csi.scm",(void*)f_2841},
{"f_2858csi.scm",(void*)f_2858},
{"f_2981csi.scm",(void*)f_2981},
{"f_2977csi.scm",(void*)f_2977},
{"f_2960csi.scm",(void*)f_2960},
{"f_2964csi.scm",(void*)f_2964},
{"f_2969csi.scm",(void*)f_2969},
{"f_2861csi.scm",(void*)f_2861},
{"f_2889csi.scm",(void*)f_2889},
{"f_2897csi.scm",(void*)f_2897},
{"f_2901csi.scm",(void*)f_2901},
{"f_2905csi.scm",(void*)f_2905},
{"f_2909csi.scm",(void*)f_2909},
{"f_2913csi.scm",(void*)f_2913},
{"f_2864csi.scm",(void*)f_2864},
{"f_2867csi.scm",(void*)f_2867},
{"f_2870csi.scm",(void*)f_2870},
{"f_2873csi.scm",(void*)f_2873},
{"f_2843csi.scm",(void*)f_2843},
{"f_2851csi.scm",(void*)f_2851},
{"f_2427csi.scm",(void*)f_2427},
{"f_2432csi.scm",(void*)f_2432},
{"f_2435csi.scm",(void*)f_2435},
{"f_2438csi.scm",(void*)f_2438},
{"f_2441csi.scm",(void*)f_2441},
{"f_2452csi.scm",(void*)f_2452},
{"f_2456csi.scm",(void*)f_2456},
{"f_2444csi.scm",(void*)f_2444},
{"f_2447csi.scm",(void*)f_2447},
{"f_2404csi.scm",(void*)f_2404},
{"f_2408csi.scm",(void*)f_2408},
{"f_2412csi.scm",(void*)f_2412},
{"f_2415csi.scm",(void*)f_2415},
{"f_2418csi.scm",(void*)f_2418},
{"f_2376csi.scm",(void*)f_2376},
{"f_2380csi.scm",(void*)f_2380},
{"f_2385csi.scm",(void*)f_2385},
{"f_2395csi.scm",(void*)f_2395},
{"f_2402csi.scm",(void*)f_2402},
{"f_2335csi.scm",(void*)f_2335},
{"f_2341csi.scm",(void*)f_2341},
{"f_2357csi.scm",(void*)f_2357},
{"f_2367csi.scm",(void*)f_2367},
{"f_1806csi.scm",(void*)f_1806},
{"f_1823csi.scm",(void*)f_1823},
{"f_2316csi.scm",(void*)f_2316},
{"f_2320csi.scm",(void*)f_2320},
{"f_2310csi.scm",(void*)f_2310},
{"f_1829csi.scm",(void*)f_1829},
{"f_2296csi.scm",(void*)f_2296},
{"f_2272csi.scm",(void*)f_2272},
{"f_2280csi.scm",(void*)f_2280},
{"f_2275csi.scm",(void*)f_2275},
{"f_2253csi.scm",(void*)f_2253},
{"f_2256csi.scm",(void*)f_2256},
{"f_2259csi.scm",(void*)f_2259},
{"f_2230csi.scm",(void*)f_2230},
{"f_2233csi.scm",(void*)f_2233},
{"f_2240csi.scm",(void*)f_2240},
{"f_2214csi.scm",(void*)f_2214},
{"f_2186csi.scm",(void*)f_2186},
{"f_2163csi.scm",(void*)f_2163},
{"f_2176csi.scm",(void*)f_2176},
{"f_2154csi.scm",(void*)f_2154},
{"f_2150csi.scm",(void*)f_2150},
{"f_2133csi.scm",(void*)f_2133},
{"f_2129csi.scm",(void*)f_2129},
{"f_2125csi.scm",(void*)f_2125},
{"f_2689csi.scm",(void*)f_2689},
{"f_2693csi.scm",(void*)f_2693},
{"f_2712csi.scm",(void*)f_2712},
{"f_2112csi.scm",(void*)f_2112},
{"f_2108csi.scm",(void*)f_2108},
{"f_2104csi.scm",(void*)f_2104},
{"f_2621csi.scm",(void*)f_2621},
{"f_2625csi.scm",(void*)f_2625},
{"f_2670csi.scm",(void*)f_2670},
{"f_2677csi.scm",(void*)f_2677},
{"f_2631csi.scm",(void*)f_2631},
{"f_2652csi.scm",(void*)f_2652},
{"f_2656csi.scm",(void*)f_2656},
{"f_2608csi.scm",(void*)f_2608},
{"f_2091csi.scm",(void*)f_2091},
{"f_2087csi.scm",(void*)f_2087},
{"f_2083csi.scm",(void*)f_2083},
{"f_2567csi.scm",(void*)f_2567},
{"f_2571csi.scm",(void*)f_2571},
{"f_2590csi.scm",(void*)f_2590},
{"f_2070csi.scm",(void*)f_2070},
{"f_2066csi.scm",(void*)f_2066},
{"f_2062csi.scm",(void*)f_2062},
{"f_2486csi.scm",(void*)f_2486},
{"f_2490csi.scm",(void*)f_2490},
{"f_2529csi.scm",(void*)f_2529},
{"f_2533csi.scm",(void*)f_2533},
{"f_2544csi.scm",(void*)f_2544},
{"f_2548csi.scm",(void*)f_2548},
{"f_2538csi.scm",(void*)f_2538},
{"f_2473csi.scm",(void*)f_2473},
{"f_2009csi.scm",(void*)f_2009},
{"f_2042csi.scm",(void*)f_2042},
{"f_2046csi.scm",(void*)f_2046},
{"f_2014csi.scm",(void*)f_2014},
{"f_2018csi.scm",(void*)f_2018},
{"f_2029csi.scm",(void*)f_2029},
{"f_2040csi.scm",(void*)f_2040},
{"f_2033csi.scm",(void*)f_2033},
{"f_2023csi.scm",(void*)f_2023},
{"f_2000csi.scm",(void*)f_2000},
{"f_1975csi.scm",(void*)f_1975},
{"f_1983csi.scm",(void*)f_1983},
{"f_1989csi.scm",(void*)f_1989},
{"f_1993csi.scm",(void*)f_1993},
{"f_1978csi.scm",(void*)f_1978},
{"f_1966csi.scm",(void*)f_1966},
{"f_1956csi.scm",(void*)f_1956},
{"f_1959csi.scm",(void*)f_1959},
{"f_1917csi.scm",(void*)f_1917},
{"f_1920csi.scm",(void*)f_1920},
{"f_1923csi.scm",(void*)f_1923},
{"f_1926csi.scm",(void*)f_1926},
{"f_1902csi.scm",(void*)f_1902},
{"f_1905csi.scm",(void*)f_1905},
{"f_1887csi.scm",(void*)f_1887},
{"f_1890csi.scm",(void*)f_1890},
{"f_1869csi.scm",(void*)f_1869},
{"f_1872csi.scm",(void*)f_1872},
{"f_1875csi.scm",(void*)f_1875},
{"f_1850csi.scm",(void*)f_1850},
{"f_1860csi.scm",(void*)f_1860},
{"f_1853csi.scm",(void*)f_1853},
{"f_1835csi.scm",(void*)f_1835},
{"f_1765csi.scm",(void*)f_1765},
{"f_1769csi.scm",(void*)f_1769},
{"f_1749csi.scm",(void*)f_1749},
{"f_1756csi.scm",(void*)f_1756},
{"f_1736csi.scm",(void*)f_1736},
{"f_1709csi.scm",(void*)f_1709},
{"f_1670csi.scm",(void*)f_1670},
{"f_1694csi.scm",(void*)f_1694},
{"f_1680csi.scm",(void*)f_1680},
{"f_1550csi.scm",(void*)f_1550},
{"f_1554csi.scm",(void*)f_1554},
{"f_1599csi.scm",(void*)f_1599},
{"f_1605csi.scm",(void*)f_1605},
{"f_1612csi.scm",(void*)f_1612},
{"f_1614csi.scm",(void*)f_1614},
{"f_1641csi.scm",(void*)f_1641},
{"f_1624csi.scm",(void*)f_1624},
{"f_1627csi.scm",(void*)f_1627},
{"f_1578csi.scm",(void*)f_1578},
{"f_1592csi.scm",(void*)f_1592},
{"f_1588csi.scm",(void*)f_1588},
{"f_1529csi.scm",(void*)f_1529},
{"f_1502csi.scm",(void*)f_1502},
{"f_1509csi.scm",(void*)f_1509},
{"f_1512csi.scm",(void*)f_1512},
{"f_1518csi.scm",(void*)f_1518},
{"f_1451csi.scm",(void*)f_1451},
{"f_1455csi.scm",(void*)f_1455},
{"f_1461csi.scm",(void*)f_1461},
{"f_1441csi.scm",(void*)f_1441},
{"f_1449csi.scm",(void*)f_1449},
{"f_1412csi.scm",(void*)f_1412},
{"f_1429csi.scm",(void*)f_1429},
{"f_1402csi.scm",(void*)f_1402},
{"f_1410csi.scm",(void*)f_1410},
{"f_1390csi.scm",(void*)f_1390},
{"f_1394csi.scm",(void*)f_1394},
{"f_1397csi.scm",(void*)f_1397},
{"f_1144csi.scm",(void*)f_1144},
{"f_1148csi.scm",(void*)f_1148},
{"f_1185csi.scm",(void*)f_1185},
{"f_1206csi.scm",(void*)f_1206},
{"f_1204csi.scm",(void*)f_1204},
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
