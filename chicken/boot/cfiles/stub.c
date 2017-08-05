/* Generated from stub.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:14
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: stub.scm -output-file stub.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: default_stub
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[3];


C_noret_decl(C_default_stub_toplevel)
C_externexport void C_ccall C_default_stub_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_12)
static void C_ccall f_12(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_15)
static void C_ccall f_15(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_18)
static void C_ccall f_18(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_23)
static void C_fcall f_23(C_word t0,C_word t1) C_noret;
C_noret_decl(f_27)
static void C_ccall f_27(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_21)
static void C_ccall f_21(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_23)
static void C_fcall trf_23(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_23(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_23(t0,t1);}

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
C_default_stub_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_default_stub_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("default_stub_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(10)){
C_save(t1);
C_rereclaim2(10*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,3);
lf[0]=C_h_intern(&lf[0],14,"return-to-host");
lf[1]=C_static_lambda_info(C_heaptop,6,"(loop)");
lf[2]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,3,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_12,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k10 */
static void C_ccall f_12(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_12,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_15,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k13 in k10 */
static void C_ccall f_15(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_15,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_18,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k16 in k13 in k10 */
static void C_ccall f_18(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_18,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_21,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_23,a[2]=t4,a[3]=lf[1],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_23(t6,t2);}

/* loop in k16 in k13 in k10 */
static void C_fcall f_23(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_23,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_27,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* stub.scm: 41   return-to-host */
t3=*((C_word*)lf[0]+1);
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k25 in loop in k16 in k13 in k10 */
static void C_ccall f_27(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* stub.scm: 41   loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_23(t2,((C_word*)t0)[2]);}

/* k19 in k16 in k13 in k10 */
static void C_ccall f_21(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[8] = {
{"toplevelstub.scm",(void*)C_default_stub_toplevel},
{"f_12stub.scm",(void*)f_12},
{"f_15stub.scm",(void*)f_15},
{"f_18stub.scm",(void*)f_18},
{"f_23stub.scm",(void*)f_23},
{"f_27stub.scm",(void*)f_27},
{"f_21stub.scm",(void*)f_21},
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
