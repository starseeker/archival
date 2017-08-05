/* Generated from utils.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:13
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: utils.scm -output-file uutils.c -quiet -no-trace -optimize-level 2 -include-path . -no-lambda-info -unsafe -feature unsafe -explicit-use
   unit: utils
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_regex_toplevel)
C_externimport void C_ccall C_regex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[91];


C_noret_decl(C_utils_toplevel)
C_externexport void C_ccall C_utils_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_308)
static void C_ccall f_308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_311)
static void C_ccall f_311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_314)
static void C_ccall f_314(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_462)
static void C_ccall f_462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1342)
static void C_ccall f_1342(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1328)
static void C_fcall f_1328(C_word t0,C_word t1) C_noret;
C_noret_decl(f_468)
static void C_ccall f_468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_801)
static void C_ccall f_801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_804)
static void C_ccall f_804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_807)
static void C_ccall f_807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1291)
static void C_ccall f_1291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1297)
static void C_fcall f_1297(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1301)
static void C_ccall f_1301(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1321)
static void C_ccall f_1321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1267)
static void C_ccall f_1267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1273)
static void C_fcall f_1273(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1286)
static void C_ccall f_1286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1246)
static void C_ccall f_1246(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1202)
static void C_ccall f_1202(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1202)
static void C_ccall f_1202r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1166)
static void C_ccall f_1166(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1166)
static void C_ccall f_1166r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1176)
static void C_ccall f_1176(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1184)
static void C_ccall f_1184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1121)
static void C_ccall f_1121(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1160)
static void C_ccall f_1160(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1139)
static void C_ccall f_1139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1088)
static void C_ccall f_1088(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1088)
static void C_ccall f_1088r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1097)
static void C_fcall f_1097(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1101)
static void C_ccall f_1101(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1110)
static void C_ccall f_1110(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1026)
static void C_ccall f_1026(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1026)
static void C_ccall f_1026r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1030)
static void C_ccall f_1030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1080)
static void C_ccall f_1080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1033)
static void C_ccall f_1033(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1041)
static void C_fcall f_1041(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1071)
static void C_ccall f_1071(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1067)
static void C_ccall f_1067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1048)
static void C_ccall f_1048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1054)
static void C_ccall f_1054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1062)
static void C_ccall f_1062(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1008)
static void C_ccall f_1008(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1020)
static void C_ccall f_1020(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1014)
static void C_ccall f_1014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_990)
static void C_ccall f_990(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1002)
static void C_ccall f_1002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_996)
static void C_ccall f_996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_978)
static void C_ccall f_978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_954)
static void C_ccall f_954(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_966)
static void C_ccall f_966(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_960)
static void C_ccall f_960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_936)
static void C_ccall f_936(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_948)
static void C_ccall f_948(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_942)
static void C_ccall f_942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_921)
static void C_ccall f_921(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_933)
static void C_ccall f_933(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_927)
static void C_ccall f_927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_906)
static void C_ccall f_906(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_918)
static void C_ccall f_918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_912)
static void C_ccall f_912(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_891)
static void C_ccall f_891(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_903)
static void C_ccall f_903(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_897)
static void C_ccall f_897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_822)
static void C_ccall f_822(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_835)
static void C_ccall f_835(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_874)
static void C_ccall f_874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_845)
static void C_ccall f_845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_808)
static void C_fcall f_808(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_719)
static void C_ccall f_719(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_719)
static void C_ccall f_719r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_751)
static void C_fcall f_751(C_word t0,C_word t1) C_noret;
C_noret_decl(f_746)
static void C_fcall f_746(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_721)
static void C_fcall f_721(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_729)
static void C_ccall f_729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_745)
static void C_ccall f_745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_662)
static void C_ccall f_662(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_662)
static void C_ccall f_662r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_674)
static void C_fcall f_674(C_word t0,C_word t1) C_noret;
C_noret_decl(f_669)
static void C_fcall f_669(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_664)
static void C_fcall f_664(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_599)
static void C_fcall f_599(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_603)
static void C_ccall f_603(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_643)
static void C_fcall f_643(C_word t0,C_word t1) C_noret;
C_noret_decl(f_619)
static void C_ccall f_619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_626)
static void C_fcall f_626(C_word t0,C_word t1) C_noret;
C_noret_decl(f_568)
static void C_fcall f_568(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_514)
static void C_fcall f_514(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_520)
static void C_fcall f_520(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_550)
static void C_ccall f_550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_554)
static void C_ccall f_554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_479)
static void C_fcall f_479(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_495)
static void C_fcall f_495(C_word t0,C_word t1) C_noret;
C_noret_decl(f_469)
static void C_ccall f_469(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_477)
static void C_ccall f_477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_445)
static void C_ccall f_445(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_452)
static void C_ccall f_452(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_458)
static void C_ccall f_458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_427)
static void C_ccall f_427(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_427)
static void C_ccall f_427r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_431)
static void C_ccall f_431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_434)
static void C_ccall f_434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_408)
static void C_ccall f_408(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_408)
static void C_ccall f_408r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_425)
static void C_ccall f_425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_414)
static void C_ccall f_414(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_418)
static void C_ccall f_418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_402)
static void C_ccall f_402(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_402)
static void C_ccall f_402r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_363)
static void C_fcall f_363(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_367)
static void C_ccall f_367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_379)
static void C_ccall f_379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_370)
static void C_ccall f_370(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_316)
static void C_ccall f_316(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_362)
static void C_ccall f_362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_320)
static void C_fcall f_320(C_word t0,C_word t1) C_noret;
C_noret_decl(f_355)
static void C_ccall f_355(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_351)
static void C_ccall f_351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_323)
static void C_fcall f_323(C_word t0,C_word t1) C_noret;
C_noret_decl(f_328)
static void C_ccall f_328(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_344)
static void C_ccall f_344(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_340)
static void C_ccall f_340(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1328)
static void C_fcall trf_1328(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1328(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1328(t0,t1);}

C_noret_decl(trf_1297)
static void C_fcall trf_1297(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1297(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1297(t0,t1,t2);}

C_noret_decl(trf_1273)
static void C_fcall trf_1273(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1273(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1273(t0,t1);}

C_noret_decl(trf_1097)
static void C_fcall trf_1097(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1097(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1097(t0,t1);}

C_noret_decl(trf_1041)
static void C_fcall trf_1041(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1041(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1041(t0,t1);}

C_noret_decl(trf_808)
static void C_fcall trf_808(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_808(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_808(t0,t1,t2);}

C_noret_decl(trf_751)
static void C_fcall trf_751(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_751(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_751(t0,t1);}

C_noret_decl(trf_746)
static void C_fcall trf_746(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_746(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_746(t0,t1,t2);}

C_noret_decl(trf_721)
static void C_fcall trf_721(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_721(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_721(t0,t1,t2,t3);}

C_noret_decl(trf_674)
static void C_fcall trf_674(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_674(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_674(t0,t1);}

C_noret_decl(trf_669)
static void C_fcall trf_669(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_669(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_669(t0,t1,t2);}

C_noret_decl(trf_664)
static void C_fcall trf_664(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_664(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_664(t0,t1,t2,t3);}

C_noret_decl(trf_599)
static void C_fcall trf_599(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_599(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_599(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_643)
static void C_fcall trf_643(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_643(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_643(t0,t1);}

C_noret_decl(trf_626)
static void C_fcall trf_626(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_626(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_626(t0,t1);}

C_noret_decl(trf_568)
static void C_fcall trf_568(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_568(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_568(t0,t1,t2,t3);}

C_noret_decl(trf_514)
static void C_fcall trf_514(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_514(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_514(t0,t1,t2,t3);}

C_noret_decl(trf_520)
static void C_fcall trf_520(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_520(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_520(t0,t1,t2);}

C_noret_decl(trf_479)
static void C_fcall trf_479(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_479(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_479(t0,t1,t2);}

C_noret_decl(trf_495)
static void C_fcall trf_495(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_495(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_495(t0,t1);}

C_noret_decl(trf_363)
static void C_fcall trf_363(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_363(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_363(t0,t1,t2,t3);}

C_noret_decl(trf_320)
static void C_fcall trf_320(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_320(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_320(t0,t1);}

C_noret_decl(trf_323)
static void C_fcall trf_323(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_323(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_323(t0,t1);}

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
if(!C_demand_2(620)){
C_save(t1);
C_rereclaim2(620*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,91);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[2]=C_h_intern(&lf[2],11,"\003sysapropos");
lf[3]=C_h_intern(&lf[3],13,"string-search");
lf[4]=C_h_intern(&lf[4],14,"symbol->string");
lf[5]=C_h_intern(&lf[5],23,"\003sysenvironment-symbols");
lf[6]=C_h_intern(&lf[6],6,"regexp");
lf[7]=C_h_intern(&lf[7],13,"regexp-escape");
lf[8]=C_h_intern(&lf[8],15,"\003syssignal-hook");
lf[9]=C_h_intern(&lf[9],11,"\000type-error");
lf[10]=C_static_string(C_heaptop,51,"bad argument type - not a string, symbol, or regexp");
lf[11]=C_h_intern(&lf[11],7,"regexp\077");
lf[12]=C_h_intern(&lf[12],23,"interaction-environment");
lf[13]=C_h_intern(&lf[13],12,"apropos-list");
lf[14]=C_h_intern(&lf[14],7,"apropos");
lf[15]=C_h_intern(&lf[15],7,"newline");
lf[16]=C_h_intern(&lf[16],7,"display");
lf[17]=C_h_intern(&lf[17],12,"\003sysfor-each");
lf[18]=C_h_intern(&lf[18],7,"sprintf");
lf[19]=C_h_intern(&lf[19],6,"system");
lf[20]=C_h_intern(&lf[20],7,"system*");
lf[21]=C_h_intern(&lf[21],9,"\003syserror");
lf[22]=C_static_string(C_heaptop,51,"shell invocation failed with non-zero return status");
lf[23]=C_h_intern(&lf[23],12,"file-exists\077");
lf[24]=C_h_intern(&lf[24],11,"delete-file");
lf[25]=C_h_intern(&lf[25],12,"delete-file*");
lf[26]=C_static_string(C_heaptop,12,"([A-Za-z]:)\077");
lf[27]=C_static_string(C_heaptop,0,"");
lf[28]=C_h_intern(&lf[28],12,"string-match");
lf[29]=C_h_intern(&lf[29],18,"absolute-pathname\077");
lf[31]=C_h_intern(&lf[31],13,"\003syssubstring");
lf[32]=C_h_intern(&lf[32],13,"string-append");
lf[33]=C_h_intern(&lf[33],32,"\003syspathname-directory-separator");
lf[34]=C_static_string(C_heaptop,0,"");
lf[35]=C_static_string(C_heaptop,0,"");
lf[36]=C_static_string(C_heaptop,0,"");
lf[37]=C_static_string(C_heaptop,0,"");
lf[38]=C_static_string(C_heaptop,1,".");
lf[39]=C_static_string(C_heaptop,0,"");
lf[40]=C_h_intern(&lf[40],13,"make-pathname");
lf[41]=C_h_intern(&lf[41],22,"make-absolute-pathname");
lf[42]=C_h_intern(&lf[42],17,"\003sysstring-append");
lf[43]=C_h_intern(&lf[43],18,"decompose-pathname");
lf[44]=C_h_intern(&lf[44],18,"pathname-directory");
lf[45]=C_h_intern(&lf[45],13,"pathname-file");
lf[46]=C_h_intern(&lf[46],18,"pathname-extension");
lf[47]=C_h_intern(&lf[47],24,"pathname-strip-directory");
lf[48]=C_h_intern(&lf[48],24,"pathname-strip-extension");
lf[49]=C_h_intern(&lf[49],26,"pathname-replace-directory");
lf[50]=C_h_intern(&lf[50],21,"pathname-replace-file");
lf[51]=C_h_intern(&lf[51],26,"pathname-replace-extension");
lf[52]=C_h_intern(&lf[52],6,"getenv");
lf[53]=C_h_intern(&lf[53],21,"call-with-output-file");
lf[54]=C_h_intern(&lf[54],21,"create-temporary-file");
lf[55]=C_static_string(C_heaptop,3,"tmp");
lf[56]=C_static_string(C_heaptop,1,"t");
lf[57]=C_static_string(C_heaptop,3,"TMP");
lf[58]=C_static_string(C_heaptop,4,"TEMP");
lf[59]=C_static_string(C_heaptop,6,"TMPDIR");
lf[60]=C_h_intern(&lf[60],9,"read-line");
lf[61]=C_h_intern(&lf[61],13,"for-each-line");
lf[62]=C_h_intern(&lf[62],18,"\003sysstandard-input");
lf[63]=C_h_intern(&lf[63],18,"for-each-argv-line");
lf[64]=C_static_string(C_heaptop,1,"-");
lf[65]=C_h_intern(&lf[65],20,"with-input-from-file");
lf[66]=C_h_intern(&lf[66],22,"command-line-arguments");
lf[67]=C_h_intern(&lf[67],8,"read-all");
lf[68]=C_h_intern(&lf[68],11,"read-string");
lf[69]=C_h_intern(&lf[69],5,"port\077");
lf[70]=C_h_intern(&lf[70],6,"shift!");
lf[71]=C_h_intern(&lf[71],8,"unshift!");
lf[72]=C_h_intern(&lf[72],13,"port-for-each");
lf[73]=C_h_intern(&lf[73],7,"reverse");
lf[74]=C_h_intern(&lf[74],8,"port-map");
lf[75]=C_static_string(C_heaptop,5,"^(.*[");
lf[76]=C_static_string(C_heaptop,11,"])\077((\134.)\077[^");
lf[77]=C_static_string(C_heaptop,4,"]+)$");
lf[78]=C_static_string(C_heaptop,5,"^(.*[");
lf[79]=C_static_string(C_heaptop,6,"])\077([^");
lf[80]=C_static_string(C_heaptop,9,"]+)(\134.([^");
lf[81]=C_static_string(C_heaptop,6,".]+))$");
lf[82]=C_static_string(C_heaptop,3,"\134/\134");
lf[83]=C_static_string(C_heaptop,4,"[\134/\134");
lf[84]=C_static_string(C_heaptop,3,"].*");
lf[85]=C_h_intern(&lf[85],7,"windows");
lf[86]=C_h_intern(&lf[86],6,"cygwin");
lf[87]=C_h_intern(&lf[87],14,"build-platform");
lf[88]=C_h_intern(&lf[88],13,"software-type");
lf[89]=C_h_intern(&lf[89],17,"register-feature!");
lf[90]=C_h_intern(&lf[90],5,"utils");
C_register_lf2(lf,91,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_308,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_regex_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k306 */
static void C_ccall f_308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_308,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_311,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k309 in k306 */
static void C_ccall f_311(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_311,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_314,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 75   register-feature! */
t3=*((C_word*)lf[89]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[90]);}

