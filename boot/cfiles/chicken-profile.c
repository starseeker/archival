/* Generated from chicken-profile.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:19
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: chicken-profile.scm -output-file chicken-profile.c -quiet -no-trace -optimize-level 2 -include-path .
   used units: library eval extras srfi_1
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_1_toplevel)
C_externimport void C_ccall C_srfi_1_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[91];


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_121)
static void C_ccall f_121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_124)
static void C_ccall f_124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_127)
static void C_ccall f_127(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_130)
static void C_ccall f_130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_805)
static void C_ccall f_805(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_150)
static void C_fcall f_150(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_292)
static void C_fcall f_292(C_word t0,C_word t1) C_noret;
C_noret_decl(f_251)
static void C_ccall f_251(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_244)
static void C_ccall f_244(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_190)
static void C_ccall f_190(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_183)
static void C_fcall f_183(C_word t0) C_noret;
C_noret_decl(f_171)
static void C_fcall f_171(C_word t0) C_noret;
C_noret_decl(f_182)
static void C_ccall f_182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_175)
static void C_ccall f_175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_160)
static void C_fcall f_160(C_word t0,C_word t1) C_noret;
C_noret_decl(f_627)
static void C_ccall f_627(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_784)
static void C_ccall f_784(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_630)
static void C_ccall f_630(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_738)
static void C_ccall f_738(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_763)
static void C_fcall f_763(C_word t0,C_word t1) C_noret;
C_noret_decl(f_736)
static void C_ccall f_736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_633)
static void C_ccall f_633(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_636)
static void C_ccall f_636(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_716)
static void C_ccall f_716(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_720)
static void C_ccall f_720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_724)
static void C_ccall f_724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_728)
static void C_ccall f_728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_732)
static void C_ccall f_732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_639)
static void C_ccall f_639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_642)
static void C_ccall f_642(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_647)
static void C_ccall f_647(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_705)
static void C_ccall f_705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_673)
static void C_ccall f_673(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_701)
static void C_ccall f_701(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_677)
static void C_ccall f_677(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_681)
static void C_ccall f_681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_685)
static void C_ccall f_685(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_689)
static void C_ccall f_689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_795)
static void C_ccall f_795(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_801)
static void C_ccall f_801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_798)
static void C_ccall f_798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_563)
static void C_fcall f_563(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_621)
static void C_ccall f_621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_578)
static void C_ccall f_578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_613)
static void C_ccall f_613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_605)
static void C_ccall f_605(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_601)
static void C_ccall f_601(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_597)
static void C_ccall f_597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_582)
static void C_ccall f_582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_585)
static void C_ccall f_585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_574)
static void C_ccall f_574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_483)
static void C_fcall f_483(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_515)
static void C_fcall f_515(C_word t0,C_word t1) C_noret;
C_noret_decl(f_510)
static void C_fcall f_510(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_485)
static void C_fcall f_485(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_492)
static void C_ccall f_492(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_428)
static void C_ccall f_428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_432)
static void C_ccall f_432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_442)
static void C_ccall f_442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_444)
static void C_fcall f_444(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_473)
static void C_ccall f_473(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_469)
static void C_ccall f_469(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_454)
static void C_ccall f_454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_461)
static void C_ccall f_461(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_435)
static void C_ccall f_435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_405)
static void C_ccall f_405(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_413)
static void C_ccall f_413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_417)
static void C_ccall f_417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_376)
static void C_ccall f_376(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_347)
static void C_ccall f_347(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_318)
static void C_ccall f_318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_135)
static void C_fcall f_135(C_word t0) C_noret;
C_noret_decl(f_139)
static void C_ccall f_139(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_150)
static void C_fcall trf_150(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_150(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_150(t0,t1,t2);}

C_noret_decl(trf_292)
static void C_fcall trf_292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_292(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_292(t0,t1);}

C_noret_decl(trf_183)
static void C_fcall trf_183(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_183(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_183(t0);}

C_noret_decl(trf_171)
static void C_fcall trf_171(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_171(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_171(t0);}

C_noret_decl(trf_160)
static void C_fcall trf_160(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_160(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_160(t0,t1);}

C_noret_decl(trf_763)
static void C_fcall trf_763(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_763(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_763(t0,t1);}

C_noret_decl(trf_563)
static void C_fcall trf_563(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_563(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_563(t0,t1,t2,t3);}

C_noret_decl(trf_483)
static void C_fcall trf_483(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_483(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_483(t0,t1,t2,t3);}

C_noret_decl(trf_515)
static void C_fcall trf_515(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_515(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_515(t0,t1);}

C_noret_decl(trf_510)
static void C_fcall trf_510(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_510(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_510(t0,t1,t2);}

C_noret_decl(trf_485)
static void C_fcall trf_485(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_485(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_485(t0,t1,t2,t3);}

C_noret_decl(trf_444)
static void C_fcall trf_444(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_444(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_444(t0,t1,t2);}

C_noret_decl(trf_135)
static void C_fcall trf_135(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_135(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_135(t0);}

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
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("toplevel"));
C_resize_stack(131072);
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(306)){
C_save(t1);
C_rereclaim2(306*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,91);
lf[4]=C_h_intern(&lf[4],4,"exit");
lf[5]=C_h_intern(&lf[5],7,"display");
lf[6]=C_static_string(C_heaptop,575,"Usage: chicken-profile [FILENAME | OPTION] ...\012\012 -sort-by-calls            sort "
"output by call frequency\012 -sort-by-time             sort output by procedure exe"
"cution time\012 -sort-by-avg              sort output by average procedure executio"
"n time\012 -sort-by-name             sort output alphabetically by procedure name\012 "
"-no-unused                remove procedures that are never called\012 -help        "
"             show this text and exit\012 -version                  show version and"
" exit\012 -release                  show release number and exit\012\012 FILENAME default"
"s to \042PROFILE\042\012");
lf[7]=C_static_lambda_info(C_heaptop,13,"(print-usage)");
lf[9]=C_static_lambda_info(C_heaptop,23,"(sort-by-calls x24 y25)");
lf[11]=C_static_lambda_info(C_heaptop,22,"(sort-by-time x28 y29)");
lf[13]=C_static_lambda_info(C_heaptop,21,"(sort-by-avg x32 y33)");
lf[15]=C_h_intern(&lf[15],8,"string<\077");
lf[16]=C_h_intern(&lf[16],14,"symbol->string");
lf[17]=C_static_lambda_info(C_heaptop,22,"(sort-by-name x36 y37)");
lf[19]=C_h_intern(&lf[19],17,"hash-table->alist");
lf[20]=C_h_intern(&lf[20],4,"read");
lf[21]=C_h_intern(&lf[21],15,"hash-table-set!");
lf[22]=C_h_intern(&lf[22],3,"map");
lf[23]=C_h_intern(&lf[23],1,"+");
lf[24]=C_h_intern(&lf[24],22,"hash-table-ref/default");
tmp=C_fix(0);
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[25]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[26]=C_static_lambda_info(C_heaptop,13,"(do39 line41)");
lf[27]=C_h_intern(&lf[27],15,"make-hash-table");
lf[28]=C_h_intern(&lf[28],3,"eq\077");
lf[29]=C_static_lambda_info(C_heaptop,14,"(read-profile)");
lf[31]=C_h_intern(&lf[31],13,"string-append");
lf[32]=C_h_intern(&lf[32],11,"make-string");
lf[33]=C_static_lambda_info(C_heaptop,23,"(body51 right57 padc58)");
lf[34]=C_static_lambda_info(C_heaptop,23,"(def-padc54 %right4962)");
lf[35]=C_static_lambda_info(C_heaptop,13,"(def-right53)");
lf[36]=C_h_intern(&lf[36],9,"\003syserror");
lf[37]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[38]=C_static_lambda_info(C_heaptop,34,"(format-string str46 cols47 g4548)");
lf[40]=C_static_string(C_heaptop,1,".");
lf[41]=C_h_intern(&lf[41],9,"substring");
lf[42]=C_h_intern(&lf[42],8,"truncate");
lf[43]=C_static_lambda_info(C_heaptop,32,"(format-real n69 cols70 fcols71)");
lf[44]=C_h_intern(&lf[44],25,"\003sysimplicit-exit-handler");
lf[45]=C_h_intern(&lf[45],5,"print");
lf[46]=C_static_string(C_heaptop,1," ");
lf[47]=C_static_string(C_heaptop,1," ");
lf[48]=C_static_string(C_heaptop,1," ");
lf[49]=C_static_string(C_heaptop,1," ");
lf[50]=C_h_intern(&lf[50],28,"\003syssymbol->qualified-string");
lf[51]=C_static_lambda_info(C_heaptop,14,"(a646 entry87)");
lf[52]=C_h_intern(&lf[52],12,"\003sysfor-each");
lf[53]=C_static_string(C_heaptop,1," ");
lf[54]=C_static_string(C_heaptop,1," ");
lf[55]=C_static_string(C_heaptop,1," ");
lf[56]=C_static_string(C_heaptop,1," ");
lf[57]=C_static_string(C_heaptop,7,"percent");
lf[58]=C_static_string(C_heaptop,7,"average");
lf[59]=C_static_string(C_heaptop,7,"seconds");
lf[60]=C_static_string(C_heaptop,5,"calls");
lf[61]=C_static_string(C_heaptop,9,"procedure");
lf[62]=C_h_intern(&lf[62],4,"sort");
lf[63]=C_h_intern(&lf[63],6,"append");
lf[64]=C_static_lambda_info(C_heaptop,10,"(a737 t79)");
lf[65]=C_h_intern(&lf[65],7,"\003sysmap");
lf[66]=C_h_intern(&lf[66],3,"max");
lf[67]=C_static_lambda_info(C_heaptop,19,"(a783 t76 result77)");
lf[68]=C_h_intern(&lf[68],4,"fold");
lf[69]=C_h_intern(&lf[69],20,"with-input-from-file");
lf[70]=C_static_string(C_heaptop,7,"PROFILE");
lf[71]=C_static_string(C_heaptop,26,"chicken-profile - Version ");
lf[72]=C_h_intern(&lf[72],15,"chicken-version");
lf[73]=C_static_lambda_info(C_heaptop,4,"(g9)");
lf[74]=C_static_lambda_info(C_heaptop,4,"(g8)");
lf[75]=C_static_string(C_heaptop,2,"-h");
lf[76]=C_static_string(C_heaptop,5,"-help");
lf[77]=C_static_string(C_heaptop,6,"--help");
lf[78]=C_static_string(C_heaptop,2,"-v");
lf[79]=C_static_string(C_heaptop,8,"-version");
lf[80]=C_static_string(C_heaptop,8,"-release");
lf[81]=C_static_string(C_heaptop,10,"-no-unused");
lf[82]=C_static_string(C_heaptop,14,"-sort-by-calls");
lf[83]=C_static_string(C_heaptop,13,"-sort-by-time");
lf[84]=C_static_string(C_heaptop,12,"-sort-by-avg");
lf[85]=C_static_string(C_heaptop,13,"-sort-by-name");
lf[86]=C_h_intern(&lf[86],5,"error");
lf[87]=C_static_string(C_heaptop,14,"invalid option");
lf[88]=C_static_lambda_info(C_heaptop,12,"(loop args3)");
lf[89]=C_h_intern(&lf[89],22,"command-line-arguments");
lf[90]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,91,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_121,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k119 */
static void C_ccall f_121(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_121,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_124,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k122 in k119 */
static void C_ccall f_124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_124,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_127,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k125 in k122 in k119 */
static void C_ccall f_127(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_127,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_130,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k128 in k125 in k122 in k119 */
static void C_ccall f_130(C_word c,C_word t0,C_word t1){
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
C_word ab[30],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_130,2,t0,t1);}
t2=lf[0]=C_SCHEME_FALSE;;
t3=lf[1]=C_SCHEME_FALSE;;
t4=lf[2]=C_SCHEME_FALSE;;
t5=C_mutate(&lf[3],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_135,a[2]=lf[7],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate(&lf[8],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_318,a[2]=lf[9],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[10],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_347,a[2]=lf[11],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[12],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_376,a[2]=lf[13],tmp=(C_word)a,a+=3,tmp));
t9=C_mutate(&lf[14],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_405,a[2]=lf[17],tmp=(C_word)a,a+=3,tmp));
t10=C_mutate(&lf[0],lf[10]);
t11=C_mutate(&lf[18],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_428,a[2]=lf[29],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[30],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_483,a[2]=lf[38],tmp=(C_word)a,a+=3,tmp));
t13=C_mutate(&lf[39],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_563,a[2]=lf[43],tmp=(C_word)a,a+=3,tmp));
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_795,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_805,a[2]=t14,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm: 187  command-line-arguments */
t16=C_retrieve(lf[89]);
((C_proc2)C_retrieve_proc(t16))(2,t16,t15);}

