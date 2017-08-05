/* Generated from utils.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:15
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: utils.scm -output-file utils.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: utils
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_regex_toplevel)
C_externimport void C_ccall C_regex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[158];


C_noret_decl(C_utils_toplevel)
C_externexport void C_ccall C_utils_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_320)
static void C_ccall f_320(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_323)
static void C_ccall f_323(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_326)
static void C_ccall f_326(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_477)
static void C_ccall f_477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1410)
static void C_ccall f_1410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1396)
static void C_fcall f_1396(C_word t0,C_word t1) C_noret;
C_noret_decl(f_483)
static void C_ccall f_483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_837)
static void C_ccall f_837(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_840)
static void C_ccall f_840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1359)
static void C_ccall f_1359(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1365)
static void C_fcall f_1365(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1369)
static void C_ccall f_1369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1389)
static void C_ccall f_1389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1335)
static void C_ccall f_1335(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1341)
static void C_fcall f_1341(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1345)
static void C_ccall f_1345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1354)
static void C_ccall f_1354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1311)
static void C_ccall f_1311(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1254)
static void C_ccall f_1254(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1254)
static void C_ccall f_1254r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1258)
static void C_ccall f_1258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1211)
static void C_ccall f_1211(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1211)
static void C_ccall f_1211r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1215)
static void C_ccall f_1215(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1221)
static void C_ccall f_1221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1229)
static void C_ccall f_1229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1166)
static void C_ccall f_1166(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1191)
static void C_ccall f_1191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1205)
static void C_ccall f_1205(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1184)
static void C_ccall f_1184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1130)
static void C_ccall f_1130(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1130)
static void C_ccall f_1130r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1137)
static void C_ccall f_1137(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1142)
static void C_fcall f_1142(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1155)
static void C_ccall f_1155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1065)
static void C_ccall f_1065(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1065)
static void C_ccall f_1065r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1069)
static void C_ccall f_1069(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1122)
static void C_ccall f_1122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1072)
static void C_ccall f_1072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1083)
static void C_fcall f_1083(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1109)
static void C_ccall f_1109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1090)
static void C_ccall f_1090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1096)
static void C_ccall f_1096(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1104)
static void C_ccall f_1104(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1047)
static void C_ccall f_1047(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1059)
static void C_ccall f_1059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1053)
static void C_ccall f_1053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1029)
static void C_ccall f_1029(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1041)
static void C_ccall f_1041(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1035)
static void C_ccall f_1035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1011)
static void C_ccall f_1011(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1023)
static void C_ccall f_1023(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1017)
static void C_ccall f_1017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_993)
static void C_ccall f_993(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1005)
static void C_ccall f_1005(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_975)
static void C_ccall f_975(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_981)
static void C_ccall f_981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_960)
static void C_ccall f_960(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_966)
static void C_ccall f_966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_945)
static void C_ccall f_945(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_957)
static void C_ccall f_957(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_930)
static void C_ccall f_930(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_942)
static void C_ccall f_942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_936)
static void C_ccall f_936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_858)
static void C_ccall f_858(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_874)
static void C_ccall f_874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_903)
static void C_ccall f_903(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_913)
static void C_ccall f_913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_884)
static void C_ccall f_884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_844)
static void C_fcall f_844(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_752)
static void C_ccall f_752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_752)
static void C_ccall f_752r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_784)
static void C_fcall f_784(C_word t0,C_word t1) C_noret;
C_noret_decl(f_779)
static void C_fcall f_779(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_754)
static void C_fcall f_754(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_762)
static void C_ccall f_762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_778)
static void C_ccall f_778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_768)
static void C_ccall f_768(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_692)
static void C_ccall f_692(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_692)
static void C_ccall f_692r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_704)
static void C_fcall f_704(C_word t0,C_word t1) C_noret;
C_noret_decl(f_699)
static void C_fcall f_699(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_694)
static void C_fcall f_694(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_620)
static void C_fcall f_620(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_624)
static void C_ccall f_624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_673)
static void C_fcall f_673(C_word t0,C_word t1) C_noret;
C_noret_decl(f_649)
static void C_ccall f_649(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_656)
static void C_fcall f_656(C_word t0,C_word t1) C_noret;
C_noret_decl(f_589)
static void C_fcall f_589(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_532)
static void C_fcall f_532(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_541)
static void C_fcall f_541(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_571)
static void C_ccall f_571(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_575)
static void C_ccall f_575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_497)
static void C_fcall f_497(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_513)
static void C_fcall f_513(C_word t0,C_word t1) C_noret;
C_noret_decl(f_484)
static void C_ccall f_484(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_495)
static void C_ccall f_495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_460)
static void C_ccall f_460(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_467)
static void C_ccall f_467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_473)
static void C_ccall f_473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_442)
static void C_ccall f_442(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_442)
static void C_ccall f_442r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_446)
static void C_ccall f_446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_449)
static void C_ccall f_449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_423)
static void C_ccall f_423(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_423)
static void C_ccall f_423r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_440)
static void C_ccall f_440(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_429)
static void C_ccall f_429(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_433)
static void C_ccall f_433(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_417)
static void C_ccall f_417(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_417)
static void C_ccall f_417r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_375)
static void C_fcall f_375(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_379)
static void C_ccall f_379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_394)
static void C_ccall f_394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_385)
static void C_ccall f_385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_328)
static void C_ccall f_328(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_374)
static void C_ccall f_374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_332)
static void C_fcall f_332(C_word t0,C_word t1) C_noret;
C_noret_decl(f_367)
static void C_ccall f_367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_363)
static void C_ccall f_363(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_335)
static void C_fcall f_335(C_word t0,C_word t1) C_noret;
C_noret_decl(f_340)
static void C_ccall f_340(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_356)
static void C_ccall f_356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_352)
static void C_ccall f_352(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1396)
static void C_fcall trf_1396(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1396(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1396(t0,t1);}

C_noret_decl(trf_1365)
static void C_fcall trf_1365(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1365(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1365(t0,t1,t2);}

C_noret_decl(trf_1341)
static void C_fcall trf_1341(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1341(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1341(t0,t1);}

C_noret_decl(trf_1142)
static void C_fcall trf_1142(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1142(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1142(t0,t1);}

C_noret_decl(trf_1083)
static void C_fcall trf_1083(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1083(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1083(t0,t1);}

C_noret_decl(trf_844)
static void C_fcall trf_844(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_844(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_844(t0,t1,t2);}

C_noret_decl(trf_784)
static void C_fcall trf_784(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_784(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_784(t0,t1);}

C_noret_decl(trf_779)
static void C_fcall trf_779(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_779(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_779(t0,t1,t2);}

C_noret_decl(trf_754)
static void C_fcall trf_754(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_754(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_754(t0,t1,t2,t3);}

C_noret_decl(trf_704)
static void C_fcall trf_704(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_704(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_704(t0,t1);}

C_noret_decl(trf_699)
static void C_fcall trf_699(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_699(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_699(t0,t1,t2);}

C_noret_decl(trf_694)
static void C_fcall trf_694(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_694(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_694(t0,t1,t2,t3);}

C_noret_decl(trf_620)
static void C_fcall trf_620(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_620(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_620(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_673)
static void C_fcall trf_673(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_673(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_673(t0,t1);}

C_noret_decl(trf_656)
static void C_fcall trf_656(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_656(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_656(t0,t1);}

C_noret_decl(trf_589)
static void C_fcall trf_589(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_589(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_589(t0,t1,t2,t3);}

C_noret_decl(trf_532)
static void C_fcall trf_532(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_532(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_532(t0,t1,t2,t3);}

C_noret_decl(trf_541)
static void C_fcall trf_541(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_541(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_541(t0,t1,t2);}

C_noret_decl(trf_497)
static void C_fcall trf_497(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_497(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_497(t0,t1,t2);}

C_noret_decl(trf_513)
static void C_fcall trf_513(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_513(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_513(t0,t1);}

C_noret_decl(trf_375)
static void C_fcall trf_375(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_375(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_375(t0,t1,t2,t3);}

C_noret_decl(trf_332)
static void C_fcall trf_332(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_332(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_332(t0,t1);}

C_noret_decl(trf_335)
static void C_fcall trf_335(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_335(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_335(t0,t1);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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
C_utils_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_utils_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("utils_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(640)){
C_save(t1);
C_rereclaim2(640*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,158);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[2]=C_h_intern(&lf[2],11,"\003sysapropos");
lf[3]=C_h_intern(&lf[3],13,"string-search");
lf[4]=C_h_intern(&lf[4],14,"symbol->string");
lf[5]=C_static_lambda_info(C_heaptop,11,"(a339 sym2)");
lf[6]=C_h_intern(&lf[6],23,"\003sysenvironment-symbols");
lf[7]=C_h_intern(&lf[7],6,"regexp");
lf[8]=C_h_intern(&lf[8],13,"regexp-escape");
lf[9]=C_static_lambda_info(C_heaptop,26,"(##sys#apropos patt0 env1)");
lf[10]=C_h_intern(&lf[10],11,"environment");
lf[11]=C_h_intern(&lf[11],15,"\003syssignal-hook");
lf[12]=C_h_intern(&lf[12],11,"\000type-error");
lf[13]=C_static_string(C_heaptop,51,"bad argument type - not a string, symbol, or regexp");
lf[14]=C_h_intern(&lf[14],7,"regexp\077");
lf[15]=C_h_intern(&lf[15],23,"interaction-environment");
lf[16]=C_static_lambda_info(C_heaptop,32,"(%apropos-list loc6 patt7 args8)");
lf[17]=C_h_intern(&lf[17],12,"apropos-list");
lf[18]=C_static_lambda_info(C_heaptop,30,"(apropos-list patt16 . args17)");
lf[19]=C_h_intern(&lf[19],7,"apropos");
lf[20]=C_h_intern(&lf[20],7,"newline");
lf[21]=C_h_intern(&lf[21],7,"display");
lf[22]=C_static_lambda_info(C_heaptop,12,"(a428 sym20)");
lf[23]=C_h_intern(&lf[23],12,"\003sysfor-each");
lf[24]=C_static_lambda_info(C_heaptop,25,"(apropos patt18 . args19)");
lf[25]=C_h_intern(&lf[25],7,"sprintf");
lf[26]=C_h_intern(&lf[26],6,"system");
lf[27]=C_h_intern(&lf[27],7,"system*");
lf[28]=C_h_intern(&lf[28],9,"\003syserror");
lf[29]=C_static_string(C_heaptop,51,"shell invocation failed with non-zero return status");
lf[30]=C_static_lambda_info(C_heaptop,25,"(system* fstr25 . args26)");
lf[31]=C_h_intern(&lf[31],12,"file-exists\077");
lf[32]=C_h_intern(&lf[32],11,"delete-file");
lf[33]=C_h_intern(&lf[33],12,"delete-file*");
lf[34]=C_static_lambda_info(C_heaptop,21,"(delete-file* file31)");
lf[35]=C_static_string(C_heaptop,12,"([A-Za-z]:)\077");
lf[36]=C_static_string(C_heaptop,0,"");
lf[37]=C_h_intern(&lf[37],12,"string-match");
lf[38]=C_h_intern(&lf[38],18,"absolute-pathname\077");
lf[39]=C_static_lambda_info(C_heaptop,25,"(absolute-pathname\077 pn36)");
lf[41]=C_h_intern(&lf[41],13,"\003syssubstring");
lf[42]=C_static_lambda_info(C_heaptop,22,"(chop-pds str38 pds39)");
lf[43]=C_h_intern(&lf[43],13,"string-append");
lf[44]=C_h_intern(&lf[44],32,"\003syspathname-directory-separator");
lf[45]=C_h_intern(&lf[45],13,"make-pathname");
lf[46]=C_static_string(C_heaptop,0,"");
lf[47]=C_static_lambda_info(C_heaptop,13,"(loop strs51)");
lf[48]=C_static_lambda_info(C_heaptop,24,"(conc-dirs dirs48 pds49)");
lf[49]=C_static_string(C_heaptop,0,"");
lf[50]=C_static_lambda_info(C_heaptop,26,"(canonicalize dir55 pds56)");
lf[51]=C_static_string(C_heaptop,0,"");
lf[52]=C_static_string(C_heaptop,0,"");
lf[53]=C_static_string(C_heaptop,1,".");
lf[54]=C_static_string(C_heaptop,0,"");
lf[55]=C_static_lambda_info(C_heaptop,47,"(_make-pathname loc59 dir60 file61 ext62 pds63)");
lf[56]=C_static_lambda_info(C_heaptop,20,"(body81 ext87 pds88)");
lf[57]=C_static_lambda_info(C_heaptop,20,"(def-pds84 %ext7990)");
lf[58]=C_static_lambda_info(C_heaptop,11,"(def-ext83)");
lf[59]=C_static_lambda_info(C_heaptop,36,"(make-pathname dir76 file77 . g7578)");
lf[60]=C_h_intern(&lf[60],22,"make-absolute-pathname");
lf[61]=C_h_intern(&lf[61],17,"\003sysstring-append");
lf[62]=C_static_lambda_info(C_heaptop,23,"(body103 ext109 pds110)");
lf[63]=C_static_lambda_info(C_heaptop,23,"(def-pds106 %ext101114)");
lf[64]=C_static_lambda_info(C_heaptop,12,"(def-ext105)");
lf[65]=C_static_lambda_info(C_heaptop,46,"(make-absolute-pathname dir98 file99 . g97100)");
lf[66]=C_static_lambda_info(C_heaptop,18,"(strip-pds dir130)");
lf[67]=C_h_intern(&lf[67],18,"decompose-pathname");
lf[68]=C_static_lambda_info(C_heaptop,26,"(decompose-pathname pn131)");
lf[69]=C_h_intern(&lf[69],18,"pathname-directory");
lf[70]=C_static_lambda_info(C_heaptop,6,"(a935)");
lf[71]=C_static_lambda_info(C_heaptop,37,"(a941 dir137140 file138141 ext139142)");
lf[72]=C_static_lambda_info(C_heaptop,26,"(pathname-directory pn136)");
lf[73]=C_h_intern(&lf[73],13,"pathname-file");
lf[74]=C_static_lambda_info(C_heaptop,6,"(a950)");
lf[75]=C_static_lambda_info(C_heaptop,37,"(a956 dir147150 file148151 ext149152)");
lf[76]=C_static_lambda_info(C_heaptop,21,"(pathname-file pn146)");
lf[77]=C_h_intern(&lf[77],18,"pathname-extension");
lf[78]=C_static_lambda_info(C_heaptop,6,"(a965)");
lf[79]=C_static_lambda_info(C_heaptop,37,"(a971 dir157160 file158161 ext159162)");
lf[80]=C_static_lambda_info(C_heaptop,26,"(pathname-extension pn156)");
lf[81]=C_h_intern(&lf[81],24,"pathname-strip-directory");
lf[82]=C_static_lambda_info(C_heaptop,6,"(a980)");
lf[83]=C_static_lambda_info(C_heaptop,37,"(a986 dir167170 file168171 ext169172)");
lf[84]=C_static_lambda_info(C_heaptop,32,"(pathname-strip-directory pn166)");
lf[85]=C_h_intern(&lf[85],24,"pathname-strip-extension");
lf[86]=C_static_lambda_info(C_heaptop,6,"(a998)");
lf[87]=C_static_lambda_info(C_heaptop,38,"(a1004 dir177180 file178181 ext179182)");
lf[88]=C_static_lambda_info(C_heaptop,32,"(pathname-strip-extension pn176)");
lf[89]=C_h_intern(&lf[89],26,"pathname-replace-directory");
lf[90]=C_static_lambda_info(C_heaptop,7,"(a1016)");
lf[91]=C_static_lambda_info(C_heaptop,36,"(a1022 _188191 file189192 ext190193)");
lf[92]=C_static_lambda_info(C_heaptop,41,"(pathname-replace-directory pn186 dir187)");
lf[93]=C_h_intern(&lf[93],21,"pathname-replace-file");
lf[94]=C_static_lambda_info(C_heaptop,7,"(a1034)");
lf[95]=C_static_lambda_info(C_heaptop,35,"(a1040 dir199202 _200203 ext201204)");
lf[96]=C_static_lambda_info(C_heaptop,37,"(pathname-replace-file pn197 file198)");
lf[97]=C_h_intern(&lf[97],26,"pathname-replace-extension");
lf[98]=C_static_lambda_info(C_heaptop,7,"(a1052)");
lf[99]=C_static_lambda_info(C_heaptop,36,"(a1058 dir210213 file211214 _212215)");
lf[100]=C_static_lambda_info(C_heaptop,41,"(pathname-replace-extension pn208 ext209)");
lf[101]=C_h_intern(&lf[101],6,"getenv");
lf[102]=C_h_intern(&lf[102],21,"call-with-output-file");
lf[103]=C_h_intern(&lf[103],21,"create-temporary-file");
lf[104]=C_static_string(C_heaptop,3,"tmp");
lf[105]=C_static_lambda_info(C_heaptop,12,"(a1103 p240)");
lf[106]=C_static_string(C_heaptop,1,"t");
lf[107]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[108]=C_static_string(C_heaptop,3,"TMP");
lf[109]=C_static_string(C_heaptop,4,"TEMP");
lf[110]=C_static_string(C_heaptop,6,"TMPDIR");
lf[111]=C_static_lambda_info(C_heaptop,32,"(create-temporary-file . ext230)");
lf[112]=C_h_intern(&lf[112],9,"read-line");
lf[113]=C_h_intern(&lf[113],13,"for-each-line");
lf[114]=C_h_intern(&lf[114],18,"\003sysstandard-input");
lf[115]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[116]=C_h_intern(&lf[116],14,"\003syscheck-port");
lf[117]=C_static_lambda_info(C_heaptop,33,"(for-each-line proc244 . port245)");
lf[118]=C_h_intern(&lf[118],18,"for-each-argv-line");
lf[119]=C_static_string(C_heaptop,1,"-");
lf[120]=C_static_lambda_info(C_heaptop,7,"(a1183)");
lf[121]=C_h_intern(&lf[121],20,"with-input-from-file");
lf[122]=C_static_lambda_info(C_heaptop,14,"(a1204 arg257)");
lf[123]=C_h_intern(&lf[123],22,"command-line-arguments");
lf[124]=C_static_lambda_info(C_heaptop,29,"(for-each-argv-line thunk252)");
lf[125]=C_h_intern(&lf[125],8,"read-all");
lf[126]=C_h_intern(&lf[126],11,"read-string");
lf[127]=C_static_lambda_info(C_heaptop,7,"(a1228)");
lf[128]=C_h_intern(&lf[128],5,"port\077");
lf[129]=C_static_lambda_info(C_heaptop,20,"(read-all . file259)");
lf[130]=C_h_intern(&lf[130],6,"shift!");
lf[131]=C_static_lambda_info(C_heaptop,25,"(shift! lst264 . g263265)");
lf[132]=C_h_intern(&lf[132],8,"unshift!");
lf[133]=C_static_lambda_info(C_heaptop,22,"(unshift! x275 lst276)");
lf[134]=C_h_intern(&lf[134],13,"port-for-each");
lf[135]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[136]=C_static_lambda_info(C_heaptop,30,"(port-for-each fn280 thunk281)");
lf[137]=C_h_intern(&lf[137],7,"reverse");
lf[138]=C_h_intern(&lf[138],8,"port-map");
lf[139]=C_static_lambda_info(C_heaptop,12,"(loop xs290)");
lf[140]=C_static_lambda_info(C_heaptop,25,"(port-map fn287 thunk288)");
lf[141]=C_static_string(C_heaptop,5,"^(.*[");
lf[142]=C_static_string(C_heaptop,11,"])\077((\134.)\077[^");
lf[143]=C_static_string(C_heaptop,4,"]+)$");
lf[144]=C_static_string(C_heaptop,5,"^(.*[");
lf[145]=C_static_string(C_heaptop,6,"])\077([^");
lf[146]=C_static_string(C_heaptop,9,"]+)(\134.([^");
lf[147]=C_static_string(C_heaptop,6,".]+))$");
lf[148]=C_static_string(C_heaptop,3,"\134/\134");
lf[149]=C_static_string(C_heaptop,4,"[\134/\134");
lf[150]=C_static_string(C_heaptop,3,"].*");
lf[151]=C_h_intern(&lf[151],7,"windows");
lf[152]=C_h_intern(&lf[152],6,"cygwin");
lf[153]=C_h_intern(&lf[153],14,"build-platform");
lf[154]=C_h_intern(&lf[154],13,"software-type");
lf[155]=C_h_intern(&lf[155],17,"register-feature!");
lf[156]=C_h_intern(&lf[156],5,"utils");
lf[157]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,158,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_320,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_regex_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k318 */
static void C_ccall f_320(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_320,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_323,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k321 in k318 */
static void C_ccall f_323(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_323,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_326,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 75   register-feature! */
t3=*((C_word*)lf[155]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[156]);}

/* k324 in k321 in k318 */
static void C_ccall f_326(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_326,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_328,a[2]=lf[9],tmp=(C_word)a,a+=3,tmp));
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_375,a[2]=lf[16],tmp=(C_word)a,a+=3,tmp);
t4=C_mutate((C_word*)lf[17]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_417,a[2]=t3,a[3]=lf[18],tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[19]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_423,a[2]=t3,a[3]=lf[24],tmp=(C_word)a,a+=4,tmp));
t6=*((C_word*)lf[25]+1);
t7=*((C_word*)lf[26]+1);
t8=C_mutate((C_word*)lf[27]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_442,a[2]=t6,a[3]=t7,a[4]=lf[30],tmp=(C_word)a,a+=5,tmp));
t9=*((C_word*)lf[31]+1);
t10=*((C_word*)lf[32]+1);
t11=C_mutate((C_word*)lf[33]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_460,a[2]=t9,a[3]=t10,a[4]=lf[34],tmp=(C_word)a,a+=5,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_477,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 132  software-type */
t13=*((C_word*)lf[154]+1);
((C_proc2)C_retrieve_proc(t13))(2,t13,t12);}