/* k312 in k309 in k306 */
static void C_ccall f_314(C_word c,C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_314,2,t0,t1);}
t2=C_mutate((C_word*)lf[2]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_316,tmp=(C_word)a,a+=2,tmp));
t3=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_363,tmp=(C_word)a,a+=2,tmp);
t4=C_mutate((C_word*)lf[13]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_402,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[14]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_408,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t6=*((C_word*)lf[18]+1);
t7=*((C_word*)lf[19]+1);
t8=C_mutate((C_word*)lf[20]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_427,a[2]=t6,a[3]=t7,tmp=(C_word)a,a+=4,tmp));
t9=*((C_word*)lf[23]+1);
t10=*((C_word*)lf[24]+1);
t11=C_mutate((C_word*)lf[25]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_445,a[2]=t9,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_462,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 132  software-type */
t13=*((C_word*)lf[88]+1);
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}

/* k460 in k312 in k309 in k306 */
static void C_ccall f_462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_462,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1328,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_eqp(lf[85],t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1342,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 135  build-platform */
t5=*((C_word*)lf[87]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}
else{
t4=t2;
f_1328(t4,C_SCHEME_FALSE);}}

/* k1340 in k460 in k312 in k309 in k306 */
static void C_ccall f_1342(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(lf[86],t1);
t3=((C_word*)t0)[2];
f_1328(t3,(C_word)C_i_not(t2));}

