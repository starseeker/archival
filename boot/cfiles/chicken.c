/* Generated from chicken.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-03-01 11:14
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: chicken.scm -output-file chicken.c -quiet -no-trace -optimize-level 2 -include-path .
   used units: library eval extras extras srfi_1 match srfi_4 utils support compiler optimizer driver platform backend
*/

#include "chicken.h"

static C_PTABLE_ENTRY *create_ptable(void);
C_noret_decl(C_library_toplevel)
C_externimport void C_ccall C_library_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_eval_toplevel)
C_externimport void C_ccall C_eval_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_extras_toplevel)
C_externimport void C_ccall C_extras_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_1_toplevel)
C_externimport void C_ccall C_srfi_1_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_match_toplevel)
C_externimport void C_ccall C_match_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_srfi_4_toplevel)
C_externimport void C_ccall C_srfi_4_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_support_toplevel)
C_externimport void C_ccall C_support_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_compiler_toplevel)
C_externimport void C_ccall C_compiler_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_optimizer_toplevel)
C_externimport void C_ccall C_optimizer_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_driver_toplevel)
C_externimport void C_ccall C_driver_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_platform_toplevel)
C_externimport void C_ccall C_platform_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_backend_toplevel)
C_externimport void C_ccall C_backend_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[525];


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_681)
static void C_ccall f_681(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_684)
static void C_ccall f_684(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_687)
static void C_ccall f_687(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_690)
static void C_ccall f_690(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_693)
static void C_ccall f_693(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_696)
static void C_ccall f_696(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_699)
static void C_ccall f_699(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_702)
static void C_ccall f_702(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_705)
static void C_ccall f_705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_708)
static void C_ccall f_708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_711)
static void C_ccall f_711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_714)
static void C_ccall f_714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_717)
static void C_ccall f_717(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_720)
static void C_ccall f_720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_723)
static void C_ccall f_723(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6943)
static void C_ccall f_6943(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6943)
static void C_ccall f_6943r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6947)
static void C_ccall f_6947(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6950)
static void C_ccall f_6950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6953)
static void C_ccall f_6953(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6959)
static void C_ccall f_6959(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7165)
static void C_ccall f_7165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7145)
static void C_ccall f_7145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7141)
static void C_ccall f_7141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7121)
static void C_ccall f_7121(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6984)
static void C_fcall f_6984(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6994)
static void C_ccall f_6994(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7113)
static void C_ccall f_7113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6997)
static void C_ccall f_6997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7109)
static void C_ccall f_7109(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7000)
static void C_ccall f_7000(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_7031)
static void C_fcall f_7031(C_word t0,C_word t1) C_noret;
C_noret_decl(f_7011)
static void C_ccall f_7011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6982)
static void C_ccall f_6982(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_726)
static void C_ccall f_726(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6855)
static void C_ccall f_6855(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6855)
static void C_ccall f_6855r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6872)
static void C_ccall f_6872(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6875)
static void C_ccall f_6875(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6881)
static void C_fcall f_6881(C_word t0,C_word t1) C_noret;
C_noret_decl(f_729)
static void C_ccall f_729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6814)
static void C_ccall f_6814(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6814)
static void C_ccall f_6814r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6818)
static void C_ccall f_6818(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_732)
static void C_ccall f_732(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6798)
static void C_ccall f_6798(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_6798)
static void C_ccall f_6798r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_6808)
static void C_ccall f_6808(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6806)
static void C_ccall f_6806(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6743)
static void C_ccall f_6743(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6747)
static void C_ccall f_6747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6793)
static void C_ccall f_6793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6750)
static void C_ccall f_6750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6759)
static void C_ccall f_6759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6767)
static void C_ccall f_6767(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6769)
static void C_fcall f_6769(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6786)
static void C_ccall f_6786(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6757)
static void C_ccall f_6757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_738)
static void C_ccall f_738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6683)
static void C_ccall f_6683(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6683)
static void C_ccall f_6683r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6687)
static void C_fcall f_6687(C_word t0,C_word t1) C_noret;
C_noret_decl(f_741)
static void C_ccall f_741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6624)
static void C_ccall f_6624(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_6624)
static void C_ccall f_6624r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_6628)
static void C_ccall f_6628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6655)
static void C_fcall f_6655(C_word t0,C_word t1) C_noret;
C_noret_decl(f_744)
static void C_ccall f_744(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6450)
static void C_ccall f_6450(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6450)
static void C_ccall f_6450r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6454)
static void C_ccall f_6454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6457)
static void C_ccall f_6457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6618)
static void C_ccall f_6618(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6460)
static void C_ccall f_6460(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6612)
static void C_ccall f_6612(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6463)
static void C_ccall f_6463(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6610)
static void C_ccall f_6610(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6574)
static void C_ccall f_6574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6588)
static void C_fcall f_6588(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6602)
static void C_ccall f_6602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6582)
static void C_ccall f_6582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6578)
static void C_ccall f_6578(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6470)
static void C_ccall f_6470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6566)
static void C_ccall f_6566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6542)
static void C_ccall f_6542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6560)
static void C_ccall f_6560(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6550)
static void C_ccall f_6550(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6546)
static void C_ccall f_6546(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6538)
static void C_ccall f_6538(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6522)
static void C_ccall f_6522(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6498)
static void C_ccall f_6498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6516)
static void C_ccall f_6516(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6506)
static void C_ccall f_6506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6502)
static void C_ccall f_6502(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6494)
static void C_ccall f_6494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_747)
static void C_ccall f_747(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6355)
static void C_ccall f_6355(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6355)
static void C_ccall f_6355r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6391)
static void C_fcall f_6391(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6404)
static void C_ccall f_6404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6362)
static void C_ccall f_6362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_750)
static void C_ccall f_750(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6245)
static void C_ccall f_6245(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6245)
static void C_ccall f_6245r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_6249)
static void C_ccall f_6249(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6252)
static void C_ccall f_6252(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6255)
static void C_ccall f_6255(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6258)
static void C_ccall f_6258(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6349)
static void C_ccall f_6349(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6261)
static void C_ccall f_6261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6343)
static void C_ccall f_6343(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6264)
static void C_ccall f_6264(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6337)
static void C_ccall f_6337(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6341)
static void C_ccall f_6341(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6271)
static void C_ccall f_6271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6309)
static void C_ccall f_6309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6307)
static void C_ccall f_6307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_753)
static void C_ccall f_753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6235)
static void C_ccall f_6235(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6235)
static void C_ccall f_6235r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_756)
static void C_ccall f_756(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6221)
static void C_ccall f_6221(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_6221)
static void C_ccall f_6221r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_759)
static void C_ccall f_759(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_833)
static void C_ccall f_833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_836)
static void C_ccall f_836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5959)
static void C_ccall f_5959(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5963)
static void C_ccall f_5963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5972)
static void C_ccall f_5972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6181)
static void C_fcall f_6181(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6194)
static void C_ccall f_6194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5975)
static void C_ccall f_5975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6171)
static void C_ccall f_6171(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6179)
static void C_ccall f_6179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5978)
static void C_ccall f_5978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6125)
static void C_fcall f_6125(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_6158)
static void C_ccall f_6158(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6165)
static void C_ccall f_6165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6141)
static void C_fcall f_6141(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5990)
static void C_ccall f_5990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6119)
static void C_ccall f_6119(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5997)
static void C_ccall f_5997(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5999)
static void C_fcall f_5999(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_6113)
static void C_ccall f_6113(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6033)
static void C_fcall f_6033(C_word t0,C_word t1) C_noret;
C_noret_decl(f_6087)
static void C_ccall f_6087(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6064)
static void C_ccall f_6064(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6044)
static void C_ccall f_6044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6019)
static void C_ccall f_6019(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_6027)
static void C_ccall f_6027(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_6017)
static void C_ccall f_6017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5979)
static void C_ccall f_5979(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5919)
static void C_fcall f_5919(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5942)
static void C_ccall f_5942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5946)
static void C_ccall f_5946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5888)
static void C_fcall f_5888(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5909)
static void C_ccall f_5909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_839)
static void C_ccall f_839(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5837)
static void C_ccall f_5837(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5841)
static void C_ccall f_5841(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5852)
static void C_fcall f_5852(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5877)
static void C_ccall f_5877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_842)
static void C_ccall f_842(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5717)
static void C_ccall f_5717(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5721)
static void C_ccall f_5721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5831)
static void C_ccall f_5831(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5829)
static void C_ccall f_5829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5730)
static void C_ccall f_5730(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5817)
static void C_ccall f_5817(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5825)
static void C_ccall f_5825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5733)
static void C_ccall f_5733(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5811)
static void C_ccall f_5811(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5753)
static void C_ccall f_5753(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5763)
static void C_ccall f_5763(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5783)
static void C_ccall f_5783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5789)
static void C_ccall f_5789(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5797)
static void C_ccall f_5797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5787)
static void C_ccall f_5787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5761)
static void C_ccall f_5761(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5757)
static void C_ccall f_5757(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5734)
static void C_ccall f_5734(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_845)
static void C_ccall f_845(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5696)
static void C_ccall f_5696(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_5700)
static void C_ccall f_5700(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_848)
static void C_ccall f_848(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5686)
static void C_ccall f_5686(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_854)
static void C_ccall f_854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_863)
static void C_fcall f_863(C_word t0,C_word t1) C_noret;
C_noret_decl(f_879)
static void C_fcall f_879(C_word t0,C_word t1) C_noret;
C_noret_decl(f_866)
static void C_ccall f_866(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_927)
static void C_ccall f_927(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5665)
static void C_ccall f_5665(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5669)
static void C_ccall f_5669(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_930)
static void C_ccall f_930(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5651)
static void C_ccall f_5651(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_933)
static void C_ccall f_933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5535)
static void C_ccall f_5535(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5539)
static void C_ccall f_5539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5548)
static void C_fcall f_5548(C_word t0,C_word t1) C_noret;
C_noret_decl(f_5562)
static void C_fcall f_5562(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5626)
static void C_ccall f_5626(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5608)
static void C_ccall f_5608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5591)
static void C_ccall f_5591(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_936)
static void C_ccall f_936(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5289)
static void C_ccall f_5289(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5444)
static void C_fcall f_5444(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5515)
static void C_ccall f_5515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5460)
static void C_ccall f_5460(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5458)
static void C_ccall f_5458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5302)
static void C_fcall f_5302(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5428)
static void C_ccall f_5428(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5390)
static void C_ccall f_5390(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5351)
static void C_ccall f_5351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5292)
static void C_fcall f_5292(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_939)
static void C_ccall f_939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5200)
static void C_ccall f_5200(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5210)
static void C_ccall f_5210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5223)
static void C_fcall f_5223(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5239)
static void C_ccall f_5239(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5267)
static void C_ccall f_5267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5221)
static void C_ccall f_5221(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_942)
static void C_ccall f_942(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4914)
static void C_ccall f_4914(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4914)
static void C_ccall f_4914r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_5111)
static void C_ccall f_5111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5114)
static void C_ccall f_5114(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5117)
static void C_ccall f_5117(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5190)
static void C_ccall f_5190(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5198)
static void C_ccall f_5198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5133)
static void C_ccall f_5133(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5136)
static void C_ccall f_5136(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5139)
static void C_ccall f_5139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5142)
static void C_ccall f_5142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5180)
static void C_ccall f_5180(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5188)
static void C_ccall f_5188(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5145)
static void C_ccall f_5145(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4925)
static void C_ccall f_4925(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4929)
static void C_ccall f_4929(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4933)
static void C_ccall f_4933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4935)
static void C_fcall f_4935(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_4980)
static void C_ccall f_4980(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4992)
static void C_ccall f_4992(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4988)
static void C_ccall f_4988(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4956)
static void C_ccall f_4956(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5148)
static void C_ccall f_5148(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5008)
static void C_fcall f_5008(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_5108)
static void C_ccall f_5108(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5072)
static void C_ccall f_5072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5042)
static void C_ccall f_5042(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5151)
static void C_ccall f_5151(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5118)
static void C_fcall f_5118(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_5130)
static void C_ccall f_5130(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_5126)
static void C_ccall f_5126(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_945)
static void C_ccall f_945(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4857)
static void C_ccall f_4857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4861)
static void C_ccall f_4861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_948)
static void C_ccall f_948(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4704)
static void C_ccall f_4704(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4704)
static void C_ccall f_4704r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4708)
static void C_ccall f_4708(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4711)
static void C_ccall f_4711(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4714)
static void C_ccall f_4714(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4727)
static void C_fcall f_4727(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4777)
static void C_ccall f_4777(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4788)
static void C_ccall f_4788(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4725)
static void C_ccall f_4725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_951)
static void C_ccall f_951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4428)
static void C_ccall f_4428(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4462)
static void C_ccall f_4462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4465)
static void C_ccall f_4465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4691)
static void C_ccall f_4691(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4701)
static void C_ccall f_4701(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4689)
static void C_ccall f_4689(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4468)
static void C_ccall f_4468(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4437)
static void C_fcall f_4437(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4451)
static void C_ccall f_4451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4455)
static void C_ccall f_4455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4471)
static void C_ccall f_4471(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4474)
static void C_ccall f_4474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4477)
static void C_ccall f_4477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4484)
static void C_ccall f_4484(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4498)
static void C_ccall f_4498(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4508)
static void C_ccall f_4508(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_4512)
static void C_ccall f_4512(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4522)
static void C_fcall f_4522(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4538)
static void C_ccall f_4538(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4557)
static void C_fcall f_4557(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_4613)
static void C_ccall f_4613(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4624)
static void C_ccall f_4624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4542)
static void C_ccall f_4542(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4555)
static void C_ccall f_4555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4528)
static void C_ccall f_4528(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4536)
static void C_ccall f_4536(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4526)
static void C_ccall f_4526(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4496)
static void C_ccall f_4496(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_954)
static void C_ccall f_954(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4371)
static void C_ccall f_4371(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4371)
static void C_ccall f_4371r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4411)
static void C_ccall f_4411(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4381)
static void C_ccall f_4381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_957)
static void C_ccall f_957(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_4295)
static void C_ccall f_4295r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_4299)
static void C_ccall f_4299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4302)
static void C_ccall f_4302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_960)
static void C_ccall f_960(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_4111)
static void C_ccall f_4111r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_4115)
static void C_ccall f_4115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4118)
static void C_ccall f_4118(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4261)
static void C_ccall f_4261(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4257)
static void C_ccall f_4257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4120)
static void C_ccall f_4120(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4208)
static void C_ccall f_4208(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4206)
static void C_ccall f_4206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4176)
static void C_fcall f_4176(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4143)
static void C_fcall f_4143(C_word t0,C_word t1) C_noret;
C_noret_decl(f_963)
static void C_ccall f_963(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3921)
static void C_ccall f_3921(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...) C_noret;
C_noret_decl(f_3921)
static void C_ccall f_3921r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t6) C_noret;
C_noret_decl(f_3928)
static void C_ccall f_3928(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_4102)
static void C_ccall f_4102(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_4100)
static void C_ccall f_4100(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3953)
static void C_fcall f_3953(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_3979)
static void C_fcall f_3979(C_word t0,C_word t1) C_noret;
C_noret_decl(f_4007)
static void C_fcall f_4007(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3991)
static void C_ccall f_3991(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3951)
static void C_ccall f_3951(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_966)
static void C_ccall f_966(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3912)
static void C_ccall f_3912(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3916)
static void C_ccall f_3916(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_969)
static void C_ccall f_969(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3893)
static void C_ccall f_3893(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3897)
static void C_ccall f_3897(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3906)
static void C_ccall f_3906(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3904)
static void C_ccall f_3904(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_972)
static void C_ccall f_972(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3874)
static void C_ccall f_3874(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3878)
static void C_ccall f_3878(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3887)
static void C_ccall f_3887(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3885)
static void C_ccall f_3885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_975)
static void C_ccall f_975(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3746)
static void C_ccall f_3746(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3752)
static void C_fcall f_3752(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3833)
static void C_ccall f_3833(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3762)
static void C_ccall f_3762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3765)
static void C_ccall f_3765(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3771)
static void C_ccall f_3771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3778)
static void C_ccall f_3778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3794)
static void C_ccall f_3794(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_978)
static void C_ccall f_978(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3603)
static void C_ccall f_3603(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3609)
static void C_fcall f_3609(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6) C_noret;
C_noret_decl(f_3721)
static void C_ccall f_3721(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3694)
static void C_ccall f_3694(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3619)
static void C_ccall f_3619(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3622)
static void C_ccall f_3622(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3628)
static void C_ccall f_3628(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3639)
static void C_ccall f_3639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3655)
static void C_ccall f_3655(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_981)
static void C_ccall f_981(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3544)
static void C_ccall f_3544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...) C_noret;
C_noret_decl(f_3544)
static void C_ccall f_3544r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t7) C_noret;
C_noret_decl(f_984)
static void C_ccall f_984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3373)
static void C_ccall f_3373r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3379)
static void C_fcall f_3379(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5) C_noret;
C_noret_decl(f_3453)
static void C_fcall f_3453(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3456)
static void C_ccall f_3456(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3529)
static void C_ccall f_3529(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3522)
static void C_ccall f_3522(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3514)
static void C_ccall f_3514(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3501)
static void C_ccall f_3501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3480)
static void C_ccall f_3480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3389)
static void C_fcall f_3389(C_word t0,C_word t1) C_noret;
C_noret_decl(f_987)
static void C_ccall f_987(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3322)
static void C_ccall f_3322(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3322)
static void C_ccall f_3322r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_990)
static void C_ccall f_990(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_3262)
static void C_ccall f_3262r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_3272)
static void C_fcall f_3272(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3291)
static void C_ccall f_3291(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3275)
static void C_ccall f_3275(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_993)
static void C_ccall f_993(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_996)
static void C_ccall f_996(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3225)
static void C_ccall f_3225(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3229)
static void C_ccall f_3229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_999)
static void C_ccall f_999(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3210)
static void C_ccall f_3210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3219)
static void C_ccall f_3219(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3217)
static void C_ccall f_3217(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1002)
static void C_ccall f_1002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3187)
static void C_ccall f_3187(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3191)
static void C_ccall f_3191(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3200)
static void C_ccall f_3200(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3198)
static void C_ccall f_3198(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1005)
static void C_ccall f_1005(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3172)
static void C_ccall f_3172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3181)
static void C_ccall f_3181(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3179)
static void C_ccall f_3179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1008)
static void C_ccall f_1008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3149)
static void C_ccall f_3149(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3153)
static void C_ccall f_3153(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3162)
static void C_ccall f_3162(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3160)
static void C_ccall f_3160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1011)
static void C_ccall f_1011(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3130)
static void C_ccall f_3130(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3134)
static void C_ccall f_3134(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3143)
static void C_ccall f_3143(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3141)
static void C_ccall f_3141(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1014)
static void C_ccall f_1014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3111)
static void C_ccall f_3111(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3115)
static void C_ccall f_3115(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3122)
static void C_ccall f_3122(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1017)
static void C_ccall f_1017(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3011)
static void C_ccall f_3011(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3015)
static void C_ccall f_3015(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3070)
static void C_ccall f_3070(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3024)
static void C_ccall f_3024(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1020)
static void C_ccall f_1020(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2791)
static void C_ccall f_2791(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2795)
static void C_fcall f_2795(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2798)
static void C_fcall f_2798(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2879)
static void C_ccall f_2879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2944)
static void C_ccall f_2944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2936)
static void C_ccall f_2936(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2924)
static void C_ccall f_2924(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2804)
static void C_ccall f_2804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2830)
static void C_fcall f_2830(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1023)
static void C_ccall f_1023(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2716)
static void C_ccall f_2716(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...) C_noret;
C_noret_decl(f_2716)
static void C_ccall f_2716r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t5) C_noret;
C_noret_decl(f_2720)
static void C_ccall f_2720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2789)
static void C_ccall f_2789(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2743)
static void C_fcall f_2743(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1026)
static void C_ccall f_1026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_2610)
static void C_ccall f_2610r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_2710)
static void C_ccall f_2710(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2686)
static void C_ccall f_2686(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2621)
static void C_ccall f_2621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2627)
static void C_ccall f_2627(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2625)
static void C_ccall f_2625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1029)
static void C_ccall f_1029(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2581)
static void C_ccall f_2581(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2585)
static void C_ccall f_2585(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2608)
static void C_ccall f_2608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2604)
static void C_ccall f_2604(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1032)
static void C_ccall f_1032(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2568)
static void C_ccall f_2568(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_2572)
static void C_ccall f_2572(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1035)
static void C_ccall f_1035(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1774)
static void C_ccall f_1774(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1774)
static void C_ccall f_1774r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1778)
static void C_ccall f_1778(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1784)
static void C_ccall f_1784(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1787)
static void C_ccall f_1787(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1790)
static void C_ccall f_1790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1793)
static void C_ccall f_1793(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2460)
static void C_fcall f_2460(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2539)
static void C_ccall f_2539(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2535)
static void C_ccall f_2535(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2470)
static void C_fcall f_2470(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2474)
static void C_ccall f_2474(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2515)
static void C_ccall f_2515(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2505)
static void C_ccall f_2505(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2495)
static void C_ccall f_2495(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2491)
static void C_ccall f_2491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2477)
static void C_ccall f_2477(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1881)
static void C_ccall f_1881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1884)
static void C_ccall f_1884(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2454)
static void C_ccall f_2454(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2383)
static void C_ccall f_2383(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2389)
static void C_ccall f_2389(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2443)
static void C_ccall f_2443(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2435)
static void C_ccall f_2435(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2406)
static void C_ccall f_2406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2387)
static void C_ccall f_2387(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2371)
static void C_ccall f_2371(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2367)
static void C_ccall f_2367(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1895)
static void C_fcall f_1895(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2349)
static void C_ccall f_2349(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1903)
static void C_fcall f_1903(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1911)
static void C_fcall f_1911(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1917)
static void C_ccall f_1917(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2194)
static void C_ccall f_2194(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2306)
static void C_ccall f_2306(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2302)
static void C_ccall f_2302(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2271)
static void C_ccall f_2271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2294)
static void C_ccall f_2294(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2283)
static void C_ccall f_2283(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2212)
static void C_fcall f_2212(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2257)
static void C_ccall f_2257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2253)
static void C_ccall f_2253(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2229)
static void C_ccall f_2229(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2241)
static void C_ccall f_2241(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2209)
static void C_fcall f_2209(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1939)
static void C_ccall f_1939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2179)
static void C_ccall f_2179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2175)
static void C_ccall f_2175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2080)
static void C_ccall f_2080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2163)
static void C_ccall f_2163(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2152)
static void C_ccall f_2152(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1957)
static void C_fcall f_1957(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2066)
static void C_ccall f_2066(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2062)
static void C_ccall f_2062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1974)
static void C_ccall f_1974(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2046)
static void C_ccall f_2046(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1954)
static void C_fcall f_1954(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1915)
static void C_ccall f_1915(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1907)
static void C_ccall f_1907(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1899)
static void C_ccall f_1899(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1891)
static void C_ccall f_1891(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1838)
static void C_fcall f_1838(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1854)
static void C_ccall f_1854(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1795)
static void C_fcall f_1795(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1038)
static void C_ccall f_1038(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1760)
static void C_ccall f_1760(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1041)
static void C_ccall f_1041(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494(C_word c,C_word t0,C_word t1,C_word t2,...) C_noret;
C_noret_decl(f_1494)
static void C_ccall f_1494r(C_word t0,C_word t1,C_word t2,C_word t4) C_noret;
C_noret_decl(f_1498)
static void C_ccall f_1498(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1740)
static void C_fcall f_1740(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1501)
static void C_fcall f_1501(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1727)
static void C_ccall f_1727(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1504)
static void C_ccall f_1504(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1507)
static void C_ccall f_1507(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1715)
static void C_ccall f_1715(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1510)
static void C_ccall f_1510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1713)
static void C_ccall f_1713(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1513)
static void C_ccall f_1513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1709)
static void C_ccall f_1709(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1516)
static void C_ccall f_1516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1697)
static void C_ccall f_1697(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1705)
static void C_ccall f_1705(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1527)
static void C_ccall f_1527(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1659)
static void C_ccall f_1659(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1641)
static void C_ccall f_1641(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1637)
static void C_ccall f_1637(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1573)
static void C_ccall f_1573(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1559)
static void C_ccall f_1559(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1555)
static void C_ccall f_1555(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1523)
static void C_ccall f_1523(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1044)
static void C_ccall f_1044(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1460)
static void C_ccall f_1460(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1047)
static void C_ccall f_1047(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1447)
static void C_ccall f_1447(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1458)
static void C_ccall f_1458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1451)
static void C_ccall f_1451(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1050)
static void C_ccall f_1050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1434)
static void C_ccall f_1434(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1445)
static void C_ccall f_1445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1438)
static void C_ccall f_1438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1053)
static void C_ccall f_1053(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1432)
static void C_ccall f_1432(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1425)
static void C_ccall f_1425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1056)
static void C_ccall f_1056(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1419)
static void C_ccall f_1419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1412)
static void C_ccall f_1412(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1408)
static void C_ccall f_1408(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1398)
static void C_ccall f_1398(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1060)
static void C_ccall f_1060(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1189)
static void C_ccall f_1189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_1201)
static void C_fcall f_1201(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1384)
static void C_ccall f_1384(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1377)
static void C_ccall f_1377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1340)
static void C_ccall f_1340(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1286)
static void C_ccall f_1286(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1303)
static void C_ccall f_1303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1289)
static void C_ccall f_1289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1223)
static void C_ccall f_1223(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1266)
static void C_ccall f_1266(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1246)
static void C_ccall f_1246(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1226)
static void C_ccall f_1226(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1193)
static void C_ccall f_1193(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1196)
static void C_ccall f_1196(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1177)
static void C_ccall f_1177(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1184)
static void C_ccall f_1184(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1169)
static void C_ccall f_1169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1175)
static void C_ccall f_1175(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1172)
static void C_ccall f_1172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1062)
static void C_ccall f_1062(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1068)
static void C_fcall f_1068(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1103)
static void C_fcall f_1103(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1129)
static void C_ccall f_1129(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1125)
static void C_ccall f_1125(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1082)
static void C_ccall f_1082(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_760)
static void C_ccall f_760(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_764)
static void C_ccall f_764(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_801)
static void C_ccall f_801(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_822)
static void C_ccall f_822(C_word c,C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_820)
static void C_ccall f_820(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_6984)
static void C_fcall trf_6984(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6984(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6984(t0,t1,t2,t3);}

C_noret_decl(trf_7031)
static void C_fcall trf_7031(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_7031(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_7031(t0,t1);}

C_noret_decl(trf_6881)
static void C_fcall trf_6881(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6881(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6881(t0,t1);}

C_noret_decl(trf_6769)
static void C_fcall trf_6769(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6769(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6769(t0,t1,t2,t3);}

C_noret_decl(trf_6687)
static void C_fcall trf_6687(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6687(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6687(t0,t1);}

C_noret_decl(trf_6655)
static void C_fcall trf_6655(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6655(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6655(t0,t1);}

C_noret_decl(trf_6588)
static void C_fcall trf_6588(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6588(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6588(t0,t1,t2);}

C_noret_decl(trf_6391)
static void C_fcall trf_6391(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6391(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_6391(t0,t1,t2);}

C_noret_decl(trf_6181)
static void C_fcall trf_6181(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6181(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6181(t0,t1,t2,t3);}

C_noret_decl(trf_6125)
static void C_fcall trf_6125(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6125(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_6125(t0,t1,t2,t3);}

C_noret_decl(trf_6141)
static void C_fcall trf_6141(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6141(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6141(t0,t1);}

C_noret_decl(trf_5999)
static void C_fcall trf_5999(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5999(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5999(t0,t1,t2,t3,t4);}

C_noret_decl(trf_6033)
static void C_fcall trf_6033(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_6033(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_6033(t0,t1);}

C_noret_decl(trf_5919)
static void C_fcall trf_5919(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5919(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5919(t0,t1,t2,t3);}

C_noret_decl(trf_5888)
static void C_fcall trf_5888(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5888(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_5888(t0,t1,t2,t3);}

C_noret_decl(trf_5852)
static void C_fcall trf_5852(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5852(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5852(t0,t1,t2);}

C_noret_decl(trf_863)
static void C_fcall trf_863(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_863(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_863(t0,t1);}

C_noret_decl(trf_879)
static void C_fcall trf_879(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_879(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_879(t0,t1);}

C_noret_decl(trf_5548)
static void C_fcall trf_5548(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5548(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_5548(t0,t1);}

C_noret_decl(trf_5562)
static void C_fcall trf_5562(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5562(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5562(t0,t1,t2);}

C_noret_decl(trf_5444)
static void C_fcall trf_5444(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5444(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5444(t0,t1,t2);}

C_noret_decl(trf_5302)
static void C_fcall trf_5302(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5302(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5302(t0,t1,t2);}

C_noret_decl(trf_5292)
static void C_fcall trf_5292(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5292(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5292(t0,t1,t2);}

C_noret_decl(trf_5223)
static void C_fcall trf_5223(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5223(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5223(t0,t1,t2);}

C_noret_decl(trf_4935)
static void C_fcall trf_4935(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4935(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_4935(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_5008)
static void C_fcall trf_5008(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5008(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_5008(t0,t1,t2,t3,t4);}

C_noret_decl(trf_5118)
static void C_fcall trf_5118(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_5118(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_5118(t0,t1,t2);}

C_noret_decl(trf_4727)
static void C_fcall trf_4727(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4727(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4727(t0,t1,t2,t3);}

C_noret_decl(trf_4437)
static void C_fcall trf_4437(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4437(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_4437(t0,t1,t2);}

C_noret_decl(trf_4522)
static void C_fcall trf_4522(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4522(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4522(t0,t1);}

C_noret_decl(trf_4557)
static void C_fcall trf_4557(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4557(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_4557(t0,t1,t2,t3);}

C_noret_decl(trf_4176)
static void C_fcall trf_4176(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4176(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4176(t0,t1);}

C_noret_decl(trf_4143)
static void C_fcall trf_4143(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4143(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4143(t0,t1);}

C_noret_decl(trf_3953)
static void C_fcall trf_3953(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3953(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_3953(t0,t1,t2,t3);}

C_noret_decl(trf_3979)
static void C_fcall trf_3979(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3979(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3979(t0,t1);}

C_noret_decl(trf_4007)
static void C_fcall trf_4007(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_4007(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_4007(t0,t1);}

C_noret_decl(trf_3752)
static void C_fcall trf_3752(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3752(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3752(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3609)
static void C_fcall trf_3609(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3609(void *dummy){
C_word t6=C_pick(0);
C_word t5=C_pick(1);
C_word t4=C_pick(2);
C_word t3=C_pick(3);
C_word t2=C_pick(4);
C_word t1=C_pick(5);
C_word t0=C_pick(6);
C_adjust_stack(-7);
f_3609(t0,t1,t2,t3,t4,t5,t6);}

C_noret_decl(trf_3379)
static void C_fcall trf_3379(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3379(void *dummy){
C_word t5=C_pick(0);
C_word t4=C_pick(1);
C_word t3=C_pick(2);
C_word t2=C_pick(3);
C_word t1=C_pick(4);
C_word t0=C_pick(5);
C_adjust_stack(-6);
f_3379(t0,t1,t2,t3,t4,t5);}

C_noret_decl(trf_3453)
static void C_fcall trf_3453(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3453(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3453(t0,t1);}

C_noret_decl(trf_3389)
static void C_fcall trf_3389(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3389(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3389(t0,t1);}

C_noret_decl(trf_3272)
static void C_fcall trf_3272(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_3272(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_3272(t0,t1);}

C_noret_decl(trf_2795)
static void C_fcall trf_2795(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2795(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2795(t0,t1);}

C_noret_decl(trf_2798)
static void C_fcall trf_2798(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2798(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2798(t0,t1);}

C_noret_decl(trf_2830)
static void C_fcall trf_2830(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2830(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2830(t0,t1);}

C_noret_decl(trf_2743)
static void C_fcall trf_2743(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2743(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2743(t0,t1);}

C_noret_decl(trf_2460)
static void C_fcall trf_2460(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2460(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2460(t0,t1,t2);}

C_noret_decl(trf_2470)
static void C_fcall trf_2470(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2470(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2470(t0,t1);}

C_noret_decl(trf_1895)
static void C_fcall trf_1895(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1895(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1895(t0,t1);}

C_noret_decl(trf_1903)
static void C_fcall trf_1903(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1903(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1903(t0,t1);}

C_noret_decl(trf_1911)
static void C_fcall trf_1911(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1911(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1911(t0,t1);}

C_noret_decl(trf_2212)
static void C_fcall trf_2212(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2212(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2212(t0,t1);}

C_noret_decl(trf_2209)
static void C_fcall trf_2209(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2209(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2209(t0,t1);}

C_noret_decl(trf_1957)
static void C_fcall trf_1957(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1957(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1957(t0,t1);}

C_noret_decl(trf_1954)
static void C_fcall trf_1954(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1954(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1954(t0,t1);}

C_noret_decl(trf_1838)
static void C_fcall trf_1838(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1838(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1838(t0,t1,t2);}

C_noret_decl(trf_1795)
static void C_fcall trf_1795(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1795(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1795(t0,t1,t2);}

C_noret_decl(trf_1740)
static void C_fcall trf_1740(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1740(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1740(t0,t1);}

C_noret_decl(trf_1501)
static void C_fcall trf_1501(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1501(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1501(t0,t1);}

C_noret_decl(trf_1201)
static void C_fcall trf_1201(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1201(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_1201(t0,t1,t2);}

C_noret_decl(trf_1068)
static void C_fcall trf_1068(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1068(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_1068(t0,t1,t2,t3,t4);}

C_noret_decl(trf_1103)
static void C_fcall trf_1103(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1103(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1103(t0,t1);}

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
if(!C_demand_2(4031)){
C_save(t1);
C_rereclaim2(4031*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,525);
lf[0]=C_h_intern(&lf[0],3,"map");
lf[1]=C_h_intern(&lf[1],6,"lambda");
lf[2]=C_h_intern(&lf[2],14,"\004coreundefined");
lf[3]=C_h_intern(&lf[3],20,"\003syscall-with-values");
lf[4]=C_h_intern(&lf[4],9,"\004coreset!");
lf[5]=C_static_lambda_info(C_heaptop,16,"(a821 v111 a112)");
lf[6]=C_h_intern(&lf[6],6,"gensym");
lf[7]=C_h_intern(&lf[7],16,"\003syscheck-syntax");
lf[8]=C_h_intern(&lf[8],25,"set!-values/define-values");
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[9]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[10]=C_static_lambda_info(C_heaptop,23,"(assign vars108 exp109)");
lf[11]=C_h_intern(&lf[11],27,"\010compilercompiler-arguments");
lf[12]=C_h_intern(&lf[12],29,"\010compilerprocess-command-line");
lf[13]=C_h_intern(&lf[13],7,"reverse");
lf[14]=C_h_intern(&lf[14],14,"string->symbol");
lf[15]=C_h_intern(&lf[15],9,"substring");
lf[16]=C_static_lambda_info(C_heaptop,37,"(loop args629 options630 filename631)");
lf[17]=C_static_lambda_info(C_heaptop,41,"(##compiler#process-command-line args627)");
lf[18]=C_h_intern(&lf[18],25,"\003sysimplicit-exit-handler");
lf[19]=C_h_intern(&lf[19],17,"user-options-pass");
lf[20]=C_static_lambda_info(C_heaptop,7,"(a1176)");
lf[21]=C_h_intern(&lf[21],4,"exit");
lf[22]=C_h_intern(&lf[22],19,"compile-source-file");
lf[23]=C_h_intern(&lf[23],14,"optimize-level");
lf[24]=C_h_intern(&lf[24],5,"cons*");
lf[25]=C_h_intern(&lf[25],22,"optimize-leaf-routines");
lf[26]=C_h_intern(&lf[26],6,"unsafe");
lf[27]=C_h_intern(&lf[27],25,"\010compilercompiler-warning");
lf[28]=C_h_intern(&lf[28],5,"usage");
lf[29]=C_static_string(C_heaptop,39,"invalid optimization level ~S - ignored");
lf[30]=C_h_intern(&lf[30],11,"debug-level");
lf[31]=C_h_intern(&lf[31],14,"no-lambda-info");
lf[32]=C_h_intern(&lf[32],8,"no-trace");
lf[33]=C_static_string(C_heaptop,32,"invalid debug level ~S - ignored");
lf[34]=C_h_intern(&lf[34],14,"benchmark-mode");
lf[35]=C_h_intern(&lf[35],17,"fixnum-arithmetic");
lf[36]=C_h_intern(&lf[36],18,"disable-interrupts");
lf[37]=C_h_intern(&lf[37],5,"block");
lf[38]=C_h_intern(&lf[38],11,"lambda-lift");
lf[39]=C_h_intern(&lf[39],31,"\010compilervalid-compiler-options");
lf[40]=C_h_intern(&lf[40],45,"\010compilervalid-compiler-options-with-argument");
lf[41]=C_h_intern(&lf[41],4,"quit");
lf[42]=C_static_string(C_heaptop,32,"missing argument to `-~s\047 option");
lf[43]=C_static_string(C_heaptop,38,"invalid compiler option `~a\047 - ignored");
lf[44]=C_h_intern(&lf[44],4,"conc");
lf[45]=C_static_string(C_heaptop,1,"-");
lf[46]=C_static_lambda_info(C_heaptop,12,"(loop os641)");
lf[47]=C_static_lambda_info(C_heaptop,30,"(a1188 filename638 options639)");
lf[48]=C_h_intern(&lf[48],6,"append");
lf[49]=C_static_string(C_heaptop,0,"");
lf[50]=C_static_lambda_info(C_heaptop,12,"(a1399 x624)");
lf[51]=C_h_intern(&lf[51],6,"remove");
lf[52]=C_static_string(C_heaptop,0,"");
lf[53]=C_h_intern(&lf[53],12,"string-split");
lf[54]=C_h_intern(&lf[54],6,"getenv");
lf[55]=C_static_string(C_heaptop,15,"CHICKEN_OPTIONS");
lf[56]=C_h_intern(&lf[56],4,"argv");
lf[57]=C_h_intern(&lf[57],20,"foreign-safe-wrapper");
lf[58]=C_h_intern(&lf[58],7,"warning");
lf[59]=C_h_intern(&lf[59],7,"sprintf");
lf[60]=C_static_string(C_heaptop,36,"`~s\047 is deprecated, use `~s\047 instead");
lf[61]=C_h_intern(&lf[61],24,"foreign-callback-wrapper");
lf[62]=C_static_lambda_info(C_heaptop,15,"(a1420 args602)");
lf[63]=C_h_intern(&lf[63],20,"\003sysregister-macro-2");
lf[64]=C_h_intern(&lf[64],20,"foreign-safe-lambda*");
lf[65]=C_h_intern(&lf[65],24,"foreign-callback-lambda*");
lf[66]=C_static_lambda_info(C_heaptop,15,"(a1433 args600)");
lf[67]=C_h_intern(&lf[67],19,"foreign-safe-lambda");
lf[68]=C_h_intern(&lf[68],23,"foreign-callback-lambda");
lf[69]=C_static_lambda_info(C_heaptop,15,"(a1446 args598)");
lf[70]=C_h_intern(&lf[70],4,"args");
lf[71]=C_h_intern(&lf[71],5,"quote");
lf[72]=C_h_intern(&lf[72],4,"cons");
lf[73]=C_h_intern(&lf[73],12,"define-macro");
lf[74]=C_static_lambda_info(C_heaptop,21,"(a1459 old596 new597)");
lf[75]=C_h_intern(&lf[75],18,"\003sysregister-macro");
lf[76]=C_h_intern(&lf[76],23,"define-deprecated-macro");
lf[77]=C_h_intern(&lf[77],5,"begin");
lf[78]=C_h_intern(&lf[78],4,"syms");
lf[79]=C_h_intern(&lf[79],7,"symbol\077");
lf[80]=C_h_intern(&lf[80],4,"list");
lf[81]=C_h_intern(&lf[81],2,"if");
lf[82]=C_h_intern(&lf[82],3,"sum");
lf[83]=C_h_intern(&lf[83],5,"null\077");
lf[84]=C_h_intern(&lf[84],3,"cdr");
lf[85]=C_h_intern(&lf[85],3,"car");
lf[86]=C_h_intern(&lf[86],3,"val");
lf[87]=C_h_intern(&lf[87],4,"case");
lf[88]=C_h_intern(&lf[88],3,"let");
lf[89]=C_h_intern(&lf[89],11,"bitwise-ior");
lf[90]=C_h_intern(&lf[90],4,"loop");
lf[91]=C_h_intern(&lf[91],6,"define");
lf[92]=C_h_intern(&lf[92],4,"cond");
lf[93]=C_h_intern(&lf[93],19,"define-foreign-type");
lf[94]=C_h_intern(&lf[94],10,"\003sysappend");
lf[95]=C_h_intern(&lf[95],4,"else");
lf[96]=C_h_intern(&lf[96],1,"=");
lf[97]=C_static_lambda_info(C_heaptop,17,"(a1572 a593 s594)");
lf[98]=C_h_intern(&lf[98],5,"error");
lf[99]=C_static_string(C_heaptop,20,"not a member of enum");
lf[100]=C_static_lambda_info(C_heaptop,17,"(a1658 a591 s592)");
lf[101]=C_h_intern(&lf[101],23,"define-foreign-variable");
lf[102]=C_h_intern(&lf[102],7,"integer");
lf[103]=C_h_intern(&lf[103],8,"->string");
lf[104]=C_static_lambda_info(C_heaptop,17,"(a1696 a589 v590)");
lf[105]=C_static_string(C_heaptop,8,"number->");
lf[106]=C_static_string(C_heaptop,8,"->number");
lf[107]=C_static_lambda_info(C_heaptop,12,"(a1714 e586)");
lf[108]=C_h_intern(&lf[108],7,"\003sysmap");
lf[109]=C_static_lambda_info(C_heaptop,12,"(a1726 e583)");
lf[110]=C_static_lambda_info(C_heaptop,30,"(a1493 typename577 . enums578)");
lf[111]=C_h_intern(&lf[111],19,"define-foreign-enum");
lf[112]=C_h_intern(&lf[112],15,"foreign-declare");
lf[113]=C_h_intern(&lf[113],12,"\004coredeclare");
lf[114]=C_static_lambda_info(C_heaptop,15,"(a1759 strs576)");
lf[115]=C_h_intern(&lf[115],8,"identity");
lf[116]=C_h_intern(&lf[116],5,"const");
tmp=C_intern(C_heaptop,6,"struct");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"union");
C_save(tmp);
lf[117]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[118]=C_h_intern(&lf[118],9,"c-pointer");
lf[119]=C_static_lambda_info(C_heaptop,15,"(stype type543)");
tmp=C_intern(C_heaptop,6,"struct");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"union");
C_save(tmp);
lf[120]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[121]=C_static_lambda_info(C_heaptop,17,"(strtype type544)");
lf[122]=C_h_intern(&lf[122],3,"int");
lf[123]=C_h_intern(&lf[123],15,"foreign-lambda*");
lf[124]=C_h_intern(&lf[124],4,"fx>=");
lf[125]=C_h_intern(&lf[125],3,"fx<");
lf[126]=C_h_intern(&lf[126],3,"and");
lf[127]=C_h_intern(&lf[127],10,"\004corecheck");
lf[128]=C_h_intern(&lf[128],21,"define-foreign-record");
lf[129]=C_h_intern(&lf[129],12,"syntax-error");
lf[130]=C_static_string(C_heaptop,25,"array access out of range");
lf[131]=C_h_intern(&lf[131],4,"void");
lf[132]=C_static_string(C_heaptop,25,"array access out of range");
lf[133]=C_static_string(C_heaptop,16,"~A->~A[~A] = ~A;");
lf[134]=C_static_string(C_heaptop,10,"~A-~A-set!");
lf[135]=C_static_string(C_heaptop,1,"&");
lf[136]=C_static_string(C_heaptop,0,"");
lf[137]=C_static_string(C_heaptop,21,"return(~A~A->~A[~A]);");
lf[138]=C_static_string(C_heaptop,5,"~A-~A");
lf[139]=C_static_string(C_heaptop,12,"~A->~A = ~A;");
lf[140]=C_static_string(C_heaptop,10,"~A-~A-set!");
lf[141]=C_static_string(C_heaptop,1,"&");
lf[142]=C_static_string(C_heaptop,0,"");
lf[143]=C_static_string(C_heaptop,17,"return(~A~A->~A);");
lf[144]=C_static_string(C_heaptop,5,"~A-~A");
lf[145]=C_static_string(C_heaptop,13,"bad slot spec");
lf[146]=C_static_lambda_info(C_heaptop,15,"(a1916 slot562)");
lf[147]=C_h_intern(&lf[147],3,"ptr");
lf[148]=C_h_intern(&lf[148],11,"\004coreinline");
lf[149]=C_static_string(C_heaptop,7,"C_qfree");
lf[150]=C_static_string(C_heaptop,35,"return((~a *)C_malloc(sizeof(~a)));");
lf[151]=C_h_intern(&lf[151],7,"declare");
lf[152]=C_h_intern(&lf[152],18,"string-intersperse");
lf[153]=C_static_string(C_heaptop,1,"\012");
lf[154]=C_static_string(C_heaptop,2,"};");
lf[155]=C_static_string(C_heaptop,7,"~A[~A];");
lf[156]=C_h_intern(&lf[156],33,"\010compilerforeign-type-declaration");
lf[157]=C_static_string(C_heaptop,3,"~A;");
lf[158]=C_static_string(C_heaptop,13,"bad slot spec");
lf[159]=C_static_lambda_info(C_heaptop,15,"(a2388 slot559)");
lf[160]=C_h_intern(&lf[160],13,"string-append");
lf[161]=C_static_string(C_heaptop,7,"struct ");
lf[162]=C_static_string(C_heaptop,3," { ");
lf[163]=C_h_intern(&lf[163],19,"\003syshash-table-set!");
lf[164]=C_h_intern(&lf[164],27,"\010compilerforeign-type-table");
lf[165]=C_h_intern(&lf[165],7,"\000rename");
lf[166]=C_h_intern(&lf[166],4,"eval");
lf[167]=C_h_intern(&lf[167],5,"cadar");
lf[168]=C_h_intern(&lf[168],12,"\000constructor");
lf[169]=C_h_intern(&lf[169],11,"\000destructor");
lf[170]=C_static_string(C_heaptop,41,"invalid foreign record-type specification");
lf[171]=C_h_intern(&lf[171],4,"caar");
lf[172]=C_h_intern(&lf[172],8,"keyword\077");
lf[173]=C_static_lambda_info(C_heaptop,15,"(do540 slts550)");
lf[174]=C_static_string(C_heaptop,9,"struct ~A");
lf[175]=C_static_lambda_info(C_heaptop,26,"(a1773 name529 . slots530)");
lf[176]=C_h_intern(&lf[176],5,"code_");
lf[177]=C_static_lambda_info(C_heaptop,22,"(a2567 str518 type519)");
lf[178]=C_h_intern(&lf[178],13,"foreign-value");
lf[179]=C_static_string(C_heaptop,55,"static C_word ~A() { ~A\012; return C_SCHEME_UNDEFINED; }\012");
lf[180]=C_static_string(C_heaptop,1,"\012");
lf[181]=C_static_lambda_info(C_heaptop,15,"(a2580 strs516)");
lf[182]=C_h_intern(&lf[182],12,"foreign-code");
lf[183]=C_h_intern(&lf[183],17,"\004corelet-location");
lf[184]=C_static_lambda_info(C_heaptop,25,"(a2626 b513 a514 rest515)");
lf[185]=C_h_intern(&lf[185],10,"fold-right");
lf[186]=C_static_lambda_info(C_heaptop,17,"(a2685 b511 a512)");
lf[187]=C_h_intern(&lf[187],10,"append-map");
lf[188]=C_static_lambda_info(C_heaptop,12,"(a2709 _510)");
lf[189]=C_static_lambda_info(C_heaptop,29,"(a2609 bindings507 . body508)");
lf[190]=C_h_intern(&lf[190],12,"let-location");
lf[191]=C_h_intern(&lf[191],28,"\004coredefine-foreign-variable");
lf[192]=C_h_intern(&lf[192],29,"\004coredefine-external-variable");
lf[193]=C_h_intern(&lf[193],14,"symbol->string");
lf[194]=C_static_lambda_info(C_heaptop,32,"(a2715 var503 type504 . init505)");
lf[195]=C_h_intern(&lf[195],15,"define-location");
lf[196]=C_h_intern(&lf[196],15,"define-external");
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
tmp=C_h_pair(C_restore,tmp);
lf[197]=C_h_pair(C_restore,tmp);
lf[198]=C_static_string(C_heaptop,0,"");
lf[199]=C_h_intern(&lf[199],29,"\004coreforeign-callback-wrapper");
lf[200]=C_static_lambda_info(C_heaptop,12,"(a2935 a501)");
lf[201]=C_static_lambda_info(C_heaptop,12,"(a2945 a500)");
tmp=C_intern(C_heaptop,6,"string");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
lf[202]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_h_pair(C_restore,tmp);
lf[203]=C_h_pair(C_restore,tmp);
lf[204]=C_static_lambda_info(C_heaptop,15,"(a2790 form493)");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"string");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"string");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"lambda");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"lambda-list");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
lf[205]=C_h_list(5,C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(5);
lf[206]=C_static_string(C_heaptop,0,"");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"string");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"lambda");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"lambda-list");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_h_pair(C_restore,tmp);
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
lf[207]=C_h_list(4,C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(4);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"string");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_h_pair(C_restore,tmp);
lf[208]=C_h_pair(C_restore,tmp);
lf[209]=C_static_lambda_info(C_heaptop,15,"(a3010 form489)");
lf[210]=C_h_intern(&lf[210],22,"\004coreforeign-primitive");
lf[211]=C_static_lambda_info(C_heaptop,12,"(a3123 x487)");
lf[212]=C_h_intern(&lf[212],17,"foreign-primitive");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[213]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[214]=C_static_lambda_info(C_heaptop,13,"(a3110 xs486)");
lf[215]=C_h_intern(&lf[215],29,"\004coreforeign-callback-lambda*");
lf[216]=C_static_lambda_info(C_heaptop,12,"(a3142 x484)");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"string");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_h_pair(C_restore,tmp);
lf[217]=C_h_pair(C_restore,tmp);
lf[218]=C_static_lambda_info(C_heaptop,13,"(a3129 xs483)");
lf[219]=C_h_intern(&lf[219],28,"\004coreforeign-callback-lambda");
lf[220]=C_static_lambda_info(C_heaptop,12,"(a3161 x481)");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_h_pair(C_restore,tmp);
lf[221]=C_h_pair(C_restore,tmp);
lf[222]=C_static_lambda_info(C_heaptop,13,"(a3148 xs480)");
lf[223]=C_h_intern(&lf[223],20,"\004coreforeign-lambda*");
lf[224]=C_static_lambda_info(C_heaptop,12,"(a3180 x478)");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,6,"string");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_h_pair(C_restore,tmp);
lf[225]=C_h_pair(C_restore,tmp);
lf[226]=C_static_lambda_info(C_heaptop,13,"(a3167 xs477)");
lf[227]=C_h_intern(&lf[227],19,"\004coreforeign-lambda");
lf[228]=C_static_lambda_info(C_heaptop,12,"(a3199 x475)");
lf[229]=C_h_intern(&lf[229],14,"foreign-lambda");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_h_pair(C_restore,tmp);
lf[230]=C_h_pair(C_restore,tmp);
lf[231]=C_static_lambda_info(C_heaptop,13,"(a3186 xs474)");
lf[232]=C_static_lambda_info(C_heaptop,12,"(a3218 x472)");
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[233]=C_h_pair(C_restore,tmp);
lf[234]=C_static_lambda_info(C_heaptop,13,"(a3205 xs471)");
lf[235]=C_h_intern(&lf[235],24,"\004coredefine-foreign-type");
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
tmp=C_fix(3);
C_save(tmp);
tmp=C_h_vector(3,C_pick(2),C_pick(1),C_pick(0));
C_drop(3);
lf[236]=C_h_pair(C_restore,tmp);
lf[237]=C_static_lambda_info(C_heaptop,13,"(a3224 xs469)");
lf[238]=C_h_intern(&lf[238],17,"register-feature!");
lf[239]=C_h_intern(&lf[239],6,"srfi-8");
lf[240]=C_h_intern(&lf[240],7,"srfi-16");
lf[241]=C_h_intern(&lf[241],7,"srfi-26");
lf[242]=C_h_intern(&lf[242],7,"srfi-31");
lf[243]=C_h_intern(&lf[243],7,"srfi-15");
lf[244]=C_h_intern(&lf[244],7,"srfi-11");
tmp=C_intern(C_heaptop,4,"void");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[245]=C_h_pair(C_restore,tmp);
lf[246]=C_h_intern(&lf[246],25,"\003sysenable-runtime-macros");
tmp=C_intern(C_heaptop,5,"begin");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[247]=C_h_pair(C_restore,tmp);
lf[248]=C_h_intern(&lf[248],17,"define-for-syntax");
lf[249]=C_static_string(C_heaptop,18,"invalid identifier");
lf[250]=C_static_lambda_info(C_heaptop,25,"(a3261 head422 . body423)");
lf[251]=C_h_intern(&lf[251],6,"letrec");
lf[252]=C_static_lambda_info(C_heaptop,25,"(a3321 head420 . args421)");
lf[253]=C_h_intern(&lf[253],3,"rec");
lf[254]=C_h_intern(&lf[254],22,"chicken-compile-shared");
lf[255]=C_h_intern(&lf[255],3,"not");
lf[256]=C_h_intern(&lf[256],9,"compiling");
lf[257]=C_h_intern(&lf[257],4,"unit");
lf[258]=C_h_intern(&lf[258],7,"provide");
lf[259]=C_h_intern(&lf[259],11,"cond-expand");
lf[260]=C_h_intern(&lf[260],6,"export");
tmp=C_intern(C_heaptop,5,"begin");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[261]=C_h_pair(C_restore,tmp);
lf[262]=C_h_intern(&lf[262],6,"static");
lf[263]=C_h_intern(&lf[263],4,"cdar");
lf[264]=C_h_intern(&lf[264],7,"dynamic");
lf[265]=C_h_intern(&lf[265],16,"define-extension");
lf[266]=C_static_string(C_heaptop,24,"invalid clause specifier");
lf[267]=C_static_string(C_heaptop,21,"invalid clause syntax");
lf[268]=C_static_lambda_info(C_heaptop,33,"(loop s410 d411 cs412 exports413)");
lf[269]=C_static_lambda_info(C_heaptop,28,"(a3372 name407 . clauses408)");
lf[270]=C_h_intern(&lf[270],22,"string-parse-start+end");
lf[271]=C_h_intern(&lf[271],7,"receive");
lf[272]=C_h_intern(&lf[272],28,"string-parse-final-start+end");
lf[273]=C_static_lambda_info(C_heaptop,55,"(a3543 s-e-r401 proc402 s-exp403 args-exp404 . body405)");
lf[274]=C_h_intern(&lf[274],20,"let-string-start+end");
lf[275]=C_h_intern(&lf[275],5,"apply");
lf[276]=C_h_intern(&lf[276],2,"<>");
lf[277]=C_h_intern(&lf[277],5,"<...>");
lf[278]=C_static_lambda_info(C_heaptop,42,"(loop xs388 vars389 bs390 vals391 rest392)");
lf[279]=C_static_lambda_info(C_heaptop,15,"(a3602 more386)");
lf[280]=C_h_intern(&lf[280],4,"cute");
lf[281]=C_static_lambda_info(C_heaptop,36,"(loop xs374 vars375 vals376 rest377)");
lf[282]=C_static_lambda_info(C_heaptop,15,"(a3745 more372)");
lf[283]=C_h_intern(&lf[283],3,"cut");
lf[284]=C_h_intern(&lf[284],22,"\004corerequire-extension");
lf[285]=C_static_lambda_info(C_heaptop,12,"(a3886 x369)");
lf[286]=C_h_intern(&lf[286],3,"use");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[287]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[288]=C_static_lambda_info(C_heaptop,14,"(a3873 ids368)");
lf[289]=C_static_lambda_info(C_heaptop,12,"(a3905 x366)");
lf[290]=C_h_intern(&lf[290],17,"require-extension");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[291]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[292]=C_static_lambda_info(C_heaptop,14,"(a3892 ids365)");
lf[293]=C_h_intern(&lf[293],23,"\004corerequire-for-syntax");
lf[294]=C_h_intern(&lf[294],18,"require-for-syntax");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[295]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[296]=C_static_lambda_info(C_heaptop,16,"(a3911 names363)");
lf[297]=C_h_intern(&lf[297],18,"\003sysmake-structure");
lf[298]=C_h_intern(&lf[298],1,"x");
lf[299]=C_h_intern(&lf[299],14,"\003sysstructure\077");
lf[300]=C_h_intern(&lf[300],15,"\000record-setters");
lf[301]=C_h_intern(&lf[301],12,"\003sysfeatures");
lf[302]=C_h_intern(&lf[302],19,"\003syscheck-structure");
lf[303]=C_h_intern(&lf[303],13,"\003sysblock-ref");
lf[304]=C_h_intern(&lf[304],18,"getter-with-setter");
lf[305]=C_h_intern(&lf[305],1,"y");
lf[306]=C_h_intern(&lf[306],14,"\003sysblock-set!");
lf[307]=C_static_lambda_info(C_heaptop,20,"(loop slots356 i357)");
tmp=C_intern(C_heaptop,8,"\003sysvoid");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[308]=C_h_pair(C_restore,tmp);
lf[309]=C_static_lambda_info(C_heaptop,16,"(a4101 sname354)");
lf[310]=C_static_lambda_info(C_heaptop,41,"(a3920 t348 conser349 pred350 . slots351)");
lf[311]=C_h_intern(&lf[311],18,"define-record-type");
lf[312]=C_h_intern(&lf[312],4,"memv");
lf[313]=C_static_lambda_info(C_heaptop,12,"(a4207 k346)");
lf[314]=C_static_lambda_info(C_heaptop,19,"(parse-clause c342)");
lf[315]=C_h_intern(&lf[315],9,"condition");
lf[316]=C_h_intern(&lf[316],8,"\003sysslot");
lf[317]=C_h_intern(&lf[317],17,"handle-exceptions");
lf[318]=C_h_intern(&lf[318],10,"\003syssignal");
lf[319]=C_static_lambda_info(C_heaptop,27,"(a4110 exp337 . clauses338)");
lf[320]=C_h_intern(&lf[320],14,"condition-case");
lf[321]=C_h_intern(&lf[321],9,"\003sysapply");
lf[322]=C_h_intern(&lf[322],10,"\003sysvalues");
lf[323]=C_h_intern(&lf[323],22,"with-exception-handler");
lf[324]=C_h_intern(&lf[324],30,"call-with-current-continuation");
lf[325]=C_static_lambda_info(C_heaptop,35,"(a4294 var332 handler333 . body334)");
lf[326]=C_h_intern(&lf[326],27,"\003sysregister-record-printer");
lf[327]=C_h_intern(&lf[327],21,"define-record-printer");
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
lf[328]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
lf[329]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[330]=C_static_lambda_info(C_heaptop,25,"(a4370 head328 . body329)");
lf[331]=C_h_intern(&lf[331],6,"length");
lf[332]=C_h_intern(&lf[332],9,"split-at!");
lf[333]=C_h_intern(&lf[333],4,"take");
lf[334]=C_static_lambda_info(C_heaptop,7,"(a4527)");
lf[335]=C_static_lambda_info(C_heaptop,25,"(build vars2320 vrest321)");
lf[336]=C_static_lambda_info(C_heaptop,25,"(a4537 vars1316 vars2317)");
lf[337]=C_h_intern(&lf[337],3,"fx=");
lf[338]=C_h_intern(&lf[338],11,"case-lambda");
lf[339]=C_h_intern(&lf[339],11,"lambda-list");
lf[340]=C_static_lambda_info(C_heaptop,31,"(a4507 vars312 argc313 rest314)");
lf[341]=C_h_intern(&lf[341],25,"\003sysdecompose-lambda-list");
lf[342]=C_static_lambda_info(C_heaptop,20,"(a4497 c310 body311)");
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
lf[343]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[344]=C_static_lambda_info(C_heaptop,11,"(loop i300)");
lf[345]=C_h_intern(&lf[345],3,"min");
lf[346]=C_static_lambda_info(C_heaptop,31,"(a4700 vars304 argc305 rest306)");
lf[347]=C_static_lambda_info(C_heaptop,12,"(a4690 c303)");
lf[348]=C_h_intern(&lf[348],7,"require");
lf[349]=C_h_intern(&lf[349],6,"srfi-1");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[350]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[351]=C_static_lambda_info(C_heaptop,18,"(a4427 clauses296)");
lf[352]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[353]=C_h_intern(&lf[353],14,"\004coreimmutable");
lf[354]=C_h_intern(&lf[354],9,"\003syserror");
lf[355]=C_static_lambda_info(C_heaptop,25,"(loop args289 vardefs290)");
lf[356]=C_h_intern(&lf[356],14,"let-optionals*");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[357]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[358]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[359]=C_static_lambda_info(C_heaptop,37,"(a4703 args284 var/defs285 . body286)");
lf[360]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[361]=C_static_lambda_info(C_heaptop,30,"(a4856 rest281 default-exp282)");
lf[362]=C_h_intern(&lf[362],9,":optional");
lf[363]=C_static_lambda_info(C_heaptop,29,"(prefix-sym prefix266 sym267)");
lf[364]=C_h_intern(&lf[364],4,"let*");
lf[365]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[366]=C_static_lambda_info(C_heaptop,45,"(recur vars259 defaulters260 non-defaults261)");
lf[367]=C_static_lambda_info(C_heaptop,54,"(recur vars247 defaulter-names248 defs249 next-guy250)");
lf[368]=C_static_string(C_heaptop,4,"def-");
lf[369]=C_static_lambda_info(C_heaptop,14,"(a5179 var274)");
lf[370]=C_h_intern(&lf[370],5,"%rest");
lf[371]=C_h_intern(&lf[371],4,"body");
lf[372]=C_h_intern(&lf[372],4,"cadr");
lf[373]=C_static_string(C_heaptop,1,"%");
lf[374]=C_static_lambda_info(C_heaptop,12,"(a5189 v269)");
lf[375]=C_h_intern(&lf[375],13,"let-optionals");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[376]=C_h_vector(2,C_pick(1),C_pick(0));
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
lf[377]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[378]=C_static_lambda_info(C_heaptop,41,"(a4913 arg-list236 var/defs237 . body238)");
lf[379]=C_h_intern(&lf[379],4,"eqv\077");
lf[380]=C_h_intern(&lf[380],6,"switch");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[381]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[382]=C_h_pair(C_restore,tmp);
lf[383]=C_static_lambda_info(C_heaptop,19,"(expand clauses231)");
lf[384]=C_static_lambda_info(C_heaptop,15,"(a5199 form226)");
lf[385]=C_static_string(C_heaptop,34,"syntax error in `cond-expand\047 form");
lf[386]=C_static_lambda_info(C_heaptop,10,"(err x206)");
lf[387]=C_h_intern(&lf[387],12,"\003sysfeature\077");
lf[388]=C_h_intern(&lf[388],2,"or");
lf[389]=C_static_lambda_info(C_heaptop,12,"(test fx207)");
lf[390]=C_static_string(C_heaptop,40,"no matching clause in `cond-expand\047 form");
lf[391]=C_static_lambda_info(C_heaptop,12,"(a5459 x217)");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[392]=C_h_pair(C_restore,tmp);
lf[393]=C_static_lambda_info(C_heaptop,15,"(expand cls216)");
lf[394]=C_static_lambda_info(C_heaptop,18,"(a5288 clauses203)");
lf[395]=C_h_intern(&lf[395],21,"\003syssyntax-error-hook");
lf[396]=C_static_string(C_heaptop,31,"syntax error in \047and-let*\047 form");
lf[397]=C_static_lambda_info(C_heaptop,12,"(fold bs197)");
lf[398]=C_h_intern(&lf[398],8,"and-let*");
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
lf[399]=C_h_pair(C_restore,tmp);
lf[400]=C_static_lambda_info(C_heaptop,16,"(a5534 forms191)");
lf[401]=C_h_intern(&lf[401],16,"\003sysdynamic-wind");
lf[402]=C_h_intern(&lf[402],22,"\003sysdisable-interrupts");
lf[403]=C_h_intern(&lf[403],21,"\003sysenable-interrupts");
lf[404]=C_static_lambda_info(C_heaptop,15,"(a5650 form190)");
lf[405]=C_h_intern(&lf[405],16,"critical-section");
lf[406]=C_h_intern(&lf[406],20,"\004coredefine-constant");
lf[407]=C_h_intern(&lf[407],15,"define-constant");
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
lf[408]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[409]=C_static_lambda_info(C_heaptop,15,"(a5664 form188)");
lf[410]=C_h_intern(&lf[410],18,"\004coredefine-inline");
lf[411]=C_h_intern(&lf[411],13,"define-inline");
lf[412]=C_static_string(C_heaptop,42,"invalid substitution form - must be lambda");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_fix(1);
C_save(tmp);
lf[413]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[414]=C_static_lambda_info(C_heaptop,15,"(a5685 form186)");
lf[415]=C_h_intern(&lf[415],8,"list-ref");
lf[416]=C_static_lambda_info(C_heaptop,19,"(a5695 i173 exp174)");
lf[417]=C_h_intern(&lf[417],9,"nth-value");
lf[418]=C_static_lambda_info(C_heaptop,13,"(lookup v168)");
lf[419]=C_static_lambda_info(C_heaptop,12,"(a5788 v171)");
lf[420]=C_static_lambda_info(C_heaptop,13,"(a5762 vb170)");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[421]=C_h_pair(C_restore,tmp);
lf[422]=C_static_lambda_info(C_heaptop,12,"(a5810 v169)");
lf[423]=C_static_lambda_info(C_heaptop,12,"(a5816 v166)");
lf[424]=C_static_lambda_info(C_heaptop,12,"(a5830 x164)");
lf[425]=C_h_intern(&lf[425],13,"letrec-values");
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
lf[426]=C_h_pair(C_restore,tmp);
lf[427]=C_static_lambda_info(C_heaptop,15,"(a5716 form160)");
lf[428]=C_h_intern(&lf[428],10,"let-values");
lf[429]=C_static_lambda_info(C_heaptop,19,"(fold vbindings157)");
lf[430]=C_h_intern(&lf[430],11,"let*-values");
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
lf[431]=C_h_pair(C_restore,tmp);
lf[432]=C_static_lambda_info(C_heaptop,15,"(a5836 form153)");
lf[433]=C_static_lambda_info(C_heaptop,20,"(append* il117 l118)");
lf[434]=C_static_lambda_info(C_heaptop,19,"(map* proc119 l120)");
lf[435]=C_static_lambda_info(C_heaptop,13,"(lookup v135)");
lf[436]=C_static_lambda_info(C_heaptop,12,"(a6018 v147)");
lf[437]=C_static_lambda_info(C_heaptop,35,"(fold llists144 exps145 llists2146)");
lf[438]=C_static_lambda_info(C_heaptop,12,"(a6118 x149)");
lf[439]=C_static_lambda_info(C_heaptop,23,"(loop llists138 acc139)");
lf[440]=C_static_lambda_info(C_heaptop,12,"(a6170 v133)");
lf[441]=C_static_lambda_info(C_heaptop,23,"(loop llists127 acc128)");
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
lf[442]=C_h_pair(C_restore,tmp);
lf[443]=C_static_lambda_info(C_heaptop,15,"(a5886 form121)");
lf[444]=C_h_intern(&lf[444],13,"define-values");
lf[445]=C_h_intern(&lf[445],11,"set!-values");
lf[446]=C_static_lambda_info(C_heaptop,25,"(a6220 test104 . body105)");
lf[447]=C_h_intern(&lf[447],6,"unless");
lf[448]=C_static_lambda_info(C_heaptop,25,"(a6234 test102 . body103)");
lf[449]=C_h_intern(&lf[449],4,"when");
lf[450]=C_h_intern(&lf[450],1,"t");
lf[451]=C_static_lambda_info(C_heaptop,17,"(a6308 a99 a2100)");
lf[452]=C_h_intern(&lf[452],8,"\003syslist");
lf[453]=C_static_lambda_info(C_heaptop,11,"(a6342 z98)");
lf[454]=C_static_lambda_info(C_heaptop,11,"(a6348 z96)");
lf[455]=C_h_intern(&lf[455],12,"parameterize");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[456]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[457]=C_static_lambda_info(C_heaptop,27,"(a6244 bindings90 . body91)");
lf[458]=C_h_intern(&lf[458],10,"\000compiling");
lf[459]=C_h_intern(&lf[459],19,"\004corecompiletimetoo");
lf[460]=C_h_intern(&lf[460],20,"\004corecompiletimeonly");
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[461]=C_h_pair(C_restore,tmp);
tmp=C_intern(C_heaptop,14,"\004coreundefined");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[462]=C_h_pair(C_restore,tmp);
lf[463]=C_h_intern(&lf[463],4,"load");
lf[464]=C_h_intern(&lf[464],8,"run-time");
lf[465]=C_h_intern(&lf[465],7,"compile");
lf[466]=C_h_intern(&lf[466],12,"compile-time");
lf[467]=C_static_string(C_heaptop,27,"invalid situation specifier");
lf[468]=C_static_lambda_info(C_heaptop,11,"(loop ss77)");
lf[469]=C_static_lambda_info(C_heaptop,29,"(a6354 situations70 . body71)");
lf[470]=C_h_intern(&lf[470],9,"eval-when");
lf[471]=C_h_intern(&lf[471],8,"\003sysvoid");
lf[472]=C_static_lambda_info(C_heaptop,17,"(a6515 id67 ot68)");
lf[473]=C_static_lambda_info(C_heaptop,17,"(a6521 nt65 id66)");
lf[474]=C_static_lambda_info(C_heaptop,17,"(a6559 id63 nt64)");
lf[475]=C_static_lambda_info(C_heaptop,17,"(a6565 ot61 id62)");
lf[476]=C_static_lambda_info(C_heaptop,10,"(loop n59)");
lf[477]=C_static_lambda_info(C_heaptop,11,"(a6611 x57)");
lf[478]=C_static_lambda_info(C_heaptop,11,"(a6617 x56)");
lf[479]=C_h_intern(&lf[479],9,"fluid-let");
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[480]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[481]=C_static_lambda_info(C_heaptop,26,"(a6449 clauses51 . body52)");
lf[482]=C_h_intern(&lf[482],11,"\000type-error");
lf[483]=C_h_intern(&lf[483],15,"\003syssignal-hook");
lf[484]=C_static_string(C_heaptop,27,"argument has incorrect type");
lf[485]=C_static_lambda_info(C_heaptop,29,"(a6623 pred46 exp47 . args48)");
lf[486]=C_h_intern(&lf[486],6,"ensure");
lf[487]=C_static_string(C_heaptop,16,"assertion failed");
lf[488]=C_static_lambda_info(C_heaptop,30,"(a6682 exp43 . msg-and-args44)");
lf[489]=C_h_intern(&lf[489],6,"assert");
lf[490]=C_h_intern(&lf[490],20,"with-input-from-file");
lf[491]=C_h_intern(&lf[491],4,"read");
lf[492]=C_static_lambda_info(C_heaptop,15,"(do37 x39 xs40)");
lf[493]=C_static_lambda_info(C_heaptop,7,"(a6758)");
lf[494]=C_h_intern(&lf[494],5,"print");
lf[495]=C_static_string(C_heaptop,12,"; including ");
lf[496]=C_static_string(C_heaptop,4," ...");
lf[497]=C_h_intern(&lf[497],12,"load-verbose");
lf[498]=C_h_intern(&lf[498],28,"\003sysresolve-include-filename");
lf[499]=C_static_lambda_info(C_heaptop,18,"(a6742 filename35)");
lf[500]=C_h_intern(&lf[500],7,"include");
lf[501]=C_static_lambda_info(C_heaptop,11,"(a6807 x31)");
lf[502]=C_static_lambda_info(C_heaptop,17,"(a6797 . specs30)");
lf[503]=C_h_intern(&lf[503],15,"\003sysstart-timer");
lf[504]=C_h_intern(&lf[504],14,"\003sysstop-timer");
lf[505]=C_h_intern(&lf[505],17,"\003sysdisplay-times");
lf[506]=C_static_lambda_info(C_heaptop,16,"(a6813 . exps28)");
lf[507]=C_h_intern(&lf[507],4,"time");
tmp=C_intern(C_heaptop,1,"_");
C_save(tmp);
tmp=C_intern(C_heaptop,1,"_");
lf[508]=C_h_pair(C_restore,tmp);
lf[509]=C_static_lambda_info(C_heaptop,23,"(a6854 vars23 . rest24)");
lf[510]=C_h_intern(&lf[510],28,"\003sysstring->qualified-symbol");
lf[511]=C_static_string(C_heaptop,1,"-");
lf[512]=C_static_string(C_heaptop,1,"-");
lf[513]=C_static_string(C_heaptop,5,"-set!");
lf[514]=C_static_lambda_info(C_heaptop,22,"(mapslots slots15 i16)");
lf[515]=C_static_string(C_heaptop,1,"\077");
lf[516]=C_static_string(C_heaptop,5,"make-");
lf[517]=C_h_intern(&lf[517],27,"\003sysqualified-symbol-prefix");
lf[518]=C_h_intern(&lf[518],13,"define-record");
tmp=C_intern(C_heaptop,6,"symbol");
C_save(tmp);
tmp=C_fix(0);
C_save(tmp);
lf[519]=C_h_vector(2,C_pick(1),C_pick(0));
C_drop(2);
lf[520]=C_h_intern(&lf[520],6,"symbol");
lf[521]=C_static_lambda_info(C_heaptop,23,"(a6942 name9 . slots10)");
lf[522]=C_h_intern(&lf[522],11,"\003sysprovide");
lf[523]=C_h_intern(&lf[523],19,"chicken-more-macros");
lf[524]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,525,create_ptable());
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_681,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k679 */
static void C_ccall f_681(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_681,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_684,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k682 in k679 */
static void C_ccall f_684(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_684,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_687,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k685 in k682 in k679 */
static void C_ccall f_687(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_687,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_690,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k688 in k685 in k682 in k679 */
static void C_ccall f_690(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_690,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_693,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_693(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_693,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_696,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_match_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_696(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_696,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_699,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_4_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_699(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_699,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_702,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_702(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_702,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_705,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_support_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_705,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_708,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_compiler_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_711,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_optimizer_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_714,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_driver_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_714(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_714,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_717,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_platform_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_717(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_717,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_720,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_backend_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_720,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_723,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#provide */
t3=C_retrieve(lf[522]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[523]);}

/* k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_723(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_723,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_726,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[193]+1);
t4=*((C_word*)lf[14]+1);
t5=*((C_word*)lf[160]+1);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6943,a[2]=t3,a[3]=t5,a[4]=lf[521],tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t7=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t2,lf[518],t6);}

/* a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6943(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_6943r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6943r(t0,t1,t2,t3);}}

static void C_ccall f_6943r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(7);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6947,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t5=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[518],t2,lf[520]);}

/* k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6947(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6947,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6950,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t3=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[518],((C_word*)t0)[5],lf[519]);}

/* k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6953,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken.scm: 79   symbol->string */
t3=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[6]);}

/* k6951 in k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6953(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6953,2,t0,t1);}
t2=(C_word)C_i_memq(lf[300],C_retrieve(lf[301]));
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6959,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t2,a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
/* chicken.scm: 79   ##sys#qualified-symbol-prefix */
t4=C_retrieve(lf[517]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[6]);}

/* k6957 in k6951 in k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6959(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6959,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_7145,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7165,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   string-append */
t4=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[516],((C_word*)t0)[3]);}

/* k7163 in k6957 in k6951 in k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_7165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 79   ##sys#string->qualified-symbol */
t2=C_retrieve(lf[510]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7143 in k6957 in k6951 in k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_7145(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7145,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[9]);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[8]);
t4=(C_word)C_a_i_cons(&a,2,lf[297],t3);
t5=(C_word)C_a_i_list(&a,3,lf[1],((C_word*)t0)[8],t4);
t6=(C_word)C_a_i_list(&a,3,lf[91],t1,t5);
t7=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_7121,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t6,a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7141,a[2]=((C_word*)t0)[5],a[3]=t7,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   string-append */
t9=((C_word*)t0)[4];
((C_proc4)C_retrieve_proc(t9))(4,t9,t8,((C_word*)t0)[3],lf[515]);}

/* k7139 in k7143 in k6957 in k6951 in k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_7141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 79   ##sys#string->qualified-symbol */
t2=C_retrieve(lf[510]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k7119 in k7143 in k6957 in k6951 in k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_7121(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7121,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,lf[298]);
t3=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[10]);
t4=(C_word)C_a_i_list(&a,3,lf[299],lf[298],t3);
t5=(C_word)C_a_i_list(&a,3,lf[1],t2,t4);
t6=(C_word)C_a_i_list(&a,3,lf[91],t1,t5);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6982,a[2]=((C_word*)t0)[8],a[3]=((C_word*)t0)[9],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_6984,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t9,a[8]=((C_word*)t0)[10],a[9]=lf[514],tmp=(C_word)a,a+=10,tmp));
t11=((C_word*)t9)[1];
f_6984(t11,t7,((C_word*)t0)[2],C_fix(1));}

/* mapslots in k7119 in k7143 in k6957 in k6951 in k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_6984(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6984,NULL,4,t0,t1,t2,t3);}
t4=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t4)){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t2);}
else{
t5=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_6994,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t2,a[8]=t1,a[9]=t3,a[10]=((C_word*)t0)[8],tmp=(C_word)a,a+=11,tmp);
t6=(C_word)C_slot(t2,C_fix(0));
/* chicken.scm: 79   symbol->string */
t7=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,t6);}}

/* k6992 in mapslots in k7119 in k7143 in k6957 in k6951 in k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6994(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6994,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_6997,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7113,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   string-append */
t4=((C_word*)t0)[3];
((C_proc6)C_retrieve_proc(t4))(6,t4,t3,((C_word*)t0)[2],lf[512],t1,lf[513]);}

/* k7111 in k6992 in mapslots in k7119 in k7143 in k6957 in k6951 in k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_7113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 79   ##sys#string->qualified-symbol */
t2=C_retrieve(lf[510]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6995 in k6992 in mapslots in k7119 in k7143 in k6957 in k6951 in k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6997,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_7000,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=((C_word*)t0)[9],a[6]=t1,a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7109,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   string-append */
t4=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,((C_word*)t0)[3],lf[511],((C_word*)t0)[2]);}

/* k7107 in k6995 in k6992 in mapslots in k7119 in k7143 in k6957 in k6951 in k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_7109(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 79   ##sys#string->qualified-symbol */
t2=C_retrieve(lf[510]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6998 in k6995 in k6992 in mapslots in k7119 in k7143 in k6957 in k6951 in k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_7000(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_7000,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[298],lf[86]);
t3=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[8]);
t4=(C_word)C_a_i_list(&a,3,lf[302],lf[298],t3);
t5=(C_word)C_a_i_list(&a,2,lf[127],t4);
t6=(C_word)C_a_i_list(&a,4,lf[306],lf[298],((C_word*)t0)[7],lf[86]);
t7=(C_word)C_a_i_list(&a,4,lf[1],t2,t5,t6);
t8=(C_word)C_a_i_list(&a,3,lf[91],((C_word*)t0)[6],t7);
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_7031,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t8,a[7]=t1,tmp=(C_word)a,a+=8,tmp);
if(C_truep(((C_word*)t0)[2])){
t10=(C_word)C_a_i_list(&a,1,lf[298]);
t11=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[8]);
t12=(C_word)C_a_i_list(&a,3,lf[302],lf[298],t11);
t13=(C_word)C_a_i_list(&a,2,lf[127],t12);
t14=(C_word)C_a_i_list(&a,3,lf[303],lf[298],((C_word*)t0)[7]);
t15=(C_word)C_a_i_list(&a,4,lf[1],t10,t13,t14);
t16=t9;
f_7031(t16,(C_word)C_a_i_list(&a,3,lf[304],t15,((C_word*)t0)[6]));}
else{
t10=(C_word)C_a_i_list(&a,1,lf[298]);
t11=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[8]);
t12=(C_word)C_a_i_list(&a,3,lf[302],lf[298],t11);
t13=(C_word)C_a_i_list(&a,2,lf[127],t12);
t14=(C_word)C_a_i_list(&a,3,lf[303],lf[298],((C_word*)t0)[7]);
t15=t9;
f_7031(t15,(C_word)C_a_i_list(&a,4,lf[1],t10,t13,t14));}}

/* k7029 in k6998 in k6995 in k6992 in mapslots in k7119 in k7143 in k6957 in k6951 in k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_7031(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_7031,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[91],((C_word*)t0)[7],t1);
t3=(C_word)C_a_i_list(&a,3,lf[77],((C_word*)t0)[6],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_7011,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t6=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* chicken.scm: 79   mapslots */
t7=((C_word*)((C_word*)t0)[2])[1];
f_6984(t7,t4,t5,t6);}

/* k7009 in k7029 in k6998 in k6995 in k6992 in mapslots in k7119 in k7143 in k6957 in k6951 in k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_7011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_7011,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k6980 in k7119 in k7143 in k6957 in k6951 in k6948 in k6945 in a6942 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6982(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6982,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[77],t3));}

/* k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_726(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_726,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_729,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6855,a[2]=lf[509],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[271],t3);}

/* a6854 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6855(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+23)){
C_save_and_reclaim((void*)tr3r,(void*)f_6855r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6855r(t0,t1,t2,t3);}}

static void C_ccall f_6855r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(23);
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_a_i_list(&a,3,lf[1],C_SCHEME_END_OF_LIST,t2);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[3],t4,lf[452]));}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6872,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t5=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[271],t2,lf[339]);}}

/* k6870 in a6854 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6872(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6872,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6875,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t3=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[271],((C_word*)t0)[3],lf[508]);}

/* k6873 in k6870 in a6854 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6875(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6875,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[4]))){
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
t4=t2;
f_6881(t4,(C_word)C_i_nullp(t3));}
else{
t3=t2;
f_6881(t3,C_SCHEME_FALSE);}}

/* k6879 in k6873 in k6870 in a6854 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_6881(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6881,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(C_word)C_i_car(((C_word*)t0)[3]);
t4=(C_word)C_a_i_list(&a,2,t2,t3);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_i_cdr(((C_word*)t0)[3]);
t7=(C_word)C_a_i_cons(&a,2,t5,t6);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_cons(&a,2,lf[88],t7));}
else{
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,3,lf[1],C_SCHEME_END_OF_LIST,t2);
t4=(C_word)C_i_cdr(((C_word*)t0)[3]);
t5=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t4);
t6=(C_word)C_a_i_cons(&a,2,lf[1],t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_list(&a,3,lf[3],t3,t6));}}

/* k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_729,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_732,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve(lf[6]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6814,a[2]=t3,a[3]=lf[506],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t5=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,lf[507],t4);}

/* a6813 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6814(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+4)){
C_save_and_reclaim((void*)tr2r,(void*)f_6814r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6814r(t0,t1,t2);}}

static void C_ccall f_6814r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a=C_alloc(4);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6818,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   gensym */
t4=((C_word*)t0)[2];
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[450]);}

/* k6816 in a6813 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6818(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6818,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,lf[503]);
t3=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t4=(C_word)C_a_i_cons(&a,2,lf[1],t3);
t5=(C_word)C_a_i_list(&a,1,lf[504]);
t6=(C_word)C_a_i_list(&a,2,lf[505],t5);
t7=(C_word)C_a_i_list(&a,3,lf[321],lf[322],t1);
t8=(C_word)C_a_i_list(&a,4,lf[1],t1,t6,t7);
t9=(C_word)C_a_i_list(&a,3,lf[3],t4,t8);
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_list(&a,3,lf[77],t2,t9));}

/* k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_732(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_732,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_735,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6798,a[2]=lf[502],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[151],t3);}

/* a6797 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6798(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr2r,(void*)f_6798r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest(a,C_rest_count(0));
f_6798r(t0,t1,t2);}}

static void C_ccall f_6798r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word *a=C_alloc(6);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6806,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6808,a[2]=lf[501],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#map */
t5=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t2);}

/* a6807 in a6797 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6808(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6808,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[71],t2));}

/* k6804 in a6797 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6806(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6806,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[113],t1));}

/* k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_735,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_738,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve(lf[490]);
t4=*((C_word*)lf[491]+1);
t5=*((C_word*)lf[13]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6743,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=lf[499],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t7=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t2,lf[500],t6);}

/* a6742 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6743(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6743,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6747,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   ##sys#resolve-include-filename */
t4=C_retrieve(lf[498]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,t2,C_SCHEME_TRUE);}

/* k6745 in a6742 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6750,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6793,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   load-verbose */
t4=C_retrieve(lf[497]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k6791 in k6745 in a6742 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6793(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken.scm: 79   print */
t2=*((C_word*)lf[494]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[495],((C_word*)t0)[2],lf[496]);}
else{
t2=((C_word*)t0)[3];
f_6750(2,t2,C_SCHEME_UNDEFINED);}}

/* k6748 in k6745 in a6742 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6750,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6757,a[2]=((C_word*)t0)[6],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6759,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=lf[493],tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   with-input-from-file */
t4=((C_word*)t0)[3];
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[2],t3);}

/* a6758 in k6748 in k6745 in a6742 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6759,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6767,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   read */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k6765 in a6758 in k6748 in k6745 in a6742 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6767(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6767,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6769,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=lf[492],tmp=(C_word)a,a+=6,tmp));
t5=((C_word*)t3)[1];
f_6769(t5,((C_word*)t0)[2],t1,C_SCHEME_END_OF_LIST);}

/* do37 in k6765 in a6758 in k6748 in k6745 in a6742 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_6769(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6769,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_eofp(t2))){
/* chicken.scm: 79   reverse */
t4=((C_word*)t0)[4];
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6786,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   read */
t5=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}}

/* k6784 in do37 in k6765 in a6758 in k6748 in k6745 in a6742 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6786(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6786,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_6769(t3,((C_word*)t0)[2],t1,t2);}

/* k6755 in k6748 in k6745 in a6742 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6757,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[77],t1));}

/* k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_738,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_741,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6683,a[2]=lf[488],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[489],t3);}

/* a6682 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6683(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+17)){
C_save_and_reclaim((void*)tr3r,(void*)f_6683r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6683r(t0,t1,t2,t3);}}

static void C_ccall f_6683r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(17);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6687,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_eqp(C_SCHEME_END_OF_LIST,t3);
if(C_truep(t5)){
t6=(C_word)C_a_i_list(&a,2,lf[71],lf[487]);
t7=t4;
f_6687(t7,(C_word)C_a_i_list(&a,2,lf[353],t6));}
else{
t6=t4;
f_6687(t6,(C_word)C_slot(t3,C_fix(0)));}}

/* k6685 in a6682 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_6687(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6687,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[127],((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,lf[2]);
t4=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[4]);
t5=(C_word)C_i_length(((C_word*)t0)[3]);
t6=(C_word)C_fixnum_greaterp(t5,C_fix(1));
t7=(C_truep(t6)?(C_word)C_slot(((C_word*)t0)[3],C_fix(1)):C_SCHEME_END_OF_LIST);
t8=(C_word)C_a_i_cons(&a,2,t4,t7);
t9=(C_word)C_a_i_cons(&a,2,t1,t8);
t10=(C_word)C_a_i_cons(&a,2,lf[354],t9);
t11=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_list(&a,4,lf[81],t2,t3,t10));}

/* k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_741,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_744,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6624,a[2]=lf[485],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[486],t3);}

/* a6623 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6624(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_6624r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_6624r(t0,t1,t2,t3,t4);}}

static void C_ccall f_6624r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6628,a[2]=t4,a[3]=t1,a[4]=t2,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   gensym */
t6=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k6626 in a6623 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6628(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6628,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t1);
t5=(C_word)C_a_i_list(&a,2,lf[127],t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6655,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t5,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t7=t6;
f_6655(t7,((C_word*)t0)[2]);}
else{
t7=(C_word)C_a_i_list(&a,2,lf[71],lf[484]);
t8=(C_word)C_a_i_list(&a,2,lf[353],t7);
t9=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[4]);
t10=t6;
f_6655(t10,(C_word)C_a_i_list(&a,3,t8,t1,t9));}}

/* k6653 in k6626 in a6623 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_6655(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6655,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[482],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[483],t2);
t4=(C_word)C_a_i_list(&a,4,lf[81],((C_word*)t0)[5],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[2],t4));}

/* k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_744(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_744,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_747,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve(lf[6]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6450,a[2]=t3,a[3]=lf[481],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t5=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,lf[479],t4);}

/* a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6450(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr3r,(void*)f_6450r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6450r(t0,t1,t2,t3);}}

static void C_ccall f_6450r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(6);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6454,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t5=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[479],t2,lf[480]);}

/* k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6454,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6457,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   ##sys#map */
t3=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[85]+1),((C_word*)t0)[3]);}

/* k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6457,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6460,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6618,a[2]=((C_word*)t0)[2],a[3]=lf[478],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}

/* a6617 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6618(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6618,3,t0,t1,t2);}
/* chicken.scm: 79   gensym */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6460(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6460,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6463,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6612,a[2]=((C_word*)t0)[2],a[3]=lf[477],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[3]);}

/* a6611 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6612(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6612,3,t0,t1,t2);}
/* chicken.scm: 79   gensym */
t3=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6463(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6463,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6470,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6574,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6610,a[2]=((C_word*)t0)[3],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#map */
t5=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[372]+1),((C_word*)t0)[2]);}

/* k6608 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6610(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 79   map */
t2=*((C_word*)lf[0]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],*((C_word*)lf[452]+1),((C_word*)t0)[2],t1);}

/* k6572 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6574(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6574,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6578,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6582,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_length(((C_word*)t0)[2]);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6588,a[2]=t6,a[3]=lf[476],tmp=(C_word)a,a+=4,tmp));
t8=((C_word*)t6)[1];
f_6588(t8,t3,t4);}

/* loop in k6572 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_6588(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6588,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_fix(0));
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6602,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_fixnum_difference(t2,C_fix(1));
/* chicken.scm: 79   loop */
t7=t4;
t8=t5;
t1=t7;
t2=t8;
goto loop;}}

/* k6600 in loop in k6572 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6602,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,C_SCHEME_FALSE,t1));}

/* k6580 in k6572 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 79   map */
t2=*((C_word*)lf[0]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],*((C_word*)lf[452]+1),((C_word*)t0)[2],t1);}

/* k6576 in k6572 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6578(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6468 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[16],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6470,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6538,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6542,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6566,a[2]=lf[475],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   map */
t5=*((C_word*)lf[0]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,t4,((C_word*)t0)[3],((C_word*)t0)[4]);}

/* a6565 in k6468 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6566(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6566,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[4],t2,t3));}

/* k6540 in k6468 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6542,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6546,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6550,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6560,a[2]=lf[474],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   map */
t5=*((C_word*)lf[0]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a6559 in k6540 in k6468 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6560(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6560,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[4],t2,t3));}

/* k6548 in k6540 in k6468 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6550(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6550,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,lf[471]);
t3=(C_word)C_a_i_list(&a,1,t2);
/* ##sys#append */
t4=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k6544 in k6540 in k6468 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6546(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6536 in k6468 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6538(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6538,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,lf[1],t2);
t4=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[7]);
t5=(C_word)C_a_i_cons(&a,2,lf[1],t4);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6494,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t5,a[5]=t3,tmp=(C_word)a,a+=6,tmp);
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6498,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t6,tmp=(C_word)a,a+=5,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6522,a[2]=lf[473],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   map */
t9=*((C_word*)lf[0]+1);
((C_proc5)C_retrieve_proc(t9))(5,t9,t7,t8,((C_word*)t0)[2],((C_word*)t0)[4]);}

/* a6521 in k6536 in k6468 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6522(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6522,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[4],t2,t3));}

/* k6496 in k6536 in k6468 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6498,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6502,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6506,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6516,a[2]=lf[472],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   map */
t5=*((C_word*)lf[0]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,t4,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a6515 in k6496 in k6536 in k6468 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6516(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_6516,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[4],t2,t3));}

/* k6504 in k6496 in k6536 in k6468 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6506,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,lf[471]);
t3=(C_word)C_a_i_list(&a,1,t2);
/* ##sys#append */
t4=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k6500 in k6496 in k6536 in k6468 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6502(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6492 in k6536 in k6468 in k6461 in k6458 in k6455 in k6452 in a6449 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6494(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6494,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,lf[1],t2);
t4=(C_word)C_a_i_list(&a,4,lf[401],((C_word*)t0)[5],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[2],t4));}

/* k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_747(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_747,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_750,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6355,a[2]=lf[469],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[470],t3);}

/* a6354 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6355(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+25)){
C_save_and_reclaim((void*)tr3r,(void*)f_6355r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6355r(t0,t1,t2,t3);}}

static void C_ccall f_6355r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t10=(C_word)C_a_i_cons(&a,2,lf[77],t3);
t11=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6362,a[2]=t5,a[3]=t10,a[4]=t1,a[5]=t9,a[6]=t7,tmp=(C_word)a,a+=7,tmp);
t12=C_SCHEME_UNDEFINED;
t13=(*a=C_VECTOR_TYPE|1,a[1]=t12,tmp=(C_word)a,a+=2,tmp);
t14=C_set_block_item(t13,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6391,a[2]=t7,a[3]=t9,a[4]=t5,a[5]=t13,a[6]=lf[468],tmp=(C_word)a,a+=7,tmp));
t15=((C_word*)t13)[1];
f_6391(t15,t11,t2);}

/* loop in a6354 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_6391(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_6391,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6404,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_eqp(t3,lf[166]);
if(C_truep(t5)){
t6=C_set_block_item(((C_word*)t0)[4],0,C_SCHEME_TRUE);
t7=t4;
f_6404(2,t7,t6);}
else{
t6=(C_word)C_eqp(t3,lf[463]);
t7=(C_truep(t6)?t6:(C_word)C_eqp(t3,lf[464]));
if(C_truep(t7)){
t8=C_set_block_item(((C_word*)t0)[3],0,C_SCHEME_TRUE);
t9=t4;
f_6404(2,t9,t8);}
else{
t8=(C_word)C_eqp(t3,lf[465]);
t9=(C_truep(t8)?t8:(C_word)C_eqp(t3,lf[466]));
if(C_truep(t9)){
t10=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t11=t4;
f_6404(2,t11,t10);}
else{
t10=(C_word)C_slot(t2,C_fix(0));
/* chicken.scm: 79   ##sys#error */
t11=*((C_word*)lf[354]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t4,lf[467],t10);}}}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}}

/* k6402 in loop in a6354 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
/* chicken.scm: 79   loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6391(t3,((C_word*)t0)[2],t2);}

/* k6360 in a6354 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6362,2,t0,t1);}
if(C_truep((C_word)C_i_memq(lf[458],C_retrieve(lf[301])))){
t2=(C_truep(((C_word*)((C_word*)t0)[6])[1])?((C_word*)((C_word*)t0)[5])[1]:C_SCHEME_FALSE);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_truep(t2)?(C_word)C_a_i_list(&a,2,lf[459],((C_word*)t0)[3]):(C_truep(((C_word*)((C_word*)t0)[6])[1])?(C_word)C_a_i_list(&a,2,lf[460],((C_word*)t0)[3]):(C_truep(((C_word*)((C_word*)t0)[5])[1])?((C_word*)t0)[3]:lf[461]))));}
else{
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(((C_word*)((C_word*)t0)[2])[1])?((C_word*)t0)[3]:lf[462]));}}

/* k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_750(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_750,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_753,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=*((C_word*)lf[85]+1);
t4=*((C_word*)lf[372]+1);
t5=*((C_word*)lf[0]+1);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6245,a[2]=t3,a[3]=t4,a[4]=t5,a[5]=lf[457],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t7=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t2,lf[455],t6);}

/* a6244 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6245(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_6245r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6245r(t0,t1,t2,t3);}}

static void C_ccall f_6245r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6249,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=t3,tmp=(C_word)a,a+=8,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t5=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[455],t2,lf[456]);}

/* k6247 in a6244 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6249(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6249,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6252,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken.scm: 79   gensym */
t3=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k6250 in k6247 in a6244 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6252(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6252,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6255,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,tmp=(C_word)a,a+=8,tmp);
/* chicken.scm: 79   ##sys#map */
t3=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],((C_word*)t0)[3]);}

/* k6253 in k6250 in k6247 in a6244 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6255(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6255,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6258,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],tmp=(C_word)a,a+=7,tmp);
/* chicken.scm: 79   ##sys#map */
t3=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6256 in k6253 in k6250 in k6247 in a6244 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6258(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6258,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6261,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6349,a[2]=lf[454],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a6348 in k6256 in k6253 in k6250 in k6247 in a6244 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6349(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6349,3,t0,t1,t2);}
/* chicken.scm: 79   gensym */
t3=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k6259 in k6256 in k6253 in k6250 in k6247 in a6244 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6261,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_6264,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6343,a[2]=lf[453],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a6342 in k6259 in k6256 in k6253 in k6250 in k6247 in a6244 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6343(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6343,3,t0,t1,t2);}
/* chicken.scm: 79   gensym */
t3=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k6262 in k6259 in k6256 in k6253 in k6250 in k6247 in a6244 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6264(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6264,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_6271,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6337,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   map */
t4=((C_word*)t0)[5];
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,*((C_word*)lf[452]+1),((C_word*)t0)[4],((C_word*)t0)[2]);}

/* k6335 in k6262 in k6259 in k6256 in k6253 in k6250 in k6247 in a6244 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6337(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6337,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6341,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   map */
t3=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,*((C_word*)lf[452]+1),((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k6339 in k6335 in k6262 in k6259 in k6256 in k6253 in k6250 in k6247 in a6244 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6341(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 79   ##sys#append */
t2=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k6269 in k6262 in k6259 in k6256 in k6253 in k6250 in k6247 in a6244 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6271,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6307,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6309,a[2]=lf[451],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   map */
t4=((C_word*)t0)[4];
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a6308 in k6269 in k6262 in k6259 in k6256 in k6253 in k6250 in k6247 in a6244 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6309(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)tr4,(void*)f_6309,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_list(&a,1,t2);
t5=(C_word)C_a_i_list(&a,2,lf[450],t4);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_a_i_list(&a,2,t2,t3);
t8=(C_word)C_a_i_list(&a,3,lf[4],t3,lf[450]);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_list(&a,4,lf[88],t6,t7,t8));}

/* k6305 in k6269 in k6262 in k6259 in k6256 in k6253 in k6250 in k6247 in a6244 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6307(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6307,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_cons(&a,2,lf[1],t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t7=(C_word)C_a_i_cons(&a,2,lf[1],t6);
t8=(C_word)C_a_i_list(&a,4,lf[401],((C_word*)t0)[5],t7,((C_word*)t0)[5]);
t9=(C_word)C_a_i_list(&a,3,lf[88],t5,t8);
t10=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[2],t9));}

/* k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_756,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6235,a[2]=lf[448],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[449],t3);}

/* a6234 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6235(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+12)){
C_save_and_reclaim((void*)tr3r,(void*)f_6235r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6235r(t0,t1,t2,t3);}}

static void C_ccall f_6235r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(12);
t4=(C_word)C_a_i_cons(&a,2,lf[77],t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[81],t2,t4));}

/* k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_756(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_756,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_759,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6221,a[2]=lf[446],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[447],t3);}

/* a6220 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6221(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+18)){
C_save_and_reclaim((void*)tr3r,(void*)f_6221r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_6221r(t0,t1,t2,t3);}}

static void C_ccall f_6221r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(18);
t4=(C_word)C_a_i_list(&a,1,lf[2]);
t5=(C_word)C_a_i_cons(&a,2,lf[77],t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,4,lf[81],t2,t4,t5));}

/* k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_759(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_759,2,t0,t1);}
t2=*((C_word*)lf[0]+1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_760,a[2]=t2,a[3]=lf[10],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_833,a[2]=t3,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t5=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t4,lf[445],t3);}

/* k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_833,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_836,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t3=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,lf[444],((C_word*)t0)[2]);}

/* k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_836(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_836,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_839,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5888,a[2]=t4,a[3]=lf[433],tmp=(C_word)a,a+=4,tmp));
t8=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5919,a[2]=t6,a[3]=lf[434],tmp=(C_word)a,a+=4,tmp));
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5959,a[2]=t4,a[3]=t6,a[4]=lf[443],tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   ##sys#register-macro-2 */
t10=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t10))(4,t10,t2,lf[428],t9);}

/* a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5959(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5959,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5963,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[428],t2,lf[442]);}

/* k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5963,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_i_cdr(((C_word*)t0)[5]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5972,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* map */
t5=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,*((C_word*)lf[85]+1),t2);}

