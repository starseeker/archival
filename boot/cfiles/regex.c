/* Generated from regex.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:16
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: regex.scm -output-file regex.c -quiet -no-trace -optimize-level 2 -include-path . -explicit-use
   unit: regex
*/

#include "chicken.h"

#include "pcre/pcre.h"

#define C_REGEX_OVECTOR_SIZE         256

static const char *C_regex_error;
static int C_regex_error_offset;
static int C_regex_ovector[ C_REGEX_OVECTOR_SIZE * 2 ];

static C_PTABLE_ENTRY *create_ptable(void);

static C_TLS C_word lf[95];


/* from k566 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub62(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub62(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * buffer=(void * )C_c_pointer_or_null(C_a0);
int c;pcre_fullinfo(buffer, NULL, PCRE_INFO_CAPTURECOUNT, &c);return(c);
C_return:
#undef return

return C_r;}

/* from k549 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub51(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3) C_regparm;
C_regparm static C_word C_fcall stub51(C_word C_buf,C_word C_a0,C_word C_a1,C_word C_a2,C_word C_a3){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * buffer=(void * )C_c_pointer_or_null(C_a0);
char * str=(char * )C_string_or_null(C_a1);
int start=(int )C_unfix(C_a2);
int range=(int )C_unfix(C_a3);
return(pcre_exec(buffer, NULL, str, start + range, start, 0, C_regex_ovector, C_REGEX_OVECTOR_SIZE));
C_return:
#undef return

return C_r;}

/* from k427 */
#define return(x) C_cblock C_r = (C_fix((C_word)(x))); goto C_return; C_cblockend
static C_word C_fcall stub30(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub30(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
int i=(int )C_unfix(C_a0);
return(C_regex_ovector[ i ]);
C_return:
#undef return

return C_r;}

/* from k313 */
static C_word C_fcall stub10(C_word C_buf,C_word C_a0) C_regparm;
C_regparm static C_word C_fcall stub10(C_word C_buf,C_word C_a0){
C_word C_r=C_SCHEME_UNDEFINED,*C_a=(C_word*)C_buf;
void * t0=(void * )C_c_pointer_or_null(C_a0);
pcre_free(t0);
return C_r;}

/* from k299 */
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
C_noret_decl(f_290)
static void C_ccall f_290(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1531)
static void C_ccall f_1531(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1538)
static void C_ccall f_1538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1546)
static void C_fcall f_1546(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1578)
static void C_ccall f_1578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1565)
static void C_ccall f_1565(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1568)
static void C_ccall f_1568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1491)
static void C_ccall f_1491(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1500)
static void C_fcall f_1500(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1519)
static void C_ccall f_1519(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1526)
static void C_ccall f_1526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1223)
static void C_ccall f_1223(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1238)
static void C_ccall f_1238(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1240)
static void C_fcall f_1240(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1486)
static void C_ccall f_1486(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1475)
static void C_ccall f_1475(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1298)
static void C_fcall f_1298(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1380)
static void C_fcall f_1380(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1404)
static void C_ccall f_1404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1359)
static void C_ccall f_1359(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1330)
static void C_ccall f_1330(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1300)
static void C_fcall f_1300(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1308)
static void C_ccall f_1308(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1296)
static void C_ccall f_1296(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1283)
static void C_ccall f_1283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1270)
static void C_ccall f_1270(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1234)
static void C_ccall f_1234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1171)
static void C_ccall f_1171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_1171)
static void C_ccall f_1171r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_1186)
static void C_fcall f_1186(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_949)
static void C_ccall f_949(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_949)
static void C_ccall f_949r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_1085)
static void C_fcall f_1085(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1089)
static void C_ccall f_1089(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1159)
static void C_ccall f_1159(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1155)
static void C_ccall f_1155(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1138)
static void C_ccall f_1138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1120)
static void C_ccall f_1120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1113)
static void C_ccall f_1113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_979)
static void C_fcall f_979(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_985)
static void C_fcall f_985(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1052)
static void C_ccall f_1052(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1040)
static void C_ccall f_1040(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_964)
static C_word C_fcall f_964(C_word *a,C_word t0,C_word t1);
C_noret_decl(f_767)
static void C_ccall f_767(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_767)
static void C_ccall f_767r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_931)
static void C_ccall f_931(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_905)
static void C_ccall f_905(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_930)
static void C_ccall f_930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_885)
static void C_ccall f_885(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_786)
static void C_fcall f_786(C_word t0,C_word t1) C_noret;
C_noret_decl(f_794)
static void C_fcall f_794(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_798)
static void C_ccall f_798(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_859)
static void C_ccall f_859(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_840)
static void C_ccall f_840(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_874)
static void C_ccall f_874(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_869)
static void C_ccall f_869(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_758)
static void C_ccall f_758(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_758)
static void C_ccall f_758r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_762)
static void C_ccall f_762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_749)
static void C_ccall f_749(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_749)
static void C_ccall f_749r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_753)
static void C_ccall f_753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_670)
static void C_fcall f_670(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_683)
static void C_fcall f_683(C_word t0,C_word t1) C_noret;
C_noret_decl(f_693)
static void C_ccall f_693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_700)
static void C_ccall f_700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_703)
static void C_ccall f_703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_661)
static void C_ccall f_661(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_661)
static void C_ccall f_661r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_665)
static void C_ccall f_665(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_652)
static void C_ccall f_652(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_652)
static void C_ccall f_652r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_656)
static void C_ccall f_656(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_573)
static void C_fcall f_573(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_625)
static void C_ccall f_625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_587)
static void C_ccall f_587(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_594)
static void C_ccall f_594(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_597)
static void C_ccall f_597(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_563)
static C_word C_fcall f_563(C_word t0);
C_noret_decl(f_534)
static void C_fcall f_534(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_543)
static void C_ccall f_543(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_513)
static void C_fcall f_513(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_517)
static void C_ccall f_517(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_525)
static void C_ccall f_525(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_431)
static void C_fcall f_431(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_443)
static void C_fcall f_443(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_477)
static void C_fcall f_477(C_word t0,C_word t1) C_noret;
C_noret_decl(f_481)
static void C_ccall f_481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_463)
static void C_ccall f_463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_424)
static C_word C_fcall f_424(C_word t0);
C_noret_decl(f_418)
static void C_ccall f_418(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_399)
static void C_ccall f_399(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_399)
static void C_ccall f_399r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_364)
static void C_fcall f_364(C_word t0,C_word t1) C_noret;
C_noret_decl(f_416)
static void C_fcall f_416(C_word t0,C_word t1) C_noret;
C_noret_decl(f_406)
static void C_ccall f_406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_409)
static void C_ccall f_409(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_320)
static void C_fcall f_320(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_327)
static void C_ccall f_327(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_341)
static void C_ccall f_341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_337)
static void C_ccall f_337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_310)
static void C_ccall f_310(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_292)
static void C_fcall f_292(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_297)
static void C_ccall f_297(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_1546)
static void C_fcall trf_1546(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1546(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1546(t0,t1,t2);}

C_noret_decl(trf_1500)
static void C_fcall trf_1500(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1500(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1500(t0,t1,t2);}

C_noret_decl(trf_1240)
static void C_fcall trf_1240(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1240(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1240(t0,t1,t2);}

C_noret_decl(trf_1298)
static void C_fcall trf_1298(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1298(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1298(t0,t1,t2);}

C_noret_decl(trf_1380)
static void C_fcall trf_1380(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1380(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1380(t0,t1);}

C_noret_decl(trf_1300)
static void C_fcall trf_1300(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1300(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1300(t0,t1,t2,t3);}

C_noret_decl(trf_1186)
static void C_fcall trf_1186(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1186(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1186(t0,t1,t2,t3);}

C_noret_decl(trf_1085)
static void C_fcall trf_1085(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1085(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_1085(t0,t1,t2,t3);}

C_noret_decl(trf_979)
static void C_fcall trf_979(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_979(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_979(t0,t1,t2);}

C_noret_decl(trf_985)
static void C_fcall trf_985(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_985(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_985(t0,t1,t2,t3);}

C_noret_decl(trf_786)
static void C_fcall trf_786(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_786(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_786(t0,t1);}

C_noret_decl(trf_794)
static void C_fcall trf_794(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_794(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_794(t0,t1,t2,t3);}

C_noret_decl(trf_670)
static void C_fcall trf_670(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_670(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_670(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_683)
static void C_fcall trf_683(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_683(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_683(t0,t1);}

C_noret_decl(trf_573)
static void C_fcall trf_573(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_573(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_573(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_534)
static void C_fcall trf_534(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_534(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_534(t0,t1,t2,t3,t4);}

C_noret_decl(trf_513)
static void C_fcall trf_513(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_513(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_513(t0,t1,t2,t3,t4);}

C_noret_decl(trf_431)
static void C_fcall trf_431(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_431(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_431(t0,t1,t2);}

C_noret_decl(trf_443)
static void C_fcall trf_443(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_443(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_443(t0,t1,t2);}

C_noret_decl(trf_477)
static void C_fcall trf_477(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_477(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_477(t0,t1);}

C_noret_decl(trf_364)
static void C_fcall trf_364(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_364(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_364(t0,t1);}

C_noret_decl(trf_416)
static void C_fcall trf_416(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_416(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_416(t0,t1);}

C_noret_decl(trf_320)
static void C_fcall trf_320(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_320(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_320(t0,t1,t2);}

C_noret_decl(trf_292)
static void C_fcall trf_292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_292(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_292(t0,t1,t2);}

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
C_initialize_lf(lf,95);
lf[1]=C_h_intern(&lf[1],17,"\003sysmake-c-string");
lf[2]=C_static_lambda_info(C_heaptop,28,"(re-compile-pattern a15 a06)");
lf[4]=C_static_lambda_info(C_heaptop,16,"(finalizer a913)");
lf[6]=C_h_intern(&lf[6],9,"\003syserror");
lf[7]=C_h_intern(&lf[7],17,"\003sysstring-append");
lf[8]=C_static_string(C_heaptop,37,"can not compile regular expression - ");
lf[9]=C_h_intern(&lf[9],17,"\003syspeek-c-string");
lf[10]=C_static_lambda_info(C_heaptop,27,"(re-compile regexp15 loc16)");
lf[11]=C_h_intern(&lf[11],6,"regexp");
lf[12]=C_h_intern(&lf[12],14,"set-finalizer!");
lf[13]=C_static_lambda_info(C_heaptop,19,"(regexp rx23 . o24)");
lf[14]=C_h_intern(&lf[14],7,"regexp\077");
lf[15]=C_static_lambda_info(C_heaptop,13,"(regexp\077 x28)");
lf[17]=C_static_lambda_info(C_heaptop,19,"(re-register-index)");
lf[19]=C_static_lambda_info(C_heaptop,10,"(loop i37)");
lf[20]=C_static_lambda_info(C_heaptop,33,"(gather-result-positions n33 c35)");
lf[21]=C_h_intern(&lf[21],9,"substring");
lf[23]=C_static_lambda_info(C_heaptop,13,"(a524 poss46)");
lf[24]=C_h_intern(&lf[24],7,"\003sysmap");
lf[25]=C_static_lambda_info(C_heaptop,35,"(gather-results result41 str42 c44)");
lf[27]=C_static_lambda_info(C_heaptop,34,"(re-match a5055 a4956 a4857 a4758)");
lf[29]=C_static_lambda_info(C_heaptop,18,"(re-capture-count)");
lf[30]=C_h_intern(&lf[30],13,"string-append");
lf[31]=C_static_string(C_heaptop,0,"");
lf[32]=C_static_string(C_heaptop,1,"^");
lf[33]=C_static_string(C_heaptop,1,"$");
lf[34]=C_h_intern(&lf[34],15,"\003syssignal-hook");
lf[35]=C_h_intern(&lf[35],11,"\000type-error");
lf[36]=C_static_string(C_heaptop,51,"bad argument type - not a string or compiled regexp");
lf[37]=C_static_lambda_info(C_heaptop,38,"(prepare regexp71 str72 start73 loc74)");
lf[38]=C_h_intern(&lf[38],12,"string-match");
lf[39]=C_static_lambda_info(C_heaptop,39,"(string-match regexp82 str83 . start84)");
lf[40]=C_h_intern(&lf[40],22,"string-match-positions");
lf[41]=C_static_lambda_info(C_heaptop,49,"(string-match-positions regexp86 str87 . start88)");
lf[42]=C_static_string(C_heaptop,51,"bad argument type - not a string or compiled regexp");
lf[43]=C_static_lambda_info(C_heaptop,48,"(prepare regexp95 str96 start-and-range97 loc98)");
lf[44]=C_h_intern(&lf[44],13,"string-search");
lf[45]=C_static_lambda_info(C_heaptop,53,"(string-search regexp109 str110 . start-and-range111)");
lf[46]=C_h_intern(&lf[46],23,"string-search-positions");
lf[47]=C_static_lambda_info(C_heaptop,63,"(string-search-positions regexp113 str114 . start-and-range115)");
lf[48]=C_h_intern(&lf[48],7,"reverse");
lf[49]=C_h_intern(&lf[49],19,"string-split-fields");
lf[50]=C_h_intern(&lf[50],6,"\000infix");
lf[51]=C_h_intern(&lf[51],7,"\000suffix");
lf[52]=C_static_lambda_info(C_heaptop,30,"(f_869 start143 from144 to145)");
lf[53]=C_static_lambda_info(C_heaptop,30,"(f_874 start146 from147 to148)");
lf[54]=C_static_lambda_info(C_heaptop,21,"(loop ms150 start151)");
lf[55]=C_static_string(C_heaptop,31,"record does not end with suffix");
lf[56]=C_static_lambda_info(C_heaptop,22,"(f_885 ms132 start133)");
lf[57]=C_static_string(C_heaptop,0,"");
lf[58]=C_static_lambda_info(C_heaptop,22,"(f_905 ms134 start135)");
lf[59]=C_static_lambda_info(C_heaptop,22,"(f_931 ms136 start137)");
lf[60]=C_static_lambda_info(C_heaptop,58,"(string-split-fields regexp122 str123 . mode-and-start124)");
lf[61]=C_h_intern(&lf[61],11,"make-string");
lf[62]=C_h_intern(&lf[62],17,"string-substitute");
lf[63]=C_static_lambda_info(C_heaptop,6,"(push)");
lf[64]=C_static_lambda_info(C_heaptop,24,"(loop start177 index178)");
lf[65]=C_static_lambda_info(C_heaptop,23,"(substitute matches175)");
lf[66]=C_h_intern(&lf[66],21,"\003sysfragments->string");
lf[67]=C_static_lambda_info(C_heaptop,24,"(loop index187 count188)");
lf[68]=C_static_lambda_info(C_heaptop,57,"(string-substitute regex162 subst163 string164 . flag165)");
lf[69]=C_h_intern(&lf[69],18,"string-substitute*");
lf[70]=C_static_lambda_info(C_heaptop,21,"(loop str208 smap209)");
lf[71]=C_static_lambda_info(C_heaptop,45,"(string-substitute* str203 smap204 . mode205)");
lf[72]=C_h_intern(&lf[72],12,"list->string");
lf[73]=C_h_intern(&lf[73],12,"string->list");
lf[74]=C_h_intern(&lf[74],12,"glob->regexp");
lf[75]=C_static_lambda_info(C_heaptop,19,"(g227 c231 more232)");
lf[76]=C_h_intern(&lf[76],5,"error");
lf[77]=C_static_string(C_heaptop,33,"unexpected end of character class");
lf[78]=C_h_intern(&lf[78],15,"\003sysmatch-error");
lf[79]=C_static_lambda_info(C_heaptop,15,"(loop2 rest222)");
lf[80]=C_static_lambda_info(C_heaptop,12,"(loop cs218)");
lf[81]=C_static_lambda_info(C_heaptop,19,"(glob->regexp s216)");
lf[82]=C_h_intern(&lf[82],4,"grep");
lf[83]=C_static_lambda_info(C_heaptop,13,"(loop lst248)");
lf[84]=C_static_lambda_info(C_heaptop,19,"(grep rx245 lst246)");
lf[85]=C_h_intern(&lf[85],18,"open-output-string");
lf[86]=C_h_intern(&lf[86],17,"get-output-string");
lf[87]=C_h_intern(&lf[87],13,"regexp-escape");
lf[88]=C_h_intern(&lf[88],16,"\003syswrite-char-0");
lf[89]=C_static_lambda_info(C_heaptop,11,"(loop i259)");
lf[90]=C_static_lambda_info(C_heaptop,22,"(regexp-escape str255)");
lf[91]=C_h_intern(&lf[91],17,"register-feature!");
lf[92]=C_h_intern(&lf[92],5,"regex");
lf[93]=C_h_intern(&lf[93],4,"pcre");
lf[94]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,95,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_290,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* regex.scm: 87   register-feature! */
t3=*((C_word*)lf[91]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[92],lf[93]);}

/* k288 */
static void C_ccall f_290(C_word c,C_word t0,C_word t1){
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
C_word ab[100],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_290,2,t0,t1);}
t2=C_mutate(&lf[0],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_292,a[2]=lf[2],tmp=(C_word)a,a+=3,tmp));
t3=C_mutate(&lf[3],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_310,a[2]=lf[4],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[5],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_320,a[2]=lf[10],tmp=(C_word)a,a+=3,tmp));
t5=C_mutate((C_word*)lf[11]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_399,a[2]=lf[13],tmp=(C_word)a,a+=3,tmp));
t6=C_mutate((C_word*)lf[14]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_418,a[2]=lf[15],tmp=(C_word)a,a+=3,tmp));
t7=C_mutate(&lf[16],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_424,a[2]=lf[17],tmp=(C_word)a,a+=3,tmp));
t8=C_mutate(&lf[18],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_431,a[2]=lf[20],tmp=(C_word)a,a+=3,tmp));
t9=*((C_word*)lf[21]+1);
t10=C_mutate(&lf[22],(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_513,a[2]=t9,a[3]=lf[25],tmp=(C_word)a,a+=4,tmp));
t11=C_mutate(&lf[26],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_534,a[2]=lf[27],tmp=(C_word)a,a+=3,tmp));
t12=C_mutate(&lf[28],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_563,a[2]=lf[29],tmp=(C_word)a,a+=3,tmp));
t13=C_SCHEME_FALSE;
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=C_SCHEME_FALSE;
t16=(*a=C_VECTOR_TYPE|1,a[1]=t15,tmp=(C_word)a,a+=2,tmp);
t17=*((C_word*)lf[30]+1);
t18=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_573,a[2]=t17,a[3]=t16,a[4]=t14,a[5]=lf[37],tmp=(C_word)a,a+=6,tmp);
t19=C_mutate((C_word*)lf[38]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_652,a[2]=t18,a[3]=t16,a[4]=lf[39],tmp=(C_word)a,a+=5,tmp));
t20=C_mutate((C_word*)lf[40]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_661,a[2]=t18,a[3]=t16,a[4]=lf[41],tmp=(C_word)a,a+=5,tmp));
t21=C_SCHEME_FALSE;
t22=(*a=C_VECTOR_TYPE|1,a[1]=t21,tmp=(C_word)a,a+=2,tmp);
t23=C_SCHEME_FALSE;
t24=(*a=C_VECTOR_TYPE|1,a[1]=t23,tmp=(C_word)a,a+=2,tmp);
t25=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_670,a[2]=t24,a[3]=t22,a[4]=lf[43],tmp=(C_word)a,a+=5,tmp);
t26=C_mutate((C_word*)lf[44]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_749,a[2]=t25,a[3]=t24,a[4]=lf[45],tmp=(C_word)a,a+=5,tmp));
t27=C_mutate((C_word*)lf[46]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_758,a[2]=t25,a[3]=t24,a[4]=lf[47],tmp=(C_word)a,a+=5,tmp));
t28=*((C_word*)lf[48]+1);
t29=*((C_word*)lf[21]+1);
t30=*((C_word*)lf[46]+1);
t31=C_mutate((C_word*)lf[49]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_767,a[2]=t28,a[3]=t30,a[4]=t29,a[5]=lf[60],tmp=(C_word)a,a+=6,tmp));
t32=*((C_word*)lf[21]+1);
t33=*((C_word*)lf[48]+1);
t34=*((C_word*)lf[61]+1);
t35=*((C_word*)lf[46]+1);
t36=C_mutate((C_word*)lf[62]+1,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_949,a[2]=t35,a[3]=t33,a[4]=t32,a[5]=lf[68],tmp=(C_word)a,a+=6,tmp));
t37=*((C_word*)lf[62]+1);
t38=C_mutate((C_word*)lf[69]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1171,a[2]=t37,a[3]=lf[71],tmp=(C_word)a,a+=4,tmp));
t39=*((C_word*)lf[72]+1);
t40=*((C_word*)lf[73]+1);
t41=C_mutate((C_word*)lf[74]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1223,a[2]=t40,a[3]=t39,a[4]=lf[81],tmp=(C_word)a,a+=5,tmp));
t42=*((C_word*)lf[44]+1);
t43=C_mutate((C_word*)lf[82]+1,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1491,a[2]=t42,a[3]=lf[84],tmp=(C_word)a,a+=4,tmp));
t44=*((C_word*)lf[85]+1);
t45=*((C_word*)lf[86]+1);
t46=C_mutate((C_word*)lf[87]+1,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1531,a[2]=t44,a[3]=t45,a[4]=lf[90],tmp=(C_word)a,a+=5,tmp));
t47=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t47+1)))(2,t47,C_SCHEME_UNDEFINED);}

