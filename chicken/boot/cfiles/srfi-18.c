/* Generated from srfi-18.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:16
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: srfi-18.scm -output-file srfi-18.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: srfi_18
*/

#include "chicken.h"

static C_TLS long C_ms;
#define C_get_seconds   C_seconds(&C_ms)

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[170];


C_noret_decl(C_srfi_18_toplevel)
C_externexport void C_ccall C_srfi_18_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_259)
static void C_ccall f_259(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_262)
static void C_ccall f_262(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_528)
static void C_ccall f_528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1596)
static void C_ccall f_1596(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1570)
static void C_ccall f_1570(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1580)
static void C_ccall f_1580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1583)
static void C_ccall f_1583(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1586)
static void C_ccall f_1586(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1565)
static void C_fcall f_1565(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1530)
static void C_ccall f_1530(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1554)
static void C_ccall f_1554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1558)
static void C_ccall f_1558(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1493)
static void C_ccall f_1493(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1505)
static void C_ccall f_1505(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1500)
static void C_ccall f_1500(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1450)
static void C_ccall f_1450(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1426)
static void C_ccall f_1426(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1407)
static void C_ccall f_1407(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1407)
static void C_ccall f_1407r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1415)
static void C_ccall f_1415(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1225)
static void C_ccall f_1225(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1225)
static void C_ccall f_1225r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1243)
static void C_ccall f_1243(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1250)
static void C_ccall f_1250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1379)
static void C_ccall f_1379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1361)
static void C_ccall f_1361(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1339)
static void C_ccall f_1339(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1350)
static void C_ccall f_1350(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1265)
static void C_ccall f_1265(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1268)
static void C_ccall f_1268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1371)
static void C_ccall f_1371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1013)
static void C_ccall f_1013r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1023)
static void C_ccall f_1023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1040)
static void C_ccall f_1040(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1088)
static void C_fcall f_1088(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1091)
static void C_ccall f_1091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1198)
static void C_ccall f_1198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1150)
static void C_ccall f_1150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1156)
static void C_ccall f_1156(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1161)
static void C_ccall f_1161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1183)
static void C_ccall f_1183(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1064)
static void C_fcall f_1064(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1075)
static void C_ccall f_1075(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1043)
static void C_fcall f_1043(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1054)
static void C_ccall f_1054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_989)
static void C_ccall f_989(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_980)
static void C_ccall f_980(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_971)
static void C_ccall f_971(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_962)
static void C_ccall f_962(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_944)
static void C_ccall f_944(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_944)
static void C_ccall f_944r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_948)
static void C_ccall f_948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_938)
static void C_ccall f_938(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_898)
static void C_ccall f_898(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_926)
static void C_ccall f_926(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_933)
static void C_ccall f_933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_907)
static void C_ccall f_907(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_914)
static void C_ccall f_914(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_919)
static void C_ccall f_919(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_876)
static void C_ccall f_876(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_861)
static void C_ccall f_861(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_870)
static void C_ccall f_870(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_799)
static void C_ccall f_799(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_841)
static void C_ccall f_841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_806)
static void C_ccall f_806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_815)
static void C_ccall f_815(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_680)
static void C_ccall f_680(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_680)
static void C_ccall f_680r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_687)
static void C_ccall f_687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_701)
static void C_ccall f_701(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_705)
static void C_ccall f_705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_711)
static void C_ccall f_711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_716)
static void C_ccall f_716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_765)
static void C_ccall f_765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_746)
static void C_ccall f_746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_644)
static void C_ccall f_644(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_674)
static void C_ccall f_674(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_648)
static void C_fcall f_648(C_word t0,C_word t1) C_noret;
C_noret_decl(f_651)
static void C_ccall f_651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_657)
static void C_ccall f_657(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_635)
static void C_ccall f_635(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_619)
static void C_ccall f_619(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_610)
static void C_ccall f_610(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_601)
static void C_ccall f_601(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_592)
static void C_ccall f_592(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_583)
static void C_ccall f_583(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_580)
static void C_ccall f_580(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_574)
static void C_ccall f_574(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_530)
static void C_ccall f_530(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_530)
static void C_ccall f_530r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_559)
static void C_ccall f_559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_534)
static void C_ccall f_534(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_539)
static void C_ccall f_539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_545)
static void C_ccall f_545(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_545)
static void C_ccall f_545r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_552)
static void C_ccall f_552(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_510)
static void C_ccall f_510(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_494)
static void C_ccall f_494(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_478)
static void C_ccall f_478(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_462)
static void C_ccall f_462(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_454)
static void C_ccall f_454(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_438)
static void C_ccall f_438(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_384)
static void C_ccall f_384(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_391)
static void C_ccall f_391(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_432)
static void C_ccall f_432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_428)
static void C_ccall f_428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_394)
static void C_ccall f_394(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_412)
static void C_ccall f_412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_404)
static void C_ccall f_404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_355)
static void C_ccall f_355(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_334)
static void C_ccall f_334(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_307)
static void C_ccall f_307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_319)
static void C_ccall f_319(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_264)
static void C_fcall f_264(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_298)
static void C_ccall f_298(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1565)
static void C_fcall trf_1565(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1565(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1565(t0,t1);}

C_noret_decl(trf_1088)
static void C_fcall trf_1088(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1088(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1088(t0,t1);}

C_noret_decl(trf_1064)
static void C_fcall trf_1064(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1064(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1064(t0,t1);}

C_noret_decl(trf_1043)
static void C_fcall trf_1043(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1043(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1043(t0,t1);}

C_noret_decl(trf_648)
static void C_fcall trf_648(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_648(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_648(t0,t1);}

C_noret_decl(trf_264)
static void C_fcall trf_264(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_264(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_264(t0,t1,t2);}

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
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_srfi_18_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_srfi_18_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("srfi_18_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(1075)){
C_save(t1);
C_rereclaim2(1075*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,170);
lf[0]=C_h_intern(&lf[0],8,"truncate");
lf[2]=C_h_intern(&lf[2],4,"time");
lf[3]=C_h_intern(&lf[3],15,"\003syssignal-hook");
lf[4]=C_h_intern(&lf[4],11,"\000type-error");
lf[5]=C_static_string(C_heaptop,24,"invalid timeout argument");
lf[6]=C_static_lambda_info(C_heaptop,30,"(##sys#compute-time-limit tm1)");
lf[7]=C_h_intern(&lf[7],12,"current-time");
lf[8]=C_static_lambda_info(C_heaptop,14,"(current-time)");
lf[9]=C_h_intern(&lf[9],20,"srfi-18:current-time");
lf[10]=C_h_intern(&lf[10],13,"time->seconds");
lf[11]=C_static_lambda_info(C_heaptop,19,"(time->seconds tm5)");
lf[12]=C_h_intern(&lf[12],18,"time->milliseconds");
lf[13]=C_static_lambda_info(C_heaptop,24,"(time->milliseconds tm7)");
lf[14]=C_h_intern(&lf[14],13,"seconds->time");
lf[15]=C_h_intern(&lf[15],19,"\003sysflonum-fraction");
lf[16]=C_h_intern(&lf[16],18,"\003sysexact->inexact");
lf[17]=C_h_intern(&lf[17],3,"max");
lf[18]=C_static_lambda_info(C_heaptop,18,"(seconds->time n9)");
lf[19]=C_h_intern(&lf[19],18,"milliseconds->time");
lf[20]=C_static_lambda_info(C_heaptop,26,"(milliseconds->time nms14)");
lf[21]=C_h_intern(&lf[21],5,"time\077");
lf[22]=C_static_lambda_info(C_heaptop,11,"(time\077 x17)");
lf[23]=C_h_intern(&lf[23],13,"srfi-18:time\077");
lf[24]=C_h_intern(&lf[24],5,"raise");
lf[25]=C_h_intern(&lf[25],10,"\003syssignal");
lf[26]=C_h_intern(&lf[26],23,"join-timeout-exception\077");
lf[27]=C_h_intern(&lf[27],9,"condition");
lf[28]=C_h_intern(&lf[28],22,"join-timeout-exception");
lf[29]=C_static_lambda_info(C_heaptop,29,"(join-timeout-exception\077 x18)");
lf[30]=C_h_intern(&lf[30],26,"abandoned-mutex-exception\077");
lf[31]=C_h_intern(&lf[31],25,"abandoned-mutex-exception");
lf[32]=C_static_lambda_info(C_heaptop,32,"(abandoned-mutex-exception\077 x19)");
lf[33]=C_h_intern(&lf[33],28,"terminated-thread-exception\077");
lf[34]=C_h_intern(&lf[34],27,"terminated-thread-exception");
lf[35]=C_static_lambda_info(C_heaptop,34,"(terminated-thread-exception\077 x20)");
lf[36]=C_h_intern(&lf[36],19,"uncaught-exception\077");
lf[37]=C_h_intern(&lf[37],18,"uncaught-exception");
lf[38]=C_static_lambda_info(C_heaptop,25,"(uncaught-exception\077 x21)");
lf[39]=C_h_intern(&lf[39],25,"uncaught-exception-reason");
lf[40]=C_h_intern(&lf[40],6,"gensym");
lf[41]=C_h_intern(&lf[41],11,"make-thread");
lf[42]=C_h_intern(&lf[42],12,"\003sysschedule");
lf[43]=C_h_intern(&lf[43],16,"\003systhread-kill!");
lf[44]=C_h_intern(&lf[44],4,"dead");
lf[45]=C_static_lambda_info(C_heaptop,18,"(a544 . results26)");
lf[46]=C_static_lambda_info(C_heaptop,6,"(a538)");
lf[47]=C_h_intern(&lf[47],18,"\003syscurrent-thread");
lf[48]=C_h_intern(&lf[48],15,"\003sysmake-thread");
lf[49]=C_h_intern(&lf[49],7,"created");
lf[50]=C_h_intern(&lf[50],6,"thread");
lf[51]=C_static_lambda_info(C_heaptop,30,"(make-thread thunk23 . name24)");
lf[52]=C_h_intern(&lf[52],7,"thread\077");
lf[53]=C_static_lambda_info(C_heaptop,13,"(thread\077 x30)");
lf[54]=C_h_intern(&lf[54],14,"current-thread");
lf[55]=C_static_lambda_info(C_heaptop,16,"(current-thread)");
lf[56]=C_h_intern(&lf[56],12,"thread-state");
lf[57]=C_static_lambda_info(C_heaptop,23,"(thread-state thread31)");
lf[58]=C_h_intern(&lf[58],15,"thread-specific");
lf[59]=C_static_lambda_info(C_heaptop,26,"(thread-specific thread33)");
lf[60]=C_h_intern(&lf[60],20,"thread-specific-set!");
lf[61]=C_static_lambda_info(C_heaptop,35,"(thread-specific-set! thread35 x36)");
lf[62]=C_h_intern(&lf[62],14,"thread-quantum");
lf[63]=C_static_lambda_info(C_heaptop,25,"(thread-quantum thread38)");
lf[64]=C_h_intern(&lf[64],19,"thread-quantum-set!");
lf[65]=C_static_lambda_info(C_heaptop,34,"(thread-quantum-set! thread40 q41)");
lf[66]=C_h_intern(&lf[66],11,"thread-name");
lf[67]=C_static_lambda_info(C_heaptop,17,"(thread-name x44)");
lf[68]=C_h_intern(&lf[68],13,"thread-start!");
lf[69]=C_h_intern(&lf[69],5,"ready");
lf[70]=C_h_intern(&lf[70],22,"\003sysadd-to-ready-queue");
lf[71]=C_h_intern(&lf[71],9,"\003syserror");
lf[72]=C_static_string(C_heaptop,39,"thread can not be started a second time");
lf[73]=C_static_lambda_info(C_heaptop,24,"(thread-start! thread47)");
lf[74]=C_h_intern(&lf[74],13,"thread-yield!");
lf[75]=C_h_intern(&lf[75],17,"\003systhread-yield!");
lf[76]=C_h_intern(&lf[76],12,"thread-join!");
lf[77]=C_h_intern(&lf[77],10,"terminated");
tmp=C_intern(C_heaptop,18,"uncaught-exception");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"reason");
lf[78]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,18,"uncaught-exception");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[79]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,22,"join-timeout-exception");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[80]=C_h_pair(C_restore,tmp);
lf[81]=C_static_lambda_info(C_heaptop,6,"(a715)");
lf[82]=C_h_intern(&lf[82],33,"\003systhread-block-for-termination!");
lf[83]=C_h_intern(&lf[83],29,"\003systhread-block-for-timeout!");
lf[84]=C_static_lambda_info(C_heaptop,15,"(a700 return58)");
lf[85]=C_static_lambda_info(C_heaptop,35,"(thread-join! thread52 . timeout53)");
lf[86]=C_h_intern(&lf[86],17,"thread-terminate!");
tmp=C_intern(C_heaptop,27,"terminated-thread-exception");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[87]=C_h_pair(C_restore,tmp);
lf[88]=C_h_intern(&lf[88],21,"\003sysprimordial-thread");
lf[89]=C_h_intern(&lf[89],16,"\003sysexit-handler");
lf[90]=C_static_lambda_info(C_heaptop,28,"(thread-terminate! thread66)");
lf[91]=C_h_intern(&lf[91],15,"thread-suspend!");
lf[92]=C_h_intern(&lf[92],9,"suspended");
lf[93]=C_static_lambda_info(C_heaptop,6,"(a869)");
lf[94]=C_static_lambda_info(C_heaptop,15,"(a860 return73)");
lf[95]=C_static_lambda_info(C_heaptop,26,"(thread-suspend! thread72)");
lf[96]=C_h_intern(&lf[96],14,"thread-resume!");
lf[97]=C_static_lambda_info(C_heaptop,25,"(thread-resume! thread77)");
lf[98]=C_h_intern(&lf[98],13,"thread-sleep!");
lf[99]=C_static_lambda_info(C_heaptop,6,"(a918)");
lf[100]=C_static_lambda_info(C_heaptop,15,"(a906 return84)");
lf[101]=C_static_string(C_heaptop,24,"invalid timeout argument");
lf[102]=C_static_lambda_info(C_heaptop,20,"(thread-sleep! tm80)");
lf[103]=C_h_intern(&lf[103],6,"mutex\077");
lf[104]=C_h_intern(&lf[104],5,"mutex");
lf[105]=C_static_lambda_info(C_heaptop,12,"(mutex\077 x90)");
lf[106]=C_h_intern(&lf[106],10,"make-mutex");
lf[107]=C_h_intern(&lf[107],14,"\003sysmake-mutex");
lf[108]=C_static_lambda_info(C_heaptop,19,"(make-mutex . id92)");
lf[109]=C_h_intern(&lf[109],10,"mutex-name");
lf[110]=C_static_lambda_info(C_heaptop,16,"(mutex-name x95)");
lf[111]=C_h_intern(&lf[111],14,"mutex-specific");
lf[112]=C_static_lambda_info(C_heaptop,24,"(mutex-specific mutex97)");
lf[113]=C_h_intern(&lf[113],19,"mutex-specific-set!");
lf[114]=C_static_lambda_info(C_heaptop,34,"(mutex-specific-set! mutex99 x100)");
lf[115]=C_h_intern(&lf[115],11,"mutex-state");
lf[116]=C_h_intern(&lf[116],9,"not-owned");
lf[117]=C_h_intern(&lf[117],9,"abandoned");
lf[118]=C_h_intern(&lf[118],13,"not-abandoned");
lf[119]=C_static_lambda_info(C_heaptop,22,"(mutex-state mutex102)");
lf[120]=C_h_intern(&lf[120],11,"mutex-lock!");
lf[121]=C_h_intern(&lf[121],10,"\003sysappend");
lf[122]=C_static_lambda_info(C_heaptop,8,"(switch)");
tmp=C_intern(C_heaptop,25,"abandoned-mutex-exception");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[123]=C_h_pair(C_restore,tmp);
lf[124]=C_static_lambda_info(C_heaptop,7,"(check)");
lf[125]=C_h_intern(&lf[125],8,"\003sysdelq");
lf[126]=C_static_lambda_info(C_heaptop,7,"(a1160)");
lf[127]=C_h_intern(&lf[127],8,"sleeping");
lf[128]=C_static_lambda_info(C_heaptop,7,"(a1197)");
lf[129]=C_static_lambda_info(C_heaptop,17,"(a1039 return113)");
lf[130]=C_static_lambda_info(C_heaptop,36,"(mutex-lock! mutex106 . ms-and-t107)");
lf[131]=C_h_intern(&lf[131],13,"mutex-unlock!");
lf[132]=C_h_intern(&lf[132],18,"condition-variable");
lf[133]=C_static_lambda_info(C_heaptop,7,"(a1370)");
lf[134]=C_h_intern(&lf[134],7,"blocked");
lf[135]=C_static_lambda_info(C_heaptop,7,"(a1338)");
lf[136]=C_static_lambda_info(C_heaptop,17,"(a1242 return146)");
lf[137]=C_static_lambda_info(C_heaptop,41,"(mutex-unlock! mutex141 . cvar-and-to142)");
lf[138]=C_h_intern(&lf[138],23,"make-condition-variable");
lf[139]=C_static_lambda_info(C_heaptop,35,"(make-condition-variable . name170)");
lf[140]=C_h_intern(&lf[140],19,"condition-variable\077");
lf[141]=C_static_lambda_info(C_heaptop,26,"(condition-variable\077 x171)");
lf[142]=C_h_intern(&lf[142],27,"condition-variable-specific");
lf[143]=C_static_lambda_info(C_heaptop,35,"(condition-variable-specific cv172)");
lf[144]=C_h_intern(&lf[144],32,"condition-variable-specific-set!");
lf[145]=C_static_lambda_info(C_heaptop,45,"(condition-variable-specific-set! cv174 x175)");
lf[146]=C_h_intern(&lf[146],26,"condition-variable-signal!");
lf[147]=C_h_intern(&lf[147],25,"\003systhread-basic-unblock!");
lf[148]=C_static_lambda_info(C_heaptop,36,"(condition-variable-signal! cvar177)");
lf[149]=C_h_intern(&lf[149],29,"condition-variable-broadcast!");
lf[150]=C_static_lambda_info(C_heaptop,13,"(a1504 ti186)");
lf[151]=C_h_intern(&lf[151],12,"\003sysfor-each");
lf[152]=C_static_lambda_info(C_heaptop,39,"(condition-variable-broadcast! cvar185)");
lf[153]=C_h_intern(&lf[153],14,"thread-signal!");
lf[154]=C_static_lambda_info(C_heaptop,7,"(a1553)");
lf[155]=C_h_intern(&lf[155],19,"\003systhread-unblock!");
lf[156]=C_static_lambda_info(C_heaptop,33,"(thread-signal! thread192 exn193)");
lf[157]=C_h_intern(&lf[157],22,"thread-deliver-signal!");
lf[158]=C_h_intern(&lf[158],4,"msvc");
lf[159]=C_h_intern(&lf[159],20,"\003sysread-prompt-hook");
lf[160]=C_h_intern(&lf[160],25,"\003systhread-block-for-i/o!");
lf[161]=C_h_intern(&lf[161],13,"\003systty-port\077");
lf[162]=C_h_intern(&lf[162],18,"\003sysstandard-input");
lf[163]=C_static_lambda_info(C_heaptop,24,"(##sys#read-prompt-hook)");
lf[164]=C_h_intern(&lf[164],14,"build-platform");
lf[165]=C_h_intern(&lf[165],27,"condition-property-accessor");
lf[166]=C_h_intern(&lf[166],6,"reason");
lf[167]=C_h_intern(&lf[167],17,"register-feature!");
lf[168]=C_h_intern(&lf[168],7,"srfi-18");
lf[169]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,170,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_259,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k257 */
static void C_ccall f_259(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_259,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_262,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 78   register-feature! */
t3=*((C_word*)lf[167]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[168]);}

/* k260 in k257 */
static void C_ccall f_262(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_262,2,t0,t1);}
t2=*((C_word*)lf[0]+1);
t3=C_mutate(&lf[1],(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_264,a[2]=t2,a[3]=lf[6],tmp=(C_word)a,a+=4,tmp));
t4=C_mutate((C_word*)lf[7]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_307,a[2]=lf[8],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[9]+1,*((C_word*)lf[7]+1));
t6=C_mutate((C_word*)lf[10]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_334,a[2]=lf[11],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[12]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_355,a[2]=lf[13],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[14]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_384,a[2]=lf[18],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[19]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_438,a[2]=lf[20],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[21]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_454,a[2]=lf[22],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[23]+1,*((C_word*)lf[21]+1));
t12=C_mutate((C_word*)lf[24]+1,*((C_word*)lf[25]+1));
t13=C_mutate((C_word*)lf[26]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_462,a[2]=lf[29],tmp=(C_word)a,a+=3,tmp));
t14=C_mutate((C_word*)lf[30]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_478,a[2]=lf[32],tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[33]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_494,a[2]=lf[35],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate((C_word*)lf[36]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_510,a[2]=lf[38],tmp=(C_word)a,a+=3,tmp));
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_528,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 168  condition-property-accessor */
t18=*((C_word*)lf[165]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t17,lf[37],lf[166]);}

/* k526 in k260 in k257 */
static void C_ccall f_528(C_word c,C_word t0,C_word t1){
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
C_word ab[100],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_528,2,t0,t1);}
t2=C_mutate((C_word*)lf[39]+1,t1);
t3=*((C_word*)lf[40]+1);
t4=C_mutate((C_word*)lf[41]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_530,a[2]=t3,a[3]=lf[51],tmp=(C_word)a,a+=4,tmp));
t5=C_mutate((C_word*)lf[52]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_574,a[2]=lf[53],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[54]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_580,a[2]=lf[55],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate((C_word*)lf[56]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_583,a[2]=lf[57],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[58]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_592,a[2]=lf[59],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[60]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_601,a[2]=lf[61],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate((C_word*)lf[62]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_610,a[2]=lf[63],tmp=(C_word)a,a+=3,tmp));
t11=C_mutate((C_word*)lf[64]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_619,a[2]=lf[65],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate((C_word*)lf[66]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_635,a[2]=lf[67],tmp=(C_word)a,a+=3,tmp));
t13=*((C_word*)lf[41]+1);
t14=C_mutate((C_word*)lf[68]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_644,a[2]=t13,a[3]=lf[73],tmp=(C_word)a,a+=4,tmp));
t15=C_mutate((C_word*)lf[74]+1,*((C_word*)lf[75]+1));
t16=C_mutate((C_word*)lf[76]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_680,a[2]=lf[85],tmp=(C_word)a,a+=3,tmp));
t17=C_mutate((C_word*)lf[86]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_799,a[2]=lf[90],tmp=(C_word)a,a+=3,tmp));
t18=C_mutate((C_word*)lf[91]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_843,a[2]=lf[95],tmp=(C_word)a,a+=3,tmp));
t19=C_mutate((C_word*)lf[96]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_876,a[2]=lf[97],tmp=(C_word)a,a+=3,tmp));
t20=C_mutate((C_word*)lf[98]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_898,a[2]=lf[102],tmp=(C_word)a,a+=3,tmp));
t21=C_mutate((C_word*)lf[103]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_938,a[2]=lf[105],tmp=(C_word)a,a+=3,tmp));
t22=*((C_word*)lf[40]+1);
t23=C_mutate((C_word*)lf[106]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_944,a[2]=t22,a[3]=lf[108],tmp=(C_word)a,a+=4,tmp));
t24=C_mutate((C_word*)lf[109]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_962,a[2]=lf[110],tmp=(C_word)a,a+=3,tmp));
t25=C_mutate((C_word*)lf[111]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_971,a[2]=lf[112],tmp=(C_word)a,a+=3,tmp));
t26=C_mutate((C_word*)lf[113]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_980,a[2]=lf[114],tmp=(C_word)a,a+=3,tmp));
t27=C_mutate((C_word*)lf[115]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_989,a[2]=lf[119],tmp=(C_word)a,a+=3,tmp));
t28=C_mutate((C_word*)lf[120]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1013,a[2]=lf[130],tmp=(C_word)a,a+=3,tmp));
t29=C_mutate((C_word*)lf[131]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1225,a[2]=lf[137],tmp=(C_word)a,a+=3,tmp));
t30=*((C_word*)lf[40]+1);
t31=C_mutate((C_word*)lf[138]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1407,a[2]=t30,a[3]=lf[139],tmp=(C_word)a,a+=4,tmp));
t32=C_mutate((C_word*)lf[140]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1426,a[2]=lf[141],tmp=(C_word)a,a+=3,tmp));
t33=C_mutate((C_word*)lf[142]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1432,a[2]=lf[143],tmp=(C_word)a,a+=3,tmp));
t34=C_mutate((C_word*)lf[144]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1441,a[2]=lf[145],tmp=(C_word)a,a+=3,tmp));
t35=C_mutate((C_word*)lf[146]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1450,a[2]=lf[148],tmp=(C_word)a,a+=3,tmp));
t36=C_mutate((C_word*)lf[149]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1493,a[2]=lf[152],tmp=(C_word)a,a+=3,tmp));
t37=C_mutate((C_word*)lf[153]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1530,a[2]=lf[156],tmp=(C_word)a,a+=3,tmp));
t38=C_mutate((C_word*)lf[157]+1,*((C_word*)lf[153]+1));
t39=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1565,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t40=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1596,a[2]=t39,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 487  build-platform */
t41=*((C_word*)lf[164]+1);
((C_proc2)C_retrieve_proc(t41))(2,t41,t40);}