/* k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5972,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5975,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6181,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=lf[441],tmp=(C_word)a,a+=5,tmp));
t6=((C_word*)t4)[1];
f_6181(t6,t2,t1,C_SCHEME_END_OF_LIST);}

/* loop in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_6181(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6181,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6194,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_listp(t4))){
/* chicken.scm: 79   append */
t6=*((C_word*)lf[48]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,t4,t3);}
else{
if(C_truep((C_word)C_i_pairp(t4))){
/* chicken.scm: 79   append* */
t6=((C_word*)((C_word*)t0)[2])[1];
f_5888(t6,t5,t4,t3);}
else{
t6=t5;
f_6194(2,t6,(C_word)C_a_i_cons(&a,2,t4,t3));}}}}

/* k6192 in loop in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* chicken.scm: 79   loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6181(t3,((C_word*)t0)[2],t2,t1);}

/* k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5978,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6171,a[2]=lf[440],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}

/* a6170 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6171(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6171,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6179,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   gensym */
t4=C_retrieve(lf[6]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k6177 in a6170 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6179,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5979,a[2]=t1,a[3]=lf[435],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5990,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=t2,a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_6125,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t5,a[5]=lf[439],tmp=(C_word)a,a+=6,tmp));
t7=((C_word*)t5)[1];
f_6125(t7,t3,((C_word*)t0)[4],C_SCHEME_END_OF_LIST);}