/* k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_1328(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1328,NULL,2,t0,t1);}
t2=(C_truep(t1)?lf[26]:lf[27]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_468,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_a_i_string(&a,1,*((C_word*)lf[33]+1));
/* utils.scm: 138  string-append */
t5=*((C_word*)lf[32]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t3,t2,lf[83],t4,lf[84]);}

/* k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_468(C_word c,C_word t0,C_word t1){
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
C_word ab[34],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_468,2,t0,t1);}
t2=*((C_word*)lf[28]+1);
t3=C_mutate((C_word*)lf[29]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_469,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp));
t4=C_mutate(&lf[30],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_479,tmp=(C_word)a,a+=2,tmp));
t5=*((C_word*)lf[32]+1);
t6=*((C_word*)lf[29]+1);
t7=(C_word)C_a_i_string(&a,1,*((C_word*)lf[33]+1));
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_514,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_568,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_599,a[2]=t9,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t11=C_mutate((C_word*)lf[40]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_662,a[2]=t7,a[3]=t10,tmp=(C_word)a,a+=4,tmp));
t12=C_mutate((C_word*)lf[41]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_719,a[2]=t7,a[3]=t9,a[4]=t6,a[5]=t10,tmp=(C_word)a,a+=6,tmp));
t13=(C_word)C_a_i_string(&a,1,*((C_word*)lf[33]+1));
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_801,a[2]=((C_word*)t0)[2],a[3]=t13,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 205  ##sys#string-append */
t15=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t15+1)))(4,t15,t14,lf[82],t13);}

/* k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_801,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_804,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 206  string-append */
t3=*((C_word*)lf[32]+1);
((C_proc9)(void*)(*((C_word*)t3+1)))(9,t3,t2,lf[78],t1,lf[79],t1,lf[80],t1,lf[81]);}

/* k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_804,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_807,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 207  string-append */
t3=*((C_word*)lf[32]+1);
((C_proc7)(void*)(*((C_word*)t3+1)))(7,t3,t2,lf[75],((C_word*)t0)[2],lf[76],((C_word*)t0)[2],lf[77]);}

