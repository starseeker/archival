/* Generated from regex.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:14
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: regex.scm -output-file uregex.c -quiet -no-trace -optimize-level 2 -include-path . -no-lambda-info -unsafe -feature unsafe -explicit-use
   unit: regex
*/

#include "chicken.h"

#include "pcre/pcre.h"

#define C_REGEX_OVECTOR_SIZE         256

static const char *C_regex_error;
static int C_regex_error_offset;
static int C_regex_ovector[ C_REGEX_OVECTOR_SIZE * 2 ];

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[54];


/* from k522 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub60(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub60(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * buffer=(void * )C_c_pointer_or_null(C_a0);
int c;pcre_fullinfo(buffer, NULL, PCRE_INFO_CAPTURECOUNT, &c);return(c);
C_return:
#undef return

return C_r;}

/* from k509 in re-match in k274 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub49(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub49(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * buffer=(void * )C_c_pointer_or_null(C_a0);
char * str=(char * )C_string_or_null(C_a1);
int start=(int )C_unfix(C_a2);
int range=(int )C_unfix(C_a3);
return(pcre_exec(buffer, NULL, str, start + range, start, 0, C_regex_ovector, C_REGEX_OVECTOR_SIZE));
C_return:
#undef return

return C_r;}

/* from re-register-index in k274 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub28(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub28(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
return(C_regex_ovector[ i ]);
C_return:
#undef return

return C_r;}

/* from k291 */
static C_word C_fcall stub10(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub10(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
pcre_free(t0);
return C_r;}

/* from k281 in re-compile-pattern in k274 */
#define return(x) C_cblock C_r = (C_mpointer_or_false(&C_a,(void*)(x))); goto C_return; C_cblockend
static C_word C_fcall stub2(C_word C_buf,C_word C_a0,C_word C_a1) C_regparm;
C_regparm static C_word C_fcall stub2(C_word C_buf,C_word C_a0,C_word C_a1){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
char * rx=(char * )C_string_or_null(C_a0);
unsigned int flags=(unsigned int )C_num_to_unsigned_int(C_a1);
return(pcre_compile(rx, flags, &C_regex_error, &C_regex_error_offset, NULL));
C_return:
#undef return

return C_r;}

C_noret_decl(C_regex_toplevel)
C_externexport void C_ccall C_regex_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_276)
static void C_ccall f_276(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1454)
static void C_ccall f_1454(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1458)
static void C_ccall f_1458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1466)
static void C_fcall f_1466(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1498)
static void C_ccall f_1498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1485)
static void C_ccall f_1485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1488)
static void C_ccall f_1488(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1417)
static void C_ccall f_1417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1423)
static void C_fcall f_1423(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1442)
static void C_ccall f_1442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1449)
static void C_ccall f_1449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1152)
static void C_ccall f_1152(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1164)
static void C_ccall f_1164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1166)
static void C_fcall f_1166(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1412)
static void C_ccall f_1412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1401)
static void C_ccall f_1401(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1224)
static void C_fcall f_1224(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1306)
static void C_fcall f_1306(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1330)
static void C_ccall f_1330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1285)
static void C_ccall f_1285(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1256)
static void C_ccall f_1256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1226)
static void C_fcall f_1226(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1234)
static void C_ccall f_1234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1222)
static void C_ccall f_1222(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1209)
static void C_ccall f_1209(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1196)
static void C_ccall f_1196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1160)
static void C_ccall f_1160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1106)
static void C_ccall f_1106(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1106)
static void C_ccall f_1106r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1115)
static void C_fcall f_1115(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1132)
static void C_ccall f_1132(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_887)
static void C_ccall f_887(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_887)
static void C_ccall f_887r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1020)
static void C_fcall f_1020(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1024)
static void C_ccall f_1024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1094)
static void C_ccall f_1094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1090)
static void C_ccall f_1090(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1073)
static void C_ccall f_1073(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1055)
static void C_ccall f_1055(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1048)
static void C_ccall f_1048(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_914)
static void C_fcall f_914(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_920)
static void C_fcall f_920(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_975)
static void C_ccall f_975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_934)
static void C_ccall f_934(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_899)
static C_word C_fcall f_899(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_708)
static void C_ccall f_708(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_708)
static void C_ccall f_708r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_869)
static void C_ccall f_869(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_868)
static void C_ccall f_868(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_823)
static void C_ccall f_823(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_724)
static void C_fcall f_724(C_word t0,C_word t1) C_noret;
C_noret_decl(f_732)
static void C_fcall f_732(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_736)
static void C_ccall f_736(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_797)
static void C_ccall f_797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_778)
static void C_ccall f_778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_812)
static void C_ccall f_812(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_807)
static void C_ccall f_807(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_699)
static void C_ccall f_699(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_699)
static void C_ccall f_699r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_703)
static void C_ccall f_703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_690)
static void C_ccall f_690(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_690)
static void C_ccall f_690r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_694)
static void C_ccall f_694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_620)
static void C_fcall f_620(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_630)
static void C_fcall f_630(C_word t0,C_word t1) C_noret;
C_noret_decl(f_634)
static void C_ccall f_634(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_641)
static void C_ccall f_641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_644)
static void C_ccall f_644(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_611)
static void C_ccall f_611(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_611)
static void C_ccall f_611r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_615)
static void C_ccall f_615(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_602)
static void C_ccall f_602(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_602)
static void C_ccall f_602r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_606)
static void C_ccall f_606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_529)
static void C_fcall f_529(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_575)
static void C_ccall f_575(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_537)
static void C_ccall f_537(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_544)
static void C_ccall f_544(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_547)
static void C_ccall f_547(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_519)
static C_word C_fcall f_519(C_word t0);
C_noret_decl(f_502)
static void C_fcall f_502(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_511)
static void C_ccall f_511(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_481)
static void C_fcall f_481(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_485)
static void C_ccall f_485(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_493)
static void C_ccall f_493(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_399)
static void C_fcall f_399(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_411)
static void C_fcall f_411(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_445)
static void C_fcall f_445(C_word t0,C_word t1) C_noret;
C_noret_decl(f_449)
static void C_ccall f_449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_431)
static void C_ccall f_431(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_396)
static C_word C_fcall f_396(C_word t0);
C_noret_decl(f_390)
static void C_ccall f_390(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_374)
static void C_ccall f_374(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_374)
static void C_ccall f_374r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_339)
static void C_fcall f_339(C_word t0,C_word t1) C_noret;
C_noret_decl(f_388)
static void C_fcall f_388(C_word t0,C_word t1) C_noret;
C_noret_decl(f_378)
static void C_ccall f_378(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_381)
static void C_ccall f_381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_298)
static void C_fcall f_298(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_302)
static void C_ccall f_302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_316)
static void C_ccall f_316(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_312)
static void C_ccall f_312(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_288)
static void C_ccall f_288(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_278)
static void C_fcall f_278(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_283)
static void C_ccall f_283(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1466)
static void C_fcall trf_1466(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1466(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1466(t0,t1,t2);}

C_noret_decl(trf_1423)
static void C_fcall trf_1423(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1423(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1423(t0,t1,t2);}

C_noret_decl(trf_1166)
static void C_fcall trf_1166(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1166(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1166(t0,t1,t2);}

C_noret_decl(trf_1224)
static void C_fcall trf_1224(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1224(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1224(t0,t1,t2);}

C_noret_decl(trf_1306)
static void C_fcall trf_1306(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1306(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1306(t0,t1);}

C_noret_decl(trf_1226)
static void C_fcall trf_1226(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1226(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1226(t0,t1,t2,t3);}

C_noret_decl(trf_1115)
static void C_fcall trf_1115(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1115(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1115(t0,t1,t2,t3);}

C_noret_decl(trf_1020)
static void C_fcall trf_1020(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1020(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1020(t0,t1,t2,t3);}

C_noret_decl(trf_914)
static void C_fcall trf_914(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_914(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_914(t0,t1,t2);}

C_noret_decl(trf_920)
static void C_fcall trf_920(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_920(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_920(t0,t1,t2,t3);}

C_noret_decl(trf_724)
static void C_fcall trf_724(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_724(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_724(t0,t1);}

C_noret_decl(trf_732)
static void C_fcall trf_732(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_732(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_732(t0,t1,t2,t3);}

C_noret_decl(trf_620)
static void C_fcall trf_620(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_620(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_620(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_630)
static void C_fcall trf_630(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_630(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_630(t0,t1);}

C_noret_decl(trf_529)
static void C_fcall trf_529(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_529(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_529(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_502)
static void C_fcall trf_502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_502(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_502(t0,t1,t2,t3,t4);}

C_noret_decl(trf_481)
static void C_fcall trf_481(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_481(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_481(t0,t1,t2,t3,t4);}

C_noret_decl(trf_399)
static void C_fcall trf_399(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_399(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_399(t0,t1,t2);}

C_noret_decl(trf_411)
static void C_fcall trf_411(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_411(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_411(t0,t1,t2);}

C_noret_decl(trf_445)
static void C_fcall trf_445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_445(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_445(t0,t1);}

C_noret_decl(trf_339)
static void C_fcall trf_339(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_339(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_339(t0,t1);}

C_noret_decl(trf_388)
static void C_fcall trf_388(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_388(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_388(t0,t1);}

C_noret_decl(trf_298)
static void C_fcall trf_298(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_298(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_298(t0,t1,t2);}

C_noret_decl(trf_278)
static void C_fcall trf_278(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_278(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_278(t0,t1,t2);}

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

C_noret_decl(tr5rv)
static void C_fcall tr5rv(C_proc5 k) C_regparm C_noret;
C_regparm static void C_fcall tr5rv(C_proc5 k){
int n;
C_word *a,t5;
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
n=C_rest_count(0);
a=C_alloc(n+1);
t5=C_restore_rest_vector(a,n);
(k)(t0,t1,t2,t3,t4,t5);}

C_noret_decl(tr4rv)
static void C_fcall tr4rv(C_proc4 k) C_regparm C_noret;
C_regparm static void C_fcall tr4rv(C_proc4 k){
int n;
C_word *a,t4;
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
n=C_rest_count(0);
a=C_alloc(n+1);
t4=C_restore_rest_vector(a,n);
(k)(t0,t1,t2,t3,t4);}

/* toplevel */
static C_TLS int toplevel_initialized=0;
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_regex_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_regex_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("regex_toplevel"));
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(370)){
C_save(t1);
C_rereclaim2(370*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,54);
lf[1]=C_h_intern(&lf[1],17,"\003sysmake-c-string");
lf[4]=C_h_intern(&lf[4],9,"\003syserror");
lf[5]=C_h_intern(&lf[5],17,"\003sysstring-append");
lf[6]=C_static_string(C_heaptop,37,"can not compile regular expression - ");
lf[7]=C_h_intern(&lf[7],17,"\003syspeek-c-string");
lf[8]=C_h_intern(&lf[8],6,"regexp");
lf[9]=C_h_intern(&lf[9],14,"set-finalizer!");
lf[10]=C_h_intern(&lf[10],7,"regexp\077");
lf[13]=C_h_intern(&lf[13],9,"substring");
lf[15]=C_h_intern(&lf[15],7,"\003sysmap");
lf[18]=C_h_intern(&lf[18],13,"string-append");
lf[19]=C_static_string(C_heaptop,0,"");
lf[20]=C_static_string(C_heaptop,1,"^");
lf[21]=C_static_string(C_heaptop,1,"$");
lf[22]=C_h_intern(&lf[22],15,"\003syssignal-hook");
lf[23]=C_h_intern(&lf[23],11,"\000type-error");
lf[24]=C_static_string(C_heaptop,51,"bad argument type - not a string or compiled regexp");
lf[25]=C_h_intern(&lf[25],12,"string-match");
lf[26]=C_h_intern(&lf[26],22,"string-match-positions");
lf[27]=C_static_string(C_heaptop,51,"bad argument type - not a string or compiled regexp");
lf[28]=C_h_intern(&lf[28],13,"string-search");
lf[29]=C_h_intern(&lf[29],23,"string-search-positions");
lf[30]=C_h_intern(&lf[30],7,"reverse");
lf[31]=C_h_intern(&lf[31],19,"string-split-fields");
lf[32]=C_h_intern(&lf[32],6,"\000infix");
lf[33]=C_h_intern(&lf[33],7,"\000suffix");
lf[34]=C_static_string(C_heaptop,31,"record does not end with suffix");
lf[35]=C_static_string(C_heaptop,0,"");
lf[36]=C_h_intern(&lf[36],11,"make-string");
lf[37]=C_h_intern(&lf[37],17,"string-substitute");
lf[38]=C_h_intern(&lf[38],21,"\003sysfragments->string");
lf[39]=C_h_intern(&lf[39],18,"string-substitute*");
lf[40]=C_h_intern(&lf[40],12,"list->string");
lf[41]=C_h_intern(&lf[41],12,"string->list");
lf[42]=C_h_intern(&lf[42],12,"glob->regexp");
lf[43]=C_h_intern(&lf[43],5,"error");
lf[44]=C_static_string(C_heaptop,33,"unexpected end of character class");
lf[45]=C_h_intern(&lf[45],15,"\003sysmatch-error");
lf[46]=C_h_intern(&lf[46],4,"grep");
lf[47]=C_h_intern(&lf[47],18,"open-output-string");
lf[48]=C_h_intern(&lf[48],17,"get-output-string");
lf[49]=C_h_intern(&lf[49],13,"regexp-escape");
lf[50]=C_h_intern(&lf[50],16,"\003syswrite-char-0");
lf[51]=C_h_intern(&lf[51],17,"register-feature!");
lf[52]=C_h_intern(&lf[52],5,"regex");
lf[53]=C_h_intern(&lf[53],4,"pcre");
C_register_lf2(lf,54,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_276,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* regex.scm: 87   register-feature! */
t3=*((C_word*)lf[51]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,lf[52],lf[53]);}

/* k274 */
static void C_ccall f_276(C_word c,C_word t0,C_word t1){
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
C_word ab[78],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_276,2,t0,t1);}
t2=C_mutate(&lf[0],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_278,tmp=(C_word)a,a+=2,tmp));
t3=C_mutate(&lf[2],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_288,tmp=(C_word)a,a+=2,tmp));
t4=C_mutate(&lf[3],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_298,tmp=(C_word)a,a+=2,tmp));
t5=C_mutate((C_word*)lf[8]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_374,tmp=(C_word)a,a+=2,tmp));
t6=C_mutate((C_word*)lf[10]+1,(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_390,tmp=(C_word)a,a+=2,tmp));
t7=C_mutate(&lf[11],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_396,tmp=(C_word)a,a+=2,tmp));
t8=C_mutate(&lf[12],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_399,tmp=(C_word)a,a+=2,tmp));
t9=*((C_word*)lf[13]+1);
t10=C_mutate(&lf[14],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_481,a[2]=t9,tmp=(C_word)a,a+=3,tmp));
t11=C_mutate(&lf[16],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_502,tmp=(C_word)a,a+=2,tmp));
t12=C_mutate(&lf[17],(*a=C_CLOSURE_TYPE|1,a[1]=(C_word)f_519,tmp=(C_word)a,a+=2,tmp));
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_FALSE;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=*((C_word*)lf[18]+1);
t18=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_529,a[2]=t17,a[3]=t16,a[4]=t14,tmp=(C_word)a,a+=5,tmp);
t19=C_mutate((C_word*)lf[25]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_602,a[2]=t18,a[3]=t16,tmp=(C_word)a,a+=4,tmp));
t20=C_mutate((C_word*)lf[26]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_611,a[2]=t18,a[3]=t16,tmp=(C_word)a,a+=4,tmp));
t21=C_SCHEME_FALSE;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_FALSE;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_620,a[2]=t24,a[3]=t22,tmp=(C_word)a,a+=4,tmp);
t26=C_mutate((C_word*)lf[28]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_690,a[2]=t25,a[3]=t24,tmp=(C_word)a,a+=4,tmp));
t27=C_mutate((C_word*)lf[29]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_699,a[2]=t25,a[3]=t24,tmp=(C_word)a,a+=4,tmp));
t28=*((C_word*)lf[30]+1);
t29=*((C_word*)lf[13]+1);
t30=*((C_word*)lf[29]+1);
t31=C_mutate((C_word*)lf[31]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_708,a[2]=t28,a[3]=t30,a[4]=t29,tmp=(C_word)a,a+=5,tmp));
t32=*((C_word*)lf[13]+1);
t33=*((C_word*)lf[30]+1);
t34=*((C_word*)lf[36]+1);
t35=*((C_word*)lf[29]+1);
t36=C_mutate((C_word*)lf[37]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_887,a[2]=t35,a[3]=t33,a[4]=t32,tmp=(C_word)a,a+=5,tmp));
t37=*((C_word*)lf[37]+1);
t38=C_mutate((C_word*)lf[39]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1106,a[2]=t37,tmp=(C_word)a,a+=3,tmp));
t39=*((C_word*)lf[40]+1);
t40=*((C_word*)lf[41]+1);
t41=C_mutate((C_word*)lf[42]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1152,a[2]=t40,a[3]=t39,tmp=(C_word)a,a+=4,tmp));
t42=*((C_word*)lf[28]+1);
t43=C_mutate((C_word*)lf[46]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1417,a[2]=t42,tmp=(C_word)a,a+=3,tmp));
t44=*((C_word*)lf[47]+1);
t45=*((C_word*)lf[48]+1);
t46=C_mutate((C_word*)lf[49]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1454,a[2]=t44,a[3]=t45,tmp=(C_word)a,a+=4,tmp));
t47=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t47+1)))(2,t47,C_SCHEME_UNDEFINED);}