/* regexp-escape in k288 */
static void C_ccall f_1531(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1531,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[87]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1538,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 395  open-output-string */
t5=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k1536 in regexp-escape in k288 */
static void C_ccall f_1538(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1538,2,t0,t1);}
t2=(C_word)C_block_size(((C_word*)t0)[4]);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1546,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[3],a[6]=t2,a[7]=lf[89],tmp=(C_word)a,a+=8,tmp));
t6=((C_word*)t4)[1];
f_1546(t6,((C_word*)t0)[2],C_fix(0));}

/* loop in k1536 in regexp-escape in k288 */
static void C_fcall f_1546(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1546,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[6]))){
/* regex.scm: 398  get-output-string */
t3=((C_word*)t0)[5];
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,((C_word*)t0)[4]);}
else{
t3=(C_word)C_subchar(((C_word*)t0)[3],t2);
if(C_truep((C_truep((C_word)C_eqp(t3,C_make_character(46)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(92)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(63)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(42)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(43)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(94)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(36)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(40)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(41)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(91)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(93)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(124)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(123)))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,C_make_character(125)))?C_SCHEME_TRUE:C_SCHEME_FALSE)))))))))))))))){
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1565,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* regex.scm: 401  ##sys#write-char-0 */
t5=*((C_word*)lf[88]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_make_character(92),((C_word*)t0)[4]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1578,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 405  ##sys#write-char-0 */
t5=*((C_word*)lf[88]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,(C_word)C_subchar(((C_word*)t0)[3],t2),((C_word*)t0)[4]);}}}