/* k475 in k324 in k321 in k318 */
static void C_ccall f_477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_477,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1396,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_eqp(lf[151],t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1410,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 135  build-platform */
t5=*((C_word*)lf[153]+1);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}
else{
t4=t2;
f_1396(t4,C_SCHEME_FALSE);}}

/* k1408 in k475 in k324 in k321 in k318 */
static void C_ccall f_1410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(lf[152],t1);
t3=((C_word*)t0)[2];
f_1396(t3,(C_word)C_i_not(t2));}

/* k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_1396(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1396,NULL,2,t0,t1);}
t2=(C_truep(t1)?lf[35]:lf[36]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_483,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_a_i_string(&a,1,*((C_word*)lf[44]+1));
/* utils.scm: 138  string-append */
t5=*((C_word*)lf[43]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t3,t2,lf[149],t4,lf[150]);}

/* k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_483(C_word c,C_word t0,C_word t1){
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
C_word ab[41],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_483,2,t0,t1);}
t2=*((C_word*)lf[37]+1);
t3=C_mutate((C_word*)lf[38]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_484,a[2]=t1,a[3]=t2,a[4]=lf[39],tmp=(C_word)a,a+=5,tmp));
t4=C_mutate(&lf[40],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_497,a[2]=lf[42],tmp=(C_word)a,a+=3,tmp));
t5=*((C_word*)lf[43]+1);
t6=*((C_word*)lf[38]+1);
t7=(C_word)C_a_i_string(&a,1,*((C_word*)lf[44]+1));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_532,a[2]=t5,a[3]=lf[48],tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_589,a[2]=t8,a[3]=lf[50],tmp=(C_word)a,a+=4,tmp);
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_620,a[2]=t9,a[3]=t5,a[4]=lf[55],tmp=(C_word)a,a+=5,tmp);
t11=C_mutate((C_word*)lf[45]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_692,a[2]=t7,a[3]=t10,a[4]=lf[59],tmp=(C_word)a,a+=5,tmp));
t12=C_mutate((C_word*)lf[60]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_752,a[2]=t7,a[3]=t9,a[4]=t6,a[5]=t10,a[6]=lf[65],tmp=(C_word)a,a+=7,tmp));
t13=(C_word)C_a_i_string(&a,1,*((C_word*)lf[44]+1));
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_837,a[2]=((C_word*)t0)[2],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 205  ##sys#string-append */
t15=*((C_word*)lf[61]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,lf[148],t13);}