/* k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_805(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_805,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_150,a[2]=t3,a[3]=lf[88],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_150(t5,((C_word*)t0)[2],t1);}

/* loop in k803 in k128 in k125 in k122 in k119 */
static void C_fcall f_150(C_word t0,C_word t1,C_word t2){
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
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_150,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_160,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(lf[1])){
t4=t3;
f_160(t4,C_SCHEME_UNDEFINED);}
else{
t4=C_mutate(&lf[1],lf[70]);
t5=t3;
f_160(t5,t4);}}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_171,a[2]=lf[73],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_183,a[2]=lf[74],tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_190,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_equalp(t3,lf[75]))){
/* g819 */
f_183(t7);}
else{
if(C_truep((C_word)C_i_equalp(t3,lf[76]))){
/* g819 */
f_183(t7);}
else{
if(C_truep((C_word)C_i_equalp(t3,lf[77]))){
/* g819 */
f_183(t7);}
else{
if(C_truep((C_word)C_i_equalp(t3,lf[78]))){
/* g918 */
f_171(t7);}
else{
if(C_truep((C_word)C_i_equalp(t3,lf[79]))){
/* g918 */
f_171(t7);}
else{
if(C_truep((C_word)C_i_equalp(t3,lf[80]))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_244,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_251,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm: 78   chicken-version */
t10=C_retrieve(lf[72]);
((C_proc2)C_retrieve_proc(t10))(2,t10,t9);}
else{
if(C_truep((C_word)C_i_equalp(t3,lf[81]))){
t8=lf[2]=C_SCHEME_TRUE;;
t9=t7;
f_190(2,t9,t8);}
else{
if(C_truep((C_word)C_i_equalp(t3,lf[82]))){
t8=C_mutate(&lf[0],lf[8]);
t9=t7;
f_190(2,t9,t8);}
else{
if(C_truep((C_word)C_i_equalp(t3,lf[83]))){
t8=C_mutate(&lf[0],lf[10]);
t9=t7;
f_190(2,t9,t8);}
else{
if(C_truep((C_word)C_i_equalp(t3,lf[84]))){
t8=C_mutate(&lf[0],lf[12]);
t9=t7;
f_190(2,t9,t8);}
else{
if(C_truep((C_word)C_i_equalp(t3,lf[85]))){
t8=C_mutate(&lf[0],lf[14]);
t9=t7;
f_190(2,t9,t8);}
else{
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_292,a[2]=t3,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(C_word)C_i_string_length(t3);
if(C_truep((C_word)C_i_greaterp(t9,C_fix(1)))){
t10=(C_word)C_i_string_ref(t3,C_fix(0));
t11=t8;
f_292(t11,(C_word)C_eqp(C_make_character(45),t10));}
else{
t10=t8;
f_292(t10,C_SCHEME_FALSE);}}}}}}}}}}}}}}