/* regexp-escape in k274 */
static void C_ccall f_1454(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1454,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1458,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 395  open-output-string */
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}

/* k1456 in regexp-escape in k274 */
static void C_ccall f_1458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1458,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[4]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1466,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,tmp=(C_word)a,a+=7,tmp));
t6=((C_word*)t4)[1];
f_1466(t6,((C_word*)t0)[2],C_fix(0));}

/* loop in k1456 in regexp-escape in k274 */
static void C_fcall f_1466(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1466,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
/* regex.scm: 398  get-output-string */
t3=((C_word*)t0)[5];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,t1,((C_word*)t0)[4]);}
else{
t3=(C_word)C_subchar(((C_word*)t0)[3],t2);
if(C_truep((C_truep((C_word)C_eqp(t3,C_make_character(46)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(92)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(63)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(42)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(43)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(94)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(36)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(40)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(41)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(91)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(93)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(124)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(123)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(125)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))))))))))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1485,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* regex.scm: 401  ##sys#write-char-0 */
t5=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(92),((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1498,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 405  ##sys#write-char-0 */
t5=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,(C_word)C_subchar(((C_word*)t0)[3],t2),((C_word*)t0)[4]);}}}

/* k1496 in loop in k1456 in regexp-escape in k274 */
static void C_ccall f_1498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* regex.scm: 406  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1466(t3,((C_word*)t0)[2],t2);}