/* k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_837(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_837,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_840,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 206  string-append */
t3=*((C_word*)lf[43]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[144],t1,lf[145],t1,lf[146],t1,lf[147]);}

/* k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_840,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_843,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 207  string-append */
t3=*((C_word*)lf[43]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[141],((C_word*)t0)[2],lf[142],((C_word*)t0)[2],lf[143]);}

/* k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_843(C_word c,C_word t0,C_word t1){
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
C_word ab[72],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_843,2,t0,t1);}
t2=*((C_word*)lf[37]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_844,a[2]=((C_word*)t0)[4],a[3]=lf[66],tmp=(C_word)a,a+=4,tmp);
t4=C_mutate((C_word*)lf[67]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_858,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,a[5]=lf[68],tmp=(C_word)a,a+=6,tmp));
t5=*((C_word*)lf[67]+1);
t6=C_mutate((C_word*)lf[69]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_930,a[2]=t5,a[3]=lf[72],tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[73]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_945,a[2]=t5,a[3]=lf[76],tmp=(C_word)a,a+=4,tmp));
t8=C_mutate((C_word*)lf[77]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_960,a[2]=t5,a[3]=lf[80],tmp=(C_word)a,a+=4,tmp));
t9=C_mutate((C_word*)lf[81]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_975,a[2]=t5,a[3]=lf[84],tmp=(C_word)a,a+=4,tmp));
t10=C_mutate((C_word*)lf[85]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_993,a[2]=t5,a[3]=lf[88],tmp=(C_word)a,a+=4,tmp));
t11=C_mutate((C_word*)lf[89]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1011,a[2]=t5,a[3]=lf[92],tmp=(C_word)a,a+=4,tmp));
t12=C_mutate((C_word*)lf[93]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1029,a[2]=t5,a[3]=lf[96],tmp=(C_word)a,a+=4,tmp));
t13=C_mutate((C_word*)lf[97]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1047,a[2]=t5,a[3]=lf[100],tmp=(C_word)a,a+=4,tmp));
t14=*((C_word*)lf[101]+1);
t15=*((C_word*)lf[45]+1);
t16=*((C_word*)lf[31]+1);
t17=*((C_word*)lf[102]+1);
t18=C_mutate((C_word*)lf[103]+1,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1065,a[2]=t14,a[3]=t15,a[4]=t16,a[5]=t17,a[6]=lf[111],tmp=(C_word)a,a+=7,tmp));
t19=*((C_word*)lf[112]+1);
t20=C_mutate((C_word*)lf[113]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1130,a[2]=t19,a[3]=lf[117],tmp=(C_word)a,a+=4,tmp));
t21=C_mutate((C_word*)lf[118]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1166,a[2]=lf[124],tmp=(C_word)a,a+=3,tmp));
t22=C_mutate((C_word*)lf[125]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1211,a[2]=lf[129],tmp=(C_word)a,a+=3,tmp));
t23=C_mutate((C_word*)lf[130]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1254,a[2]=lf[131],tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[132]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1311,a[2]=lf[133],tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[134]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1335,a[2]=lf[136],tmp=(C_word)a,a+=3,tmp));
t26=*((C_word*)lf[137]+1);
t27=C_mutate((C_word*)lf[138]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1359,a[2]=t26,a[3]=lf[140],tmp=(C_word)a,a+=4,tmp));
t28=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t28+1)))(2,t28,C_SCHEME_UNDEFINED);}

/* port-map in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1359(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1359,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1365,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[2],a[6]=lf[139],tmp=(C_word)a,a+=7,tmp));
t7=((C_word*)t5)[1];
f_1365(t7,t1,C_SCHEME_END_OF_LIST);}

/* loop in port-map in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_1365(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1365,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1369,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* utils.scm: 350  thunk */
t4=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k1367 in loop in port-map in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1369,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_SCHEME_END_OF_FILE);
if(C_truep(t2)){
/* utils.scm: 352  reverse */
t3=((C_word*)t0)[6];
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1389,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 353  fn */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t1);}}