/* loop in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_6125(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_6125,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
/* chicken.scm: 79   reverse */
t4=*((C_word*)lf[13]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}
else{
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6141,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6165,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   map* */
t7=((C_word*)((C_word*)t0)[3])[1];
f_5919(t7,t6,((C_word*)t0)[2],t4);}
else{
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6158,a[2]=t3,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   lookup */
t7=((C_word*)t0)[2];
f_5979(3,t7,t6,t4);}}}

/* k6156 in loop in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6158(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6158,2,t0,t1);}
t2=((C_word*)t0)[3];
f_6141(t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k6163 in loop in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6165,2,t0,t1);}
t2=((C_word*)t0)[3];
f_6141(t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k6139 in loop in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_6141(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* chicken.scm: 79   loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_6125(t3,((C_word*)t0)[2],t2,t1);}

/* k5988 in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5990,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5997,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6119,a[2]=lf[438],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a6118 in k5988 in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6119(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6119,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_cadr(t2));}

/* k5995 in k5988 in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5997(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5997,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5999,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=lf[437],tmp=(C_word)a,a+=7,tmp));
t5=((C_word*)t3)[1];
f_5999(t5,((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* fold in k5995 in k5988 in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_5999(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5999,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6017,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6019,a[2]=((C_word*)t0)[4],a[3]=lf[436],tmp=(C_word)a,a+=4,tmp);
/* map */
t7=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,((C_word*)t0)[3]);}
else{
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6033,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t2,a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
t6=(C_word)C_i_car(t4);
if(C_truep((C_word)C_i_pairp(t6))){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_6113,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   cdar */
t8=*((C_word*)lf[263]+1);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t4);}
else{
t7=t5;
f_6033(t7,C_SCHEME_FALSE);}}}