/* k1483 in loop in k1456 in regexp-escape in k274 */
static void C_ccall f_1485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1485,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1488,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 402  ##sys#write-char-0 */
t3=*((C_word*)lf[50]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,(C_word)C_subchar(((C_word*)t0)[3],((C_word*)t0)[6]),((C_word*)t0)[2]);}

/* k1486 in k1483 in loop in k1456 in regexp-escape in k274 */
static void C_ccall f_1488(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* regex.scm: 403  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1466(t3,((C_word*)t0)[2],t2);}

/* grep in k274 */
static void C_ccall f_1417(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1417,4,t0,t1,t2,t3);}
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1423,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_1423(t7,t1,t3);}

/* loop in grep in k274 */
static void C_fcall f_1423(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1423,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1442,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* regex.scm: 383  string-search */
t6=((C_word*)t0)[3];
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,((C_word*)t0)[2],t3);}}

/* k1440 in loop in grep in k274 */
static void C_ccall f_1442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1442,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1449,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 384  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1423(t3,t2,((C_word*)t0)[2]);}
else{
/* regex.scm: 385  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1423(t2,((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k1447 in k1440 in loop in grep in k274 */
static void C_ccall f_1449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1449,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* glob->regexp in k274 */
static void C_ccall f_1152(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1152,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1160,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1164,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 346  string->list */
t5=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t4,t2);}

/* k1162 in glob->regexp in k274 */
static void C_ccall f_1164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1164,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1166,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_1166(t5,((C_word*)t0)[2],t1);}