/* k1387 in k1367 in loop in port-map in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1389,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* utils.scm: 353  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1365(t3,((C_word*)t0)[2],t2);}

/* port-for-each in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1335(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1335,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1341,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=lf[135],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1341(t7,t1);}

/* loop in port-for-each in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_1341(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1341,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1345,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 341  thunk */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1343 in loop in port-for-each in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1345,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_SCHEME_END_OF_FILE);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1354,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 343  fn */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t1);}}

/* k1352 in k1343 in loop in port-for-each in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 344  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1341(t2,((C_word*)t0)[2]);}

/* unshift! in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1311(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[3],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1311,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_pair_2(t3,lf[132]);
t5=(C_word)C_slot(t3,C_fix(0));
t6=(C_word)C_slot(t3,C_fix(1));
t7=(C_word)C_a_i_cons(&a,2,t5,t6);
t8=(C_word)C_i_setslot(t3,C_fix(1),t7);
t9=(C_word)C_i_setslot(t3,C_fix(0),t2);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t3);}

/* shift! in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1254(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_1254r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1254r(t0,t1,t2,t3);}}

static void C_ccall f_1254r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1258,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t5=t4;
f_1258(2,t5,C_SCHEME_FALSE);}
else{
t5=(C_word)C_i_cdr(t3);
if(C_truep((C_word)C_i_nullp(t5))){
t6=t4;
f_1258(2,t6,(C_word)C_i_car(t3));}
else{
/* ##sys#error */
t6=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,lf[0],t3);}}}

