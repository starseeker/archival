/* Generated from srfi-18.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:14
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: srfi-18.scm -output-file usrfi-18.c -quiet -no-trace -optimize-level 2 -include-path . -no-lambda-info -unsafe -feature unsafe -explicit-use
   unit: srfi_18
*/

#include "chicken.h"

static C_TLS long C_ms;
#define C_get_seconds   C_seconds(&C_ms)

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_scheduler_toplevel)
C_externimport void C_ccall C_scheduler_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[109];


C_noret_decl(C_srfi_18_toplevel)
C_externexport void C_ccall C_srfi_18_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_233)
static void C_ccall f_233(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_236)
static void C_ccall f_236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_490)
static void C_ccall f_490(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1483)
static void C_ccall f_1483(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1457)
static void C_ccall f_1457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1470)
static void C_ccall f_1470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1473)
static void C_ccall f_1473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1452)
static void C_fcall f_1452(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1420)
static void C_ccall f_1420(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1441)
static void C_ccall f_1441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1445)
static void C_ccall f_1445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1386)
static void C_ccall f_1386(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1395)
static void C_ccall f_1395(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1390)
static void C_ccall f_1390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1346)
static void C_ccall f_1346(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1340)
static void C_ccall f_1340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1334)
static void C_ccall f_1334(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1328)
static void C_ccall f_1328(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1309)
static void C_ccall f_1309(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_1309)
static void C_ccall f_1309r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_1317)
static void C_ccall f_1317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1133)
static void C_ccall f_1133(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1133)
static void C_ccall f_1133r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1148)
static void C_ccall f_1148(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1155)
static void C_ccall f_1155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1284)
static void C_ccall f_1284(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1244)
static void C_ccall f_1244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1255)
static void C_ccall f_1255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1170)
static void C_ccall f_1170(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1173)
static void C_ccall f_1173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1276)
static void C_ccall f_1276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_927)
static void C_ccall f_927(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_927)
static void C_ccall f_927r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_934)
static void C_ccall f_934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_999)
static void C_fcall f_999(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1002)
static void C_ccall f_1002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1109)
static void C_ccall f_1109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1061)
static void C_ccall f_1061(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1067)
static void C_ccall f_1067(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1072)
static void C_ccall f_1072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1094)
static void C_ccall f_1094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_975)
static void C_fcall f_975(C_word t0,C_word t1) C_noret;
C_noret_decl(f_986)
static void C_ccall f_986(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_954)
static void C_fcall f_954(C_word t0,C_word t1) C_noret;
C_noret_decl(f_965)
static void C_ccall f_965(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_906)
static void C_ccall f_906(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_900)
static void C_ccall f_900(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_894)
static void C_ccall f_894(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_888)
static void C_ccall f_888(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_870)
static void C_ccall f_870(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_870)
static void C_ccall f_870r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_874)
static void C_ccall f_874(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_864)
static void C_ccall f_864(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_824)
static void C_ccall f_824(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_859)
static void C_ccall f_859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_833)
static void C_ccall f_833(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_840)
static void C_ccall f_840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_845)
static void C_ccall f_845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_805)
static void C_ccall f_805(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_775)
static void C_ccall f_775(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_790)
static void C_ccall f_790(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_799)
static void C_ccall f_799(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_734)
static void C_ccall f_734(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_773)
static void C_ccall f_773(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_738)
static void C_ccall f_738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_747)
static void C_ccall f_747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_618)
static void C_ccall f_618(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_618)
static void C_ccall f_618r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_622)
static void C_ccall f_622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_636)
static void C_ccall f_636(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_640)
static void C_ccall f_640(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_646)
static void C_ccall f_646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_651)
static void C_ccall f_651(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_700)
static void C_ccall f_700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_681)
static void C_ccall f_681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_585)
static void C_ccall f_585(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_615)
static void C_ccall f_615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_589)
static void C_fcall f_589(C_word t0,C_word t1) C_noret;
C_noret_decl(f_592)
static void C_ccall f_592(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_598)
static void C_ccall f_598(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_579)
static void C_ccall f_579(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_569)
static void C_ccall f_569(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_563)
static void C_ccall f_563(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_557)
static void C_ccall f_557(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_551)
static void C_ccall f_551(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_545)
static void C_ccall f_545(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_542)
static void C_ccall f_542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_536)
static void C_ccall f_536(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_492)
static void C_ccall f_492(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_492)
static void C_ccall f_492r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_521)
static void C_ccall f_521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_496)
static void C_ccall f_496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_501)
static void C_ccall f_501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_507)
static void C_ccall f_507(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_507)
static void C_ccall f_507r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_514)
static void C_ccall f_514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_472)
static void C_ccall f_472(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_456)
static void C_ccall f_456(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_440)
static void C_ccall f_440(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_424)
static void C_ccall f_424(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_416)
static void C_ccall f_416(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_403)
static void C_ccall f_403(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_352)
static void C_ccall f_352(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_356)
static void C_ccall f_356(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_397)
static void C_ccall f_397(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_393)
static void C_ccall f_393(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_359)
static void C_ccall f_359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_377)
static void C_ccall f_377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_369)
static void C_ccall f_369(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_326)
static void C_ccall f_326(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_308)
static void C_ccall f_308(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_281)
static void C_ccall f_281(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_293)
static void C_ccall f_293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_238)
static void C_fcall f_238(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_272)
static void C_ccall f_272(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1452)
static void C_fcall trf_1452(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1452(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1452(t0,t1);}

C_noret_decl(trf_999)
static void C_fcall trf_999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_999(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_999(t0,t1);}

C_noret_decl(trf_975)
static void C_fcall trf_975(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_975(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_975(t0,t1);}

C_noret_decl(trf_954)
static void C_fcall trf_954(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_954(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_954(t0,t1);}

C_noret_decl(trf_589)
static void C_fcall trf_589(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_589(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_589(t0,t1);}

C_noret_decl(trf_238)
static void C_fcall trf_238(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_238(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_238(t0,t1,t2);}

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
C_initialize_lf(lf,109);
lf[0]=C_h_intern(&lf[0],8,"truncate");
lf[2]=C_h_intern(&lf[2],4,"time");
lf[3]=C_h_intern(&lf[3],15,"\003syssignal-hook");
lf[4]=C_h_intern(&lf[4],11,"\000type-error");
lf[5]=C_static_string(C_heaptop,24,"invalid timeout argument");
lf[6]=C_h_intern(&lf[6],12,"current-time");
lf[7]=C_h_intern(&lf[7],20,"srfi-18:current-time");
lf[8]=C_h_intern(&lf[8],13,"time->seconds");
lf[9]=C_h_intern(&lf[9],18,"time->milliseconds");
lf[10]=C_h_intern(&lf[10],13,"seconds->time");
lf[11]=C_h_intern(&lf[11],19,"\003sysflonum-fraction");
lf[12]=C_h_intern(&lf[12],18,"\003sysexact->inexact");
lf[13]=C_h_intern(&lf[13],3,"max");
lf[14]=C_h_intern(&lf[14],18,"milliseconds->time");
lf[15]=C_h_intern(&lf[15],5,"time\077");
lf[16]=C_h_intern(&lf[16],13,"srfi-18:time\077");
lf[17]=C_h_intern(&lf[17],5,"raise");
lf[18]=C_h_intern(&lf[18],10,"\003syssignal");
lf[19]=C_h_intern(&lf[19],23,"join-timeout-exception\077");
lf[20]=C_h_intern(&lf[20],9,"condition");
lf[21]=C_h_intern(&lf[21],22,"join-timeout-exception");
lf[22]=C_h_intern(&lf[22],26,"abandoned-mutex-exception\077");
lf[23]=C_h_intern(&lf[23],25,"abandoned-mutex-exception");
lf[24]=C_h_intern(&lf[24],28,"terminated-thread-exception\077");
lf[25]=C_h_intern(&lf[25],27,"terminated-thread-exception");
lf[26]=C_h_intern(&lf[26],19,"uncaught-exception\077");
lf[27]=C_h_intern(&lf[27],18,"uncaught-exception");
lf[28]=C_h_intern(&lf[28],25,"uncaught-exception-reason");
lf[29]=C_h_intern(&lf[29],6,"gensym");
lf[30]=C_h_intern(&lf[30],11,"make-thread");
lf[31]=C_h_intern(&lf[31],12,"\003sysschedule");
lf[32]=C_h_intern(&lf[32],16,"\003systhread-kill!");
lf[33]=C_h_intern(&lf[33],4,"dead");
lf[34]=C_h_intern(&lf[34],18,"\003syscurrent-thread");
lf[35]=C_h_intern(&lf[35],15,"\003sysmake-thread");
lf[36]=C_h_intern(&lf[36],7,"created");
lf[37]=C_h_intern(&lf[37],6,"thread");
lf[38]=C_h_intern(&lf[38],7,"thread\077");
lf[39]=C_h_intern(&lf[39],14,"current-thread");
lf[40]=C_h_intern(&lf[40],12,"thread-state");
lf[41]=C_h_intern(&lf[41],15,"thread-specific");
lf[42]=C_h_intern(&lf[42],20,"thread-specific-set!");
lf[43]=C_h_intern(&lf[43],14,"thread-quantum");
lf[44]=C_h_intern(&lf[44],19,"thread-quantum-set!");
lf[45]=C_h_intern(&lf[45],11,"thread-name");
lf[46]=C_h_intern(&lf[46],13,"thread-start!");
lf[47]=C_h_intern(&lf[47],5,"ready");
lf[48]=C_h_intern(&lf[48],22,"\003sysadd-to-ready-queue");
lf[49]=C_h_intern(&lf[49],9,"\003syserror");
lf[50]=C_static_string(C_heaptop,39,"thread can not be started a second time");
lf[51]=C_h_intern(&lf[51],13,"thread-yield!");
lf[52]=C_h_intern(&lf[52],17,"\003systhread-yield!");
lf[53]=C_h_intern(&lf[53],12,"thread-join!");
lf[54]=C_h_intern(&lf[54],10,"terminated");
tmp=C_intern(C_heaptop,18,"uncaught-exception");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"reason");
lf[55]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,18,"uncaught-exception");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[56]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,22,"join-timeout-exception");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[57]=C_h_pair(C_restore,tmp);
lf[58]=C_h_intern(&lf[58],33,"\003systhread-block-for-termination!");
lf[59]=C_h_intern(&lf[59],29,"\003systhread-block-for-timeout!");
lf[60]=C_h_intern(&lf[60],17,"thread-terminate!");
tmp=C_intern(C_heaptop,27,"terminated-thread-exception");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[61]=C_h_pair(C_restore,tmp);
lf[62]=C_h_intern(&lf[62],21,"\003sysprimordial-thread");
lf[63]=C_h_intern(&lf[63],16,"\003sysexit-handler");
lf[64]=C_h_intern(&lf[64],15,"thread-suspend!");
lf[65]=C_h_intern(&lf[65],9,"suspended");
lf[66]=C_h_intern(&lf[66],14,"thread-resume!");
lf[67]=C_h_intern(&lf[67],13,"thread-sleep!");
lf[68]=C_static_string(C_heaptop,24,"invalid timeout argument");
lf[69]=C_h_intern(&lf[69],6,"mutex\077");
lf[70]=C_h_intern(&lf[70],5,"mutex");
lf[71]=C_h_intern(&lf[71],10,"make-mutex");
lf[72]=C_h_intern(&lf[72],14,"\003sysmake-mutex");
lf[73]=C_h_intern(&lf[73],10,"mutex-name");
lf[74]=C_h_intern(&lf[74],14,"mutex-specific");
lf[75]=C_h_intern(&lf[75],19,"mutex-specific-set!");
lf[76]=C_h_intern(&lf[76],11,"mutex-state");
lf[77]=C_h_intern(&lf[77],9,"not-owned");
lf[78]=C_h_intern(&lf[78],9,"abandoned");
lf[79]=C_h_intern(&lf[79],13,"not-abandoned");
lf[80]=C_h_intern(&lf[80],11,"mutex-lock!");
lf[81]=C_h_intern(&lf[81],10,"\003sysappend");
tmp=C_intern(C_heaptop,25,"abandoned-mutex-exception");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[82]=C_h_pair(C_restore,tmp);
lf[83]=C_h_intern(&lf[83],8,"\003sysdelq");
lf[84]=C_h_intern(&lf[84],8,"sleeping");
lf[85]=C_h_intern(&lf[85],13,"mutex-unlock!");
lf[86]=C_h_intern(&lf[86],7,"blocked");
lf[87]=C_h_intern(&lf[87],23,"make-condition-variable");
lf[88]=C_h_intern(&lf[88],18,"condition-variable");
lf[89]=C_h_intern(&lf[89],19,"condition-variable\077");
lf[90]=C_h_intern(&lf[90],27,"condition-variable-specific");
lf[91]=C_h_intern(&lf[91],32,"condition-variable-specific-set!");
lf[92]=C_h_intern(&lf[92],26,"condition-variable-signal!");
lf[93]=C_h_intern(&lf[93],25,"\003systhread-basic-unblock!");
lf[94]=C_h_intern(&lf[94],29,"condition-variable-broadcast!");
lf[95]=C_h_intern(&lf[95],12,"\003sysfor-each");
lf[96]=C_h_intern(&lf[96],14,"thread-signal!");
lf[97]=C_h_intern(&lf[97],19,"\003systhread-unblock!");
lf[98]=C_h_intern(&lf[98],22,"thread-deliver-signal!");
lf[99]=C_h_intern(&lf[99],4,"msvc");
lf[100]=C_h_intern(&lf[100],20,"\003sysread-prompt-hook");
lf[101]=C_h_intern(&lf[101],25,"\003systhread-block-for-i/o!");
lf[102]=C_h_intern(&lf[102],13,"\003systty-port\077");
lf[103]=C_h_intern(&lf[103],18,"\003sysstandard-input");
lf[104]=C_h_intern(&lf[104],14,"build-platform");
lf[105]=C_h_intern(&lf[105],27,"condition-property-accessor");
lf[106]=C_h_intern(&lf[106],6,"reason");
lf[107]=C_h_intern(&lf[107],17,"register-feature!");
lf[108]=C_h_intern(&lf[108],7,"srfi-18");
C_register_lf2(lf,109,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_233,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_scheduler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k231 */
static void C_ccall f_233(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_233,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_236,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 78   register-feature! */
t3=*((C_word*)lf[107]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,lf[108]);}

/* k234 in k231 */
static void C_ccall f_236(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_236,2,t0,t1);}
t2=*((C_word*)lf[0]+1);
t3=C_mutate(&lf[1],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_238,a[2]=t2,tmp=(C_word)a,a+=3,tmp));
t4=C_mutate((C_word*)lf[6]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_281,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[7]+1,*((C_word*)lf[6]+1));
t6=C_mutate((C_word*)lf[8]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_308,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[9]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_326,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[10]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_352,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[14]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_403,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[15]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_416,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[16]+1,*((C_word*)lf[15]+1));
t12=C_mutate((C_word*)lf[17]+1,*((C_word*)lf[18]+1));
t13=C_mutate((C_word*)lf[19]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_424,tmp=(C_word)a,a+=2,tmp));
t14=C_mutate((C_word*)lf[22]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_440,tmp=(C_word)a,a+=2,tmp));
t15=C_mutate((C_word*)lf[24]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_456,tmp=(C_word)a,a+=2,tmp));
t16=C_mutate((C_word*)lf[26]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_472,tmp=(C_word)a,a+=2,tmp));
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_490,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 168  condition-property-accessor */
t18=*((C_word*)lf[105]+1);
((C_proc4)(void*)(*((C_word*)t18+1)))(4,t18,t17,lf[27],lf[106]);}