/* k1576 in loop in k1536 in regexp-escape in k288 */
static void C_ccall f_1578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* regex.scm: 406  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1546(t3,((C_word*)t0)[2],t2);}

/* k1563 in loop in k1536 in regexp-escape in k288 */
static void C_ccall f_1565(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1565,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1568,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 402  ##sys#write-char-0 */
t3=*((C_word*)lf[88]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,(C_word)C_subchar(((C_word*)t0)[3],((C_word*)t0)[6]),((C_word*)t0)[2]);}

/* k1566 in k1563 in loop in k1536 in regexp-escape in k288 */
static void C_ccall f_1568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* regex.scm: 403  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1546(t3,((C_word*)t0)[2],t2);}

/* grep in k288 */
static void C_ccall f_1491(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1491,4,t0,t1,t2,t3);}
t4=(C_word)C_i_check_list_2(t3,lf[82]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1500,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t6,a[5]=lf[83],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_1500(t8,t1,t3);}

/* loop in grep in k288 */
static void C_fcall f_1500(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1500,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1519,a[2]=t4,a[3]=((C_word*)t0)[4],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* regex.scm: 383  string-search */
t6=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,((C_word*)t0)[2],t3);}}

/* k1517 in loop in grep in k288 */
static void C_ccall f_1519(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1519,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1526,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 384  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1500(t3,t2,((C_word*)t0)[2]);}
else{
/* regex.scm: 385  loop */
t2=((C_word*)((C_word*)t0)[3])[1];
f_1500(t2,((C_word*)t0)[5],((C_word*)t0)[2]);}}