/* k1256 in shift! in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1258(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[3]))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_i_check_pair_2(((C_word*)t0)[3],lf[130]);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
t4=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t5=(C_word)C_i_check_pair_2(t4,lf[130]);
t6=(C_word)C_slot(t4,C_fix(1));
t7=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t6);
t8=(C_word)C_slot(t4,C_fix(0));
t9=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(0),t8);
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,t3);}}

/* read-all in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1211(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_1211r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_1211r(t0,t1,t2);}}

static void C_ccall f_1211r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1215,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_1215(2,t4,*((C_word*)lf[114]+1));}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_1215(2,t5,(C_word)C_i_car(t2));}
else{
/* utils.scm: 310  ##sys#error */
t5=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k1213 in read-all in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1215(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1215,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1221,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 311  port? */
t3=*((C_word*)lf[128]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k1219 in k1213 in read-all in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1221,2,t0,t1);}
if(C_truep(t1)){
/* utils.scm: 312  read-string */
t2=*((C_word*)lf[126]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1229,a[2]=lf[127],tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 313  with-input-from-file */
t3=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* a1228 in k1219 in k1213 in read-all in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1229,2,t0,t1);}
/* read-string */
t2=*((C_word*)lf[126]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_FALSE);}

/* for-each-argv-line in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1166(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1166,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1191,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 299  command-line-arguments */
t4=*((C_word*)lf[123]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1189 in for-each-argv-line in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1191,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
/* utils.scm: 302  for-each-line */
t2=*((C_word*)lf[113]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1205,a[2]=((C_word*)t0)[2],a[3]=lf[122],tmp=(C_word)a,a+=4,tmp);
/* for-each */
t3=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,t1);}}

/* a1204 in k1189 in for-each-argv-line in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1205(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1205,3,t0,t1,t2);}
t3=((C_word*)t0)[2];
if(C_truep((C_word)C_i_string_equal_p(t2,lf[119]))){
/* utils.scm: 297  for-each-line */
t4=*((C_word*)lf[113]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1184,a[2]=t3,a[3]=lf[120],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 298  with-input-from-file */
t5=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t4);}}

/* a1183 in a1204 in k1189 in for-each-argv-line in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1184,2,t0,t1);}
/* for-each-line */
t2=*((C_word*)lf[113]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* for-each-line in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1130(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1130r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1130r(t0,t1,t2,t3);}}

static void C_ccall f_1130r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(6);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_i_vector_ref(t3,C_fix(0)):*((C_word*)lf[114]+1));
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1137,a[2]=t1,a[3]=t5,a[4]=((C_word*)t0)[2],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* utils.scm: 284  ##sys#check-port */
t7=*((C_word*)lf[116]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t5,lf[113]);}

/* k1135 in for-each-line in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1137(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1137,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1142,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t3,a[6]=lf[115],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_1142(t5,((C_word*)t0)[2]);}

/* loop in k1135 in for-each-line in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_1142(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1142,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1146,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 286  read-line */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k1144 in loop in k1135 in for-each-line in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1146,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1155,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 288  proc */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}}

/* k1153 in k1144 in loop in k1135 in for-each-line in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 289  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1142(t2,((C_word*)t0)[2]);}

/* create-temporary-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1065(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2rv,(void*)f_1065r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_1065r(t0,t1,t2);}}

static void C_ccall f_1065r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1069,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* utils.scm: 267  getenv */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[110]);}

/* k1067 in create-temporary-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1069(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1069,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1072,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_1072(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1122,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 267  getenv */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[109]);}}

/* k1120 in k1067 in create-temporary-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_1072(2,t2,t1);}
else{
/* utils.scm: 267  getenv */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],lf[108]);}}

/* k1070 in k1067 in create-temporary-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1072(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1072,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[6]);
t3=(C_truep(t2)?(C_word)C_i_vector_ref(((C_word*)t0)[6],C_fix(0)):lf[104]);
t4=(C_word)C_i_check_string_2(t3,lf[103]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1083,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t6,a[8]=lf[107],tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_1083(t8,((C_word*)t0)[2]);}

/* loop in k1070 in k1067 in create-temporary-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_1083(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1083,NULL,2,t0,t1);}
t2=(C_word)C_fudge(C_fix(16));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1090,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1109,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1113,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 272  number->string */
C_number_to_string(4,0,t5,t2,C_fix(16));}

/* k1111 in loop in k1070 in k1067 in create-temporary-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 272  ##sys#string-append */
t2=*((C_word*)lf[61]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[106],t1);}

/* k1107 in loop in k1070 in k1067 in create-temporary-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 272  make-pathname */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1088 in loop in k1070 in k1067 in create-temporary-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1090,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1096,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* utils.scm: 273  file-exists? */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k1094 in k1088 in loop in k1070 in k1067 in create-temporary-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1096(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1096,2,t0,t1);}
if(C_truep(t1)){
/* utils.scm: 274  loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_1083(t2,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1104,a[2]=((C_word*)t0)[3],a[3]=lf[105],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 275  call-with-output-file */
t3=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[4],((C_word*)t0)[3],t2);}}

/* a1103 in k1094 in k1088 in loop in k1070 in k1067 in create-temporary-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1104(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1104,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* pathname-replace-extension in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1047(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1047,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1053,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[98],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1059,a[2]=t3,a[3]=lf[99],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a1058 in pathname-replace-extension in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1059(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1059,5,t0,t1,t2,t3,t4);}
/* utils.scm: 259  make-pathname */
t5=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,((C_word*)t0)[2]);}

/* a1052 in pathname-replace-extension in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1053,2,t0,t1);}
/* utils.scm: 258  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-replace-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1029(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1029,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1035,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[94],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1041,a[2]=t3,a[3]=lf[95],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a1040 in pathname-replace-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1041(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1041,5,t0,t1,t2,t3,t4);}
/* utils.scm: 255  make-pathname */
t5=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,((C_word*)t0)[2],t4);}

/* a1034 in pathname-replace-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1035,2,t0,t1);}
/* utils.scm: 254  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-replace-directory in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1011(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1011,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1017,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[90],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1023,a[2]=t3,a[3]=lf[91],tmp=(C_word)a,a+=4,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t4,t5);}

/* a1022 in pathname-replace-directory in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1023(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1023,5,t0,t1,t2,t3,t4);}
/* utils.scm: 251  make-pathname */
t5=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[2],t3,t4);}

/* a1016 in pathname-replace-directory in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1017,2,t0,t1);}
/* utils.scm: 250  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-strip-extension in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_993(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_993,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_999,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[86],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1005,a[2]=lf[87],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a1004 in pathname-strip-extension in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_1005(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1005,5,t0,t1,t2,t3,t4);}
/* utils.scm: 247  make-pathname */
t5=*((C_word*)lf[45]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t3);}