/* k488 in k234 in k231 */
static void C_ccall f_490(C_word c,C_word t0,C_word t1){
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
C_word ab[70],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_490,2,t0,t1);}
t2=C_mutate((C_word*)lf[28]+1,t1);
t3=*((C_word*)lf[29]+1);
t4=C_mutate((C_word*)lf[30]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_492,a[2]=t3,tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[38]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_536,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[39]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_542,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate((C_word*)lf[40]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_545,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate((C_word*)lf[41]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_551,tmp=(C_word)a,a+=2,tmp));
t9=C_mutate((C_word*)lf[42]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_557,tmp=(C_word)a,a+=2,tmp));
t10=C_mutate((C_word*)lf[43]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_563,tmp=(C_word)a,a+=2,tmp));
t11=C_mutate((C_word*)lf[44]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_569,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate((C_word*)lf[45]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_579,tmp=(C_word)a,a+=2,tmp));
t13=*((C_word*)lf[30]+1);
t14=C_mutate((C_word*)lf[46]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_585,a[2]=t13,tmp=(C_word)a,a+=3,tmp));
t15=C_mutate((C_word*)lf[51]+1,*((C_word*)lf[52]+1));
t16=C_mutate((C_word*)lf[53]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_618,tmp=(C_word)a,a+=2,tmp));
t17=C_mutate((C_word*)lf[60]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_734,tmp=(C_word)a,a+=2,tmp));
t18=C_mutate((C_word*)lf[64]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_775,tmp=(C_word)a,a+=2,tmp));
t19=C_mutate((C_word*)lf[66]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_805,tmp=(C_word)a,a+=2,tmp));
t20=C_mutate((C_word*)lf[67]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_824,tmp=(C_word)a,a+=2,tmp));
t21=C_mutate((C_word*)lf[69]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_864,tmp=(C_word)a,a+=2,tmp));
t22=*((C_word*)lf[29]+1);
t23=C_mutate((C_word*)lf[71]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_870,a[2]=t22,tmp=(C_word)a,a+=3,tmp));
t24=C_mutate((C_word*)lf[73]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_888,tmp=(C_word)a,a+=2,tmp));
t25=C_mutate((C_word*)lf[74]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_894,tmp=(C_word)a,a+=2,tmp));
t26=C_mutate((C_word*)lf[75]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_900,tmp=(C_word)a,a+=2,tmp));
t27=C_mutate((C_word*)lf[76]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_906,tmp=(C_word)a,a+=2,tmp));
t28=C_mutate((C_word*)lf[80]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_927,tmp=(C_word)a,a+=2,tmp));
t29=C_mutate((C_word*)lf[85]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1133,tmp=(C_word)a,a+=2,tmp));
t30=*((C_word*)lf[29]+1);
t31=C_mutate((C_word*)lf[87]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1309,a[2]=t30,tmp=(C_word)a,a+=3,tmp));
t32=C_mutate((C_word*)lf[89]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1328,tmp=(C_word)a,a+=2,tmp));
t33=C_mutate((C_word*)lf[90]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1334,tmp=(C_word)a,a+=2,tmp));
t34=C_mutate((C_word*)lf[91]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1340,tmp=(C_word)a,a+=2,tmp));
t35=C_mutate((C_word*)lf[92]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1346,tmp=(C_word)a,a+=2,tmp));
t36=C_mutate((C_word*)lf[94]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1386,tmp=(C_word)a,a+=2,tmp));
t37=C_mutate((C_word*)lf[96]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1420,tmp=(C_word)a,a+=2,tmp));
t38=C_mutate((C_word*)lf[98]+1,*((C_word*)lf[96]+1));
t39=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1452,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t40=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1483,a[2]=t39,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 487  build-platform */
t41=*((C_word*)lf[104]+1);
((C_proc2)(void*)(*((C_word*)t41+1)))(2,t41,t40);}