/* k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_807(C_word c,C_word t0,C_word t1){
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
C_word ab[54],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_807,2,t0,t1);}
t2=*((C_word*)lf[28]+1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_808,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t4=C_mutate((C_word*)lf[43]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_822,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t5=*((C_word*)lf[43]+1);
t6=C_mutate((C_word*)lf[44]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_891,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[45]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_906,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[46]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_921,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[47]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_936,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[48]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_954,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[49]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_972,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[50]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_990,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t13=C_mutate((C_word*)lf[51]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1008,a[2]=t5,tmp=(C_word)a,a+=3,tmp));
t14=*((C_word*)lf[52]+1);
t15=*((C_word*)lf[40]+1);
t16=*((C_word*)lf[23]+1);
t17=*((C_word*)lf[53]+1);
t18=C_mutate((C_word*)lf[54]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1026,a[2]=t14,a[3]=t15,a[4]=t16,a[5]=t17,tmp=(C_word)a,a+=6,tmp));
t19=*((C_word*)lf[60]+1);
t20=C_mutate((C_word*)lf[61]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1088,a[2]=t19,tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[63]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1121,tmp=(C_word)a,a+=2,tmp));
t22=C_mutate((C_word*)lf[67]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1166,tmp=(C_word)a,a+=2,tmp));
t23=C_mutate((C_word*)lf[70]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1202,tmp=(C_word)a,a+=2,tmp));
t24=C_mutate((C_word*)lf[71]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1246,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[72]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1267,tmp=(C_word)a,a+=2,tmp));
t26=*((C_word*)lf[73]+1);
t27=C_mutate((C_word*)lf[74]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1291,a[2]=t26,tmp=(C_word)a,a+=3,tmp));
t28=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t28+1)))(2,t28,C_SCHEME_UNDEFINED);}

/* port-map in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1291(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1291,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1297,a[2]=t3,a[3]=t2,a[4]=t5,a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_1297(t7,t1,C_SCHEME_END_OF_LIST);}

/* loop in port-map in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_1297(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1297,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1301,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* utils.scm: 350  thunk */
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1299 in loop in port-map in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1301(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1301,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_SCHEME_END_OF_FILE);
if(C_truep(t2)){
/* utils.scm: 352  reverse */
t3=((C_word*)t0)[6];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1321,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 353  fn */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}}

/* k1319 in k1299 in loop in port-map in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1321,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* utils.scm: 353  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1297(t3,((C_word*)t0)[2],t2);}

/* port-for-each in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1267(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1267,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1273,a[2]=t3,a[3]=t2,a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1273(t7,t1);}

/* loop in port-for-each in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_1273(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1273,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1277,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 341  thunk */
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k1275 in loop in port-for-each in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1277,2,t0,t1);}
t2=(C_word)C_eqp(t1,C_SCHEME_END_OF_FILE);
if(C_truep(t2)){
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1286,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 343  fn */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t1);}}

/* k1284 in k1275 in loop in port-for-each in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 344  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1273(t2,((C_word*)t0)[2]);}

/* unshift! in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1246(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1246,4,t0,t1,t2,t3);}
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_slot(t3,C_fix(1));
t6=(C_word)C_a_i_cons(&a,2,t4,t5);
t7=(C_word)C_i_setslot(t3,C_fix(1),t6);
t8=(C_word)C_i_setslot(t3,C_fix(0),t2);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t3);}

/* shift! in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1202(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1202r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1202r(t0,t1,t2,t3);}}

static void C_ccall f_1202r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t4=(C_word)C_vemptyp(t3);
t5=(C_truep(t4)?C_SCHEME_FALSE:(C_word)C_slot(t3,C_fix(0)));
if(C_truep((C_word)C_i_nullp(t2))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t6=(C_word)C_slot(t2,C_fix(0));
t7=(C_word)C_slot(t2,C_fix(1));
t8=(C_word)C_slot(t7,C_fix(1));
t9=(C_word)C_i_setslot(t2,C_fix(1),t8);
t10=(C_word)C_slot(t7,C_fix(0));
t11=(C_word)C_i_setslot(t2,C_fix(0),t10);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t6);}}

/* read-all in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1166(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2rv,(void*)f_1166r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_1166r(t0,t1,t2);}}

static void C_ccall f_1166r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t3=(C_word)C_vemptyp(t2);
t4=(C_truep(t3)?*((C_word*)lf[62]+1):(C_word)C_slot(t2,C_fix(0)));
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1176,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 311  port? */
t6=*((C_word*)lf[69]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t4);}

/* k1174 in read-all in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1176(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[2],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1176,2,t0,t1);}
if(C_truep(t1)){
/* utils.scm: 312  read-string */
t2=*((C_word*)lf[68]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],C_SCHEME_FALSE,((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1184,tmp=(C_word)a,a+=2,tmp);
/* utils.scm: 313  with-input-from-file */
t3=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}}

/* a1183 in k1174 in read-all in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1184,2,t0,t1);}
/* read-string */
t2=*((C_word*)lf[68]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_FALSE);}

/* for-each-argv-line in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1121(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1121,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1146,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 299  command-line-arguments */
t4=*((C_word*)lf[66]+1);
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1144 in for-each-argv-line in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1146,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
/* utils.scm: 302  for-each-line */
t2=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1160,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t3=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,t1);}}

/* a1159 in k1144 in for-each-argv-line in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1160(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1160,3,t0,t1,t2);}
t3=((C_word*)t0)[2];
if(C_truep((C_word)C_u_i_string_equal_p(t2,lf[64]))){
/* utils.scm: 297  for-each-line */
t4=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1139,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 298  with-input-from-file */
t5=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t4);}}

/* a1138 in a1159 in k1144 in for-each-argv-line in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1139,2,t0,t1);}
/* for-each-line */
t2=*((C_word*)lf[61]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* for-each-line in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1088(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1088r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1088r(t0,t1,t2,t3);}}

static void C_ccall f_1088r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word *a=C_alloc(8);
t4=(C_word)C_notvemptyp(t3);
t5=(C_truep(t4)?(C_word)C_slot(t3,C_fix(0)):*((C_word*)lf[62]+1));
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1097,a[2]=t5,a[3]=((C_word*)t0)[2],a[4]=t2,a[5]=t7,tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_1097(t9,t1);}

/* loop in for-each-line in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_1097(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1097,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1101,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 286  read-line */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1099 in loop in for-each-line in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1101(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1101,2,t0,t1);}
if(C_truep((C_word)C_eofp(t1))){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1110,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 288  proc */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}}

/* k1108 in k1099 in loop in for-each-line in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1110(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 289  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1097(t2,((C_word*)t0)[2]);}

/* create-temporary-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1026(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr2rv,(void*)f_1026r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_1026r(t0,t1,t2);}}

static void C_ccall f_1026r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(8);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1030,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* utils.scm: 267  getenv */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[59]);}

/* k1028 in create-temporary-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1033,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t1)){
t3=t2;
f_1033(2,t3,t1);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1080,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 267  getenv */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[58]);}}

/* k1078 in k1028 in create-temporary-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
f_1033(2,t2,t1);}
else{
/* utils.scm: 267  getenv */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[3],lf[57]);}}

/* k1031 in k1028 in create-temporary-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1033(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1033,2,t0,t1);}
t2=(C_word)C_notvemptyp(((C_word*)t0)[6]);
t3=(C_truep(t2)?(C_word)C_slot(((C_word*)t0)[6],C_fix(0)):lf[55]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1041,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t5,tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_1041(t7,((C_word*)t0)[2]);}

/* loop in k1031 in k1028 in create-temporary-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_1041(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1041,NULL,2,t0,t1);}
t2=(C_word)C_fudge(C_fix(16));
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1048,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t1,a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1067,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1071,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 272  number->string */
C_number_to_string(4,0,t5,t2,C_fix(16));}