/* k6111 in fold in k5995 in k5988 in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6113(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_6033(t2,(C_word)C_i_nullp(t1));}

/* k6031 in fold in k5995 in k5988 in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_6033(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_6033,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_6064,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
/* chicken.scm: 79   caar */
t3=*((C_word*)lf[171]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[3]);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,3,lf[1],C_SCHEME_END_OF_LIST,t2);
t4=(C_word)C_i_car(((C_word*)t0)[3]);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_6087,a[2]=t3,a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[4]);
t7=(C_word)C_i_cdr(((C_word*)t0)[6]);
t8=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* chicken.scm: 79   fold */
t9=((C_word*)((C_word*)t0)[2])[1];
f_5999(t9,t5,t6,t7,t8);}}

/* k6085 in k6031 in fold in k5995 in k5988 in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6087(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6087,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[1],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,3,lf[3],((C_word*)t0)[2],t2));}

/* k6062 in k6031 in fold in k5995 in k5988 in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6064(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_6064,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,2,t1,t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6044,a[2]=t4,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[4]);
t7=(C_word)C_i_cdr(((C_word*)t0)[6]);
t8=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* chicken.scm: 79   fold */
t9=((C_word*)((C_word*)t0)[2])[1];
f_5999(t9,t5,t6,t7,t8);}

/* k6042 in k6062 in k6031 in fold in k5995 in k5988 in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6044,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[2],t1));}

/* a6018 in fold in k5995 in k5988 in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6019(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_6019,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_6027,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   lookup */
t4=((C_word*)t0)[2];
f_5979(3,t4,t3,t2);}

/* k6025 in a6018 in fold in k5995 in k5988 in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6027(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6027,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k6015 in fold in k5995 in k5988 in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_6017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_6017,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[88],t2));}

/* lookup in k5976 in k5973 in k5970 in k5961 in a5886 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5979(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5979,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_cdr(t3));}

/* map* in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_5919(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5919,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
if(C_truep((C_word)C_i_pairp(t3))){
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5942,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t5=(C_word)C_i_car(t3);
/* chicken.scm: 79   proc */
t6=t2;
((C_proc3)C_retrieve_proc(t6))(3,t6,t4,t5);}
else{
/* chicken.scm: 79   proc */
t4=t2;
((C_proc3)C_retrieve_proc(t4))(3,t4,t1,t3);}}}

/* k5940 in map* in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5946,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* chicken.scm: 79   map* */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5919(t4,t2,((C_word*)t0)[2],t3);}

/* k5944 in k5940 in map* in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5946,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* append* in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_5888(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_5888,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5909,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
/* chicken.scm: 79   append* */
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

/* k5907 in append* in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5909,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_839(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_839,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_842,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5837,a[2]=lf[432],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[430],t3);}

/* a5836 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5837(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5837,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5841,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[430],t2,lf[431]);}

/* k5839 in a5836 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5841(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5841,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5852,a[2]=t5,a[3]=t3,a[4]=lf[429],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_5852(t7,((C_word*)t0)[2],t2);}

/* fold in k5839 in a5836 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_5852(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5852,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[88],t3));}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5877,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(t2);
/* chicken.scm: 79   fold */
t9=t5;
t10=t6;
t1=t9;
t2=t10;
goto loop;}}

/* k5875 in fold in k5839 in a5836 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5877,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[428],((C_word*)t0)[2],t1));}

/* k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_842(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_842,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_845,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5717,a[2]=lf[427],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[425],t3);}

/* a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5717(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5717,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5721,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[425],t2,lf[426]);}

/* k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5721,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5730,a[2]=t2,a[3]=t3,a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5829,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5831,a[2]=lf[424],tmp=(C_word)a,a+=3,tmp);
/* map */
t7=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,t6,t2);}

/* a5830 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5831(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5831,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_car(t2));}

/* k5827 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[94]+1),t1);}

/* k5728 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5730(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5730,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5733,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5817,a[2]=lf[423],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,t1);}

/* a5816 in k5728 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5817(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5817,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5825,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   gensym */
t4=C_retrieve(lf[6]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}

/* k5823 in a5816 in k5728 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5825,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k5731 in k5728 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5733(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5733,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5734,a[2]=t1,a[3]=lf[418],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5753,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5811,a[2]=lf[422],tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a5810 in k5731 in k5728 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5811(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5811,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,t2,lf[421]));}

/* k5751 in k5731 in k5728 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5753(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5753,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5757,a[2]=((C_word*)t0)[5],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5761,a[2]=((C_word*)t0)[4],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5763,a[2]=((C_word*)t0)[3],a[3]=lf[420],tmp=(C_word)a,a+=4,tmp);
/* map */
t5=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a5762 in k5751 in k5731 in k5728 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5763(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5763,3,t0,t1,t2);}
t3=(C_word)C_i_cadr(t2);
t4=(C_word)C_a_i_list(&a,3,lf[1],C_SCHEME_END_OF_LIST,t3);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5783,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
t6=(C_word)C_i_car(t2);
/* map */
t7=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t5,((C_word*)t0)[2],t6);}

/* k5781 in a5762 in k5751 in k5731 in k5728 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5783,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5787,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5789,a[2]=((C_word*)t0)[3],a[3]=lf[419],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_car(((C_word*)t0)[2]);
/* map */
t5=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t2,t3,t4);}

/* a5788 in k5781 in a5762 in k5751 in k5731 in k5728 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5789(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5789,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5797,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   lookup */
t4=((C_word*)t0)[2];
f_5734(3,t4,t3,t2);}

/* k5795 in a5788 in k5781 in a5762 in k5751 in k5731 in k5728 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5797,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[4],((C_word*)t0)[2],t1));}

/* k5785 in k5781 in a5762 in k5751 in k5731 in k5728 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5787,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[1],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[3],((C_word*)t0)[2],t3));}

/* k5759 in k5751 in k5731 in k5728 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5761(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* ##sys#append */
t2=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k5755 in k5751 in k5731 in k5728 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5757(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5757,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[88],t2));}

/* lookup in k5731 in k5728 in k5719 in a5716 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5734(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5734,3,t0,t1,t2);}
t3=(C_word)C_i_assq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_i_cdr(t3));}

/* k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_845(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_845,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_848,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5696,a[2]=lf[416],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[417],t3);}

/* a5695 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5696(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_5696,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5700,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   gensym */
t5=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k5698 in a5695 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5700(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5700,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[1],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,3,lf[415],t1,((C_word*)t0)[3]);
t4=(C_word)C_a_i_list(&a,3,lf[1],t1,t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[3],t2,t4));}

/* k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_848(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_848,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_927,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5686,a[2]=lf[414],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[411],t3);}

/* a5685 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5686(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5686,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_854,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[411],t2,lf[413]);}

/* k852 in a5685 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_854(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_854,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_i_pairp(t2);
t4=(C_truep(t3)?(C_word)C_i_car(t2):t2);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_863,a[2]=((C_word*)t0)[2],a[3]=t4,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_i_cdr(((C_word*)t0)[3]);
t8=(C_word)C_a_i_cons(&a,2,t6,t7);
t9=t5;
f_863(t9,(C_word)C_a_i_cons(&a,2,lf[1],t8));}
else{
t6=t5;
f_863(t6,(C_word)C_i_cadr(((C_word*)t0)[3]));}}

/* k861 in k852 in a5685 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_863(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_863,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_866,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_pairp(t1);
t4=(C_word)C_i_not(t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_879,a[2]=((C_word*)t0)[3],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t4)){
t6=t5;
f_879(t6,t4);}
else{
t6=(C_word)C_i_car(t1);
t7=(C_word)C_eqp(lf[1],t6);
t8=t5;
f_879(t8,(C_word)C_i_not(t7));}}

/* k877 in k861 in k852 in a5685 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_879(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* chicken.scm: 79   syntax-error */
t2=C_retrieve(lf[129]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[411],lf[412],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_866(2,t2,C_SCHEME_UNDEFINED);}}

/* k864 in k861 in k852 in a5685 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_866(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_866,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,2,t2,((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[410],t3));}

/* k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_927(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_927,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_930,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5665,a[2]=lf[409],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[407],t3);}

/* a5664 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5665(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5665,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5669,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[407],t2,lf[408]);}

/* k5667 in a5664 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5669(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5669,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,2,lf[71],t2);
t4=(C_word)C_i_cadr(((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[406],t3,t4));}

/* k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_930(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_930,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_933,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5651,a[2]=lf[404],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[405],t3);}

/* a5650 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5651(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5651,3,t0,t1,t2);}
t3=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t2);
t4=(C_word)C_a_i_cons(&a,2,lf[1],t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,4,lf[401],lf[402],t4,lf[403]));}

/* k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_933,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_936,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5535,a[2]=lf[400],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[398],t3);}

/* a5534 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5535(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5535,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5539,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[398],t2,lf[399]);}

/* k5537 in a5534 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5539,2,t0,t1);}
t2=(C_word)C_i_listp(((C_word*)t0)[3]);
t3=(C_word)C_i_not(t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5548,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(t3)){
t5=t4;
f_5548(t5,t3);}
else{
t5=(C_word)C_i_length(((C_word*)t0)[3]);
t6=t4;
f_5548(t6,(C_word)C_fixnum_lessp(t5,C_fix(2)));}}

/* k5546 in k5537 in a5534 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_5548(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5548,NULL,2,t0,t1);}
if(C_truep(t1)){
/* chicken.scm: 79   ##sys#syntax-error-hook */
t2=C_retrieve(lf[395]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],lf[396],((C_word*)t0)[2]);}
else{
t2=(C_word)C_slot(((C_word*)t0)[2],C_fix(0));
t3=(C_word)C_slot(((C_word*)t0)[2],C_fix(1));
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5562,a[2]=t5,a[3]=t3,a[4]=lf[397],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_5562(t7,((C_word*)t0)[3],t2);}}

/* fold in k5546 in k5537 in a5534 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_5562(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5562,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[77],((C_word*)t0)[3]));}
else{
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_not_pair_p(t3))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5591,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   fold */
t15=t5;
t16=t4;
t1=t15;
t2=t16;
goto loop;}
else{
t5=(C_word)C_slot(t3,C_fix(1));
if(C_truep((C_word)C_i_nullp(t5))){
t6=(C_word)C_slot(t3,C_fix(0));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5608,a[2]=t6,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   fold */
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
t10=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5626,a[2]=t9,a[3]=t1,a[4]=t6,tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   fold */
t15=t10;
t16=t4;
t1=t15;
t2=t16;
goto loop;}}}}

/* k5624 in fold in k5546 in k5537 in a5534 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5626(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5626,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,lf[81],((C_word*)t0)[4],t1,C_SCHEME_FALSE);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[2],t2));}

/* k5606 in fold in k5546 in k5537 in a5534 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5608,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[81],((C_word*)t0)[2],t1,C_SCHEME_FALSE));}

/* k5589 in fold in k5546 in k5537 in a5534 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5591(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5591,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[81],((C_word*)t0)[2],t1,C_SCHEME_FALSE));}

/* k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_936(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_936,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_939,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5289,a[2]=lf[394],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[259],t3);}

/* a5288 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5289(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_5289,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5292,a[2]=t2,a[3]=lf[386],tmp=(C_word)a,a+=4,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5302,a[2]=t3,a[3]=t5,a[4]=lf[389],tmp=(C_word)a,a+=5,tmp));
t7=C_SCHEME_UNDEFINED;
t8=(*a=C_VECTOR_TYPE|1,a[1]=t7,tmp=(C_word)a,a+=2,tmp);
t9=C_set_block_item(t8,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5444,a[2]=t3,a[3]=t5,a[4]=t8,a[5]=t2,a[6]=lf[393],tmp=(C_word)a,a+=7,tmp));
t10=((C_word*)t8)[1];
f_5444(t10,t1,t2);}

/* expand in a5288 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_5444(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5444,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,C_SCHEME_END_OF_LIST);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5458,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5460,a[2]=lf[391],tmp=(C_word)a,a+=3,tmp);
/* map */
t6=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,((C_word*)t0)[5]);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_slot(t2,C_fix(1));
if(C_truep((C_word)C_i_pairp(t4))){
t6=(C_word)C_slot(t4,C_fix(0));
t7=(C_word)C_eqp(t6,lf[95]);
if(C_truep(t7)){
t8=(C_word)C_slot(t4,C_fix(1));
t9=(C_word)C_eqp(t8,C_SCHEME_END_OF_LIST);
t10=t1;
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_truep(t9)?lf[392]:(C_word)C_a_i_cons(&a,2,lf[77],t8)));}
else{
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5515,a[2]=t5,a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t4,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   test */
t9=((C_word*)((C_word*)t0)[3])[1];
f_5302(t9,t8,t6);}}
else{
/* chicken.scm: 79   err */
t6=((C_word*)t0)[2];
f_5292(t6,t1,t4);}}
else{
/* chicken.scm: 79   err */
t4=((C_word*)t0)[2];
f_5292(t4,t1,t2);}}}

/* k5513 in expand in a5288 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5515,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[5],C_fix(1));
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[77],t2));}
else{
/* chicken.scm: 79   expand */
t2=((C_word*)((C_word*)t0)[3])[1];
f_5444(t2,((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* a5459 in expand in a5288 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5460(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5460,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_car(t2));}

/* k5456 in expand in a5288 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(5,0,((C_word*)t0)[2],*((C_word*)lf[354]+1),lf[390],t1);}

/* test in a5288 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_5302(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_5302,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_symbolp(t2))){
/* chicken.scm: 79   ##sys#feature? */
t3=C_retrieve(lf[387]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t1,t2);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(1));
t4=(C_word)C_slot(t2,C_fix(0));
t5=(C_word)C_eqp(t4,lf[126]);
if(C_truep(t5)){
t6=(C_word)C_eqp(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t6)){
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,t6);}
else{
if(C_truep((C_word)C_i_pairp(t3))){
t7=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5351,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t3,tmp=(C_word)a,a+=5,tmp);
t8=(C_word)C_slot(t3,C_fix(0));
/* chicken.scm: 79   test */
t17=t7;
t18=t8;
t1=t17;
t2=t18;
goto loop;}
else{
/* chicken.scm: 79   err */
t7=((C_word*)t0)[2];
f_5292(t7,t1,t2);}}}
else{
t6=(C_word)C_eqp(t4,lf[388]);
if(C_truep(t6)){
t7=(C_word)C_eqp(t3,C_SCHEME_END_OF_LIST);
if(C_truep(t7)){
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_pairp(t3))){
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5390,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_slot(t3,C_fix(0));
/* chicken.scm: 79   test */
t17=t8;
t18=t9;
t1=t17;
t2=t18;
goto loop;}
else{
/* chicken.scm: 79   err */
t8=((C_word*)t0)[2];
f_5292(t8,t1,t2);}}}
else{
t7=(C_word)C_eqp(t4,lf[255]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5428,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t9=(C_word)C_i_cadr(t2);
/* chicken.scm: 79   test */
t17=t8;
t18=t9;
t1=t17;
t2=t18;
goto loop;}
else{
/* chicken.scm: 79   err */
t8=((C_word*)t0)[2];
f_5292(t8,t1,t2);}}}}
else{
/* chicken.scm: 79   err */
t3=((C_word*)t0)[2];
f_5292(t3,t1,t2);}}}

/* k5426 in test in a5288 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5428(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_i_not(t1));}

/* k5388 in test in a5288 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5390(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5390,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_slot(((C_word*)t0)[3],C_fix(1));
t3=(C_word)C_a_i_cons(&a,2,lf[388],t2);
/* chicken.scm: 79   test */
t4=((C_word*)((C_word*)t0)[2])[1];
f_5302(t4,((C_word*)t0)[4],t3);}}

/* k5349 in test in a5288 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5351,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t3=(C_word)C_a_i_cons(&a,2,lf[126],t2);
/* chicken.scm: 79   test */
t4=((C_word*)((C_word*)t0)[3])[1];
f_5302(t4,((C_word*)t0)[2],t3);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_FALSE);}}

/* err in a5288 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_5292(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5292,NULL,3,t0,t1,t2);}
t3=(C_word)C_a_i_cons(&a,2,lf[259],((C_word*)t0)[2]);
/* chicken.scm: 79   ##sys#error */
t4=*((C_word*)lf[354]+1);
((C_proc5)(void*)(*((C_word*)t4+1)))(5,t4,t1,lf[385],t2,t3);}

/* k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_942,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=C_retrieve(lf[6]);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5200,a[2]=t3,a[3]=lf[384],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#register-macro-2 */
t5=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,lf[380],t4);}

/* a5199 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5200(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[5],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5200,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5210,a[2]=t4,a[3]=t1,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   gensym */
t6=((C_word*)t0)[2];
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k5208 in a5199 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5210(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5210,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5221,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5223,a[2]=t6,a[3]=t1,a[4]=lf[383],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_5223(t8,t4,((C_word*)t0)[2]);}

/* expand in k5208 in a5199 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_5223(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5223,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_slot(t2,C_fix(0));
t4=(C_word)C_slot(t2,C_fix(1));
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_5239,a[2]=t4,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=t1,a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t6=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,lf[380],t3,lf[381]);}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,lf[382]);}}

/* k5237 in expand in k5208 in a5199 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5239(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5239,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_eqp(lf[95],t2);
if(C_truep(t3)){
t4=(C_word)C_i_cdr(((C_word*)t0)[6]);
t5=((C_word*)t0)[5];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_cons(&a,2,lf[77],t4));}
else{
t4=(C_word)C_i_car(((C_word*)t0)[6]);
t5=(C_word)C_a_i_list(&a,3,lf[379],((C_word*)t0)[4],t4);
t6=(C_word)C_i_cdr(((C_word*)t0)[6]);
t7=(C_word)C_a_i_cons(&a,2,lf[77],t6);
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_5267,a[2]=t7,a[3]=t5,a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   expand */
t9=((C_word*)((C_word*)t0)[3])[1];
f_5223(t9,t8,((C_word*)t0)[2]);}}

/* k5265 in k5237 in expand in k5208 in a5199 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5267,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[81],((C_word*)t0)[3],((C_word*)t0)[2],t1));}

/* k5219 in k5208 in a5199 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5221(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5221,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[2],t1));}

/* k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_942(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_942,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_945,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4914,a[2]=lf[378],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[375],t3);}

/* a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4914(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4914r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4914r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4914r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5111,a[2]=t3,a[3]=t1,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t6=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,lf[375],t3,lf[377]);}

/* k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5111,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5114,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t3=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[375],((C_word*)t0)[4],lf[376]);}

/* k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5114(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5114,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5117,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* map */
t3=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[85]+1),((C_word*)t0)[2]);}

/* k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5117(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5117,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5118,a[2]=lf[363],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5133,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t1,a[7]=((C_word*)t0)[5],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5190,a[2]=t2,a[3]=lf[374],tmp=(C_word)a,a+=4,tmp);
/* map */
t5=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t1);}

/* a5189 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5190(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5190,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5198,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   prefix-sym */
f_5118(t3,lf[373],t2);}

/* k5196 in a5189 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 79   gensym */
t2=C_retrieve(lf[6]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5133(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5133,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_5136,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* map */
t3=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,*((C_word*)lf[372]+1),((C_word*)t0)[2]);}

/* k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5136(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5136,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5139,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
/* chicken.scm: 79   gensym */
t3=C_retrieve(lf[6]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[371]);}

/* k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5139,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5142,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
/* chicken.scm: 79   gensym */
t3=C_retrieve(lf[6]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[370]);}

/* k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5142,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5145,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=t1,tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5180,a[2]=((C_word*)t0)[2],a[3]=lf[369],tmp=(C_word)a,a+=4,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[8]);}

/* a5179 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5180(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_5180,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5188,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   prefix-sym */
f_5118(t3,lf[368],t2);}

/* k5186 in a5179 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5188(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 79   gensym */
t2=C_retrieve(lf[6]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k5143 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5145(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5145,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_5148,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[5];
t5=t1;
t6=((C_word*)t0)[2];
t7=C_retrieve(lf[6]);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4925,a[2]=t5,a[3]=t6,a[4]=t4,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   reverse */
t9=*((C_word*)lf[13]+1);
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t3);}

/* k4923 in k5143 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4925(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4925,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4929,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   reverse */
t3=*((C_word*)lf[13]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k4927 in k4923 in k5143 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4929(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4929,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4933,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   reverse */
t3=*((C_word*)lf[13]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k4931 in k4927 in k4923 in k5143 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4933,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4935,a[2]=t3,a[3]=lf[367],tmp=(C_word)a,a+=4,tmp));
t5=((C_word*)t3)[1];
f_4935(t5,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* recur in k4931 in k4927 in k4923 in k5143 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_4935(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4935,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_i_nullp(t2))){
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,C_SCHEME_END_OF_LIST);}
else{
t6=(C_word)C_i_cdr(t2);
t7=(C_word)C_i_car(t3);
t8=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4980,a[2]=t6,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t3,a[6]=t1,a[7]=t7,a[8]=t5,tmp=(C_word)a,a+=9,tmp);
/* chicken.scm: 79   reverse */
t9=*((C_word*)lf[13]+1);
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t6);}}

/* k4978 in recur in k4931 in k4927 in k4923 in k5143 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4980(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4980,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_4988,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],tmp=(C_word)a,a+=10,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4992,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   reverse */
t4=*((C_word*)lf[13]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k4990 in k4978 in recur in k4931 in k4927 in k4923 in k5143 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4992(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4992,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,1,t2);
/* ##sys#append */
t4=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,((C_word*)t0)[2],t1,t3);}

/* k4986 in k4978 in recur in k4931 in k4927 in k4923 in k5143 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4988(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4988,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[9],t1);
t3=(C_word)C_a_i_list(&a,3,lf[1],((C_word*)t0)[8],t2);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[7],t3);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4956,a[2]=t4,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t6=(C_word)C_i_cdr(((C_word*)t0)[5]);
t7=(C_word)C_i_cdr(((C_word*)t0)[4]);
t8=(C_word)C_i_car(((C_word*)t0)[5]);
/* chicken.scm: 79   recur */
t9=((C_word*)((C_word*)t0)[3])[1];
f_4935(t9,t5,((C_word*)t0)[2],t6,t7,t8);}

/* k4954 in k4986 in k4978 in recur in k4931 in k4927 in k4923 in k5143 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4956(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4956,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k5146 in k5143 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5148(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5148,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_5151,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],tmp=(C_word)a,a+=9,tmp);
t3=((C_word*)t0)[3];
t4=((C_word*)t0)[2];
t5=((C_word*)t0)[5];
t6=((C_word*)t0)[9];
t7=C_retrieve(lf[6]);
t8=C_SCHEME_UNDEFINED;
t9=(*a=C_VECTOR_TYPE|1,a[1]=t8,tmp=(C_word)a,a+=2,tmp);
t10=C_set_block_item(t9,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5008,a[2]=t9,a[3]=t5,a[4]=t6,a[5]=lf[366],tmp=(C_word)a,a+=6,tmp));
t11=((C_word*)t9)[1];
f_5008(t11,t2,t3,t4,C_SCHEME_END_OF_LIST);}

/* recur in k5146 in k5143 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_5008(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_save_and_reclaim((void*)trf_5008,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(C_word)C_a_i_list(&a,2,lf[83],((C_word*)t0)[4]);
t6=(C_word)C_a_i_list(&a,2,lf[127],t5);
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5042,a[2]=t6,a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[3],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   reverse */
t8=*((C_word*)lf[13]+1);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t4);}
else{
t5=(C_word)C_i_car(t2);
t6=(C_word)C_a_i_list(&a,2,lf[83],((C_word*)t0)[4]);
t7=(C_word)C_i_car(t3);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_5108,a[2]=((C_word*)t0)[2],a[3]=t4,a[4]=t3,a[5]=t2,a[6]=t6,a[7]=t1,a[8]=t5,a[9]=((C_word*)t0)[4],a[10]=t7,tmp=(C_word)a,a+=11,tmp);
/* chicken.scm: 79   reverse */
t9=*((C_word*)lf[13]+1);
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t4);}}

/* k5106 in recur in k5146 in k5143 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5108(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5108,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[10],t1);
t3=(C_word)C_a_i_list(&a,2,lf[85],((C_word*)t0)[9]);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[8],t3);
t5=(C_word)C_a_i_list(&a,2,lf[84],((C_word*)t0)[9]);
t6=(C_word)C_a_i_list(&a,2,((C_word*)t0)[9],t5);
t7=(C_word)C_a_i_list(&a,2,t4,t6);
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_5072,a[2]=t2,a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t7,tmp=(C_word)a,a+=6,tmp);
t9=(C_word)C_i_cdr(((C_word*)t0)[5]);
t10=(C_word)C_i_cdr(((C_word*)t0)[4]);
t11=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[8],((C_word*)t0)[3]);
/* chicken.scm: 79   recur */
t12=((C_word*)((C_word*)t0)[2])[1];
f_5008(t12,t8,t9,t10,t11);}

/* k5070 in k5106 in recur in k5146 in k5143 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5072,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[5],t1);
t3=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,4,lf[81],((C_word*)t0)[3],((C_word*)t0)[2],t2));}

/* k5040 in recur in k5146 in k5143 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5042(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_5042,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_list(&a,2,lf[71],lf[365]);
t4=(C_word)C_a_i_list(&a,2,lf[353],t3);
t5=(C_word)C_a_i_list(&a,3,lf[354],t4,((C_word*)t0)[4]);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,4,lf[81],((C_word*)t0)[2],t2,t5));}

/* k5149 in k5146 in k5143 in k5140 in k5137 in k5134 in k5131 in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5151(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_5151,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[8],((C_word*)t0)[7]);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],((C_word*)t0)[5]);
t4=(C_word)C_a_i_cons(&a,2,lf[1],t3);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t4);
t6=(C_word)C_a_i_cons(&a,2,t5,((C_word*)t0)[3]);
t7=(C_word)C_a_i_cons(&a,2,t2,t6);
t8=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_list(&a,3,lf[364],t7,t1));}

/* prefix-sym in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_5118(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_5118,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_5126,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_5130,a[2]=t2,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   symbol->string */
t6=*((C_word*)lf[193]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t3);}

/* k5128 in prefix-sym in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5130(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 79   string-append */
t2=*((C_word*)lf[160]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k5124 in prefix-sym in k5115 in k5112 in k5109 in a4913 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_5126(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 79   string->symbol */
t2=*((C_word*)lf[14]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_945(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_945,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_948,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4857,a[2]=lf[361],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[362],t3);}

/* a4856 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4857(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4857,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4861,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   gensym */
t5=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k4859 in a4856 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4861(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4861,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(C_word)C_a_i_list(&a,2,lf[83],t1);
t5=(C_word)C_a_i_list(&a,2,lf[84],t1);
t6=(C_word)C_a_i_list(&a,2,lf[83],t5);
t7=(C_word)C_a_i_list(&a,2,lf[127],t6);
t8=(C_word)C_a_i_list(&a,2,lf[85],t1);
t9=(C_word)C_a_i_list(&a,2,lf[71],lf[360]);
t10=(C_word)C_a_i_list(&a,2,lf[353],t9);
t11=(C_word)C_a_i_list(&a,3,lf[354],t10,t1);
t12=(C_word)C_a_i_list(&a,4,lf[81],t7,t8,t11);
t13=(C_word)C_a_i_list(&a,4,lf[81],t4,((C_word*)t0)[3],t12);
t14=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,(C_word)C_a_i_list(&a,3,lf[88],t3,t13));}

/* k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_948(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_948,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_951,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4704,a[2]=lf[359],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[356],t3);}

/* a4703 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4704(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4704r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4704r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4704r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4708,a[2]=t3,a[3]=t4,a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t6=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,lf[356],t3,lf[358]);}

/* k4706 in a4703 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4708(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4708,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4711,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t3=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[356],((C_word*)t0)[3],lf[357]);}

/* k4709 in k4706 in a4703 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4711(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4711,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4714,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   gensym */
t3=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k4712 in k4709 in k4706 in a4703 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4714(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4714,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,t1,((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4725,a[2]=t3,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4727,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=lf[355],tmp=(C_word)a,a+=5,tmp));
t8=((C_word*)t6)[1];
f_4727(t8,t4,t1,((C_word*)t0)[2]);}

/* loop in k4712 in k4709 in k4706 in a4703 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_4727(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4727,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t3))){
t4=(C_word)C_a_i_list(&a,2,lf[83],t2);
t5=(C_word)C_a_i_list(&a,2,lf[127],t4);
t6=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t7=(C_word)C_a_i_cons(&a,2,lf[88],t6);
t8=(C_word)C_a_i_list(&a,2,lf[71],lf[352]);
t9=(C_word)C_a_i_list(&a,2,lf[353],t8);
t10=(C_word)C_a_i_list(&a,3,lf[354],t9,t2);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_list(&a,4,lf[81],t5,t7,t10));}
else{
t4=(C_word)C_i_car(t3);
if(C_truep((C_word)C_i_pairp(t4))){
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4777,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t1,a[5]=t2,a[6]=t4,tmp=(C_word)a,a+=7,tmp);
/* chicken.scm: 79   gensym */
t6=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}
else{
t5=(C_word)C_a_i_list(&a,2,t4,t2);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_a_i_cons(&a,2,t6,((C_word*)t0)[3]);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_cons(&a,2,lf[88],t7));}}}

/* k4775 in loop in k4712 in k4709 in k4706 in a4703 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4777(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4777,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,2,lf[83],((C_word*)t0)[5]);
t4=(C_word)C_i_cadr(((C_word*)t0)[6]);
t5=(C_word)C_a_i_list(&a,2,lf[85],((C_word*)t0)[5]);
t6=(C_word)C_a_i_list(&a,4,lf[81],t3,t4,t5);
t7=(C_word)C_a_i_list(&a,2,t2,t6);
t8=(C_word)C_a_i_list(&a,2,lf[83],((C_word*)t0)[5]);
t9=(C_word)C_a_i_list(&a,2,lf[71],C_SCHEME_END_OF_LIST);
t10=(C_word)C_a_i_list(&a,2,lf[84],((C_word*)t0)[5]);
t11=(C_word)C_a_i_list(&a,4,lf[81],t8,t9,t10);
t12=(C_word)C_a_i_list(&a,2,t1,t11);
t13=(C_word)C_a_i_list(&a,2,t7,t12);
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4788,a[2]=t13,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t15=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* chicken.scm: 79   loop */
t16=((C_word*)((C_word*)t0)[2])[1];
f_4727(t16,t14,t1,t15);}