/* k290 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_fcall f_292(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
/* error */
t2=*((C_word*)lf[86]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],lf[87],((C_word*)t0)[2]);}
else{
if(C_truep(lf[1])){
/* print-usage */
f_135(((C_word*)t0)[3]);}
else{
t2=C_mutate(&lf[1],((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
f_190(2,t3,t2);}}}

/* k249 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_251(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 78   print */
t2=*((C_word*)lf[45]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k242 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_244(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 79   exit */
t2=C_retrieve(lf[4]);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k188 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_190(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 89   loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_150(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* g8 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_fcall f_183(C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_183,NULL,1,t1);}
/* chicken-profile.scm: 73   print-usage */
f_135(t1);}

/* g9 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_fcall f_171(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_171,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_175,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_182,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm: 75   chicken-version */
t4=C_retrieve(lf[72]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k180 in g9 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 75   print */
t2=*((C_word*)lf[45]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[71],t1);}

/* k173 in g9 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 76   exit */
t2=C_retrieve(lf[4]);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_fcall f_160(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_160,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_627,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm: 143  with-input-from-file */
t4=C_retrieve(lf[69]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[1],lf[18]);}

/* k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_627(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_627,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_630,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_784,a[2]=lf[67],tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm: 144  fold */
t4=C_retrieve(lf[68]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,t3,C_fix(0),t1);}

/* a783 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_784(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_784,4,t0,t1,t2,t3);}
t4=(C_word)C_i_caddr(t2);
/* chicken-profile.scm: 145  max */
t5=*((C_word*)lf[66]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t4,t3);}

/* k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_630(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_630,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_633,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_736,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_738,a[2]=t1,a[3]=lf[64],tmp=(C_word)a,a+=4,tmp);
/* map */
t5=*((C_word*)lf[65]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a737 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_738(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[17],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_738,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
t4=(C_word)C_i_caddr(t2);
t5=(C_word)C_i_greaterp(t3,C_fix(0));
t6=(C_truep(t5)?(C_word)C_a_i_divide(&a,2,t4,t3):C_SCHEME_FALSE);
t7=(C_truep(t6)?t6:C_fix(0));
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_763,a[2]=t2,a[3]=t1,a[4]=t7,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_greaterp(((C_word*)t0)[2],C_fix(0)))){
t9=(C_word)C_a_i_divide(&a,2,t4,((C_word*)t0)[2]);
t10=t8;
f_763(t10,(C_word)C_a_i_times(&a,2,t9,C_fix(100)));}
else{
t9=t8;
f_763(t9,C_SCHEME_FALSE);}}

/* k761 in a737 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_fcall f_763(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_763,NULL,2,t0,t1);}
t2=(C_truep(t1)?t1:C_fix(0));
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t2);
/* chicken-profile.scm: 149  append */
t4=*((C_word*)lf[63]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* k734 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_736(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 148  sort */
t2=C_retrieve(lf[62]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[0]);}

/* k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_633(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_633,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_636,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm: 158  make-string */
t3=*((C_word*)lf[32]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_fix(79),C_make_character(45));}

/* k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_636(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_636,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_639,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_716,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm: 159  format-string */
f_483(t3,lf[61],C_fix(38),C_SCHEME_END_OF_LIST);}