/* k1069 in loop in k1031 in k1028 in create-temporary-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1071(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 272  ##sys#string-append */
t2=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[56],t1);}

/* k1065 in loop in k1031 in k1028 in create-temporary-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 272  make-pathname */
t2=((C_word*)t0)[5];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k1046 in loop in k1031 in k1028 in create-temporary-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1048,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1054,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* utils.scm: 273  file-exists? */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k1052 in k1046 in loop in k1031 in k1028 in create-temporary-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1054,2,t0,t1);}
if(C_truep(t1)){
/* utils.scm: 274  loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_1041(t2,((C_word*)t0)[4]);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1062,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 275  call-with-output-file */
t3=((C_word*)t0)[2];
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[4],((C_word*)t0)[3],t2);}}

/* a1061 in k1052 in k1046 in loop in k1031 in k1028 in create-temporary-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1062(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1062,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* pathname-replace-extension in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1008(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1008,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1014,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1020,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a1019 in pathname-replace-extension in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1020(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1020,5,t0,t1,t2,t3,t4);}
/* utils.scm: 259  make-pathname */
t5=*((C_word*)lf[40]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,t3,((C_word*)t0)[2]);}

/* a1013 in pathname-replace-extension in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1014,2,t0,t1);}
/* utils.scm: 258  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-replace-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_990(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_990,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_996,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1002,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a1001 in pathname-replace-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_1002(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1002,5,t0,t1,t2,t3,t4);}
/* utils.scm: 255  make-pathname */
t5=*((C_word*)lf[40]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,t2,((C_word*)t0)[2],t4);}

/* a995 in pathname-replace-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_996,2,t0,t1);}
/* utils.scm: 254  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-replace-directory in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_972(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_972,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_978,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_984,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t4,t5);}

/* a983 in pathname-replace-directory in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_984(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_984,5,t0,t1,t2,t3,t4);}
/* utils.scm: 251  make-pathname */
t5=*((C_word*)lf[40]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[2],t3,t4);}

/* a977 in pathname-replace-directory in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_978,2,t0,t1);}
/* utils.scm: 250  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-strip-extension in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_954(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_954,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_960,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_966,tmp=(C_word)a,a+=2,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t3,t4);}

/* a965 in pathname-strip-extension in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_966(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_966,5,t0,t1,t2,t3,t4);}
/* utils.scm: 247  make-pathname */
t5=*((C_word*)lf[40]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t1,t2,t3);}

/* a959 in pathname-strip-extension in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_960,2,t0,t1);}
/* utils.scm: 246  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-strip-directory in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_936(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_936,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_942,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_948,tmp=(C_word)a,a+=2,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t3,t4);}

/* a947 in pathname-strip-directory in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_948(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_948,5,t0,t1,t2,t3,t4);}
/* utils.scm: 243  make-pathname */
t5=*((C_word*)lf[40]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,C_SCHEME_FALSE,t3,t4);}

/* a941 in pathname-strip-directory in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_942,2,t0,t1);}
/* utils.scm: 242  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-extension in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_921(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_921,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_927,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_933,tmp=(C_word)a,a+=2,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t3,t4);}

/* a932 in pathname-extension in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_933(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_933,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* a926 in pathname-extension in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_927,2,t0,t1);}
/* utils.scm: 238  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_906(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_906,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_912,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_918,tmp=(C_word)a,a+=2,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t3,t4);}

/* a917 in pathname-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_918(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_918,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* a911 in pathname-file in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_912(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_912,2,t0,t1);}
/* utils.scm: 234  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* pathname-directory in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_891(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_891,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_897,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_903,tmp=(C_word)a,a+=2,tmp);
/* ##sys#call-with-values */
C_u_call_with_values(4,0,t1,t3,t4);}

/* a902 in pathname-directory in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_903(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_903,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}

/* a896 in pathname-directory in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_897,2,t0,t1);}
/* utils.scm: 230  decompose-pathname */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,((C_word*)t0)[2]);}

/* decompose-pathname in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_822(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_822,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=(C_word)C_eqp(t3,C_fix(0));
if(C_truep(t4)){
/* utils.scm: 218  values */
C_values(5,0,t1,C_SCHEME_FALSE,C_SCHEME_FALSE,C_SCHEME_FALSE);}
else{
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_835,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* utils.scm: 219  string-search */
t6=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[2],t2);}}

/* k833 in decompose-pathname in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_835(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_835,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_845,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_i_cadr(t1);
/* utils.scm: 221  strip-pds */
t4=((C_word*)t0)[4];
f_808(t4,t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_864,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 222  string-search */
t3=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k862 in k833 in decompose-pathname in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_864(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_864,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_874,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_i_cadr(t1);
/* utils.scm: 224  strip-pds */
t4=((C_word*)t0)[3];
f_808(t4,t2,t3);}
else{
/* utils.scm: 225  values */
C_values(5,0,((C_word*)t0)[4],((C_word*)t0)[2],C_SCHEME_FALSE,C_SCHEME_FALSE);}}

/* k872 in k862 in k833 in decompose-pathname in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_i_caddr(((C_word*)t0)[3]);
/* utils.scm: 224  values */
C_values(5,0,((C_word*)t0)[2],t1,t2,C_SCHEME_FALSE);}

/* k843 in k833 in decompose-pathname in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=(C_word)C_u_i_caddr(((C_word*)t0)[3]);
t3=(C_word)C_u_i_cddddr(((C_word*)t0)[3]);
t4=(C_word)C_u_i_car(t3);
/* utils.scm: 221  values */
C_values(5,0,((C_word*)t0)[2],t1,t2,t4);}

/* strip-pds in k805 in k802 in k799 in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_808(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_808,NULL,3,t0,t1,t2);}
if(C_truep(t2)){
if(C_truep((C_word)C_u_i_string_equal_p(t2,((C_word*)t0)[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
/* utils.scm: 214  chop-pds */
f_479(t1,t2,((C_word*)t0)[2]);}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* make-absolute-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_719(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+14)){
C_save_and_reclaim((void*)tr4r,(void*)f_719r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_719r(t0,t1,t2,t3,t4);}}