/* k4786 in k4775 in loop in k4712 in k4709 in k4706 in a4703 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4788(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4788,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[2],t1));}

/* k4723 in k4712 in k4709 in k4706 in a4703 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4725,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[2],t1));}

/* k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_951,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_954,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4428,a[2]=lf[351],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[338],t3);}

/* a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4428(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4428,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4462,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[338],t2,lf[350]);}

/* k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4462,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4465,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   require */
t3=C_retrieve(lf[348]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,lf[349]);}

/* k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4465,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4468,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4689,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4691,a[2]=lf[347],tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a4690 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4691(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4691,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4701,a[2]=lf[346],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#decompose-lambda-list */
t5=C_retrieve(lf[341]);
((C_proc4)C_retrieve_proc(t5))(4,t5,t1,t3,t4);}

/* a4700 in a4690 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4701(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word *a;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4701,5,t0,t1,t2,t3,t4);}
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t3);}

/* k4687 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4689(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
C_apply(4,0,((C_word*)t0)[2],*((C_word*)lf[345]+1),t1);}

/* k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4468(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4468,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4471,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=t1;
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4437,a[2]=t5,a[3]=t3,a[4]=lf[344],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_4437(t7,t2,C_fix(0));}

/* loop in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_4437(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4437,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_fixnum_greater_or_equal_p(t2,((C_word*)t0)[3]))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4451,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   gensym */
t4=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}}

/* k4449 in loop in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4451,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4455,a[2]=t1,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_fixnum_plus(((C_word*)t0)[3],C_fix(1));
/* chicken.scm: 79   loop */
t4=((C_word*)((C_word*)t0)[2])[1];
f_4437(t4,t2,t3);}

/* k4453 in k4449 in loop in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4455,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4471(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4471,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4474,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   gensym */
t3=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4474(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4474,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4477,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken.scm: 79   gensym */
t3=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4477,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4484,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken.scm: 79   append */
t3=*((C_word*)lf[48]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[6]);}

/* k4482 in k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4484(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4484,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[331],((C_word*)t0)[7]);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4496,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4498,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=lf[342],tmp=(C_word)a,a+=7,tmp);
/* chicken.scm: 79   fold-right */
t7=C_retrieve(lf[185]);
((C_proc5)C_retrieve_proc(t7))(5,t7,t5,t6,lf[343],((C_word*)t0)[2]);}

/* a4497 in k4482 in k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4498(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4498,4,t0,t1,t2,t3);}
t4=(C_word)C_i_car(t2);
t5=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_4508,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t2,a[5]=((C_word*)t0)[4],a[6]=t3,a[7]=((C_word*)t0)[5],a[8]=lf[340],tmp=(C_word)a,a+=9,tmp);
/* chicken.scm: 79   ##sys#decompose-lambda-list */
t6=C_retrieve(lf[341]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t1,t4,t5);}

/* a4507 in a4497 in k4482 in k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4508(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_4508,5,t0,t1,t2,t3,t4);}
t5=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_4512,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t4,a[6]=((C_word*)t0)[5],a[7]=t2,a[8]=((C_word*)t0)[6],a[9]=t1,a[10]=((C_word*)t0)[7],a[11]=t3,tmp=(C_word)a,a+=12,tmp);
t6=(C_word)C_i_car(((C_word*)t0)[4]);
/* chicken.scm: 79   ##sys#check-syntax */
t7=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t7))(5,t7,t5,lf[338],t6,lf[339]);}

/* k4510 in a4507 in a4497 in k4482 in k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4512(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[29],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4512,2,t0,t1);}
t2=(C_word)C_fixnum_difference(((C_word*)t0)[11],((C_word*)t0)[10]);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_4522,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[11],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
if(C_truep(((C_word*)t0)[5])){
t4=(C_word)C_eqp(t2,C_fix(0));
t5=t3;
f_4522(t5,(C_truep(t4)?C_SCHEME_TRUE:(C_word)C_a_i_list(&a,3,lf[124],((C_word*)t0)[2],t2)));}
else{
t4=t3;
f_4522(t4,(C_word)C_a_i_list(&a,3,lf[337],((C_word*)t0)[2],t2));}}

/* k4520 in k4510 in a4507 in a4497 in k4482 in k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_4522(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4522,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4526,a[2]=((C_word*)t0)[9],a[3]=t1,a[4]=((C_word*)t0)[10],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4528,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],a[5]=lf[334],tmp=(C_word)a,a+=6,tmp);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4538,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=lf[336],tmp=(C_word)a,a+=7,tmp);
/* chicken.scm: 79   ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}

/* a4537 in k4520 in k4510 in a4507 in a4497 in k4482 in k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4538(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[13],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_4538,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4542,a[2]=((C_word*)t0)[5],a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4557,a[2]=t6,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=lf[335],tmp=(C_word)a,a+=6,tmp));
t8=((C_word*)t6)[1];
f_4557(t8,t4,t3,((C_word*)t0)[2]);}

/* build in a4537 in k4520 in k4510 in a4507 in a4497 in k4482 in k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_4557(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_4557,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
if(C_truep(((C_word*)t0)[4])){
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],t3);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=(C_word)C_i_cdr(((C_word*)t0)[3]);
t7=(C_word)C_a_i_cons(&a,2,t5,t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,(C_word)C_a_i_cons(&a,2,lf[88],t7));}
else{
t4=(C_word)C_i_cddr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_i_cadr(((C_word*)t0)[3]));}
else{
t5=(C_word)C_i_cdr(((C_word*)t0)[3]);
t6=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_cons(&a,2,lf[88],t6));}}}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4613,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   gensym */
t5=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}}

/* k4611 in build in a4537 in k4520 in k4510 in a4507 in a4497 in k4482 in k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4613(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4613,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,2,lf[85],((C_word*)t0)[4]);
t4=(C_word)C_a_i_list(&a,2,t2,t3);
t5=(C_word)C_a_i_list(&a,2,lf[84],((C_word*)t0)[4]);
t6=(C_word)C_a_i_list(&a,2,t1,t5);
t7=(C_word)C_a_i_list(&a,2,t4,t6);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4624,a[2]=t7,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t9=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_pairp(t9))){
t10=(C_word)C_i_cdr(((C_word*)t0)[5]);
/* chicken.scm: 79   build */
t11=((C_word*)((C_word*)t0)[2])[1];
f_4557(t11,t8,t10,t1);}
else{
/* chicken.scm: 79   build */
t10=((C_word*)((C_word*)t0)[2])[1];
f_4557(t10,t8,C_SCHEME_END_OF_LIST,t1);}}

/* k4622 in k4611 in build in a4537 in k4520 in k4510 in a4507 in a4497 in k4482 in k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4624,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[2],t1));}

/* k4540 in a4537 in k4520 in k4510 in a4507 in a4497 in k4482 in k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4542(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4542,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[4]))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4555,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   map */
t3=*((C_word*)lf[0]+1);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,*((C_word*)lf[80]+1),((C_word*)t0)[4],((C_word*)t0)[2]);}}

/* k4553 in k4540 in a4537 in k4520 in k4510 in a4507 in a4497 in k4482 in k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4555,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[88],t1,((C_word*)t0)[2]));}

/* a4527 in k4520 in k4510 in a4507 in a4497 in k4482 in k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4528(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4528,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4536,a[2]=((C_word*)t0)[4],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   take */
t3=C_retrieve(lf[333]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k4534 in a4527 in k4520 in k4510 in a4507 in a4497 in k4482 in k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4536(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 79   split-at! */
t2=C_retrieve(lf[332]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)t0)[2]);}

/* k4524 in k4520 in k4510 in a4507 in a4497 in k4482 in k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4526(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4526,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[81],((C_word*)t0)[3],t1,((C_word*)t0)[2]));}

/* k4494 in k4482 in k4475 in k4472 in k4469 in k4466 in k4463 in k4460 in a4427 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4496(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4496,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[4],t1);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,3,lf[1],((C_word*)t0)[2],t2));}

/* k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_954(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_954,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_957,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4371,a[2]=lf[330],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[327],t3);}

/* a4370 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4371(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+16)){
C_save_and_reclaim((void*)tr3r,(void*)f_4371r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4371r(t0,t1,t2,t3);}}

static void C_ccall f_4371r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(16);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4381,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_a_i_cons(&a,2,t2,t3);
/* chicken.scm: 79   ##sys#check-syntax */
t6=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t4,lf[327],t5,lf[328]);}
else{
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4411,a[2]=t1,a[3]=t3,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t5=(C_word)C_a_i_cons(&a,2,t2,t3);
/* chicken.scm: 79   ##sys#check-syntax */
t6=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t4,lf[327],t5,lf[329]);}}

/* k4409 in a4370 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4411(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4411,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[4]);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[3]);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[326],t3));}

/* k4379 in a4370 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4381,2,t0,t1);}
t2=(C_word)C_slot(((C_word*)t0)[4],C_fix(0));
t3=(C_word)C_a_i_list(&a,2,lf[71],t2);
t4=(C_word)C_slot(((C_word*)t0)[4],C_fix(1));
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[3]);
t6=(C_word)C_a_i_cons(&a,2,lf[1],t5);
t7=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_list(&a,3,lf[326],t3,t6));}

/* k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_957(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_957,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_960,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4295,a[2]=lf[325],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[317],t3);}

/* a4294 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4295(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4r,(void*)f_4295r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest(a,C_rest_count(0));
f_4295r(t0,t1,t2,t3,t4);}}

static void C_ccall f_4295r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4299,a[2]=t1,a[3]=t4,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   gensym */
t6=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k4297 in a4294 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4299,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4302,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,tmp=(C_word)a,a+=7,tmp);
/* chicken.scm: 79   gensym */
t3=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k4300 in k4297 in a4294 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4302(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4302,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[5]);
t4=(C_word)C_a_i_list(&a,3,lf[1],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t4);
t6=(C_word)C_a_i_list(&a,3,lf[1],t3,t5);
t7=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[3]);
t8=(C_word)C_a_i_cons(&a,2,lf[1],t7);
t9=(C_word)C_a_i_list(&a,3,lf[321],lf[322],t1);
t10=(C_word)C_a_i_list(&a,3,lf[1],C_SCHEME_END_OF_LIST,t9);
t11=(C_word)C_a_i_list(&a,2,((C_word*)t0)[6],t10);
t12=(C_word)C_a_i_list(&a,3,lf[1],t1,t11);
t13=(C_word)C_a_i_list(&a,3,lf[3],t8,t12);
t14=(C_word)C_a_i_list(&a,3,lf[1],C_SCHEME_END_OF_LIST,t13);
t15=(C_word)C_a_i_list(&a,3,lf[323],t6,t14);
t16=(C_word)C_a_i_list(&a,3,lf[1],t2,t15);
t17=(C_word)C_a_i_list(&a,2,lf[324],t16);
t18=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t18+1)))(2,t18,(C_word)C_a_i_list(&a,1,t17));}

/* k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_960(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_960,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_963,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4111,a[2]=lf[319],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[320],t3);}

/* a4110 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4111(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+5)){
C_save_and_reclaim((void*)tr3r,(void*)f_4111r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_4111r(t0,t1,t2,t3);}}

static void C_ccall f_4111r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word *a=C_alloc(5);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4115,a[2]=t3,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   gensym */
t5=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k4113 in a4110 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4115,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4118,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   gensym */
t3=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k4116 in k4113 in a4110 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4118(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4118,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_4120,a[2]=t1,a[3]=((C_word*)t0)[5],a[4]=lf[314],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_a_i_list(&a,2,lf[71],lf[315]);
t4=(C_word)C_a_i_list(&a,3,lf[299],((C_word*)t0)[5],t3);
t5=(C_word)C_a_i_list(&a,3,lf[316],((C_word*)t0)[5],C_fix(1));
t6=(C_word)C_a_i_list(&a,3,lf[126],t4,t5);
t7=(C_word)C_a_i_list(&a,2,t1,t6);
t8=(C_word)C_a_i_list(&a,1,t7);
t9=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_4257,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=t8,tmp=(C_word)a,a+=6,tmp);
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4261,a[2]=t9,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* map */
t11=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t11+1)))(4,t11,t10,t2,((C_word*)t0)[2]);}

/* k4259 in k4116 in k4113 in a4110 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4261(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4261,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[318],((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,2,lf[95],t2);
t4=(C_word)C_a_i_list(&a,1,t3);
/* ##sys#append */
t5=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t1,t4);}

/* k4255 in k4116 in k4113 in a4110 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_4257,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[92],t1);
t3=(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[5],t2);
t4=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,4,lf[317],((C_word*)t0)[3],t3,((C_word*)t0)[2]));}

/* parse-clause in k4116 in k4113 in a4110 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4120(C_word c,C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)tr3,(void*)f_4120,3,t0,t1,t2);}
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_symbolp(t3);
t5=(C_truep(t4)?(C_word)C_i_car(t2):C_SCHEME_FALSE);
t6=(C_truep(t5)?(C_word)C_i_cadr(t2):(C_word)C_i_car(t2));
t7=(C_truep(t5)?(C_word)C_i_cddr(t2):(C_word)C_i_cdr(t2));
if(C_truep((C_word)C_i_nullp(t6))){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_4143,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t5)){
t9=(C_word)C_a_i_list(&a,2,t5,((C_word*)t0)[3]);
t10=(C_word)C_a_i_list(&a,1,t9);
t11=(C_word)C_a_i_cons(&a,2,t10,t7);
t12=t8;
f_4143(t12,(C_word)C_a_i_cons(&a,2,lf[88],t11));}
else{
t9=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,t7);
t10=t8;
f_4143(t10,(C_word)C_a_i_cons(&a,2,lf[88],t9));}}
else{
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_4206,a[2]=t7,a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t1,a[6]=((C_word*)t0)[2],tmp=(C_word)a,a+=7,tmp);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4208,a[2]=((C_word*)t0)[2],a[3]=lf[313],tmp=(C_word)a,a+=4,tmp);
/* map */
t10=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t8,t9,t6);}}

/* a4207 in parse-clause in k4116 in k4113 in a4110 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4208(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4208,3,t0,t1,t2);}
t3=(C_word)C_a_i_list(&a,2,lf[71],t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[312],t3,((C_word*)t0)[2]));}

/* k4204 in parse-clause in k4116 in k4113 in a4110 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4206(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4206,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[6],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[126],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4176,a[2]=t3,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
if(C_truep(((C_word*)t0)[4])){
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[4],((C_word*)t0)[3]);
t6=(C_word)C_a_i_list(&a,1,t5);
t7=(C_word)C_a_i_cons(&a,2,t6,((C_word*)t0)[2]);
t8=t4;
f_4176(t8,(C_word)C_a_i_cons(&a,2,lf[88],t7));}
else{
t5=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[2]);
t6=t4;
f_4176(t6,(C_word)C_a_i_cons(&a,2,lf[88],t5));}}

/* k4174 in k4204 in parse-clause in k4116 in k4113 in a4110 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_4176(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4176,NULL,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[2],t1));}

/* k4141 in parse-clause in k4116 in k4113 in a4110 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_4143(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4143,NULL,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,2,lf[95],t1));}

/* k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_963(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_963,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_966,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3921,a[2]=lf[310],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[311],t3);}

/* a3920 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3921(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,...){
C_word tmp;
C_word t5;
va_list v;
C_word *a,c2=c;
C_save_rest(t4,c2,5);
if(c<5) C_bad_min_argc_2(c,5,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr5r,(void*)f_3921r,5,t0,t1,t2,t3,t4);}
else{
a=C_alloc((c-5)*3);
t5=C_restore_rest(a,C_rest_count(0));
f_3921r(t0,t1,t2,t3,t4,t5);}}

static void C_ccall f_3921r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word *a=C_alloc(8);
t6=(C_word)C_i_cdr(t3);
t7=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3928,a[2]=t6,a[3]=t5,a[4]=t1,a[5]=t4,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* map */
t8=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,*((C_word*)lf[85]+1),t5);}

/* k3926 in a3920 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3928(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3928,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[7]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4100,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_4102,a[2]=((C_word*)t0)[2],a[3]=lf[309],tmp=(C_word)a,a+=4,tmp);
/* map */
t5=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,t1);}

/* a4101 in k3926 in a3920 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4102(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_4102,3,t0,t1,t2);}
t3=(C_word)C_i_memq(t2,((C_word*)t0)[2]);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t2:lf[308]));}

/* k4098 in k3926 in a3920 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_4100(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_4100,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[7],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[297],t2);
t4=(C_word)C_a_i_list(&a,3,lf[91],((C_word*)t0)[6],t3);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],lf[298]);
t6=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[4]);
t7=(C_word)C_a_i_list(&a,3,lf[299],lf[298],t6);
t8=(C_word)C_a_i_list(&a,3,lf[91],t5,t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3951,a[2]=((C_word*)t0)[3],a[3]=t4,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
t10=C_SCHEME_UNDEFINED;
t11=(*a=C_VECTOR_TYPE|1,a[1]=t10,tmp=(C_word)a,a+=2,tmp);
t12=C_set_block_item(t11,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3953,a[2]=t11,a[3]=((C_word*)t0)[4],a[4]=lf[307],tmp=(C_word)a,a+=5,tmp));
t13=((C_word*)t11)[1];
f_3953(t13,t9,((C_word*)t0)[2],C_fix(1));}

/* loop in k4098 in k3926 in a3920 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_3953(C_word t0,C_word t1,C_word t2,C_word t3){
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
C_save_and_reclaim((void*)trf_3953,NULL,4,t0,t1,t2,t3);}
if(C_truep((C_word)C_i_nullp(t2))){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_END_OF_LIST);}
else{
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_memq(lf[300],C_retrieve(lf[301]));
t6=(C_word)C_i_cddr(t4);
t7=(C_word)C_i_pairp(t6);
t8=(C_word)C_a_i_list(&a,1,lf[298]);
t9=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[3]);
t10=(C_word)C_a_i_list(&a,3,lf[302],lf[298],t9);
t11=(C_word)C_a_i_list(&a,2,lf[127],t10);
t12=(C_word)C_a_i_list(&a,3,lf[303],lf[298],t3);
t13=(C_word)C_a_i_list(&a,4,lf[1],t8,t11,t12);
t14=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_3979,a[2]=t13,a[3]=t5,a[4]=t7,a[5]=((C_word*)t0)[2],a[6]=t3,a[7]=t2,a[8]=t1,a[9]=t4,tmp=(C_word)a,a+=10,tmp);
if(C_truep(t7)){
t15=(C_word)C_i_caddr(t4);
t16=(C_word)C_a_i_list(&a,3,t15,lf[298],lf[305]);
t17=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[3]);
t18=(C_word)C_a_i_list(&a,3,lf[302],lf[298],t17);
t19=(C_word)C_a_i_list(&a,2,lf[127],t18);
t20=(C_word)C_a_i_list(&a,4,lf[306],lf[298],t3,lf[305]);
t21=(C_word)C_a_i_list(&a,4,lf[91],t16,t19,t20);
t22=t14;
f_3979(t22,(C_word)C_a_i_list(&a,1,t21));}
else{
t15=t14;
f_3979(t15,C_SCHEME_END_OF_LIST);}}}

/* k3977 in loop in k4098 in k3926 in a3920 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_3979(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3979,NULL,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[9]);
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_4007,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],a[5]=t1,a[6]=((C_word*)t0)[8],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t4=(C_truep(((C_word*)t0)[4])?((C_word*)t0)[3]:C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_i_caddr(((C_word*)t0)[9]);
t6=t3;
f_4007(t6,(C_word)C_a_i_list(&a,3,lf[304],((C_word*)t0)[2],t5));}
else{
t5=t3;
f_4007(t5,((C_word*)t0)[2]);}}

/* k4005 in k3977 in loop in k4098 in k3926 in a3920 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_4007(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_4007,NULL,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[91],((C_word*)t0)[7],t1);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3991,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[4]);
t5=(C_word)C_fixnum_increase(((C_word*)t0)[3]);
/* chicken.scm: 79   loop */
t6=((C_word*)((C_word*)t0)[2])[1];
f_3953(t6,t3,t4,t5);}

/* k3989 in k4005 in k3977 in loop in k4098 in k3926 in a3920 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3991(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3991,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
/* ##sys#append */
t3=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k3949 in k4098 in k3926 in a3920 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3951(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3951,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[77],t3));}

/* k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_966(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_966,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_969,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3912,a[2]=lf[296],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[294],t3);}

/* a3911 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3912(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3912,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3916,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[294],t2,lf[295]);}

/* k3914 in a3911 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3916(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3916,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[293],((C_word*)t0)[2]));}

/* k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_969(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_969,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_972,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3893,a[2]=lf[292],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[290],t3);}

/* a3892 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3893(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3893,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3897,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[290],t2,lf[291]);}

/* k3895 in a3892 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3897(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3897,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3904,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3906,a[2]=lf[289],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a3905 in k3895 in a3892 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3906(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3906,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[71],t2));}

/* k3902 in k3895 in a3892 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3904(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3904,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[284],t1));}

/* k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_972(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_972,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_975,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3874,a[2]=lf[288],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[286],t3);}

/* a3873 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3874(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3874,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3878,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[286],t2,lf[287]);}

/* k3876 in a3873 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3878(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3878,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3885,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3887,a[2]=lf[285],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a3886 in k3876 in a3873 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3887(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3887,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[71],t2));}

/* k3883 in k3876 in a3873 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3885,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[284],t1));}

/* k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_975(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_975,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_978,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3746,a[2]=lf[282],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[283],t3);}

/* a3745 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3746(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3746,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3752,a[2]=t4,a[3]=lf[281],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3752(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in a3745 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_3752(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
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
C_save_and_reclaim((void*)trf_3752,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_i_nullp(t2))){
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3762,a[2]=t4,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   reverse */
t7=*((C_word*)lf[13]+1);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t3);}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_eqp(t6,lf[276]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3833,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=t4,a[5]=t3,a[6]=t2,tmp=(C_word)a,a+=7,tmp);
/* chicken.scm: 79   gensym */
t9=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t9))(2,t9,t8);}
else{
t8=(C_word)C_eqp(t6,lf[277]);
if(C_truep(t8)){
/* chicken.scm: 79   loop */
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
/* chicken.scm: 79   loop */
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

/* k3831 in loop in a3745 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3833(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3833,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[6]);
t3=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t4=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[4]);
/* chicken.scm: 79   loop */
t5=((C_word*)((C_word*)t0)[3])[1];
f_3752(t5,((C_word*)t0)[2],t2,t3,t4,C_SCHEME_FALSE);}

/* k3760 in loop in a3745 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3762,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3765,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   reverse */
t3=*((C_word*)lf[13]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k3763 in k3760 in loop in a3745 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3765(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3765,2,t0,t1);}
if(C_truep(((C_word*)t0)[4])){
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3771,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 79   gensym */
t3=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=(C_word)C_i_car(t1);
t3=(C_word)C_a_i_list(&a,2,lf[77],t2);
t4=(C_word)C_i_cdr(t1);
t5=(C_word)C_a_i_cons(&a,2,t3,t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,3,lf[1],((C_word*)t0)[2],t5));}}

/* k3769 in k3763 in k3760 in loop in a3745 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3771,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3778,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
/* ##sys#append */
t3=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k3776 in k3769 in k3763 in k3760 in loop in a3745 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3778,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3794,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[4]);
t5=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
/* ##sys#append */
t6=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}

/* k3792 in k3776 in k3769 in k3763 in k3760 in loop in a3745 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3794(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3794,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[275],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[1],((C_word*)t0)[2],t3));}

/* k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_978(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_978,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_981,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3603,a[2]=lf[279],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[280],t3);}

/* a3602 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3603(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3603,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3609,a[2]=t4,a[3]=lf[278],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_3609(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in a3602 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_3609(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
C_save_and_reclaim((void*)trf_3609,NULL,7,t0,t1,t2,t3,t4,t5,t6);}
if(C_truep((C_word)C_i_nullp(t2))){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3619,a[2]=t5,a[3]=t4,a[4]=t1,a[5]=t6,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   reverse */
t8=*((C_word*)lf[13]+1);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}
else{
t7=(C_word)C_i_car(t2);
t8=(C_word)C_eqp(t7,lf[276]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3694,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t5,a[6]=t3,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* chicken.scm: 79   gensym */
t10=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t10))(2,t10,t9);}
else{
t9=(C_word)C_eqp(t7,lf[277]);
if(C_truep(t9)){
/* chicken.scm: 79   loop */
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
t10=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3721,a[2]=t3,a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=t5,a[6]=t4,a[7]=t2,tmp=(C_word)a,a+=8,tmp);
/* chicken.scm: 79   gensym */
t11=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t11))(2,t11,t10);}}}}

/* k3719 in loop in a3602 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3721(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3721,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(C_word)C_i_car(((C_word*)t0)[7]);
t4=(C_word)C_a_i_list(&a,2,t1,t3);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[6]);
t6=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* chicken.scm: 79   loop */
t7=((C_word*)((C_word*)t0)[4])[1];
f_3609(t7,((C_word*)t0)[3],t2,((C_word*)t0)[2],t5,t6,C_SCHEME_FALSE);}

/* k3692 in loop in a3602 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3694(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3694,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
t4=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
/* chicken.scm: 79   loop */
t5=((C_word*)((C_word*)t0)[4])[1];
f_3609(t5,((C_word*)t0)[3],t2,t3,((C_word*)t0)[2],t4,C_SCHEME_FALSE);}

/* k3617 in loop in a3602 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3619(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3619,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3622,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   reverse */
t3=*((C_word*)lf[13]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k3620 in k3617 in loop in a3602 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3622(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3622,2,t0,t1);}
if(C_truep(((C_word*)t0)[5])){
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3628,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   gensym */
t3=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}
else{
t2=(C_word)C_i_car(t1);
t3=(C_word)C_i_cdr(t1);
t4=(C_word)C_a_i_cons(&a,2,t2,t3);
t5=(C_word)C_a_i_list(&a,3,lf[1],((C_word*)t0)[2],t4);
t6=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[3],t5));}}

/* k3626 in k3620 in k3617 in loop in a3602 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3628(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3628,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3639,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
/* ##sys#append */
t3=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,((C_word*)t0)[2],t1);}

/* k3637 in k3626 in k3620 in k3617 in loop in a3602 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3639,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3655,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t1,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
t4=(C_word)C_i_cdr(((C_word*)t0)[5]);
t5=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
/* ##sys#append */
t6=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t3,t4,t5);}

/* k3653 in k3637 in k3626 in k3620 in k3617 in loop in a3602 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3655(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3655,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[275],t2);
t4=(C_word)C_a_i_list(&a,3,lf[1],((C_word*)t0)[4],t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[2],t4));}

/* k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_981(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_981,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_984,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3544,a[2]=lf[273],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[274],t3);}

/* a3543 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3544(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,...){
C_word tmp;
C_word t6;
va_list v;
C_word *a,c2=c;
C_save_rest(t5,c2,6);
if(c<6) C_bad_min_argc_2(c,6,t0);
if(!C_demand(c*C_SIZEOF_PAIR+51)){
C_save_and_reclaim((void*)tr6r,(void*)f_3544r,6,t0,t1,t2,t3,t4,t5);}
else{
a=C_alloc((c-6)*3);
t6=C_restore_rest(a,C_rest_count(0));
f_3544r(t0,t1,t2,t3,t4,t5,t6);}}

static void C_ccall f_3544r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5,C_word t6){
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
t12=(C_word)C_a_i_list(&a,4,lf[270],t3,t4,t5);
t13=(C_word)C_a_i_cons(&a,2,t12,t6);
t14=(C_word)C_a_i_cons(&a,2,t11,t13);
t15=t1;
((C_proc2)(void*)(*((C_word*)t15+1)))(2,t15,(C_word)C_a_i_cons(&a,2,lf[271],t14));}
else{
t8=(C_word)C_a_i_list(&a,4,lf[272],t3,t4,t5);
t9=(C_word)C_a_i_cons(&a,2,t8,t6);
t10=(C_word)C_a_i_cons(&a,2,t2,t9);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_cons(&a,2,lf[271],t10));}}

/* k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_984,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_987,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3373,a[2]=lf[269],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[265],t3);}

/* a3372 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3373(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_3373r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3373r(t0,t1,t2,t3);}}

static void C_ccall f_3373r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3379,a[2]=t5,a[3]=t2,a[4]=lf[268],tmp=(C_word)a,a+=5,tmp));
t7=((C_word*)t5)[1];
f_3379(t7,t1,C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST,t3,C_SCHEME_FALSE);}

/* loop in a3372 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_3379(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4,C_word t5){
C_word tmp;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3379,NULL,6,t0,t1,t2,t3,t4,t5);}
if(C_truep((C_word)C_i_nullp(t4))){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_3389,a[2]=t1,a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=t3,tmp=(C_word)a,a+=6,tmp);
if(C_truep(t5)){
t7=(C_word)C_a_i_cons(&a,2,lf[260],t5);
t8=t6;
f_3389(t8,(C_word)C_a_i_list(&a,2,lf[151],t7));}
else{
t7=t6;
f_3389(t7,lf[261]);}}
else{
t6=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3453,a[2]=t5,a[3]=t3,a[4]=t1,a[5]=((C_word*)t0)[2],a[6]=t2,a[7]=t4,tmp=(C_word)a,a+=8,tmp);
if(C_truep((C_word)C_i_pairp(t4))){
t7=(C_word)C_i_car(t4);
t8=t6;
f_3453(t8,(C_word)C_i_pairp(t7));}
else{
t7=t6;
f_3453(t7,C_SCHEME_FALSE);}}}

/* k3451 in loop in a3372 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_3453(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3453,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3456,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken.scm: 79   caar */
t3=*((C_word*)lf[171]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}
else{
/* chicken.scm: 79   syntax-error */
t2=C_retrieve(lf[129]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],lf[265],lf[267],((C_word*)t0)[7]);}}

/* k3454 in k3451 in loop in a3372 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3456(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3456,2,t0,t1);}
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
t3=(C_word)C_eqp(lf[262],t1);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3480,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
/* chicken.scm: 79   cdar */
t5=*((C_word*)lf[263]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,((C_word*)t0)[7]);}
else{
t4=(C_word)C_eqp(lf[264],t1);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_3501,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[3],tmp=(C_word)a,a+=8,tmp);
/* chicken.scm: 79   cdar */
t6=*((C_word*)lf[263]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[7]);}
else{
t5=(C_word)C_eqp(lf[260],t1);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_3514,a[2]=t2,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t7=((C_word*)t0)[2];
t8=(C_truep(t7)?t7:C_SCHEME_END_OF_LIST);
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3522,a[2]=t8,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   cdar */
t10=*((C_word*)lf[263]+1);
((C_proc3)C_retrieve_proc(t10))(3,t10,t9,((C_word*)t0)[7]);}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3529,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   caar */
t7=*((C_word*)lf[171]+1);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[7]);}}}}

/* k3527 in k3454 in k3451 in loop in a3372 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3529(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 79   syntax-error */
t2=C_retrieve(lf[129]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],lf[265],lf[266],t1);}

/* k3520 in k3454 in k3451 in loop in a3372 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3522(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 79   append */
t2=*((C_word*)lf[48]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3512 in k3454 in k3451 in loop in a3372 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3514(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 79   loop */
t2=((C_word*)((C_word*)t0)[6])[1];
f_3379(t2,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k3499 in k3454 in k3451 in loop in a3372 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3501,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[77],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
/* chicken.scm: 79   loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3379(t4,((C_word*)t0)[5],((C_word*)t0)[4],t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3478 in k3454 in k3451 in loop in a3372 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3480,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[77],t1);
t3=(C_word)C_a_i_cons(&a,2,t2,((C_word*)t0)[7]);
/* chicken.scm: 79   loop */
t4=((C_word*)((C_word*)t0)[6])[1];
f_3379(t4,((C_word*)t0)[5],t3,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k3387 in loop in a3372 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_3389(C_word t0,C_word t1){
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
C_save_and_reclaim((void*)trf_3389,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[5]);
t3=(C_word)C_a_i_cons(&a,2,lf[254],t2);
t4=(C_word)C_a_i_list(&a,2,lf[255],lf[256]);
t5=(C_word)C_a_i_cons(&a,2,t4,((C_word*)t0)[5]);
t6=(C_word)C_a_i_list(&a,2,lf[257],((C_word*)t0)[4]);
t7=(C_word)C_a_i_list(&a,2,lf[151],t6);
t8=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[4]);
t9=(C_word)C_a_i_list(&a,2,lf[258],t8);
t10=(C_word)C_a_i_cons(&a,2,t9,((C_word*)t0)[3]);
t11=(C_word)C_a_i_cons(&a,2,t1,t10);
t12=(C_word)C_a_i_cons(&a,2,t7,t11);
t13=(C_word)C_a_i_cons(&a,2,lf[95],t12);
t14=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t14+1)))(2,t14,(C_word)C_a_i_list(&a,4,lf[259],t3,t5,t13));}