/* k1524 in k1517 in loop in grep in k288 */
static void C_ccall f_1526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1526,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* glob->regexp in k288 */
static void C_ccall f_1223(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1223,3,t0,t1,t2);}
t3=(C_word)C_i_check_string_2(t2,lf[74]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1234,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1238,a[2]=t4,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 346  string->list */
t6=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k1236 in glob->regexp in k288 */
static void C_ccall f_1238(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1238,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1240,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=lf[80],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_1240(t5,((C_word*)t0)[2],t1);}

/* loop in k1236 in glob->regexp in k288 */
static void C_fcall f_1240(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(25);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1240,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
switch(t3){
case C_make_character(42):
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1270,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* regex.scm: 351  loop */
t16=t5;
t17=t4;
t1=t16;
t2=t17;
goto loop;
case C_make_character(63):
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1283,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* regex.scm: 352  loop */
t16=t5;
t17=t4;
t1=t16;
t2=t17;
goto loop;
case C_make_character(91):
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1296,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1298,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t7,a[5]=lf[79],tmp=(C_word)a,a+=6,tmp));
t9=((C_word*)t7)[1];
f_1298(t9,t5,t4);
default:
t5=(C_word)C_u_i_char_alphabeticp(t3);
t6=(C_truep(t5)?t5:(C_word)C_u_i_char_numericp(t3));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1475,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 371  loop */
t16=t7;
t17=t4;
t1=t16;
t2=t17;
goto loop;}
else{
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1486,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 372  loop */
t16=t7;
t17=t4;
t1=t16;
t2=t17;
goto loop;}}}}

/* k1484 in loop in k1236 in glob->regexp in k288 */
static void C_ccall f_1486(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1486,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,C_make_character(92),t2));}

/* k1473 in loop in k1236 in glob->regexp in k288 */
static void C_ccall f_1475(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1475,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* loop2 in loop in k1236 in glob->regexp in k288 */
static void C_fcall f_1298(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(17);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1298,NULL,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1300,a[2]=((C_word*)t0)[4],a[3]=lf[75],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_eqp(t4,C_make_character(93));
if(C_truep(t5)){
t6=(C_word)C_i_cdr(t2);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1330,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* regex.scm: 359  loop */
t8=((C_word*)((C_word*)t0)[3])[1];
f_1240(t8,t7,t6);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_eqp(t6,C_make_character(45));
if(C_truep(t7)){
t8=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t8))){
t9=(C_word)C_i_cadr(t2);
t10=(C_word)C_i_cddr(t2);
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1359,a[2]=t1,a[3]=t9,tmp=(C_word)a,a+=4,tmp);
/* loop2221 */
t22=t11;
t23=t10;
t1=t22;
t2=t23;
goto loop;}
else{
t9=(C_word)C_i_car(t2);
t10=(C_word)C_i_cdr(t2);
/* g227230 */
t11=t3;
f_1300(t11,t1,t9,t10);}}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1380,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_pairp(t9))){
t10=(C_word)C_i_cadr(t2);
t11=(C_word)C_eqp(t10,C_make_character(45));
if(C_truep(t11)){
t12=(C_word)C_i_cddr(t2);
t13=t8;
f_1380(t13,(C_word)C_i_pairp(t12));}
else{
t12=t8;
f_1380(t12,C_SCHEME_FALSE);}}
else{
t10=t8;
f_1380(t10,C_SCHEME_FALSE);}}}}
else{
if(C_truep((C_word)C_i_nullp(t2))){
/* error */
t4=*((C_word*)lf[76]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[74],lf[77],((C_word*)t0)[2]);}
else{
/* ##sys#match-error */
t4=*((C_word*)lf[78]+1);
((C_proc3)(void*)(*((C_word*)t4+1)))(3,t4,t1,t2);}}}

/* k1378 in loop2 in loop in k1236 in glob->regexp in k288 */
static void C_fcall f_1380(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_1380,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_caddr(((C_word*)t0)[5]);
t4=(C_word)C_i_cdddr(((C_word*)t0)[5]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1404,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* loop2221 */
t6=((C_word*)((C_word*)t0)[3])[1];
f_1298(t6,t5,t4);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* g227230 */
t4=((C_word*)t0)[2];
f_1300(t4,((C_word*)t0)[4],t2,t3);}}

/* k1402 in k1378 in loop2 in loop in k1236 in glob->regexp in k288 */
static void C_ccall f_1404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1404,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,C_make_character(45),t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t3));}

/* k1357 in loop2 in loop in k1236 in glob->regexp in k288 */
static void C_ccall f_1359(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1359,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,C_make_character(45),t2));}

/* k1328 in loop2 in loop in k1236 in glob->regexp in k288 */
static void C_ccall f_1330(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1330,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_make_character(93),t1));}

/* g227 in loop2 in loop in k1236 in glob->regexp in k288 */
static void C_fcall f_1300(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1300,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1308,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 365  loop2 */
t5=((C_word*)((C_word*)t0)[2])[1];
f_1298(t5,t4,t3);}

/* k1306 in g227 in loop2 in loop in k1236 in glob->regexp in k288 */
static void C_ccall f_1308(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1308,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k1294 in loop in k1236 in glob->regexp in k288 */
static void C_ccall f_1296(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1296,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_make_character(91),t1));}

/* k1281 in loop in k1236 in glob->regexp in k288 */
static void C_ccall f_1283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1283,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_make_character(46),t1));}

/* k1268 in loop in k1236 in glob->regexp in k288 */
static void C_ccall f_1270(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1270,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_make_character(42),t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,C_make_character(46),t2));}

/* k1232 in glob->regexp in k288 */
static void C_ccall f_1234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 345  list->string */
t2=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* string-substitute* in k288 */
static void C_ccall f_1171(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr4rv,(void*)f_1171r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_1171r(t0,t1,t2,t3,t4);}}

static void C_ccall f_1171r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word t12;
C_word *a=C_alloc(8);
t5=(C_word)C_i_check_string_2(t2,lf[69]);
t6=(C_word)C_i_check_list_2(t3,lf[69]);
t7=(C_word)C_notvemptyp(t4);
t8=(C_truep(t7)?(C_word)C_i_vector_ref(t4,C_fix(0)):C_SCHEME_FALSE);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1186,a[2]=t8,a[3]=((C_word*)t0)[2],a[4]=t10,a[5]=lf[70],tmp=(C_word)a,a+=6,tmp));
t12=((C_word*)t10)[1];
f_1186(t12,t1,t2,t3);}

/* loop in string-substitute* in k288 */
static void C_fcall f_1186(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1186,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t2);}
else{
t4=(C_word)C_slot(t3,C_fix(0));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1203,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_car(t4);
t7=(C_word)C_i_cdr(t4);
/* regex.scm: 334  string-substitute */
t8=((C_word*)t0)[3];
((C_proc6)C_retrieve_proc(t8))(6,t8,t5,t6,t7,t2,((C_word*)t0)[2]);}}

/* k1201 in loop in string-substitute* in k288 */
static void C_ccall f_1203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* regex.scm: 334  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1186(t3,((C_word*)t0)[2],t1,t2);}