static void C_ccall f_719r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(14);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_721,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_746,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_751,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-ext99109 */
t8=t7;
f_751(t8,t1);}
else{
t8=(C_word)C_u_i_car(t4);
t9=(C_word)C_slot(t4,C_fix(1));
if(C_truep((C_word)C_i_nullp(t9))){
/* def-pds100107 */
t10=t6;
f_746(t10,t1,t8);}
else{
t10=(C_word)C_u_i_car(t9);
t11=(C_word)C_slot(t9,C_fix(1));
/* body97102 */
t12=t5;
f_721(t12,t1,t8,t10);}}}

/* def-ext99 in make-absolute-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_751(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_751,NULL,2,t0,t1);}
/* def-pds100107 */
t2=((C_word*)t0)[2];
f_746(t2,t1,C_SCHEME_FALSE);}

/* def-pds100 in make-absolute-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_746(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_746,NULL,3,t0,t1,t2);}
/* body97102 */
t3=((C_word*)t0)[3];
f_721(t3,t1,t2,((C_word*)t0)[2]);}

/* body97 in make-absolute-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_721(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_721,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_729,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* utils.scm: 196  canonicalize */
t5=((C_word*)t0)[3];
f_568(t5,t4,((C_word*)t0)[2],t3);}

/* k727 in body97 in make-absolute-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_729,2,t0,t1);}
t2=(C_word)C_block_size(t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_735,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_745,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 198  absolute-pathname? */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t1);}

/* k743 in k727 in body97 in make-absolute-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_735(2,t2,((C_word*)t0)[3]);}
else{
/* utils.scm: 199  ##sys#string-append */
t2=*((C_word*)lf[42]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)t0)[2],((C_word*)t0)[3]);}}

/* k733 in k727 in body97 in make-absolute-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 194  _make-pathname */
t2=((C_word*)t0)[6];
f_599(t2,((C_word*)t0)[5],t1,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* make-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_662(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr4r,(void*)f_662r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_662r(t0,t1,t2,t3,t4);}}

static void C_ccall f_662r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(12);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_664,a[2]=t3,a[3]=t2,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_669,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_674,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-ext7785 */
t8=t7;
f_674(t8,t1);}
else{
t8=(C_word)C_u_i_car(t4);
t9=(C_word)C_slot(t4,C_fix(1));
if(C_truep((C_word)C_i_nullp(t9))){
/* def-pds7883 */
t10=t6;
f_669(t10,t1,t8);}
else{
t10=(C_word)C_u_i_car(t9);
t11=(C_word)C_slot(t9,C_fix(1));
/* body7580 */
t12=t5;
f_664(t12,t1,t8,t10);}}}

/* def-ext77 in make-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_674(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_674,NULL,2,t0,t1);}
/* def-pds7883 */
t2=((C_word*)t0)[2];
f_669(t2,t1,C_SCHEME_FALSE);}

/* def-pds78 in make-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_669(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_669,NULL,3,t0,t1,t2);}
/* body7580 */
t3=((C_word*)t0)[3];
f_664(t3,t1,t2,((C_word*)t0)[2]);}

/* body75 in make-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_664(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_664,NULL,4,t0,t1,t2,t3);}
/* utils.scm: 191  _make-pathname */
t4=((C_word*)t0)[4];
f_599(t4,t1,((C_word*)t0)[3],((C_word*)t0)[2],t2,t3);}

/* _make-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_599(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_599,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_603,a[2]=t2,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t3,a[6]=t4,a[7]=t5,tmp=(C_word)a,a+=8,tmp);
/* utils.scm: 170  canonicalize */
t7=((C_word*)t0)[2];
f_568(t7,t6,t2,t5);}

/* k601 in _make-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_603(C_word c,C_word t0,C_word t1){
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
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_603,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[7]);
t3=((C_word*)t0)[6];
t4=(C_truep(t3)?t3:lf[36]);
t5=((C_word*)t0)[5];
t6=(C_truep(t5)?t5:lf[37]);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_619,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_643,a[2]=t2,a[3]=t7,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
t9=(C_word)C_block_size(t6);
t10=(C_word)C_fixnum_greater_or_equal_p(t9,t2);
t11=t8;
f_643(t11,(C_truep(t10)?(C_word)C_substring_compare(((C_word*)t0)[7],t6,C_fix(0),C_fix(0),t2):C_SCHEME_FALSE));}
else{
t9=t8;
f_643(t9,C_SCHEME_FALSE);}}

/* k641 in k601 in _make-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_643(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_block_size(((C_word*)t0)[4]);
/* utils.scm: 182  ##sys#substring */
t3=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[4],((C_word*)t0)[2],t2);}
else{
t2=((C_word*)t0)[3];
f_619(2,t2,((C_word*)t0)[4]);}}

/* k617 in k601 in _make-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_626,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[2]);
if(C_truep((C_word)C_fixnum_greaterp(t3,C_fix(0)))){
t4=(C_word)C_eqp((C_word)C_subchar(((C_word*)t0)[2],C_fix(0)),C_make_character(46));
t5=t2;
f_626(t5,(C_word)C_i_not(t4));}
else{
t4=t2;
f_626(t4,C_SCHEME_FALSE);}}

/* k624 in k617 in k601 in _make-pathname in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_626(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?lf[38]:lf[39]);
/* utils.scm: 177  string-append */
t3=((C_word*)t0)[6];
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* canonicalize in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_568(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_568,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_not(t2);
t5=(C_truep(t4)?t4:(C_word)C_i_nullp(t2));
if(C_truep(t5)){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,lf[35]);}
else{
if(C_truep((C_word)C_i_stringp(t2))){
t6=(C_word)C_a_i_list(&a,1,t2);
/* utils.scm: 167  conc-dirs */
t7=((C_word*)t0)[2];
f_514(t7,t1,t6,t3);}
else{
/* utils.scm: 168  conc-dirs */
t6=((C_word*)t0)[2];
f_514(t6,t1,t2,t3);}}}

/* conc-dirs in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_514(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_514,NULL,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_520,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_520(t7,t1,t2);}

/* loop in conc-dirs in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_520(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_520,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[34]);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_fix((C_word)C_header_size(t3));
t5=(C_word)C_eqp(t4,C_fix(0));
if(C_truep(t5)){
t6=(C_word)C_slot(t2,C_fix(1));
/* utils.scm: 163  loop */
t10=t1;
t11=t6;
t1=t10;
t2=t11;
goto loop;}
else{
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_550,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[2],a[5]=t1,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t7=(C_word)C_u_i_car(t2);
/* utils.scm: 164  chop-pds */
f_479(t6,t7,((C_word*)t0)[2]);}}}