/* k1594 in k526 in k260 in k257 */
static void C_ccall f_1596(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1596,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[158]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_1565(t3,C_SCHEME_UNDEFINED);}
else{
t3=*((C_word*)lf[159]+1);
t4=*((C_word*)lf[74]+1);
t5=C_mutate((C_word*)lf[159]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1570,a[2]=t3,a[3]=t4,a[4]=lf[163],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t0)[2];
f_1565(t6,t5);}}

/* ##sys#read-prompt-hook in k1594 in k526 in k260 in k257 */
static void C_ccall f_1570(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1570,2,t0,t1);}
t2=(C_word)C_fudge(C_fix(12));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1580,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_1580(2,t4,t2);}
else{
/* srfi-18.scm: 492  ##sys#tty-port? */
t4=*((C_word*)lf[161]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[162]+1));}}

/* k1578 in ##sys#read-prompt-hook in k1594 in k526 in k260 in k257 */
static void C_ccall f_1580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1580,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1583,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 493  old */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1581 in k1578 in ##sys#read-prompt-hook in k1594 in k526 in k260 in k257 */
static void C_ccall f_1583(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1583,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1586,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 494  ##sys#thread-block-for-i/o! */
t3=*((C_word*)lf[160]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,*((C_word*)lf[47]+1),C_fix(0),C_SCHEME_TRUE);}