/* k714 in k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_716(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_716,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_720,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm: 161  format-string */
f_483(t2,lf[60],C_fix(9),(C_word)C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k718 in k714 in k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_720,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_724,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken-profile.scm: 163  format-string */
f_483(t2,lf[59],C_fix(9),(C_word)C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k722 in k718 in k714 in k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_724,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_728,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken-profile.scm: 165  format-string */
f_483(t2,lf[58],C_fix(9),(C_word)C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k726 in k722 in k718 in k714 in k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_728,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_732,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm: 167  format-string */
f_483(t2,lf[57],C_fix(8),(C_word)C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k730 in k726 in k722 in k718 in k714 in k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 159  print */
t2=*((C_word*)lf[45]+1);
((C_proc11)C_retrieve_proc(t2))(11,t2,((C_word*)t0)[6],((C_word*)t0)[5],lf[53],((C_word*)t0)[4],lf[54],((C_word*)t0)[3],lf[55],((C_word*)t0)[2],lf[56],t1);}

/* k637 in k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_639,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_642,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm: 168  print */
t3=*((C_word*)lf[45]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k640 in k637 in k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_642(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_642,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_647,a[2]=lf[51],tmp=(C_word)a,a+=3,tmp);
/* for-each */
t3=*((C_word*)lf[52]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* a646 in k640 in k637 in k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_647(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[10],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_647,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
t4=(C_word)C_i_caddr(t2);
t5=(C_word)C_i_cadddr(t2);
t6=(C_word)C_i_list_ref(t2,C_fix(4));
t7=(C_word)C_i_zerop(t3);
t8=(C_truep(t7)?lf[2]:C_SCHEME_FALSE);
if(C_truep(t8)){
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,C_SCHEME_UNDEFINED);}
else{
t9=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_673,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=t6,a[6]=t1,tmp=(C_word)a,a+=7,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_705,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=(C_word)C_i_car(t2);
/* chicken-profile.scm: 176  ##sys#symbol->qualified-string */
t12=C_retrieve(lf[50]);
((C_proc3)C_retrieve_proc(t12))(3,t12,t10,t11);}}

/* k703 in a646 in k640 in k637 in k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 176  format-string */
f_483(((C_word*)t0)[2],t1,C_fix(38),C_SCHEME_END_OF_LIST);}

/* k671 in a646 in k640 in k637 in k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_673(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_673,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_677,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t1,a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_701,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm: 178  number->string */
C_number_to_string(3,0,t3,((C_word*)t0)[2]);}

/* k699 in k671 in a646 in k640 in k637 in k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_701(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_701,2,t0,t1);}
/* chicken-profile.scm: 178  format-string */
f_483(((C_word*)t0)[2],t1,C_fix(9),(C_word)C_a_i_list(&a,1,C_SCHEME_TRUE));}

/* k675 in k671 in a646 in k640 in k637 in k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_677(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_677,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_681,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_a_i_divide(&a,2,((C_word*)t0)[2],C_fix(1000));
/* chicken-profile.scm: 180  format-real */
f_563(t2,t3,C_fix(9),C_fix(3));}