/* k1481 in k488 in k234 in k231 */
static void C_ccall f_1483(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1483,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[99]);
if(C_truep(t2)){
t3=((C_word*)t0)[2];
f_1452(t3,C_SCHEME_UNDEFINED);}
else{
t3=*((C_word*)lf[100]+1);
t4=*((C_word*)lf[51]+1);
t5=C_mutate((C_word*)lf[100]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1457,a[2]=t3,a[3]=t4,tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t0)[2];
f_1452(t6,t5);}}

/* ##sys#read-prompt-hook in k1481 in k488 in k234 in k231 */
static void C_ccall f_1457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1457,2,t0,t1);}
t2=(C_word)C_fudge(C_fix(12));
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1467,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t4=t3;
f_1467(2,t4,t2);}
else{
/* srfi-18.scm: 492  ##sys#tty-port? */
t4=*((C_word*)lf[102]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,*((C_word*)lf[103]+1));}}

/* k1465 in ##sys#read-prompt-hook in k1481 in k488 in k234 in k231 */
static void C_ccall f_1467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1467,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1470,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 493  old */
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k1468 in k1465 in ##sys#read-prompt-hook in k1481 in k488 in k234 in k231 */
static void C_ccall f_1470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1470,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1473,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 494  ##sys#thread-block-for-i/o! */
t3=*((C_word*)lf[101]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t2,*((C_word*)lf[34]+1),C_fix(0),C_SCHEME_TRUE);}

/* k1471 in k1468 in k1465 in ##sys#read-prompt-hook in k1481 in k488 in k234 in k231 */
static void C_ccall f_1473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 495  thread-yield! */
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k1450 in k488 in k234 in k231 */
static void C_fcall f_1452(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* thread-signal! in k488 in k234 in k231 */
static void C_ccall f_1420(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1420,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,*((C_word*)lf[34]+1));
if(C_truep(t4)){
/* srfi-18.scm: 473  ##sys#signal */
t5=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t3);}
else{
t5=(C_word)C_slot(t2,C_fix(1));
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1441,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_i_setslot(t2,C_fix(1),t6);
/* srfi-18.scm: 480  ##sys#thread-unblock! */
t8=*((C_word*)lf[97]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t1,t2);}}

/* a1440 in thread-signal! in k488 in k234 in k231 */
static void C_ccall f_1441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1441,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1445,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 478  ##sys#signal */
t3=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t2,((C_word*)t0)[2]);}

/* k1443 in a1440 in thread-signal! in k488 in k234 in k231 */
static void C_ccall f_1445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 479  old */
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* condition-variable-broadcast! in k488 in k234 in k231 */
static void C_ccall f_1386(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1386,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1390,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_1395,tmp=(C_word)a,a+=2,tmp);
t5=(C_word)C_slot(t2,C_fix(2));
/* srfi-18.scm: 459  ##sys#for-each */
t6=*((C_word*)lf[95]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}

/* a1394 in condition-variable-broadcast! in k488 in k234 in k231 */
static void C_ccall f_1395(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1395,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(3));
t4=(C_word)C_eqp(t3,lf[86]);
t5=(C_truep(t4)?t4:(C_word)C_eqp(t3,lf[84]));
if(C_truep(t5)){
/* srfi-18.scm: 463  ##sys#thread-basic-unblock! */
t6=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t2);}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_UNDEFINED);}}

/* k1388 in condition-variable-broadcast! in k488 in k234 in k231 */
static void C_ccall f_1390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(2),C_SCHEME_END_OF_LIST));}

/* condition-variable-signal! in k488 in k234 in k231 */
static void C_ccall f_1346(C_word c,C_word t0,C_word t1,C_word t2){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1346,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(2));
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(C_word)C_slot(t3,C_fix(0));
t5=(C_word)C_slot(t4,C_fix(3));
t6=(C_word)C_slot(t3,C_fix(1));
t7=(C_word)C_i_setslot(t2,C_fix(2),t6);
t8=(C_word)C_eqp(t5,lf[86]);
t9=(C_truep(t8)?t8:(C_word)C_eqp(t5,lf[84]));
if(C_truep(t9)){
/* srfi-18.scm: 454  ##sys#thread-basic-unblock! */
t10=*((C_word*)lf[93]+1);
((C_proc3)(void*)(*((C_word*)t10+1)))(3,t10,t1,t4);}
else{
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,C_SCHEME_UNDEFINED);}}}