/* k1584 in k1581 in k1578 in ##sys#read-prompt-hook in k1594 in k526 in k260 in k257 */
static void C_ccall f_1586(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 495  thread-yield! */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1563 in k526 in k260 in k257 */
static void C_fcall f_1565(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* thread-signal! in k526 in k260 in k257 */
static void C_ccall f_1530(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1530,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[50],lf[153]);
t5=(C_word)C_eqp(t2,*((C_word*)lf[47]+1));
if(C_truep(t5)){
/* srfi-18.scm: 473  ##sys#signal */
t6=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t3);}
else{
t6=(C_word)C_slot(t2,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1554,a[2]=t3,a[3]=t6,a[4]=lf[154],tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_i_setslot(t2,C_fix(1),t7);
/* srfi-18.scm: 480  ##sys#thread-unblock! */
t9=*((C_word*)lf[155]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t1,t2);}}

/* a1553 in thread-signal! in k526 in k260 in k257 */
static void C_ccall f_1554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1554,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1558,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 478  ##sys#signal */
t3=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1556 in a1553 in thread-signal! in k526 in k260 in k257 */
static void C_ccall f_1558(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 479  old */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* condition-variable-broadcast! in k526 in k260 in k257 */
static void C_ccall f_1493(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1493,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[132],lf[149]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1500,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1505,a[2]=lf[150],tmp=(C_word)a,a+=3,tmp);
t6=(C_word)C_slot(t2,C_fix(2));
/* srfi-18.scm: 459  ##sys#for-each */
t7=*((C_word*)lf[151]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t4,t5,t6);}

/* a1504 in condition-variable-broadcast! in k526 in k260 in k257 */
static void C_ccall f_1505(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1505,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(3));
t4=(C_word)C_eqp(t3,lf[134]);
t5=(C_truep(t4)?t4:(C_word)C_eqp(t3,lf[127]));
if(C_truep(t5)){
/* srfi-18.scm: 463  ##sys#thread-basic-unblock! */
t6=*((C_word*)lf[147]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t2);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}

/* k1498 in condition-variable-broadcast! in k526 in k260 in k257 */
static void C_ccall f_1500(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(2),C_SCHEME_END_OF_LIST));}