/* loop in k1162 in glob->regexp in k274 */
static void C_fcall f_1166(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(24);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1166,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_slot(t2,C_fix(1));
switch(t3){
case C_make_character(42):
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1196,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* regex.scm: 351  loop */
t16=t5;
t17=t4;
t1=t16;
t2=t17;
goto loop;
case C_make_character(63):
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1209,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* regex.scm: 352  loop */
t16=t5;
t17=t4;
t1=t16;
t2=t17;
goto loop;
case C_make_character(91):
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1222,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1224,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t7,tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1224(t9,t5,t4);
default:
t5=(C_word)C_u_i_char_alphabeticp(t3);
t6=(C_truep(t5)?t5:(C_word)C_u_i_char_numericp(t3));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1401,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 371  loop */
t16=t7;
t17=t4;
t1=t16;
t2=t17;
goto loop;}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1412,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 372  loop */
t16=t7;
t17=t4;
t1=t16;
t2=t17;
goto loop;}}}}

/* k1410 in loop in k1162 in glob->regexp in k274 */
static void C_ccall f_1412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1412,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,C_make_character(92),t2));}

/* k1399 in loop in k1162 in glob->regexp in k274 */
static void C_ccall f_1401(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1401,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* loop2 in loop in k1162 in glob->regexp in k274 */
static void C_fcall f_1224(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(16);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1224,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1226,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_u_i_car(t2);
t5=(C_word)C_eqp(t4,C_make_character(93));
if(C_truep(t5)){
t6=(C_word)C_slot(t2,C_fix(1));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1256,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* regex.scm: 359  loop */
t8=((C_word*)((C_word*)t0)[3])[1];
f_1166(t8,t7,t6);}
else{
t6=(C_word)C_u_i_car(t2);
t7=(C_word)C_eqp(t6,C_make_character(45));
if(C_truep(t7)){
t8=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_pairp(t8))){
t9=(C_word)C_u_i_cadr(t2);
t10=(C_word)C_u_i_cddr(t2);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1285,a[2]=t1,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* loop2210 */
t22=t11;
t23=t10;
t1=t22;
t2=t23;
goto loop;}
else{
t9=(C_word)C_u_i_car(t2);
t10=(C_word)C_slot(t2,C_fix(1));
/* g216219 */
t11=t3;
f_1226(t11,t1,t9,t10);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1306,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_pairp(t9))){
t10=(C_word)C_u_i_cadr(t2);
t11=(C_word)C_eqp(t10,C_make_character(45));
if(C_truep(t11)){
t12=(C_word)C_u_i_cddr(t2);
t13=t8;
f_1306(t13,(C_word)C_i_pairp(t12));}
else{
t12=t8;
f_1306(t12,C_SCHEME_FALSE);}}
else{
t10=t8;
f_1306(t10,C_SCHEME_FALSE);}}}}
else{
if(C_truep((C_word)C_i_nullp(t2))){
/* error */
t4=*((C_word*)lf[43]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[42],lf[44],((C_word*)t0)[2]);}
else{
/* ##sys#match-error */
t4=*((C_word*)lf[45]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}}

/* k1304 in loop2 in loop in k1162 in glob->regexp in k274 */
static void C_fcall f_1306(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1306,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_u_i_car(((C_word*)t0)[5]);
t3=(C_word)C_u_i_caddr(((C_word*)t0)[5]);
t4=(C_word)C_u_i_cdddr(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1330,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* loop2210 */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1224(t6,t5,t4);}
else{
t2=(C_word)C_u_i_car(((C_word*)t0)[5]);
t3=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
/* g216219 */
t4=((C_word*)t0)[2];
f_1226(t4,((C_word*)t0)[4],t2,t3);}}

/* k1328 in k1304 in loop2 in loop in k1162 in glob->regexp in k274 */
static void C_ccall f_1330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1330,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,C_make_character(45),t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k1283 in loop2 in loop in k1162 in glob->regexp in k274 */
static void C_ccall f_1285(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1285,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,C_make_character(45),t2));}

/* k1254 in loop2 in loop in k1162 in glob->regexp in k274 */
static void C_ccall f_1256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1256,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_make_character(93),t1));}

/* g216 in loop2 in loop in k1162 in glob->regexp in k274 */
static void C_fcall f_1226(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1226,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1234,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 365  loop2 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1224(t5,t4,t3);}

/* k1232 in g216 in loop2 in loop in k1162 in glob->regexp in k274 */
static void C_ccall f_1234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1234,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k1220 in loop in k1162 in glob->regexp in k274 */
static void C_ccall f_1222(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1222,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_make_character(91),t1));}

/* k1207 in loop in k1162 in glob->regexp in k274 */
static void C_ccall f_1209(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1209,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_make_character(46),t1));}

/* k1194 in loop in k1162 in glob->regexp in k274 */
static void C_ccall f_1196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1196,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_make_character(42),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,C_make_character(46),t2));}

/* k1158 in glob->regexp in k274 */
static void C_ccall f_1160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 345  list->string */
t2=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t2+1)))(3,t2,((C_word*)t0)[2],t1);}

/* string-substitute* in k274 */
static void C_ccall f_1106(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1106r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1106r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1106r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word *a=C_alloc(7);
t5=(C_word)C_notvemptyp(t4);
t6=(C_truep(t5)?(C_word)C_slot(t4,C_fix(0)):C_SCHEME_FALSE);
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1115,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t8,tmp=(C_word)a,a+=5,tmp));
t10=((C_word*)t8)[1];
f_1115(t10,t1,t2,t3);}

/* loop in string-substitute* in k274 */
static void C_fcall f_1115(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1115,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(C_word)C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1132,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_u_i_car(t4);
t7=(C_word)C_slot(t4,C_fix(1));
/* regex.scm: 334  string-substitute */
t8=((C_word*)t0)[3];
((C_proc6)(void*)(*((C_word*)t8+1)))(6,t8,t5,t6,t7,t2,((C_word*)t0)[2]);}}

/* k1130 in loop in string-substitute* in k274 */
static void C_ccall f_1132(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* regex.scm: 334  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1115(t3,((C_word*)t0)[2],t1,t2);}

/* string-substitute in k274 */
static void C_ccall f_887(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(!C_demand(c*C_SIZEOF_PAIR+31)){
C_save_and_reclaim((void*)tr5rv,(void*)f_887r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest_vector(a,C_rest_count(0));
f_887r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_887r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(31);
t6=(C_word)C_notvemptyp(t5);
t7=(C_truep(t6)?(C_word)C_slot(t5,C_fix(0)):C_fix(1));
t8=(C_word)C_block_size(t3);
t9=(C_word)C_u_fixnum_difference(t8,C_fix(1));
t10=C_SCHEME_END_OF_LIST;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_fix(0);
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_899,a[2]=t13,a[3]=t11,tmp=(C_word)a,a+=4,tmp);
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_914,a[2]=t4,a[3]=t8,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t14,a[7]=t9,tmp=(C_word)a,a+=8,tmp);
t16=C_SCHEME_UNDEFINED;
t17=(*a=C_VECTOR_TYPE|1,a[1]=t16,tmp=(C_word)a,a+=2,tmp);
t18=C_set_block_item(t17,0,(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1020,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t11,a[5]=((C_word*)t0)[3],a[6]=t13,a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=t15,a[10]=t17,a[11]=t14,a[12]=t7,tmp=(C_word)a,a+=13,tmp));
t19=((C_word*)t17)[1];
f_1020(t19,t1,C_fix(0),C_fix(1));}