/* k679 in k675 in k671 in a646 in k640 in k637 in k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_681,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_685,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_a_i_divide(&a,2,((C_word*)t0)[2],C_fix(1000));
/* chicken-profile.scm: 182  format-real */
f_563(t2,t3,C_fix(9),C_fix(3));}

/* k683 in k679 in k675 in k671 in a646 in k640 in k637 in k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_685(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_685,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_689,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken-profile.scm: 184  format-real */
f_563(t2,((C_word*)t0)[2],C_fix(8),C_fix(4));}

/* k687 in k683 in k679 in k675 in k671 in a646 in k640 in k637 in k634 in k631 in k628 in k625 in k158 in loop in k803 in k128 in k125 in k122 in k119 */
static void C_ccall f_689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 176  print */
t2=*((C_word*)lf[45]+1);
((C_proc11)C_retrieve_proc(t2))(11,t2,((C_word*)t0)[6],((C_word*)t0)[5],lf[46],((C_word*)t0)[4],lf[47],((C_word*)t0)[3],lf[48],((C_word*)t0)[2],lf[49],t1);}

/* k793 in k128 in k125 in k122 in k119 */
static void C_ccall f_795(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_795,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_798,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_801,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
t4=C_retrieve(lf[44]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k799 in k793 in k128 in k125 in k122 in k119 */
static void C_ccall f_801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k796 in k793 in k128 in k125 in k122 in k119 */
static void C_ccall f_798(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* format-real in k128 in k125 in k122 in k119 */
static void C_fcall f_563(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[16],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_563,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_a_i_abs(&a,1,t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_574,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_578,a[2]=t5,a[3]=t4,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_621,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm: 136  truncate */
t9=*((C_word*)lf[42]+1);
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t2);}

/* k619 in format-real in k128 in k125 in k122 in k119 */
static void C_ccall f_621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_inexact_to_exact(t1);
/* chicken-profile.scm: 136  number->string */
C_number_to_string(3,0,((C_word*)t0)[2],t2);}

/* k576 in format-real in k128 in k125 in k122 in k119 */
static void C_ccall f_578(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_578,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_582,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_597,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_601,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_605,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_613,a[2]=t5,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm: 138  truncate */
t7=*((C_word*)lf[42]+1);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[2]);}

/* k611 in k576 in format-real in k128 in k125 in k122 in k119 */
static void C_ccall f_613(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_613,2,t0,t1);}
t2=(C_word)C_a_i_minus(&a,2,((C_word*)t0)[3],t1);
/* chicken-profile.scm: 138  exact->inexact */
C_exact_to_inexact(3,0,((C_word*)t0)[2],t2);}