/* condition-variable-signal! in k526 in k260 in k257 */
static void C_ccall f_1450(C_word c,C_word t0,C_word t1,C_word t2){
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
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1450,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[132],lf[146]);
t4=(C_word)C_slot(t2,C_fix(2));
if(C_truep((C_word)C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}
else{
t5=(C_word)C_slot(t4,C_fix(0));
t6=(C_word)C_slot(t5,C_fix(3));
t7=(C_word)C_slot(t4,C_fix(1));
t8=(C_word)C_i_setslot(t2,C_fix(2),t7);
t9=(C_word)C_eqp(t6,lf[134]);
t10=(C_truep(t9)?t9:(C_word)C_eqp(t6,lf[127]));
if(C_truep(t10)){
/* srfi-18.scm: 454  ##sys#thread-basic-unblock! */
t11=*((C_word*)lf[147]+1);
((C_proc3)(void*)(*((C_word*)t11+1)))(3,t11,t1,t5);}
else{
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,C_SCHEME_UNDEFINED);}}}

/* condition-variable-specific-set! in k526 in k260 in k257 */
static void C_ccall f_1441(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1441,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[132],lf[144]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_setslot(t2,C_fix(3),t3));}

/* condition-variable-specific in k526 in k260 in k257 */
static void C_ccall f_1432(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1432,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[132],lf[142]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(3)));}

/* condition-variable? in k526 in k260 in k257 */
static void C_ccall f_1426(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1426,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[132]));}

/* make-condition-variable in k526 in k260 in k257 */
static void C_ccall f_1407(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2rv,(void*)f_1407r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_1407r(t0,t1,t2);}}

static void C_ccall f_1407r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1415,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_notvemptyp(t2))){
t4=t3;
f_1415(2,t4,(C_word)C_i_vector_ref(t2,C_fix(0)));}
else{
/* srfi-18.scm: 430  gensym */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[132]);}}

/* k1413 in make-condition-variable in k526 in k260 in k257 */
static void C_ccall f_1415(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1415,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[132],t1,C_SCHEME_END_OF_LIST,C_SCHEME_UNDEFINED));}

/* mutex-unlock! in k526 in k260 in k257 */
static void C_ccall f_1225(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1225r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1225r(t0,t1,t2,t3);}}

static void C_ccall f_1225r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(7);
t4=(C_word)C_i_check_structure_2(t2,lf[104],lf[131]);
t5=*((C_word*)lf[47]+1);
t6=(C_word)C_notvemptyp(t3);
t7=(C_truep(t6)?(C_word)C_i_vector_ref(t3,C_fix(0)):C_SCHEME_FALSE);
t8=(C_word)C_block_size(t3);
t9=(C_word)C_fixnum_greaterp(t8,C_fix(1));
t10=(C_truep(t9)?(C_word)C_i_vector_ref(t3,C_fix(1)):C_SCHEME_FALSE);
t11=(C_truep(t7)?(C_word)C_i_check_structure_2(t7,lf[132],lf[131]):C_SCHEME_UNDEFINED);
t12=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1243,a[2]=t10,a[3]=t7,a[4]=t5,a[5]=t2,a[6]=lf[136],tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm: 389  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t12);}

/* a1242 in mutex-unlock! in k526 in k260 in k257 */
static void C_ccall f_1243(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1243,3,t0,t1,t2);}
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(3));
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1250,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
/* srfi-18.scm: 392  ##sys#compute-time-limit */
t5=lf[1];
f_264(t5,t4,((C_word*)t0)[2]);}
else{
t5=t4;
f_1250(2,t5,C_SCHEME_FALSE);}}

/* k1248 in a1242 in mutex-unlock! in k526 in k260 in k257 */
static void C_ccall f_1250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1250,2,t0,t1);}
t2=(C_word)C_i_set_i_slot(((C_word*)t0)[7],C_fix(4),C_SCHEME_FALSE);
t3=(C_word)C_i_set_i_slot(((C_word*)t0)[7],C_fix(5),C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1379,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_slot(((C_word*)t0)[6],C_fix(8));
/* srfi-18.scm: 396  ##sys#delq */
t6=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[7],t5);}

/* k1377 in k1248 in a1242 in mutex-unlock! in k526 in k260 in k257 */
static void C_ccall f_1379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1379,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[8],C_fix(8),t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1371,a[2]=((C_word*)t0)[7],a[3]=lf[133],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_setslot(((C_word*)t0)[8],C_fix(1),t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1265,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1361,a[2]=t5,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t7=(C_word)C_slot(((C_word*)t0)[3],C_fix(2));
t8=(C_word)C_a_i_list(&a,1,((C_word*)t0)[8]);
/* srfi-18.scm: 399  ##sys#append */
t9=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=t5;
f_1265(2,t6,C_SCHEME_UNDEFINED);}}