/* k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_987(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_987,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_990,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3322,a[2]=lf[252],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[253],t3);}

/* a3321 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3322(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+39)){
C_save_and_reclaim((void*)tr3r,(void*)f_3322r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3322r(t0,t1,t2,t3);}}

static void C_ccall f_3322r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t7=(C_word)C_a_i_cons(&a,2,lf[1],t6);
t8=(C_word)C_a_i_list(&a,2,t4,t7);
t9=(C_word)C_a_i_list(&a,1,t8);
t10=(C_word)C_i_car(t2);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_list(&a,3,lf[251],t9,t10));}
else{
t4=(C_word)C_a_i_cons(&a,2,t2,t3);
t5=(C_word)C_a_i_list(&a,1,t4);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,3,lf[251],t5,t2));}}

/* k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_990(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_990,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_993,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3262,a[2]=lf[250],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[248],t3);}

/* a3261 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3262(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+10)){
C_save_and_reclaim((void*)tr3r,(void*)f_3262r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_3262r(t0,t1,t2,t3);}}

static void C_ccall f_3262r(C_word t0,C_word t1,C_word t2,C_word t3){
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
t5=(C_truep(t4)?lf[245]:t3);
t6=(C_word)C_i_pairp(t2);
t7=(C_truep(t6)?(C_word)C_i_car(t2):t2);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3272,a[2]=t7,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t9=(C_word)C_i_cdr(t2);
t10=(C_word)C_a_i_cons(&a,2,t9,t5);
t11=t8;
f_3272(t11,(C_word)C_a_i_cons(&a,2,lf[1],t10));}
else{
t9=t8;
f_3272(t9,(C_word)C_i_car(t5));}}

/* k3270 in a3261 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_3272(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_3272,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_3275,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_symbolp(((C_word*)t0)[2]))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3291,a[2]=((C_word*)t0)[2],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 79   eval */
t4=C_retrieve(lf[166]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t1);}
else{
/* chicken.scm: 79   syntax-error */
t3=C_retrieve(lf[129]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[248],lf[249],((C_word*)t0)[2]);}}

/* k3289 in k3270 in a3261 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3291(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[3];
f_3275(2,t2,(C_word)C_i_setslot(((C_word*)t0)[2],C_fix(0),t1));}

/* k3273 in k3270 in a3261 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3275(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3275,2,t0,t1);}
t2=((C_word*)t0)[4];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_truep(C_retrieve(lf[246]))?(C_word)C_a_i_list(&a,3,lf[91],((C_word*)t0)[3],((C_word*)t0)[2]):lf[247]));}

/* k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_993(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_993,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_996,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   register-feature! */
t3=C_retrieve(lf[238]);
((C_proc8)C_retrieve_proc(t3))(8,t3,t2,lf[239],lf[240],lf[241],lf[242],lf[243],lf[244]);}

/* k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_996(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_996,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_999,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3225,a[2]=lf[237],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[93],t3);}

/* a3224 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3225(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3225,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3229,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[93],t2,lf[236]);}

/* k3227 in a3224 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3229,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,2,lf[71],t2);
t4=(C_word)C_i_cadr(((C_word*)t0)[3]);
t5=(C_word)C_a_i_list(&a,2,lf[71],t4);
t6=(C_word)C_i_cddr(((C_word*)t0)[3]);
t7=(C_word)C_a_i_cons(&a,2,t5,t6);
t8=(C_word)C_a_i_cons(&a,2,t3,t7);
t9=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,(C_word)C_a_i_cons(&a,2,lf[235],t8));}

/* k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_999(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_999,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1002,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3206,a[2]=lf[234],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[101],t3);}

/* a3205 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3206(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3206,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3210,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[101],t2,lf[233]);}

/* k3208 in a3205 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3210,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3217,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3219,a[2]=lf[232],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a3218 in k3208 in a3205 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3219(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3219,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[71],t2));}

/* k3215 in k3208 in a3205 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3217(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3217,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[191],t1));}

/* k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1002,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1005,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3187,a[2]=lf[231],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[229],t3);}

/* a3186 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3187(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3187,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3191,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[229],t2,lf[230]);}

/* k3189 in a3186 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3191(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3191,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3198,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3200,a[2]=lf[228],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a3199 in k3189 in a3186 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3200(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3200,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[71],t2));}

/* k3196 in k3189 in a3186 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3198(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3198,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[227],t1));}

/* k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1005(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1005,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1008,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3168,a[2]=lf[226],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[123],t3);}

/* a3167 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3168(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3168,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3172,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[123],t2,lf[225]);}

/* k3170 in a3167 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3172,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3179,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3181,a[2]=lf[224],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a3180 in k3170 in a3167 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3181(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3181,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[71],t2));}

/* k3177 in k3170 in a3167 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3179,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[223],t1));}

/* k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1008,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1011,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3149,a[2]=lf[222],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[67],t3);}

/* a3148 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3149(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3149,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3153,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[67],t2,lf[221]);}

/* k3151 in a3148 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3153(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3153,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3160,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3162,a[2]=lf[220],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a3161 in k3151 in a3148 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3162(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3162,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[71],t2));}

/* k3158 in k3151 in a3148 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3160,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[219],t1));}

/* k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1011(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1011,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1014,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3130,a[2]=lf[218],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[64],t3);}

/* a3129 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3130(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3130,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3134,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[64],t2,lf[217]);}

/* k3132 in a3129 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3134(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3134,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3141,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3143,a[2]=lf[216],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a3142 in k3132 in a3129 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3143(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3143,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[71],t2));}

/* k3139 in k3132 in a3129 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3141(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3141,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[215],t1));}

/* k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1014,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1017,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3111,a[2]=lf[214],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[212],t3);}

/* a3110 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3111(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3111,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3115,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[212],t2,lf[213]);}

/* k3113 in a3110 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3115(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3115,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3122,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3124,a[2]=lf[211],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a3123 in k3113 in a3110 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3124(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3124,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,2,lf[71],t2));}

/* k3120 in k3113 in a3110 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3122(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3122,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[210],t1));}

/* k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1017(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1017,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1020,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3011,a[2]=lf[209],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[57],t3);}

/* a3010 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3011(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3011,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3015,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[57],t2,lf[208]);}

/* k3013 in a3010 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3015(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3015,2,t0,t1);}
t2=(C_word)C_i_caddr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_stringp(t2))){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3024,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[57],((C_word*)t0)[3],lf[205]);}
else{
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_3070,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   ##sys#check-syntax */
t4=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[57],((C_word*)t0)[3],lf[207]);}}

/* k3068 in k3013 in a3010 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3070(C_word c,C_word t0,C_word t1){
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
C_word ab[42],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3070,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,2,lf[71],t2);
t4=(C_word)C_a_i_list(&a,2,lf[71],lf[206]);
t5=(C_word)C_i_car(((C_word*)t0)[3]);
t6=(C_word)C_a_i_list(&a,2,lf[71],t5);
t7=(C_word)C_i_caddr(((C_word*)t0)[3]);
t8=(C_word)C_a_i_list(&a,2,lf[71],t7);
t9=(C_word)C_i_cadddr(((C_word*)t0)[3]);
t10=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t10+1)))(2,t10,(C_word)C_a_i_list(&a,6,lf[199],t3,t4,t6,t8,t9));}

/* k3022 in k3013 in a3010 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_3024(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_3024,2,t0,t1);}
t2=(C_word)C_i_cadr(((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,2,lf[71],t2);
t4=(C_word)C_i_caddr(((C_word*)t0)[3]);
t5=(C_word)C_a_i_list(&a,2,lf[71],t4);
t6=(C_word)C_i_car(((C_word*)t0)[3]);
t7=(C_word)C_a_i_list(&a,2,lf[71],t6);
t8=(C_word)C_i_cadddr(((C_word*)t0)[3]);
t9=(C_word)C_a_i_list(&a,2,lf[71],t8);
t10=(C_word)C_i_cdr(((C_word*)t0)[3]);
t11=(C_word)C_i_cadddr(t10);
t12=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,(C_word)C_a_i_list(&a,6,lf[199],t3,t5,t7,t9,t11));}

/* k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1020(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1020,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1023,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2791,a[2]=lf[204],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[196],t3);}

/* a2790 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2791(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2791,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2795,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=t3;
f_2795(t5,(C_word)C_i_stringp(t4));}
else{
t4=t3;
f_2795(t4,C_SCHEME_FALSE);}}

/* k2793 in a2790 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_2795(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2795,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2798,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=t1;
if(C_truep(t3)){
t4=t2;
f_2798(t4,C_SCHEME_FALSE);}
else{
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[3]))){
t4=(C_word)C_i_car(((C_word*)t0)[3]);
t5=t2;
f_2798(t5,(C_word)C_i_symbolp(t4));}
else{
t4=t2;
f_2798(t4,C_SCHEME_FALSE);}}}

/* k2796 in k2793 in a2790 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_2798(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2798,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2804,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   ##sys#check-syntax */
t3=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[196],((C_word*)t0)[4],lf[197]);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2879,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
if(C_truep(((C_word*)t0)[2])){
/* chicken.scm: 80   ##sys#check-syntax */
t3=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[196],((C_word*)t0)[4],lf[202]);}
else{
/* chicken.scm: 80   ##sys#check-syntax */
t3=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t2,lf[196],((C_word*)t0)[4],lf[203]);}}}

/* k2877 in k2796 in k2793 in a2790 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2879(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2879,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[4])?(C_word)C_i_cadr(((C_word*)t0)[3]):(C_word)C_i_car(((C_word*)t0)[3]));
t3=(C_word)C_i_cdr(t2);
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_a_i_list(&a,2,lf[71],t5);
t7=(C_truep(((C_word*)t0)[4])?(C_word)C_i_car(((C_word*)t0)[3]):lf[198]);
t8=(C_word)C_a_i_list(&a,2,lf[71],t7);
t9=(C_truep(((C_word*)t0)[4])?(C_word)C_i_caddr(((C_word*)t0)[3]):(C_word)C_i_cadr(((C_word*)t0)[3]));
t10=(C_word)C_a_i_list(&a,2,lf[71],t9);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2944,a[2]=t3,a[3]=t4,a[4]=((C_word*)t0)[2],a[5]=t10,a[6]=t8,a[7]=t6,a[8]=((C_word*)t0)[3],a[9]=((C_word*)t0)[4],tmp=(C_word)a,a+=10,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2946,a[2]=lf[201],tmp=(C_word)a,a+=3,tmp);
/* map */
t13=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t11,t12,t3);}

/* a2945 in k2877 in k2796 in k2793 in a2790 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2946(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2946,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_car(t2));}

/* k2942 in k2877 in k2796 in k2793 in a2790 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[19],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2944,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[71],t1);
t3=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2924,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2936,a[2]=lf[200],tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[2]);}

/* a2935 in k2942 in k2877 in k2796 in k2793 in a2790 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2936(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2936,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_cadr(t2));}

/* k2922 in k2942 in k2877 in k2796 in k2793 in a2790 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2924(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[33],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2924,2,t0,t1);}
t2=(C_truep(((C_word*)t0)[9])?(C_word)C_i_cdddr(((C_word*)t0)[8]):(C_word)C_i_cddr(((C_word*)t0)[8]));
t3=(C_word)C_a_i_cons(&a,2,t1,t2);
t4=(C_word)C_a_i_cons(&a,2,lf[1],t3);
t5=(C_word)C_a_i_list(&a,6,lf[199],((C_word*)t0)[7],((C_word*)t0)[6],((C_word*)t0)[5],((C_word*)t0)[4],t4);
t6=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,3,lf[91],((C_word*)t0)[2],t5));}

/* k2802 in k2796 in k2793 in a2790 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2804(C_word c,C_word t0,C_word t1){
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
C_word ab[68],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2804,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)t0)[3]);
t3=(C_word)C_a_i_list(&a,2,lf[71],t2);
t4=(C_word)C_i_cadr(((C_word*)t0)[3]);
t5=(C_word)C_a_i_list(&a,2,lf[71],t4);
t6=(C_word)C_a_i_list(&a,3,lf[191],t3,t5);
t7=(C_word)C_a_i_list(&a,2,lf[71],t2);
t8=(C_word)C_i_cadr(((C_word*)t0)[3]);
t9=(C_word)C_a_i_list(&a,2,lf[71],t8);
t10=(C_word)C_a_i_list(&a,2,lf[71],C_SCHEME_TRUE);
t11=(C_word)C_a_i_list(&a,4,lf[192],t7,t9,t10);
t12=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2830,a[2]=((C_word*)t0)[2],a[3]=t6,a[4]=t11,tmp=(C_word)a,a+=5,tmp);
t13=(C_word)C_i_cddr(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_pairp(t13))){
t14=(C_word)C_i_caddr(((C_word*)t0)[3]);
t15=(C_word)C_a_i_list(&a,3,lf[4],t2,t14);
t16=t12;
f_2830(t16,(C_word)C_a_i_list(&a,1,t15));}
else{
t14=t12;
f_2830(t14,C_SCHEME_END_OF_LIST);}}

/* k2828 in k2802 in k2796 in k2793 in a2790 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_2830(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2830,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[77],t3));}

/* k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1023(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1023,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1026,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2716,a[2]=lf[194],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[195],t3);}

/* a2715 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2716(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,...){
C_word tmp;
C_word t4;
va_list v;
C_word *a,c2=c;
C_save_rest(t3,c2,4);
if(c<4) C_bad_min_argc_2(c,4,t0);
if(!C_demand(c*C_SIZEOF_PAIR+6)){
C_save_and_reclaim((void*)tr4rv,(void*)f_2716r,4,t0,t1,t2,t3);}
else{
a=C_alloc((c-4)*3);
t4=C_restore_rest_vector(a,C_rest_count(0));
f_2716r(t0,t1,t2,t3,t4);}}

static void C_ccall f_2716r(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word *a=C_alloc(6);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2720,a[2]=t4,a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 80   gensym */
t6=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k2718 in a2715 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2720,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[5]);
t3=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2789,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=t3,a[8]=t2,tmp=(C_word)a,a+=9,tmp);
/* chicken.scm: 80   symbol->string */
t5=*((C_word*)lf[193]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t1);}

/* k2787 in k2718 in a2715 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2789(C_word c,C_word t0,C_word t1){
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
C_word ab[74],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2789,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[71],t1);
t3=(C_word)C_a_i_list(&a,4,lf[191],((C_word*)t0)[8],((C_word*)t0)[7],t2);
t4=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[6]);
t5=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[5]);
t6=(C_word)C_a_i_list(&a,2,lf[71],C_SCHEME_FALSE);
t7=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[4]);
t8=(C_word)C_a_i_list(&a,5,lf[192],t4,t5,t6,t7);
t9=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2743,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=t8,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_notvemptyp(((C_word*)t0)[2]))){
t10=(C_word)C_i_vector_ref(((C_word*)t0)[2],C_fix(0));
t11=(C_word)C_a_i_list(&a,3,lf[4],((C_word*)t0)[6],t10);
t12=t9;
f_2743(t12,(C_word)C_a_i_list(&a,1,t11));}
else{
t10=t9;
f_2743(t10,C_SCHEME_END_OF_LIST);}}

/* k2741 in k2787 in k2718 in a2715 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_2743(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2743,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_cons(&a,2,lf[77],t3));}

/* k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1026,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1029,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2610,a[2]=lf[189],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[190],t3);}

/* a2609 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2610(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_2610r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_2610r(t0,t1,t2,t3);}}

static void C_ccall f_2610r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word *a=C_alloc(8);
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2614,a[2]=t2,a[3]=t3,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2710,a[2]=lf[188],tmp=(C_word)a,a+=3,tmp);
/* map */
t6=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t4,t5,t2);}

/* a2709 in a2609 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2710(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2710,3,t0,t1,t2);}
/* chicken.scm: 80   gensym */
t3=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t1);}

/* k2612 in a2609 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2614(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2614,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2621,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2686,a[2]=lf[186],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   append-map */
t4=C_retrieve(lf[187]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,t3,((C_word*)t0)[2],t1);}

/* a2685 in k2612 in a2609 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2686(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2686,4,t0,t1,t2,t3);}
t4=(C_word)C_i_cddr(t2);
if(C_truep((C_word)C_i_pairp(t4))){
t5=(C_word)C_i_cddr(t2);
t6=(C_word)C_a_i_cons(&a,2,t3,t5);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_word)C_a_i_list(&a,1,t6));}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,C_SCHEME_END_OF_LIST);}}

/* k2619 in k2612 in a2609 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2621,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2625,a[2]=t1,a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2627,a[2]=lf[184],tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_a_i_cons(&a,2,C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t5=(C_word)C_a_i_cons(&a,2,lf[88],t4);
/* chicken.scm: 80   fold-right */
t6=C_retrieve(lf[185]);
((C_proc6)C_retrieve_proc(t6))(6,t6,t2,t3,t5,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a2626 in k2619 in k2612 in a2609 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2627(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word ab[51],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_2627,5,t0,t1,t2,t3,t4);}
t5=(C_word)C_i_length(t2);
t6=(C_word)C_eqp(C_fix(3),t5);
if(C_truep(t6)){
t7=(C_word)C_i_car(t2);
t8=(C_word)C_a_i_list(&a,2,lf[71],t7);
t9=(C_word)C_i_cadr(t2);
t10=(C_word)C_a_i_list(&a,2,lf[71],t9);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_list(&a,5,lf[183],t8,t10,t3,t4));}
else{
t7=(C_word)C_i_car(t2);
t8=(C_word)C_a_i_list(&a,2,lf[71],t7);
t9=(C_word)C_i_cadr(t2);
t10=(C_word)C_a_i_list(&a,2,lf[71],t9);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_list(&a,4,lf[183],t8,t10,t4));}}

/* k2623 in k2619 in k2612 in a2609 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2625,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[2],t1));}

/* k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1029(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1029,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1032,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2581,a[2]=lf[181],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[182],t3);}

/* a2580 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2581(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2581,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2585,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   gensym */
t4=C_retrieve(lf[6]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,lf[176]);}

/* k2583 in a2580 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2585(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2585,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2604,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2608,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   string-intersperse */
t4=C_retrieve(lf[152]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)t0)[2],lf[180]);}

/* k2606 in k2583 in a2580 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   sprintf */
t2=C_retrieve(lf[59]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[179],((C_word*)t0)[2],t1);}

/* k2602 in k2583 in a2580 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2604(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2604,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[112],t1);
t3=(C_word)C_a_i_list(&a,2,lf[151],t2);
t4=(C_word)C_a_i_list(&a,2,lf[148],((C_word*)t0)[3]);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[77],t3,t4));}

/* k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1032(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1032,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1035,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2568,a[2]=lf[177],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[178],t3);}

/* a2567 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2568(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[5],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_2568,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2572,a[2]=t1,a[3]=t2,a[4]=t3,tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 80   gensym */
t5=C_retrieve(lf[6]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[176]);}

/* k2570 in a2567 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2572(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2572,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,lf[101],t1,((C_word*)t0)[4],((C_word*)t0)[3]);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_list(&a,3,lf[77],t2,t1));}

/* k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1035(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1035,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1038,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1774,a[2]=lf[175],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[128],t3);}

/* a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1774(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+7)){
C_save_and_reclaim((void*)tr3r,(void*)f_1774r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1774r(t0,t1,t2,t3);}}

static void C_ccall f_1774r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(7);
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1778,a[2]=t4,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t6=(C_word)C_i_cadr(t2);
/* chicken.scm: 80   ->string */
t7=C_retrieve(lf[103]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,t6);}
else{
/* chicken.scm: 80   sprintf */
t6=C_retrieve(lf[59]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t5,lf[174],t2);}}

/* k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1778(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1778,2,t0,t1);}
t2=(C_word)C_i_pairp(((C_word*)t0)[4]);
t3=(C_truep(t2)?(C_word)C_i_car(((C_word*)t0)[4]):((C_word*)t0)[4]);
t4=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1784,a[2]=((C_word*)t0)[4],a[3]=t1,a[4]=((C_word*)t0)[2],a[5]=((C_word*)t0)[3],a[6]=t3,tmp=(C_word)a,a+=7,tmp);
/* chicken.scm: 80   gensym */
t5=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1784(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1784,2,t0,t1);}
t2=*((C_word*)lf[115]+1);
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_SCHEME_FALSE;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1787,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t5,a[5]=t7,a[6]=((C_word*)t0)[4],a[7]=t3,a[8]=t1,a[9]=((C_word*)t0)[5],a[10]=((C_word*)t0)[6],tmp=(C_word)a,a+=11,tmp);
/* chicken.scm: 80   gensym */
t9=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t9))(2,t9,t8);}

/* k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1787(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1787,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1790,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],tmp=(C_word)a,a+=12,tmp);
/* chicken.scm: 80   gensym */
t3=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[13],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1790,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1793,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],tmp=(C_word)a,a+=13,tmp);
/* chicken.scm: 80   gensym */
t3=C_retrieve(lf[6]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1793(C_word c,C_word t0,C_word t1){
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
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1793,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_SCHEME_UNDEFINED;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1795,a[2]=t3,a[3]=lf[119],tmp=(C_word)a,a+=4,tmp));
t7=C_set_block_item(t5,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1838,a[2]=t5,a[3]=((C_word*)t0)[12],a[4]=lf[121],tmp=(C_word)a,a+=5,tmp));
t8=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1881,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t3,a[8]=t5,a[9]=((C_word*)t0)[7],a[10]=((C_word*)t0)[8],a[11]=((C_word*)t0)[9],a[12]=t1,a[13]=((C_word*)t0)[10],a[14]=((C_word*)t0)[12],a[15]=((C_word*)t0)[11],tmp=(C_word)a,a+=16,tmp);
t9=C_SCHEME_UNDEFINED;
t10=(*a=C_VECTOR_TYPE|1,a[1]=t9,tmp=(C_word)a,a+=2,tmp);
t11=C_set_block_item(t10,0,(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2460,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[7],a[5]=t10,a[6]=((C_word*)t0)[6],a[7]=lf[173],tmp=(C_word)a,a+=8,tmp));
t12=((C_word*)t10)[1];
f_2460(t12,t8,((C_word*)((C_word*)t0)[6])[1]);}

/* do540 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_2460(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2460,NULL,3,t0,t1,t2);}
t3=(C_word)C_i_nullp(t2);
t4=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_2470,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=t1,a[7]=t2,a[8]=((C_word*)t0)[6],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t3)){
t5=t4;
f_2470(t5,t3);}
else{
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_pairp(t5);
t7=(C_word)C_i_not(t6);
if(C_truep(t7)){
t8=t4;
f_2470(t8,t7);}
else{
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2535,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2539,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   caar */
t10=*((C_word*)lf[171]+1);
((C_proc3)C_retrieve_proc(t10))(3,t10,t9,t2);}}}

/* k2537 in do540 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2539(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   keyword? */
t2=C_retrieve(lf[172]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2533 in do540 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2535(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_2470(t2,(C_word)C_i_not(t1));}

/* k2468 in do540 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_2470(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2470,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_mutate(((C_word *)((C_word*)t0)[8])+1,((C_word*)t0)[7]);
t3=((C_word*)t0)[6];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}
else{
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2474,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
/* chicken.scm: 80   caar */
t3=*((C_word*)lf[171]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[7]);}}

/* k2472 in k2468 in do540 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2474(C_word c,C_word t0,C_word t1){
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
C_word ab[20],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2474,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2477,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[7],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_eqp(t1,lf[165]);
if(C_truep(t3)){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2491,a[2]=t2,a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2495,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   cadar */
t6=*((C_word*)lf[167]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[7]);}
else{
t4=(C_word)C_eqp(t1,lf[168]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2505,a[2]=t2,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   cadar */
t6=*((C_word*)lf[167]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,((C_word*)t0)[7]);}
else{
t5=(C_word)C_eqp(t1,lf[169]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2515,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   cadar */
t7=*((C_word*)lf[167]+1);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[7]);}
else{
t6=(C_word)C_i_car(((C_word*)t0)[7]);
/* chicken.scm: 80   syntax-error */
t7=C_retrieve(lf[129]);
((C_proc5)C_retrieve_proc(t7))(5,t7,t2,lf[128],lf[170],t6);}}}}

/* k2513 in k2472 in k2468 in do540 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2515(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2477(2,t3,t2);}

/* k2503 in k2472 in k2468 in do540 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2505(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2477(2,t3,t2);}

/* k2493 in k2472 in k2468 in do540 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2495(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   eval */
t2=C_retrieve(lf[166]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2489 in k2472 in k2468 in do540 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_2477(2,t3,t2);}

/* k2475 in k2472 in k2468 in do540 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2477(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=((C_word*)((C_word*)t0)[3])[1];
f_2460(t3,((C_word*)t0)[2],t2);}

/* k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1881,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|15,a[1]=(C_word)f_1884,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=((C_word*)t0)[10],a[11]=((C_word*)t0)[11],a[12]=((C_word*)t0)[12],a[13]=((C_word*)t0)[13],a[14]=((C_word*)t0)[14],a[15]=((C_word*)t0)[15],tmp=(C_word)a,a+=16,tmp);
t3=(C_word)C_a_i_list(&a,2,lf[118],((C_word*)t0)[3]);
/* chicken.scm: 80   ##sys#hash-table-set! */
t4=C_retrieve(lf[163]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,C_retrieve(lf[164]),((C_word*)t0)[14],t3);}

/* k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1884(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[31],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1884,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1891,a[2]=((C_word*)t0)[15],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1895,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[13],a[13]=((C_word*)t0)[14],a[14]=t2,tmp=(C_word)a,a+=15,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[2]))){
t4=t3;
f_1895(t4,C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2367,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2371,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2383,a[2]=((C_word*)t0)[6],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2454,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ->string */
t8=C_retrieve(lf[103]);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,((C_word*)t0)[2]);}}

/* k2452 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2454(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   string-append */
t2=*((C_word*)lf[160]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],lf[161],t1,lf[162]);}

/* k2381 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2383(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2383,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2387,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2389,a[2]=lf[159],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* a2388 in k2381 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2389(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2389,3,t0,t1,t2);}
t3=(C_word)C_i_length(t2);
switch(t3){
case C_fix(3):
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2406,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2418,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_i_cadr(t2);
/* chicken.scm: 80   ->string */
t8=C_retrieve(lf[103]);
((C_proc3)C_retrieve_proc(t8))(3,t8,t6,t7);
case C_fix(2):
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2435,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_i_car(t2);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2443,a[2]=t5,a[3]=t4,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_i_cadr(t2);
/* chicken.scm: 80   ->string */
t8=C_retrieve(lf[103]);
((C_proc3)C_retrieve_proc(t8))(3,t8,t6,t7);
default:
/* chicken.scm: 80   syntax-error */
t4=C_retrieve(lf[129]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,lf[128],lf[158],t2);}}

/* k2441 in a2388 in k2381 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2443(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   ##compiler#foreign-type-declaration */
t2=C_retrieve(lf[156]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2433 in a2388 in k2381 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2435(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   sprintf */
t2=C_retrieve(lf[59]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[157],t1);}

/* k2416 in a2388 in k2381 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   ##compiler#foreign-type-declaration */
t2=C_retrieve(lf[156]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2404 in a2388 in k2381 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_caddr(((C_word*)t0)[3]);
/* chicken.scm: 80   sprintf */
t3=C_retrieve(lf[59]);
((C_proc5)C_retrieve_proc(t3))(5,t3,((C_word*)t0)[2],lf[155],t1,t2);}

/* k2385 in k2381 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2387(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2387,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=(C_word)C_a_i_list(&a,1,lf[154]);
/* chicken.scm: 80   append */
t4=*((C_word*)lf[48]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,((C_word*)t0)[2],t2,t3);}

/* k2369 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2371(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   string-intersperse */
t2=C_retrieve(lf[152]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[153]);}

/* k2365 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2367(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2367,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[112],t1);
t3=(C_word)C_a_i_list(&a,2,lf[151],t2);
t4=((C_word*)t0)[2];
f_1895(t4,(C_word)C_a_i_list(&a,1,t3));}

/* k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_1895(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[22],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1895,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1899,a[2]=t1,a[3]=((C_word*)t0)[14],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1903,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[9],a[8]=((C_word*)t0)[10],a[9]=((C_word*)t0)[11],a[10]=((C_word*)t0)[12],a[11]=((C_word*)t0)[13],a[12]=t2,tmp=(C_word)a,a+=13,tmp);
t4=((C_word*)((C_word*)t0)[3])[1];
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2349,a[2]=t3,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[13],tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 80   sprintf */
t6=C_retrieve(lf[59]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,lf[150],((C_word*)t0)[2],((C_word*)t0)[2]);}
else{
t5=t3;
f_1903(t5,C_SCHEME_END_OF_LIST);}}

/* k2347 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2349(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2349,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,lf[123],((C_word*)t0)[4],C_SCHEME_END_OF_LIST,t1);
t3=(C_word)C_a_i_list(&a,3,lf[91],((C_word*)((C_word*)t0)[3])[1],t2);
t4=((C_word*)t0)[2];
f_1903(t4,(C_word)C_a_i_list(&a,1,t3));}

/* k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_1903(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[52],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1903,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1907,a[2]=t1,a[3]=((C_word*)t0)[12],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_1911,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=((C_word*)t0)[11],a[11]=t2,tmp=(C_word)a,a+=12,tmp);
t4=((C_word*)((C_word*)t0)[2])[1];
if(C_truep(t4)){
t5=(C_word)C_a_i_list(&a,2,((C_word*)((C_word*)t0)[2])[1],lf[147]);
t6=(C_word)C_a_i_list(&a,3,lf[148],lf[149],lf[147]);
t7=(C_word)C_a_i_list(&a,3,lf[126],lf[147],t6);
t8=(C_word)C_a_i_list(&a,3,lf[91],t5,t7);
t9=t3;
f_1911(t9,(C_word)C_a_i_list(&a,1,t8));}
else{
t5=t3;
f_1911(t5,C_SCHEME_END_OF_LIST);}}

/* k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_1911(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1911,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1915,a[2]=t1,a[3]=((C_word*)t0)[11],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1917,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[10],a[10]=lf[146],tmp=(C_word)a,a+=11,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)((C_word*)t0)[2])[1]);}

/* a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1917(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[23],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1917,3,t0,t1,t2);}
t3=(C_word)C_i_length(t2);
switch(t3){
case C_fix(3):
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cadr(t2);
t6=(C_word)C_i_caddr(t2);
t7=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1939,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=t1,a[8]=t6,a[9]=((C_word*)t0)[6],a[10]=((C_word*)t0)[7],a[11]=((C_word*)t0)[8],a[12]=((C_word*)t0)[9],tmp=(C_word)a,a+=13,tmp);
/* chicken.scm: 80   stype */
t8=((C_word*)((C_word*)t0)[2])[1];
f_1795(t8,t7,t4);
case C_fix(2):
t4=(C_word)C_i_car(t2);
t5=(C_word)C_i_cadr(t2);
t6=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2194,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t5,a[5]=((C_word*)t0)[5],a[6]=t4,a[7]=t1,a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],tmp=(C_word)a,a+=10,tmp);
/* chicken.scm: 80   stype */
t7=((C_word*)((C_word*)t0)[2])[1];
f_1795(t7,t6,t4);
default:
/* chicken.scm: 80   syntax-error */
t4=C_retrieve(lf[129]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t1,lf[128],lf[145],t2);}}

/* k2192 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2194(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2194,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2271,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=t1,a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2302,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2306,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   sprintf */
t5=C_retrieve(lf[59]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[144],((C_word*)t0)[9],((C_word*)t0)[4]);}

/* k2304 in k2192 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2306(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   renamer */
t2=((C_word*)((C_word*)t0)[3])[1];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2300 in k2192 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2302(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   string->symbol */
t2=*((C_word*)lf[14]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2269 in k2192 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[26],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2271,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[10],((C_word*)t0)[9]);
t3=(C_word)C_a_i_list(&a,1,t2);
t4=(*a=C_CLOSURE_TYPE|11,a[1]=(C_word)f_2283,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[10],a[7]=((C_word*)t0)[6],a[8]=((C_word*)t0)[7],a[9]=t1,a[10]=t3,a[11]=((C_word*)t0)[8],tmp=(C_word)a,a+=12,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2294,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[9],a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 80   strtype */
t6=((C_word*)((C_word*)t0)[2])[1];
f_1838(t6,t5,((C_word*)t0)[6]);}

/* k2292 in k2269 in k2192 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2294(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?lf[141]:lf[142]);
/* chicken.scm: 80   sprintf */
t3=C_retrieve(lf[59]);
((C_proc6)C_retrieve_proc(t3))(6,t3,((C_word*)t0)[4],lf[143],t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2281 in k2269 in k2192 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2283(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[35],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2283,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,lf[123],((C_word*)t0)[11],((C_word*)t0)[10],t1);
t3=(C_word)C_a_i_list(&a,3,lf[91],((C_word*)t0)[9],t2);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2209,a[2]=((C_word*)t0)[8],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t5=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_2212,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[7],a[9]=t4,tmp=(C_word)a,a+=10,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[7]))){
t6=(C_word)C_i_car(((C_word*)t0)[7]);
t7=t5;
f_2212(t7,(C_word)C_eqp(lf[116],t6));}
else{
t6=t5;
f_2212(t6,C_SCHEME_FALSE);}}

/* k2210 in k2281 in k2269 in k2192 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_2212(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2212,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[9];
f_2209(t2,C_SCHEME_END_OF_LIST);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[8],((C_word*)t0)[7]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2229,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[9],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[8],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2253,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2257,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   sprintf */
t6=C_retrieve(lf[59]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,lf[140],((C_word*)t0)[6],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[9];
f_2209(t3,C_SCHEME_END_OF_LIST);}}}