/* k548 in loop in conc-dirs in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_550,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_554,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
/* utils.scm: 164  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_520(t4,t2,t3);}

/* k552 in k548 in loop in conc-dirs in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 164  string-append */
t2=((C_word*)t0)[5];
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* chop-pds in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_479(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_479,NULL,3,t1,t2,t3);}
if(C_truep(t2)){
t4=(C_word)C_block_size(t2);
t5=(C_word)C_block_size(t3);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_495,a[2]=t2,a[3]=t1,a[4]=t5,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,t5))){
t7=(C_word)C_u_fixnum_difference(t4,t5);
t8=t6;
f_495(t8,(C_word)C_substring_compare(t2,t3,t7,C_fix(0),t5));}
else{
t7=t6;
f_495(t7,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* k493 in chop-pds in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_fcall f_495(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_u_fixnum_difference(((C_word*)t0)[5],((C_word*)t0)[4]);
/* utils.scm: 150  ##sys#substring */
t3=*((C_word*)lf[31]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],((C_word*)t0)[2],C_fix(0),t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* absolute-pathname? in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_469(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_469,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_477,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 142  string-match */
t4=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,((C_word*)t0)[2],t2);}

/* k475 in absolute-pathname? in k466 in k1326 in k460 in k312 in k309 in k306 */
static void C_ccall f_477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_pairp(t1));}

/* delete-file* in k312 in k309 in k306 */
static void C_ccall f_445(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_445,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_452,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* utils.scm: 125  file-exists? */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k450 in delete-file* in k312 in k309 in k306 */
static void C_ccall f_452(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_452,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_458,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 125  delete-file */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* k456 in k450 in delete-file* in k312 in k309 in k306 */
static void C_ccall f_458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(t1)?C_SCHEME_TRUE:C_SCHEME_FALSE));}

/* system* in k312 in k309 in k306 */
static void C_ccall f_427(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr3r,(void*)f_427r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_427r(t0,t1,t2,t3);}}

static void C_ccall f_427r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(4);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_431,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
C_apply(5,0,t4,((C_word*)t0)[2],t2,t3);}

/* k429 in system* in k312 in k309 in k306 */
static void C_ccall f_431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_431,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_434,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 114  system */
t3=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,t1);}

/* k432 in k429 in system* in k312 in k309 in k306 */
static void C_ccall f_434(C_word c,C_word t0,C_word t1){
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
t3=*((C_word*)lf[21]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,((C_word*)t0)[3],lf[22],((C_word*)t0)[2],t1);}}

/* apropos in k312 in k309 in k306 */
static void C_ccall f_408(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_408r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_408r(t0,t1,t2,t3);}}

static void C_ccall f_408r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_414,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_425,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 104  %apropos-list */
f_363(t5,lf[14],t2,t3);}

/* k423 in apropos in k312 in k309 in k306 */
static void C_ccall f_425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a413 in apropos in k312 in k309 in k306 */
static void C_ccall f_414(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_414,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_418,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 103  display */
t4=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,t2);}

/* k416 in a413 in apropos in k312 in k309 in k306 */
static void C_ccall f_418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 103  newline */
t2=*((C_word*)lf[15]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* apropos-list in k312 in k309 in k306 */
static void C_ccall f_402(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr3r,(void*)f_402r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_402r(t0,t1,t2,t3);}}

static void C_ccall f_402r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
/* utils.scm: 99   %apropos-list */
f_363(t1,lf[13],t2,t3);}

/* %apropos-list in k312 in k309 in k306 */
static void C_fcall f_363(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_363,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_367,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
t6=t5;
f_367(2,t6,(C_word)C_u_i_car(t4));}
else{
/* utils.scm: 92   interaction-environment */
t6=*((C_word*)lf[12]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}}

/* k365 in %apropos-list in k312 in k309 in k306 */
static void C_ccall f_367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_367,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_370,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_stringp(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_379,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=t4;
f_379(2,t5,t3);}
else{
t5=(C_word)C_i_symbolp(((C_word*)t0)[3]);
if(C_truep(t5)){
t6=t4;
f_379(2,t6,t5);}
else{
/* utils.scm: 94   regexp? */
t6=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,((C_word*)t0)[3]);}}}

/* k377 in k365 in %apropos-list in k312 in k309 in k306 */
static void C_ccall f_379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[4];
f_370(2,t2,C_SCHEME_UNDEFINED);}
else{
/* utils.scm: 95   ##sys#signal-hook */
t2=*((C_word*)lf[8]+1);
((C_proc6)(void*)(*((C_word*)t2+1)))(6,t2,((C_word*)t0)[4],lf[9],((C_word*)t0)[3],lf[10],((C_word*)t0)[2]);}}

/* k368 in k365 in %apropos-list in k312 in k309 in k306 */
static void C_ccall f_370(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 96   ##sys#apropos */
t2=*((C_word*)lf[2]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* ##sys#apropos in k312 in k309 in k306 */
static void C_ccall f_316(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_316,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_320,a[2]=t3,a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t4)[1]))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_362,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 83   symbol->string */
t7=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t6,((C_word*)t4)[1]);}
else{
t6=t5;
f_320(t6,C_SCHEME_UNDEFINED);}}

/* k360 in ##sys#apropos in k312 in k309 in k306 */
static void C_ccall f_362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_320(t3,t2);}

/* k318 in ##sys#apropos in k312 in k309 in k306 */
static void C_fcall f_320(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_320,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_323,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_stringp(((C_word*)((C_word*)t0)[4])[1]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_351,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_355,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 85   regexp-escape */
t5=*((C_word*)lf[7]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)((C_word*)t0)[4])[1]);}
else{
t3=t2;
f_323(t3,C_SCHEME_UNDEFINED);}}