/* k1359 in k1377 in k1248 in a1242 in mutex-unlock! in k526 in k260 in k257 */
static void C_ccall f_1361(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1361,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[6],C_fix(2),t1);
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1339,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],a[5]=lf[135],tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t3);
/* srfi-18.scm: 406  ##sys#thread-block-for-timeout! */
t5=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
t3=((C_word*)t0)[2];
f_1265(2,t3,(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(3),lf[127]));}}

/* a1338 in k1359 in k1377 in k1248 in a1242 in mutex-unlock! in k526 in k260 in k257 */
static void C_ccall f_1339(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1339,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1350,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(2));
/* srfi-18.scm: 404  ##sys#delq */
t4=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}

/* k1348 in a1338 in k1359 in k1377 in k1248 in a1242 in mutex-unlock! in k526 in k260 in k257 */
static void C_ccall f_1350(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),t1);
/* srfi-18.scm: 405  return */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k1263 in k1377 in k1248 in a1242 in mutex-unlock! in k526 in k260 in k257 */
static void C_ccall f_1265(C_word c,C_word t0,C_word t1){
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
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1265,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1268,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[3]))){
t3=t2;
f_1268(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t6=(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(3),t5);
t7=(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_SCHEME_TRUE);
t8=(C_word)C_eqp(t4,lf[134]);
t9=(C_truep(t8)?t8:(C_word)C_eqp(t4,lf[127]));
if(C_truep(t9)){
t10=(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(2),t3);
t11=(C_word)C_slot(t3,C_fix(8));
t12=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t11);
t13=(C_word)C_i_setslot(t3,C_fix(8),t12);
t14=(C_word)C_eqp(t4,lf[127]);
if(C_truep(t14)){
/* srfi-18.scm: 417  ##sys#add-to-ready-queue */
t15=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t2,t3);}
else{
t15=t2;
f_1268(2,t15,C_SCHEME_UNDEFINED);}}
else{
t10=t2;
f_1268(2,t10,C_SCHEME_UNDEFINED);}}}

/* k1266 in k1263 in k1377 in k1248 in a1242 in mutex-unlock! in k526 in k260 in k257 */
static void C_ccall f_1268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 418  ##sys#schedule */
t2=*((C_word*)lf[42]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a1370 in k1377 in k1248 in a1242 in mutex-unlock! in k526 in k260 in k257 */
static void C_ccall f_1371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1371,2,t0,t1);}
/* srfi-18.scm: 397  return */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_TRUE);}

/* mutex-lock! in k526 in k260 in k257 */
static void C_ccall f_1013(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1013r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1013r(t0,t1,t2,t3);}}

static void C_ccall f_1013r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_structure_2(t2,lf[104],lf[120]);
t5=(C_word)C_notvemptyp(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1023,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t5)){
t7=(C_word)C_i_vector_ref(t3,C_fix(0));
/* srfi-18.scm: 335  ##sys#compute-time-limit */
t8=lf[1];
f_264(t8,t6,t7);}
else{
t7=t6;
f_1023(2,t7,C_SCHEME_FALSE);}}

/* k1021 in mutex-lock! in k526 in k260 in k257 */
static void C_ccall f_1023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1023,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[4]);
t3=(C_word)C_fixnum_greaterp(t2,C_fix(1));
t4=(C_truep(t3)?(C_word)C_i_vector_ref(((C_word*)t0)[4],C_fix(1)):C_SCHEME_FALSE);
t5=(C_word)C_slot(((C_word*)t0)[3],C_fix(4));
t6=(C_truep(t4)?(C_word)C_i_check_structure_2(t4,lf[50],lf[120]):C_SCHEME_UNDEFINED);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1040,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t5,a[6]=((C_word*)t0)[3],a[7]=lf[129],tmp=(C_word)a,a+=8,tmp);
/* srfi-18.scm: 340  ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[2],t7);}

/* a1039 in k1021 in mutex-lock! in k526 in k260 in k257 */
static void C_ccall f_1040(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[30],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1040,3,t0,t1,t2);}
t3=*((C_word*)lf[47]+1);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1043,a[2]=t3,a[3]=((C_word*)t0)[6],a[4]=lf[122],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1064,a[2]=t2,a[3]=((C_word*)t0)[5],a[4]=lf[124],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_slot(((C_word*)t0)[6],C_fix(5)))){
if(C_truep(((C_word*)t0)[4])){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1150,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* srfi-18.scm: 366  check */
t7=t5;
f_1064(t7,t6);}
else{
t6=(C_word)C_i_setslot(t3,C_fix(3),lf[127]);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1198,a[2]=t2,a[3]=lf[128],tmp=(C_word)a,a+=4,tmp);
t8=(C_word)C_i_setslot(t3,C_fix(1),t7);
/* srfi-18.scm: 379  switch */
t9=t4;
f_1043(t9,t1);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1088,a[2]=t5,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=(C_truep(((C_word*)t0)[2])?(C_word)C_i_not(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(C_word)C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),C_SCHEME_FALSE);
t9=t6;
f_1088(t9,(C_word)C_i_set_i_slot(((C_word*)t0)[6],C_fix(5),C_SCHEME_TRUE));}
else{
t8=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:t3);
t9=(C_word)C_slot(t8,C_fix(3));
t10=(C_word)C_eqp(lf[77],t9);
t11=(C_truep(t10)?t10:(C_word)C_eqp(lf[44],t9));
if(C_truep(t11)){
t12=t6;
f_1088(t12,(C_word)C_i_set_i_slot(((C_word*)t0)[6],C_fix(4),C_SCHEME_TRUE));}
else{
t12=(C_word)C_i_set_i_slot(((C_word*)t0)[6],C_fix(5),C_SCHEME_TRUE);
t13=(C_word)C_slot(t8,C_fix(8));
t14=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t13);
t15=(C_word)C_i_setslot(t8,C_fix(8),t14);
t16=t6;
f_1088(t16,(C_word)C_i_setslot(((C_word*)t0)[6],C_fix(2),t8));}}}}

/* k1086 in a1039 in k1021 in mutex-lock! in k526 in k260 in k257 */
static void C_fcall f_1088(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1088,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1091,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 363  check */
t3=((C_word*)t0)[2];
f_1064(t3,t2);}

/* k1089 in k1086 in a1039 in k1021 in mutex-lock! in k526 in k260 in k257 */
static void C_ccall f_1091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 364  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* a1197 in a1039 in k1021 in mutex-lock! in k526 in k260 in k257 */
static void C_ccall f_1198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1198,2,t0,t1);}
/* srfi-18.scm: 378  return */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_TRUE);}

/* k1148 in a1039 in k1021 in mutex-lock! in k526 in k260 in k257 */
static void C_ccall f_1150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1150,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1161,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=lf[126],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1156,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 374  ##sys#thread-block-for-timeout! */
t5=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* k1154 in k1148 in a1039 in k1021 in mutex-lock! in k526 in k260 in k257 */
static void C_ccall f_1156(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 375  switch */
t2=((C_word*)t0)[3];
f_1043(t2,((C_word*)t0)[2]);}

/* a1160 in k1148 in a1039 in k1021 in mutex-lock! in k526 in k260 in k257 */
static void C_ccall f_1161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1161,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1183,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(3));
/* srfi-18.scm: 370  ##sys#delq */
t4=*((C_word*)lf[125]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}

/* k1181 in a1160 in k1148 in a1039 in k1021 in mutex-lock! in k526 in k260 in k257 */
static void C_ccall f_1183(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1183,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(3),t1);
t3=(C_word)C_slot(*((C_word*)lf[47]+1),C_fix(8));
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=(C_word)C_i_setslot(*((C_word*)lf[47]+1),C_fix(8),t4);
t6=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}

/* check in a1039 in k1021 in mutex-lock! in k526 in k260 in k257 */
static void C_fcall f_1064(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1064,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[3])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1075,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_a_i_record(&a,3,lf[27],lf[123],C_SCHEME_END_OF_LIST);
/* srfi-18.scm: 348  ##sys#signal */
t4=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1073 in check in a1039 in k1021 in mutex-lock! in k526 in k260 in k257 */
static void C_ccall f_1075(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 348  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* switch in a1039 in k1021 in mutex-lock! in k526 in k260 in k257 */
static void C_fcall f_1043(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1043,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1054,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(3));
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
/* srfi-18.scm: 344  ##sys#append */
t5=*((C_word*)lf[121]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}

/* k1052 in switch in a1039 in k1021 in mutex-lock! in k526 in k260 in k257 */
static void C_ccall f_1054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(3),t1);
/* srfi-18.scm: 345  ##sys#schedule */
t3=*((C_word*)lf[42]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* mutex-state in k526 in k260 in k257 */
static void C_ccall f_989(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_989,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[104],lf[115]);
if(C_truep((C_word)C_slot(t2,C_fix(5)))){
t4=(C_word)C_slot(t2,C_fix(2));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?t4:lf[116]));}
else{
t4=(C_word)C_slot(t2,C_fix(4));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_truep(t4)?lf[117]:lf[118]));}}