/* condition-variable-specific-set! in k488 in k234 in k231 */
static void C_ccall f_1340(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1340,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_setslot(t2,C_fix(3),t3));}

/* condition-variable-specific in k488 in k234 in k231 */
static void C_ccall f_1334(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1334,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(3)));}

/* condition-variable? in k488 in k234 in k231 */
static void C_ccall f_1328(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1328,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[88]));}

/* make-condition-variable in k488 in k234 in k231 */
static void C_ccall f_1309(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2rv,(void*)f_1309r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_1309r(t0,t1,t2);}}

static void C_ccall f_1309r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1317,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_notvemptyp(t2))){
t4=t3;
f_1317(2,t4,(C_word)C_slot(t2,C_fix(0)));}
else{
/* srfi-18.scm: 430  gensym */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[88]);}}

/* k1315 in make-condition-variable in k488 in k234 in k231 */
static void C_ccall f_1317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1317,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,4,lf[88],t1,C_SCHEME_END_OF_LIST,C_SCHEME_UNDEFINED));}

/* mutex-unlock! in k488 in k234 in k231 */
static void C_ccall f_1133(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3rv,(void*)f_1133r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_1133r(t0,t1,t2,t3);}}

static void C_ccall f_1133r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(6);
t4=*((C_word*)lf[34]+1);
t5=(C_word)C_notvemptyp(t3);
t6=(C_truep(t5)?(C_word)C_slot(t3,C_fix(0)):C_SCHEME_FALSE);
t7=(C_word)C_block_size(t3);
t8=(C_word)C_fixnum_greaterp(t7,C_fix(1));
t9=(C_truep(t8)?(C_word)C_slot(t3,C_fix(1)):C_SCHEME_FALSE);
t10=(C_truep(t6)?C_SCHEME_UNDEFINED:C_SCHEME_UNDEFINED);
t11=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1148,a[2]=t9,a[3]=t6,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* srfi-18.scm: 389  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t11);}

/* a1147 in mutex-unlock! in k488 in k234 in k231 */
static void C_ccall f_1148(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1148,3,t0,t1,t2);}
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(3));
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1155,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
/* srfi-18.scm: 392  ##sys#compute-time-limit */
t5=lf[1];
f_238(t5,t4,((C_word*)t0)[2]);}
else{
t5=t4;
f_1155(2,t5,C_SCHEME_FALSE);}}

/* k1153 in a1147 in mutex-unlock! in k488 in k234 in k231 */
static void C_ccall f_1155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1155,2,t0,t1);}
t2=(C_word)C_i_set_i_slot(((C_word*)t0)[7],C_fix(4),C_SCHEME_FALSE);
t3=(C_word)C_i_set_i_slot(((C_word*)t0)[7],C_fix(5),C_SCHEME_FALSE);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1284,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
t5=(C_word)C_slot(((C_word*)t0)[6],C_fix(8));
/* srfi-18.scm: 396  ##sys#delq */
t6=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,((C_word*)t0)[7],t5);}

/* k1282 in k1153 in a1147 in mutex-unlock! in k488 in k234 in k231 */
static void C_ccall f_1284(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1284,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[8],C_fix(8),t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1276,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_setslot(((C_word*)t0)[8],C_fix(1),t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1170,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[3])){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1266,a[2]=t5,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
t7=(C_word)C_slot(((C_word*)t0)[3],C_fix(2));
t8=(C_word)C_a_i_list(&a,1,((C_word*)t0)[8]);
/* srfi-18.scm: 399  ##sys#append */
t9=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t6,t7,t8);}
else{
t6=t5;
f_1170(2,t6,C_SCHEME_UNDEFINED);}}

/* k1264 in k1282 in k1153 in a1147 in mutex-unlock! in k488 in k234 in k231 */
static void C_ccall f_1266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1266,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[6],C_fix(2),t1);
if(C_truep(((C_word*)t0)[5])){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1244,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t3);
/* srfi-18.scm: 406  ##sys#thread-block-for-timeout! */
t5=*((C_word*)lf[59]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],((C_word*)t0)[3],((C_word*)t0)[5]);}
else{
t3=((C_word*)t0)[2];
f_1170(2,t3,(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(3),lf[84]));}}

/* a1243 in k1264 in k1282 in k1153 in a1147 in mutex-unlock! in k488 in k234 in k231 */
static void C_ccall f_1244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1244,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1255,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(2));
/* srfi-18.scm: 404  ##sys#delq */
t4=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}

/* k1253 in a1243 in k1264 in k1282 in k1153 in a1147 in mutex-unlock! in k488 in k234 in k231 */
static void C_ccall f_1255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),t1);
/* srfi-18.scm: 405  return */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],C_SCHEME_FALSE);}

/* k1168 in k1282 in k1153 in a1147 in mutex-unlock! in k488 in k234 in k231 */
static void C_ccall f_1170(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1170,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1173,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[3]))){
t3=t2;
f_1173(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(0));
t4=(C_word)C_slot(t3,C_fix(3));
t5=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t6=(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(3),t5);
t7=(C_word)C_i_set_i_slot(((C_word*)t0)[2],C_fix(5),C_SCHEME_TRUE);
t8=(C_word)C_eqp(t4,lf[86]);
t9=(C_truep(t8)?t8:(C_word)C_eqp(t4,lf[84]));
if(C_truep(t9)){
t10=(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(2),t3);
t11=(C_word)C_slot(t3,C_fix(8));
t12=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t11);
t13=(C_word)C_i_setslot(t3,C_fix(8),t12);
t14=(C_word)C_eqp(t4,lf[84]);
if(C_truep(t14)){
/* srfi-18.scm: 417  ##sys#add-to-ready-queue */
t15=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t15+1)))(3,t15,t2,t3);}
else{
t15=t2;
f_1173(2,t15,C_SCHEME_UNDEFINED);}}
else{
t10=t2;
f_1173(2,t10,C_SCHEME_UNDEFINED);}}}

/* k1171 in k1168 in k1282 in k1153 in a1147 in mutex-unlock! in k488 in k234 in k231 */
static void C_ccall f_1173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 418  ##sys#schedule */
t2=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a1275 in k1282 in k1153 in a1147 in mutex-unlock! in k488 in k234 in k231 */
static void C_ccall f_1276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1276,2,t0,t1);}
/* srfi-18.scm: 397  return */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_TRUE);}

/* mutex-lock! in k488 in k234 in k231 */
static void C_ccall f_927(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3rv,(void*)f_927r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest_vector(a,C_rest_count(0));
f_927r(t0,t1,t2,t3);}}

static void C_ccall f_927r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(5);
t4=(C_word)C_notvemptyp(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_934,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t4)){
t6=(C_word)C_slot(t3,C_fix(0));
/* srfi-18.scm: 335  ##sys#compute-time-limit */
t7=lf[1];
f_238(t7,t5,t6);}
else{
t6=t5;
f_934(2,t6,C_SCHEME_FALSE);}}

