/* Generated from profiler.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:14
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: profiler.scm -output-file profiler.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: profiler
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[27];


C_noret_decl(C_profiler_toplevel)
C_externexport void C_ccall C_profiler_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_230)
static void C_ccall f_230(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_236)
static void C_ccall f_236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_242)
static void C_ccall f_242(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_251)
static void C_fcall f_251(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_261)
static void C_ccall f_261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_264)
static void C_ccall f_264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_267)
static void C_ccall f_267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_270)
static void C_ccall f_270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_273)
static void C_ccall f_273(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_276)
static void C_ccall f_276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_279)
static void C_ccall f_279(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_282)
static void C_ccall f_282(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_173)
static void C_ccall f_173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_124)
static void C_ccall f_124(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_146)
static void C_fcall f_146(C_word t0,C_word t1) C_noret;
C_noret_decl(f_114)
static void C_ccall f_114(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_66)
static void C_ccall f_66(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_85)
static void C_ccall f_85(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_88)
static void C_ccall f_88(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_105)
static void C_ccall f_105(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_105)
static void C_ccall f_105r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_109)
static void C_ccall f_109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_91)
static void C_ccall f_91(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_96)
static void C_ccall f_96(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_100)
static void C_ccall f_100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_70)
static void C_ccall f_70(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_73)
static void C_ccall f_73(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_251)
static void C_fcall trf_251(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_251(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_251(t0,t1,t2);}

C_noret_decl(trf_146)
static void C_fcall trf_146(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_146(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_146(t0,t1);}

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

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_profiler_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_profiler_toplevel(C_word c,C_word t0,C_word t1){
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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("profiler_toplevel"));
C_check_nursery_minimum(19);
if(!C_demand(19)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(143)){
C_save(t1);
C_rereclaim2(143*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(19);
C_initialize_lf(lf,27);
lf[2]=C_h_intern(&lf[2],23,"\003sysprofile-append-mode");
lf[3]=C_h_intern(&lf[3],11,"make-vector");
lf[4]=C_h_intern(&lf[4],25,"\003sysregister-profile-info");
lf[5]=C_h_intern(&lf[5],18,"\003sysfinish-profile");
lf[6]=C_static_lambda_info(C_heaptop,5,"(a95)");
lf[7]=C_h_intern(&lf[7],25,"\003sysimplicit-exit-handler");
lf[8]=C_static_lambda_info(C_heaptop,14,"(a104 . args5)");
lf[9]=C_h_intern(&lf[9],16,"\003sysexit-handler");
lf[10]=C_static_lambda_info(C_heaptop,45,"(##sys#register-profile-info size1 filename2)");
lf[11]=C_h_intern(&lf[11],28,"\003sysset-profile-info-vector!");
lf[12]=C_static_lambda_info(C_heaptop,46,"(##sys#set-profile-info-vector! vec13 i14 x15)");
lf[13]=C_h_intern(&lf[13],17,"\003sysprofile-entry");
lf[14]=C_static_lambda_info(C_heaptop,35,"(##sys#profile-entry index16 vec17)");
lf[15]=C_h_intern(&lf[15],16,"\003sysprofile-exit");
lf[16]=C_static_lambda_info(C_heaptop,34,"(##sys#profile-exit index25 vec26)");
lf[17]=C_h_intern(&lf[17],19,"with-output-to-file");
lf[18]=C_h_intern(&lf[18],10,"write-char");
lf[19]=C_h_intern(&lf[19],5,"write");
lf[20]=C_static_lambda_info(C_heaptop,10,"(do39 i41)");
lf[21]=C_static_lambda_info(C_heaptop,12,"(a241 vec37)");
lf[22]=C_h_intern(&lf[22],12,"\003sysfor-each");
lf[23]=C_static_lambda_info(C_heaptop,6,"(a235)");
tmp=C_intern(C_heaptop,7,"\000append");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[24]=C_h_pair(C_restore,tmp);
lf[25]=C_static_lambda_info(C_heaptop,22,"(##sys#finish-profile)");
lf[26]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,27,create_ptable());
t2=lf[0]=C_SCHEME_END_OF_LIST;;
t3=lf[1]=C_SCHEME_FALSE;;
t4=C_set_block_item(lf[2],0,C_SCHEME_FALSE);
t5=*((C_word*)lf[3]+1);
t6=C_mutate((C_word*)lf[4]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_66,a[2]=t5,a[3]=lf[10],tmp=(C_word)a,a+=4,tmp));
t7=C_mutate((C_word*)lf[11]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_114,a[2]=lf[12],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate((C_word*)lf[13]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_124,a[2]=lf[14],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate((C_word*)lf[15]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_173,a[2]=lf[16],tmp=(C_word)a,a+=3,tmp));
t10=*((C_word*)lf[17]+1);
t11=*((C_word*)lf[18]+1);
t12=*((C_word*)lf[19]+1);
t13=C_mutate((C_word*)lf[5]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_230,a[2]=t10,a[3]=t12,a[4]=t11,a[5]=lf[25],tmp=(C_word)a,a+=6,tmp));
t14=t1;
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,C_SCHEME_UNDEFINED);}

/* ##sys#finish-profile */
static void C_ccall f_230(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_230,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_236,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[23],tmp=(C_word)a,a+=5,tmp);
t3=(C_truep(*((C_word*)lf[2]+1))?lf[24]:C_SCHEME_END_OF_LIST);
C_apply(6,0,t1,((C_word*)t0)[2],lf[1],t2,t3);}