/* mutex-specific-set! in k526 in k260 in k257 */
static void C_ccall f_980(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_980,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[104],lf[113]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_setslot(t2,C_fix(6),t3));}

/* mutex-specific in k526 in k260 in k257 */
static void C_ccall f_971(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_971,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[104],lf[111]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(6)));}

/* mutex-name in k526 in k260 in k257 */
static void C_ccall f_962(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_962,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[104],lf[109]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(1)));}

/* make-mutex in k526 in k260 in k257 */
static void C_ccall f_944(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2rv,(void*)f_944r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_944r(t0,t1,t2);}}

static void C_ccall f_944r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_948,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_notvemptyp(t2))){
t4=t3;
f_948(2,t4,(C_word)C_i_vector_ref(t2,C_fix(0)));}
else{
/* srfi-18.scm: 309  gensym */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[104]);}}

/* k946 in make-mutex in k526 in k260 in k257 */
static void C_ccall f_948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 310  ##sys#make-mutex */
t2=*((C_word*)lf[107]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[47]+1));}

/* mutex? in k526 in k260 in k257 */
static void C_ccall f_938(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_938,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[104]));}

/* thread-sleep! in k526 in k260 in k257 */
static void C_ccall f_898(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_898,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_926,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_926(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm: 298  ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[4],lf[98],lf[101],t2);}}

/* k924 in thread-sleep! in k526 in k260 in k257 */
static void C_ccall f_926(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_926,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_933,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 299  ##sys#compute-time-limit */
t3=lf[1];
f_264(t3,t2,((C_word*)t0)[2]);}

/* k931 in k924 in thread-sleep! in k526 in k260 in k257 */
static void C_ccall f_933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_933,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_907,a[2]=t1,a[3]=lf[100],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 292  ##sys#call-with-current-continuation */
C_call_cc(3,0,t2,t3);}

/* a906 in k931 in k924 in thread-sleep! in k526 in k260 in k257 */
static void C_ccall f_907(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_907,3,t0,t1,t2);}
t3=*((C_word*)lf[47]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_919,a[2]=t2,a[3]=lf[99],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_setslot(t3,C_fix(1),t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_914,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 296  ##sys#thread-block-for-timeout! */
t7=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t3,((C_word*)t0)[2]);}

/* k912 in a906 in k931 in k924 in thread-sleep! in k526 in k260 in k257 */
static void C_ccall f_914(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 297  ##sys#schedule */
t2=*((C_word*)lf[42]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a918 in a906 in k931 in k924 in thread-sleep! in k526 in k260 in k257 */
static void C_ccall f_919(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_919,2,t0,t1);}
/* srfi-18.scm: 295  return */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* thread-resume! in k526 in k260 in k257 */
static void C_ccall f_876(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_876,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[50],lf[96]);
t4=(C_word)C_slot(t2,C_fix(3));
t5=(C_word)C_eqp(t4,lf[92]);
if(C_truep(t5)){
t6=(C_word)C_i_setslot(t2,C_fix(3),lf[69]);
/* srfi-18.scm: 288  ##sys#add-to-ready-queue */
t7=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t1,t2);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}

/* thread-suspend! in k526 in k260 in k257 */
static void C_ccall f_843(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_843,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[50],lf[91]);
t4=(C_word)C_i_setslot(t2,C_fix(3),lf[92]);
t5=(C_word)C_eqp(t2,*((C_word*)lf[47]+1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_861,a[2]=t2,a[3]=lf[94],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 279  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t6);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}

/* a860 in thread-suspend! in k526 in k260 in k257 */
static void C_ccall f_861(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_861,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_870,a[2]=t2,a[3]=lf[93],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t3);
/* srfi-18.scm: 282  ##sys#schedule */
t5=*((C_word*)lf[42]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}

/* a869 in a860 in thread-suspend! in k526 in k260 in k257 */
static void C_ccall f_870(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_870,2,t0,t1);}
/* srfi-18.scm: 281  return */
t2=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* thread-terminate! in k526 in k260 in k257 */
static void C_ccall f_799(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_799,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[50],lf[86]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_806,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_eqp(t2,*((C_word*)lf[88]+1));
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_841,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 269  ##sys#exit-handler */
t7=*((C_word*)lf[89]+1);
((C_proc2)C_retrieve_proc(t7))(2,t7,t6);}
else{
t6=t4;
f_806(2,t6,C_SCHEME_UNDEFINED);}}

/* k839 in thread-terminate! in k526 in k260 in k257 */
static void C_ccall f_841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k804 in thread-terminate! in k526 in k260 in k257 */
static void C_ccall f_806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_806,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,C_SCHEME_UNDEFINED);
t3=(C_word)C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),t2);
t4=(C_word)C_a_i_record(&a,3,lf[27],lf[87],C_SCHEME_END_OF_LIST);
t5=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(7),t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_815,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 272  ##sys#thread-kill! */
t7=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[3],lf[77]);}

/* k813 in k804 in thread-terminate! in k526 in k260 in k257 */
static void C_ccall f_815(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[3],*((C_word*)lf[47]+1));
if(C_truep(t2)){
/* srfi-18.scm: 273  ##sys#schedule */
t3=*((C_word*)lf[42]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* thread-join! in k526 in k260 in k257 */
static void C_ccall f_680(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_680r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_680r(t0,t1,t2,t3);}}

static void C_ccall f_680r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=(C_word)C_i_check_structure_2(t2,lf[50],lf[76]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_687,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t6=(C_word)C_slot(t3,C_fix(0));
/* srfi-18.scm: 238  ##sys#compute-time-limit */
t7=lf[1];
f_264(t7,t5,t6);}
else{
t6=t5;
f_687(2,t6,C_SCHEME_FALSE);}}

/* k685 in thread-join! in k526 in k260 in k257 */
static void C_ccall f_687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_687,2,t0,t1);}
t2=(C_word)C_i_pairp(((C_word*)t0)[4]);
t3=(C_truep(t2)?(C_word)C_slot(((C_word*)t0)[4],C_fix(1)):C_SCHEME_FALSE);
t4=(C_truep(t3)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
t5=(C_truep(t4)?(C_word)C_slot(t3,C_fix(0)):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_701,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[3],a[6]=lf[84],tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm: 242  ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[2],t6);}

/* a700 in k685 in thread-join! in k526 in k260 in k257 */
static void C_ccall f_701(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_701,3,t0,t1,t2);}
t3=*((C_word*)lf[47]+1);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_705,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
/* srfi-18.scm: 245  ##sys#thread-block-for-timeout! */
t5=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,((C_word*)t0)[2]);}
else{
t5=t4;
f_705(2,t5,C_SCHEME_UNDEFINED);}}

/* k703 in a700 in k685 in thread-join! in k526 in k260 in k257 */
static void C_ccall f_705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_716,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=lf[81],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_711,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 263  ##sys#thread-block-for-termination! */
t5=*((C_word*)lf[82]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[3],((C_word*)t0)[7]);}

/* k709 in k703 in a700 in k685 in thread-join! in k526 in k260 in k257 */
static void C_ccall f_711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 264  ##sys#schedule */
t2=*((C_word*)lf[42]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a715 in k703 in a700 in k685 in thread-join! in k526 in k260 in k257 */
static void C_ccall f_716(C_word c,C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_716,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(3));
t3=(C_word)C_eqp(t2,lf[44]);
if(C_truep(t3)){
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(2));
C_apply(4,0,t1,((C_word*)t0)[4],t4);}
else{
t4=(C_word)C_eqp(t2,lf[77]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_746,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_slot(((C_word*)t0)[5],C_fix(7));
t7=(C_word)C_a_i_list(&a,2,lf[78],t6);
t8=(C_word)C_a_i_record(&a,3,lf[27],lf[79],t7);
/* srfi-18.scm: 253  ##sys#signal */
t9=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t5,t8);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_765,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t6=t5;
f_765(2,t6,((C_word*)t0)[2]);}
else{
t6=(C_word)C_a_i_record(&a,3,lf[27],lf[80],C_SCHEME_END_OF_LIST);
/* srfi-18.scm: 261  ##sys#signal */
t7=*((C_word*)lf[25]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}}}}