/* loop in string-substitute in k274 */
static void C_fcall f_1020(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1020,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1024,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t1,a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t3,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* regex.scm: 309  string-search-positions */
t5=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[2],((C_word*)t0)[7],t2);}

/* k1022 in loop in string-substitute in k274 */
static void C_ccall f_1024(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1024,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_u_i_car(t1);
t3=(C_word)C_u_i_cadr(t2);
t4=(C_word)C_fixnump(((C_word*)t0)[13]);
t5=(C_word)C_i_not(t4);
t6=(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[12],((C_word*)t0)[13]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1055,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=t3,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_u_i_car(t2);
/* regex.scm: 314  substring */
t9=((C_word*)t0)[7];
((C_proc5)(void*)(*((C_word*)t9+1)))(5,t9,t7,((C_word*)t0)[6],((C_word*)t0)[5],t8);}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1073,a[2]=t3,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
/* regex.scm: 318  substring */
t8=((C_word*)t0)[7];
((C_proc5)(void*)(*((C_word*)t8+1)))(5,t8,t7,((C_word*)t0)[6],((C_word*)t0)[5],t3);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1094,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[6]);
/* regex.scm: 321  substring */
t4=((C_word*)t0)[7];
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t2,((C_word*)t0)[6],((C_word*)t0)[5],t3);}}

/* k1092 in k1022 in loop in string-substitute in k274 */
static void C_ccall f_1094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1094,2,t0,t1);}
t2=f_899(C_a_i(&a,3),((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1090,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 322  reverse */
t4=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k1088 in k1092 in k1022 in loop in string-substitute in k274 */
static void C_ccall f_1090(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 322  ##sys#fragments->string */
t2=*((C_word*)lf[38]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k1071 in k1022 in loop in string-substitute in k274 */
static void C_ccall f_1073(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1073,2,t0,t1);}
t2=f_899(C_a_i(&a,3),((C_word*)t0)[6],t1);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* regex.scm: 319  loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1020(t4,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* k1053 in k1022 in loop in string-substitute in k274 */
static void C_ccall f_1055(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1055,2,t0,t1);}
t2=f_899(C_a_i(&a,3),((C_word*)t0)[7],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1048,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 315  substitute */
t4=((C_word*)t0)[3];
f_914(t4,t3,((C_word*)t0)[2]);}

/* k1046 in k1053 in k1022 in loop in string-substitute in k274 */
static void C_ccall f_1048(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 316  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1020(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}

/* substitute in string-substitute in k274 */
static void C_fcall f_914(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_914,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_920,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],tmp=(C_word)a,a+=10,tmp));
t6=((C_word*)t4)[1];
f_920(t6,t1,C_fix(0),C_fix(0));}

/* loop in substitute in string-substitute in k274 */
static void C_fcall f_920(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a;
loop:
a=C_alloc(14);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_920,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[9]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_934,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t5)){
t6=t4;
f_934(2,t6,((C_word*)t0)[7]);}
else{
/* regex.scm: 296  substring */
t6=((C_word*)t0)[6];
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t4,((C_word*)t0)[7],t2,((C_word*)t0)[5]);}}
else{
t4=(C_word)C_subchar(((C_word*)t0)[7],t3);
t5=(C_word)C_u_fixnum_plus(t3,C_fix(1));
t6=(C_word)C_eqp(t4,C_make_character(92));
if(C_truep(t6)){
t7=(C_word)C_subchar(((C_word*)t0)[7],t5);
t8=(C_word)C_eqp(C_make_character(92),t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:(C_word)C_u_i_char_numericp(t7));
if(C_truep(t9)){
t10=(C_word)C_fix((C_word)C_character_code(t7));
t11=(C_word)C_u_fixnum_difference(t10,C_fix(48));
t12=(C_word)C_u_i_list_ref(((C_word*)t0)[4],t11);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_987,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=t12,a[5]=t5,a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=t3,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* regex.scm: 303  substring */
t14=((C_word*)t0)[6];
((C_proc5)(void*)(*((C_word*)t14+1)))(5,t14,t13,((C_word*)t0)[7],t2,t3);}
else{
t10=(C_word)C_u_fixnum_plus(t5,C_fix(1));
/* regex.scm: 306  loop */
t18=t1;
t19=t2;
t20=t10;
t1=t18;
t2=t19;
t3=t20;
goto loop;}}
else{
/* regex.scm: 307  loop */
t18=t1;
t19=t2;
t20=t5;
t1=t18;
t2=t19;
t3=t20;
goto loop;}}}

/* k985 in loop in substitute in string-substitute in k274 */
static void C_ccall f_987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_987,2,t0,t1);}
t2=f_899(C_a_i(&a,3),((C_word*)t0)[9],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_975,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_u_i_car(((C_word*)t0)[4]);
t5=(C_word)C_u_i_cadr(((C_word*)t0)[4]);
/* regex.scm: 304  substring */
t6=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t6+1)))(5,t6,t3,((C_word*)t0)[2],t4,t5);}

/* k973 in k985 in loop in substitute in string-substitute in k274 */
static void C_ccall f_975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_975,2,t0,t1);}
t2=f_899(C_a_i(&a,3),((C_word*)t0)[6],t1);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[5],C_fix(2));
/* regex.scm: 305  loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_920(t4,((C_word*)t0)[3],t3,((C_word*)t0)[2]);}

/* k932 in loop in substitute in string-substitute in k274 */
static void C_ccall f_934(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_934,2,t0,t1);}
/* regex.scm: 296  push */
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,f_899(C_a_i(&a,3),((C_word*)t0)[2],t1));}

/* push in string-substitute in k274 */
static C_word C_fcall f_899(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=(C_word)C_block_size(t1);
t5=(C_word)C_u_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t4);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
return(t6);}

/* string-split-fields in k274 */
static void C_ccall f_708(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+25)){
C_save_and_reclaim((void*)tr4rv,(void*)f_708r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_708r(t0,t1,t2,t3,t4);}}

static void C_ccall f_708r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(25);
t5=(C_word)C_block_size(t4);
t6=(C_word)C_block_size(t3);
t7=(C_word)C_fixnum_greaterp(t5,C_fix(0));
t8=(C_truep(t7)?(C_word)C_slot(t4,C_fix(0)):C_SCHEME_TRUE);
t9=(C_word)C_fixnum_greaterp(t5,C_fix(1));
t10=(C_truep(t9)?(C_word)C_slot(t4,C_fix(1)):C_fix(0));
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_724,a[2]=t10,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t6,a[7]=t3,a[8]=((C_word*)t0)[4],a[9]=t8,tmp=(C_word)a,a+=10,tmp);
t12=(C_word)C_eqp(t8,lf[33]);
if(C_truep(t12)){
t13=t11;
f_724(t13,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_823,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t6,tmp=(C_word)a,a+=6,tmp));}
else{
t13=(C_word)C_eqp(t8,lf[32]);
t14=t11;
f_724(t14,(C_truep(t13)?(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_843,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t6,tmp=(C_word)a,a+=6,tmp):(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_869,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp)));}}