/* string-substitute in k288 */
static void C_ccall f_949(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+34)){
C_save_and_reclaim((void*)tr5rv,(void*)f_949r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest_vector(a,C_rest_count(0));
f_949r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_949r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word *a=C_alloc(34);
t6=(C_word)C_i_check_string_2(t3,lf[62]);
t7=(C_word)C_notvemptyp(t5);
t8=(C_truep(t7)?(C_word)C_i_vector_ref(t5,C_fix(0)):C_fix(1));
t9=(C_word)C_block_size(t3);
t10=(C_word)C_fixnum_difference(t9,C_fix(1));
t11=C_SCHEME_END_OF_LIST;
t12=(*a=C_VECTOR_TYPE|1,a[1]=t11,tmp=(C_word)a,a+=2,tmp);
t13=C_fix(0);
t14=(*a=C_VECTOR_TYPE|1,a[1]=t13,tmp=(C_word)a,a+=2,tmp);
t15=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_964,a[2]=t14,a[3]=t12,a[4]=lf[63],tmp=(C_word)a,a+=5,tmp);
t16=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_979,a[2]=t4,a[3]=t9,a[4]=((C_word*)t0)[4],a[5]=t3,a[6]=t15,a[7]=t10,a[8]=lf[65],tmp=(C_word)a,a+=9,tmp);
t17=C_SCHEME_UNDEFINED;
t18=(*a=C_VECTOR_TYPE|1,a[1]=t17,tmp=(C_word)a,a+=2,tmp);
t19=C_set_block_item(t18,0,(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1085,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t12,a[5]=((C_word*)t0)[3],a[6]=t14,a[7]=t4,a[8]=((C_word*)t0)[4],a[9]=t16,a[10]=t18,a[11]=t15,a[12]=t8,a[13]=lf[67],tmp=(C_word)a,a+=14,tmp));
t20=((C_word*)t18)[1];
f_1085(t20,t1,C_fix(0),C_fix(1));}

/* loop in string-substitute in k288 */
static void C_fcall f_1085(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1085,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_1089,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=t2,a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t1,a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=t3,a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
/* regex.scm: 309  string-search-positions */
t5=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[2],((C_word*)t0)[7],t2);}

/* k1087 in loop in string-substitute in k288 */
static void C_ccall f_1089(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1089,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(t1);
t3=(C_word)C_i_cadr(t2);
t4=(C_word)C_fixnump(((C_word*)t0)[13]);
t5=(C_word)C_i_not(t4);
t6=(C_truep(t5)?t5:(C_word)C_eqp(((C_word*)t0)[12],((C_word*)t0)[13]));
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1120,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=t3,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[11],tmp=(C_word)a,a+=8,tmp);
t8=(C_word)C_i_car(t2);
/* regex.scm: 314  substring */
t9=((C_word*)t0)[7];
((C_proc5)C_retrieve_proc(t9))(5,t9,t7,((C_word*)t0)[6],((C_word*)t0)[5],t8);}
else{
t7=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1138,a[2]=t3,a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
/* regex.scm: 318  substring */
t8=((C_word*)t0)[7];
((C_proc5)C_retrieve_proc(t8))(5,t8,t7,((C_word*)t0)[6],((C_word*)t0)[5],t3);}}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1159,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[11],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_block_size(((C_word*)t0)[6]);
/* regex.scm: 321  substring */
t4=((C_word*)t0)[7];
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,((C_word*)t0)[6],((C_word*)t0)[5],t3);}}

/* k1157 in k1087 in loop in string-substitute in k288 */
static void C_ccall f_1159(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1159,2,t0,t1);}
t2=f_964(C_a_i(&a,3),((C_word*)t0)[6],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1155,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 322  reverse */
t4=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* k1153 in k1157 in k1087 in loop in string-substitute in k288 */
static void C_ccall f_1155(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 322  ##sys#fragments->string */
t2=*((C_word*)lf[66]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1],t1);}

/* k1136 in k1087 in loop in string-substitute in k288 */
static void C_ccall f_1138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1138,2,t0,t1);}
t2=f_964(C_a_i(&a,3),((C_word*)t0)[6],t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(1));
/* regex.scm: 319  loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_1085(t4,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* k1118 in k1087 in loop in string-substitute in k288 */
static void C_ccall f_1120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1120,2,t0,t1);}
t2=f_964(C_a_i(&a,3),((C_word*)t0)[7],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1113,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 315  substitute */
t4=((C_word*)t0)[3];
f_979(t4,t3,((C_word*)t0)[2]);}

/* k1111 in k1118 in k1087 in loop in string-substitute in k288 */
static void C_ccall f_1113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 316  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1085(t2,((C_word*)t0)[3],((C_word*)t0)[2],C_SCHEME_FALSE);}

/* substitute in string-substitute in k288 */
static void C_fcall f_979(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_979,NULL,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_985,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=lf[64],tmp=(C_word)a,a+=11,tmp));
t6=((C_word*)t4)[1];
f_985(t6,t1,C_fix(0),C_fix(0));}

/* loop in substitute in string-substitute in k288 */
static void C_fcall f_985(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_985,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[9]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_999,a[2]=((C_word*)t0)[8],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t5)){
t6=t4;
f_999(2,t6,((C_word*)t0)[7]);}
else{
/* regex.scm: 296  substring */
t6=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t6))(5,t6,t4,((C_word*)t0)[7],t2,((C_word*)t0)[5]);}}
else{
t4=(C_word)C_subchar(((C_word*)t0)[7],t3);
t5=(C_word)C_fixnum_plus(t3,C_fix(1));
t6=(C_word)C_eqp(t4,C_make_character(92));
if(C_truep(t6)){
t7=(C_word)C_subchar(((C_word*)t0)[7],t5);
t8=(C_word)C_eqp(C_make_character(92),t7);
t9=(C_truep(t8)?C_SCHEME_FALSE:(C_word)C_u_i_char_numericp(t7));
if(C_truep(t9)){
t10=(C_word)C_fix((C_word)C_character_code(t7));
t11=(C_word)C_fixnum_difference(t10,C_fix(48));
t12=(C_word)C_i_list_ref(((C_word*)t0)[4],t11);
t13=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1052,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[6],a[4]=t12,a[5]=t5,a[6]=t1,a[7]=((C_word*)t0)[3],a[8]=t3,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* regex.scm: 303  substring */
t14=((C_word*)t0)[6];
((C_proc5)C_retrieve_proc(t14))(5,t14,t13,((C_word*)t0)[7],t2,t3);}
else{
t10=(C_word)C_fixnum_plus(t5,C_fix(1));
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

/* k1050 in loop in substitute in string-substitute in k288 */
static void C_ccall f_1052(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1052,2,t0,t1);}
t2=f_964(C_a_i(&a,3),((C_word*)t0)[9],t1);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1040,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[9],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[4]);
t5=(C_word)C_i_cadr(((C_word*)t0)[4]);
/* regex.scm: 304  substring */
t6=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t6))(5,t6,t3,((C_word*)t0)[2],t4,t5);}

/* k1038 in k1050 in loop in substitute in string-substitute in k288 */
static void C_ccall f_1040(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1040,2,t0,t1);}
t2=f_964(C_a_i(&a,3),((C_word*)t0)[6],t1);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[5],C_fix(2));
/* regex.scm: 305  loop */
t4=((C_word*)((C_word*)t0)[4])[1];
f_985(t4,((C_word*)t0)[3],t3,((C_word*)t0)[2]);}

/* k997 in loop in substitute in string-substitute in k288 */
static void C_ccall f_999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_999,2,t0,t1);}
/* regex.scm: 296  push */
t2=((C_word*)t0)[3];
((C_proc2)C_retrieve_proc(t2))(2,t2,f_964(C_a_i(&a,3),((C_word*)t0)[2],t1));}

/* push in string-substitute in k288 */
static C_word C_fcall f_964(C_word *a,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_stack_check;
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=(C_word)C_block_size(t1);
t5=(C_word)C_fixnum_plus(((C_word*)((C_word*)t0)[2])[1],t4);
t6=C_mutate(((C_word *)((C_word*)t0)[2])+1,t5);
return(t6);}

/* string-split-fields in k288 */
static void C_ccall f_767(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+28)){
C_save_and_reclaim((void*)tr4rv,(void*)f_767r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_767r(t0,t1,t2,t3,t4);}}