/* k932 in mutex-lock! in k488 in k234 in k231 */
static void C_ccall f_934(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_934,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[4]);
t3=(C_word)C_fixnum_greaterp(t2,C_fix(1));
t4=(C_truep(t3)?(C_word)C_slot(((C_word*)t0)[4],C_fix(1)):C_SCHEME_FALSE);
t5=(C_word)C_slot(((C_word*)t0)[3],C_fix(4));
t6=(C_truep(t4)?C_SCHEME_UNDEFINED:C_SCHEME_UNDEFINED);
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_951,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t5,a[6]=((C_word*)t0)[3],tmp=(C_word)a,a+=7,tmp);
/* srfi-18.scm: 340  ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[2],t7);}

/* a950 in k932 in mutex-lock! in k488 in k234 in k231 */
static void C_ccall f_951(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_951,3,t0,t1,t2);}
t3=*((C_word*)lf[34]+1);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_954,a[2]=t3,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_975,a[2]=t2,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_slot(((C_word*)t0)[6],C_fix(5)))){
if(C_truep(((C_word*)t0)[4])){
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1061,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=t4,a[5]=t3,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* srfi-18.scm: 366  check */
t7=t5;
f_975(t7,t6);}
else{
t6=(C_word)C_i_setslot(t3,C_fix(3),lf[84]);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1109,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=(C_word)C_i_setslot(t3,C_fix(1),t7);
/* srfi-18.scm: 379  switch */
t9=t4;
f_954(t9,t1);}}
else{
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_999,a[2]=t5,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t7=(C_truep(((C_word*)t0)[2])?(C_word)C_i_not(((C_word*)t0)[3]):C_SCHEME_FALSE);
if(C_truep(t7)){
t8=(C_word)C_i_set_i_slot(((C_word*)t0)[6],C_fix(2),C_SCHEME_FALSE);
t9=t6;
f_999(t9,(C_word)C_i_set_i_slot(((C_word*)t0)[6],C_fix(5),C_SCHEME_TRUE));}
else{
t8=(C_truep(((C_word*)t0)[3])?((C_word*)t0)[3]:t3);
t9=(C_word)C_slot(t8,C_fix(3));
t10=(C_word)C_eqp(lf[54],t9);
t11=(C_truep(t10)?t10:(C_word)C_eqp(lf[33],t9));
if(C_truep(t11)){
t12=t6;
f_999(t12,(C_word)C_i_set_i_slot(((C_word*)t0)[6],C_fix(4),C_SCHEME_TRUE));}
else{
t12=(C_word)C_i_set_i_slot(((C_word*)t0)[6],C_fix(5),C_SCHEME_TRUE);
t13=(C_word)C_slot(t8,C_fix(8));
t14=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t13);
t15=(C_word)C_i_setslot(t8,C_fix(8),t14);
t16=t6;
f_999(t16,(C_word)C_i_setslot(((C_word*)t0)[6],C_fix(2),t8));}}}}

/* k997 in a950 in k932 in mutex-lock! in k488 in k234 in k231 */
static void C_fcall f_999(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_999,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1002,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 363  check */
t3=((C_word*)t0)[2];
f_975(t3,t2);}

/* k1000 in k997 in a950 in k932 in mutex-lock! in k488 in k234 in k231 */
static void C_ccall f_1002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 364  return */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],C_SCHEME_TRUE);}

/* a1108 in a950 in k932 in mutex-lock! in k488 in k234 in k231 */
static void C_ccall f_1109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1109,2,t0,t1);}
/* srfi-18.scm: 378  return */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_TRUE);}

/* k1059 in a950 in k932 in mutex-lock! in k488 in k234 in k231 */
static void C_ccall f_1061(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1061,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1072,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_setslot(((C_word*)t0)[5],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1067,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 374  ##sys#thread-block-for-timeout! */
t5=*((C_word*)lf[59]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[5],((C_word*)t0)[2]);}

/* k1065 in k1059 in a950 in k932 in mutex-lock! in k488 in k234 in k231 */
static void C_ccall f_1067(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 375  switch */
t2=((C_word*)t0)[3];
f_954(t2,((C_word*)t0)[2]);}

/* a1071 in k1059 in a950 in k932 in mutex-lock! in k488 in k234 in k231 */
static void C_ccall f_1072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1072,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1094,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_slot(((C_word*)t0)[4],C_fix(3));
/* srfi-18.scm: 370  ##sys#delq */
t4=*((C_word*)lf[83]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,((C_word*)t0)[2],t3);}

/* k1092 in a1071 in k1059 in a950 in k932 in mutex-lock! in k488 in k234 in k231 */
static void C_ccall f_1094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1094,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(3),t1);
t3=(C_word)C_slot(*((C_word*)lf[34]+1),C_fix(8));
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t3);
t5=(C_word)C_i_setslot(*((C_word*)lf[34]+1),C_fix(8),t4);
t6=(C_word)C_i_setslot(((C_word*)t0)[4],C_fix(2),((C_word*)t0)[3]);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,C_SCHEME_FALSE);}

/* check in a950 in k932 in mutex-lock! in k488 in k234 in k231 */
static void C_fcall f_975(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_975,NULL,2,t0,t1);}
if(C_truep(((C_word*)t0)[3])){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_986,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_a_i_record(&a,3,lf[20],lf[82],C_SCHEME_END_OF_LIST);
/* srfi-18.scm: 348  ##sys#signal */
t4=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t2,t3);}
else{
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* k984 in check in a950 in k932 in mutex-lock! in k488 in k234 in k231 */
static void C_ccall f_986(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 348  return */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* switch in a950 in k932 in mutex-lock! in k488 in k234 in k231 */
static void C_fcall f_954(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_954,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_965,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],C_fix(3));
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
/* srfi-18.scm: 344  ##sys#append */
t5=*((C_word*)lf[81]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}

/* k963 in switch in a950 in k932 in mutex-lock! in k488 in k234 in k231 */
static void C_ccall f_965(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(3),t1);
/* srfi-18.scm: 345  ##sys#schedule */
t3=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}

/* mutex-state in k488 in k234 in k231 */
static void C_ccall f_906(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_906,3,t0,t1,t2);}
if(C_truep((C_word)C_slot(t2,C_fix(5)))){
t3=(C_word)C_slot(t2,C_fix(2));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:lf[77]));}
else{
t3=(C_word)C_slot(t2,C_fix(4));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?lf[78]:lf[79]));}}

/* mutex-specific-set! in k488 in k234 in k231 */
static void C_ccall f_900(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_900,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_setslot(t2,C_fix(6),t3));}

/* mutex-specific in k488 in k234 in k231 */
static void C_ccall f_894(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_894,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(6)));}

/* mutex-name in k488 in k234 in k231 */
static void C_ccall f_888(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_888,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(1)));}

/* make-mutex in k488 in k234 in k231 */
static void C_ccall f_870(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2rv,(void*)f_870r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_870r(t0,t1,t2);}}

static void C_ccall f_870r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(3);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_874,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_notvemptyp(t2))){
t4=t3;
f_874(2,t4,(C_word)C_slot(t2,C_fix(0)));}
else{
/* srfi-18.scm: 309  gensym */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,lf[70]);}}

/* k872 in make-mutex in k488 in k234 in k231 */
static void C_ccall f_874(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 310  ##sys#make-mutex */
t2=*((C_word*)lf[72]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],t1,*((C_word*)lf[34]+1));}

/* mutex? in k488 in k234 in k231 */
static void C_ccall f_864(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_864,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[70]));}

/* thread-sleep! in k488 in k234 in k231 */
static void C_ccall f_824(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_824,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_852,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_852(2,t4,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm: 298  ##sys#signal-hook */
t4=*((C_word*)lf[3]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t3,lf[4],lf[67],lf[68],t2);}}

/* k850 in thread-sleep! in k488 in k234 in k231 */
static void C_ccall f_852(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_852,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_859,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 299  ##sys#compute-time-limit */
t3=lf[1];
f_238(t3,t2,((C_word*)t0)[2]);}

/* k857 in k850 in thread-sleep! in k488 in k234 in k231 */
static void C_ccall f_859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_859,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_833,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 292  ##sys#call-with-current-continuation */
C_call_cc(3,0,t2,t3);}

/* a832 in k857 in k850 in thread-sleep! in k488 in k234 in k231 */
static void C_ccall f_833(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_833,3,t0,t1,t2);}
t3=*((C_word*)lf[34]+1);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_845,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_i_setslot(t3,C_fix(1),t4);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_840,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 296  ##sys#thread-block-for-timeout! */
t7=*((C_word*)lf[59]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,t3,((C_word*)t0)[2]);}