/* k2255 in k2210 in k2281 in k2269 in k2192 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   renamer */
t2=((C_word*)((C_word*)t0)[3])[1];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2251 in k2210 in k2281 in k2269 in k2192 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2253(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   string->symbol */
t2=*((C_word*)lf[14]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2227 in k2210 in k2281 in k2269 in k2192 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2229(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[23],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2229,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[7],((C_word*)t0)[6]);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[5],((C_word*)t0)[4]);
t4=(C_word)C_a_i_list(&a,2,t2,t3);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2241,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* chicken.scm: 80   sprintf */
t6=C_retrieve(lf[59]);
((C_proc6)C_retrieve_proc(t6))(6,t6,t5,lf[139],((C_word*)t0)[6],((C_word*)t0)[2],((C_word*)t0)[4]);}

/* k2239 in k2227 in k2210 in k2281 in k2269 in k2192 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2241(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[24],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2241,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,lf[123],lf[131],((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_list(&a,3,lf[91],((C_word*)t0)[3],t2);
t4=((C_word*)t0)[2];
f_2209(t4,(C_word)C_a_i_list(&a,1,t3));}

/* k2207 in k2281 in k2269 in k2192 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_2209(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2209,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[77],t2));}

/* k1937 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[21],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1939,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|13,a[1]=(C_word)f_2080,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=((C_word*)t0)[9],a[10]=t1,a[11]=((C_word*)t0)[10],a[12]=((C_word*)t0)[11],a[13]=((C_word*)t0)[12],tmp=(C_word)a,a+=14,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2175,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2179,a[2]=t3,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   sprintf */
t5=C_retrieve(lf[59]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[138],((C_word*)t0)[12],((C_word*)t0)[4]);}

/* k2177 in k1937 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   renamer */
t2=((C_word*)((C_word*)t0)[3])[1];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2173 in k1937 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   string->symbol */
t2=*((C_word*)lf[14]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2078 in k1937 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[39],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2080,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[13],((C_word*)t0)[12]);
t3=(C_word)C_a_i_list(&a,2,lf[122],((C_word*)t0)[11]);
t4=(C_word)C_a_i_list(&a,2,t2,t3);
t5=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_2152,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],a[6]=((C_word*)t0)[7],a[7]=t1,a[8]=((C_word*)t0)[13],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[11],a[11]=((C_word*)t0)[12],a[12]=((C_word*)t0)[9],a[13]=t4,a[14]=((C_word*)t0)[10],tmp=(C_word)a,a+=15,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2163,a[2]=((C_word*)t0)[11],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[12],a[5]=t5,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 80   strtype */
t7=((C_word*)((C_word*)t0)[2])[1];
f_1838(t7,t6,((C_word*)t0)[6]);}

/* k2161 in k2078 in k1937 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2163(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?lf[135]:lf[136]);
/* chicken.scm: 80   sprintf */
t3=C_retrieve(lf[59]);
((C_proc7)C_retrieve_proc(t3))(7,t3,((C_word*)t0)[5],lf[137],t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k2150 in k2078 in k1937 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2152(C_word c,C_word t0,C_word t1){
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
C_word ab[161],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2152,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,lf[123],((C_word*)t0)[14],((C_word*)t0)[13],t1);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[12],t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(C_word)C_a_i_list(&a,2,((C_word*)t0)[11],((C_word*)t0)[10]);
t6=(C_word)C_a_i_list(&a,3,lf[124],((C_word*)t0)[10],C_fix(0));
t7=(C_word)C_a_i_list(&a,3,lf[125],((C_word*)t0)[10],((C_word*)t0)[9]);
t8=(C_word)C_a_i_list(&a,3,lf[126],t6,t7);
t9=(C_word)C_a_i_list(&a,2,lf[127],t8);
t10=(C_word)C_a_i_list(&a,3,((C_word*)t0)[12],((C_word*)t0)[11],((C_word*)t0)[10]);
t11=(C_word)C_a_i_list(&a,2,lf[71],lf[128]);
t12=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[8]);
t13=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[10]);
t14=(C_word)C_a_i_list(&a,6,lf[129],t11,lf[130],t12,t13,((C_word*)t0)[9]);
t15=(C_word)C_a_i_list(&a,4,lf[81],t9,t10,t14);
t16=(C_word)C_a_i_list(&a,3,lf[1],t5,t15);
t17=(C_word)C_a_i_list(&a,3,lf[88],t4,t16);
t18=(C_word)C_a_i_list(&a,3,lf[91],((C_word*)t0)[7],t17);
t19=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1954,a[2]=((C_word*)t0)[6],a[3]=t18,tmp=(C_word)a,a+=4,tmp);
t20=(*a=C_CLOSURE_TYPE|12,a[1]=(C_word)f_1957,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[9],a[5]=((C_word*)t0)[12],a[6]=((C_word*)t0)[4],a[7]=((C_word*)t0)[10],a[8]=((C_word*)t0)[11],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[14],a[11]=((C_word*)t0)[5],a[12]=t19,tmp=(C_word)a,a+=13,tmp);
if(C_truep((C_word)C_i_pairp(((C_word*)t0)[5]))){
t21=(C_word)C_i_car(((C_word*)t0)[5]);
t22=t20;
f_1957(t22,(C_word)C_eqp(lf[116],t21));}
else{
t21=t20;
f_1957(t21,C_SCHEME_FALSE);}}

/* k1955 in k2150 in k2078 in k1937 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_1957(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[18],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1957,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[12];
f_1954(t2,C_SCHEME_END_OF_LIST);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[11],((C_word*)t0)[10]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_1974,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[12],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[11],a[8]=((C_word*)t0)[7],a[9]=((C_word*)t0)[8],a[10]=((C_word*)t0)[9],tmp=(C_word)a,a+=11,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2062,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2066,a[2]=t4,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   sprintf */
t6=C_retrieve(lf[59]);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,lf[134],((C_word*)t0)[9],((C_word*)t0)[3]);}
else{
t3=((C_word*)t0)[12];
f_1954(t3,C_SCHEME_END_OF_LIST);}}}

/* k2064 in k1955 in k2150 in k2078 in k1937 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2066(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   renamer */
t2=((C_word*)((C_word*)t0)[3])[1];
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2060 in k1955 in k2150 in k2078 in k1937 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   string->symbol */
t2=*((C_word*)lf[14]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1972 in k1955 in k2150 in k2078 in k1937 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1974(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[38],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1974,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[10],((C_word*)t0)[9]);
t3=(C_word)C_a_i_list(&a,2,lf[122],((C_word*)t0)[8]);
t4=(C_word)C_a_i_list(&a,2,((C_word*)t0)[7],((C_word*)t0)[6]);
t5=(C_word)C_a_i_list(&a,3,t2,t3,t4);
t6=(*a=C_CLOSURE_TYPE|10,a[1]=(C_word)f_2046,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[10],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[8],a[8]=((C_word*)t0)[9],a[9]=((C_word*)t0)[5],a[10]=t5,tmp=(C_word)a,a+=11,tmp);
/* chicken.scm: 80   sprintf */
t7=C_retrieve(lf[59]);
((C_proc7)C_retrieve_proc(t7))(7,t7,t6,lf[133],((C_word*)t0)[9],((C_word*)t0)[2],((C_word*)t0)[8],((C_word*)t0)[6]);}

/* k2044 in k1972 in k1955 in k2150 in k2078 in k1937 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_2046(C_word c,C_word t0,C_word t1){
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
C_word ab[153],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2046,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,4,lf[123],lf[131],((C_word*)t0)[10],t1);
t3=(C_word)C_a_i_list(&a,2,((C_word*)t0)[9],t2);
t4=(C_word)C_a_i_list(&a,1,t3);
t5=(C_word)C_a_i_list(&a,3,((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);
t6=(C_word)C_a_i_list(&a,3,lf[124],((C_word*)t0)[7],C_fix(0));
t7=(C_word)C_a_i_list(&a,3,lf[125],((C_word*)t0)[7],((C_word*)t0)[5]);
t8=(C_word)C_a_i_list(&a,3,lf[126],t6,t7);
t9=(C_word)C_a_i_list(&a,2,lf[127],t8);
t10=(C_word)C_a_i_list(&a,4,((C_word*)t0)[9],((C_word*)t0)[8],((C_word*)t0)[7],((C_word*)t0)[6]);
t11=(C_word)C_a_i_list(&a,2,lf[71],lf[128]);
t12=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[4]);
t13=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)t0)[7]);
t14=(C_word)C_a_i_list(&a,6,lf[129],t11,lf[132],t12,t13,((C_word*)t0)[5]);
t15=(C_word)C_a_i_list(&a,4,lf[81],t9,t10,t14);
t16=(C_word)C_a_i_list(&a,3,lf[1],t5,t15);
t17=(C_word)C_a_i_list(&a,3,lf[88],t4,t16);
t18=(C_word)C_a_i_list(&a,3,lf[91],((C_word*)t0)[3],t17);
t19=((C_word*)t0)[2];
f_1954(t19,(C_word)C_a_i_list(&a,1,t18));}

/* k1952 in k2150 in k2078 in k1937 in a1916 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_1954(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1954,NULL,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_a_i_cons(&a,2,lf[77],t2));}

/* k1913 in k1909 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1915(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   ##sys#append */
t2=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1905 in k1901 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1907(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   ##sys#append */
t2=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1897 in k1893 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1899(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   ##sys#append */
t2=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1889 in k1882 in k1879 in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1891(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1891,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[77],t1));}

/* strtype in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_1838(C_word t0,C_word t1,C_word t2){
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
C_save_and_reclaim((void*)trf_1838,NULL,3,t0,t1,t2);}
t3=(C_word)C_eqp(t2,((C_word*)t0)[3]);
if(C_truep(t3)){
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,t3);}
else{
if(C_truep((C_word)C_i_pairp(t2))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1854,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_car(t2);
t6=(C_word)C_eqp(lf[116],t5);
if(C_truep(t6)){
t7=(C_word)C_i_cadr(t2);
/* chicken.scm: 80   strtype */
t9=t4;
t10=t7;
t1=t9;
t2=t10;
goto loop;}
else{
t7=t4;
f_1854(2,t7,C_SCHEME_FALSE);}}
else{
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,C_SCHEME_FALSE);}}}

/* k1852 in strtype in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1854(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
if(C_truep(t1)){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}
else{
t2=(C_word)C_i_car(((C_word*)t0)[2]);
t3=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_memq(t2,lf[120]));}}

/* stype in k1791 in k1788 in k1785 in k1782 in k1776 in a1773 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_1795(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(6);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1795,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_pairp(t2))){
t3=(C_word)C_i_car(t2);
t4=(C_word)C_eqp(lf[116],t3);
if(C_truep(t4)){
t5=(C_word)C_i_cadr(t2);
/* chicken.scm: 80   stype */
t9=t1;
t10=t5;
t1=t9;
t2=t10;
goto loop;}
else{
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_memq(t5,lf[117]);
t7=t1;
((C_proc2)(void*)(*((C_word*)t7+1)))(2,t7,(C_truep(t6)?(C_word)C_a_i_list(&a,2,lf[118],t2):t2));}}
else{
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}}

/* k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1038(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1038,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1041,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1760,a[2]=lf[114],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[112],t3);}

/* a1759 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1760(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1760,3,t0,t1,t2);}
t3=(C_word)C_a_i_cons(&a,2,lf[112],t2);
t4=(C_word)C_a_i_list(&a,2,lf[71],t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,2,lf[113],t4));}

/* k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1041(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1041,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1044,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1494,a[2]=lf[110],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[111],t3);}

/* a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1494(C_word c,C_word t0,C_word t1,C_word t2,...){
C_word tmp;
C_word t3;
va_list v;
C_word *a,c2=c;
C_save_rest(t2,c2,3);
if(c<3) C_bad_min_argc_2(c,3,t0);
if(!C_demand(c*C_SIZEOF_PAIR+8)){
C_save_and_reclaim((void*)tr3r,(void*)f_1494r,3,t0,t1,t2);}
else{
a=C_alloc((c-3)*3);
t3=C_restore_rest(a,C_rest_count(0));
f_1494r(t0,t1,t2,t3);}}

static void C_ccall f_1494r(C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word *a=C_alloc(8);
t4=t2;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1498,a[2]=t2,a[3]=t3,a[4]=t5,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 80   ->string */
t7=C_retrieve(lf[103]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,t2);}

/* k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1498(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1498,2,t0,t1);}
t2=t1;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1501,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t5=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1740,a[2]=t4,a[3]=t3,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_i_listp(((C_word*)t0)[2]))){
t6=(C_word)C_i_length(((C_word*)t0)[2]);
t7=t5;
f_1740(t7,(C_word)C_eqp(C_fix(2),t6));}
else{
t6=t5;
f_1740(t6,C_SCHEME_FALSE);}}

/* k1738 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_1740(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
if(C_truep(t1)){
t2=(C_word)C_i_car(((C_word*)t0)[5]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=(C_word)C_i_cadr(((C_word*)t0)[5]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[2];
f_1501(t6,t5);}
else{
t2=((C_word*)t0)[2];
f_1501(t2,C_SCHEME_UNDEFINED);}}

/* k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_1501(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1501,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1504,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1727,a[2]=lf[109],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a1726 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1727(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1727,3,t0,t1,t2);}
t3=(C_word)C_i_pairp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?(C_word)C_i_car(t2):t2));}

/* k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1504(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[7],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1504,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1507,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* map */
t3=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,t2,C_retrieve(lf[6]),t1);}

/* k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1507(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1507,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1510,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1715,a[2]=lf[107],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[108]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t2,t3,((C_word*)t0)[2]);}

/* a1714 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1715(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1715,3,t0,t1,t2);}
t3=(C_word)C_i_pairp(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?(C_word)C_i_cadr(t2):t2));}

/* k1508 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[11],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1510,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1513,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1713,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   conc */
t4=C_retrieve(lf[44]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,((C_word*)((C_word*)t0)[5])[1],lf[106]);}

/* k1711 in k1508 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1713(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   string->symbol */
t2=*((C_word*)lf[14]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1511 in k1508 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1513,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1516,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1709,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   conc */
t4=C_retrieve(lf[44]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[105],((C_word*)((C_word*)t0)[6])[1]);}

/* k1707 in k1511 in k1508 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1709(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   string->symbol */
t2=*((C_word*)lf[14]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1514 in k1511 in k1508 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1516(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1516,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1523,a[2]=((C_word*)t0)[8],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1527,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=t2,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=t1,a[8]=((C_word*)t0)[7],tmp=(C_word)a,a+=9,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1697,a[2]=lf[104],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   map */
t5=*((C_word*)lf[0]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,t4,((C_word*)t0)[4],((C_word*)t0)[2]);}

/* a1696 in k1514 in k1511 in k1508 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1697(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1697,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1705,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 80   ->string */
t5=C_retrieve(lf[103]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t3);}

/* k1703 in a1696 in k1514 in k1511 in k1508 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1705(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1705,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_list(&a,4,lf[101],((C_word*)t0)[2],lf[102],t1));}

/* k1525 in k1514 in k1511 in k1508 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1527(C_word c,C_word t0,C_word t1){
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
C_word ab[97],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1527,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,((C_word*)t0)[8],lf[78]);
t3=(C_word)C_a_i_list(&a,2,lf[79],lf[78]);
t4=(C_word)C_a_i_list(&a,2,lf[80],lf[78]);
t5=(C_word)C_a_i_list(&a,4,lf[81],t3,t4,lf[78]);
t6=(C_word)C_a_i_list(&a,2,lf[78],t5);
t7=(C_word)C_a_i_list(&a,2,lf[82],C_fix(0));
t8=(C_word)C_a_i_list(&a,2,t6,t7);
t9=(C_word)C_a_i_list(&a,2,lf[83],lf[78]);
t10=(C_word)C_a_i_list(&a,2,lf[84],lf[78]);
t11=(C_word)C_a_i_list(&a,2,lf[85],lf[78]);
t12=(C_word)C_a_i_list(&a,2,lf[86],t11);
t13=(C_word)C_a_i_list(&a,1,t12);
t14=(*a=C_CLOSURE_TYPE|14,a[1]=(C_word)f_1637,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[8],a[7]=((C_word*)t0)[5],a[8]=((C_word*)t0)[6],a[9]=((C_word*)t0)[7],a[10]=t2,a[11]=t8,a[12]=t9,a[13]=t10,a[14]=t13,tmp=(C_word)a,a+=15,tmp);
t15=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1641,a[2]=t14,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1659,a[2]=lf[100],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   map */
t17=*((C_word*)lf[0]+1);
((C_proc5)C_retrieve_proc(t17))(5,t17,t15,t16,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a1658 in k1525 in k1514 in k1511 in k1508 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1659(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1659,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_list(&a,1,t3);
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,2,t4,t2));}

/* k1639 in k1525 in k1514 in k1511 in k1508 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1641(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[27],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1641,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[71],((C_word*)((C_word*)t0)[3])[1]);
t3=(C_word)C_a_i_list(&a,4,lf[98],lf[99],lf[86],t2);
t4=(C_word)C_a_i_list(&a,2,lf[95],t3);
t5=(C_word)C_a_i_list(&a,1,t4);
/* ##sys#append */
t6=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[2],t1,t5);}

/* k1635 in k1525 in k1514 in k1511 in k1508 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1637(C_word c,C_word t0,C_word t1){
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
C_word ab[88],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1637,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[86],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[87],t2);
t4=(C_word)C_a_i_list(&a,3,lf[88],((C_word*)t0)[14],t3);
t5=(C_word)C_a_i_list(&a,3,lf[89],lf[82],t4);
t6=(C_word)C_a_i_list(&a,3,lf[90],((C_word*)t0)[13],t5);
t7=(C_word)C_a_i_list(&a,4,lf[81],((C_word*)t0)[12],lf[82],t6);
t8=(C_word)C_a_i_list(&a,4,lf[88],lf[90],((C_word*)t0)[11],t7);
t9=(C_word)C_a_i_list(&a,3,lf[91],((C_word*)t0)[10],t8);
t10=(C_word)C_a_i_list(&a,2,((C_word*)t0)[9],lf[86]);
t11=(*a=C_CLOSURE_TYPE|9,a[1]=(C_word)f_1555,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=t9,a[5]=((C_word*)t0)[9],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],a[8]=((C_word*)t0)[8],a[9]=t10,tmp=(C_word)a,a+=10,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1559,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1573,a[2]=lf[97],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   map */
t14=*((C_word*)lf[0]+1);
((C_proc5)C_retrieve_proc(t14))(5,t14,t12,t13,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* a1572 in k1635 in k1525 in k1514 in k1511 in k1508 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1573(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[21],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1573,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_list(&a,3,lf[96],lf[86],t2);
t5=(C_word)C_a_i_list(&a,2,lf[71],t3);
t6=t1;
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,(C_word)C_a_i_list(&a,2,t4,t5));}

/* k1557 in k1635 in k1525 in k1514 in k1511 in k1508 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1559(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1559,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,2,lf[71],C_SCHEME_END_OF_LIST);
t3=(C_word)C_a_i_list(&a,2,lf[95],t2);
t4=(C_word)C_a_i_list(&a,1,t3);
/* ##sys#append */
t5=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,((C_word*)t0)[2],t1,t4);}

/* k1553 in k1635 in k1525 in k1514 in k1511 in k1508 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1555(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[36],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1555,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[92],t1);
t3=(C_word)C_a_i_list(&a,3,lf[91],((C_word*)t0)[9],t2);
t4=(C_word)C_a_i_list(&a,5,lf[93],((C_word*)((C_word*)t0)[8])[1],((C_word*)((C_word*)t0)[7])[1],((C_word*)t0)[6],((C_word*)t0)[5]);
t5=(C_word)C_a_i_list(&a,3,((C_word*)t0)[4],t3,t4);
/* ##sys#append */
t6=*((C_word*)lf[94]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,((C_word*)t0)[3],((C_word*)t0)[2],t5);}

/* k1521 in k1514 in k1511 in k1508 in k1505 in k1502 in k1499 in k1496 in a1493 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1523(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1523,2,t0,t1);}
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[77],t1));}

/* k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1044(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1044,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1047,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1460,a[2]=lf[74],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro */
t4=C_retrieve(lf[75]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[76],t3);}

/* a1459 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1460(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word t10;
C_word t11;
C_word ab[60],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1460,4,t0,t1,t2,t3);}
t4=(C_word)C_a_i_cons(&a,2,t2,lf[70]);
t5=(C_word)C_a_i_list(&a,2,lf[71],t2);
t6=(C_word)C_a_i_list(&a,2,lf[71],t3);
t7=(C_word)C_a_i_list(&a,4,lf[59],lf[60],t5,t6);
t8=(C_word)C_a_i_list(&a,2,lf[58],t7);
t9=(C_word)C_a_i_list(&a,2,lf[71],t3);
t10=(C_word)C_a_i_list(&a,3,lf[72],t9,lf[70]);
t11=t1;
((C_proc2)(void*)(*((C_word*)t11+1)))(2,t11,(C_word)C_a_i_list(&a,4,lf[73],t4,t8,t10));}

/* k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1047(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1047,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1050,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1447,a[2]=lf[69],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[68],t3);}

/* a1446 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1447(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1447,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1451,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1458,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   sprintf */
t5=C_retrieve(lf[59]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[60],lf[68],lf[67]);}

/* k1456 in a1446 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   warning */
t2=C_retrieve(lf[58]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1449 in a1446 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1451,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[67],((C_word*)t0)[2]));}

/* k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1050,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1053,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1434,a[2]=lf[66],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[65],t3);}

/* a1433 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1434(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1434,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1438,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1445,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   sprintf */
t5=C_retrieve(lf[59]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[60],lf[65],lf[64]);}

/* k1443 in a1433 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   warning */
t2=C_retrieve(lf[58]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1436 in a1433 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1438,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[64],((C_word*)t0)[2]));}

/* k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1053(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1053,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1056,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1421,a[2]=lf[62],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   ##sys#register-macro-2 */
t4=C_retrieve(lf[63]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,lf[61],t3);}

/* a1420 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1421(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1421,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1425,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1432,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 80   sprintf */
t5=C_retrieve(lf[59]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[60],lf[61],lf[57]);}

/* k1430 in a1420 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1432(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 80   warning */
t2=C_retrieve(lf[58]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1423 in a1420 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1425,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,lf[57],((C_word*)t0)[2]));}

/* k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1056(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1056,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1060,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1419,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 89   argv */
t4=C_retrieve(lf[56]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k1417 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[14],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1419,2,t0,t1);}
t2=(C_word)C_i_cdr(t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1398,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1400,a[2]=lf[50],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1408,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1412,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 90   getenv */
t7=C_retrieve(lf[54]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,lf[55]);}

/* k1410 in k1417 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1412(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?t1:lf[52]);
/* chicken.scm: 90   string-split */
t3=C_retrieve(lf[53]);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}

/* k1406 in k1417 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1408(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 90   remove */
t2=C_retrieve(lf[51]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a1399 in k1417 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1400(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1400,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_string_equal_p(t2,lf[49]));}

/* k1396 in k1417 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1398(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 88   append */
t2=*((C_word*)lf[48]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1060(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1060,2,t0,t1);}
t2=C_mutate((C_word*)lf[11]+1,t1);
t3=C_mutate((C_word*)lf[12]+1,(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1062,a[2]=lf[17],tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1169,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1177,a[2]=lf[20],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1189,a[2]=lf[47],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 117  ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,t6);}

/* a1188 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1189(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[14],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_1189,4,t0,t1,t2,t3);}
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1193,a[2]=t4,a[3]=t2,a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t6=C_SCHEME_UNDEFINED;
t7=(*a=C_VECTOR_TYPE|1,a[1]=t6,tmp=(C_word)a,a+=2,tmp);
t8=C_set_block_item(t7,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1201,a[2]=t4,a[3]=t7,a[4]=lf[46],tmp=(C_word)a,a+=5,tmp));
t9=((C_word*)t7)[1];
f_1201(t9,t5,((C_word*)t4)[1]);}

/* loop in a1188 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_1201(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(26);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1201,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_UNDEFINED);}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=(C_word)C_eqp(lf[23],t3);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1223,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t7=(C_word)C_i_car(t4);
/* chicken.scm: 123  string->number */
C_string_to_number(3,0,t6,t7);}
else{
t6=(C_word)C_eqp(lf[30],t3);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1286,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=t4,tmp=(C_word)a,a+=6,tmp);
t8=(C_word)C_i_car(t4);
/* chicken.scm: 137  string->number */
C_string_to_number(3,0,t7,t8);}
else{
t7=(C_word)C_eqp(lf[34],t3);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1340,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[2],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 146  cons* */
t9=C_retrieve(lf[24]);
((C_proc11)C_retrieve_proc(t9))(11,t9,t8,lf[35],lf[36],lf[32],lf[26],lf[25],lf[37],lf[38],lf[31],((C_word*)((C_word*)t0)[2])[1]);}
else{
if(C_truep((C_word)C_i_memq(t3,C_retrieve(lf[39])))){
/* chicken.scm: 150  loop */
t17=t1;
t18=t4;
t1=t17;
t2=t18;
goto loop;}
else{
if(C_truep((C_word)C_i_memq(t3,C_retrieve(lf[40])))){
if(C_truep((C_word)C_i_pairp(t4))){
t8=(C_word)C_i_cdr(t4);
/* chicken.scm: 153  loop */
t17=t1;
t18=t8;
t1=t17;
t2=t18;
goto loop;}
else{
/* chicken.scm: 154  quit */
t8=C_retrieve(lf[41]);
((C_proc4)C_retrieve_proc(t8))(4,t8,t1,lf[42],t3);}}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1377,a[2]=t4,a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1384,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_stringp(t3))){
t10=t9;
f_1384(2,t10,t3);}
else{
/* chicken.scm: 158  conc */
t10=C_retrieve(lf[44]);
((C_proc4)C_retrieve_proc(t10))(4,t10,t9,lf[45],t3);}}}}}}}}

/* k1382 in loop in a1188 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1384(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 156  ##compiler#compiler-warning */
t2=C_retrieve(lf[27]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],lf[28],lf[43],t1);}

/* k1375 in loop in a1188 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 159  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_1201(t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1338 in loop in a1188 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1340(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[5])+1,t1);
/* chicken.scm: 149  loop */
t3=((C_word*)((C_word*)t0)[4])[1];
f_1201(t3,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1284 in loop in a1188 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1286(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1286,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1289,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
switch(t1){
case C_fix(0):
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1303,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 139  cons* */
t4=C_retrieve(lf[24]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[31],lf[32],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(1):
t3=(C_word)C_a_i_cons(&a,2,lf[32],((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t2;
f_1289(2,t5,t4);
case C_fix(2):
t3=t2;
f_1289(2,t3,C_SCHEME_FALSE);
default:
t3=(C_word)C_i_car(((C_word*)t0)[5]);
/* chicken.scm: 142  ##compiler#compiler-warning */
t4=C_retrieve(lf[27]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,lf[28],lf[33],t3);}}

/* k1301 in k1284 in loop in a1188 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_1289(2,t3,t2);}

/* k1287 in k1284 in loop in a1188 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* chicken.scm: 143  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1201(t3,((C_word*)t0)[2],t2);}

/* k1221 in loop in a1188 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1223(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_1223,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1226,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],tmp=(C_word)a,a+=5,tmp);
switch(t1){
case C_fix(0):
t3=t2;
f_1226(2,t3,C_SCHEME_FALSE);
case C_fix(1):
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1246,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 127  cons* */
t4=C_retrieve(lf[24]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[25],((C_word*)((C_word*)t0)[2])[1]);
case C_fix(2):
t3=(C_word)C_a_i_cons(&a,2,lf[25],((C_word*)((C_word*)t0)[2])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[2])+1,t3);
t5=t2;
f_1226(2,t5,t4);
case C_fix(3):
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1266,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 133  cons* */
t4=C_retrieve(lf[24]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[25],lf[26],((C_word*)((C_word*)t0)[2])[1]);
default:
t3=(C_word)C_i_car(((C_word*)t0)[5]);
/* chicken.scm: 134  ##compiler#compiler-warning */
t4=C_retrieve(lf[27]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t2,lf[28],lf[29],t3);}}

/* k1264 in k1221 in loop in a1188 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1266(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_1226(2,t3,t2);}

/* k1244 in k1221 in loop in a1188 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1246(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_1226(2,t3,t2);}

/* k1224 in k1221 in loop in a1188 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1226(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
/* chicken.scm: 135  loop */
t3=((C_word*)((C_word*)t0)[3])[1];
f_1201(t3,((C_word*)t0)[2],t2);}

/* k1191 in a1188 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1193(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1193,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1196,a[2]=((C_word*)t0)[4],tmp=(C_word)a,a+=3,tmp);
C_apply(5,0,t2,C_retrieve(lf[22]),((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k1194 in k1191 in a1188 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1196(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 161  exit */
t2=C_retrieve(lf[21]);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* a1176 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1177(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1177,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1184,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 117  user-options-pass */
t3=C_retrieve(lf[19]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1182 in a1176 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1184(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?t1:C_retrieve(lf[12]));
t3=t2;
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],C_retrieve(lf[11]));}

/* k1167 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1169,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1172,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1175,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
t4=C_retrieve(lf[18]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k1173 in k1167 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1175(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k1170 in k1167 in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* ##compiler#process-command-line in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1062(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1062,3,t0,t1,t2);}
t3=C_SCHEME_UNDEFINED;
t4=(*a=C_VECTOR_TYPE|1,a[1]=t3,tmp=(C_word)a,a+=2,tmp);
t5=C_set_block_item(t4,0,(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1068,a[2]=t4,a[3]=lf[16],tmp=(C_word)a,a+=4,tmp));
t6=((C_word*)t4)[1];
f_1068(t6,t1,t2,C_SCHEME_END_OF_LIST,C_SCHEME_FALSE);}

/* loop in ##compiler#process-command-line in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_1068(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t16;
C_word t17;
C_word t18;
C_word t19;
C_word t20;
C_word *a;
loop:
a=C_alloc(16);
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_1068,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1082,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* chicken.scm: 102  reverse */
t6=*((C_word*)lf[13]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t3);}
else{
t5=(C_word)C_i_car(t2);
t6=(C_word)C_i_string_length(t5);
t7=(C_word)C_i_string_ref(t5,C_fix(0));
t8=(C_word)C_eqp(C_make_character(45),t7);
t9=(C_truep(t8)?(C_word)C_fixnum_greaterp(t6,C_fix(1)):C_SCHEME_FALSE);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1103,a[2]=t6,a[3]=t5,a[4]=t4,a[5]=t3,a[6]=t1,a[7]=((C_word*)t0)[2],a[8]=t2,tmp=(C_word)a,a+=9,tmp);
if(C_truep((C_word)C_fixnum_greaterp(t6,C_fix(1)))){
t11=(C_word)C_i_string_ref(t5,C_fix(1));
t12=t10;
f_1103(t12,(C_word)C_eqp(C_make_character(58),t11));}
else{
t11=t10;
f_1103(t11,C_SCHEME_FALSE);}}
else{
if(C_truep(t4)){
t10=(C_word)C_i_cdr(t2);
t11=(C_word)C_a_i_cons(&a,2,t5,t3);
/* chicken.scm: 111  loop */
t17=t1;
t18=t10;
t19=t11;
t20=t4;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
goto loop;}
else{
t10=(C_word)C_i_cdr(t2);
/* chicken.scm: 112  loop */
t17=t1;
t18=t10;
t19=t3;
t20=t5;
t1=t17;
t2=t18;
t3=t19;
t4=t20;
goto loop;}}}}

/* k1101 in loop in ##compiler#process-command-line in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_fcall f_1103(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1103,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[8]);
/* chicken.scm: 108  loop */
t3=((C_word*)((C_word*)t0)[7])[1];
f_1068(t3,((C_word*)t0)[6],t2,((C_word*)t0)[5],((C_word*)t0)[4]);}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[8]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1125,a[2]=((C_word*)t0)[4],a[3]=t2,a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1129,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 109  substring */
t5=*((C_word*)lf[15]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,((C_word*)t0)[3],C_fix(1),((C_word*)t0)[2]);}}

/* k1127 in k1101 in loop in ##compiler#process-command-line in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1129(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 109  string->symbol */
t2=*((C_word*)lf[14]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k1123 in k1101 in loop in ##compiler#process-command-line in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1125(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1125,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[6]);
/* chicken.scm: 109  loop */
t3=((C_word*)((C_word*)t0)[5])[1];
f_1068(t3,((C_word*)t0)[4],((C_word*)t0)[3],t2,((C_word*)t0)[2]);}

/* k1080 in loop in ##compiler#process-command-line in k1058 in k1054 in k1051 in k1048 in k1045 in k1042 in k1039 in k1036 in k1033 in k1030 in k1027 in k1024 in k1021 in k1018 in k1015 in k1012 in k1009 in k1006 in k1003 in k1000 in k997 in k994 in k991 in k988 in k985 in k982 in k979 in k976 in k973 in k970 in k967 in k964 in k961 in k958 in k955 in k952 in k949 in k946 in k943 in k940 in k937 in k934 in k931 in k928 in k925 in k846 in k843 in k840 in k837 in k834 in k831 in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_1082(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* chicken.scm: 102  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* assign in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_760(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_760,4,t0,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_764,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=t3,a[5]=t2,tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   ##sys#check-syntax */
t5=C_retrieve(lf[7]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[8],t2,lf[9]);}

/* k762 in assign in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_764(C_word c,C_word t0,C_word t1){
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
C_save_and_reclaim((void*)tr2,(void*)f_764,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(((C_word*)t0)[5]))){
t2=(C_word)C_a_i_list(&a,3,lf[1],C_SCHEME_END_OF_LIST,((C_word*)t0)[4]);
t3=(C_word)C_a_i_list(&a,1,lf[2]);
t4=(C_word)C_a_i_list(&a,3,lf[1],C_SCHEME_END_OF_LIST,t3);
t5=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,(C_word)C_a_i_list(&a,3,lf[3],t2,t4));}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[5]);
if(C_truep((C_word)C_i_nullp(t2))){
t3=(C_word)C_i_car(((C_word*)t0)[5]);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[4],t3,((C_word*)t0)[4]));}
else{
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_801,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* chicken.scm: 79   map */
t4=((C_word*)t0)[2];
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_retrieve(lf[6]),((C_word*)t0)[5]);}}}