/* k353 in k318 in ##sys#apropos in k312 in k309 in k306 */
static void C_ccall f_355(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 85   regexp */
t2=*((C_word*)lf[6]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k349 in k318 in ##sys#apropos in k312 in k309 in k306 */
static void C_ccall f_351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_323(t3,t2);}

/* k321 in k318 in ##sys#apropos in k312 in k309 in k306 */
static void C_fcall f_323(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_323,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_328,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* utils.scm: 86   ##sys#environment-symbols */
t3=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* a327 in k321 in k318 in ##sys#apropos in k312 in k309 in k306 */
static void C_ccall f_328(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_328,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_340,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_344,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* utils.scm: 88   symbol->string */
t5=*((C_word*)lf[4]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k342 in a327 in k321 in k318 in ##sys#apropos in k312 in k309 in k306 */
static void C_ccall f_344(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* utils.scm: 88   string-search */
t2=*((C_word*)lf[3]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k338 in a327 in k321 in k318 in ##sys#apropos in k312 in k309 in k306 */
static void C_ccall f_340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_not(t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_not(t2));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[122] = {
{"toplevelutils.scm",(void*)C_utils_toplevel},
{"f_308utils.scm",(void*)f_308},
{"f_311utils.scm",(void*)f_311},
{"f_314utils.scm",(void*)f_314},
{"f_462utils.scm",(void*)f_462},
{"f_1342utils.scm",(void*)f_1342},
{"f_1328utils.scm",(void*)f_1328},
{"f_468utils.scm",(void*)f_468},
{"f_801utils.scm",(void*)f_801},
{"f_804utils.scm",(void*)f_804},
{"f_807utils.scm",(void*)f_807},
{"f_1291utils.scm",(void*)f_1291},
{"f_1297utils.scm",(void*)f_1297},
{"f_1301utils.scm",(void*)f_1301},
{"f_1321utils.scm",(void*)f_1321},
{"f_1267utils.scm",(void*)f_1267},
{"f_1273utils.scm",(void*)f_1273},
{"f_1277utils.scm",(void*)f_1277},
{"f_1286utils.scm",(void*)f_1286},
{"f_1246utils.scm",(void*)f_1246},
{"f_1202utils.scm",(void*)f_1202},
{"f_1166utils.scm",(void*)f_1166},
{"f_1176utils.scm",(void*)f_1176},
{"f_1184utils.scm",(void*)f_1184},
{"f_1121utils.scm",(void*)f_1121},
{"f_1146utils.scm",(void*)f_1146},
{"f_1160utils.scm",(void*)f_1160},
{"f_1139utils.scm",(void*)f_1139},
{"f_1088utils.scm",(void*)f_1088},
{"f_1097utils.scm",(void*)f_1097},
{"f_1101utils.scm",(void*)f_1101},
{"f_1110utils.scm",(void*)f_1110},
{"f_1026utils.scm",(void*)f_1026},
{"f_1030utils.scm",(void*)f_1030},
{"f_1080utils.scm",(void*)f_1080},
{"f_1033utils.scm",(void*)f_1033},
{"f_1041utils.scm",(void*)f_1041},
{"f_1071utils.scm",(void*)f_1071},
{"f_1067utils.scm",(void*)f_1067},
{"f_1048utils.scm",(void*)f_1048},
{"f_1054utils.scm",(void*)f_1054},
{"f_1062utils.scm",(void*)f_1062},
{"f_1008utils.scm",(void*)f_1008},
{"f_1020utils.scm",(void*)f_1020},
{"f_1014utils.scm",(void*)f_1014},
{"f_990utils.scm",(void*)f_990},
{"f_1002utils.scm",(void*)f_1002},
{"f_996utils.scm",(void*)f_996},
{"f_972utils.scm",(void*)f_972},
{"f_984utils.scm",(void*)f_984},
{"f_978utils.scm",(void*)f_978},
{"f_954utils.scm",(void*)f_954},
{"f_966utils.scm",(void*)f_966},
{"f_960utils.scm",(void*)f_960},
{"f_936utils.scm",(void*)f_936},
{"f_948utils.scm",(void*)f_948},
{"f_942utils.scm",(void*)f_942},
{"f_921utils.scm",(void*)f_921},
{"f_933utils.scm",(void*)f_933},
{"f_927utils.scm",(void*)f_927},
{"f_906utils.scm",(void*)f_906},
{"f_918utils.scm",(void*)f_918},
{"f_912utils.scm",(void*)f_912},
{"f_891utils.scm",(void*)f_891},
{"f_903utils.scm",(void*)f_903},
{"f_897utils.scm",(void*)f_897},
{"f_822utils.scm",(void*)f_822},
{"f_835utils.scm",(void*)f_835},
{"f_864utils.scm",(void*)f_864},
{"f_874utils.scm",(void*)f_874},
{"f_845utils.scm",(void*)f_845},
{"f_808utils.scm",(void*)f_808},
{"f_719utils.scm",(void*)f_719},
{"f_751utils.scm",(void*)f_751},
{"f_746utils.scm",(void*)f_746},
{"f_721utils.scm",(void*)f_721},
{"f_729utils.scm",(void*)f_729},
{"f_745utils.scm",(void*)f_745},
{"f_735utils.scm",(void*)f_735},
{"f_662utils.scm",(void*)f_662},
{"f_674utils.scm",(void*)f_674},
{"f_669utils.scm",(void*)f_669},
{"f_664utils.scm",(void*)f_664},
{"f_599utils.scm",(void*)f_599},
{"f_603utils.scm",(void*)f_603},
{"f_643utils.scm",(void*)f_643},
{"f_619utils.scm",(void*)f_619},
{"f_626utils.scm",(void*)f_626},
{"f_568utils.scm",(void*)f_568},
{"f_514utils.scm",(void*)f_514},
{"f_520utils.scm",(void*)f_520},
{"f_550utils.scm",(void*)f_550},
{"f_554utils.scm",(void*)f_554},
{"f_479utils.scm",(void*)f_479},
{"f_495utils.scm",(void*)f_495},
{"f_469utils.scm",(void*)f_469},
{"f_477utils.scm",(void*)f_477},
{"f_445utils.scm",(void*)f_445},
{"f_452utils.scm",(void*)f_452},
{"f_458utils.scm",(void*)f_458},
{"f_427utils.scm",(void*)f_427},
{"f_431utils.scm",(void*)f_431},
{"f_434utils.scm",(void*)f_434},
{"f_408utils.scm",(void*)f_408},
{"f_425utils.scm",(void*)f_425},
{"f_414utils.scm",(void*)f_414},
{"f_418utils.scm",(void*)f_418},
{"f_402utils.scm",(void*)f_402},
{"f_363utils.scm",(void*)f_363},
{"f_367utils.scm",(void*)f_367},
{"f_379utils.scm",(void*)f_379},
{"f_370utils.scm",(void*)f_370},
{"f_316utils.scm",(void*)f_316},
{"f_362utils.scm",(void*)f_362},
{"f_320utils.scm",(void*)f_320},
{"f_355utils.scm",(void*)f_355},
{"f_351utils.scm",(void*)f_351},
{"f_323utils.scm",(void*)f_323},
{"f_328utils.scm",(void*)f_328},
{"f_344utils.scm",(void*)f_344},
{"f_340utils.scm",(void*)f_340},
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