/* k838 in a832 in k857 in k850 in thread-sleep! in k488 in k234 in k231 */
static void C_ccall f_840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 297  ##sys#schedule */
t2=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a844 in a832 in k857 in k850 in thread-sleep! in k488 in k234 in k231 */
static void C_ccall f_845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_845,2,t0,t1);}
/* srfi-18.scm: 295  return */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* thread-resume! in k488 in k234 in k231 */
static void C_ccall f_805(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_805,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(3));
t4=(C_word)C_eqp(t3,lf[65]);
if(C_truep(t4)){
t5=(C_word)C_i_setslot(t2,C_fix(3),lf[47]);
/* srfi-18.scm: 288  ##sys#add-to-ready-queue */
t6=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t1,t2);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* thread-suspend! in k488 in k234 in k231 */
static void C_ccall f_775(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_775,3,t0,t1,t2);}
t3=(C_word)C_i_setslot(t2,C_fix(3),lf[65]);
t4=(C_word)C_eqp(t2,*((C_word*)lf[34]+1));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_790,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 279  ##sys#call-with-current-continuation */
C_call_cc(3,0,t1,t5);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_UNDEFINED);}}

/* a789 in thread-suspend! in k488 in k234 in k231 */
static void C_ccall f_790(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_790,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_799,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(1),t3);
/* srfi-18.scm: 282  ##sys#schedule */
t5=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t1);}

/* a798 in a789 in thread-suspend! in k488 in k234 in k231 */
static void C_ccall f_799(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_799,2,t0,t1);}
/* srfi-18.scm: 281  return */
t2=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,t1,C_SCHEME_UNDEFINED);}

/* thread-terminate! in k488 in k234 in k231 */
static void C_ccall f_734(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_734,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_738,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_eqp(t2,*((C_word*)lf[62]+1));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_773,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 269  ##sys#exit-handler */
t6=*((C_word*)lf[63]+1);
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}
else{
t5=t3;
f_738(2,t5,C_SCHEME_UNDEFINED);}}

/* k771 in thread-terminate! in k488 in k234 in k231 */
static void C_ccall f_773(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* k736 in thread-terminate! in k488 in k234 in k231 */
static void C_ccall f_738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_738,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,C_SCHEME_UNDEFINED);
t3=(C_word)C_i_set_i_slot(((C_word*)t0)[3],C_fix(2),t2);
t4=(C_word)C_a_i_record(&a,3,lf[20],lf[61],C_SCHEME_END_OF_LIST);
t5=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(7),t4);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_747,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 272  ##sys#thread-kill! */
t7=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,((C_word*)t0)[3],lf[54]);}

/* k745 in k736 in thread-terminate! in k488 in k234 in k231 */
static void C_ccall f_747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eqp(((C_word*)t0)[3],*((C_word*)lf[34]+1));
if(C_truep(t2)){
/* srfi-18.scm: 273  ##sys#schedule */
t3=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,((C_word*)t0)[2]);}
else{
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* thread-join! in k488 in k234 in k231 */
static void C_ccall f_618(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_618r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_618r(t0,t1,t2,t3);}}

static void C_ccall f_618r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_622,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t5=(C_word)C_slot(t3,C_fix(0));
/* srfi-18.scm: 238  ##sys#compute-time-limit */
t6=lf[1];
f_238(t6,t4,t5);}
else{
t5=t4;
f_622(2,t5,C_SCHEME_FALSE);}}

/* k620 in thread-join! in k488 in k234 in k231 */
static void C_ccall f_622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_622,2,t0,t1);}
t2=(C_word)C_i_pairp(((C_word*)t0)[4]);
t3=(C_truep(t2)?(C_word)C_slot(((C_word*)t0)[4],C_fix(1)):C_SCHEME_FALSE);
t4=(C_truep(t3)?(C_word)C_i_pairp(t3):C_SCHEME_FALSE);
t5=(C_truep(t4)?(C_word)C_slot(t3,C_fix(0)):C_SCHEME_FALSE);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_636,a[2]=t1,a[3]=t5,a[4]=t4,a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* srfi-18.scm: 242  ##sys#call-with-current-continuation */
C_call_cc(3,0,((C_word*)t0)[2],t6);}

/* a635 in k620 in thread-join! in k488 in k234 in k231 */
static void C_ccall f_636(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_636,3,t0,t1,t2);}
t3=*((C_word*)lf[34]+1);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_640,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t2,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
/* srfi-18.scm: 245  ##sys#thread-block-for-timeout! */
t5=*((C_word*)lf[59]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,t3,((C_word*)t0)[2]);}
else{
t5=t4;
f_640(2,t5,C_SCHEME_UNDEFINED);}}

/* k638 in a635 in k620 in thread-join! in k488 in k234 in k231 */
static void C_ccall f_640(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_640,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_651,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_i_setslot(((C_word*)t0)[3],C_fix(1),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_646,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 263  ##sys#thread-block-for-termination! */
t5=*((C_word*)lf[58]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[3],((C_word*)t0)[7]);}

/* k644 in k638 in a635 in k620 in thread-join! in k488 in k234 in k231 */
static void C_ccall f_646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 264  ##sys#schedule */
t2=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* a650 in k638 in a635 in k620 in thread-join! in k488 in k234 in k231 */
static void C_ccall f_651(C_word c,C_word t0,C_word t1){
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
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_651,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(3));
t3=(C_word)C_eqp(t2,lf[33]);
if(C_truep(t3)){
t4=(C_word)C_slot(((C_word*)t0)[5],C_fix(2));
C_apply(4,0,t1,((C_word*)t0)[4],t4);}
else{
t4=(C_word)C_eqp(t2,lf[54]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_681,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_slot(((C_word*)t0)[5],C_fix(7));
t7=(C_word)C_a_i_list(&a,2,lf[55],t6);
t8=(C_word)C_a_i_record(&a,3,lf[20],lf[56],t7);
/* srfi-18.scm: 253  ##sys#signal */
t9=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t5,t8);}
else{
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_700,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[3])){
t6=t5;
f_700(2,t6,((C_word*)t0)[2]);}
else{
t6=(C_word)C_a_i_record(&a,3,lf[20],lf[57],C_SCHEME_END_OF_LIST);
/* srfi-18.scm: 261  ##sys#signal */
t7=*((C_word*)lf[18]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}}}}

/* k698 in a650 in k638 in a635 in k620 in thread-join! in k488 in k234 in k231 */
static void C_ccall f_700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 258  return */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k679 in a650 in k638 in a635 in k620 in thread-join! in k488 in k234 in k231 */
static void C_ccall f_681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 252  return */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* thread-start! in k488 in k234 in k231 */
static void C_ccall f_585(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_585,3,t0,t1,t2);}
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_589,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_closurep(((C_word*)t3)[1]))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_615,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 225  make-thread */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,((C_word*)t3)[1]);}
else{
t5=t4;
f_589(t5,C_SCHEME_UNDEFINED);}}

/* k613 in thread-start! in k488 in k234 in k231 */
static void C_ccall f_615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_589(t3,t2);}

/* k587 in thread-start! in k488 in k234 in k231 */
static void C_fcall f_589(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_589,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_592,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_slot(((C_word*)((C_word*)t0)[3])[1],C_fix(3));
t4=(C_word)C_eqp(lf[36],t3);
if(C_truep(t4)){
t5=t2;
f_592(2,t5,C_SCHEME_UNDEFINED);}
else{
/* srfi-18.scm: 228  ##sys#error */
t5=*((C_word*)lf[49]+1);
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t2,lf[46],lf[50],((C_word*)((C_word*)t0)[3])[1]);}}