static void C_ccall f_767r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word *a=C_alloc(28);
t5=(C_word)C_i_check_string_2(t3,lf[49]);
t6=(C_word)C_block_size(t4);
t7=(C_word)C_block_size(t3);
t8=(C_word)C_fixnum_greaterp(t6,C_fix(0));
t9=(C_truep(t8)?(C_word)C_i_vector_ref(t4,C_fix(0)):C_SCHEME_TRUE);
t10=(C_word)C_fixnum_greaterp(t6,C_fix(1));
t11=(C_truep(t10)?(C_word)C_i_vector_ref(t4,C_fix(1)):C_fix(0));
t12=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_786,a[2]=t11,a[3]=t1,a[4]=t2,a[5]=((C_word*)t0)[3],a[6]=t7,a[7]=t3,a[8]=((C_word*)t0)[4],a[9]=t9,tmp=(C_word)a,a+=10,tmp);
t13=(C_word)C_eqp(t9,lf[51]);
if(C_truep(t13)){
t14=t12;
f_786(t14,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_885,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t3,a[5]=t7,a[6]=lf[56],tmp=(C_word)a,a+=7,tmp));}
else{
t14=(C_word)C_eqp(t9,lf[50]);
t15=t12;
f_786(t15,(C_truep(t14)?(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_905,a[2]=t3,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],a[5]=t7,a[6]=lf[58],tmp=(C_word)a,a+=7,tmp):(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_931,a[2]=((C_word*)t0)[2],a[3]=lf[59],tmp=(C_word)a,a+=4,tmp)));}}

/* f_931 in string-split-fields in k288 */
static void C_ccall f_931(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_931,4,t0,t1,t2,t3);}
/* regex.scm: 258  reverse */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t2);}

/* f_905 in string-split-fields in k288 */
static void C_ccall f_905(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_905,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t3,((C_word*)t0)[5]))){
t4=(C_word)C_a_i_cons(&a,2,lf[57],t2);
/* regex.scm: 256  reverse */
t5=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t5))(3,t5,t1,t4);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_930,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 257  substring */
t5=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[2],t3,((C_word*)t0)[5]);}}

/* k928 */
static void C_ccall f_930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_930,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* regex.scm: 257  reverse */
t3=((C_word*)t0)[3];
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}

/* f_885 in string-split-fields in k288 */
static void C_ccall f_885(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word *a;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_885,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_lessp(t3,((C_word*)t0)[5]))){
/* regex.scm: 251  ##sys#error */
t4=*((C_word*)lf[6]+1);
((C_proc6)(void*)(*((C_word*)t4+1)))(6,t4,t1,lf[49],lf[55],((C_word*)t0)[4],((C_word*)t0)[3]);}
else{
/* regex.scm: 252  reverse */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t2);}}

/* k784 in string-split-fields in k288 */
static void C_fcall f_786(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_786,NULL,2,t0,t1);}
t2=(C_word)C_eqp(((C_word*)t0)[9],lf[50]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[9],lf[51]));
t4=(C_truep(t3)?(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_869,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=lf[52],tmp=(C_word)a,a+=5,tmp):(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_874,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[8],a[4]=lf[53],tmp=(C_word)a,a+=5,tmp));
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_794,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=t4,a[6]=t6,a[7]=t1,a[8]=((C_word*)t0)[6],a[9]=lf[54],tmp=(C_word)a,a+=10,tmp));
t8=((C_word*)t6)[1];
f_794(t8,((C_word*)t0)[3],C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);}

/* loop in k784 in string-split-fields in k288 */
static void C_fcall f_794(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_794,NULL,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_798,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t3,a[5]=t2,a[6]=t1,a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],tmp=(C_word)a,a+=9,tmp);
/* regex.scm: 263  string-search-positions */
t5=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[3],((C_word*)t0)[2],t3);}

/* k796 in loop in k784 in string-split-fields in k288 */
static void C_ccall f_798(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_798,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(t1);
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cadr(t2);
t5=(C_word)C_eqp(t3,t4);
if(C_truep(t5)){
t6=(C_word)C_eqp(t4,((C_word*)t0)[8]);
if(C_truep(t6)){
/* regex.scm: 270  fini */
t7=((C_word*)t0)[7];
((C_proc4)C_retrieve_proc(t7))(4,t7,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_840,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[3],a[4]=t4,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_fixnum_plus(t3,C_fix(1));
t9=(C_word)C_fixnum_plus(t4,C_fix(2));
/* regex.scm: 271  fetch */
t10=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t10))(5,t10,t7,((C_word*)t0)[4],t8,t9);}}
else{
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_859,a[2]=t4,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* regex.scm: 272  fetch */
t7=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t7))(5,t7,t6,((C_word*)t0)[4],t3,t4);}}
else{
/* regex.scm: 273  fini */
t2=((C_word*)t0)[7];
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4]);}}

/* k857 in k796 in loop in k784 in string-split-fields in k288 */
static void C_ccall f_859(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_859,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* regex.scm: 272  loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_794(t3,((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k838 in k796 in loop in k784 in string-split-fields in k288 */
static void C_ccall f_840(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_840,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[4],C_fix(1));
/* regex.scm: 271  loop */
t4=((C_word*)((C_word*)t0)[3])[1];
f_794(t4,((C_word*)t0)[2],t2,t3);}

/* f_874 in k784 in string-split-fields in k288 */
static void C_ccall f_874(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_874,5,t0,t1,t2,t3,t4);}
/* regex.scm: 261  substring */
t5=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t5))(5,t5,t1,((C_word*)t0)[2],t3,t4);}

/* f_869 in k784 in string-split-fields in k288 */
static void C_ccall f_869(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_869,5,t0,t1,t2,t3,t4);}
/* regex.scm: 260  substring */
t5=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t5))(5,t5,t1,((C_word*)t0)[2],t2,t3);}

/* string-search-positions in k288 */
static void C_ccall f_758(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_758r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_758r(t0,t1,t2,t3,t4);}}

static void C_ccall f_758r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_762,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 231  prepare */
t6=((C_word*)t0)[2];
f_670(t6,t5,t2,t3,t4,lf[46]);}

/* k760 in string-search-positions in k288 */
static void C_ccall f_762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 232  gather-result-positions */
f_431(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* string-search in k288 */
static void C_ccall f_749(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_749r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_749r(t0,t1,t2,t3,t4);}}

static void C_ccall f_749r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_753,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 226  prepare */
t6=((C_word*)t0)[2];
f_670(t6,t5,t2,t3,t4,lf[44]);}

/* k751 in string-search in k288 */
static void C_ccall f_753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 227  gather-results */
t2=lf[22];
f_513(t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* prepare in k288 */
static void C_fcall f_670(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_670,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_check_string_2(t3,t5);
t7=(C_truep((C_word)C_blockp(t4))?(C_word)C_slot(t4,C_fix(1)):C_SCHEME_FALSE);
t8=(C_truep(t7)?(C_word)C_slot(t4,C_fix(0)):C_fix(0));
t9=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_683,a[2]=t3,a[3]=t2,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=((C_word*)t0)[3],a[7]=t5,a[8]=t8,tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_blockp(t7))){
t10=t9;
f_683(t10,(C_word)C_slot(t7,C_fix(0)));}
else{
t10=(C_word)C_block_size(t3);
t11=t9;
f_683(t11,(C_word)C_fixnum_difference(t10,t8));}}

/* k681 in prepare in k288 */
static void C_fcall f_683(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_683,NULL,2,t0,t1);}
t2=(C_word)C_i_check_exact_2(((C_word*)t0)[8],((C_word*)t0)[7]);
t3=(C_word)C_i_check_exact_2(t1,((C_word*)t0)[7]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_693,a[2]=t1,a[3]=((C_word*)t0)[8],a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[3]))){
/* regex.scm: 216  re-compile */
f_320(t4,((C_word*)t0)[3],((C_word*)t0)[7]);}
else{
if(C_truep((C_word)C_i_structurep(((C_word*)t0)[3],lf[11]))){
t5=t4;
f_693(2,t5,(C_word)C_slot(((C_word*)t0)[3],C_fix(1)));}
else{
/* regex.scm: 218  ##sys#signal-hook */
t5=*((C_word*)lf[34]+1);
((C_proc6)(void*)(*((C_word*)t5+1)))(6,t5,t4,lf[35],((C_word*)t0)[7],lf[42],((C_word*)t0)[3]);}}}

/* k691 in k681 in prepare in k288 */
static void C_ccall f_693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_693,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[8])+1,t1);
t3=f_563(((C_word*)((C_word*)t0)[8])[1]);
t4=(C_word)C_fixnum_plus(C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[7])+1,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_700,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 220  re-match */
f_534(t6,((C_word*)((C_word*)t0)[8])[1],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k698 in k691 in k681 in prepare in k288 */
static void C_ccall f_700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_700,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_703,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[3]))){
/* regex.scm: 221  finalizer */
t3=lf[3];
f_310(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=t2;
f_703(2,t3,C_SCHEME_UNDEFINED);}}