/* k603 in k576 in format-real in k128 in k125 in k122 in k119 */
static void C_ccall f_605(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 138  number->string */
C_number_to_string(3,0,((C_word*)t0)[2],t1);}

/* k599 in k576 in format-real in k128 in k125 in k122 in k119 */
static void C_ccall f_601(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 138  substring */
t2=*((C_word*)lf[41]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_fix(2));}

/* k595 in k576 in format-real in k128 in k125 in k122 in k119 */
static void C_ccall f_597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_597,2,t0,t1);}
/* chicken-profile.scm: 138  format-string */
f_483(((C_word*)t0)[3],t1,((C_word*)t0)[2],(C_word)C_a_i_list(&a,2,C_SCHEME_FALSE,C_make_character(48)));}

/* k580 in k576 in format-real in k128 in k125 in k122 in k119 */
static void C_ccall f_582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_582,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_585,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_string_length(t1);
t4=(C_word)C_i_fixnum_min(t3,((C_word*)t0)[2]);
/* chicken-profile.scm: 139  substring */
t5=*((C_word*)lf[41]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t2,t1,C_fix(0),t4);}

/* k583 in k580 in k576 in format-real in k128 in k125 in k122 in k119 */
static void C_ccall f_585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 135  string-append */
t2=*((C_word*)lf[31]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],((C_word*)t0)[2],lf[40],t1);}

/* k572 in format-real in k128 in k125 in k122 in k119 */
static void C_ccall f_574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_574,2,t0,t1);}
/* chicken-profile.scm: 134  format-string */
f_483(((C_word*)t0)[3],t1,((C_word*)t0)[2],(C_word)C_a_i_list(&a,2,C_SCHEME_TRUE,C_make_character(32)));}

/* format-string in k128 in k125 in k122 in k119 */
static void C_fcall f_483(C_word t1,C_word t2,C_word t3,C_word t4){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_483,NULL,4,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_485,a[2]=t3,a[3]=t2,a[4]=lf[33],tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_510,a[2]=t5,a[3]=lf[34],tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_515,a[2]=t6,a[3]=lf[35],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
/* def-right5363 */
t8=t7;
f_515(t8,t1);}
else{
t8=(C_word)C_i_car(t4);
t9=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t9))){
/* def-padc5461 */
t10=t6;
f_510(t10,t1,t8);}
else{
t10=(C_word)C_i_car(t9);
t11=(C_word)C_i_cdr(t9);
if(C_truep((C_word)C_i_nullp(t11))){
/* body5156 */
t12=t5;
f_485(t12,t1,t8,t10);}
else{
/* ##sys#error */
t12=*((C_word*)lf[36]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t1,lf[37],t11);}}}}

/* def-right53 in format-string in k128 in k125 in k122 in k119 */
static void C_fcall f_515(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_515,NULL,2,t0,t1);}
/* def-padc5461 */
t2=((C_word*)t0)[2];
f_510(t2,t1,C_SCHEME_FALSE);}

/* def-padc54 in format-string in k128 in k125 in k122 in k119 */
static void C_fcall f_510(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_510,NULL,3,t0,t1,t2);}
/* body5156 */
t3=((C_word*)t0)[2];
f_485(t3,t1,t2,C_make_character(32));}