/* a235 in ##sys#finish-profile */
static void C_ccall f_236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_236,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_242,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=lf[21],tmp=(C_word)a,a+=5,tmp);
/* for-each */
t3=*((C_word*)lf[22]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t1,t2,lf[0]);}

/* a241 in a235 in ##sys#finish-profile */
static void C_ccall f_242(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_242,3,t0,t1,t2);}
t3=(C_word)C_block_size(t2);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_251,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t5,a[6]=t3,a[7]=lf[20],tmp=(C_word)a,a+=8,tmp));
t7=((C_word*)t5)[1];
f_251(t7,t1,C_fix(0));}

/* do39 in a241 in a235 in ##sys#finish-profile */
static void C_fcall f_251(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_251,NULL,3,t0,t1,t2);}
t3=t2;
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[6]))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_UNDEFINED);}
else{
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_261,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* profiler.scm: 128  write-char */
t5=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,C_make_character(40));}}

/* k259 in do39 in a241 in a235 in ##sys#finish-profile */
static void C_ccall f_261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_slot(((C_word*)t0)[3],((C_word*)t0)[7]);
/* profiler.scm: 129  write */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* k262 in k259 in do39 in a241 in a235 in ##sys#finish-profile */
static void C_ccall f_264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_267,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* profiler.scm: 130  write-char */
t3=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(32));}

/* k265 in k262 in k259 in do39 in a241 in a235 in ##sys#finish-profile */
static void C_ccall f_267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_267,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_270,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_fixnum_increase(((C_word*)t0)[7]);
t4=(C_word)C_slot(((C_word*)t0)[3],t3);
/* profiler.scm: 131  write */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t2,t4);}

/* k268 in k265 in k262 in k259 in do39 in a241 in a235 in ##sys#finish-profile */
static void C_ccall f_270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_270,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_273,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* profiler.scm: 132  write-char */
t3=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(32));}

/* k271 in k268 in k265 in k262 in k259 in do39 in a241 in a235 in ##sys#finish-profile */
static void C_ccall f_273(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_273,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_276,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[7],C_fix(3));
t4=(C_word)C_slot(((C_word*)t0)[3],t3);
/* profiler.scm: 133  write */
t5=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t5))(3,t5,t2,t4);}

/* k274 in k271 in k268 in k265 in k262 in k259 in do39 in a241 in a235 in ##sys#finish-profile */
static void C_ccall f_276(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_276,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_279,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* profiler.scm: 134  write-char */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(41));}

/* k277 in k274 in k271 in k268 in k265 in k262 in k259 in do39 in a241 in a235 in ##sys#finish-profile */
static void C_ccall f_279(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_279,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_282,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* profiler.scm: 135  write-char */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,C_make_character(10));}

/* k280 in k277 in k274 in k271 in k268 in k265 in k262 in k259 in do39 in a241 in a235 in ##sys#finish-profile */
static void C_ccall f_282(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(5));
t3=((C_word*)((C_word*)t0)[3])[1];
f_251(t3,((C_word*)t0)[2],t2);}

/* ##sys#profile-exit */
static void C_ccall f_173(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_173,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_times(t2,C_fix(5));
t5=(C_word)C_fixnum_plus(t4,C_fix(2));
t6=(C_word)C_fixnum_plus(t4,C_fix(3));
t7=(C_word)C_fixnum_plus(t4,C_fix(4));
t8=(C_word)C_slot(t3,t7);
t9=(C_word)C_fixnum_decrease(t8);
t10=(C_word)C_i_set_i_slot(t3,t7,t9);
t11=(C_word)C_eqp(t9,C_fix(0));
if(C_truep(t11)){
t12=(C_word)C_slot(t3,t6);
t13=(C_word)C_fudge(C_fix(6));
t14=(C_word)C_slot(t3,t5);
t15=(C_word)C_fixnum_difference(t13,t14);
t16=(C_word)C_fixnum_plus(t12,t15);
t17=(C_word)C_i_set_i_slot(t3,t6,t16);
t18=t1;
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,(C_word)C_i_set_i_slot(t3,t5,C_fix(0)));}
else{
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,C_SCHEME_UNDEFINED);}}