/* k701 in k698 in k691 in k681 in prepare in k288 */
static void C_ccall f_703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* string-match-positions in k288 */
static void C_ccall f_661(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr4r,(void*)f_661r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_661r(t0,t1,t2,t3,t4);}}

static void C_ccall f_661r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(4);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_665,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 198  prepare */
t6=((C_word*)t0)[2];
f_573(t6,t5,t2,t3,t4,lf[40]);}

/* k663 in string-match-positions in k288 */
static void C_ccall f_665(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 199  gather-result-positions */
f_431(((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* string-match in k288 */
static void C_ccall f_652(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr4r,(void*)f_652r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_652r(t0,t1,t2,t3,t4);}}

static void C_ccall f_652r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(5);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_656,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 193  prepare */
t6=((C_word*)t0)[2];
f_573(t6,t5,t2,t3,t4,lf[38]);}

/* k654 in string-match in k288 */
static void C_ccall f_656(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 194  gather-results */
t2=lf[22];
f_513(t2,((C_word*)t0)[4],t1,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* prepare in k288 */
static void C_fcall f_573(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_573,NULL,6,t0,t1,t2,t3,t4,t5);}
t6=(C_word)C_i_check_string_2(t3,t5);
t7=(C_word)C_i_pairp(t4);
t8=(C_truep(t7)?(C_word)C_slot(t4,C_fix(0)):C_fix(0));
t9=(C_word)C_i_check_exact_2(t8,t5);
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_587,a[2]=t8,a[3]=t3,a[4]=t2,a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=((C_word*)t0)[4],tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_stringp(t2))){
t11=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_625,a[2]=t5,a[3]=t10,tmp=(C_word)a,a+=4,tmp);
t12=(C_word)C_fixnum_greaterp(t8,C_fix(0));
t13=(C_truep(t12)?lf[31]:lf[32]);
/* regex.scm: 183  string-append */
t14=((C_word*)t0)[2];
((C_proc5)C_retrieve_proc(t14))(5,t14,t11,t13,t2,lf[33]);}
else{
if(C_truep((C_word)C_i_structurep(t2,lf[11]))){
t11=t10;
f_587(2,t11,(C_word)C_slot(t2,C_fix(1)));}
else{
/* regex.scm: 185  ##sys#signal-hook */
t11=*((C_word*)lf[34]+1);
((C_proc6)(void*)(*((C_word*)t11+1)))(6,t11,t10,lf[35],t5,lf[36],t2);}}}

/* k623 in prepare in k288 */
static void C_ccall f_625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 183  re-compile */
f_320(((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k585 in prepare in k288 */
static void C_ccall f_587(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_587,2,t0,t1);}
t2=C_mutate(((C_word *)((C_word*)t0)[7])+1,t1);
t3=f_563(((C_word*)((C_word*)t0)[7])[1]);
t4=(C_word)C_fixnum_plus(C_fix(1),t3);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t4);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_594,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
t7=(C_word)C_block_size(((C_word*)t0)[3]);
t8=(C_word)C_fixnum_difference(t7,((C_word*)t0)[2]);
/* regex.scm: 187  re-match */
f_534(t6,((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[3],((C_word*)t0)[2],t8);}

/* k592 in k585 in prepare in k288 */
static void C_ccall f_594(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_594,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_597,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_stringp(((C_word*)t0)[3]))){
/* regex.scm: 188  finalizer */
t3=lf[3];
f_310(3,t3,t2,((C_word*)((C_word*)t0)[2])[1]);}
else{
t3=t2;
f_597(2,t3,C_SCHEME_UNDEFINED);}}

/* k595 in k592 in k585 in prepare in k288 */
static void C_ccall f_597(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}

/* re-capture-count in k288 */
static C_word C_fcall f_563(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_truep(t1)?(C_word)C_i_foreign_pointer_argumentp(t1):C_SCHEME_FALSE);
return((C_word)stub62(C_SCHEME_UNDEFINED,t2));}

/* re-match in k288 */
static void C_fcall f_534(C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_534,NULL,5,t1,t2,t3,t4,t5);}
t6=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_543,a[2]=t6,a[3]=t1,a[4]=t5,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t3)){
t8=(C_word)C_i_foreign_string_argumentp(t3);
/* ##sys#make-c-string */
t9=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t9+1)))(3,t9,t7,t8);}
else{
t8=t7;
f_543(2,t8,C_SCHEME_FALSE);}}

/* k541 in re-match in k288 */
static void C_ccall f_543(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[5]);
t3=(C_word)C_i_foreign_fixnum_argumentp(((C_word*)t0)[4]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub51(C_SCHEME_UNDEFINED,((C_word*)t0)[2],t1,t2,t3));}

/* gather-results in k288 */
static void C_fcall f_513(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_513,NULL,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_517,a[2]=t1,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 156  gather-result-positions */
f_431(t5,t2,t4);}

/* k515 in gather-results in k288 */
static void C_ccall f_517(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_517,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_525,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=lf[23],tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 158  ##sys#map */
t3=*((C_word*)lf[24]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,t1);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* a524 in k515 in gather-results in k288 */
static void C_ccall f_525(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_525,3,t0,t1,t2);}
if(C_truep(t2)){
C_apply(5,0,t1,((C_word*)t0)[3],((C_word*)t0)[2],t2);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_FALSE);}}

/* gather-result-positions in k288 */
static void C_fcall f_431(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_431,NULL,3,t1,t2,t3);}
if(C_truep((C_word)C_fixnum_greaterp(t2,C_fix(0)))){
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_443,a[2]=t5,a[3]=t2,a[4]=t3,a[5]=lf[19],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_443(t7,t1,C_fix(0));}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}

/* loop in gather-result-positions in k288 */
static void C_fcall f_443(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_443,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[4]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[3]))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_463,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_fixnum_plus(t2,C_fix(1));
/* regex.scm: 144  loop */
t13=t3;
t14=t4;
t1=t13;
t2=t14;
goto loop;}
else{
t3=(C_word)C_fixnum_times(t2,C_fix(2));
t4=f_424(t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_477,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t4,C_fix(0)))){
t6=(C_word)C_fixnum_times(t2,C_fix(2));
t7=(C_word)C_fixnum_plus(t6,C_fix(1));
t8=f_424(t7);
t9=(C_word)C_a_i_cons(&a,2,t8,C_SCHEME_END_OF_LIST);
t10=t5;
f_477(t10,(C_word)C_a_i_cons(&a,2,t4,t9));}
else{
t6=t5;
f_477(t6,C_SCHEME_FALSE);}}}}

/* k475 in loop in gather-result-positions in k288 */
static void C_fcall f_477(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_477,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_481,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* regex.scm: 151  loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_443(t4,t2,t3);}

/* k479 in k475 in loop in gather-result-positions in k288 */
static void C_ccall f_481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_481,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k461 in loop in gather-result-positions in k288 */
static void C_ccall f_463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_463,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,t1));}

/* re-register-index in k288 */
static C_word C_fcall f_424(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_stack_check;
t2=(C_word)C_i_foreign_fixnum_argumentp(t1);
return((C_word)stub30(C_SCHEME_UNDEFINED,t2));}

/* regexp? in k288 */
static void C_ccall f_418(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_418,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_structurep(t2,lf[11]));}

/* regexp in k288 */
static void C_ccall f_399(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+23)){
C_save_and_reclaim((void*)tr3r,(void*)f_399r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_399r(t0,t1,t2,t3);}}

static void C_ccall f_399r(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_word *a=C_alloc(23);
t4=(C_word)C_i_check_string_2(t2,lf[11]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_406,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_416,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t3))){
t7=t6;
f_416(t7,C_fix(0));}
else{
t7=(C_word)C_i_car(t3);
t8=(C_truep(t7)?C_unsigned_int_to_num(&a,PCRE_CASELESS):C_fix(0));
t9=(C_word)C_i_cdr(t3);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_364,a[2]=t8,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_nullp(t9))){
t11=t10;
f_364(t11,C_fix(0));}
else{
t11=(C_word)C_i_car(t9);
t12=(C_truep(t11)?C_unsigned_int_to_num(&a,PCRE_EXTENDED):C_fix(0));
t13=(C_word)C_i_cdr(t9);
t14=(C_word)C_i_pairp(t13);
t15=(C_truep(t14)?(C_word)C_i_cadr(t9):C_SCHEME_FALSE);
t16=(C_truep(t15)?C_unsigned_int_to_num(&a,PCRE_UTF8):C_fix(0));
t17=t10;
f_364(t17,(C_word)C_fixnum_plus(t12,t16));}}}