/* k799 in k762 in assign in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_801(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[17],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_801,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,lf[1],C_SCHEME_END_OF_LIST,((C_word*)t0)[5]);
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_820,a[2]=t2,a[3]=((C_word*)t0)[4],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_822,a[2]=lf[5],tmp=(C_word)a,a+=3,tmp);
/* chicken.scm: 79   map */
t5=((C_word*)t0)[3];
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,t4,((C_word*)t0)[2],t1);}

/* a821 in k799 in k762 in assign in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_822(C_word c,C_word t0,C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word ab[9],*a=ab;
if(c!=4) C_bad_argc_2(c,4,t0);
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr4,(void*)f_822,4,t0,t1,t2,t3);}
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[4],t2,t3));}

/* k818 in k799 in k762 in assign in k757 in k754 in k751 in k748 in k745 in k742 in k739 in k736 in k733 in k730 in k727 in k724 in k721 in k718 in k715 in k712 in k709 in k706 in k703 in k700 in k697 in k694 in k691 in k688 in k685 in k682 in k679 */
static void C_ccall f_820(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[15],*a=ab;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_820,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[4],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[1],t2);
t4=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_word)C_a_i_list(&a,3,lf[3],((C_word*)t0)[2],t3));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[579] = {
{"toplevelchicken.scm",(void*)C_toplevel},
{"f_681chicken.scm",(void*)f_681},
{"f_684chicken.scm",(void*)f_684},
{"f_687chicken.scm",(void*)f_687},
{"f_690chicken.scm",(void*)f_690},
{"f_693chicken.scm",(void*)f_693},
{"f_696chicken.scm",(void*)f_696},
{"f_699chicken.scm",(void*)f_699},
{"f_702chicken.scm",(void*)f_702},
{"f_705chicken.scm",(void*)f_705},
{"f_708chicken.scm",(void*)f_708},
{"f_711chicken.scm",(void*)f_711},
{"f_714chicken.scm",(void*)f_714},
{"f_717chicken.scm",(void*)f_717},
{"f_720chicken.scm",(void*)f_720},
{"f_723chicken.scm",(void*)f_723},
{"f_6943chicken.scm",(void*)f_6943},
{"f_6947chicken.scm",(void*)f_6947},
{"f_6950chicken.scm",(void*)f_6950},
{"f_6953chicken.scm",(void*)f_6953},
{"f_6959chicken.scm",(void*)f_6959},
{"f_7165chicken.scm",(void*)f_7165},
{"f_7145chicken.scm",(void*)f_7145},
{"f_7141chicken.scm",(void*)f_7141},
{"f_7121chicken.scm",(void*)f_7121},
{"f_6984chicken.scm",(void*)f_6984},
{"f_6994chicken.scm",(void*)f_6994},
{"f_7113chicken.scm",(void*)f_7113},
{"f_6997chicken.scm",(void*)f_6997},
{"f_7109chicken.scm",(void*)f_7109},
{"f_7000chicken.scm",(void*)f_7000},
{"f_7031chicken.scm",(void*)f_7031},
{"f_7011chicken.scm",(void*)f_7011},
{"f_6982chicken.scm",(void*)f_6982},
{"f_726chicken.scm",(void*)f_726},
{"f_6855chicken.scm",(void*)f_6855},
{"f_6872chicken.scm",(void*)f_6872},
{"f_6875chicken.scm",(void*)f_6875},
{"f_6881chicken.scm",(void*)f_6881},
{"f_729chicken.scm",(void*)f_729},
{"f_6814chicken.scm",(void*)f_6814},
{"f_6818chicken.scm",(void*)f_6818},
{"f_732chicken.scm",(void*)f_732},
{"f_6798chicken.scm",(void*)f_6798},
{"f_6808chicken.scm",(void*)f_6808},
{"f_6806chicken.scm",(void*)f_6806},
{"f_735chicken.scm",(void*)f_735},
{"f_6743chicken.scm",(void*)f_6743},
{"f_6747chicken.scm",(void*)f_6747},
{"f_6793chicken.scm",(void*)f_6793},
{"f_6750chicken.scm",(void*)f_6750},
{"f_6759chicken.scm",(void*)f_6759},
{"f_6767chicken.scm",(void*)f_6767},
{"f_6769chicken.scm",(void*)f_6769},
{"f_6786chicken.scm",(void*)f_6786},
{"f_6757chicken.scm",(void*)f_6757},
{"f_738chicken.scm",(void*)f_738},
{"f_6683chicken.scm",(void*)f_6683},
{"f_6687chicken.scm",(void*)f_6687},
{"f_741chicken.scm",(void*)f_741},
{"f_6624chicken.scm",(void*)f_6624},
{"f_6628chicken.scm",(void*)f_6628},
{"f_6655chicken.scm",(void*)f_6655},
{"f_744chicken.scm",(void*)f_744},
{"f_6450chicken.scm",(void*)f_6450},
{"f_6454chicken.scm",(void*)f_6454},
{"f_6457chicken.scm",(void*)f_6457},
{"f_6618chicken.scm",(void*)f_6618},
{"f_6460chicken.scm",(void*)f_6460},
{"f_6612chicken.scm",(void*)f_6612},
{"f_6463chicken.scm",(void*)f_6463},
{"f_6610chicken.scm",(void*)f_6610},
{"f_6574chicken.scm",(void*)f_6574},
{"f_6588chicken.scm",(void*)f_6588},
{"f_6602chicken.scm",(void*)f_6602},
{"f_6582chicken.scm",(void*)f_6582},
{"f_6578chicken.scm",(void*)f_6578},
{"f_6470chicken.scm",(void*)f_6470},
{"f_6566chicken.scm",(void*)f_6566},
{"f_6542chicken.scm",(void*)f_6542},
{"f_6560chicken.scm",(void*)f_6560},
{"f_6550chicken.scm",(void*)f_6550},
{"f_6546chicken.scm",(void*)f_6546},
{"f_6538chicken.scm",(void*)f_6538},
{"f_6522chicken.scm",(void*)f_6522},
{"f_6498chicken.scm",(void*)f_6498},
{"f_6516chicken.scm",(void*)f_6516},
{"f_6506chicken.scm",(void*)f_6506},
{"f_6502chicken.scm",(void*)f_6502},
{"f_6494chicken.scm",(void*)f_6494},
{"f_747chicken.scm",(void*)f_747},
{"f_6355chicken.scm",(void*)f_6355},
{"f_6391chicken.scm",(void*)f_6391},
{"f_6404chicken.scm",(void*)f_6404},
{"f_6362chicken.scm",(void*)f_6362},
{"f_750chicken.scm",(void*)f_750},
{"f_6245chicken.scm",(void*)f_6245},
{"f_6249chicken.scm",(void*)f_6249},
{"f_6252chicken.scm",(void*)f_6252},
{"f_6255chicken.scm",(void*)f_6255},
{"f_6258chicken.scm",(void*)f_6258},
{"f_6349chicken.scm",(void*)f_6349},
{"f_6261chicken.scm",(void*)f_6261},
{"f_6343chicken.scm",(void*)f_6343},
{"f_6264chicken.scm",(void*)f_6264},
{"f_6337chicken.scm",(void*)f_6337},
{"f_6341chicken.scm",(void*)f_6341},
{"f_6271chicken.scm",(void*)f_6271},
{"f_6309chicken.scm",(void*)f_6309},
{"f_6307chicken.scm",(void*)f_6307},
{"f_753chicken.scm",(void*)f_753},
{"f_6235chicken.scm",(void*)f_6235},
{"f_756chicken.scm",(void*)f_756},
{"f_6221chicken.scm",(void*)f_6221},
{"f_759chicken.scm",(void*)f_759},
{"f_833chicken.scm",(void*)f_833},
{"f_836chicken.scm",(void*)f_836},
{"f_5959chicken.scm",(void*)f_5959},
{"f_5963chicken.scm",(void*)f_5963},
{"f_5972chicken.scm",(void*)f_5972},
{"f_6181chicken.scm",(void*)f_6181},
{"f_6194chicken.scm",(void*)f_6194},
{"f_5975chicken.scm",(void*)f_5975},
{"f_6171chicken.scm",(void*)f_6171},
{"f_6179chicken.scm",(void*)f_6179},
{"f_5978chicken.scm",(void*)f_5978},
{"f_6125chicken.scm",(void*)f_6125},
{"f_6158chicken.scm",(void*)f_6158},
{"f_6165chicken.scm",(void*)f_6165},
{"f_6141chicken.scm",(void*)f_6141},
{"f_5990chicken.scm",(void*)f_5990},
{"f_6119chicken.scm",(void*)f_6119},
{"f_5997chicken.scm",(void*)f_5997},
{"f_5999chicken.scm",(void*)f_5999},
{"f_6113chicken.scm",(void*)f_6113},
{"f_6033chicken.scm",(void*)f_6033},
{"f_6087chicken.scm",(void*)f_6087},
{"f_6064chicken.scm",(void*)f_6064},
{"f_6044chicken.scm",(void*)f_6044},
{"f_6019chicken.scm",(void*)f_6019},
{"f_6027chicken.scm",(void*)f_6027},
{"f_6017chicken.scm",(void*)f_6017},
{"f_5979chicken.scm",(void*)f_5979},
{"f_5919chicken.scm",(void*)f_5919},
{"f_5942chicken.scm",(void*)f_5942},
{"f_5946chicken.scm",(void*)f_5946},
{"f_5888chicken.scm",(void*)f_5888},
{"f_5909chicken.scm",(void*)f_5909},
{"f_839chicken.scm",(void*)f_839},
{"f_5837chicken.scm",(void*)f_5837},
{"f_5841chicken.scm",(void*)f_5841},
{"f_5852chicken.scm",(void*)f_5852},
{"f_5877chicken.scm",(void*)f_5877},
{"f_842chicken.scm",(void*)f_842},
{"f_5717chicken.scm",(void*)f_5717},
{"f_5721chicken.scm",(void*)f_5721},
{"f_5831chicken.scm",(void*)f_5831},
{"f_5829chicken.scm",(void*)f_5829},
{"f_5730chicken.scm",(void*)f_5730},
{"f_5817chicken.scm",(void*)f_5817},
{"f_5825chicken.scm",(void*)f_5825},
{"f_5733chicken.scm",(void*)f_5733},
{"f_5811chicken.scm",(void*)f_5811},
{"f_5753chicken.scm",(void*)f_5753},
{"f_5763chicken.scm",(void*)f_5763},
{"f_5783chicken.scm",(void*)f_5783},
{"f_5789chicken.scm",(void*)f_5789},
{"f_5797chicken.scm",(void*)f_5797},
{"f_5787chicken.scm",(void*)f_5787},
{"f_5761chicken.scm",(void*)f_5761},
{"f_5757chicken.scm",(void*)f_5757},
{"f_5734chicken.scm",(void*)f_5734},
{"f_845chicken.scm",(void*)f_845},
{"f_5696chicken.scm",(void*)f_5696},
{"f_5700chicken.scm",(void*)f_5700},
{"f_848chicken.scm",(void*)f_848},
{"f_5686chicken.scm",(void*)f_5686},
{"f_854chicken.scm",(void*)f_854},
{"f_863chicken.scm",(void*)f_863},
{"f_879chicken.scm",(void*)f_879},
{"f_866chicken.scm",(void*)f_866},
{"f_927chicken.scm",(void*)f_927},
{"f_5665chicken.scm",(void*)f_5665},
{"f_5669chicken.scm",(void*)f_5669},
{"f_930chicken.scm",(void*)f_930},
{"f_5651chicken.scm",(void*)f_5651},
{"f_933chicken.scm",(void*)f_933},
{"f_5535chicken.scm",(void*)f_5535},
{"f_5539chicken.scm",(void*)f_5539},
{"f_5548chicken.scm",(void*)f_5548},
{"f_5562chicken.scm",(void*)f_5562},
{"f_5626chicken.scm",(void*)f_5626},
{"f_5608chicken.scm",(void*)f_5608},
{"f_5591chicken.scm",(void*)f_5591},
{"f_936chicken.scm",(void*)f_936},
{"f_5289chicken.scm",(void*)f_5289},
{"f_5444chicken.scm",(void*)f_5444},
{"f_5515chicken.scm",(void*)f_5515},
{"f_5460chicken.scm",(void*)f_5460},
{"f_5458chicken.scm",(void*)f_5458},
{"f_5302chicken.scm",(void*)f_5302},
{"f_5428chicken.scm",(void*)f_5428},
{"f_5390chicken.scm",(void*)f_5390},
{"f_5351chicken.scm",(void*)f_5351},
{"f_5292chicken.scm",(void*)f_5292},
{"f_939chicken.scm",(void*)f_939},
{"f_5200chicken.scm",(void*)f_5200},
{"f_5210chicken.scm",(void*)f_5210},
{"f_5223chicken.scm",(void*)f_5223},
{"f_5239chicken.scm",(void*)f_5239},
{"f_5267chicken.scm",(void*)f_5267},
{"f_5221chicken.scm",(void*)f_5221},
{"f_942chicken.scm",(void*)f_942},
{"f_4914chicken.scm",(void*)f_4914},
{"f_5111chicken.scm",(void*)f_5111},
{"f_5114chicken.scm",(void*)f_5114},
{"f_5117chicken.scm",(void*)f_5117},
{"f_5190chicken.scm",(void*)f_5190},
{"f_5198chicken.scm",(void*)f_5198},
{"f_5133chicken.scm",(void*)f_5133},
{"f_5136chicken.scm",(void*)f_5136},
{"f_5139chicken.scm",(void*)f_5139},
{"f_5142chicken.scm",(void*)f_5142},
{"f_5180chicken.scm",(void*)f_5180},
{"f_5188chicken.scm",(void*)f_5188},
{"f_5145chicken.scm",(void*)f_5145},
{"f_4925chicken.scm",(void*)f_4925},
{"f_4929chicken.scm",(void*)f_4929},
{"f_4933chicken.scm",(void*)f_4933},
{"f_4935chicken.scm",(void*)f_4935},
{"f_4980chicken.scm",(void*)f_4980},
{"f_4992chicken.scm",(void*)f_4992},
{"f_4988chicken.scm",(void*)f_4988},
{"f_4956chicken.scm",(void*)f_4956},
{"f_5148chicken.scm",(void*)f_5148},
{"f_5008chicken.scm",(void*)f_5008},
{"f_5108chicken.scm",(void*)f_5108},
{"f_5072chicken.scm",(void*)f_5072},
{"f_5042chicken.scm",(void*)f_5042},
{"f_5151chicken.scm",(void*)f_5151},
{"f_5118chicken.scm",(void*)f_5118},
{"f_5130chicken.scm",(void*)f_5130},
{"f_5126chicken.scm",(void*)f_5126},
{"f_945chicken.scm",(void*)f_945},
{"f_4857chicken.scm",(void*)f_4857},
{"f_4861chicken.scm",(void*)f_4861},
{"f_948chicken.scm",(void*)f_948},
{"f_4704chicken.scm",(void*)f_4704},
{"f_4708chicken.scm",(void*)f_4708},
{"f_4711chicken.scm",(void*)f_4711},
{"f_4714chicken.scm",(void*)f_4714},
{"f_4727chicken.scm",(void*)f_4727},
{"f_4777chicken.scm",(void*)f_4777},
{"f_4788chicken.scm",(void*)f_4788},
{"f_4725chicken.scm",(void*)f_4725},
{"f_951chicken.scm",(void*)f_951},
{"f_4428chicken.scm",(void*)f_4428},
{"f_4462chicken.scm",(void*)f_4462},
{"f_4465chicken.scm",(void*)f_4465},
{"f_4691chicken.scm",(void*)f_4691},
{"f_4701chicken.scm",(void*)f_4701},
{"f_4689chicken.scm",(void*)f_4689},
{"f_4468chicken.scm",(void*)f_4468},
{"f_4437chicken.scm",(void*)f_4437},
{"f_4451chicken.scm",(void*)f_4451},
{"f_4455chicken.scm",(void*)f_4455},
{"f_4471chicken.scm",(void*)f_4471},
{"f_4474chicken.scm",(void*)f_4474},
{"f_4477chicken.scm",(void*)f_4477},
{"f_4484chicken.scm",(void*)f_4484},
{"f_4498chicken.scm",(void*)f_4498},
{"f_4508chicken.scm",(void*)f_4508},
{"f_4512chicken.scm",(void*)f_4512},
{"f_4522chicken.scm",(void*)f_4522},
{"f_4538chicken.scm",(void*)f_4538},
{"f_4557chicken.scm",(void*)f_4557},
{"f_4613chicken.scm",(void*)f_4613},
{"f_4624chicken.scm",(void*)f_4624},
{"f_4542chicken.scm",(void*)f_4542},
{"f_4555chicken.scm",(void*)f_4555},
{"f_4528chicken.scm",(void*)f_4528},
{"f_4536chicken.scm",(void*)f_4536},
{"f_4526chicken.scm",(void*)f_4526},
{"f_4496chicken.scm",(void*)f_4496},
{"f_954chicken.scm",(void*)f_954},
{"f_4371chicken.scm",(void*)f_4371},
{"f_4411chicken.scm",(void*)f_4411},
{"f_4381chicken.scm",(void*)f_4381},
{"f_957chicken.scm",(void*)f_957},
{"f_4295chicken.scm",(void*)f_4295},
{"f_4299chicken.scm",(void*)f_4299},
{"f_4302chicken.scm",(void*)f_4302},
{"f_960chicken.scm",(void*)f_960},
{"f_4111chicken.scm",(void*)f_4111},
{"f_4115chicken.scm",(void*)f_4115},
{"f_4118chicken.scm",(void*)f_4118},
{"f_4261chicken.scm",(void*)f_4261},
{"f_4257chicken.scm",(void*)f_4257},
{"f_4120chicken.scm",(void*)f_4120},
{"f_4208chicken.scm",(void*)f_4208},
{"f_4206chicken.scm",(void*)f_4206},
{"f_4176chicken.scm",(void*)f_4176},
{"f_4143chicken.scm",(void*)f_4143},
{"f_963chicken.scm",(void*)f_963},
{"f_3921chicken.scm",(void*)f_3921},
{"f_3928chicken.scm",(void*)f_3928},
{"f_4102chicken.scm",(void*)f_4102},
{"f_4100chicken.scm",(void*)f_4100},
{"f_3953chicken.scm",(void*)f_3953},
{"f_3979chicken.scm",(void*)f_3979},
{"f_4007chicken.scm",(void*)f_4007},
{"f_3991chicken.scm",(void*)f_3991},
{"f_3951chicken.scm",(void*)f_3951},
{"f_966chicken.scm",(void*)f_966},
{"f_3912chicken.scm",(void*)f_3912},
{"f_3916chicken.scm",(void*)f_3916},
{"f_969chicken.scm",(void*)f_969},
{"f_3893chicken.scm",(void*)f_3893},
{"f_3897chicken.scm",(void*)f_3897},
{"f_3906chicken.scm",(void*)f_3906},
{"f_3904chicken.scm",(void*)f_3904},
{"f_972chicken.scm",(void*)f_972},
{"f_3874chicken.scm",(void*)f_3874},
{"f_3878chicken.scm",(void*)f_3878},
{"f_3887chicken.scm",(void*)f_3887},
{"f_3885chicken.scm",(void*)f_3885},
{"f_975chicken.scm",(void*)f_975},
{"f_3746chicken.scm",(void*)f_3746},
{"f_3752chicken.scm",(void*)f_3752},
{"f_3833chicken.scm",(void*)f_3833},
{"f_3762chicken.scm",(void*)f_3762},
{"f_3765chicken.scm",(void*)f_3765},
{"f_3771chicken.scm",(void*)f_3771},
{"f_3778chicken.scm",(void*)f_3778},
{"f_3794chicken.scm",(void*)f_3794},
{"f_978chicken.scm",(void*)f_978},
{"f_3603chicken.scm",(void*)f_3603},
{"f_3609chicken.scm",(void*)f_3609},
{"f_3721chicken.scm",(void*)f_3721},
{"f_3694chicken.scm",(void*)f_3694},
{"f_3619chicken.scm",(void*)f_3619},
{"f_3622chicken.scm",(void*)f_3622},
{"f_3628chicken.scm",(void*)f_3628},
{"f_3639chicken.scm",(void*)f_3639},
{"f_3655chicken.scm",(void*)f_3655},
{"f_981chicken.scm",(void*)f_981},
{"f_3544chicken.scm",(void*)f_3544},
{"f_984chicken.scm",(void*)f_984},
{"f_3373chicken.scm",(void*)f_3373},
{"f_3379chicken.scm",(void*)f_3379},
{"f_3453chicken.scm",(void*)f_3453},
{"f_3456chicken.scm",(void*)f_3456},
{"f_3529chicken.scm",(void*)f_3529},
{"f_3522chicken.scm",(void*)f_3522},
{"f_3514chicken.scm",(void*)f_3514},
{"f_3501chicken.scm",(void*)f_3501},
{"f_3480chicken.scm",(void*)f_3480},
{"f_3389chicken.scm",(void*)f_3389},
{"f_987chicken.scm",(void*)f_987},
{"f_3322chicken.scm",(void*)f_3322},
{"f_990chicken.scm",(void*)f_990},
{"f_3262chicken.scm",(void*)f_3262},
{"f_3272chicken.scm",(void*)f_3272},
{"f_3291chicken.scm",(void*)f_3291},
{"f_3275chicken.scm",(void*)f_3275},
{"f_993chicken.scm",(void*)f_993},
{"f_996chicken.scm",(void*)f_996},
{"f_3225chicken.scm",(void*)f_3225},
{"f_3229chicken.scm",(void*)f_3229},
{"f_999chicken.scm",(void*)f_999},
{"f_3206chicken.scm",(void*)f_3206},
{"f_3210chicken.scm",(void*)f_3210},
{"f_3219chicken.scm",(void*)f_3219},
{"f_3217chicken.scm",(void*)f_3217},
{"f_1002chicken.scm",(void*)f_1002},
{"f_3187chicken.scm",(void*)f_3187},
{"f_3191chicken.scm",(void*)f_3191},
{"f_3200chicken.scm",(void*)f_3200},
{"f_3198chicken.scm",(void*)f_3198},
{"f_1005chicken.scm",(void*)f_1005},
{"f_3168chicken.scm",(void*)f_3168},
{"f_3172chicken.scm",(void*)f_3172},
{"f_3181chicken.scm",(void*)f_3181},
{"f_3179chicken.scm",(void*)f_3179},
{"f_1008chicken.scm",(void*)f_1008},
{"f_3149chicken.scm",(void*)f_3149},
{"f_3153chicken.scm",(void*)f_3153},
{"f_3162chicken.scm",(void*)f_3162},
{"f_3160chicken.scm",(void*)f_3160},
{"f_1011chicken.scm",(void*)f_1011},
{"f_3130chicken.scm",(void*)f_3130},
{"f_3134chicken.scm",(void*)f_3134},
{"f_3143chicken.scm",(void*)f_3143},
{"f_3141chicken.scm",(void*)f_3141},
{"f_1014chicken.scm",(void*)f_1014},
{"f_3111chicken.scm",(void*)f_3111},
{"f_3115chicken.scm",(void*)f_3115},
{"f_3124chicken.scm",(void*)f_3124},
{"f_3122chicken.scm",(void*)f_3122},
{"f_1017chicken.scm",(void*)f_1017},
{"f_3011chicken.scm",(void*)f_3011},
{"f_3015chicken.scm",(void*)f_3015},
{"f_3070chicken.scm",(void*)f_3070},
{"f_3024chicken.scm",(void*)f_3024},
{"f_1020chicken.scm",(void*)f_1020},
{"f_2791chicken.scm",(void*)f_2791},
{"f_2795chicken.scm",(void*)f_2795},
{"f_2798chicken.scm",(void*)f_2798},
{"f_2879chicken.scm",(void*)f_2879},
{"f_2946chicken.scm",(void*)f_2946},
{"f_2944chicken.scm",(void*)f_2944},
{"f_2936chicken.scm",(void*)f_2936},
{"f_2924chicken.scm",(void*)f_2924},
{"f_2804chicken.scm",(void*)f_2804},
{"f_2830chicken.scm",(void*)f_2830},
{"f_1023chicken.scm",(void*)f_1023},
{"f_2716chicken.scm",(void*)f_2716},
{"f_2720chicken.scm",(void*)f_2720},
{"f_2789chicken.scm",(void*)f_2789},
{"f_2743chicken.scm",(void*)f_2743},
{"f_1026chicken.scm",(void*)f_1026},
{"f_2610chicken.scm",(void*)f_2610},
{"f_2710chicken.scm",(void*)f_2710},
{"f_2614chicken.scm",(void*)f_2614},
{"f_2686chicken.scm",(void*)f_2686},
{"f_2621chicken.scm",(void*)f_2621},
{"f_2627chicken.scm",(void*)f_2627},
{"f_2625chicken.scm",(void*)f_2625},
{"f_1029chicken.scm",(void*)f_1029},
{"f_2581chicken.scm",(void*)f_2581},
{"f_2585chicken.scm",(void*)f_2585},
{"f_2608chicken.scm",(void*)f_2608},
{"f_2604chicken.scm",(void*)f_2604},
{"f_1032chicken.scm",(void*)f_1032},
{"f_2568chicken.scm",(void*)f_2568},
{"f_2572chicken.scm",(void*)f_2572},
{"f_1035chicken.scm",(void*)f_1035},
{"f_1774chicken.scm",(void*)f_1774},
{"f_1778chicken.scm",(void*)f_1778},
{"f_1784chicken.scm",(void*)f_1784},
{"f_1787chicken.scm",(void*)f_1787},
{"f_1790chicken.scm",(void*)f_1790},
{"f_1793chicken.scm",(void*)f_1793},
{"f_2460chicken.scm",(void*)f_2460},
{"f_2539chicken.scm",(void*)f_2539},
{"f_2535chicken.scm",(void*)f_2535},
{"f_2470chicken.scm",(void*)f_2470},
{"f_2474chicken.scm",(void*)f_2474},
{"f_2515chicken.scm",(void*)f_2515},
{"f_2505chicken.scm",(void*)f_2505},
{"f_2495chicken.scm",(void*)f_2495},
{"f_2491chicken.scm",(void*)f_2491},
{"f_2477chicken.scm",(void*)f_2477},
{"f_1881chicken.scm",(void*)f_1881},
{"f_1884chicken.scm",(void*)f_1884},
{"f_2454chicken.scm",(void*)f_2454},
{"f_2383chicken.scm",(void*)f_2383},
{"f_2389chicken.scm",(void*)f_2389},
{"f_2443chicken.scm",(void*)f_2443},
{"f_2435chicken.scm",(void*)f_2435},
{"f_2418chicken.scm",(void*)f_2418},
{"f_2406chicken.scm",(void*)f_2406},
{"f_2387chicken.scm",(void*)f_2387},
{"f_2371chicken.scm",(void*)f_2371},
{"f_2367chicken.scm",(void*)f_2367},
{"f_1895chicken.scm",(void*)f_1895},
{"f_2349chicken.scm",(void*)f_2349},
{"f_1903chicken.scm",(void*)f_1903},
{"f_1911chicken.scm",(void*)f_1911},
{"f_1917chicken.scm",(void*)f_1917},
{"f_2194chicken.scm",(void*)f_2194},
{"f_2306chicken.scm",(void*)f_2306},
{"f_2302chicken.scm",(void*)f_2302},
{"f_2271chicken.scm",(void*)f_2271},
{"f_2294chicken.scm",(void*)f_2294},
{"f_2283chicken.scm",(void*)f_2283},
{"f_2212chicken.scm",(void*)f_2212},
{"f_2257chicken.scm",(void*)f_2257},
{"f_2253chicken.scm",(void*)f_2253},
{"f_2229chicken.scm",(void*)f_2229},
{"f_2241chicken.scm",(void*)f_2241},
{"f_2209chicken.scm",(void*)f_2209},
{"f_1939chicken.scm",(void*)f_1939},
{"f_2179chicken.scm",(void*)f_2179},
{"f_2175chicken.scm",(void*)f_2175},
{"f_2080chicken.scm",(void*)f_2080},
{"f_2163chicken.scm",(void*)f_2163},
{"f_2152chicken.scm",(void*)f_2152},
{"f_1957chicken.scm",(void*)f_1957},
{"f_2066chicken.scm",(void*)f_2066},
{"f_2062chicken.scm",(void*)f_2062},
{"f_1974chicken.scm",(void*)f_1974},
{"f_2046chicken.scm",(void*)f_2046},
{"f_1954chicken.scm",(void*)f_1954},
{"f_1915chicken.scm",(void*)f_1915},
{"f_1907chicken.scm",(void*)f_1907},
{"f_1899chicken.scm",(void*)f_1899},
{"f_1891chicken.scm",(void*)f_1891},
{"f_1838chicken.scm",(void*)f_1838},
{"f_1854chicken.scm",(void*)f_1854},
{"f_1795chicken.scm",(void*)f_1795},
{"f_1038chicken.scm",(void*)f_1038},
{"f_1760chicken.scm",(void*)f_1760},
{"f_1041chicken.scm",(void*)f_1041},
{"f_1494chicken.scm",(void*)f_1494},
{"f_1498chicken.scm",(void*)f_1498},
{"f_1740chicken.scm",(void*)f_1740},
{"f_1501chicken.scm",(void*)f_1501},
{"f_1727chicken.scm",(void*)f_1727},
{"f_1504chicken.scm",(void*)f_1504},
{"f_1507chicken.scm",(void*)f_1507},
{"f_1715chicken.scm",(void*)f_1715},
{"f_1510chicken.scm",(void*)f_1510},
{"f_1713chicken.scm",(void*)f_1713},
{"f_1513chicken.scm",(void*)f_1513},
{"f_1709chicken.scm",(void*)f_1709},
{"f_1516chicken.scm",(void*)f_1516},
{"f_1697chicken.scm",(void*)f_1697},
{"f_1705chicken.scm",(void*)f_1705},
{"f_1527chicken.scm",(void*)f_1527},
{"f_1659chicken.scm",(void*)f_1659},
{"f_1641chicken.scm",(void*)f_1641},
{"f_1637chicken.scm",(void*)f_1637},
{"f_1573chicken.scm",(void*)f_1573},
{"f_1559chicken.scm",(void*)f_1559},
{"f_1555chicken.scm",(void*)f_1555},
{"f_1523chicken.scm",(void*)f_1523},
{"f_1044chicken.scm",(void*)f_1044},
{"f_1460chicken.scm",(void*)f_1460},
{"f_1047chicken.scm",(void*)f_1047},
{"f_1447chicken.scm",(void*)f_1447},
{"f_1458chicken.scm",(void*)f_1458},
{"f_1451chicken.scm",(void*)f_1451},
{"f_1050chicken.scm",(void*)f_1050},
{"f_1434chicken.scm",(void*)f_1434},
{"f_1445chicken.scm",(void*)f_1445},
{"f_1438chicken.scm",(void*)f_1438},
{"f_1053chicken.scm",(void*)f_1053},
{"f_1421chicken.scm",(void*)f_1421},
{"f_1432chicken.scm",(void*)f_1432},
{"f_1425chicken.scm",(void*)f_1425},
{"f_1056chicken.scm",(void*)f_1056},
{"f_1419chicken.scm",(void*)f_1419},
{"f_1412chicken.scm",(void*)f_1412},
{"f_1408chicken.scm",(void*)f_1408},
{"f_1400chicken.scm",(void*)f_1400},
{"f_1398chicken.scm",(void*)f_1398},
{"f_1060chicken.scm",(void*)f_1060},
{"f_1189chicken.scm",(void*)f_1189},
{"f_1201chicken.scm",(void*)f_1201},
{"f_1384chicken.scm",(void*)f_1384},
{"f_1377chicken.scm",(void*)f_1377},
{"f_1340chicken.scm",(void*)f_1340},
{"f_1286chicken.scm",(void*)f_1286},
{"f_1303chicken.scm",(void*)f_1303},
{"f_1289chicken.scm",(void*)f_1289},
{"f_1223chicken.scm",(void*)f_1223},
{"f_1266chicken.scm",(void*)f_1266},
{"f_1246chicken.scm",(void*)f_1246},
{"f_1226chicken.scm",(void*)f_1226},
{"f_1193chicken.scm",(void*)f_1193},
{"f_1196chicken.scm",(void*)f_1196},
{"f_1177chicken.scm",(void*)f_1177},
{"f_1184chicken.scm",(void*)f_1184},
{"f_1169chicken.scm",(void*)f_1169},
{"f_1175chicken.scm",(void*)f_1175},
{"f_1172chicken.scm",(void*)f_1172},
{"f_1062chicken.scm",(void*)f_1062},
{"f_1068chicken.scm",(void*)f_1068},
{"f_1103chicken.scm",(void*)f_1103},
{"f_1129chicken.scm",(void*)f_1129},
{"f_1125chicken.scm",(void*)f_1125},
{"f_1082chicken.scm",(void*)f_1082},
{"f_760chicken.scm",(void*)f_760},
{"f_764chicken.scm",(void*)f_764},
{"f_801chicken.scm",(void*)f_801},
{"f_822chicken.scm",(void*)f_822},
{"f_820chicken.scm",(void*)f_820},
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