/* k590 in k587 in thread-start! in k488 in k234 in k231 */
static void C_ccall f_592(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_592,2,t0,t1);}
t2=(C_word)C_i_setslot(((C_word*)((C_word*)t0)[3])[1],C_fix(3),lf[47]);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_598,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* srfi-18.scm: 230  ##sys#add-to-ready-queue */
t4=*((C_word*)lf[48]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[3])[1]);}

/* k596 in k590 in k587 in thread-start! in k488 in k234 in k231 */
static void C_ccall f_598(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)((C_word*)t0)[2])[1]);}

/* thread-name in k488 in k234 in k231 */
static void C_ccall f_579(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_579,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(6)));}

/* thread-quantum-set! in k488 in k234 in k231 */
static void C_ccall f_569(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_569,4,t0,t1,t2,t3);}
t4=(C_word)C_i_fixnum_max(t3,C_fix(10));
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_set_i_slot(t2,C_fix(9),t4));}

/* thread-quantum in k488 in k234 in k231 */
static void C_ccall f_563(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_563,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(9)));}

/* thread-specific-set! in k488 in k234 in k231 */
static void C_ccall f_557(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_557,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_setslot(t2,C_fix(10),t3));}

/* thread-specific in k488 in k234 in k231 */
static void C_ccall f_551(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_551,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(10)));}

/* thread-state in k488 in k234 in k231 */
static void C_ccall f_545(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_545,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(3)));}

/* current-thread in k488 in k234 in k231 */
static void C_ccall f_542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_542,2,t0,t1);}
t2=t1;
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,*((C_word*)lf[34]+1));}

/* thread? in k488 in k234 in k231 */
static void C_ccall f_536(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_536,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[37]));}

/* make-thread in k488 in k234 in k231 */
static void C_ccall f_492(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_492r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_492r(t0,t1,t2,t3);}}

static void C_ccall f_492r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_496,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_521,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(t3))){
t6=t5;
f_521(2,t6,(C_word)C_slot(t3,C_fix(0)));}
else{
/* srfi-18.scm: 180  gensym */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,lf[37]);}}

/* k519 in make-thread in k488 in k234 in k231 */
static void C_ccall f_521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(*((C_word*)lf[34]+1),C_fix(9));
/* srfi-18.scm: 177  ##sys#make-thread */
t3=*((C_word*)lf[35]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,((C_word*)t0)[2],C_SCHEME_FALSE,lf[36],t1,t2);}

/* k494 in make-thread in k488 in k234 in k231 */
static void C_ccall f_496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_496,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_501,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_setslot(t1,C_fix(1),t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}

/* a500 in k494 in make-thread in k488 in k234 in k231 */
static void C_ccall f_501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_501,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_507,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 185  ##sys#call-with-values */
C_u_call_with_values(4,0,t1,((C_word*)t0)[2],t2);}

/* a506 in a500 in k494 in make-thread in k488 in k234 in k231 */
static void C_ccall f_507(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+3)){
C_save_and_reclaim((void*)tr2r,(void*)f_507r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_507r(t0,t1,t2);}}

static void C_ccall f_507r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(3);
t3=(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(2),t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_514,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 189  ##sys#thread-kill! */
t5=*((C_word*)lf[32]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,((C_word*)t0)[2],lf[33]);}

/* k512 in a506 in a500 in k494 in make-thread in k488 in k234 in k231 */
static void C_ccall f_514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 190  ##sys#schedule */
t2=*((C_word*)lf[31]+1);
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* uncaught-exception? in k234 in k231 */
static void C_ccall f_472(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_472,3,t0,t1,t2);}
if(C_truep((C_word)C_i_structurep(t2,lf[20]))){
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_u_i_memq(lf[27],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* terminated-thread-exception? in k234 in k231 */
static void C_ccall f_456(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_456,3,t0,t1,t2);}
if(C_truep((C_word)C_i_structurep(t2,lf[20]))){
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_u_i_memq(lf[25],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* abandoned-mutex-exception? in k234 in k231 */
static void C_ccall f_440(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_440,3,t0,t1,t2);}
if(C_truep((C_word)C_i_structurep(t2,lf[20]))){
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_u_i_memq(lf[23],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* join-timeout-exception? in k234 in k231 */
static void C_ccall f_424(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_424,3,t0,t1,t2);}
if(C_truep((C_word)C_i_structurep(t2,lf[20]))){
t3=(C_word)C_slot(t2,C_fix(1));
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_u_i_memq(lf[21],t3));}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* time? in k234 in k231 */
static void C_ccall f_416(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_416,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[2]));}

/* milliseconds->time in k234 in k231 */
static void C_ccall f_403(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_403,3,t0,t1,t2);}
t3=(C_word)C_a_i_divide(&a,2,t2,C_fix(1000));
t4=(C_word)C_a_i_plus(&a,2,C_flonum(&a,C_startup_time_seconds),t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_record(&a,4,lf[2],t2,t4,C_fix(0)));}

/* seconds->time in k234 in k231 */
static void C_ccall f_352(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_352,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_356,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_a_i_minus(&a,2,t2,C_flonum(&a,C_startup_time_seconds));
/* srfi-18.scm: 132  max */
t5=*((C_word*)lf[13]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,C_fix(0),t4);}

/* k354 in seconds->time in k234 in k231 */
static void C_ccall f_356(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_356,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_359,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_393,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_397,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* srfi-18.scm: 133  ##sys#exact->inexact */
t5=*((C_word*)lf[12]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,((C_word*)t0)[2]);}

/* k395 in k354 in seconds->time in k234 in k231 */
static void C_ccall f_397(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* srfi-18.scm: 133  ##sys#flonum-fraction */
t2=*((C_word*)lf[11]+1);
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* k391 in k354 in seconds->time in k234 in k231 */
static void C_ccall f_393(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_393,2,t0,t1);}
t2=(C_word)C_a_i_times(&a,2,C_fix(1000),t1);
/* srfi-18.scm: 133  truncate */
t3=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* k357 in k354 in seconds->time in k234 in k231 */
static void C_ccall f_359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_359,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_377,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_a_i_times(&a,2,((C_word*)t0)[2],C_fix(1000));
t4=(C_word)C_a_i_plus(&a,2,t3,t1);
/* srfi-18.scm: 134  truncate */
t5=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t2,t4);}

/* k375 in k357 in k354 in seconds->time in k234 in k231 */
static void C_ccall f_377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_377,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_369,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* srfi-18.scm: 135  truncate */
t4=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)t0)[2]);}

/* k367 in k375 in k357 in k354 in seconds->time in k234 in k231 */
static void C_ccall f_369(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_369,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[2],((C_word*)t0)[2],t1,t2));}

/* time->milliseconds in k234 in k231 */
static void C_ccall f_326(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_326,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(2));
t4=(C_word)C_a_i_minus(&a,2,t3,C_flonum(&a,C_startup_time_seconds));
t5=(C_word)C_a_i_times(&a,2,t4,C_fix(1000));
t6=(C_word)C_i_inexact_to_exact(t5);
t7=(C_word)C_slot(t2,C_fix(3));
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_plus(&a,2,t6,t7));}

/* time->seconds in k234 in k231 */
static void C_ccall f_308(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_308,3,t0,t1,t2);}
t3=(C_word)C_slot(t2,C_fix(2));
t4=(C_word)C_slot(t2,C_fix(3));
t5=(C_word)C_a_i_divide(&a,2,t4,C_fix(1000));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_plus(&a,2,t3,t5));}

/* current-time in k234 in k231 */
static void C_ccall f_281(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_281,2,t0,t1);}
t2=C_flonum(&a,C_get_seconds);
t3=C_flonum(&a,C_startup_time_seconds);
t4=C_long_to_num(&a,C_ms);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_293,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_a_i_minus(&a,2,t2,t3);
t7=(C_word)C_a_i_times(&a,2,t6,C_fix(1000));
t8=(C_word)C_a_i_plus(&a,2,t7,C_long_to_num(&a,C_ms));
/* srfi-18.scm: 115  truncate */
t9=*((C_word*)lf[0]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t5,t8);}