/* k362 in regexp in k288 */
static void C_fcall f_364(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_416(t2,(C_word)C_fixnum_plus(((C_word*)t0)[2],t1));}

/* k414 in regexp in k288 */
static void C_fcall f_416(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 126  re-compile-pattern */
f_292(((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k404 in regexp in k288 */
static void C_ccall f_406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_406,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_409,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* regex.scm: 127  set-finalizer! */
t3=*((C_word*)lf[12]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,t1,lf[3]);}

/* k407 in k404 in regexp in k288 */
static void C_ccall f_409(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_409,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_record(&a,2,lf[11],((C_word*)t0)[2]));}

/* re-compile in k288 */
static void C_fcall f_320(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_320,NULL,3,t1,t2,t3);}
t4=(C_word)C_i_check_string_2(t2,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_327,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* regex.scm: 108  re-compile-pattern */
f_292(t5,t2,C_fix(0));}

/* k325 in re-compile in k288 */
static void C_ccall f_327(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_327,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_337,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_341,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#peek-c-string */
t4=*((C_word*)lf[9]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_regex_error),C_fix(0));}}

/* k339 in k325 in re-compile in k288 */
static void C_ccall f_341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 110  ##sys#string-append */
t2=*((C_word*)lf[7]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],lf[8],t1);}

/* k335 in k325 in re-compile in k288 */
static void C_ccall f_337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* regex.scm: 110  ##sys#error */
t2=*((C_word*)lf[6]+1);
((C_proc5)(void*)(*((C_word*)t2+1)))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* finalizer in k288 */
static void C_ccall f_310(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_310,3,t0,t1,t2);}
t3=(C_truep(t2)?(C_word)C_i_foreign_pointer_argumentp(t2):C_SCHEME_FALSE);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)stub10(C_SCHEME_UNDEFINED,t3));}

/* re-compile-pattern in k288 */
static void C_fcall f_292(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_292,NULL,3,t1,t2,t3);}
t4=(C_word)C_a_i_bytevector(&a,1,C_fix(3));
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_297,a[2]=t4,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
if(C_truep(t2)){
t6=(C_word)C_i_foreign_string_argumentp(t2);
/* ##sys#make-c-string */
t7=*((C_word*)lf[1]+1);
((C_proc3)(void*)(*((C_word*)t7+1)))(3,t7,t5,t6);}
else{
t6=t5;
f_297(2,t6,C_SCHEME_FALSE);}}

/* k295 in re-compile-pattern in k288 */
static void C_ccall f_297(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_foreign_unsigned_integer_argumentp(((C_word*)t0)[4]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)stub2(((C_word*)t0)[2],t1,t2));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[101] = {
{"toplevelregex.scm",(void*)C_regex_toplevel},
{"f_290regex.scm",(void*)f_290},
{"f_1531regex.scm",(void*)f_1531},
{"f_1538regex.scm",(void*)f_1538},
{"f_1546regex.scm",(void*)f_1546},
{"f_1578regex.scm",(void*)f_1578},
{"f_1565regex.scm",(void*)f_1565},
{"f_1568regex.scm",(void*)f_1568},
{"f_1491regex.scm",(void*)f_1491},
{"f_1500regex.scm",(void*)f_1500},
{"f_1519regex.scm",(void*)f_1519},
{"f_1526regex.scm",(void*)f_1526},
{"f_1223regex.scm",(void*)f_1223},
{"f_1238regex.scm",(void*)f_1238},
{"f_1240regex.scm",(void*)f_1240},
{"f_1486regex.scm",(void*)f_1486},
{"f_1475regex.scm",(void*)f_1475},
{"f_1298regex.scm",(void*)f_1298},
{"f_1380regex.scm",(void*)f_1380},
{"f_1404regex.scm",(void*)f_1404},
{"f_1359regex.scm",(void*)f_1359},
{"f_1330regex.scm",(void*)f_1330},
{"f_1300regex.scm",(void*)f_1300},
{"f_1308regex.scm",(void*)f_1308},
{"f_1296regex.scm",(void*)f_1296},
{"f_1283regex.scm",(void*)f_1283},
{"f_1270regex.scm",(void*)f_1270},
{"f_1234regex.scm",(void*)f_1234},
{"f_1171regex.scm",(void*)f_1171},
{"f_1186regex.scm",(void*)f_1186},
{"f_1203regex.scm",(void*)f_1203},
{"f_949regex.scm",(void*)f_949},
{"f_1085regex.scm",(void*)f_1085},
{"f_1089regex.scm",(void*)f_1089},
{"f_1159regex.scm",(void*)f_1159},
{"f_1155regex.scm",(void*)f_1155},
{"f_1138regex.scm",(void*)f_1138},
{"f_1120regex.scm",(void*)f_1120},
{"f_1113regex.scm",(void*)f_1113},
{"f_979regex.scm",(void*)f_979},
{"f_985regex.scm",(void*)f_985},
{"f_1052regex.scm",(void*)f_1052},
{"f_1040regex.scm",(void*)f_1040},
{"f_999regex.scm",(void*)f_999},
{"f_964regex.scm",(void*)f_964},
{"f_767regex.scm",(void*)f_767},
{"f_931regex.scm",(void*)f_931},
{"f_905regex.scm",(void*)f_905},
{"f_930regex.scm",(void*)f_930},
{"f_885regex.scm",(void*)f_885},
{"f_786regex.scm",(void*)f_786},
{"f_794regex.scm",(void*)f_794},
{"f_798regex.scm",(void*)f_798},
{"f_859regex.scm",(void*)f_859},
{"f_840regex.scm",(void*)f_840},
{"f_874regex.scm",(void*)f_874},
{"f_869regex.scm",(void*)f_869},
{"f_758regex.scm",(void*)f_758},
{"f_762regex.scm",(void*)f_762},
{"f_749regex.scm",(void*)f_749},
{"f_753regex.scm",(void*)f_753},
{"f_670regex.scm",(void*)f_670},
{"f_683regex.scm",(void*)f_683},
{"f_693regex.scm",(void*)f_693},
{"f_700regex.scm",(void*)f_700},
{"f_703regex.scm",(void*)f_703},
{"f_661regex.scm",(void*)f_661},
{"f_665regex.scm",(void*)f_665},
{"f_652regex.scm",(void*)f_652},
{"f_656regex.scm",(void*)f_656},
{"f_573regex.scm",(void*)f_573},
{"f_625regex.scm",(void*)f_625},
{"f_587regex.scm",(void*)f_587},
{"f_594regex.scm",(void*)f_594},
{"f_597regex.scm",(void*)f_597},
{"f_563regex.scm",(void*)f_563},
{"f_534regex.scm",(void*)f_534},
{"f_543regex.scm",(void*)f_543},
{"f_513regex.scm",(void*)f_513},
{"f_517regex.scm",(void*)f_517},
{"f_525regex.scm",(void*)f_525},
{"f_431regex.scm",(void*)f_431},
{"f_443regex.scm",(void*)f_443},
{"f_477regex.scm",(void*)f_477},
{"f_481regex.scm",(void*)f_481},
{"f_463regex.scm",(void*)f_463},
{"f_424regex.scm",(void*)f_424},
{"f_418regex.scm",(void*)f_418},
{"f_399regex.scm",(void*)f_399},
{"f_364regex.scm",(void*)f_364},
{"f_416regex.scm",(void*)f_416},
{"f_406regex.scm",(void*)f_406},
{"f_409regex.scm",(void*)f_409},
{"f_320regex.scm",(void*)f_320},
{"f_327regex.scm",(void*)f_327},
{"f_341regex.scm",(void*)f_341},
{"f_337regex.scm",(void*)f_337},
{"f_310regex.scm",(void*)f_310},
{"f_292regex.scm",(void*)f_292},
{"f_297regex.scm",(void*)f_297},
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