/* k763 in a715 in k703 in a700 in k685 in thread-join! in k526 in k260 in k257 */
static void C_ccall f_765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 258  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k744 in a715 in k703 in a700 in k685 in thread-join! in k526 in k260 in k257 */
static void C_ccall f_746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 252  return */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* thread-start! in k526 in k260 in k257 */
static void C_ccall f_644(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_644,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_648,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_closurep(((C_word*)t3)[1]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_674,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 225  make-thread */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t3)[1]);}
else{
t5=t4;
f_648(t5,(C_word)C_i_check_structure_2(((C_word*)t3)[1],lf[50],lf[68]));}}

/* k672 in thread-start! in k526 in k260 in k257 */
static void C_ccall f_674(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_648(t3,t2);}

/* k646 in thread-start! in k526 in k260 in k257 */
static void C_fcall f_648(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_648,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_651,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)((C_word*)t0)[3])[1],C_fix(3));
t4=(C_word)C_eqp(lf[49],t3);
if(C_truep(t4)){
t5=t2;
f_651(2,t5,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm: 228  ##sys#error */
t5=*((C_word*)lf[71]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[68],lf[72],((C_word*)((C_word*)t0)[3])[1]);}}

/* k649 in k646 in thread-start! in k526 in k260 in k257 */
static void C_ccall f_651(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_651,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(3),lf[69]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_657,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 230  ##sys#add-to-ready-queue */
t4=*((C_word*)lf[70]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[3])[1]);}

/* k655 in k649 in k646 in thread-start! in k526 in k260 in k257 */
static void C_ccall f_657(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* thread-name in k526 in k260 in k257 */
static void C_ccall f_635(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_635,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[50],lf[66]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(6)));}

/* thread-quantum-set! in k526 in k260 in k257 */
static void C_ccall f_619(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_619,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[50],lf[64]);
t5=(C_word)C_i_check_exact_2(t3,lf[64]);
t6=(C_word)C_i_fixnum_max(t3,C_fix(10));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_i_set_i_slot(t2,C_fix(9),t6));}

/* thread-quantum in k526 in k260 in k257 */
static void C_ccall f_610(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_610,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[50],lf[62]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(9)));}

/* thread-specific-set! in k526 in k260 in k257 */
static void C_ccall f_601(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_601,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_structure_2(t2,lf[50],lf[60]);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_setslot(t2,C_fix(10),t3));}

/* thread-specific in k526 in k260 in k257 */
static void C_ccall f_592(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_592,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[50],lf[58]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(10)));}

/* thread-state in k526 in k260 in k257 */
static void C_ccall f_583(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_583,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[50],lf[56]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_slot(t2,C_fix(3)));}

/* current-thread in k526 in k260 in k257 */
static void C_ccall f_580(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_580,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[47]+1));}

/* thread? in k526 in k260 in k257 */
static void C_ccall f_574(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_574,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[50]));}

/* make-thread in k526 in k260 in k257 */
static void C_ccall f_530(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_530r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_530r(t0,t1,t2,t3);}}

static void C_ccall f_530r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_534,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_559,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t6=t5;
f_559(2,t6,(C_word)C_slot(t3,C_fix(0)));}
else{
/* srfi-18.scm: 180  gensym */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,lf[50]);}}

/* k557 in make-thread in k526 in k260 in k257 */
static void C_ccall f_559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(*((C_word*)lf[47]+1),C_fix(9));
/* srfi-18.scm: 177  ##sys#make-thread */
t3=*((C_word*)lf[48]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[2],C_SCHEME_FALSE,lf[49],t1,t2);}

/* k532 in make-thread in k526 in k260 in k257 */
static void C_ccall f_534(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_534,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_539,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=lf[46],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_setslot(t1,C_fix(1),t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}

/* a538 in k532 in make-thread in k526 in k260 in k257 */
static void C_ccall f_539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_539,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_545,a[2]=((C_word*)t0)[3],a[3]=lf[45],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 185  ##sys#call-with-values */
C_call_with_values(4,0,t1,((C_word*)t0)[2],t2);}

/* a544 in a538 in k532 in make-thread in k526 in k260 in k257 */
static void C_ccall f_545(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_545r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_545r(t0,t1,t2);}}

static void C_ccall f_545r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(2),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_552,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 189  ##sys#thread-kill! */
t5=*((C_word*)lf[43]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],lf[44]);}

/* k550 in a544 in a538 in k532 in make-thread in k526 in k260 in k257 */
static void C_ccall f_552(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 190  ##sys#schedule */
t2=*((C_word*)lf[42]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* uncaught-exception? in k260 in k257 */
static void C_ccall f_510(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_510,3,t0,t1,t2);}
if(C_truep((C_word)C_i_structurep(t2,lf[27]))){
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_memq(lf[37],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* terminated-thread-exception? in k260 in k257 */
static void C_ccall f_494(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_494,3,t0,t1,t2);}
if(C_truep((C_word)C_i_structurep(t2,lf[27]))){
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_memq(lf[34],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* abandoned-mutex-exception? in k260 in k257 */
static void C_ccall f_478(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_478,3,t0,t1,t2);}
if(C_truep((C_word)C_i_structurep(t2,lf[27]))){
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_memq(lf[31],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* join-timeout-exception? in k260 in k257 */
static void C_ccall f_462(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_462,3,t0,t1,t2);}
if(C_truep((C_word)C_i_structurep(t2,lf[27]))){
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_memq(lf[28],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* time? in k260 in k257 */
static void C_ccall f_454(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_454,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[2]));}

/* milliseconds->time in k260 in k257 */
static void C_ccall f_438(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_438,3,t0,t1,t2);}
t3=(C_word)C_i_check_exact_2(t2,lf[19]);
t4=(C_word)C_a_i_divide(&a,2,t2,C_fix(1000));
t5=(C_word)C_a_i_plus(&a,2,C_flonum(&a,C_startup_time_seconds),t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_record(&a,4,lf[2],t2,t5,C_fix(0)));}

/* seconds->time in k260 in k257 */
static void C_ccall f_384(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_384,3,t0,t1,t2);}
t3=(C_word)C_i_check_number_2(t2,lf[14]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_391,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_a_i_minus(&a,2,t2,C_flonum(&a,C_startup_time_seconds));
/* srfi-18.scm: 132  max */
t6=*((C_word*)lf[17]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,C_fix(0),t5);}

/* k389 in seconds->time in k260 in k257 */
static void C_ccall f_391(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_391,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_394,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_428,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_432,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 133  ##sys#exact->inexact */
t5=*((C_word*)lf[16]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k430 in k389 in seconds->time in k260 in k257 */
static void C_ccall f_432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 133  ##sys#flonum-fraction */
t2=*((C_word*)lf[15]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k426 in k389 in seconds->time in k260 in k257 */
static void C_ccall f_428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_428,2,t0,t1);}
t2=(C_word)C_a_i_times(&a,2,C_fix(1000),t1);
/* srfi-18.scm: 133  truncate */
t3=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k392 in k389 in seconds->time in k260 in k257 */
static void C_ccall f_394(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_394,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_412,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_a_i_times(&a,2,((C_word*)t0)[2],C_fix(1000));
t4=(C_word)C_a_i_plus(&a,2,t3,t1);
/* srfi-18.scm: 134  truncate */
t5=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}

/* k410 in k392 in k389 in seconds->time in k260 in k257 */
static void C_ccall f_412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_412,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_404,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-18.scm: 135  truncate */
t4=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k402 in k410 in k392 in k389 in seconds->time in k260 in k257 */
static void C_ccall f_404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_404,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[2],((C_word*)t0)[2],t1,t2));}

/* time->milliseconds in k260 in k257 */
static void C_ccall f_355(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_355,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[2],lf[12]);
t4=(C_word)C_slot(t2,C_fix(2));
t5=(C_word)C_a_i_minus(&a,2,t4,C_flonum(&a,C_startup_time_seconds));
t6=(C_word)C_a_i_times(&a,2,t5,C_fix(1000));
t7=(C_word)C_i_inexact_to_exact(t6);
t8=(C_word)C_slot(t2,C_fix(3));
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_plus(&a,2,t7,t8));}