/* a998 in pathname-strip-extension in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_999,2,t0,t1);}
/* utils.scm: 246  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-strip-directory in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_975(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_975,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_981,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[82],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_987,a[2]=lf[83],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a986 in pathname-strip-directory in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_987(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_987,5,t0,t1,t2,t3,t4);}
/* utils.scm: 243  make-pathname */
t5=*((C_word*)lf[45]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,C_SCHEME_FALSE,t3,t4);}

/* a980 in pathname-strip-directory in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_981,2,t0,t1);}
/* utils.scm: 242  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-extension in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_960(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_960,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_966,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[78],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_972,a[2]=lf[79],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a971 in pathname-extension in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_972(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_972,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* a965 in pathname-extension in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_966,2,t0,t1);}
/* utils.scm: 238  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_945(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_945,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_951,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[74],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_957,a[2]=lf[75],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a956 in pathname-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_957(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_957,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* a950 in pathname-file in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_951,2,t0,t1);}
/* utils.scm: 234  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-directory in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_930(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_930,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_936,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=lf[70],tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_942,a[2]=lf[71],tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_call_with_values(4,0,t1,t3,t4);}

/* a941 in pathname-directory in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_942(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_942,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* a935 in pathname-directory in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_936,2,t0,t1);}
/* utils.scm: 230  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* decompose-pathname in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_858(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_858,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[67]);
t4=(C_word)C_block_size(t2);
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
/* utils.scm: 218  values */
C_values(5,0,t1,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_874,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* utils.scm: 219  string-search */
t7=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[2],t2);}}

/* k872 in decompose-pathname in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_874,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_884,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(t1);
/* utils.scm: 221  strip-pds */
t4=((C_word*)t0)[4];
f_844(t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_903,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 222  string-search */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k901 in k872 in decompose-pathname in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_903(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_903,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_913,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cadr(t1);
/* utils.scm: 224  strip-pds */
t4=((C_word*)t0)[3];
f_844(t4,t2,t3);}
else{
/* utils.scm: 225  values */
C_values(5,0,((C_word*)t0)[4],((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE);}}

/* k911 in k901 in k872 in decompose-pathname in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_caddr(((C_word*)t0)[3]);
/* utils.scm: 224  values */
C_values(5,0,((C_word*)t0)[2],t1,t2,C_SCHEME_FALSE);}

/* k882 in k872 in decompose-pathname in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_i_caddr(((C_word*)t0)[3]);
t3=(C_word)C_i_cddddr(((C_word*)t0)[3]);
t4=(C_word)C_i_car(t3);
/* utils.scm: 221  values */
C_values(5,0,((C_word*)t0)[2],t1,t2,t4);}

/* strip-pds in k841 in k838 in k835 in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_844(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_844,NULL,3,t0,t1,t2);}
if(C_truep(t2)){
if(C_truep((C_word)C_i_string_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* utils.scm: 214  chop-pds */
f_497(t1,t2,((C_word*)t0)[2]);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* make-absolute-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_752(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr4r,(void*)f_752r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_752r(t0,t1,t2,t3,t4);}}

static void C_ccall f_752r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(17);
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_754,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],a[7]=lf[62],tmp=(C_word)a,a+=8,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_779,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=lf[63],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_784,a[2]=t6,a[3]=lf[64],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-ext105115 */
t8=t7;
f_784(t8,t1);}
else{
t8=(C_word)C_i_car(t4);
t9=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-pds106113 */
t10=t6;
f_779(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* body103108 */
t12=t5;
f_754(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-ext105 in make-absolute-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_784(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_784,NULL,2,t0,t1);}
/* def-pds106113 */
t2=((C_word*)t0)[2];
f_779(t2,t1,C_SCHEME_FALSE);}

/* def-pds106 in make-absolute-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_779(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_779,NULL,3,t0,t1,t2);}
/* body103108 */
t3=((C_word*)t0)[3];
f_754(t3,t1,t2,((C_word*)t0)[2]);}

/* body103 in make-absolute-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_754(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_754,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_762,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* utils.scm: 196  canonicalize */
t5=((C_word*)t0)[3];
f_589(t5,t4,((C_word*)t0)[2],t3);}

/* k760 in body103 in make-absolute-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_762,2,t0,t1);}
t2=(C_word)C_block_size(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_768,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_778,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 198  absolute-pathname? */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t1);}

/* k776 in k760 in body103 in make-absolute-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_768(2,t2,((C_word*)t0)[3]);}
else{
/* utils.scm: 199  ##sys#string-append */
t2=*((C_word*)lf[61]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k766 in k760 in body103 in make-absolute-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_768(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 194  _make-pathname */
t2=((C_word*)t0)[6];
f_620(t2,((C_word*)t0)[5],lf[60],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* make-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_692(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+15)){
C_save_and_reclaim((void*)tr4r,(void*)f_692r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_692r(t0,t1,t2,t3,t4);}}

static void C_ccall f_692r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(15);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_694,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=lf[56],tmp=(C_word)a,a+=6,tmp);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_699,a[2]=((C_word*)t0)[2],a[3]=t5,a[4]=lf[57],tmp=(C_word)a,a+=5,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_704,a[2]=t6,a[3]=lf[58],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-ext8391 */
t8=t7;
f_704(t8,t1);}
else{
t8=(C_word)C_i_car(t4);
t9=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-pds8489 */
t10=t6;
f_699(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* body8186 */
t12=t5;
f_694(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[28]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[0],t11);}}}}

/* def-ext83 in make-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_704(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_704,NULL,2,t0,t1);}
/* def-pds8489 */
t2=((C_word*)t0)[2];
f_699(t2,t1,C_SCHEME_FALSE);}

/* def-pds84 in make-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_699(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_699,NULL,3,t0,t1,t2);}
/* body8186 */
t3=((C_word*)t0)[3];
f_694(t3,t1,t2,((C_word*)t0)[2]);}

/* body81 in make-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_694(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_694,NULL,4,t0,t1,t2,t3);}
/* utils.scm: 191  _make-pathname */
t4=((C_word*)t0)[4];
f_620(t4,t1,lf[45],((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* _make-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_620(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
C_word tmp;
C_word t7;
C_word t8;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_620,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_624,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=t4,a[7]=t5,a[8]=t6,tmp=(C_word)a,a+=9,tmp);
/* utils.scm: 170  canonicalize */
t8=((C_word*)t0)[2];
f_589(t8,t7,t3,t6);}

/* k622 in _make-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_624(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_624,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[8]);
t3=((C_word*)t0)[7];
t4=(C_truep(t3)?t3:lf[51]);
t5=((C_word*)t0)[6];
t6=(C_truep(t5)?t5:lf[52]);
t7=(C_word)C_i_check_string_2(t6,((C_word*)t0)[5]);
t8=(C_word)C_i_check_string_2(t4,((C_word*)t0)[5]);
t9=(C_word)C_i_check_string_2(((C_word*)t0)[8],((C_word*)t0)[5]);
t10=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_649,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t11=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_673,a[2]=t2,a[3]=t10,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t12=(C_word)C_block_size(t6);
t13=(C_word)C_fixnum_greater_or_equal_p(t12,t2);
t14=t11;
f_673(t14,(C_truep(t13)?(C_word)C_substring_compare(((C_word*)t0)[8],t6,C_fix(0),C_fix(0),t2):C_SCHEME_FALSE));}
else{
t12=t11;
f_673(t12,C_SCHEME_FALSE);}}

/* k671 in k622 in _make-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_673(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_block_size(((C_word*)t0)[4]);
/* utils.scm: 182  ##sys#substring */
t3=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[3];
f_649(2,t2,((C_word*)t0)[4]);}}