/* f_869 in string-split-fields in k274 */
static void C_ccall f_869(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_869,4,t0,t1,t2,t3);}
/* regex.scm: 258  reverse */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}

/* f_843 in string-split-fields in k274 */
static void C_ccall f_843(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_843,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[5]))){
t4=(C_word)C_a_i_cons(&a,2,lf[35],t2);
/* regex.scm: 256  reverse */
t5=((C_word*)t0)[4];
((C_proc3)(void*)(*((C_word*)t5+1)))(3,t5,t1,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_868,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 257  substring */
t5=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[2],t3,((C_word*)t0)[5]);}}

/* k866 */
static void C_ccall f_868(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_868,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* regex.scm: 257  reverse */
t3=((C_word*)t0)[3];
((C_proc3)(void*)(*((C_word*)t3+1)))(3,t3,((C_word*)t0)[2],t2);}

/* f_823 in string-split-fields in k274 */
static void C_ccall f_823(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_823,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_lessp(t3,((C_word*)t0)[5]))){
/* regex.scm: 251  ##sys#error */
t4=*((C_word*)lf[4]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[31],lf[34],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
/* regex.scm: 252  reverse */
t4=((C_word*)t0)[2];
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}

/* k722 in string-split-fields in k274 */
static void C_fcall f_724(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_724,NULL,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[9],lf[32]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[9],lf[33]));
t4=(C_truep(t3)?(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_807,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_812,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],tmp=(C_word)a,a+=4,tmp));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_732,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=t6,a[7]=t1,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp));
t8=((C_word*)t6)[1];
f_732(t8,((C_word*)t0)[3],C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);}

/* loop in k722 in string-split-fields in k274 */
static void C_fcall f_732(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_732,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_736,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* regex.scm: 263  string-search-positions */
t5=((C_word*)t0)[4];
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t4,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* k734 in loop in k722 in string-split-fields in k274 */
static void C_ccall f_736(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_736,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_u_i_car(t1);
t3=(C_word)C_u_i_car(t2);
t4=(C_word)C_u_i_cadr(t2);
t5=(C_word)C_eqp(t3,t4);
if(C_truep(t5)){
t6=(C_word)C_eqp(t4,((C_word*)t0)[8]);
if(C_truep(t6)){
/* regex.scm: 270  fini */
t7=((C_word*)t0)[7];
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_778,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_u_fixnum_plus(t3,C_fix(1));
t9=(C_word)C_u_fixnum_plus(t4,C_fix(2));
/* regex.scm: 271  fetch */
t10=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t10+1)))(5,t10,t7,((C_word*)t0)[4],t8,t9);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_797,a[2]=t4,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* regex.scm: 272  fetch */
t7=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t7+1)))(5,t7,t6,((C_word*)t0)[4],t3,t4);}}
else{
/* regex.scm: 273  fini */
t2=((C_word*)t0)[7];
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}}

/* k795 in k734 in loop in k722 in string-split-fields in k274 */
static void C_ccall f_797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_797,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* regex.scm: 272  loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_732(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k776 in k734 in loop in k722 in string-split-fields in k274 */
static void C_ccall f_778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_778,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* regex.scm: 271  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_732(t4,((C_word*)t0)[2],t2,t3);}

/* f_812 in k722 in string-split-fields in k274 */
static void C_ccall f_812(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_812,5,t0,t1,t2,t3,t4);}
/* regex.scm: 261  substring */
t5=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[2],t3,t4);}

/* f_807 in k722 in string-split-fields in k274 */
static void C_ccall f_807(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_807,5,t0,t1,t2,t3,t4);}
/* regex.scm: 260  substring */
t5=((C_word*)t0)[3];
((C_proc5)(void*)(*((C_word*)t5+1)))(5,t5,t1,((C_word*)t0)[2],t2,t3);}

/* string-search-positions in k274 */
static void C_ccall f_699(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_699r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_699r(t0,t1,t2,t3,t4);}}

static void C_ccall f_699r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_703,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 231  prepare */
t6=((C_word*)t0)[2];
f_620(t6,t5,t2,t3,t4,lf[29]);}

/* k701 in string-search-positions in k274 */
static void C_ccall f_703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 232  gather-result-positions */
f_399(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* string-search in k274 */
static void C_ccall f_690(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_690r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_690r(t0,t1,t2,t3,t4);}}

static void C_ccall f_690r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_694,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 226  prepare */
t6=((C_word*)t0)[2];
f_620(t6,t5,t2,t3,t4,lf[28]);}

/* k692 in string-search in k274 */
static void C_ccall f_694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 227  gather-results */
t2=lf[14];
f_481(t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* prepare in k274 */
static void C_fcall f_620(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_620,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_truep((C_word)C_blockp(t4))?(C_word)C_slot(t4,C_fix(1)):C_SCHEME_FALSE);
t7=(C_truep(t6)?(C_word)C_slot(t4,C_fix(0)):C_fix(0));
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_630,a[2]=t5,a[3]=t7,a[4]=t3,a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_blockp(t6))){
t9=t8;
f_630(t9,(C_word)C_slot(t6,C_fix(0)));}
else{
t9=(C_word)C_block_size(t3);
t10=t8;
f_630(t10,(C_word)C_u_fixnum_difference(t9,t7));}}

/* k628 in prepare in k274 */
static void C_fcall f_630(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_630,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_634,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[5]))){
/* regex.scm: 216  re-compile */
f_298(t2,((C_word*)t0)[5],((C_word*)t0)[2]);}
else{
if(C_truep((C_word)C_i_structurep(((C_word*)t0)[5],lf[8]))){
t3=t2;
f_634(2,t3,(C_word)C_slot(((C_word*)t0)[5],C_fix(1)));}
else{
/* regex.scm: 218  ##sys#signal-hook */
t3=*((C_word*)lf[22]+1);
((C_proc6)(void*)(*((C_word*)t3+1)))(6,t3,t2,lf[23],((C_word*)t0)[2],lf[27],((C_word*)t0)[5]);}}}

/* k632 in k628 in prepare in k274 */
static void C_ccall f_634(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_634,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[8])+1,t1);
t3=f_519(((C_word*)((C_word*)t0)[8])[1]);
t4=(C_word)C_u_fixnum_plus(C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[7])+1,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_641,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 220  re-match */
f_502(t6,((C_word*)((C_word*)t0)[8])[1],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k639 in k632 in k628 in prepare in k274 */
static void C_ccall f_641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_641,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_644,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[3]))){
/* regex.scm: 221  finalizer */
t3=lf[2];
f_288(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=t2;
f_644(2,t3,C_SCHEME_UNDEFINED);}}

/* k642 in k639 in k632 in k628 in prepare in k274 */
static void C_ccall f_644(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* string-match-positions in k274 */
static void C_ccall f_611(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_611r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_611r(t0,t1,t2,t3,t4);}}