/* k291 in current-time in k234 in k231 */
static void C_ccall f_293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_293,2,t0,t1);}
t2=(C_word)C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_record(&a,4,lf[2],t2,((C_word*)t0)[2],C_long_to_num(&a,C_ms)));}

/* ##sys#compute-time-limit in k234 in k231 */
static void C_fcall f_238(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_238,NULL,3,t0,t1,t2);}
if(C_truep(t2)){
if(C_truep((C_word)C_i_structurep(t2,lf[2]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_slot(t2,C_fix(1)));}
else{
if(C_truep((C_word)C_i_numberp(t2))){
t3=(C_word)C_fudge(C_fix(16));
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_272,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_a_i_times(&a,2,t2,C_fix(1000));
/* srfi-18.scm: 92   truncate */
t6=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t4,t5);}
else{
/* srfi-18.scm: 93   ##sys#signal-hook */
t3=*((C_word*)lf[3]+1);
((C_proc5)(void*)(*((C_word*)t3+1)))(5,t3,t1,lf[4],lf[5],t2);}}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* k270 in ##sys#compute-time-limit in k234 in k231 */
static void C_ccall f_272(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_inexact_to_exact(t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_u_fixnum_plus(((C_word*)t0)[2],t2));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[114] = {
{"toplevelsrfi-18.scm",(void*)C_srfi_18_toplevel},
{"f_233srfi-18.scm",(void*)f_233},
{"f_236srfi-18.scm",(void*)f_236},
{"f_490srfi-18.scm",(void*)f_490},
{"f_1483srfi-18.scm",(void*)f_1483},
{"f_1457srfi-18.scm",(void*)f_1457},
{"f_1467srfi-18.scm",(void*)f_1467},
{"f_1470srfi-18.scm",(void*)f_1470},
{"f_1473srfi-18.scm",(void*)f_1473},
{"f_1452srfi-18.scm",(void*)f_1452},
{"f_1420srfi-18.scm",(void*)f_1420},
{"f_1441srfi-18.scm",(void*)f_1441},
{"f_1445srfi-18.scm",(void*)f_1445},
{"f_1386srfi-18.scm",(void*)f_1386},
{"f_1395srfi-18.scm",(void*)f_1395},
{"f_1390srfi-18.scm",(void*)f_1390},
{"f_1346srfi-18.scm",(void*)f_1346},
{"f_1340srfi-18.scm",(void*)f_1340},
{"f_1334srfi-18.scm",(void*)f_1334},
{"f_1328srfi-18.scm",(void*)f_1328},
{"f_1309srfi-18.scm",(void*)f_1309},
{"f_1317srfi-18.scm",(void*)f_1317},
{"f_1133srfi-18.scm",(void*)f_1133},
{"f_1148srfi-18.scm",(void*)f_1148},
{"f_1155srfi-18.scm",(void*)f_1155},
{"f_1284srfi-18.scm",(void*)f_1284},
{"f_1266srfi-18.scm",(void*)f_1266},
{"f_1244srfi-18.scm",(void*)f_1244},
{"f_1255srfi-18.scm",(void*)f_1255},
{"f_1170srfi-18.scm",(void*)f_1170},
{"f_1173srfi-18.scm",(void*)f_1173},
{"f_1276srfi-18.scm",(void*)f_1276},
{"f_927srfi-18.scm",(void*)f_927},
{"f_934srfi-18.scm",(void*)f_934},
{"f_951srfi-18.scm",(void*)f_951},
{"f_999srfi-18.scm",(void*)f_999},
{"f_1002srfi-18.scm",(void*)f_1002},
{"f_1109srfi-18.scm",(void*)f_1109},
{"f_1061srfi-18.scm",(void*)f_1061},
{"f_1067srfi-18.scm",(void*)f_1067},
{"f_1072srfi-18.scm",(void*)f_1072},
{"f_1094srfi-18.scm",(void*)f_1094},
{"f_975srfi-18.scm",(void*)f_975},
{"f_986srfi-18.scm",(void*)f_986},
{"f_954srfi-18.scm",(void*)f_954},
{"f_965srfi-18.scm",(void*)f_965},
{"f_906srfi-18.scm",(void*)f_906},
{"f_900srfi-18.scm",(void*)f_900},
{"f_894srfi-18.scm",(void*)f_894},
{"f_888srfi-18.scm",(void*)f_888},
{"f_870srfi-18.scm",(void*)f_870},
{"f_874srfi-18.scm",(void*)f_874},
{"f_864srfi-18.scm",(void*)f_864},
{"f_824srfi-18.scm",(void*)f_824},
{"f_852srfi-18.scm",(void*)f_852},
{"f_859srfi-18.scm",(void*)f_859},
{"f_833srfi-18.scm",(void*)f_833},
{"f_840srfi-18.scm",(void*)f_840},
{"f_845srfi-18.scm",(void*)f_845},
{"f_805srfi-18.scm",(void*)f_805},
{"f_775srfi-18.scm",(void*)f_775},
{"f_790srfi-18.scm",(void*)f_790},
{"f_799srfi-18.scm",(void*)f_799},
{"f_734srfi-18.scm",(void*)f_734},
{"f_773srfi-18.scm",(void*)f_773},
{"f_738srfi-18.scm",(void*)f_738},
{"f_747srfi-18.scm",(void*)f_747},
{"f_618srfi-18.scm",(void*)f_618},
{"f_622srfi-18.scm",(void*)f_622},
{"f_636srfi-18.scm",(void*)f_636},
{"f_640srfi-18.scm",(void*)f_640},
{"f_646srfi-18.scm",(void*)f_646},
{"f_651srfi-18.scm",(void*)f_651},
{"f_700srfi-18.scm",(void*)f_700},
{"f_681srfi-18.scm",(void*)f_681},
{"f_585srfi-18.scm",(void*)f_585},
{"f_615srfi-18.scm",(void*)f_615},
{"f_589srfi-18.scm",(void*)f_589},
{"f_592srfi-18.scm",(void*)f_592},
{"f_598srfi-18.scm",(void*)f_598},
{"f_579srfi-18.scm",(void*)f_579},
{"f_569srfi-18.scm",(void*)f_569},
{"f_563srfi-18.scm",(void*)f_563},
{"f_557srfi-18.scm",(void*)f_557},
{"f_551srfi-18.scm",(void*)f_551},
{"f_545srfi-18.scm",(void*)f_545},
{"f_542srfi-18.scm",(void*)f_542},
{"f_536srfi-18.scm",(void*)f_536},
{"f_492srfi-18.scm",(void*)f_492},
{"f_521srfi-18.scm",(void*)f_521},
{"f_496srfi-18.scm",(void*)f_496},
{"f_501srfi-18.scm",(void*)f_501},
{"f_507srfi-18.scm",(void*)f_507},
{"f_514srfi-18.scm",(void*)f_514},
{"f_472srfi-18.scm",(void*)f_472},
{"f_456srfi-18.scm",(void*)f_456},
{"f_440srfi-18.scm",(void*)f_440},
{"f_424srfi-18.scm",(void*)f_424},
{"f_416srfi-18.scm",(void*)f_416},
{"f_403srfi-18.scm",(void*)f_403},
{"f_352srfi-18.scm",(void*)f_352},
{"f_356srfi-18.scm",(void*)f_356},
{"f_397srfi-18.scm",(void*)f_397},
{"f_393srfi-18.scm",(void*)f_393},
{"f_359srfi-18.scm",(void*)f_359},
{"f_377srfi-18.scm",(void*)f_377},
{"f_369srfi-18.scm",(void*)f_369},
{"f_326srfi-18.scm",(void*)f_326},
{"f_308srfi-18.scm",(void*)f_308},
{"f_281srfi-18.scm",(void*)f_281},
{"f_293srfi-18.scm",(void*)f_293},
{"f_238srfi-18.scm",(void*)f_238},
{"f_272srfi-18.scm",(void*)f_272},
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