/* ##sys#profile-entry */
static void C_ccall f_124(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_124,4,t0,t1,t2,t3);}
t4=(C_word)C_fixnum_times(t2,C_fix(5));
t5=(C_word)C_fixnum_increase(t4);
t6=(C_word)C_fixnum_plus(t4,C_fix(2));
t7=(C_word)C_fixnum_plus(t4,C_fix(4));
t8=(C_word)C_slot(t3,t7);
t9=(C_word)C_slot(t3,t5);
t10=(C_word)C_fixnum_increase(t9);
t11=(C_word)C_i_set_i_slot(t3,t5,t10);
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_146,a[2]=t7,a[3]=t3,a[4]=t1,a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t13=(C_word)C_eqp(t8,C_fix(0));
if(C_truep(t13)){
t14=(C_word)C_fudge(C_fix(6));
t15=t12;
f_146(t15,(C_word)C_i_set_i_slot(t3,t6,t14));}
else{
t14=t12;
f_146(t14,C_SCHEME_UNDEFINED);}}

/* k144 in ##sys#profile-entry */
static void C_fcall f_146(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_increase(((C_word*)t0)[5]);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_set_i_slot(((C_word*)t0)[3],((C_word*)t0)[2],t2));}

/* ##sys#set-profile-info-vector! */
static void C_ccall f_114(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_114,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_fixnum_times(t3,C_fix(5));
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_setslot(t2,t5,t4));}

/* ##sys#register-profile-info */
static void C_ccall f_66(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_66,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_70,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t3)){
t5=C_mutate(&lf[1],t3);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_85,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* profiler.scm: 69   ##sys#exit-handler */
t7=*((C_word*)lf[9]+1);
((C_proc2)C_retrieve_proc(t7))(2,t7,t6);}
else{
t5=t4;
f_70(2,t5,C_SCHEME_UNDEFINED);}}

/* k83 in ##sys#register-profile-info */
static void C_ccall f_85(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_85,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_88,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* profiler.scm: 70   ##sys#implicit-exit-handler */
t3=*((C_word*)lf[7]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k86 in k83 in ##sys#register-profile-info */
static void C_ccall f_88(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_88,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_91,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_105,a[2]=((C_word*)t0)[2],a[3]=lf[8],tmp=(C_word)a,a+=4,tmp);
/* profiler.scm: 71   ##sys#exit-handler */
t4=*((C_word*)lf[9]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* a104 in k86 in k83 in ##sys#register-profile-info */
static void C_ccall f_105(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr2r,(void*)f_105r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_105r(t0,t1,t2);}}

static void C_ccall f_105r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(5);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_109,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* profiler.scm: 73   ##sys#finish-profile */
t4=*((C_word*)lf[5]+1);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k107 in a104 in k86 in k83 in ##sys#register-profile-info */
static void C_ccall f_109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k89 in k86 in k83 in ##sys#register-profile-info */
static void C_ccall f_91(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_91,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_96,a[2]=((C_word*)t0)[3],a[3]=lf[6],tmp=(C_word)a,a+=4,tmp);
/* profiler.scm: 75   ##sys#implicit-exit-handler */
t3=*((C_word*)lf[7]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}

/* a95 in k89 in k86 in k83 in ##sys#register-profile-info */
static void C_ccall f_96(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_96,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_100,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* profiler.scm: 77   ##sys#finish-profile */
t3=*((C_word*)lf[5]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k98 in a95 in k89 in k86 in k83 in ##sys#register-profile-info */
static void C_ccall f_100(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* profiler.scm: 78   oldieh */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k68 in ##sys#register-profile-info */
static void C_ccall f_70(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_70,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_73,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_fixnum_times(((C_word*)t0)[3],C_fix(5));
/* profiler.scm: 80   make-vector */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,C_fix(0));}

/* k71 in k68 in ##sys#register-profile-info */
static void C_ccall f_73(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_73,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,lf[0]);
t3=C_mutate(&lf[0],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t1);}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[28] = {
{"toplevelprofiler.scm",(void*)C_profiler_toplevel},
{"f_230profiler.scm",(void*)f_230},
{"f_236profiler.scm",(void*)f_236},
{"f_242profiler.scm",(void*)f_242},
{"f_251profiler.scm",(void*)f_251},
{"f_261profiler.scm",(void*)f_261},
{"f_264profiler.scm",(void*)f_264},
{"f_267profiler.scm",(void*)f_267},
{"f_270profiler.scm",(void*)f_270},
{"f_273profiler.scm",(void*)f_273},
{"f_276profiler.scm",(void*)f_276},
{"f_279profiler.scm",(void*)f_279},
{"f_282profiler.scm",(void*)f_282},
{"f_173profiler.scm",(void*)f_173},
{"f_124profiler.scm",(void*)f_124},
{"f_146profiler.scm",(void*)f_146},
{"f_114profiler.scm",(void*)f_114},
{"f_66profiler.scm",(void*)f_66},
{"f_85profiler.scm",(void*)f_85},
{"f_88profiler.scm",(void*)f_88},
{"f_105profiler.scm",(void*)f_105},
{"f_109profiler.scm",(void*)f_109},
{"f_91profiler.scm",(void*)f_91},
{"f_96profiler.scm",(void*)f_96},
{"f_100profiler.scm",(void*)f_100},
{"f_70profiler.scm",(void*)f_70},
{"f_73profiler.scm",(void*)f_73},
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