static void C_ccall f_611r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_615,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 198  prepare */
t6=((C_word*)t0)[2];
f_529(t6,t5,t2,t3,t4,lf[26]);}

/* k613 in string-match-positions in k274 */
static void C_ccall f_615(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 199  gather-result-positions */
f_399(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* string-match in k274 */
static void C_ccall f_602(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_602r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_602r(t0,t1,t2,t3,t4);}}

static void C_ccall f_602r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_606,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 193  prepare */
t6=((C_word*)t0)[2];
f_529(t6,t5,t2,t3,t4,lf[25]);}

/* k604 in string-match in k274 */
static void C_ccall f_606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 194  gather-results */
t2=lf[14];
f_481(t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* prepare in k274 */
static void C_fcall f_529(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_529,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_pairp(t4);
t7=(C_truep(t6)?(C_word)C_slot(t4,C_fix(0)):C_fix(0));
t8=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_537,a[2]=t7,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_stringp(t2))){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_575,a[2]=t5,a[3]=t8,tmp=(C_word)a,a+=4,tmp);
t10=(C_word)C_fixnum_greaterp(t7,C_fix(0));
t11=(C_truep(t10)?lf[19]:lf[20]);
/* regex.scm: 183  string-append */
t12=((C_word*)t0)[2];
((C_proc5)(void*)(*((C_word*)t12+1)))(5,t12,t9,t11,t2,lf[21]);}
else{
if(C_truep((C_word)C_i_structurep(t2,lf[8]))){
t9=t8;
f_537(2,t9,(C_word)C_slot(t2,C_fix(1)));}
else{
/* regex.scm: 185  ##sys#signal-hook */
t9=*((C_word*)lf[22]+1);
((C_proc6)(void*)(*((C_word*)t9+1)))(6,t9,t8,lf[23],t5,lf[24],t2);}}}

/* k573 in prepare in k274 */
static void C_ccall f_575(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 183  re-compile */
f_298(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k535 in prepare in k274 */
static void C_ccall f_537(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_537,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,t1);
t3=f_519(((C_word*)((C_word*)t0)[7])[1]);
t4=(C_word)C_u_fixnum_plus(C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_544,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_block_size(((C_word*)t0)[3]);
t8=(C_word)C_u_fixnum_difference(t7,((C_word*)t0)[2]);
/* regex.scm: 187  re-match */
f_502(t6,((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[3],((C_word*)t0)[2],t8);}

/* k542 in k535 in prepare in k274 */
static void C_ccall f_544(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_544,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_547,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[3]))){
/* regex.scm: 188  finalizer */
t3=lf[2];
f_288(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=t2;
f_547(2,t3,C_SCHEME_UNDEFINED);}}

/* k545 in k542 in k535 in prepare in k274 */
static void C_ccall f_547(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* re-capture-count in k274 */
static C_word C_fcall f_519(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
t2=(C_truep(t1)?(C_word)C_i_foreign_pointer_argumentp(t1):C_SCHEME_FALSE);
return((C_word)stub60(C_SCHEME_UNDEFINED,t2));}

/* re-match in k274 */
static void C_fcall f_502(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_502,NULL,5,t1,t2,t3,t4,t5);}
t6=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_511,a[2]=t5,a[3]=t4,a[4]=t6,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
/* ##sys#make-c-string */
t8=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t8+1)))(3,t8,t7,t3);}
else{
t8=t7;
f_511(2,t8,C_SCHEME_FALSE);}}

/* k509 in re-match in k274 */
static void C_ccall f_511(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub49(C_SCHEME_UNDEFINED,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* gather-results in k274 */
static void C_fcall f_481(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_481,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_485,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 156  gather-result-positions */
f_399(t5,t2,t4);}

/* k483 in gather-results in k274 */
static void C_ccall f_485(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_485,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_493,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 158  ##sys#map */
t3=*((C_word*)lf[15]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a492 in k483 in gather-results in k274 */
static void C_ccall f_493(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_493,3,t0,t1,t2);}
if(C_truep(t2)){
C_apply(5,0,t1,((C_word*)t0)[3],((C_word*)t0)[2],t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* gather-result-positions in k274 */
static void C_fcall f_399(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_399,NULL,3,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_411,a[2]=t5,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_411(t7,t1,C_fix(0));}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* loop in gather-result-positions in k274 */
static void C_fcall f_411(C_word t0,C_word t1,C_word t2){
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
C_word *a;
loop:
a=C_alloc(14);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_411,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_431,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_u_fixnum_plus(t2,C_fix(1));
/* regex.scm: 144  loop */
t13=t3;
t14=t4;
t1=t13;
t2=t14;
goto loop;}
else{
t3=(C_word)C_fixnum_times(t2,C_fix(2));
t4=f_396(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_445,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,C_fix(0)))){
t6=(C_word)C_fixnum_times(t2,C_fix(2));
t7=(C_word)C_u_fixnum_plus(t6,C_fix(1));
t8=f_396(t7);
t9=(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t5;
f_445(t10,(C_word)C_a_i_cons(&a,2,t4,t9));}
else{
t6=t5;
f_445(t6,C_SCHEME_FALSE);}}}}

/* k443 in loop in gather-result-positions in k274 */
static void C_fcall f_445(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_445,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_449,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_u_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* regex.scm: 151  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_411(t4,t2,t3);}

/* k447 in k443 in loop in gather-result-positions in k274 */
static void C_ccall f_449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_449,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k429 in loop in gather-result-positions in k274 */
static void C_ccall f_431(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_431,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,t1));}

/* re-register-index in k274 */
static C_word C_fcall f_396(C_word t1){
C_word tmp;
C_word t2;
return((C_word)stub28(C_SCHEME_UNDEFINED,t1));}

/* regexp? in k274 */
static void C_ccall f_390(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_390,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[8]));}

/* regexp in k274 */
static void C_ccall f_374(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(!C_demand(c*C_SIZEOF_PAIR+23)){
C_save_and_reclaim((void*)tr3r,(void*)f_374r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_374r(t0,t1,t2,t3);}}

static void C_ccall f_374r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(23);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_378,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_388,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t6=t5;
f_388(t6,C_fix(0));}
else{
t6=(C_word)C_u_i_car(t3);
t7=(C_truep(t6)?C_unsigned_int_to_num(&a,PCRE_CASELESS):C_fix(0));
t8=(C_word)C_slot(t3,C_fix(1));
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_339,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t8))){
t10=t9;
f_339(t10,C_fix(0));}
else{
t10=(C_word)C_u_i_car(t8);
t11=(C_truep(t10)?C_unsigned_int_to_num(&a,PCRE_EXTENDED):C_fix(0));
t12=(C_word)C_slot(t8,C_fix(1));
t13=(C_word)C_i_pairp(t12);
t14=(C_truep(t13)?(C_word)C_u_i_cadr(t8):C_SCHEME_FALSE);
t15=(C_truep(t14)?C_unsigned_int_to_num(&a,PCRE_UTF8):C_fix(0));
t16=t9;
f_339(t16,(C_word)C_u_fixnum_plus(t11,t15));}}}