/* body51 in format-string in k128 in k125 in k122 in k119 */
static void C_fcall f_485(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_485,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_i_string_length(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_492,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_fixnum_difference(((C_word*)t0)[2],t4);
t7=(C_word)C_i_fixnum_max(C_fix(0),t6);
/* chicken-profile.scm: 127  make-string */
t8=*((C_word*)lf[32]+1);
((C_proc4)C_retrieve_proc(t8))(4,t8,t5,t7,t3);}

/* k490 in body51 in format-string in k128 in k125 in k122 in k119 */
static void C_ccall f_492(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(((C_word*)t0)[4])){
/* chicken-profile.scm: 129  string-append */
t2=*((C_word*)lf[31]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}
else{
/* chicken-profile.scm: 130  string-append */
t2=*((C_word*)lf[31]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}}

/* read-profile in k128 in k125 in k122 in k119 */
static void C_ccall f_428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_428,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_432,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm: 118  make-hash-table */
t3=C_retrieve(lf[27]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,*((C_word*)lf[28]+1));}

/* k430 in read-profile in k128 in k125 in k122 in k119 */
static void C_ccall f_432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_432,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_435,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_442,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm: 119  read */
t4=*((C_word*)lf[20]+1);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k440 in k430 in read-profile in k128 in k125 in k122 in k119 */
static void C_ccall f_442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_442,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_444,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=lf[26],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_444(t5,((C_word*)t0)[2],t1);}

/* do39 in k440 in k430 in read-profile in k128 in k125 in k122 in k119 */
static void C_fcall f_444(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_444,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_eofp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_454,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_469,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_473,a[2]=t5,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_i_car(t2);
/* chicken-profile.scm: 122  hash-table-ref/default */
t8=C_retrieve(lf[24]);
((C_proc5)C_retrieve_proc(t8))(5,t8,t6,((C_word*)t0)[2],t7,lf[25]);}}

/* k471 in do39 in k440 in k430 in read-profile in k128 in k125 in k122 in k119 */
static void C_ccall f_473(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* chicken-profile.scm: 122  map */
t3=*((C_word*)lf[22]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,((C_word*)t0)[2],*((C_word*)lf[23]+1),t1,t2);}

/* k467 in do39 in k440 in k430 in read-profile in k128 in k125 in k122 in k119 */
static void C_ccall f_469(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 121  hash-table-set! */
t2=C_retrieve(lf[21]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k452 in do39 in k440 in k430 in read-profile in k128 in k125 in k122 in k119 */
static void C_ccall f_454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_454,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_461,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken-profile.scm: 119  read */
t3=*((C_word*)lf[20]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k459 in k452 in do39 in k440 in k430 in read-profile in k128 in k125 in k122 in k119 */
static void C_ccall f_461(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)((C_word*)t0)[3])[1];
f_444(t2,((C_word*)t0)[2],t1);}

/* k433 in k430 in read-profile in k128 in k125 in k122 in k119 */
static void C_ccall f_435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 123  hash-table->alist */
t2=C_retrieve(lf[19]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* sort-by-name in k128 in k125 in k122 in k119 */
static void C_ccall f_405(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_405,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_413,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_car(t2);
/* chicken-profile.scm: 113  symbol->string */
t6=*((C_word*)lf[16]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}

/* k411 in sort-by-name in k128 in k125 in k122 in k119 */
static void C_ccall f_413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_417,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)t0)[2]);
/* chicken-profile.scm: 113  symbol->string */
t4=*((C_word*)lf[16]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t2,t3);}

/* k415 in k411 in sort-by-name in k128 in k125 in k122 in k119 */
static void C_ccall f_417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 113  string<? */
t2=*((C_word*)lf[15]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* sort-by-avg in k128 in k125 in k122 in k119 */
static void C_ccall f_376(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_376,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cadddr(t2);
t5=(C_word)C_i_cadddr(t3);
if(C_truep((C_word)C_i_nequalp(t4,t5))){
t6=(C_word)C_i_caddr(t2);
t7=(C_word)C_i_caddr(t3);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_greaterp(t6,t7));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_greaterp(t4,t5));}}

/* sort-by-time in k128 in k125 in k122 in k119 */
static void C_ccall f_347(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_347,4,t0,t1,t2,t3);}
t4=(C_word)C_i_caddr(t2);
t5=(C_word)C_i_caddr(t3);
if(C_truep((C_word)C_i_nequalp(t4,t5))){
t6=(C_word)C_i_cadr(t2);
t7=(C_word)C_i_cadr(t3);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_greaterp(t6,t7));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_greaterp(t4,t5));}}

/* sort-by-calls in k128 in k125 in k122 in k119 */
static void C_ccall f_318(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_318,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cadr(t2);
t5=(C_word)C_i_cadr(t3);
if(C_truep((C_word)C_i_nequalp(t4,t5))){
t6=(C_word)C_i_caddr(t2);
t7=(C_word)C_i_caddr(t3);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_i_greaterp(t6,t7));}
else{
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_i_greaterp(t4,t5));}}

/* print-usage in k128 in k125 in k122 in k119 */
static void C_fcall f_135(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_135,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_139,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken-profile.scm: 46   display */
t3=*((C_word*)lf[5]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[6]);}