/* k647 in k622 in _make-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_649(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_649,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_656,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[2]);
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
t4=(C_word)C_eqp((C_word)C_subchar(((C_word*)t0)[2],C_fix(0)),C_make_character(46));
t5=t2;
f_656(t5,(C_word)C_i_not(t4));}
else{
t4=t2;
f_656(t4,C_SCHEME_FALSE);}}

/* k654 in k647 in k622 in _make-pathname in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_656(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?lf[53]:lf[54]);
/* utils.scm: 177  string-append */
t3=((C_word*)t0)[6];
((C_proc6)C_retrieve_proc(t3))(6,t3,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* canonicalize in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_589(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_589,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_not(t2);
t5=(C_truep(t4)?t4:(C_word)C_i_nullp(t2));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[49]);}
else{
if(C_truep((C_word)C_i_stringp(t2))){
t6=(C_word)C_a_i_list(&a,1,t2);
/* utils.scm: 167  conc-dirs */
t7=((C_word*)t0)[2];
f_532(t7,t1,t6,t3);}
else{
/* utils.scm: 168  conc-dirs */
t6=((C_word*)t0)[2];
f_532(t6,t1,t2,t3);}}}

/* conc-dirs in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_532(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_532,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_list_2(t2,lf[45]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_541,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=lf[47],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_541(t8,t1,t2);}

/* loop in conc-dirs in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_541(C_word t0,C_word t1,C_word t2){
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
loop:
a=C_alloc(7);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_541,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[46]);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_string_length(t3);
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=(C_word)C_i_cdr(t2);
/* utils.scm: 163  loop */
t10=t1;
t11=t6;
t1=t10;
t2=t11;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_571,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t7=(C_word)C_i_car(t2);
/* utils.scm: 164  chop-pds */
f_497(t6,t7,((C_word*)t0)[2]);}}}

/* k569 in loop in conc-dirs in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_571(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_571,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_575,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* utils.scm: 164  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_541(t4,t2,t3);}

/* k573 in k569 in loop in conc-dirs in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 164  string-append */
t2=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* chop-pds in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_497(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_497,NULL,3,t1,t2,t3);}
if(C_truep(t2)){
t4=(C_word)C_block_size(t2);
t5=(C_word)C_block_size(t3);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_513,a[2]=t2,a[3]=t1,a[4]=t5,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,t5))){
t7=(C_word)C_fixnum_difference(t4,t5);
t8=t6;
f_513(t8,(C_word)C_substring_compare(t2,t3,t7,C_fix(0),t5));}
else{
t7=t6;
f_513(t7,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k511 in chop-pds in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_fcall f_513(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* utils.scm: 150  ##sys#substring */
t3=*((C_word*)lf[41]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* absolute-pathname? in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_484(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_484,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[38]);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_495,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 142  string-match */
t5=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,((C_word*)t0)[2],t2);}

/* k493 in absolute-pathname? in k481 in k1394 in k475 in k324 in k321 in k318 */
static void C_ccall f_495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_pairp(t1));}

/* delete-file* in k324 in k321 in k318 */
static void C_ccall f_460(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_460,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_467,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 125  file-exists? */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k465 in delete-file* in k324 in k321 in k318 */
static void C_ccall f_467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_467,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_473,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 125  delete-file */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k471 in k465 in delete-file* in k324 in k321 in k318 */
static void C_ccall f_473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* system* in k324 in k321 in k318 */
static void C_ccall f_442(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_442r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_442r(t0,t1,t2,t3);}}

static void C_ccall f_442r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_446,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t4,((C_word*)t0)[2],t2,t3);}

/* k444 in system* in k324 in k321 in k318 */
static void C_ccall f_446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_449,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 114  system */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k447 in k444 in system* in k324 in k321 in k318 */
static void C_ccall f_449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(t1,C_fix(0));
if(C_truep(t2)){
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
/* utils.scm: 116  ##sys#error */
t3=*((C_word*)lf[28]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[29],((C_word*)t0)[2],t1);}}

/* apropos in k324 in k321 in k318 */
static void C_ccall f_423(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_423r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_423r(t0,t1,t2,t3);}}

static void C_ccall f_423r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_429,a[2]=lf[22],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_440,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 104  %apropos-list */
f_375(t5,lf[19],t2,t3);}

/* k438 in apropos in k324 in k321 in k318 */
static void C_ccall f_440(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[23]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a428 in apropos in k324 in k321 in k318 */
static void C_ccall f_429(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_429,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_433,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 103  display */
t4=*((C_word*)lf[21]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k431 in a428 in apropos in k324 in k321 in k318 */
static void C_ccall f_433(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 103  newline */
t2=*((C_word*)lf[20]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* apropos-list in k324 in k321 in k318 */
static void C_ccall f_417(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_417r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_417r(t0,t1,t2,t3);}}

static void C_ccall f_417r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* utils.scm: 99   %apropos-list */
f_375(t1,lf[17],t2,t3);}

/* %apropos-list in k324 in k321 in k318 */
static void C_fcall f_375(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_375,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_379,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
t6=t5;
f_379(2,t6,(C_word)C_i_car(t4));}
else{
/* utils.scm: 92   interaction-environment */
t6=*((C_word*)lf[15]+1);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}}

/* k377 in %apropos-list in k324 in k321 in k318 */
static void C_ccall f_379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_379,2,t0,t1);}
t2=(C_word)C_i_check_structure_2(t1,lf[10],((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_385,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_stringp(((C_word*)t0)[2]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_394,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=t5;
f_394(2,t6,t4);}
else{
t6=(C_word)C_i_symbolp(((C_word*)t0)[2]);
if(C_truep(t6)){
t7=t5;
f_394(2,t7,t6);}
else{
/* utils.scm: 94   regexp? */
t7=*((C_word*)lf[14]+1);
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,((C_word*)t0)[2]);}}}

/* k392 in k377 in %apropos-list in k324 in k321 in k318 */
static void C_ccall f_394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_385(2,t2,C_SCHEME_UNDEFINED);}
else{
/* utils.scm: 95   ##sys#signal-hook */
t2=*((C_word*)lf[11]+1);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],lf[12],((C_word*)t0)[3],lf[13],((C_word*)t0)[2]);}}

/* k383 in k377 in %apropos-list in k324 in k321 in k318 */
static void C_ccall f_385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 96   ##sys#apropos */
t2=*((C_word*)lf[2]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#apropos in k324 in k321 in k318 */
static void C_ccall f_328(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_328,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_332,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t4)[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_374,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 83   symbol->string */
t7=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t4)[1]);}
else{
t6=t5;
f_332(t6,C_SCHEME_UNDEFINED);}}

/* k372 in ##sys#apropos in k324 in k321 in k318 */
static void C_ccall f_374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_332(t3,t2);}