/* time->seconds in k260 in k257 */
static void C_ccall f_334(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_334,3,t0,t1,t2);}
t3=(C_word)C_i_check_structure_2(t2,lf[2],lf[10]);
t4=(C_word)C_slot(t2,C_fix(2));
t5=(C_word)C_slot(t2,C_fix(3));
t6=(C_word)C_a_i_divide(&a,2,t5,C_fix(1000));
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_plus(&a,2,t4,t6));}

/* current-time in k260 in k257 */
static void C_ccall f_307(C_word c,C_word t0,C_word t1){
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
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_307,2,t0,t1);}
t2=C_flonum(&a,C_get_seconds);
t3=C_flonum(&a,C_startup_time_seconds);
t4=C_long_to_num(&a,C_ms);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_319,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_a_i_minus(&a,2,t2,t3);
t7=(C_word)C_a_i_times(&a,2,t6,C_fix(1000));
t8=(C_word)C_a_i_plus(&a,2,t7,C_long_to_num(&a,C_ms));
/* srfi-18.scm: 115  truncate */
t9=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t5,t8);}

/* k317 in current-time in k260 in k257 */
static void C_ccall f_319(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_319,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[2],t2,((C_word*)t0)[2],C_long_to_num(&a,C_ms)));}

/* ##sys#compute-time-limit in k260 in k257 */
static void C_fcall f_264(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_264,NULL,3,t0,t1,t2);}
if(C_truep(t2)){
if(C_truep((C_word)C_i_structurep(t2,lf[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(1)));}
else{
if(C_truep((C_word)C_i_numberp(t2))){
t3=(C_word)C_fudge(C_fix(16));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_298,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_a_i_times(&a,2,t2,C_fix(1000));
/* srfi-18.scm: 92   truncate */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
/* srfi-18.scm: 93   ##sys#signal-hook */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[4],lf[5],t2);}}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k296 in ##sys#compute-time-limit in k260 in k257 */
static void C_ccall f_298(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_fixnum_plus(((C_word*)t0)[2],t2));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[114] = {
{"toplevelsrfi-18.scm",(void*)C_srfi_18_toplevel},
{"f_259srfi-18.scm",(void*)f_259},
{"f_262srfi-18.scm",(void*)f_262},
{"f_528srfi-18.scm",(void*)f_528},
{"f_1596srfi-18.scm",(void*)f_1596},
{"f_1570srfi-18.scm",(void*)f_1570},
{"f_1580srfi-18.scm",(void*)f_1580},
{"f_1583srfi-18.scm",(void*)f_1583},
{"f_1586srfi-18.scm",(void*)f_1586},
{"f_1565srfi-18.scm",(void*)f_1565},
{"f_1530srfi-18.scm",(void*)f_1530},
{"f_1554srfi-18.scm",(void*)f_1554},
{"f_1558srfi-18.scm",(void*)f_1558},
{"f_1493srfi-18.scm",(void*)f_1493},
{"f_1505srfi-18.scm",(void*)f_1505},
{"f_1500srfi-18.scm",(void*)f_1500},
{"f_1450srfi-18.scm",(void*)f_1450},
{"f_1441srfi-18.scm",(void*)f_1441},
{"f_1432srfi-18.scm",(void*)f_1432},
{"f_1426srfi-18.scm",(void*)f_1426},
{"f_1407srfi-18.scm",(void*)f_1407},
{"f_1415srfi-18.scm",(void*)f_1415},
{"f_1225srfi-18.scm",(void*)f_1225},
{"f_1243srfi-18.scm",(void*)f_1243},
{"f_1250srfi-18.scm",(void*)f_1250},
{"f_1379srfi-18.scm",(void*)f_1379},
{"f_1361srfi-18.scm",(void*)f_1361},
{"f_1339srfi-18.scm",(void*)f_1339},
{"f_1350srfi-18.scm",(void*)f_1350},
{"f_1265srfi-18.scm",(void*)f_1265},
{"f_1268srfi-18.scm",(void*)f_1268},
{"f_1371srfi-18.scm",(void*)f_1371},
{"f_1013srfi-18.scm",(void*)f_1013},
{"f_1023srfi-18.scm",(void*)f_1023},
{"f_1040srfi-18.scm",(void*)f_1040},
{"f_1088srfi-18.scm",(void*)f_1088},
{"f_1091srfi-18.scm",(void*)f_1091},
{"f_1198srfi-18.scm",(void*)f_1198},
{"f_1150srfi-18.scm",(void*)f_1150},
{"f_1156srfi-18.scm",(void*)f_1156},
{"f_1161srfi-18.scm",(void*)f_1161},
{"f_1183srfi-18.scm",(void*)f_1183},
{"f_1064srfi-18.scm",(void*)f_1064},
{"f_1075srfi-18.scm",(void*)f_1075},
{"f_1043srfi-18.scm",(void*)f_1043},
{"f_1054srfi-18.scm",(void*)f_1054},
{"f_989srfi-18.scm",(void*)f_989},
{"f_980srfi-18.scm",(void*)f_980},
{"f_971srfi-18.scm",(void*)f_971},
{"f_962srfi-18.scm",(void*)f_962},
{"f_944srfi-18.scm",(void*)f_944},
{"f_948srfi-18.scm",(void*)f_948},
{"f_938srfi-18.scm",(void*)f_938},
{"f_898srfi-18.scm",(void*)f_898},
{"f_926srfi-18.scm",(void*)f_926},
{"f_933srfi-18.scm",(void*)f_933},
{"f_907srfi-18.scm",(void*)f_907},
{"f_914srfi-18.scm",(void*)f_914},
{"f_919srfi-18.scm",(void*)f_919},
{"f_876srfi-18.scm",(void*)f_876},
{"f_843srfi-18.scm",(void*)f_843},
{"f_861srfi-18.scm",(void*)f_861},
{"f_870srfi-18.scm",(void*)f_870},
{"f_799srfi-18.scm",(void*)f_799},
{"f_841srfi-18.scm",(void*)f_841},
{"f_806srfi-18.scm",(void*)f_806},
{"f_815srfi-18.scm",(void*)f_815},
{"f_680srfi-18.scm",(void*)f_680},
{"f_687srfi-18.scm",(void*)f_687},
{"f_701srfi-18.scm",(void*)f_701},
{"f_705srfi-18.scm",(void*)f_705},
{"f_711srfi-18.scm",(void*)f_711},
{"f_716srfi-18.scm",(void*)f_716},
{"f_765srfi-18.scm",(void*)f_765},
{"f_746srfi-18.scm",(void*)f_746},
{"f_644srfi-18.scm",(void*)f_644},
{"f_674srfi-18.scm",(void*)f_674},
{"f_648srfi-18.scm",(void*)f_648},
{"f_651srfi-18.scm",(void*)f_651},
{"f_657srfi-18.scm",(void*)f_657},
{"f_635srfi-18.scm",(void*)f_635},
{"f_619srfi-18.scm",(void*)f_619},
{"f_610srfi-18.scm",(void*)f_610},
{"f_601srfi-18.scm",(void*)f_601},
{"f_592srfi-18.scm",(void*)f_592},
{"f_583srfi-18.scm",(void*)f_583},
{"f_580srfi-18.scm",(void*)f_580},
{"f_574srfi-18.scm",(void*)f_574},
{"f_530srfi-18.scm",(void*)f_530},
{"f_559srfi-18.scm",(void*)f_559},
{"f_534srfi-18.scm",(void*)f_534},
{"f_539srfi-18.scm",(void*)f_539},
{"f_545srfi-18.scm",(void*)f_545},
{"f_552srfi-18.scm",(void*)f_552},
{"f_510srfi-18.scm",(void*)f_510},
{"f_494srfi-18.scm",(void*)f_494},
{"f_478srfi-18.scm",(void*)f_478},
{"f_462srfi-18.scm",(void*)f_462},
{"f_454srfi-18.scm",(void*)f_454},
{"f_438srfi-18.scm",(void*)f_438},
{"f_384srfi-18.scm",(void*)f_384},
{"f_391srfi-18.scm",(void*)f_391},
{"f_432srfi-18.scm",(void*)f_432},
{"f_428srfi-18.scm",(void*)f_428},
{"f_394srfi-18.scm",(void*)f_394},
{"f_412srfi-18.scm",(void*)f_412},
{"f_404srfi-18.scm",(void*)f_404},
{"f_355srfi-18.scm",(void*)f_355},
{"f_334srfi-18.scm",(void*)f_334},
{"f_307srfi-18.scm",(void*)f_307},
{"f_319srfi-18.scm",(void*)f_319},
{"f_264srfi-18.scm",(void*)f_264},
{"f_298srfi-18.scm",(void*)f_298},
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