/* k137 in print-usage in k128 in k125 in k122 in k119 */
static void C_ccall f_139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken-profile.scm: 62   exit */
t2=C_retrieve(lf[4]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_fix(64));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[75] = {
{"toplevelchicken-profile.scm",(void*)C_toplevel},
{"f_121chicken-profile.scm",(void*)f_121},
{"f_124chicken-profile.scm",(void*)f_124},
{"f_127chicken-profile.scm",(void*)f_127},
{"f_130chicken-profile.scm",(void*)f_130},
{"f_805chicken-profile.scm",(void*)f_805},
{"f_150chicken-profile.scm",(void*)f_150},
{"f_292chicken-profile.scm",(void*)f_292},
{"f_251chicken-profile.scm",(void*)f_251},
{"f_244chicken-profile.scm",(void*)f_244},
{"f_190chicken-profile.scm",(void*)f_190},
{"f_183chicken-profile.scm",(void*)f_183},
{"f_171chicken-profile.scm",(void*)f_171},
{"f_182chicken-profile.scm",(void*)f_182},
{"f_175chicken-profile.scm",(void*)f_175},
{"f_160chicken-profile.scm",(void*)f_160},
{"f_627chicken-profile.scm",(void*)f_627},
{"f_784chicken-profile.scm",(void*)f_784},
{"f_630chicken-profile.scm",(void*)f_630},
{"f_738chicken-profile.scm",(void*)f_738},
{"f_763chicken-profile.scm",(void*)f_763},
{"f_736chicken-profile.scm",(void*)f_736},
{"f_633chicken-profile.scm",(void*)f_633},
{"f_636chicken-profile.scm",(void*)f_636},
{"f_716chicken-profile.scm",(void*)f_716},
{"f_720chicken-profile.scm",(void*)f_720},
{"f_724chicken-profile.scm",(void*)f_724},
{"f_728chicken-profile.scm",(void*)f_728},
{"f_732chicken-profile.scm",(void*)f_732},
{"f_639chicken-profile.scm",(void*)f_639},
{"f_642chicken-profile.scm",(void*)f_642},
{"f_647chicken-profile.scm",(void*)f_647},
{"f_705chicken-profile.scm",(void*)f_705},
{"f_673chicken-profile.scm",(void*)f_673},
{"f_701chicken-profile.scm",(void*)f_701},
{"f_677chicken-profile.scm",(void*)f_677},
{"f_681chicken-profile.scm",(void*)f_681},
{"f_685chicken-profile.scm",(void*)f_685},
{"f_689chicken-profile.scm",(void*)f_689},
{"f_795chicken-profile.scm",(void*)f_795},
{"f_801chicken-profile.scm",(void*)f_801},
{"f_798chicken-profile.scm",(void*)f_798},
{"f_563chicken-profile.scm",(void*)f_563},
{"f_621chicken-profile.scm",(void*)f_621},
{"f_578chicken-profile.scm",(void*)f_578},
{"f_613chicken-profile.scm",(void*)f_613},
{"f_605chicken-profile.scm",(void*)f_605},
{"f_601chicken-profile.scm",(void*)f_601},
{"f_597chicken-profile.scm",(void*)f_597},
{"f_582chicken-profile.scm",(void*)f_582},
{"f_585chicken-profile.scm",(void*)f_585},
{"f_574chicken-profile.scm",(void*)f_574},
{"f_483chicken-profile.scm",(void*)f_483},
{"f_515chicken-profile.scm",(void*)f_515},
{"f_510chicken-profile.scm",(void*)f_510},
{"f_485chicken-profile.scm",(void*)f_485},
{"f_492chicken-profile.scm",(void*)f_492},
{"f_428chicken-profile.scm",(void*)f_428},
{"f_432chicken-profile.scm",(void*)f_432},
{"f_442chicken-profile.scm",(void*)f_442},
{"f_444chicken-profile.scm",(void*)f_444},
{"f_473chicken-profile.scm",(void*)f_473},
{"f_469chicken-profile.scm",(void*)f_469},
{"f_454chicken-profile.scm",(void*)f_454},
{"f_461chicken-profile.scm",(void*)f_461},
{"f_435chicken-profile.scm",(void*)f_435},
{"f_405chicken-profile.scm",(void*)f_405},
{"f_413chicken-profile.scm",(void*)f_413},
{"f_417chicken-profile.scm",(void*)f_417},
{"f_376chicken-profile.scm",(void*)f_376},
{"f_347chicken-profile.scm",(void*)f_347},
{"f_318chicken-profile.scm",(void*)f_318},
{"f_135chicken-profile.scm",(void*)f_135},
{"f_139chicken-profile.scm",(void*)f_139},
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