/* k330 in ##sys#apropos in k324 in k321 in k318 */
static void C_fcall f_332(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_332,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_335,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_stringp(((C_word*)((C_word*)t0)[4])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_363,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_367,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 85   regexp-escape */
t5=*((C_word*)lf[8]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=t2;
f_335(t3,C_SCHEME_UNDEFINED);}}

/* k365 in k330 in ##sys#apropos in k324 in k321 in k318 */
static void C_ccall f_367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 85   regexp */
t2=*((C_word*)lf[7]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k361 in k330 in ##sys#apropos in k324 in k321 in k318 */
static void C_ccall f_363(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_335(t3,t2);}

/* k333 in k330 in ##sys#apropos in k324 in k321 in k318 */
static void C_fcall f_335(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_335,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_340,a[2]=((C_word*)t0)[4],a[3]=lf[5],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 86   ##sys#environment-symbols */
t3=*((C_word*)lf[6]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a339 in k333 in k330 in ##sys#apropos in k324 in k321 in k318 */
static void C_ccall f_340(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_340,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_352,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_356,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 88   symbol->string */
t5=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k354 in a339 in k333 in k330 in ##sys#apropos in k324 in k321 in k318 */
static void C_ccall f_356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 88   string-search */
t2=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k350 in a339 in k333 in k330 in ##sys#apropos in k324 in k321 in k318 */
static void C_ccall f_352(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_not(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_not(t2));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[125] = {
{"toplevelutils.scm",(void*)C_utils_toplevel},
{"f_320utils.scm",(void*)f_320},
{"f_323utils.scm",(void*)f_323},
{"f_326utils.scm",(void*)f_326},
{"f_477utils.scm",(void*)f_477},
{"f_1410utils.scm",(void*)f_1410},
{"f_1396utils.scm",(void*)f_1396},
{"f_483utils.scm",(void*)f_483},
{"f_837utils.scm",(void*)f_837},
{"f_840utils.scm",(void*)f_840},
{"f_843utils.scm",(void*)f_843},
{"f_1359utils.scm",(void*)f_1359},
{"f_1365utils.scm",(void*)f_1365},
{"f_1369utils.scm",(void*)f_1369},
{"f_1389utils.scm",(void*)f_1389},
{"f_1335utils.scm",(void*)f_1335},
{"f_1341utils.scm",(void*)f_1341},
{"f_1345utils.scm",(void*)f_1345},
{"f_1354utils.scm",(void*)f_1354},
{"f_1311utils.scm",(void*)f_1311},
{"f_1254utils.scm",(void*)f_1254},
{"f_1258utils.scm",(void*)f_1258},
{"f_1211utils.scm",(void*)f_1211},
{"f_1215utils.scm",(void*)f_1215},
{"f_1221utils.scm",(void*)f_1221},
{"f_1229utils.scm",(void*)f_1229},
{"f_1166utils.scm",(void*)f_1166},
{"f_1191utils.scm",(void*)f_1191},
{"f_1205utils.scm",(void*)f_1205},
{"f_1184utils.scm",(void*)f_1184},
{"f_1130utils.scm",(void*)f_1130},
{"f_1137utils.scm",(void*)f_1137},
{"f_1142utils.scm",(void*)f_1142},
{"f_1146utils.scm",(void*)f_1146},
{"f_1155utils.scm",(void*)f_1155},
{"f_1065utils.scm",(void*)f_1065},
{"f_1069utils.scm",(void*)f_1069},
{"f_1122utils.scm",(void*)f_1122},
{"f_1072utils.scm",(void*)f_1072},
{"f_1083utils.scm",(void*)f_1083},
{"f_1113utils.scm",(void*)f_1113},
{"f_1109utils.scm",(void*)f_1109},
{"f_1090utils.scm",(void*)f_1090},
{"f_1096utils.scm",(void*)f_1096},
{"f_1104utils.scm",(void*)f_1104},
{"f_1047utils.scm",(void*)f_1047},
{"f_1059utils.scm",(void*)f_1059},
{"f_1053utils.scm",(void*)f_1053},
{"f_1029utils.scm",(void*)f_1029},
{"f_1041utils.scm",(void*)f_1041},
{"f_1035utils.scm",(void*)f_1035},
{"f_1011utils.scm",(void*)f_1011},
{"f_1023utils.scm",(void*)f_1023},
{"f_1017utils.scm",(void*)f_1017},
{"f_993utils.scm",(void*)f_993},
{"f_1005utils.scm",(void*)f_1005},
{"f_999utils.scm",(void*)f_999},
{"f_975utils.scm",(void*)f_975},
{"f_987utils.scm",(void*)f_987},
{"f_981utils.scm",(void*)f_981},
{"f_960utils.scm",(void*)f_960},
{"f_972utils.scm",(void*)f_972},
{"f_966utils.scm",(void*)f_966},
{"f_945utils.scm",(void*)f_945},
{"f_957utils.scm",(void*)f_957},
{"f_951utils.scm",(void*)f_951},
{"f_930utils.scm",(void*)f_930},
{"f_942utils.scm",(void*)f_942},
{"f_936utils.scm",(void*)f_936},
{"f_858utils.scm",(void*)f_858},
{"f_874utils.scm",(void*)f_874},
{"f_903utils.scm",(void*)f_903},
{"f_913utils.scm",(void*)f_913},
{"f_884utils.scm",(void*)f_884},
{"f_844utils.scm",(void*)f_844},
{"f_752utils.scm",(void*)f_752},
{"f_784utils.scm",(void*)f_784},
{"f_779utils.scm",(void*)f_779},
{"f_754utils.scm",(void*)f_754},
{"f_762utils.scm",(void*)f_762},
{"f_778utils.scm",(void*)f_778},
{"f_768utils.scm",(void*)f_768},
{"f_692utils.scm",(void*)f_692},
{"f_704utils.scm",(void*)f_704},
{"f_699utils.scm",(void*)f_699},
{"f_694utils.scm",(void*)f_694},
{"f_620utils.scm",(void*)f_620},
{"f_624utils.scm",(void*)f_624},
{"f_673utils.scm",(void*)f_673},
{"f_649utils.scm",(void*)f_649},
{"f_656utils.scm",(void*)f_656},
{"f_589utils.scm",(void*)f_589},
{"f_532utils.scm",(void*)f_532},
{"f_541utils.scm",(void*)f_541},
{"f_571utils.scm",(void*)f_571},
{"f_575utils.scm",(void*)f_575},
{"f_497utils.scm",(void*)f_497},
{"f_513utils.scm",(void*)f_513},
{"f_484utils.scm",(void*)f_484},
{"f_495utils.scm",(void*)f_495},
{"f_460utils.scm",(void*)f_460},
{"f_467utils.scm",(void*)f_467},
{"f_473utils.scm",(void*)f_473},
{"f_442utils.scm",(void*)f_442},
{"f_446utils.scm",(void*)f_446},
{"f_449utils.scm",(void*)f_449},
{"f_423utils.scm",(void*)f_423},
{"f_440utils.scm",(void*)f_440},
{"f_429utils.scm",(void*)f_429},
{"f_433utils.scm",(void*)f_433},
{"f_417utils.scm",(void*)f_417},
{"f_375utils.scm",(void*)f_375},
{"f_379utils.scm",(void*)f_379},
{"f_394utils.scm",(void*)f_394},
{"f_385utils.scm",(void*)f_385},
{"f_328utils.scm",(void*)f_328},
{"f_374utils.scm",(void*)f_374},
{"f_332utils.scm",(void*)f_332},
{"f_367utils.scm",(void*)f_367},
{"f_363utils.scm",(void*)f_363},
{"f_335utils.scm",(void*)f_335},
{"f_340utils.scm",(void*)f_340},
{"f_356utils.scm",(void*)f_356},
{"f_352utils.scm",(void*)f_352},
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