/* k337 in regexp in k274 */
static void C_fcall f_339(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_388(t2,(C_word)C_u_fixnum_plus(((C_word*)t0)[2],t1));}

/* k386 in regexp in k274 */
static void C_fcall f_388(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 126  re-compile-pattern */
f_278(((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k376 in regexp in k274 */
static void C_ccall f_378(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_378,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_381,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 127  set-finalizer! */
t3=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[2]);}

/* k379 in k376 in regexp in k274 */
static void C_ccall f_381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_381,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,2,lf[8],((C_word*)t0)[2]));}

/* re-compile in k274 */
static void C_fcall f_298(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_298,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_302,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 108  re-compile-pattern */
f_278(t4,t2,C_fix(0));}

/* k300 in re-compile in k274 */
static void C_ccall f_302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_302,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_312,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_316,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_regex_error),C_fix(0));}}

/* k314 in k300 in re-compile in k274 */
static void C_ccall f_316(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 110  ##sys#string-append */
t2=*((C_word*)lf[5]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[6],t1);}

/* k310 in k300 in re-compile in k274 */
static void C_ccall f_312(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 110  ##sys#error */
t2=*((C_word*)lf[4]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* finalizer in k274 */
static void C_ccall f_288(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_288,3,t0,t1,t2);}
t3=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub10(C_SCHEME_UNDEFINED,t3));}

/* re-compile-pattern in k274 */
static void C_fcall f_278(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_278,NULL,3,t1,t2,t3);}
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_283,a[2]=t3,a[3]=t4,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
/* ##sys#make-c-string */
t6=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t6+1)))(3,t6,t5,t2);}
else{
t6=t5;
f_283(2,t6,C_SCHEME_FALSE);}}

/* k281 in re-compile-pattern in k274 */
static void C_ccall f_283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)stub2(((C_word*)t0)[3],t1,((C_word*)t0)[2]));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[101] = {
{"toplevelregex.scm",(void*)C_regex_toplevel},
{"f_276regex.scm",(void*)f_276},
{"f_1454regex.scm",(void*)f_1454},
{"f_1458regex.scm",(void*)f_1458},
{"f_1466regex.scm",(void*)f_1466},
{"f_1498regex.scm",(void*)f_1498},
{"f_1485regex.scm",(void*)f_1485},
{"f_1488regex.scm",(void*)f_1488},
{"f_1417regex.scm",(void*)f_1417},
{"f_1423regex.scm",(void*)f_1423},
{"f_1442regex.scm",(void*)f_1442},
{"f_1449regex.scm",(void*)f_1449},
{"f_1152regex.scm",(void*)f_1152},
{"f_1164regex.scm",(void*)f_1164},
{"f_1166regex.scm",(void*)f_1166},
{"f_1412regex.scm",(void*)f_1412},
{"f_1401regex.scm",(void*)f_1401},
{"f_1224regex.scm",(void*)f_1224},
{"f_1306regex.scm",(void*)f_1306},
{"f_1330regex.scm",(void*)f_1330},
{"f_1285regex.scm",(void*)f_1285},
{"f_1256regex.scm",(void*)f_1256},
{"f_1226regex.scm",(void*)f_1226},
{"f_1234regex.scm",(void*)f_1234},
{"f_1222regex.scm",(void*)f_1222},
{"f_1209regex.scm",(void*)f_1209},
{"f_1196regex.scm",(void*)f_1196},
{"f_1160regex.scm",(void*)f_1160},
{"f_1106regex.scm",(void*)f_1106},
{"f_1115regex.scm",(void*)f_1115},
{"f_1132regex.scm",(void*)f_1132},
{"f_887regex.scm",(void*)f_887},
{"f_1020regex.scm",(void*)f_1020},
{"f_1024regex.scm",(void*)f_1024},
{"f_1094regex.scm",(void*)f_1094},
{"f_1090regex.scm",(void*)f_1090},
{"f_1073regex.scm",(void*)f_1073},
{"f_1055regex.scm",(void*)f_1055},
{"f_1048regex.scm",(void*)f_1048},
{"f_914regex.scm",(void*)f_914},
{"f_920regex.scm",(void*)f_920},
{"f_987regex.scm",(void*)f_987},
{"f_975regex.scm",(void*)f_975},
{"f_934regex.scm",(void*)f_934},
{"f_899regex.scm",(void*)f_899},
{"f_708regex.scm",(void*)f_708},
{"f_869regex.scm",(void*)f_869},
{"f_843regex.scm",(void*)f_843},
{"f_868regex.scm",(void*)f_868},
{"f_823regex.scm",(void*)f_823},
{"f_724regex.scm",(void*)f_724},
{"f_732regex.scm",(void*)f_732},
{"f_736regex.scm",(void*)f_736},
{"f_797regex.scm",(void*)f_797},
{"f_778regex.scm",(void*)f_778},
{"f_812regex.scm",(void*)f_812},
{"f_807regex.scm",(void*)f_807},
{"f_699regex.scm",(void*)f_699},
{"f_703regex.scm",(void*)f_703},
{"f_690regex.scm",(void*)f_690},
{"f_694regex.scm",(void*)f_694},
{"f_620regex.scm",(void*)f_620},
{"f_630regex.scm",(void*)f_630},
{"f_634regex.scm",(void*)f_634},
{"f_641regex.scm",(void*)f_641},
{"f_644regex.scm",(void*)f_644},
{"f_611regex.scm",(void*)f_611},
{"f_615regex.scm",(void*)f_615},
{"f_602regex.scm",(void*)f_602},
{"f_606regex.scm",(void*)f_606},
{"f_529regex.scm",(void*)f_529},
{"f_575regex.scm",(void*)f_575},
{"f_537regex.scm",(void*)f_537},
{"f_544regex.scm",(void*)f_544},
{"f_547regex.scm",(void*)f_547},
{"f_519regex.scm",(void*)f_519},
{"f_502regex.scm",(void*)f_502},
{"f_511regex.scm",(void*)f_511},
{"f_481regex.scm",(void*)f_481},
{"f_485regex.scm",(void*)f_485},
{"f_493regex.scm",(void*)f_493},
{"f_399regex.scm",(void*)f_399},
{"f_411regex.scm",(void*)f_411},
{"f_445regex.scm",(void*)f_445},
{"f_449regex.scm",(void*)f_449},
{"f_431regex.scm",(void*)f_431},
{"f_396regex.scm",(void*)f_396},
{"f_390regex.scm",(void*)f_390},
{"f_374regex.scm",(void*)f_374},
{"f_339regex.scm",(void*)f_339},
{"f_388regex.scm",(void*)f_388},
{"f_378regex.scm",(void*)f_378},
{"f_381regex.scm",(void*)f_381},
{"f_298regex.scm",(void*)f_298},
{"f_302regex.scm",(void*)f_302},
{"f_316regex.scm",(void*)f_316},
{"f_312regex.scm",(void*)f_312},
{"f_288regex.scm",(void*)f_288},
{"f_278regex.scm",(void*)f_278},
{"f_283regex.scm",(void*)f_283},
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
