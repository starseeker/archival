/* Generated from csc.scm by the CHICKEN compiler
   http://www.call-with-current-continuation.org
   2007-02-26 08:18
   Version 2.6rc1 - linux-unix-gnu-x86 - [ libffi dload ptables applyhook ]
   command line: csc.scm -output-file csc.c -quiet -no-trace -optimize-level 2 -include-path .
   used units: library eval extras extras srfi_1 srfi_13 regex utils
*/

#include "chicken.h"


#include "chicken-defaults.h"

#ifndef C_TARGET_CC
# define C_TARGET_CC  C_INSTALL_CC
#endif

#ifndef C_TARGET_CXX
# define C_TARGET_CXX  C_INSTALL_CXX
#endif

#ifndef C_TARGET_CFLAGS
# define C_TARGET_CFLAGS  C_INSTALL_CFLAGS
#endif

#ifndef C_TARGET_BIN_HOME
# define C_TARGET_BIN_HOME  C_INSTALL_BIN_HOME
#endif

#ifndef C_TARGET_LIB_HOME
# define C_TARGET_LIB_HOME  C_INSTALL_LIB_HOME
#endif

#ifndef C_TARGET_STATIC_LIB_HOME
# define C_TARGET_STATIC_LIB_HOME  C_INSTALL_STATIC_LIB_HOME
#endif

#ifndef C_TARGET_INCLUDE_HOME
# define C_TARGET_INCLUDE_HOME  C_INSTALL_INCLUDE_HOME
#endif

#ifndef C_TARGET_SHARE_HOME
# define C_TARGET_SHARE_HOME  C_INSTALL_SHARE_HOME
#endif


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
C_noret_decl(C_srfi_13_toplevel)
C_externimport void C_ccall C_srfi_13_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_regex_toplevel)
C_externimport void C_ccall C_regex_toplevel(C_word c,C_word d,C_word k) C_noret;
C_noret_decl(C_utils_toplevel)
C_externimport void C_ccall C_utils_toplevel(C_word c,C_word d,C_word k) C_noret;

static C_TLS C_word lf[441];


C_noret_decl(C_toplevel)
C_externexport void C_ccall C_toplevel(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_404)
static void C_ccall f_404(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_407)
static void C_ccall f_407(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_410)
static void C_ccall f_410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_413)
static void C_ccall f_413(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_416)
static void C_ccall f_416(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_419)
static void C_ccall f_419(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_422)
static void C_ccall f_422(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_425)
static void C_ccall f_425(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3457)
static void C_ccall f_3457(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3453)
static void C_ccall f_3453(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3449)
static void C_ccall f_3449(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3445)
static void C_ccall f_3445(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3441)
static void C_ccall f_3441(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3437)
static void C_ccall f_3437(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_445)
static void C_fcall f_445(C_word t0,C_word t1) C_noret;
C_noret_decl(f_462)
static void C_ccall f_462(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_470)
static void C_ccall f_470(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_491)
static void C_ccall f_491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3418)
static void C_ccall f_3418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3414)
static void C_ccall f_3414(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_494)
static void C_ccall f_494(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3389)
static void C_ccall f_3389(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3385)
static void C_ccall f_3385(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3381)
static void C_ccall f_3381(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3374)
static void C_ccall f_3374(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_516)
static void C_ccall f_516(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3358)
static void C_ccall f_3358(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3299)
static void C_ccall f_3299(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3348)
static void C_ccall f_3348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3303)
static void C_ccall f_3303(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3338)
static void C_ccall f_3338(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3307)
static void C_ccall f_3307(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3328)
static void C_ccall f_3328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3311)
static void C_ccall f_3311(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_519)
static void C_fcall f_519(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3278)
static void C_ccall f_3278(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3271)
static void C_ccall f_3271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3266)
static void C_ccall f_3266(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_3256)
static void C_ccall f_3256(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_523)
static void C_fcall f_523(C_word t0,C_word t1) C_noret;
C_noret_decl(f_3182)
static void C_ccall f_3182(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3186)
static void C_ccall f_3186(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3236)
static void C_ccall f_3236(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3232)
static void C_ccall f_3232(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3228)
static void C_ccall f_3228(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3224)
static void C_ccall f_3224(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3214)
static void C_ccall f_3214(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3210)
static void C_ccall f_3210(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3206)
static void C_ccall f_3206(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3202)
static void C_ccall f_3202(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3002)
static void C_ccall f_3002(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3006)
static void C_ccall f_3006(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3010)
static void C_ccall f_3010(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3014)
static void C_ccall f_3014(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3018)
static void C_ccall f_3018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3022)
static void C_ccall f_3022(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3172)
static void C_ccall f_3172(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3168)
static void C_ccall f_3168(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3164)
static void C_ccall f_3164(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3160)
static void C_ccall f_3160(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3150)
static void C_ccall f_3150(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3146)
static void C_ccall f_3146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3142)
static void C_ccall f_3142(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3138)
static void C_ccall f_3138(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3128)
static void C_ccall f_3128(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3124)
static void C_ccall f_3124(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3120)
static void C_ccall f_3120(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3116)
static void C_ccall f_3116(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3106)
static void C_ccall f_3106(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3102)
static void C_ccall f_3102(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3098)
static void C_ccall f_3098(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3094)
static void C_ccall f_3094(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3084)
static void C_ccall f_3084(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3080)
static void C_ccall f_3080(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3076)
static void C_ccall f_3076(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3072)
static void C_ccall f_3072(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3062)
static void C_ccall f_3062(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3058)
static void C_ccall f_3058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3054)
static void C_ccall f_3054(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_3050)
static void C_ccall f_3050(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_547)
static void C_fcall f_547(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2984)
static void C_ccall f_2984(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_554)
static void C_ccall f_554(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2939)
static void C_ccall f_2939(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2950)
static void C_ccall f_2950(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2961)
static void C_ccall f_2961(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2946)
static void C_ccall f_2946(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_561)
static void C_ccall f_561(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2913)
static void C_ccall f_2913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2909)
static void C_ccall f_2909(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2898)
static void C_ccall f_2898(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2905)
static void C_ccall f_2905(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2889)
static void C_ccall f_2889(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2885)
static void C_ccall f_2885(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2881)
static void C_ccall f_2881(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2877)
static void C_ccall f_2877(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_572)
static void C_fcall f_572(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2861)
static void C_ccall f_2861(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2857)
static void C_ccall f_2857(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2853)
static void C_ccall f_2853(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_678)
static void C_fcall f_678(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_852)
static void C_ccall f_852(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1304)
static void C_fcall f_1304(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1530)
static void C_fcall f_1530(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1533)
static void C_fcall f_1533(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1536)
static void C_fcall f_1536(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1913)
static void C_ccall f_1913(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1587)
static void C_fcall f_1587(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1596)
static void C_fcall f_1596(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1792)
static void C_ccall f_1792(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1876)
static void C_ccall f_1876(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1882)
static void C_ccall f_1882(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1803)
static void C_ccall f_1803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_1833)
static void C_fcall f_1833(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1797)
static void C_ccall f_1797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1762)
static void C_ccall f_1762(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1693)
static void C_fcall f_1693(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1745)
static void C_ccall f_1745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1741)
static void C_ccall f_1741(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1726)
static void C_ccall f_1726(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1724)
static void C_ccall f_1724(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1720)
static void C_ccall f_1720(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1697)
static void C_ccall f_1697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1683)
static void C_ccall f_1683(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1670)
static void C_ccall f_1670(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1653)
static void C_ccall f_1653(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1639)
static void C_ccall f_1639(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1625)
static void C_ccall f_1625(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1621)
static void C_ccall f_1621(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1617)
static void C_ccall f_1617(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1609)
static void C_ccall f_1609(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1568)
static void C_ccall f_1568(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1574)
static void C_ccall f_1574(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1577)
static void C_ccall f_1577(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1491)
static void C_ccall f_1491(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1521)
static void C_ccall f_1521(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1513)
static void C_ccall f_1513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1501)
static void C_ccall f_1501(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1480)
static void C_ccall f_1480(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1455)
static void C_ccall f_1455(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1467)
static void C_ccall f_1467(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1459)
static void C_ccall f_1459(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1446)
static void C_ccall f_1446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1417)
static void C_ccall f_1417(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1429)
static void C_ccall f_1429(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1421)
static void C_ccall f_1421(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1396)
static void C_ccall f_1396(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1400)
static void C_ccall f_1400(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1379)
static void C_ccall f_1379(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1362)
static void C_ccall f_1362(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1345)
static void C_ccall f_1345(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1328)
static void C_ccall f_1328(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1287)
static void C_ccall f_1287(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1277)
static void C_ccall f_1277(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1267)
static void C_ccall f_1267(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1257)
static void C_ccall f_1257(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1247)
static void C_ccall f_1247(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1237)
static void C_ccall f_1237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1216)
static void C_ccall f_1216(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1192)
static void C_ccall f_1192(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1203)
static void C_ccall f_1203(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1195)
static void C_fcall f_1195(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1179)
static void C_ccall f_1179(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1139)
static void C_ccall f_1139(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1143)
static void C_ccall f_1143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1146)
static void C_ccall f_1146(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1058)
static void C_ccall f_1058(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1001)
static void C_ccall f_1001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_989)
static void C_ccall f_989(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_977)
static void C_ccall f_977(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_944)
static void C_ccall f_944(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_933)
static void C_ccall f_933(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_902)
static void C_ccall f_902(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_895)
static void C_ccall f_895(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_886)
static void C_ccall f_886(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_879)
static void C_ccall f_879(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_867)
static void C_ccall f_867(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_855)
static void C_ccall f_855(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_843)
static void C_ccall f_843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_810)
static void C_ccall f_810(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_836)
static void C_ccall f_836(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_813)
static void C_ccall f_813(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_829)
static void C_ccall f_829(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_816)
static void C_ccall f_816(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_819)
static void C_ccall f_819(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_688)
static void C_ccall f_688(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_773)
static void C_fcall f_773(C_word t0,C_word t1) C_noret;
C_noret_decl(f_797)
static void C_ccall f_797(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_790)
static void C_ccall f_790(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_783)
static void C_ccall f_783(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_776)
static void C_fcall f_776(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2250)
static void C_ccall f_2250(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1991)
static void C_ccall f_1991(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_1995)
static void C_ccall f_1995(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2234)
static void C_ccall f_2234(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2237)
static void C_ccall f_2237(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2228)
static void C_fcall f_2228(C_word t0,C_word t1) C_noret;
C_noret_decl(f_1998)
static void C_ccall f_1998(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2001)
static void C_ccall f_2001(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2192)
static void C_fcall f_2192(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2197)
static void C_ccall f_2197(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2181)
static void C_ccall f_2181(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2189)
static void C_ccall f_2189(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2185)
static void C_ccall f_2185(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2173)
static void C_ccall f_2173(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2169)
static void C_ccall f_2169(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2165)
static void C_ccall f_2165(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2161)
static void C_ccall f_2161(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2004)
static void C_ccall f_2004(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2008)
static void C_ccall f_2008(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2012)
static void C_ccall f_2012(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2018)
static void C_ccall f_2018(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2026)
static void C_ccall f_2026(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2030)
static void C_ccall f_2030(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2143)
static void C_ccall f_2143(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2035)
static void C_ccall f_2035(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2104)
static void C_fcall f_2104(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2111)
static void C_ccall f_2111(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2091)
static void C_ccall f_2091(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2037)
static void C_fcall f_2037(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2021)
static void C_ccall f_2021(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_1983)
static void C_ccall f_1983(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_735)
static void C_ccall f_735(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_738)
static void C_ccall f_738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_745)
static void C_ccall f_745(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_691)
static void C_ccall f_691(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2321)
static void C_ccall f_2321(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2264)
static void C_ccall f_2264(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2268)
static void C_ccall f_2268(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2305)
static void C_ccall f_2305(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2317)
static void C_ccall f_2317(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2309)
static void C_ccall f_2309(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2313)
static void C_ccall f_2313(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2293)
static void C_ccall f_2293(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2289)
static void C_ccall f_2289(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2271)
static void C_ccall f_2271(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2256)
static void C_ccall f_2256(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_697)
static void C_ccall f_697(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_712)
static void C_ccall f_712(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_729)
static void C_ccall f_729(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_725)
static void C_ccall f_725(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_703)
static void C_ccall f_703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2446)
static void C_ccall f_2446(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2471)
static void C_ccall f_2471(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2471)
static void C_ccall f_2471r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2465)
static void C_ccall f_2465(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2450)
static void C_ccall f_2450(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2442)
static void C_ccall f_2442(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2348)
static void C_ccall f_2348(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2438)
static void C_ccall f_2438(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2426)
static void C_ccall f_2426(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2430)
static void C_ccall f_2430(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2434)
static void C_ccall f_2434(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2418)
static void C_ccall f_2418(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2410)
static void C_ccall f_2410(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2406)
static void C_ccall f_2406(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2402)
static void C_ccall f_2402(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2351)
static void C_ccall f_2351(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2363)
static void C_fcall f_2363(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2377)
static void C_ccall f_2377(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2366)
static void C_ccall f_2366(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2373)
static void C_ccall f_2373(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2354)
static void C_ccall f_2354(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_641)
static void C_fcall f_641(C_word t0,C_word t1) C_noret;
C_noret_decl(f_646)
static void C_ccall f_646(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_662)
static void C_ccall f_662(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_666)
static void C_ccall f_666(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_654)
static void C_ccall f_654(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_658)
static void C_ccall f_658(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_649)
static void C_fcall f_649(C_word t0,C_word t1) C_noret;
C_noret_decl(f_602)
static void C_fcall f_602(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_620)
static void C_ccall f_620(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_595)
static void C_fcall f_595(C_word t0,C_word t1) C_noret;
C_noret_decl(f_600)
static void C_ccall f_600(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2843)
static void C_ccall f_2843(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2849)
static void C_ccall f_2849(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2846)
static void C_ccall f_2846(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2821)
static void C_ccall f_2821(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2825)
static void C_ccall f_2825(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2796)
static void C_ccall f_2796(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2800)
static void C_ccall f_2800(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2804)
static void C_ccall f_2804(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2807)
static void C_ccall f_2807(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2696)
static void C_ccall f_2696(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2722)
static void C_ccall f_2722(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2708)
static void C_ccall f_2708(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2703)
static void C_ccall f_2703(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2746)
static void C_ccall f_2746(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2748)
static void C_fcall f_2748(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_2778)
static void C_fcall f_2778(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2785)
static void C_ccall f_2785(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2771)
static void C_ccall f_2771(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2742)
static void C_ccall f_2742(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2728)
static void C_ccall f_2728(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2738)
static void C_ccall f_2738(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2620)
static void C_fcall f_2620(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2624)
static void C_ccall f_2624(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2670)
static void C_ccall f_2670r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2664)
static void C_ccall f_2664(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2635)
static void C_ccall f_2635(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2631)
static void C_ccall f_2631(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2574)
static void C_fcall f_2574(C_word t0) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614(C_word c,C_word t0,C_word t1,...) C_noret;
C_noret_decl(f_2614)
static void C_ccall f_2614r(C_word t0,C_word t1,C_word t3) C_noret;
C_noret_decl(f_2608)
static void C_ccall f_2608(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2606)
static void C_ccall f_2606(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2602)
static void C_ccall f_2602(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2582)
static void C_ccall f_2582(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2477)
static void C_fcall f_2477(C_word t0) C_noret;
C_noret_decl(f_2481)
static void C_ccall f_2481(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2487)
static void C_fcall f_2487(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2492)
static void C_fcall f_2492(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4) C_noret;
C_noret_decl(f_2513)
static void C_ccall f_2513(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2551)
static void C_ccall f_2551(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2533)
static void C_fcall f_2533(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2537)
static void C_fcall f_2537(C_word t0,C_word t1) C_noret;
C_noret_decl(f_2506)
static void C_ccall f_2506(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2510)
static void C_ccall f_2510(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2323)
static void C_fcall f_2323(C_word t0) C_noret;
C_noret_decl(f_2335)
static void C_ccall f_2335(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_2331)
static void C_ccall f_2331(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_502)
static void C_fcall f_502(C_word t0,C_word t1) C_noret;
C_noret_decl(f_509)
static void C_ccall f_509(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_496)
static void C_ccall f_496(C_word c,C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_476)
static void C_fcall f_476(C_word t0,C_word t1,C_word t2,C_word t3) C_noret;
C_noret_decl(f_447)
static void C_fcall f_447(C_word t0,C_word t1,C_word t2) C_noret;
C_noret_decl(f_458)
static void C_ccall f_458(C_word c,C_word t0,C_word t1) C_noret;
C_noret_decl(f_451)
static void C_ccall f_451(C_word c,C_word t0,C_word t1) C_noret;

C_noret_decl(trf_445)
static void C_fcall trf_445(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_445(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_445(t0,t1);}

C_noret_decl(trf_519)
static void C_fcall trf_519(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_519(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_519(t0,t1);}

C_noret_decl(trf_523)
static void C_fcall trf_523(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_523(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_523(t0,t1);}

C_noret_decl(trf_547)
static void C_fcall trf_547(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_547(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_547(t0,t1);}

C_noret_decl(trf_572)
static void C_fcall trf_572(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_572(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_572(t0,t1);}

C_noret_decl(trf_678)
static void C_fcall trf_678(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_678(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_678(t0,t1,t2);}

C_noret_decl(trf_1304)
static void C_fcall trf_1304(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1304(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1304(t0,t1);}

C_noret_decl(trf_1530)
static void C_fcall trf_1530(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1530(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1530(t0,t1);}

C_noret_decl(trf_1533)
static void C_fcall trf_1533(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1533(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1533(t0,t1);}

C_noret_decl(trf_1536)
static void C_fcall trf_1536(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1536(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1536(t0,t1);}

C_noret_decl(trf_1587)
static void C_fcall trf_1587(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1587(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1587(t0,t1);}

C_noret_decl(trf_1596)
static void C_fcall trf_1596(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1596(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1596(t0,t1);}

C_noret_decl(trf_1833)
static void C_fcall trf_1833(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1833(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1833(t0,t1);}

C_noret_decl(trf_1693)
static void C_fcall trf_1693(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1693(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1693(t0,t1);}

C_noret_decl(trf_1195)
static void C_fcall trf_1195(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_1195(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_1195(t0,t1);}

C_noret_decl(trf_773)
static void C_fcall trf_773(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_773(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_773(t0,t1);}

C_noret_decl(trf_776)
static void C_fcall trf_776(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_776(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_776(t0,t1);}

C_noret_decl(trf_2228)
static void C_fcall trf_2228(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2228(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2228(t0,t1);}

C_noret_decl(trf_2192)
static void C_fcall trf_2192(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2192(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2192(t0,t1);}

C_noret_decl(trf_2104)
static void C_fcall trf_2104(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2104(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2104(t0,t1);}

C_noret_decl(trf_2037)
static void C_fcall trf_2037(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2037(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2037(t0,t1);}

C_noret_decl(trf_2363)
static void C_fcall trf_2363(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2363(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2363(t0,t1);}

C_noret_decl(trf_641)
static void C_fcall trf_641(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_641(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_641(t0,t1);}

C_noret_decl(trf_649)
static void C_fcall trf_649(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_649(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_649(t0,t1);}

C_noret_decl(trf_602)
static void C_fcall trf_602(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_602(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_602(t0,t1,t2,t3);}

C_noret_decl(trf_595)
static void C_fcall trf_595(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_595(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_595(t0,t1);}

C_noret_decl(trf_2748)
static void C_fcall trf_2748(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2748(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_2748(t0,t1,t2);}

C_noret_decl(trf_2778)
static void C_fcall trf_2778(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2778(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2778(t0,t1);}

C_noret_decl(trf_2620)
static void C_fcall trf_2620(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2620(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2620(t0,t1);}

C_noret_decl(trf_2574)
static void C_fcall trf_2574(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2574(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_2574(t0);}

C_noret_decl(trf_2477)
static void C_fcall trf_2477(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2477(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_2477(t0);}

C_noret_decl(trf_2487)
static void C_fcall trf_2487(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2487(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2487(t0,t1);}

C_noret_decl(trf_2492)
static void C_fcall trf_2492(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2492(void *dummy){
C_word t4=C_pick(0);
C_word t3=C_pick(1);
C_word t2=C_pick(2);
C_word t1=C_pick(3);
C_word t0=C_pick(4);
C_adjust_stack(-5);
f_2492(t0,t1,t2,t3,t4);}

C_noret_decl(trf_2533)
static void C_fcall trf_2533(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2533(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2533(t0,t1);}

C_noret_decl(trf_2537)
static void C_fcall trf_2537(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2537(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_2537(t0,t1);}

C_noret_decl(trf_2323)
static void C_fcall trf_2323(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_2323(void *dummy){
C_word t0=C_pick(0);
C_adjust_stack(-1);
f_2323(t0);}

C_noret_decl(trf_502)
static void C_fcall trf_502(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_502(void *dummy){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
f_502(t0,t1);}

C_noret_decl(trf_476)
static void C_fcall trf_476(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_476(void *dummy){
C_word t3=C_pick(0);
C_word t2=C_pick(1);
C_word t1=C_pick(2);
C_word t0=C_pick(3);
C_adjust_stack(-4);
f_476(t0,t1,t2,t3);}

C_noret_decl(trf_447)
static void C_fcall trf_447(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall trf_447(void *dummy){
C_word t2=C_pick(0);
C_word t1=C_pick(1);
C_word t0=C_pick(2);
C_adjust_stack(-3);
f_447(t0,t1,t2);}

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

C_noret_decl(tr2)
static void C_fcall tr2(C_proc2 k) C_regparm C_noret;
C_regparm static void C_fcall tr2(C_proc2 k){
C_word t1=C_pick(0);
C_word t0=C_pick(1);
C_adjust_stack(-2);
(k)(2,t0,t1);}

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
C_main_entry_point
C_noret_decl(toplevel_trampoline)
static void C_fcall toplevel_trampoline(void *dummy) C_regparm C_noret;
C_regparm static void C_fcall toplevel_trampoline(void *dummy){
C_toplevel(2,C_SCHEME_UNDEFINED,C_restore);}

void C_ccall C_toplevel(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
if(toplevel_initialized) C_kontinue(t1,C_SCHEME_UNDEFINED);
else C_toplevel_entry(C_text("toplevel"));
C_resize_stack(131072);
C_check_nursery_minimum(3);
if(!C_demand(3)){
C_save(t1);
C_reclaim((void*)toplevel_trampoline,NULL);}
toplevel_initialized=1;
if(!C_demand_2(2512)){
C_save(t1);
C_rereclaim2(2512*sizeof(C_word), 1);
t1=C_restore;}
a=C_alloc(3);
C_initialize_lf(lf,441);
lf[1]=C_static_string(C_heaptop,27,"too many optional arguments");
lf[2]=C_h_intern(&lf[2],4,"msvc");
lf[4]=C_h_intern(&lf[4],6,"cygwin");
lf[6]=C_h_intern(&lf[6],7,"mingw32");
lf[8]=C_h_intern(&lf[8],6,"macosx");
lf[12]=C_h_intern(&lf[12],4,"exit");
lf[13]=C_h_intern(&lf[13],7,"fprintf");
lf[14]=C_static_string(C_heaptop,9,"csc: ~\077~%");
lf[15]=C_h_intern(&lf[15],18,"current-error-port");
lf[16]=C_static_lambda_info(C_heaptop,17,"(quit msg0 args1)");
lf[20]=C_static_string(C_heaptop,5,"-host");
lf[23]=C_h_intern(&lf[23],13,"make-pathname");
lf[24]=C_static_lambda_info(C_heaptop,27,"(prefix str3 dir4 default5)");
lf[27]=C_static_lambda_info(C_heaptop,13,"(homize str8)");
lf[29]=C_h_intern(&lf[29],13,"string-append");
lf[30]=C_static_string(C_heaptop,1,"\042");
lf[31]=C_static_string(C_heaptop,1,"\042");
lf[32]=C_h_intern(&lf[32],10,"string-any");
lf[33]=C_h_intern(&lf[33],16,"char-whitespace\077");
lf[34]=C_static_lambda_info(C_heaptop,16,"(quotewrap str9)");
tmp=C_static_string(C_heaptop,6,"-quiet");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[54]=C_h_pair(C_restore,tmp);
tmp=C_static_string(C_heaptop,12,"/usr/include");
C_save(tmp);
tmp=C_static_string(C_heaptop,0,"");
C_save(tmp);
lf[55]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[58]=C_static_string(C_heaptop,2,"/c");
lf[59]=C_static_string(C_heaptop,2,"-c");
lf[79]=C_h_intern(&lf[79],18,"string-intersperse");
lf[80]=C_h_intern(&lf[80],7,"\003sysmap");
lf[83]=C_h_intern(&lf[83],6,"append");
lf[84]=C_static_lambda_info(C_heaptop,18,"(compiler-options)");
lf[86]=C_h_intern(&lf[86],7,"reverse");
lf[87]=C_h_intern(&lf[87],6,"static");
lf[88]=C_h_intern(&lf[88],14,"static-options");
lf[89]=C_h_intern(&lf[89],21,"extension-information");
lf[90]=C_static_lambda_info(C_heaptop,30,"(loop exts272 libs273 opts274)");
lf[91]=C_h_intern(&lf[91],15,"repository-path");
lf[92]=C_static_lambda_info(C_heaptop,23,"(static-extension-info)");
lf[94]=C_static_string(C_heaptop,8," -static");
lf[95]=C_static_string(C_heaptop,0,"");
lf[96]=C_static_lambda_info(C_heaptop,7,"(a2607)");
lf[97]=C_static_lambda_info(C_heaptop,17,"(a2613 . g279280)");
lf[98]=C_static_lambda_info(C_heaptop,16,"(linker-options)");
lf[104]=C_static_lambda_info(C_heaptop,7,"(a2663)");
lf[105]=C_static_lambda_info(C_heaptop,17,"(a2669 . g286287)");
lf[106]=C_h_intern(&lf[106],9,"\003syserror");
lf[107]=C_static_lambda_info(C_heaptop,26,"(linker-libraries g281282)");
tmp=C_make_character(92);
C_save(tmp);
tmp=C_make_character(35);
C_save(tmp);
lf[109]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[110]=C_static_string(C_heaptop,1,"\042");
lf[111]=C_static_string(C_heaptop,1,"\042");
lf[112]=C_h_intern(&lf[112],17,"string-translate*");
tmp=C_static_string(C_heaptop,1,"\042");
C_save(tmp);
tmp=C_static_string(C_heaptop,2,"\134\042");
tmp=C_h_pair(C_restore,tmp);
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[113]=C_h_pair(C_restore,tmp);
lf[114]=C_h_intern(&lf[114],12,"list->string");
lf[115]=C_h_intern(&lf[115],5,"cons*");
lf[116]=C_static_lambda_info(C_heaptop,11,"(fold s301)");
lf[117]=C_h_intern(&lf[117],12,"string->list");
lf[118]=C_static_lambda_info(C_heaptop,12,"(a2707 c294)");
lf[119]=C_h_intern(&lf[119],3,"any");
lf[120]=C_static_lambda_info(C_heaptop,19,"(quote-option x293)");
lf[123]=C_h_intern(&lf[123],6,"printf");
lf[124]=C_static_string(C_heaptop,54,"*** Shell command terminated with exit status ~S: ~A~%");
lf[125]=C_h_intern(&lf[125],6,"system");
lf[126]=C_h_intern(&lf[126],5,"print");
lf[127]=C_static_lambda_info(C_heaptop,16,"(system* str305)");
lf[129]=C_h_intern(&lf[129],11,"delete-file");
lf[130]=C_static_string(C_heaptop,4,"del ");
lf[131]=C_static_string(C_heaptop,3,"rm ");
lf[132]=C_static_lambda_info(C_heaptop,21,"(delete-file* str309)");
lf[133]=C_h_intern(&lf[133],25,"\003sysimplicit-exit-handler");
lf[134]=C_static_lambda_info(C_heaptop,16,"(t-options os72)");
lf[135]=C_static_string(C_heaptop,35,"not enough arguments to option `~A\047");
lf[136]=C_static_lambda_info(C_heaptop,19,"(check o73 r74 n75)");
lf[137]=C_static_string(C_heaptop,4,"/dll");
lf[138]=C_static_string(C_heaptop,5,"/DPIC");
lf[139]=C_static_string(C_heaptop,10,"/DC_SHARED");
lf[140]=C_static_string(C_heaptop,11,"-dynamiclib");
lf[141]=C_static_string(C_heaptop,7,"-bundle");
lf[142]=C_static_string(C_heaptop,7,"-shared");
lf[143]=C_static_string(C_heaptop,5,"-fPIC");
lf[144]=C_static_string(C_heaptop,5,"-fPIC");
lf[145]=C_static_string(C_heaptop,5,"-DPIC");
lf[146]=C_static_string(C_heaptop,10,"-DC_SHARED");
lf[147]=C_static_string(C_heaptop,8,"-feature");
lf[148]=C_static_string(C_heaptop,22,"chicken-compile-shared");
lf[149]=C_static_lambda_info(C_heaptop,20,"(shared-build lib79)");
lf[150]=C_h_intern(&lf[150],12,"\003sysfor-each");
lf[151]=C_h_intern(&lf[151],26,"pathname-replace-extension");
lf[152]=C_static_string(C_heaptop,3,"lib");
lf[153]=C_static_string(C_heaptop,3,"exp");
lf[158]=C_static_lambda_info(C_heaptop,7,"(a2464)");
lf[159]=C_static_lambda_info(C_heaptop,17,"(a2470 . g259260)");
lf[160]=C_h_intern(&lf[160],7,"sprintf");
lf[161]=C_static_string(C_heaptop,12,"mv ~A ~A.old");
lf[162]=C_static_string(C_heaptop,84,"Warning: output file will overwrite source file `~A\047 - renaming source to `~A.ol"
"d\047~%");
lf[167]=C_static_lambda_info(C_heaptop,12,"(a2263 f251)");
lf[170]=C_h_intern(&lf[170],4,"last");
lf[171]=C_static_string(C_heaptop,25,"no source files specified");
lf[172]=C_h_intern(&lf[172],5,"error");
lf[173]=C_static_string(C_heaptop,33,"invalid entry in csc control file");
lf[174]=C_static_lambda_info(C_heaptop,11,"(g237 x240)");
lf[175]=C_h_intern(&lf[175],12,"post-process");
lf[176]=C_h_intern(&lf[176],9,"c-options");
lf[177]=C_h_intern(&lf[177],12,"link-options");
lf[178]=C_static_lambda_info(C_heaptop,15,"(a2034 g222223)");
lf[179]=C_h_intern(&lf[179],9,"read-file");
lf[180]=C_h_intern(&lf[180],9,"read-line");
lf[181]=C_static_lambda_info(C_heaptop,7,"(a2025)");
lf[182]=C_h_intern(&lf[182],20,"with-input-from-file");
lf[183]=C_h_intern(&lf[183],12,"file-exists\077");
lf[184]=C_static_string(C_heaptop,1," ");
tmp=C_static_string(C_heaptop,10,"-to-stdout");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[185]=C_h_pair(C_restore,tmp);
lf[186]=C_static_string(C_heaptop,12,"-output-file");
lf[187]=C_h_intern(&lf[187],4,"conc");
lf[188]=C_static_string(C_heaptop,6,"-uses ");
lf[189]=C_static_lambda_info(C_heaptop,12,"(a2196 e221)");
lf[190]=C_static_string(C_heaptop,3,"cpp");
lf[191]=C_static_string(C_heaptop,1,"m");
lf[192]=C_static_string(C_heaptop,1,"c");
lf[193]=C_static_string(C_heaptop,5,"#%eof");
lf[194]=C_static_string(C_heaptop,3,"csc");
lf[195]=C_static_lambda_info(C_heaptop,12,"(a1990 f211)");
lf[196]=C_static_string(C_heaptop,8,"-dynamic");
lf[197]=C_h_intern(&lf[197],7,"newline");
lf[198]=C_h_intern(&lf[198],6,"print*");
lf[199]=C_h_intern(&lf[199],5,"-help");
lf[200]=C_h_intern(&lf[200],6,"--help");
lf[201]=C_h_intern(&lf[201],7,"display");
lf[202]=C_static_string(C_heaptop,7837,"Usage: csc FILENAME | OPTION ...\012\012  `csc\047 is a driver program for the CHICKEN co"
"mpiler. Any Scheme, C or object\012  files and all libraries given on the command l"
"ine are translated, compiled or\012  linked as needed.\012\012  General options:\012\012    -h "
" -help                   display this text and exit\012    -v                      "
"    show intermediate compilation stages\012    -v2  -verbose               display"
" information about translation progress\012    -v3                         display "
"information about all compilation stages\012    -V  -version                display"
" Scheme compiler version and exit\012    -release                    display releas"
"e number and exit\012\012  File and pathname options:\012\012    -o -output-file FILENAME   "
" specifies target executable name\012    -I -include-path PATHNAME   specifies alte"
"rnative path for included files\012    -to-stdout                  write compiler t"
"o stdout (implies -t)\012    -s -shared -dynamic         generate dynamically loada"
"ble shared object file\012\012  Language options:\012\012    -D  -DSYMBOL  -feature SYMBOL \012"
"                                register feature identifier\012    -c++            "
"            Compile via a C++ source file (.cpp) \012    -objc                     "
"  Compile via Objective-C source file (.m)\012\012  Syntax related options:\012\012    -i -c"
"ase-insensitive        don\047t preserve case of read symbols    \012    -K -keyword-s"
"tyle STYLE     allow alternative keyword syntax (prefix or suffix)\012    -run-time"
"-macros            macros are made available at run-time\012\012  Translation options:"
"\012\012    -x  -explicit-use           do not use units `library\047 and `eval\047 by defau"
"lt\012    -P  -check-syntax           stop compilation after macro-expansion\012    -A"
"  -analyze-only           stop compilation after first analysis pass\012\012  Debuggin"
"g options:\012\012    -w  -no-warnings            disable warnings\012    -disable-warnin"
"g CLASS      disable specific class of warnings\012    -d0 -d1 -d2 -debug-level NUM"
"BER\012                                set level of available debugging information"
"\012    -no-trace                   disable rudimentary debugging information\012    -"
"profile                    executable emits profiling information \012    -accumula"
"te-profile         executable emits profiling information in append mode\012    -pr"
"ofile-name FILENAME      name of the generated profile information file\012    -emi"
"t-debug-info            emit additional debug-information\012    -emit-exports FILE"
"NAME      write exported toplevel variables to FILENAME\012    -G  -check-imports  "
"        look for undefined toplevel variables\012    -import FILENAME            re"
"ad externally exported symbols from FILENAME\012\012  Optimization options:\012\012    -O -O"
"1 -O2 -O3 -optimize-level NUMBER\012\011\011\011        enable certain sets of optimization "
"options\012    -optimize-leaf-routines     enable leaf routine optimization\012    -N "
" -no-usual-integrations  standard procedures may be redefined\012    -u  -unsafe   "
"              disable safety checks\012    -b  -block                  enable block"
"-compilation\012    -disable-interrupts         disable interrupts in compiled code"
"\012    -f  -fixnum-arithmetic      assume all numbers are fixnums\012    -Ob  -benchm"
"ark-mode        equivalent to \047-block -optimize-level 3 \012                       "
"          -debug-level 0 -fixnum-arithmetic -lambda-lift \012                      "
"           -disable-interrupts\047\012    -lambda-lift                perform lambda-l"
"ifting\012    -unsafe-libraries           link with unsafe runtime system\012    -disa"
"ble-stack-overflow-checks  disables detection of stack-overflows\012    -inline    "
"                 enable inlining\012    -inline-limit               set inlining th"
"reshold\012\012  Configuration options:\012\012    -unit NAME                  compile file "
"as a library unit\012    -uses NAME                  declare library unit as used.\012"
"    -heap-size NUMBER           specifies heap-size of compiled executable\012    -"
"heap-initial-size NUMBER   specifies heap-size at startup time\012    -heap-growth "
"PERCENTAGE     specifies growth-rate of expanding heap\012    -heap-shrinkage PERCE"
"NTAGE  specifies shrink-rate of contracting heap\012    -nursery NUMBER  -stack-siz"
"e NUMBER\012\011\011                specifies nursery size of compiled executable\012    -X "
"-extend FILENAME         load file before compilation commences\012    -prelude EXP"
"RESSION         add expression to beginning of source file\012    -postlude EXPRESS"
"ION        add expression to end of source file\012    -prologue FILENAME          "
"include file before main source file\012    -epilogue FILENAME          include fil"
"e after main source file\012\012    -e  -embedded               compile as embedded (d"
"on\047t generate `main()\047)\012    -W  -windows                compile as Windows GUI a"
"pplication (MSVC only)\012    -R  -require-extension NAME require extension in comp"
"iled code\012    -E  -extension              compile as extension (dynamic or stati"
"c)\012    -dll -library               compile multiple units into a dynamic library"
"\012\012  Options to other passes:\012\012    -C OPTION                   pass option to C c"
"ompiler\012    -L OPTION                   pass option to linker\012    -I<DIR>       "
"              pass \042-I<DIR>\042 to C compiler (add include path)\012    -L<DIR>       "
"              pass \042-L<DIR>\042 to linker (add library path)\012    -k                "
"          keep intermediate files\012    -c                          stop after com"
"pilation to object files\012    -t                          stop after translation "
"to C\012    -cc COMPILER                select other C compiler than the default on"
"e\012    -cxx COMPILER               select other C++ compiler than the default one"
"\012    -ld COMPILER                select other linker than the default one\012    -l"
"LIBNAME                   link with given library (`libLIBNAME\047 on UNIX,\012       "
"                          `LIBNAME.lib\047 on Windows)                             "
"   \012    -static-libs                link with static CHICKEN libraries\012    -stat"
"ic                     generate completely statically linked executable\012    -sta"
"tic-extensions          link with static extensions (if available)\012    -F<DIR>  "
"                   pass \042-F<DIR>\042 to C compiler (add framework \012                "
"                 header path on Mac OS X)\012    -framework NAME             passed"
" to linker on Mac OS X\012    -rpath PATHNAME             add directory to runtime "
"library search path\012    -Wl,...                     pass linker options\012    -str"
"ip                      strip resulting binary\012\012  Inquiry options:\012\012    -home   "
"                    show home-directory (where support files go)\012    -cflags    "
"                 show required C-compiler flags and exit\012    -ldflags           "
"         show required linker flags and exit\012    -libs                       sho"
"w required libraries and exit\012    -cc-name                    show name of defau"
"lt C compiler used\012    -ld-name                    show name of default linker u"
"sed\012    -dry-run                    just show commands executed, don\047t run them "
"\012                                 (implies `-v\047)\012\012  Obscure options:\012\012    -debug"
" MODES                display debugging output for the given modes\012    -compiler"
" PATHNAME          use other compiler than default `chicken\047\012    -compress-liter"
"als NUMBER   compile literals above threshold as strings\012    -disable-c-syntax-c"
"hecks    disable syntax checks of C code fragments\012    -raw                     "
"   do not generate implicit init- and exit code\011\011\011       \012    -emit-external-pro"
"totypes-first  emit protoypes for callbacks before foreign\012                     "
"            declarations\012    -keep-shadowed-macros       do not remove shadowed "
"macro\012    -host                       compile for host when configured for cross"
"-compiling\012\012  Options can be collapsed if unambiguous, so\012\012    -vkfO\012\012  is the s"
"ame as\012\012    -v -k -fixnum-arithmetic -optimize\012\012  The contents of the environmen"
"t variable CSC_OPTIONS are implicitly\012  passed to every invocation of `csc\047.\012");
lf[203]=C_h_intern(&lf[203],8,"-release");
lf[204]=C_h_intern(&lf[204],15,"chicken-version");
lf[205]=C_h_intern(&lf[205],8,"-version");
lf[206]=C_static_string(C_heaptop,9," -version");
lf[207]=C_h_intern(&lf[207],4,"-c++");
lf[208]=C_static_string(C_heaptop,15,"-no-cpp-precomp");
lf[209]=C_h_intern(&lf[209],5,"-objc");
lf[210]=C_h_intern(&lf[210],7,"-static");
lf[211]=C_static_string(C_heaptop,8,"-feature");
lf[212]=C_static_string(C_heaptop,22,"chicken-compile-static");
lf[213]=C_h_intern(&lf[213],12,"-static-libs");
lf[214]=C_static_string(C_heaptop,8,"-feature");
lf[215]=C_static_string(C_heaptop,22,"chicken-compile-static");
lf[216]=C_h_intern(&lf[216],18,"-static-extensions");
lf[217]=C_h_intern(&lf[217],7,"-cflags");
lf[218]=C_h_intern(&lf[218],8,"-ldflags");
lf[219]=C_h_intern(&lf[219],8,"-cc-name");
lf[220]=C_h_intern(&lf[220],8,"-ld-name");
lf[221]=C_h_intern(&lf[221],5,"-home");
lf[222]=C_h_intern(&lf[222],5,"-libs");
lf[223]=C_h_intern(&lf[223],2,"-v");
lf[224]=C_h_intern(&lf[224],3,"-v2");
lf[225]=C_h_intern(&lf[225],8,"-verbose");
lf[226]=C_static_string(C_heaptop,8,"-verbose");
lf[227]=C_h_intern(&lf[227],2,"-w");
lf[228]=C_h_intern(&lf[228],12,"-no-warnings");
lf[229]=C_static_string(C_heaptop,2,"-w");
lf[230]=C_static_string(C_heaptop,12,"-no-warnings");
lf[231]=C_h_intern(&lf[231],3,"-v3");
lf[232]=C_static_string(C_heaptop,2,"-v");
lf[233]=C_static_string(C_heaptop,2,"-v");
lf[234]=C_static_string(C_heaptop,8,"-verbose");
lf[235]=C_h_intern(&lf[235],2,"-A");
lf[236]=C_h_intern(&lf[236],13,"-analyze-only");
lf[237]=C_static_string(C_heaptop,13,"-analyze-only");
lf[238]=C_h_intern(&lf[238],2,"-P");
lf[239]=C_h_intern(&lf[239],13,"-check-syntax");
lf[240]=C_static_string(C_heaptop,13,"-check-syntax");
lf[241]=C_h_intern(&lf[241],2,"-k");
lf[242]=C_h_intern(&lf[242],2,"-c");
lf[243]=C_h_intern(&lf[243],2,"-t");
lf[244]=C_h_intern(&lf[244],2,"-e");
lf[245]=C_h_intern(&lf[245],9,"-embedded");
lf[246]=C_static_string(C_heaptop,12,"-DC_EMBEDDED");
lf[247]=C_h_intern(&lf[247],18,"-require-extension");
lf[248]=C_h_intern(&lf[248],2,"-R");
lf[249]=C_static_string(C_heaptop,18,"-require-extension");
lf[250]=C_h_intern(&lf[250],8,"-windows");
lf[251]=C_h_intern(&lf[251],2,"-W");
lf[252]=C_static_string(C_heaptop,15,"-DC_WINDOWS_GUI");
lf[253]=C_static_string(C_heaptop,12,"kernel32.lib");
lf[254]=C_static_string(C_heaptop,10,"user32.lib");
lf[255]=C_static_string(C_heaptop,9,"gdi32.lib");
lf[256]=C_h_intern(&lf[256],10,"-framework");
lf[257]=C_static_string(C_heaptop,10,"-framework");
lf[258]=C_h_intern(&lf[258],2,"-o");
lf[259]=C_h_intern(&lf[259],2,"-O");
lf[260]=C_h_intern(&lf[260],3,"-O1");
lf[261]=C_static_string(C_heaptop,15,"-optimize-level");
lf[262]=C_static_string(C_heaptop,1,"1");
lf[263]=C_h_intern(&lf[263],3,"-O2");
lf[264]=C_static_string(C_heaptop,15,"-optimize-level");
lf[265]=C_static_string(C_heaptop,1,"2");
lf[266]=C_h_intern(&lf[266],3,"-O3");
lf[267]=C_static_string(C_heaptop,15,"-optimize-level");
lf[268]=C_static_string(C_heaptop,1,"3");
lf[269]=C_h_intern(&lf[269],3,"-d0");
lf[270]=C_static_string(C_heaptop,12,"-debug-level");
lf[271]=C_static_string(C_heaptop,1,"0");
lf[272]=C_h_intern(&lf[272],3,"-d1");
lf[273]=C_static_string(C_heaptop,12,"-debug-level");
lf[274]=C_static_string(C_heaptop,1,"1");
lf[275]=C_h_intern(&lf[275],3,"-d2");
lf[276]=C_static_string(C_heaptop,12,"-debug-level");
lf[277]=C_static_string(C_heaptop,1,"2");
lf[278]=C_h_intern(&lf[278],8,"-dry-run");
lf[279]=C_h_intern(&lf[279],2,"-s");
lf[280]=C_h_intern(&lf[280],4,"-dll");
lf[281]=C_h_intern(&lf[281],8,"-library");
lf[282]=C_h_intern(&lf[282],9,"-compiler");
lf[283]=C_h_intern(&lf[283],3,"-cc");
lf[284]=C_h_intern(&lf[284],4,"-cxx");
lf[285]=C_h_intern(&lf[285],3,"-ld");
lf[286]=C_h_intern(&lf[286],2,"-I");
lf[287]=C_static_string(C_heaptop,13,"-include-path");
lf[288]=C_h_intern(&lf[288],2,"-C");
lf[289]=C_h_intern(&lf[289],12,"string-split");
lf[290]=C_h_intern(&lf[290],6,"-strip");
lf[291]=C_static_string(C_heaptop,2,"-s");
lf[292]=C_h_intern(&lf[292],2,"-L");
lf[293]=C_h_intern(&lf[293],17,"-unsafe-libraries");
lf[296]=C_h_intern(&lf[296],6,"-rpath");
lf[297]=C_h_intern(&lf[297],3,"gnu");
lf[298]=C_static_string(C_heaptop,6,"-Wl,-R");
lf[299]=C_h_intern(&lf[299],14,"build-platform");
lf[300]=C_h_intern(&lf[300],5,"-host");
tmp=C_intern(C_heaptop,2,"-h");
C_save(tmp);
tmp=C_static_string(C_heaptop,5,"-help");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,2,"-s");
C_save(tmp);
tmp=C_static_string(C_heaptop,7,"-shared");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,2,"-E");
C_save(tmp);
tmp=C_static_string(C_heaptop,10,"-extension");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,2,"-P");
C_save(tmp);
tmp=C_static_string(C_heaptop,13,"-check-syntax");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,2,"-V");
C_save(tmp);
tmp=C_static_string(C_heaptop,8,"-version");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,3,"-Ob");
C_save(tmp);
tmp=C_static_string(C_heaptop,15,"-benchmark-mode");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,2,"-f");
C_save(tmp);
tmp=C_static_string(C_heaptop,18,"-fixnum-arithmetic");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,2,"-D");
C_save(tmp);
tmp=C_static_string(C_heaptop,8,"-feature");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,2,"-i");
C_save(tmp);
tmp=C_static_string(C_heaptop,17,"-case-insensitive");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,2,"-K");
C_save(tmp);
tmp=C_static_string(C_heaptop,14,"-keyword-style");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,2,"-X");
C_save(tmp);
tmp=C_static_string(C_heaptop,7,"-extend");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,2,"-N");
C_save(tmp);
tmp=C_static_string(C_heaptop,22,"-no-usual-integrations");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,2,"-G");
C_save(tmp);
tmp=C_static_string(C_heaptop,14,"-check-imports");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,2,"-x");
C_save(tmp);
tmp=C_static_string(C_heaptop,13,"-explicit-use");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,2,"-u");
C_save(tmp);
tmp=C_static_string(C_heaptop,7,"-unsafe");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
tmp=C_intern(C_heaptop,2,"-b");
C_save(tmp);
tmp=C_static_string(C_heaptop,6,"-block");
C_save(tmp);
tmp=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
C_save(tmp);
lf[301]=C_h_list(16,C_pick(15),C_pick(14),C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(16);
tmp=C_intern(C_heaptop,13,"-explicit-use");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"-no-trace");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"-no-warnings");
C_save(tmp);
tmp=C_intern(C_heaptop,22,"-no-usual-integrations");
C_save(tmp);
tmp=C_intern(C_heaptop,23,"-optimize-leaf-routines");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"-unsafe");
C_save(tmp);
tmp=C_intern(C_heaptop,6,"-block");
C_save(tmp);
tmp=C_intern(C_heaptop,19,"-disable-interrupts");
C_save(tmp);
tmp=C_intern(C_heaptop,18,"-fixnum-arithmetic");
C_save(tmp);
tmp=C_intern(C_heaptop,10,"-to-stdout");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"-profile");
C_save(tmp);
tmp=C_intern(C_heaptop,4,"-raw");
C_save(tmp);
tmp=C_intern(C_heaptop,19,"-accumulate-profile");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"-check-syntax");
C_save(tmp);
tmp=C_intern(C_heaptop,17,"-case-insensitive");
C_save(tmp);
tmp=C_intern(C_heaptop,15,"-benchmark-mode");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"-shared");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"-run-time-macros");
C_save(tmp);
tmp=C_intern(C_heaptop,15,"-no-lambda-info");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"-lambda-lift");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"-dynamic");
C_save(tmp);
tmp=C_intern(C_heaptop,30,"-disable-stack-overflow-checks");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"-emit-debug-info");
C_save(tmp);
tmp=C_intern(C_heaptop,14,"-check-imports");
C_save(tmp);
tmp=C_intern(C_heaptop,31,"-emit-external-prototypes-first");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"-inline");
C_save(tmp);
tmp=C_intern(C_heaptop,10,"-extension");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"-release");
C_save(tmp);
tmp=C_intern(C_heaptop,18,"-static-extensions");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"-analyze-only");
C_save(tmp);
tmp=C_intern(C_heaptop,21,"-keep-shadowed-macros");
C_save(tmp);
lf[302]=C_h_list(31,C_pick(30),C_pick(29),C_pick(28),C_pick(27),C_pick(26),C_pick(25),C_pick(24),C_pick(23),C_pick(22),C_pick(21),C_pick(20),C_pick(19),C_pick(18),C_pick(17),C_pick(16),C_pick(15),C_pick(14),C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(31);
tmp=C_intern(C_heaptop,6,"-debug");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"-output-file");
C_save(tmp);
tmp=C_intern(C_heaptop,10,"-heap-size");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"-nursery");
C_save(tmp);
tmp=C_intern(C_heaptop,11,"-stack-size");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"-compiler");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"-unit");
C_save(tmp);
tmp=C_intern(C_heaptop,5,"-uses");
C_save(tmp);
tmp=C_intern(C_heaptop,14,"-keyword-style");
C_save(tmp);
tmp=C_intern(C_heaptop,15,"-optimize-level");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"-include-path");
C_save(tmp);
tmp=C_intern(C_heaptop,14,"-database-size");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"-extend");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"-prelude");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"-postlude");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"-prologue");
C_save(tmp);
tmp=C_intern(C_heaptop,9,"-epilogue");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"-inline-limit");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"-profile-name");
C_save(tmp);
tmp=C_intern(C_heaptop,16,"-disable-warning");
C_save(tmp);
tmp=C_intern(C_heaptop,7,"-import");
C_save(tmp);
tmp=C_intern(C_heaptop,25,"-require-static-extension");
C_save(tmp);
tmp=C_intern(C_heaptop,8,"-feature");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"-debug-level");
C_save(tmp);
tmp=C_intern(C_heaptop,12,"-heap-growth");
C_save(tmp);
tmp=C_intern(C_heaptop,15,"-heap-shrinkage");
C_save(tmp);
tmp=C_intern(C_heaptop,18,"-heap-initial-size");
C_save(tmp);
tmp=C_intern(C_heaptop,13,"-emit-exports");
C_save(tmp);
tmp=C_intern(C_heaptop,18,"-compress-literals");
C_save(tmp);
lf[303]=C_h_list(29,C_pick(28),C_pick(27),C_pick(26),C_pick(25),C_pick(24),C_pick(23),C_pick(22),C_pick(21),C_pick(20),C_pick(19),C_pick(18),C_pick(17),C_pick(16),C_pick(15),C_pick(14),C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(29);
lf[304]=C_static_string(C_heaptop,4,".lib");
lf[305]=C_h_intern(&lf[305],9,"substring");
lf[306]=C_static_string(C_heaptop,8,"-feature");
lf[307]=C_static_string(C_heaptop,1,"-");
lf[308]=C_static_lambda_info(C_heaptop,12,"(a1725 o187)");
lf[309]=C_static_string(C_heaptop,19,"invalid option `~A\047");
lf[310]=C_h_intern(&lf[310],15,"lset-difference");
lf[311]=C_h_intern(&lf[311],6,"char=\077");
tmp=C_make_character(80);
C_save(tmp);
tmp=C_make_character(72);
C_save(tmp);
tmp=C_make_character(104);
C_save(tmp);
tmp=C_make_character(115);
C_save(tmp);
tmp=C_make_character(102);
C_save(tmp);
tmp=C_make_character(105);
C_save(tmp);
tmp=C_make_character(69);
C_save(tmp);
tmp=C_make_character(78);
C_save(tmp);
tmp=C_make_character(120);
C_save(tmp);
tmp=C_make_character(117);
C_save(tmp);
tmp=C_make_character(98);
C_save(tmp);
tmp=C_make_character(118);
C_save(tmp);
tmp=C_make_character(119);
C_save(tmp);
tmp=C_make_character(65);
C_save(tmp);
tmp=C_make_character(79);
C_save(tmp);
tmp=C_make_character(101);
C_save(tmp);
tmp=C_make_character(87);
C_save(tmp);
tmp=C_make_character(107);
C_save(tmp);
tmp=C_make_character(99);
C_save(tmp);
tmp=C_make_character(116);
C_save(tmp);
tmp=C_make_character(103);
C_save(tmp);
tmp=C_make_character(71);
C_save(tmp);
lf[312]=C_h_list(22,C_pick(21),C_pick(20),C_pick(19),C_pick(18),C_pick(17),C_pick(16),C_pick(15),C_pick(14),C_pick(13),C_pick(12),C_pick(11),C_pick(10),C_pick(9),C_pick(8),C_pick(7),C_pick(6),C_pick(5),C_pick(4),C_pick(3),C_pick(2),C_pick(1),C_pick(0));
C_drop(22);
lf[313]=C_static_string(C_heaptop,19,"invalid option `~A\047");
lf[314]=C_static_string(C_heaptop,4,"-Wl,");
lf[315]=C_h_intern(&lf[315],18,"decompose-pathname");
lf[316]=C_static_lambda_info(C_heaptop,7,"(a1796)");
lf[317]=C_static_string(C_heaptop,1,"h");
lf[318]=C_static_string(C_heaptop,1,"c");
lf[319]=C_static_string(C_heaptop,3,"cpp");
lf[320]=C_static_string(C_heaptop,1,"C");
lf[321]=C_static_string(C_heaptop,2,"cc");
lf[322]=C_static_string(C_heaptop,3,"cxx");
lf[323]=C_static_string(C_heaptop,3,"hpp");
lf[324]=C_static_string(C_heaptop,15,"-no-cpp-precomp");
lf[325]=C_static_string(C_heaptop,1,"m");
lf[326]=C_static_string(C_heaptop,1,"M");
lf[327]=C_static_string(C_heaptop,2,"mm");
lf[329]=C_static_lambda_info(C_heaptop,39,"(a1802 dirs188191 name189192 ext190193)");
lf[330]=C_static_string(C_heaptop,24,"file `~A\047 does not exist");
lf[331]=C_static_string(C_heaptop,4,".scm");
lf[332]=C_static_string(C_heaptop,2,"-:");
lf[333]=C_h_intern(&lf[333],15,"-optimize-level");
lf[334]=C_h_intern(&lf[334],15,"-benchmark-mode");
lf[337]=C_h_intern(&lf[337],10,"-to-stdout");
lf[338]=C_h_intern(&lf[338],7,"-unsafe");
lf[339]=C_h_intern(&lf[339],7,"-shared");
lf[340]=C_h_intern(&lf[340],8,"-dynamic");
lf[341]=C_h_intern(&lf[341],14,"string->symbol");
lf[342]=C_static_lambda_info(C_heaptop,13,"(loop args85)");
lf[343]=C_static_string(C_heaptop,0,"");
lf[344]=C_h_intern(&lf[344],6,"getenv");
lf[345]=C_static_string(C_heaptop,11,"CSC_OPTIONS");
lf[346]=C_static_string(C_heaptop,2,"-L");
lf[347]=C_static_string(C_heaptop,0,"");
lf[348]=C_static_string(C_heaptop,3,"lib");
lf[349]=C_h_intern(&lf[349],17,"\003syspeek-c-string");
lf[350]=C_static_string(C_heaptop,2,"-L");
lf[351]=C_static_string(C_heaptop,7," -Wl,-R");
lf[352]=C_static_string(C_heaptop,0,"");
lf[353]=C_static_string(C_heaptop,3,"lib");
lf[354]=C_h_intern(&lf[354],7,"dynamic");
tmp=C_static_string(C_heaptop,3,"/MD");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[355]=C_h_pair(C_restore,tmp);
lf[356]=C_static_string(C_heaptop,2,"/I");
lf[357]=C_static_string(C_heaptop,17,"/DC_NO_PIC_NO_DLL");
lf[358]=C_h_intern(&lf[358],9,"c-runtime");
tmp=C_static_string(C_heaptop,3,"/MD");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[359]=C_h_pair(C_restore,tmp);
lf[360]=C_static_string(C_heaptop,16,"/I%CHICKEN_HOME%");
lf[361]=C_static_string(C_heaptop,17,"/DC_NO_PIC_NO_DLL");
lf[362]=C_static_string(C_heaptop,2,"-I");
lf[363]=C_static_string(C_heaptop,0,"");
lf[364]=C_static_string(C_heaptop,7,"include");
lf[365]=C_static_string(C_heaptop,0,"");
lf[366]=C_static_string(C_heaptop,0,"");
lf[367]=C_static_string(C_heaptop,17,"libchickengui.lib");
lf[368]=C_static_string(C_heaptop,3,"lib");
lf[369]=C_static_string(C_heaptop,18,"\134libchickengui.lib");
lf[370]=C_static_string(C_heaptop,19,"libchickengui-s.lib");
lf[371]=C_static_string(C_heaptop,3,"lib");
lf[372]=C_static_string(C_heaptop,20,"\134libchickengui-s.lib");
lf[373]=C_static_string(C_heaptop,15,"libuchicken.lib");
lf[374]=C_static_string(C_heaptop,3,"lib");
lf[375]=C_static_string(C_heaptop,16,"\134libuchicken.lib");
lf[376]=C_static_string(C_heaptop,17,"libuchicken-s.lib");
lf[377]=C_static_string(C_heaptop,3,"lib");
lf[378]=C_static_string(C_heaptop,18,"\134libuchicken-s.lib");
lf[379]=C_static_string(C_heaptop,14,"libchicken.lib");
lf[380]=C_static_string(C_heaptop,3,"lib");
lf[381]=C_static_string(C_heaptop,15,"\134libchicken.lib");
lf[382]=C_static_string(C_heaptop,16,"libchicken-s.lib");
lf[383]=C_static_string(C_heaptop,3,"lib");
lf[384]=C_static_string(C_heaptop,17,"\134libchicken-s.lib");
tmp=C_static_string(C_heaptop,17,"libchickengui.lib");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[385]=C_h_pair(C_restore,tmp);
tmp=C_static_string(C_heaptop,24,"libchickengui-static.lib");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[386]=C_h_pair(C_restore,tmp);
tmp=C_static_string(C_heaptop,15,"libuchicken.lib");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[387]=C_h_pair(C_restore,tmp);
tmp=C_static_string(C_heaptop,22,"libuchicken-static.lib");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[388]=C_h_pair(C_restore,tmp);
tmp=C_static_string(C_heaptop,14,"libchicken.lib");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[389]=C_h_pair(C_restore,tmp);
tmp=C_static_string(C_heaptop,21,"libchicken-static.lib");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[390]=C_h_pair(C_restore,tmp);
tmp=C_static_string(C_heaptop,9,"-lchicken");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[391]=C_h_pair(C_restore,tmp);
tmp=C_static_string(C_heaptop,10,"-luchicken");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[392]=C_h_pair(C_restore,tmp);
lf[393]=C_static_string(C_heaptop,13,"libuchicken.a");
lf[394]=C_static_string(C_heaptop,3,"lib");
lf[395]=C_static_string(C_heaptop,14,"/libuchicken.a");
lf[396]=C_static_string(C_heaptop,12,"libchicken.a");
lf[397]=C_static_string(C_heaptop,3,"lib");
lf[398]=C_static_string(C_heaptop,13,"/libchicken.a");
lf[399]=C_h_intern(&lf[399],16,"string-translate");
lf[400]=C_static_string(C_heaptop,1,"/");
lf[401]=C_static_string(C_heaptop,1,"\134");
lf[402]=C_static_lambda_info(C_heaptop,12,"(f_3256 s32)");
tmp=C_static_string(C_heaptop,7,"/nologo");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[403]=C_h_pair(C_restore,tmp);
tmp=C_static_string(C_heaptop,7,"/nologo");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[404]=C_h_pair(C_restore,tmp);
tmp=C_static_string(C_heaptop,7,"/nologo");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[405]=C_h_pair(C_restore,tmp);
tmp=C_static_string(C_heaptop,3,"/O2");
C_save(tmp);
tmp=C_static_string(C_heaptop,7,"/nologo");
C_save(tmp);
lf[406]=C_h_list(2,C_pick(1),C_pick(0));
C_drop(2);
lf[407]=C_static_lambda_info(C_heaptop,22,"(cleanup-filename s37)");
lf[408]=C_static_string(C_heaptop,2,"cl");
lf[409]=C_static_string(C_heaptop,2,"cl");
lf[410]=C_static_string(C_heaptop,4,"link");
lf[411]=C_static_string(C_heaptop,4,"link");
lf[412]=C_static_string(C_heaptop,3,"obj");
lf[413]=C_static_string(C_heaptop,3,"lib");
lf[414]=C_static_string(C_heaptop,5,"/out:");
lf[415]=C_static_string(C_heaptop,3,"/Fo");
lf[416]=C_static_string(C_heaptop,3,"exe");
lf[417]=C_static_string(C_heaptop,3,"dll");
tmp=C_static_string(C_heaptop,5,"/DPIC");
C_save(tmp);
tmp=C_SCHEME_END_OF_LIST;
lf[418]=C_h_pair(C_restore,tmp);
lf[419]=C_static_string(C_heaptop,1,"o");
lf[420]=C_static_string(C_heaptop,1,"a");
lf[421]=C_static_string(C_heaptop,3,"-o ");
lf[422]=C_static_string(C_heaptop,0,"");
lf[423]=C_static_string(C_heaptop,3,"-o ");
lf[424]=C_static_string(C_heaptop,3,"dll");
lf[425]=C_static_string(C_heaptop,2,"so");
lf[426]=C_static_string(C_heaptop,7,"chicken");
lf[427]=C_static_string(C_heaptop,7,"chicken");
lf[428]=C_static_string(C_heaptop,3,"bin");
lf[429]=C_static_string(C_heaptop,7,"chicken");
lf[430]=C_static_string(C_heaptop,103,"`CHICKEN_HOME\047 environment variable not set - please set it to the directory whe"
"re CHICKEN is installed");
lf[431]=C_static_string(C_heaptop,0,"");
lf[432]=C_static_string(C_heaptop,5,"share");
lf[433]=C_static_string(C_heaptop,12,"CHICKEN_HOME");
lf[434]=C_h_intern(&lf[434],22,"command-line-arguments");
lf[435]=C_static_string(C_heaptop,14,"CHICKEN_PREFIX");
lf[436]=C_h_intern(&lf[436],4,"hpux");
lf[437]=C_h_intern(&lf[437],4,"hppa");
lf[438]=C_h_intern(&lf[438],12,"machine-type");
lf[439]=C_h_intern(&lf[439],16,"software-version");
lf[440]=C_static_lambda_info(C_heaptop,10,"(toplevel)");
C_register_lf2(lf,441,create_ptable());
t2=C_mutate(&lf[0],lf[1]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_404,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
C_library_toplevel(2,C_SCHEME_UNDEFINED,t3);}

/* k402 */
static void C_ccall f_404(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_404,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_407,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_eval_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k405 in k402 */
static void C_ccall f_407(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_407,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_410,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k408 in k405 in k402 */
static void C_ccall f_410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_410,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_413,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_extras_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k411 in k408 in k405 in k402 */
static void C_ccall f_413(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_413,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_416,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_1_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_416(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_416,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_419,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_srfi_13_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_419(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_419,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_422,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_regex_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_422(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_422,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_425,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
C_utils_toplevel(2,C_SCHEME_UNDEFINED,t2);}

/* k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_425(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_425,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3457,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 100  build-platform */
t3=C_retrieve(lf[299]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3457(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3457,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[2]);
t3=C_mutate(&lf[3],t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3453,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 101  build-platform */
t5=C_retrieve(lf[299]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3453(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3453,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[4]);
t3=C_mutate(&lf[5],t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3449,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 102  build-platform */
t5=C_retrieve(lf[299]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3449(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3449,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[6]);
t3=C_mutate(&lf[7],t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3445,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 103  software-version */
t5=C_retrieve(lf[439]);
((C_proc2)C_retrieve_proc(t5))(2,t5,t4);}

/* k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3445(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3445,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[8]);
t3=C_mutate(&lf[9],t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_445,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3441,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 104  software-version */
t6=C_retrieve(lf[439]);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k3439 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3441(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3441,2,t0,t1);}
t2=(C_word)C_eqp(t1,lf[436]);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3437,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 105  machine-type */
t4=C_retrieve(lf[438]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}
else{
t3=((C_word*)t0)[2];
f_445(t3,C_SCHEME_FALSE);}}

/* k3435 in k3439 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3437(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_445(t2,(C_word)C_eqp(t1,lf[437]));}

/* k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_445(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_445,NULL,2,t0,t1);}
t2=C_mutate(&lf[10],t1);
t3=C_mutate(&lf[11],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_447,a[2]=lf[16],tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_462,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 111  getenv */
t5=C_retrieve(lf[344]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,lf[435]);}

/* k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_462(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_462,2,t0,t1);}
t2=C_mutate(&lf[17],t1);
t3=(C_word)C_fudge(C_fix(38));
t4=C_mutate(&lf[18],t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_470,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 113  command-line-arguments */
t6=C_retrieve(lf[434]);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_470(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_470,2,t0,t1);}
t2=C_mutate(&lf[19],t1);
t3=(C_word)C_i_member(lf[20],C_retrieve2(lf[19],"arguments"));
t4=C_mutate(&lf[21],t3);
t5=C_mutate(&lf[22],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_476,a[2]=lf[24],tmp=(C_word)a,a+=3,tmp));
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_491,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 122  getenv */
t7=C_retrieve(lf[344]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,lf[433]);}

/* k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_491,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_494,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t3=t2;
f_494(2,t3,t1);}
else{
t3=(C_truep(lf[3])?(C_word)C_i_not(C_retrieve2(lf[18],"cmake-build")):C_SCHEME_FALSE);
if(C_truep(t3)){
/* csc.scm: 124  quit */
f_447(t2,lf[430],C_SCHEME_END_OF_LIST);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3414,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3418,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_INSTALL_SHARE_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_TARGET_SHARE_HOME),C_fix(0));}}}}

/* k3416 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 125  prefix */
f_476(((C_word*)t0)[2],lf[431],lf[432],t1);}

/* k3412 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3414(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 125  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_494(C_word c,C_word t0,C_word t1){
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
C_word ab[27],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_494,2,t0,t1);}
t2=C_mutate(&lf[25],t1);
t3=C_mutate(&lf[26],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_496,a[2]=lf[27],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[28],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_502,a[2]=lf[34],tmp=(C_word)a,a+=3,tmp));
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_516,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(C_truep(lf[3])?(C_word)C_i_not(C_retrieve2(lf[18],"cmake-build")):C_SCHEME_FALSE);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3374,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 139  homize */
t8=C_retrieve2(lf[26],"homize");
f_496(3,t8,t7,lf[426]);}
else{
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3381,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3385,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3389,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t10=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,C_mpointer(&a,(void*)C_INSTALL_BIN_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t10=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t10+1)))(4,t10,t9,C_mpointer(&a,(void*)C_TARGET_BIN_HOME),C_fix(0));}}}

/* k3387 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3389(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 142  make-pathname */
t2=C_retrieve(lf[23]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[429]);}

/* k3383 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3385(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 141  prefix */
f_476(((C_word*)t0)[2],lf[427],lf[428],t1);}

/* k3379 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3381(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 140  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k3372 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3374(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 139  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_516(C_word c,C_word t0,C_word t1){
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
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_516,2,t0,t1);}
t2=C_mutate(&lf[35],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_519,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(lf[3])){
t4=C_mutate(&lf[164],lf[408]);
t5=C_mutate(&lf[163],lf[409]);
t6=C_mutate(&lf[155],lf[410]);
t7=C_mutate(&lf[154],lf[411]);
t8=C_mutate(&lf[166],lf[412]);
t9=C_mutate(&lf[328],lf[413]);
t10=C_mutate(&lf[156],lf[414]);
t11=C_mutate(&lf[165],lf[415]);
t12=C_mutate(&lf[169],lf[416]);
t13=C_mutate(&lf[168],lf[417]);
t14=C_mutate(&lf[82],lf[418]);
t15=t3;
f_519(t15,t14);}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3299,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3358,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_INSTALL_CC),C_fix(0));}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_TARGET_CC),C_fix(0));}}}

/* k3356 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3358(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 160  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k3297 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3299(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3299,2,t0,t1);}
t2=C_mutate(&lf[164],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3303,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3348,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CXX),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CXX),C_fix(0));}}

/* k3346 in k3297 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3348(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 161  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k3301 in k3297 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3303(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3303,2,t0,t1);}
t2=C_mutate(&lf[163],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3307,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3338,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CC),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CC),C_fix(0));}}

/* k3336 in k3301 in k3297 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3338(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 162  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k3305 in k3301 in k3297 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3307(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3307,2,t0,t1);}
t2=C_mutate(&lf[155],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3311,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3328,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t5=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_INSTALL_CXX),C_fix(0));}
else{
/* ##sys#peek-c-string */
t5=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t4,C_mpointer(&a,(void*)C_TARGET_CXX),C_fix(0));}}

/* k3326 in k3305 in k3301 in k3297 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 163  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k3309 in k3305 in k3301 in k3297 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3311(C_word c,C_word t0,C_word t1){
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
C_word *a;
t2=C_mutate(&lf[154],t1);
t3=C_mutate(&lf[166],lf[419]);
t4=C_mutate(&lf[328],lf[420]);
t5=C_mutate(&lf[156],lf[421]);
t6=C_mutate(&lf[169],lf[422]);
t7=C_mutate(&lf[165],lf[423]);
t8=lf[82]=C_SCHEME_END_OF_LIST;;
t9=(C_truep(C_retrieve2(lf[5],"cygwin"))?C_retrieve2(lf[5],"cygwin"):C_retrieve2(lf[7],"mingw"));
t10=(C_truep(t9)?lf[424]:lf[425]);
t11=C_mutate(&lf[168],t10);
t12=((C_word*)t0)[2];
f_519(t12,t11);}

/* k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_519(C_word t0,C_word t1){
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
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_519,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_523,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(lf[3])){
t3=C_mutate(&lf[157],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3256,a[2]=lf[402],tmp=(C_word)a,a+=3,tmp));
t4=C_mutate(&lf[62],lf[403]);
t5=C_mutate(&lf[64],lf[404]);
t6=C_mutate(&lf[336],lf[405]);
t7=C_mutate(&lf[335],lf[406]);
t8=t2;
f_523(t8,t7);}
else{
t3=C_mutate(&lf[157],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3266,a[2]=lf[407],tmp=(C_word)a,a+=3,tmp));
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3271,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3278,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t6=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_INSTALL_CFLAGS),C_fix(0));}
else{
/* ##sys#peek-c-string */
t6=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t6+1)))(4,t6,t5,C_mpointer(&a,(void*)C_TARGET_CFLAGS),C_fix(0));}}}

/* k3276 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3278(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 185  string-split */
t2=C_retrieve(lf[289]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k3269 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=C_mutate(&lf[62],t1);
t3=C_mutate(&lf[335],C_retrieve2(lf[62],"default-compilation-optimization-options"));
t4=lf[64]=C_SCHEME_END_OF_LIST;;
t5=lf[336]=C_SCHEME_END_OF_LIST;;
t6=((C_word*)t0)[2];
f_523(t6,t5);}

/* cleanup-filename in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3266(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3266,3,t0,t1,t2);}
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* f_3256 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3256(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_3256,3,t0,t1,t2);}
/* csc.scm: 178  string-translate */
t3=C_retrieve(lf[399]);
((C_proc5)C_retrieve_proc(t3))(5,t3,t1,t2,lf[400],lf[401]);}

/* k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_523(C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_523,NULL,2,t0,t1);}
t2=lf[36]=C_SCHEME_END_OF_LIST;;
t3=lf[37]=C_SCHEME_END_OF_LIST;;
t4=lf[38]=C_SCHEME_END_OF_LIST;;
t5=lf[39]=C_SCHEME_END_OF_LIST;;
t6=lf[40]=C_SCHEME_END_OF_LIST;;
t7=lf[41]=C_SCHEME_FALSE;;
t8=lf[42]=C_SCHEME_FALSE;;
t9=lf[43]=C_SCHEME_FALSE;;
t10=lf[44]=C_SCHEME_FALSE;;
t11=lf[45]=C_SCHEME_FALSE;;
t12=lf[46]=C_SCHEME_FALSE;;
t13=lf[47]=C_SCHEME_FALSE;;
t14=lf[48]=C_SCHEME_FALSE;;
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_547,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(lf[3])){
t16=C_mutate(&lf[100],lf[365]);
t17=C_mutate(&lf[101],lf[366]);
if(C_truep(C_retrieve2(lf[18],"cmake-build"))){
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3160,a[2]=t15,tmp=(C_word)a,a+=3,tmp);
t19=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3164,a[2]=t18,tmp=(C_word)a,a+=3,tmp);
t20=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3168,a[2]=t19,tmp=(C_word)a,a+=3,tmp);
t21=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3172,a[2]=t20,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t22=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t22+1)))(4,t22,t21,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t22=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t22+1)))(4,t22,t21,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}
else{
t18=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3002,a[2]=t15,tmp=(C_word)a,a+=3,tmp);
/* map */
t19=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t19+1)))(4,t19,t18,C_retrieve2(lf[26],"homize"),lf[390]);}}
else{
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3182,a[2]=t15,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t17=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t16,C_mpointer(&a,(void*)C_INSTALL_MORE_STATIC_LIBS),C_fix(0));}
else{
/* ##sys#peek-c-string */
t17=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t17+1)))(4,t17,t16,C_mpointer(&a,(void*)C_TARGET_MORE_STATIC_LIBS),C_fix(0));}}}

/* k3180 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3182(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3182,2,t0,t1);}
t2=C_mutate(&lf[100],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3186,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t4=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_INSTALL_MORE_LIBS),C_fix(0));}
else{
/* ##sys#peek-c-string */
t4=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_mpointer(&a,(void*)C_TARGET_MORE_LIBS),C_fix(0));}}

/* k3184 in k3180 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3186(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3186,2,t0,t1);}
t2=C_mutate(&lf[101],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3224,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3228,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3232,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3236,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t7=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t7=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}

/* k3234 in k3184 in k3180 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3236(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 323  string-append */
t2=*((C_word*)lf[29]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[398]);}

/* k3230 in k3184 in k3180 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3232(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 322  prefix */
f_476(((C_word*)t0)[2],lf[396],lf[397],t1);}

/* k3226 in k3184 in k3180 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3228(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 321  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k3222 in k3184 in k3180 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3224(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3224,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=C_mutate(&lf[50],t2);
t4=C_mutate(&lf[52],lf[391]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3202,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3206,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3210,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3214,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t9=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t9=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t9+1)))(4,t9,t8,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}

/* k3212 in k3222 in k3184 in k3180 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3214(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 331  string-append */
t2=*((C_word*)lf[29]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[395]);}

/* k3208 in k3222 in k3184 in k3180 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3210(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 330  prefix */
f_476(((C_word*)t0)[2],lf[393],lf[394],t1);}

/* k3204 in k3222 in k3184 in k3180 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3206(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 329  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k3200 in k3222 in k3184 in k3180 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3202(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3202,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=C_mutate(&lf[294],t2);
t4=C_mutate(&lf[295],lf[392]);
t5=C_mutate(&lf[102],C_retrieve2(lf[50],"default-library-files"));
t6=C_mutate(&lf[103],C_retrieve2(lf[52],"default-shared-library-files"));
t7=((C_word*)t0)[2];
f_547(t7,t6);}

/* k3000 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3002(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3002,2,t0,t1);}
t2=C_mutate(&lf[50],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3006,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve2(lf[26],"homize"),lf[389]);}

/* k3004 in k3000 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3006(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3006,2,t0,t1);}
t2=C_mutate(&lf[52],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3010,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve2(lf[26],"homize"),lf[388]);}

/* k3008 in k3004 in k3000 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3010(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3010,2,t0,t1);}
t2=C_mutate(&lf[294],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3014,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve2(lf[26],"homize"),lf[387]);}

/* k3012 in k3008 in k3004 in k3000 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3014(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3014,2,t0,t1);}
t2=C_mutate(&lf[295],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3018,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve2(lf[26],"homize"),lf[386]);}

/* k3016 in k3012 in k3008 in k3004 in k3000 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3018,2,t0,t1);}
t2=C_mutate(&lf[102],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3022,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* map */
t4=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t4+1)))(4,t4,t3,C_retrieve2(lf[26],"homize"),lf[385]);}

/* k3020 in k3016 in k3012 in k3008 in k3004 in k3000 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3022(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[103],t1);
t3=((C_word*)t0)[2];
f_547(t3,t2);}

/* k3170 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3172(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 268  string-append */
t2=*((C_word*)lf[29]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[384]);}

/* k3166 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3168(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 267  prefix */
f_476(((C_word*)t0)[2],lf[382],lf[383],t1);}

/* k3162 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3164(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 266  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3160(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3160,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=C_mutate(&lf[50],t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3138,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3142,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3146,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3150,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t8=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t8=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}

/* k3148 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3150(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 275  string-append */
t2=*((C_word*)lf[29]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[381]);}

/* k3144 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 274  prefix */
f_476(((C_word*)t0)[2],lf[379],lf[380],t1);}

/* k3140 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3142(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 273  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3138(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3138,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=C_mutate(&lf[52],t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3116,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3120,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3124,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3128,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t8=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t8=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}

/* k3126 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3128(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 282  string-append */
t2=*((C_word*)lf[29]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[378]);}

/* k3122 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3124(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 281  prefix */
f_476(((C_word*)t0)[2],lf[376],lf[377],t1);}

/* k3118 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3120(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 280  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k3114 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3116(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3116,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=C_mutate(&lf[294],t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3094,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3098,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3102,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3106,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t8=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t8=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}

/* k3104 in k3114 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3106(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 289  string-append */
t2=*((C_word*)lf[29]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[375]);}

/* k3100 in k3114 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3102(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 288  prefix */
f_476(((C_word*)t0)[2],lf[373],lf[374],t1);}

/* k3096 in k3114 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3098(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 287  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k3092 in k3114 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3094(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3094,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=C_mutate(&lf[295],t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3072,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3076,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3080,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3084,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t8=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t8=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}

/* k3082 in k3092 in k3114 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3084(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 296  string-append */
t2=*((C_word*)lf[29]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[372]);}

/* k3078 in k3092 in k3114 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3080(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 295  prefix */
f_476(((C_word*)t0)[2],lf[370],lf[371],t1);}

/* k3074 in k3092 in k3114 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3076(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 294  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k3070 in k3092 in k3114 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3072(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[21],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3072,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=C_mutate(&lf[102],t2);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3050,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3054,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3058,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_3062,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t8=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t8=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}

/* k3060 in k3070 in k3092 in k3114 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3062(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 303  string-append */
t2=*((C_word*)lf[29]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[369]);}

/* k3056 in k3070 in k3092 in k3114 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 302  prefix */
f_476(((C_word*)t0)[2],lf[367],lf[368],t1);}

/* k3052 in k3070 in k3092 in k3114 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3054(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 301  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k3048 in k3070 in k3092 in k3114 in k3136 in k3158 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_3050(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_3050,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
t3=C_mutate(&lf[103],t2);
t4=((C_word*)t0)[2];
f_547(t4,t3);}

/* k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_547(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_547,NULL,2,t0,t1);}
t2=C_mutate(&lf[49],C_retrieve2(lf[50],"default-library-files"));
t3=C_mutate(&lf[51],C_retrieve2(lf[52],"default-shared-library-files"));
t4=C_mutate(&lf[53],lf[54]);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_554,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2984,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t7=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t7=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t7+1)))(4,t7,t6,C_mpointer(&a,(void*)C_TARGET_INCLUDE_HOME),C_fix(0));}}

/* k2982 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2984(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 347  prefix */
f_476(((C_word*)t0)[2],lf[363],lf[364],t1);}

/* k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_554(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[24],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_554,2,t0,t1);}
t2=(C_word)C_i_member(t1,lf[55]);
t3=(C_truep(t2)?C_SCHEME_FALSE:t1);
t4=C_mutate(&lf[56],t3);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_561,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(lf[3])){
if(C_truep(C_retrieve2(lf[18],"cmake-build"))){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2946,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2950,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t8=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_INSTALL_INCLUDE_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t8=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t7,C_mpointer(&a,(void*)C_TARGET_INCLUDE_HOME),C_fix(0));}}
else{
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2939,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 355  c-runtime */
t7=C_retrieve(lf[358]);
((C_proc2)C_retrieve_proc(t7))(2,t7,t6);}}
else{
t6=t5;
f_561(2,t6,(C_truep(C_retrieve2(lf[56],"include-dir"))?(C_word)C_a_i_list(&a,2,lf[362],C_retrieve2(lf[56],"include-dir")):C_SCHEME_END_OF_LIST));}}

/* k2937 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2939(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_eqp(t1,lf[354]);
t3=(C_truep(t2)?lf[359]:C_SCHEME_END_OF_LIST);
/* csc.scm: 355  cons* */
t4=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t4))(5,t4,((C_word*)t0)[2],lf[360],lf[361],t3);}

/* k2948 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2950(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2950,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2961,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 359  c-runtime */
t3=C_retrieve(lf[358]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k2959 in k2948 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2961(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_eqp(t1,lf[354]);
t3=(C_truep(t2)?lf[355]:C_SCHEME_END_OF_LIST);
/* csc.scm: 356  string-append */
t4=*((C_word*)lf[29]+1);
((C_proc6)C_retrieve_proc(t4))(6,t4,((C_word*)t0)[3],lf[356],((C_word*)t0)[2],lf[357],t3);}

/* k2944 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2946(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 356  cons* */
t2=C_retrieve(lf[115]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_561(C_word c,C_word t0,C_word t1){
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
C_word ab[36],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_561,2,t0,t1);}
t2=C_mutate(&lf[57],t1);
t3=(C_truep(lf[3])?lf[58]:lf[59]);
t4=C_mutate(&lf[60],t3);
t5=C_mutate(&lf[61],C_retrieve2(lf[62],"default-compilation-optimization-options"));
t6=C_mutate(&lf[63],C_retrieve2(lf[64],"default-linking-optimization-options"));
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_572,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(lf[3])){
t8=t7;
f_572(t8,C_SCHEME_END_OF_LIST);}
else{
t8=(C_truep(C_retrieve2(lf[9],"osx"))?C_retrieve2(lf[9],"osx"):C_retrieve2(lf[10],"hpux-hppa"));
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2877,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2881,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2885,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2889,a[2]=t11,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t13=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t12,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t13=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t13+1)))(4,t13,t12,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}
else{
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2898,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2909,a[2]=t9,tmp=(C_word)a,a+=3,tmp);
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2913,a[2]=t10,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[21],"host-mode"))){
/* ##sys#peek-c-string */
t12=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,C_mpointer(&a,(void*)C_INSTALL_LIB_HOME),C_fix(0));}
else{
/* ##sys#peek-c-string */
t12=*((C_word*)lf[349]+1);
((C_proc4)(void*)(*((C_word*)t12+1)))(4,t12,t11,C_mpointer(&a,(void*)C_TARGET_LIB_HOME),C_fix(0));}}}}

/* k2911 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 378  prefix */
f_476(((C_word*)t0)[2],lf[352],lf[353],t1);}

/* k2907 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2909(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 378  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k2896 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2898(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2898,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2905,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 382  conc */
t3=C_retrieve(lf[187]);
((C_proc6)C_retrieve_proc(t3))(6,t3,t2,lf[350],t1,lf[351],t1);}

/* k2903 in k2896 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2905(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2905,2,t0,t1);}
t2=((C_word*)t0)[2];
f_572(t2,(C_word)C_a_i_list(&a,1,t1));}

/* k2887 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2889(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 373  prefix */
f_476(((C_word*)t0)[2],lf[347],lf[348],t1);}

/* k2883 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2885(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 372  quotewrap */
f_502(((C_word*)t0)[2],t1);}

/* k2879 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2881(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 372  conc */
t2=C_retrieve(lf[187]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],lf[346],t1);}

/* k2875 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2877(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2877,2,t0,t1);}
t2=((C_word*)t0)[2];
f_572(t2,(C_word)C_a_i_list(&a,1,t1));}

/* k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_572(C_word t0,C_word t1){
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
C_word ab[33],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_572,NULL,2,t0,t1);}
t2=C_mutate(&lf[65],t1);
t3=lf[66]=C_SCHEME_FALSE;;
t4=lf[67]=C_SCHEME_FALSE;;
t5=lf[68]=C_SCHEME_FALSE;;
t6=lf[69]=C_SCHEME_FALSE;;
t7=lf[70]=C_SCHEME_FALSE;;
t8=lf[71]=C_SCHEME_FALSE;;
t9=lf[72]=C_SCHEME_FALSE;;
t10=lf[73]=C_SCHEME_FALSE;;
t11=lf[74]=C_SCHEME_FALSE;;
t12=lf[75]=C_SCHEME_FALSE;;
t13=lf[76]=C_SCHEME_END_OF_LIST;;
t14=lf[77]=C_SCHEME_FALSE;;
t15=C_mutate(&lf[78],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2323,a[2]=lf[84],tmp=(C_word)a,a+=3,tmp));
t16=C_mutate(&lf[85],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2477,a[2]=lf[92],tmp=(C_word)a,a+=3,tmp));
t17=C_mutate(&lf[93],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2574,a[2]=lf[98],tmp=(C_word)a,a+=3,tmp));
t18=C_mutate(&lf[99],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2620,a[2]=lf[107],tmp=(C_word)a,a+=3,tmp));
t19=C_mutate(&lf[108],lf[109]);
t20=C_mutate(&lf[81],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2696,a[2]=lf[120],tmp=(C_word)a,a+=3,tmp));
t21=lf[121]=C_SCHEME_FALSE;;
t22=C_mutate(&lf[122],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2796,a[2]=lf[127],tmp=(C_word)a,a+=3,tmp));
t23=C_mutate(&lf[128],(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2821,a[2]=lf[132],tmp=(C_word)a,a+=3,tmp));
t24=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2843,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2853,a[2]=t24,tmp=(C_word)a,a+=3,tmp);
t26=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2857,a[2]=t25,tmp=(C_word)a,a+=3,tmp);
t27=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2861,a[2]=t26,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 1016 getenv */
t28=C_retrieve(lf[344]);
((C_proc3)C_retrieve_proc(t28))(3,t28,t27,lf[345]);}

/* k2859 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2861(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_truep(t1)?t1:lf[343]);
/* csc.scm: 1016 string-split */
t3=C_retrieve(lf[289]);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}

/* k2855 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2857(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 1016 append */
t2=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_retrieve2(lf[19],"arguments"));}

/* k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2853(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[18],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2853,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_595,a[2]=lf[134],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_602,a[2]=lf[136],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_641,a[2]=lf[149],tmp=(C_word)a,a+=3,tmp);
t5=C_SCHEME_UNDEFINED;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=C_set_block_item(t6,0,(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_678,a[2]=t4,a[3]=t3,a[4]=t2,a[5]=t6,a[6]=lf[342],tmp=(C_word)a,a+=7,tmp));
t8=((C_word*)t6)[1];
f_678(t8,((C_word*)t0)[2],t1);}

/* loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_678(C_word t0,C_word t1,C_word t2){
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
C_word ab[20],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_678,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_688,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[44],"inquiry-only"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_810,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[45],"show-cflags"))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_843,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 586  compiler-options */
f_2323(t5);}
else{
t5=t4;
f_810(2,t5,C_SCHEME_UNDEFINED);}}
else{
t4=t3;
f_688(2,t4,C_SCHEME_UNDEFINED);}}
else{
t3=(C_word)C_i_car(t2);
t4=(C_word)C_i_cdr(t2);
t5=t4;
t6=(*a=C_VECTOR_TYPE|1,a[1]=t5,tmp=(C_word)a,a+=2,tmp);
t7=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_852,a[2]=t3,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=t6,a[7]=t1,a[8]=((C_word*)t0)[5],tmp=(C_word)a,a+=9,tmp);
/* csc.scm: 624  string->symbol */
t8=*((C_word*)lf[341]+1);
((C_proc3)C_retrieve_proc(t8))(3,t8,t7,t3);}}

/* k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_852(C_word c,C_word t0,C_word t1){
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
C_word t48;
C_word t49;
C_word t50;
C_word t51;
C_word t52;
C_word t53;
C_word t54;
C_word t55;
C_word t56;
C_word t57;
C_word t58;
C_word t59;
C_word t60;
C_word t61;
C_word t62;
C_word t63;
C_word t64;
C_word t65;
C_word t66;
C_word t67;
C_word t68;
C_word t69;
C_word t70;
C_word t71;
C_word t72;
C_word t73;
C_word t74;
C_word t75;
C_word t76;
C_word t77;
C_word t78;
C_word t79;
C_word t80;
C_word t81;
C_word t82;
C_word t83;
C_word t84;
C_word t85;
C_word t86;
C_word t87;
C_word t88;
C_word t89;
C_word t90;
C_word t91;
C_word t92;
C_word t93;
C_word t94;
C_word t95;
C_word t96;
C_word t97;
C_word t98;
C_word ab[111],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_852,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_855,a[2]=((C_word*)t0)[6],a[3]=((C_word*)t0)[7],a[4]=((C_word*)t0)[8],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_eqp(t1,lf[199]);
t4=(C_truep(t3)?t3:(C_word)C_eqp(t1,lf[200]));
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_867,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 401  display */
t6=*((C_word*)lf[201]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,lf[202]);}
else{
t5=(C_word)C_eqp(t1,lf[203]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_879,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_886,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 630  chicken-version */
t8=C_retrieve(lf[204]);
((C_proc2)C_retrieve_proc(t8))(2,t8,t7);}
else{
t6=(C_word)C_eqp(t1,lf[205]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_895,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_902,a[2]=t7,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 633  sprintf */
t9=C_retrieve(lf[160]);
((C_proc4)C_retrieve_proc(t9))(4,t9,t8,C_retrieve2(lf[35],"translator"),lf[206]);}
else{
t7=(C_word)C_eqp(t1,lf[207]);
if(C_truep(t7)){
t8=lf[41]=C_SCHEME_TRUE;;
if(C_truep(C_retrieve2(lf[9],"osx"))){
t9=(C_word)C_a_i_cons(&a,2,lf[208],C_retrieve2(lf[57],"compile-options"));
t10=C_mutate(&lf[57],t9);
t11=t2;
f_855(2,t11,t10);}
else{
t9=t2;
f_855(2,t9,C_SCHEME_UNDEFINED);}}
else{
t8=(C_word)C_eqp(t1,lf[209]);
if(C_truep(t8)){
t9=lf[42]=C_SCHEME_TRUE;;
t10=t2;
f_855(2,t10,t9);}
else{
t9=(C_word)C_eqp(t1,lf[210]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_933,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 641  cons* */
t11=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t11))(5,t11,t10,lf[211],lf[212],C_retrieve2(lf[53],"translate-options"));}
else{
t10=(C_word)C_eqp(t1,lf[213]);
if(C_truep(t10)){
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_944,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 644  cons* */
t12=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t12))(5,t12,t11,lf[214],lf[215],C_retrieve2(lf[53],"translate-options"));}
else{
t11=(C_word)C_eqp(t1,lf[216]);
if(C_truep(t11)){
t12=lf[75]=C_SCHEME_TRUE;;
t13=t2;
f_855(2,t13,t12);}
else{
t12=(C_word)C_eqp(t1,lf[217]);
if(C_truep(t12)){
t13=lf[44]=C_SCHEME_TRUE;;
t14=lf[45]=C_SCHEME_TRUE;;
t15=t2;
f_855(2,t15,t14);}
else{
t13=(C_word)C_eqp(t1,lf[218]);
if(C_truep(t13)){
t14=lf[44]=C_SCHEME_TRUE;;
t15=lf[46]=C_SCHEME_TRUE;;
t16=t2;
f_855(2,t16,t15);}
else{
t14=(C_word)C_eqp(t1,lf[219]);
if(C_truep(t14)){
t15=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_977,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 654  print */
t16=*((C_word*)lf[126]+1);
((C_proc3)C_retrieve_proc(t16))(3,t16,t15,C_retrieve2(lf[164],"compiler"));}
else{
t15=(C_word)C_eqp(t1,lf[220]);
if(C_truep(t15)){
t16=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_989,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 655  print */
t17=*((C_word*)lf[126]+1);
((C_proc3)C_retrieve_proc(t17))(3,t17,t16,C_retrieve2(lf[155],"linker"));}
else{
t16=(C_word)C_eqp(t1,lf[221]);
if(C_truep(t16)){
t17=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1001,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 656  print */
t18=*((C_word*)lf[126]+1);
((C_proc3)C_retrieve_proc(t18))(3,t18,t17,C_retrieve2(lf[25],"home"));}
else{
t17=(C_word)C_eqp(t1,lf[222]);
if(C_truep(t17)){
t18=lf[44]=C_SCHEME_TRUE;;
t19=lf[47]=C_SCHEME_TRUE;;
t20=t2;
f_855(2,t20,t19);}
else{
t18=(C_word)C_eqp(t1,lf[223]);
if(C_truep(t18)){
t19=lf[67]=C_SCHEME_TRUE;;
t20=t2;
f_855(2,t20,t19);}
else{
t19=(C_word)C_eqp(t1,lf[224]);
t20=(C_truep(t19)?t19:(C_word)C_eqp(t1,lf[225]));
if(C_truep(t20)){
t21=lf[67]=C_SCHEME_TRUE;;
/* csc.scm: 664  t-options */
f_595(t2,(C_word)C_a_i_list(&a,1,lf[226]));}
else{
t21=(C_word)C_eqp(t1,lf[227]);
t22=(C_truep(t21)?t21:(C_word)C_eqp(t1,lf[228]));
if(C_truep(t22)){
t23=(C_word)C_a_i_cons(&a,2,lf[229],C_retrieve2(lf[57],"compile-options"));
t24=C_mutate(&lf[57],t23);
/* csc.scm: 667  t-options */
f_595(t2,(C_word)C_a_i_list(&a,1,lf[230]));}
else{
t23=(C_word)C_eqp(t1,lf[231]);
if(C_truep(t23)){
t24=lf[67]=C_SCHEME_TRUE;;
t25=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1058,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 670  t-options */
f_595(t25,(C_word)C_a_i_list(&a,1,lf[234]));}
else{
t24=(C_word)C_eqp(t1,lf[235]);
t25=(C_truep(t24)?t24:(C_word)C_eqp(t1,lf[236]));
if(C_truep(t25)){
t26=lf[69]=C_SCHEME_TRUE;;
/* csc.scm: 675  t-options */
f_595(t2,(C_word)C_a_i_list(&a,1,lf[237]));}
else{
t26=(C_word)C_eqp(t1,lf[238]);
t27=(C_truep(t26)?t26:(C_word)C_eqp(t1,lf[239]));
if(C_truep(t27)){
t28=lf[69]=C_SCHEME_TRUE;;
/* csc.scm: 678  t-options */
f_595(t2,(C_word)C_a_i_list(&a,1,lf[240]));}
else{
t28=(C_word)C_eqp(t1,lf[241]);
if(C_truep(t28)){
t29=lf[68]=C_SCHEME_TRUE;;
t30=t2;
f_855(2,t30,t29);}
else{
t29=(C_word)C_eqp(t1,lf[242]);
if(C_truep(t29)){
t30=lf[70]=C_SCHEME_TRUE;;
t31=t2;
f_855(2,t31,t30);}
else{
t30=(C_word)C_eqp(t1,lf[243]);
if(C_truep(t30)){
t31=lf[69]=C_SCHEME_TRUE;;
t32=t2;
f_855(2,t32,t31);}
else{
t31=(C_word)C_eqp(t1,lf[244]);
t32=(C_truep(t31)?t31:(C_word)C_eqp(t1,lf[245]));
if(C_truep(t32)){
t33=lf[43]=C_SCHEME_TRUE;;
t34=(C_word)C_a_i_cons(&a,2,lf[246],C_retrieve2(lf[57],"compile-options"));
t35=C_mutate(&lf[57],t34);
t36=t2;
f_855(2,t36,t35);}
else{
t33=(C_word)C_eqp(t1,lf[247]);
t34=(C_truep(t33)?t33:(C_word)C_eqp(t1,lf[248]));
if(C_truep(t34)){
t35=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1139,a[2]=((C_word*)t0)[5],a[3]=t2,a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* csc.scm: 686  check */
f_602(t35,t1,((C_word*)((C_word*)t0)[6])[1],C_SCHEME_END_OF_LIST);}
else{
t35=(C_word)C_eqp(t1,lf[250]);
t36=(C_truep(t35)?t35:(C_word)C_eqp(t1,lf[251]));
if(C_truep(t36)){
t37=lf[77]=C_SCHEME_TRUE;;
if(C_truep(lf[3])){
t38=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1179,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 693  cons* */
t39=C_retrieve(lf[115]);
((C_proc6)C_retrieve_proc(t39))(6,t39,t38,lf[253],lf[254],lf[255],C_retrieve2(lf[65],"link-options"));}
else{
t38=t2;
f_855(2,t38,C_SCHEME_UNDEFINED);}}
else{
t37=(C_word)C_eqp(t1,lf[256]);
if(C_truep(t37)){
t38=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1192,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 696  check */
f_602(t38,t1,((C_word*)((C_word*)t0)[6])[1],C_SCHEME_END_OF_LIST);}
else{
t38=(C_word)C_eqp(t1,lf[258]);
if(C_truep(t38)){
t39=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1216,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 701  check */
f_602(t39,t1,((C_word*)((C_word*)t0)[6])[1],C_SCHEME_END_OF_LIST);}
else{
t39=(C_word)C_eqp(t1,lf[259]);
t40=(C_truep(t39)?t39:(C_word)C_eqp(t1,lf[260]));
if(C_truep(t40)){
t41=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1237,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 705  cons* */
t42=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t42))(5,t42,t41,lf[261],lf[262],((C_word*)((C_word*)t0)[6])[1]);}
else{
t41=(C_word)C_eqp(t1,lf[263]);
if(C_truep(t41)){
t42=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1247,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 706  cons* */
t43=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t43))(5,t43,t42,lf[264],lf[265],((C_word*)((C_word*)t0)[6])[1]);}
else{
t42=(C_word)C_eqp(t1,lf[266]);
if(C_truep(t42)){
t43=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1257,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 707  cons* */
t44=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t44))(5,t44,t43,lf[267],lf[268],((C_word*)((C_word*)t0)[6])[1]);}
else{
t43=(C_word)C_eqp(t1,lf[269]);
if(C_truep(t43)){
t44=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1267,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 708  cons* */
t45=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t45))(5,t45,t44,lf[270],lf[271],((C_word*)((C_word*)t0)[6])[1]);}
else{
t44=(C_word)C_eqp(t1,lf[272]);
if(C_truep(t44)){
t45=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1277,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 709  cons* */
t46=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t46))(5,t46,t45,lf[273],lf[274],((C_word*)((C_word*)t0)[6])[1]);}
else{
t45=(C_word)C_eqp(t1,lf[275]);
if(C_truep(t45)){
t46=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1287,a[2]=t2,a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 710  cons* */
t47=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t47))(5,t47,t46,lf[276],lf[277],((C_word*)((C_word*)t0)[6])[1]);}
else{
t46=(C_word)C_eqp(t1,lf[278]);
if(C_truep(t46)){
t47=lf[67]=C_SCHEME_TRUE;;
t48=lf[48]=C_SCHEME_TRUE;;
t49=t2;
f_855(2,t49,t48);}
else{
t47=(C_word)C_eqp(t1,lf[279]);
t48=(*a=C_CLOSURE_TYPE|8,a[1]=(C_word)f_1304,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[6],a[6]=t1,a[7]=t2,a[8]=((C_word*)t0)[3],tmp=(C_word)a,a+=9,tmp);
if(C_truep(t47)){
t49=t48;
f_1304(t49,t47);}
else{
t49=(C_word)C_eqp(t1,lf[339]);
t50=t48;
f_1304(t50,(C_truep(t49)?t49:(C_word)C_eqp(t1,lf[340])));}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}}

/* k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_1304(C_word t0,C_word t1){
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
C_word ab[49],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1304,NULL,2,t0,t1);}
if(C_truep(t1)){
/* csc.scm: 715  shared-build */
f_641(((C_word*)t0)[7],C_SCHEME_FALSE);}
else{
t2=(C_word)C_eqp(((C_word*)t0)[6],lf[280]);
t3=(C_truep(t2)?t2:(C_word)C_eqp(((C_word*)t0)[6],lf[281]));
if(C_truep(t3)){
/* csc.scm: 717  shared-build */
f_641(((C_word*)t0)[7],C_SCHEME_TRUE);}
else{
t4=(C_word)C_eqp(((C_word*)t0)[6],lf[282]);
if(C_truep(t4)){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1328,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 719  check */
f_602(t5,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t5=(C_word)C_eqp(((C_word*)t0)[6],lf[283]);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1345,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 723  check */
f_602(t6,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t6=(C_word)C_eqp(((C_word*)t0)[6],lf[284]);
if(C_truep(t6)){
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1362,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 727  check */
f_602(t7,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t7=(C_word)C_eqp(((C_word*)t0)[6],lf[285]);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1379,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 731  check */
f_602(t8,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t8=(C_word)C_eqp(((C_word*)t0)[6],lf[286]);
if(C_truep(t8)){
t9=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1396,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 735  check */
f_602(t9,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t9=(C_word)C_eqp(((C_word*)t0)[6],lf[288]);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1417,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 738  check */
f_602(t10,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t10=(C_word)C_eqp(((C_word*)t0)[6],lf[290]);
if(C_truep(t10)){
if(C_truep(lf[3])){
t11=((C_word*)t0)[7];
f_855(2,t11,C_SCHEME_UNDEFINED);}
else{
t11=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1446,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 742  append */
t12=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t12))(4,t12,t11,C_retrieve2(lf[65],"link-options"),lf[291]);}}
else{
t11=(C_word)C_eqp(((C_word*)t0)[6],lf[292]);
if(C_truep(t11)){
t12=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1455,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 744  check */
f_602(t12,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t12=(C_word)C_eqp(((C_word*)t0)[6],lf[293]);
if(C_truep(t12)){
t13=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1480,a[2]=((C_word*)t0)[7],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 748  t-options */
f_595(t13,(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]));}
else{
t13=(C_word)C_eqp(((C_word*)t0)[6],lf[296]);
if(C_truep(t13)){
t14=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1491,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 752  check */
f_602(t14,((C_word*)t0)[6],((C_word*)((C_word*)t0)[5])[1],C_SCHEME_END_OF_LIST);}
else{
t14=(C_word)C_eqp(((C_word*)t0)[6],lf[300]);
if(C_truep(t14)){
t15=((C_word*)t0)[7];
f_855(2,t15,C_SCHEME_FALSE);}
else{
t15=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1530,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[7],a[6]=((C_word*)t0)[5],a[7]=((C_word*)t0)[6],tmp=(C_word)a,a+=8,tmp);
t16=((C_word*)t0)[6];
if(C_truep((C_truep((C_word)C_eqp(t16,lf[338]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t16,lf[334]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t17=(C_word)C_eqp(((C_word*)t0)[6],lf[334]);
if(C_truep(t17)){
t18=C_mutate(&lf[49],C_retrieve2(lf[294],"unsafe-library-files"));
t19=C_mutate(&lf[51],C_retrieve2(lf[295],"unsafe-shared-library-files"));
t20=t15;
f_1530(t20,t19);}
else{
t18=t15;
f_1530(t18,C_SCHEME_UNDEFINED);}}
else{
t17=t15;
f_1530(t17,C_SCHEME_UNDEFINED);}}}}}}}}}}}}}}}

/* k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_1530(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1530,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1533,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=(C_word)C_eqp(((C_word*)t0)[7],lf[337]);
if(C_truep(t3)){
t4=lf[71]=C_SCHEME_TRUE;;
t5=lf[69]=C_SCHEME_TRUE;;
t6=t2;
f_1533(t6,t5);}
else{
t4=t2;
f_1533(t4,C_SCHEME_UNDEFINED);}}

/* k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_1533(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1533,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_1536,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],a[7]=((C_word*)t0)[7],tmp=(C_word)a,a+=8,tmp);
t3=((C_word*)t0)[7];
if(C_truep((C_truep((C_word)C_eqp(t3,lf[333]))?C_SCHEME_TRUE:(C_truep((C_word)C_eqp(t3,lf[334]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t4=C_mutate(&lf[61],C_retrieve2(lf[335],"best-compilation-optimization-options"));
t5=C_mutate(&lf[63],C_retrieve2(lf[336],"best-linking-optimization-options"));
t6=t2;
f_1536(t6,t5);}
else{
t4=t2;
f_1536(t4,C_SCHEME_UNDEFINED);}}

/* k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_1536(C_word t0,C_word t1){
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
C_word ab[22],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1536,NULL,2,t0,t1);}
t2=(C_word)C_i_assq(((C_word*)t0)[7],lf[301]);
if(C_truep(t2)){
t3=(C_word)C_i_cadr(t2);
t4=(C_word)C_a_i_cons(&a,2,t3,((C_word*)((C_word*)t0)[6])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[6])+1,t4);
t6=((C_word*)t0)[5];
f_855(2,t6,t5);}
else{
if(C_truep((C_word)C_i_memq(((C_word*)t0)[7],lf[302]))){
/* csc.scm: 769  t-options */
f_595(((C_word*)t0)[5],(C_word)C_a_i_list(&a,1,((C_word*)t0)[3]));}
else{
if(C_truep((C_word)C_i_memq(((C_word*)t0)[7],lf[303]))){
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1568,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
/* csc.scm: 771  check */
f_602(t3,((C_word*)t0)[7],((C_word*)((C_word*)t0)[6])[1],C_SCHEME_END_OF_LIST);}
else{
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1587,a[2]=((C_word*)t0)[7],a[3]=((C_word*)t0)[6],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t4=(C_word)C_i_string_length(((C_word*)t0)[3]);
if(C_truep((C_word)C_i_greaterp(t4,C_fix(2)))){
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1913,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 776  substring */
t6=*((C_word*)lf[305]+1);
((C_proc5)C_retrieve_proc(t6))(5,t6,t5,((C_word*)t0)[3],C_fix(0),C_fix(2));}
else{
t5=t3;
f_1587(t5,C_SCHEME_FALSE);}}}}}

/* k1911 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1913(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1587(t2,(C_word)C_i_string_equal_p(lf[332],t1));}

/* k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_1587(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1587,NULL,2,t0,t1);}
if(C_truep(t1)){
/* csc.scm: 777  t-options */
f_595(((C_word*)t0)[5],(C_word)C_a_i_list(&a,1,((C_word*)t0)[4]));}
else{
t2=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1596,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[4],tmp=(C_word)a,a+=7,tmp);
t3=(C_word)C_i_string_length(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_greaterp(t3,C_fix(1)))){
t4=(C_word)C_i_string_ref(((C_word*)t0)[4],C_fix(0));
t5=t2;
f_1596(t5,(C_word)C_eqp(C_make_character(45),t4));}
else{
t4=t2;
f_1596(t4,C_SCHEME_FALSE);}}}

/* k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_1596(C_word t0,C_word t1){
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
C_word ab[51],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1596,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_string_ref(((C_word*)t0)[6],C_fix(1));
t3=(C_word)C_eqp(C_make_character(108),t2);
if(C_truep(t3)){
if(C_truep(lf[3])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1609,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1617,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1621,a[2]=t5,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 783  substring */
t7=*((C_word*)lf[305]+1);
((C_proc4)C_retrieve_proc(t7))(4,t7,t6,((C_word*)t0)[6],C_fix(2));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1625,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_a_i_list(&a,1,((C_word*)t0)[6]);
/* csc.scm: 784  append */
t6=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,C_retrieve2(lf[65],"link-options"),t5);}}
else{
t4=(C_word)C_i_string_ref(((C_word*)t0)[6],C_fix(1));
t5=(C_word)C_eqp(C_make_character(76),t4);
if(C_truep(t5)){
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1639,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t7=(C_word)C_a_i_list(&a,1,((C_word*)t0)[6]);
/* csc.scm: 786  append */
t8=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t8))(4,t8,t6,C_retrieve2(lf[65],"link-options"),t7);}
else{
t6=(C_word)C_i_string_ref(((C_word*)t0)[6],C_fix(1));
t7=(C_word)C_eqp(C_make_character(73),t6);
if(C_truep(t7)){
t8=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1653,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t9=(C_word)C_a_i_list(&a,1,((C_word*)t0)[6]);
/* csc.scm: 788  append */
t10=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t10))(4,t10,t8,C_retrieve2(lf[57],"compile-options"),t9);}
else{
t8=(C_word)C_i_string_ref(((C_word*)t0)[6],C_fix(1));
t9=(C_word)C_eqp(C_make_character(68),t8);
if(C_truep(t9)){
t10=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1670,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 790  substring */
t11=*((C_word*)lf[305]+1);
((C_proc4)C_retrieve_proc(t11))(4,t11,t10,((C_word*)t0)[6],C_fix(2));}
else{
t10=(C_word)C_i_string_ref(((C_word*)t0)[6],C_fix(1));
t11=(C_word)C_eqp(C_make_character(70),t10);
if(C_truep(t11)){
if(C_truep(C_retrieve2(lf[9],"osx"))){
t12=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1683,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t13=(C_word)C_a_i_list(&a,1,((C_word*)t0)[6]);
/* csc.scm: 793  append */
t14=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t14))(4,t14,t12,C_retrieve2(lf[57],"compile-options"),t13);}
else{
t12=((C_word*)t0)[5];
f_855(2,t12,C_SCHEME_UNDEFINED);}}
else{
t12=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1693,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[6],a[5]=((C_word*)t0)[5],tmp=(C_word)a,a+=6,tmp);
t13=(C_word)C_i_string_length(((C_word*)t0)[6]);
if(C_truep((C_word)C_i_greaterp(t13,C_fix(3)))){
t14=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1762,a[2]=t12,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 794  substring */
t15=*((C_word*)lf[305]+1);
((C_proc5)C_retrieve_proc(t15))(5,t15,t14,((C_word*)t0)[6],C_fix(0),C_fix(4));}
else{
t14=t12;
f_1693(t14,C_SCHEME_FALSE);}}}}}}}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1792,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[6],tmp=(C_word)a,a+=5,tmp);
/* csc.scm: 803  file-exists? */
t3=C_retrieve(lf[183]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[6]);}}

/* k1790 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1792(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1792,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1797,a[2]=((C_word*)t0)[4],a[3]=lf[316],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1803,a[2]=((C_word*)t0)[4],a[3]=lf[329],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 804  ##sys#call-with-values */
C_call_with_values(4,0,((C_word*)t0)[3],t2,t3);}
else{
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1876,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[2],tmp=(C_word)a,a+=5,tmp);
/* csc.scm: 820  string-append */
t3=*((C_word*)lf[29]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[4],lf[331]);}}

/* k1874 in k1790 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1876(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1876,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1882,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],a[5]=t1,tmp=(C_word)a,a+=6,tmp);
/* csc.scm: 821  file-exists? */
t3=C_retrieve(lf[183]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,t1);}

/* k1880 in k1874 in k1790 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1882(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1882,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[5],((C_word*)((C_word*)t0)[4])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[4])+1,t2);
t4=((C_word*)t0)[3];
f_855(2,t4,t3);}
else{
/* csc.scm: 823  quit */
f_447(((C_word*)t0)[3],lf[330],(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]));}}

/* a1802 in k1790 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1803(C_word c,C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
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
C_word t21;
C_word t22;
C_word t23;
C_word t24;
C_word t25;
C_word ab[22],*a=ab;
if(c!=5) C_bad_argc_2(c,5,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr5,(void*)f_1803,5,t0,t1,t2,t3,t4);}
t5=t4;
if(C_truep(t5)){
t6=t4;
if(C_truep((C_truep((C_word)C_i_equalp(t6,lf[317]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t6,lf[318]))?C_SCHEME_TRUE:C_SCHEME_FALSE)))){
t7=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[37],"c-files"));
t8=C_mutate(&lf[37],t7);
t9=t1;
((C_proc2)(void*)(*((C_word*)t9+1)))(2,t9,t8);}
else{
t7=t4;
if(C_truep((C_truep((C_word)C_i_equalp(t7,lf[319]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t7,lf[320]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t7,lf[321]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t7,lf[322]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t7,lf[323]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))))){
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1833,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[9],"osx"))){
t9=(C_word)C_a_i_cons(&a,2,lf[324],C_retrieve2(lf[57],"compile-options"));
t10=C_mutate(&lf[57],t9);
t11=t8;
f_1833(t11,t10);}
else{
t9=t8;
f_1833(t9,C_SCHEME_UNDEFINED);}}
else{
t8=t4;
if(C_truep((C_truep((C_word)C_i_equalp(t8,lf[325]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t8,lf[326]))?C_SCHEME_TRUE:(C_truep((C_word)C_i_equalp(t8,lf[327]))?C_SCHEME_TRUE:C_SCHEME_FALSE))))){
t9=lf[42]=C_SCHEME_TRUE;;
t10=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[37],"c-files"));
t11=C_mutate(&lf[37],t10);
t12=t1;
((C_proc2)(void*)(*((C_word*)t12+1)))(2,t12,t11);}
else{
t9=(C_word)C_i_string_equal_p(t4,C_retrieve2(lf[166],"object-extension"));
t10=(C_truep(t9)?t9:(C_word)C_i_string_equal_p(t4,C_retrieve2(lf[328],"library-extension")));
if(C_truep(t10)){
t11=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[39],"object-files"));
t12=C_mutate(&lf[39],t11);
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}
else{
t11=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[36],"scheme-files"));
t12=C_mutate(&lf[36],t11);
t13=t1;
((C_proc2)(void*)(*((C_word*)t13+1)))(2,t13,t12);}}}}}
else{
t6=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],C_retrieve2(lf[36],"scheme-files"));
t7=C_mutate(&lf[36],t6);
t8=t1;
((C_proc2)(void*)(*((C_word*)t8+1)))(2,t8,t7);}}

/* k1831 in a1802 in k1790 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_1833(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1833,NULL,2,t0,t1);}
t2=lf[41]=C_SCHEME_TRUE;;
t3=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_retrieve2(lf[37],"c-files"));
t4=C_mutate(&lf[37],t3);
t5=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}

/* a1796 in k1790 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1797,2,t0,t1);}
/* csc.scm: 804  decompose-pathname */
t2=C_retrieve(lf[315]);
((C_proc3)C_retrieve_proc(t2))(3,t2,t1,((C_word*)t0)[2]);}

/* k1760 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1762(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
f_1693(t2,(C_word)C_i_string_equal_p(lf[314],t1));}

/* k1691 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_1693(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_1693,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1697,a[2]=((C_word*)t0)[5],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[4]);
/* csc.scm: 795  append */
t4=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,C_retrieve2(lf[65],"link-options"),t3);}
else{
t2=(C_word)C_i_string_length(((C_word*)t0)[4]);
if(C_truep((C_word)C_i_greaterp(t2,C_fix(2)))){
t3=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1745,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
/* csc.scm: 797  string->list */
t4=*((C_word*)lf[117]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[4]);}
else{
/* csc.scm: 802  quit */
f_447(((C_word*)t0)[5],lf[313],(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]));}}}

/* k1743 in k1691 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1745,2,t0,t1);}
t2=(C_word)C_i_cdr(t1);
t3=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_1741,a[2]=((C_word*)t0)[2],a[3]=t2,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm: 798  lset-difference */
t4=C_retrieve(lf[310]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,*((C_word*)lf[311]+1),t2,lf[312]);}

/* k1739 in k1743 in k1691 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1741(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[14],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1741,2,t0,t1);}
if(C_truep((C_word)C_i_nullp(t1))){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1720,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1724,a[2]=((C_word*)t0)[5],a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1726,a[2]=lf[308],tmp=(C_word)a,a+=3,tmp);
/* map */
t5=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,t4,((C_word*)t0)[3]);}
else{
/* csc.scm: 801  quit */
f_447(((C_word*)t0)[4],lf[309],(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]));}}

/* a1725 in k1739 in k1743 in k1691 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1726(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[2],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1726,3,t0,t1,t2);}
t3=(C_word)C_a_i_string(&a,1,t2);
/* csc.scm: 800  string-append */
t4=*((C_word*)lf[29]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t1,lf[307],t3);}

/* k1722 in k1739 in k1743 in k1691 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1724(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 800  append */
t2=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],t1,((C_word*)((C_word*)t0)[2])[1]);}

/* k1718 in k1739 in k1743 in k1691 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1720(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_855(2,t3,t2);}

/* k1695 in k1691 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[65],t1);
t3=((C_word*)t0)[2];
f_855(2,t3,t2);}

/* k1681 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1683(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[57],t1);
t3=((C_word*)t0)[2];
f_855(2,t3,t2);}

/* k1668 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1670(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1670,2,t0,t1);}
/* csc.scm: 790  t-options */
f_595(((C_word*)t0)[2],(C_word)C_a_i_list(&a,2,lf[306],t1));}

/* k1651 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1653(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[57],t1);
t3=((C_word*)t0)[2];
f_855(2,t3,t2);}

/* k1637 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1639(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[65],t1);
t3=((C_word*)t0)[2];
f_855(2,t3,t2);}

/* k1623 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1625(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[65],t1);
t3=((C_word*)t0)[2];
f_855(2,t3,t2);}

/* k1619 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1621(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 783  string-append */
t2=*((C_word*)lf[29]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[304]);}

/* k1615 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1617(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1617,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* csc.scm: 783  append */
t3=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],C_retrieve2(lf[39],"object-files"),t2);}

/* k1607 in k1594 in k1585 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1609(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[39],t1);
t3=((C_word*)t0)[2];
f_855(2,t3,t2);}

/* k1566 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1568(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1568,2,t0,t1);}
t2=(C_word)C_i_car(((C_word*)((C_word*)t0)[5])[1]);
t3=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_1574,a[2]=t2,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],a[6]=((C_word*)t0)[5],tmp=(C_word)a,a+=7,tmp);
/* csc.scm: 773  string->number */
C_string_to_number(3,0,t3,t2);}

/* k1572 in k1566 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1574(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1574,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1577,a[2]=((C_word*)t0)[5],a[3]=((C_word*)t0)[6],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 774  t-options */
f_595(t2,(C_word)C_a_i_list(&a,2,((C_word*)t0)[3],((C_word*)t0)[2]));}

/* k1575 in k1572 in k1566 in k1534 in k1531 in k1528 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1577(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_855(2,t4,t3);}

/* k1489 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1491(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1491,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1521,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 753  build-platform */
t3=C_retrieve(lf[299]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k1519 in k1489 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1521(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1521,2,t0,t1);}
t2=(C_word)C_eqp(lf[297],t1);
if(C_truep(t2)){
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1501,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1513,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_word)C_i_car(((C_word*)((C_word*)t0)[3])[1]);
/* csc.scm: 754  string-append */
t6=*((C_word*)lf[29]+1);
((C_proc4)C_retrieve_proc(t6))(4,t6,t4,lf[298],t5);}
else{
t3=((C_word*)t0)[2];
f_855(2,t3,C_SCHEME_UNDEFINED);}}

/* k1511 in k1519 in k1489 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1513,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,1,t1);
/* csc.scm: 754  append */
t3=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[2],C_retrieve2(lf[65],"link-options"),t2);}

/* k1499 in k1519 in k1489 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1501(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(&lf[65],t1);
t3=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
f_855(2,t5,t4);}

/* k1478 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1480(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(&lf[49],C_retrieve2(lf[294],"unsafe-library-files"));
t3=C_mutate(&lf[51],C_retrieve2(lf[295],"unsafe-shared-library-files"));
t4=((C_word*)t0)[2];
f_855(2,t4,t3);}

/* k1453 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1455(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1455,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1459,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1467,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_car(((C_word*)((C_word*)t0)[3])[1]);
/* csc.scm: 745  string-split */
t5=C_retrieve(lf[289]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}

/* k1465 in k1453 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1467(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 745  append */
t2=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[65],"link-options"),t1);}

/* k1457 in k1453 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1459(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(&lf[65],t1);
t3=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
f_855(2,t5,t4);}

/* k1444 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[65],t1);
t3=((C_word*)t0)[2];
f_855(2,t3,t2);}

/* k1415 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1417(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1417,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1421,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1429,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_car(((C_word*)((C_word*)t0)[3])[1]);
/* csc.scm: 739  string-split */
t5=C_retrieve(lf[289]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t3,t4);}

/* k1427 in k1415 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1429(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 739  append */
t2=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[57],"compile-options"),t1);}

/* k1419 in k1415 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1421(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_mutate(&lf[57],t1);
t3=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=((C_word*)t0)[2];
f_855(2,t5,t4);}

/* k1394 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1396(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1396,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1400,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_car(((C_word*)((C_word*)t0)[3])[1]);
t4=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
/* csc.scm: 736  cons* */
t5=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t2,lf[287],t3,t4);}

/* k1398 in k1394 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1400(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_855(2,t3,t2);}

/* k1377 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1379(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_i_car(((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(&lf[155],t2);
t4=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[2];
f_855(2,t6,t5);}

/* k1360 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1362(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_i_car(((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(&lf[163],t2);
t4=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[2];
f_855(2,t6,t5);}

/* k1343 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1345(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_i_car(((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(&lf[164],t2);
t4=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[2];
f_855(2,t6,t5);}

/* k1326 in k1302 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1328(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_i_car(((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(&lf[35],t2);
t4=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t5=C_mutate(((C_word *)((C_word*)t0)[3])+1,t4);
t6=((C_word*)t0)[2];
f_855(2,t6,t5);}

/* k1285 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1287(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_855(2,t3,t2);}

/* k1275 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1277(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_855(2,t3,t2);}

/* k1265 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1267(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_855(2,t3,t2);}

/* k1255 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1257(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_855(2,t3,t2);}

/* k1245 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1247(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_855(2,t3,t2);}

/* k1235 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(((C_word *)((C_word*)t0)[3])+1,t1);
t3=((C_word*)t0)[2];
f_855(2,t3,t2);}

/* k1214 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1216(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word *a;
t2=(C_word)C_i_car(((C_word*)((C_word*)t0)[3])[1]);
t3=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t4=C_mutate(((C_word *)((C_word*)t0)[3])+1,t3);
t5=C_mutate(&lf[66],t2);
t6=((C_word*)t0)[2];
f_855(2,t6,t5);}

/* k1190 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1192(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1192,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1195,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[9],"osx"))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1203,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_car(((C_word*)((C_word*)t0)[3])[1]);
/* csc.scm: 698  cons* */
t5=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,lf[257],t4,C_retrieve2(lf[65],"link-options"));}
else{
t3=t2;
f_1195(t3,C_SCHEME_UNDEFINED);}}

/* k1201 in k1190 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1203(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[65],t1);
t3=((C_word*)t0)[2];
f_1195(t3,t2);}

/* k1193 in k1190 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_1195(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_855(2,t4,t3);}

/* k1177 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1179(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1179,2,t0,t1);}
t2=C_mutate(&lf[65],t1);
t3=(C_word)C_a_i_cons(&a,2,lf[252],C_retrieve2(lf[57],"compile-options"));
t4=C_mutate(&lf[57],t3);
t5=((C_word*)t0)[2];
f_855(2,t5,t4);}

/* k1137 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1139(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1139,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1143,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_car(((C_word*)((C_word*)t0)[4])[1]);
t4=(C_word)C_a_i_list(&a,1,t3);
/* csc.scm: 687  append */
t5=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t2,C_retrieve2(lf[76],"required-extensions"),t4);}

/* k1141 in k1137 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1143,2,t0,t1);}
t2=C_mutate(&lf[76],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1146,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_i_car(((C_word*)((C_word*)t0)[4])[1]);
/* csc.scm: 688  t-options */
f_595(t3,(C_word)C_a_i_list(&a,2,lf[249],t4));}

/* k1144 in k1141 in k1137 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1146(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_word)C_i_cdr(((C_word*)((C_word*)t0)[3])[1]);
t3=C_mutate(((C_word *)((C_word*)t0)[3])+1,t2);
t4=((C_word*)t0)[2];
f_855(2,t4,t3);}

/* k1056 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1058(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1058,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,lf[232],C_retrieve2(lf[57],"compile-options"));
t3=C_mutate(&lf[57],t2);
t4=(C_word)C_a_i_cons(&a,2,lf[233],C_retrieve2(lf[65],"link-options"));
t5=C_mutate(&lf[65],t4);
t6=((C_word*)t0)[2];
f_855(2,t6,t5);}

/* k999 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1001(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 656  exit */
t2=C_retrieve(lf[12]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k987 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_989(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 655  exit */
t2=C_retrieve(lf[12]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k975 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_977(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 654  exit */
t2=C_retrieve(lf[12]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_fix(0));}

/* k942 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_944(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(&lf[53],t1);
t3=lf[74]=C_SCHEME_TRUE;;
t4=((C_word*)t0)[2];
f_855(2,t4,t3);}

/* k931 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_933(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=C_mutate(&lf[53],t1);
t3=lf[73]=C_SCHEME_TRUE;;
t4=((C_word*)t0)[2];
f_855(2,t4,t3);}

/* k900 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_902(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 633  system */
t2=C_retrieve(lf[125]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k893 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_895(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 634  exit */
t2=C_retrieve(lf[12]);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k884 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_886(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 630  print */
t2=*((C_word*)lf[126]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k877 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_879(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 631  exit */
t2=C_retrieve(lf[12]);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k865 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_867(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 628  exit */
t2=C_retrieve(lf[12]);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k853 in k850 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_855(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 824  loop */
t2=((C_word*)((C_word*)t0)[4])[1];
f_678(t2,((C_word*)t0)[3],((C_word*)((C_word*)t0)[2])[1]);}

/* k841 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 586  print* */
t2=*((C_word*)lf[198]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_make_character(32));}

/* k808 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_810(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_810,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_813,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[46],"show-ldflags"))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_836,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 587  linker-options */
f_2574(t3);}
else{
t3=t2;
f_813(2,t3,C_SCHEME_UNDEFINED);}}

/* k834 in k808 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_836(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 587  print* */
t2=*((C_word*)lf[198]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_make_character(32));}

/* k811 in k808 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_813(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_813,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_816,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[47],"show-libs"))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_829,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 588  linker-libraries */
f_2620(t3,(C_word)C_a_i_list(&a,1,C_SCHEME_TRUE));}
else{
t3=t2;
f_816(2,t3,C_SCHEME_UNDEFINED);}}

/* k827 in k811 in k808 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_829(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 588  print* */
t2=*((C_word*)lf[198]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_make_character(32));}

/* k814 in k811 in k808 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_816(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_816,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_819,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 589  newline */
t3=*((C_word*)lf[197]+1);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k817 in k814 in k811 in k808 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_819(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 590  exit */
t2=C_retrieve(lf[12]);
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_688(C_word c,C_word t0,C_word t1){
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
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_688,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_691,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(C_retrieve2(lf[36],"scheme-files")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_735,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_word)C_i_nullp(C_retrieve2(lf[37],"c-files"));
t5=(C_truep(t4)?(C_word)C_i_nullp(C_retrieve2(lf[39],"object-files")):C_SCHEME_FALSE);
if(C_truep(t5)){
/* csc.scm: 596  quit */
f_447(t3,lf[171],C_SCHEME_END_OF_LIST);}
else{
t6=t3;
f_735(2,t6,C_SCHEME_UNDEFINED);}}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_773,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[72],"shared"))?(C_word)C_i_not(C_retrieve2(lf[43],"embedded")):C_SCHEME_FALSE);
if(C_truep(t4)){
t5=(C_word)C_a_i_cons(&a,2,lf[196],C_retrieve2(lf[53],"translate-options"));
t6=C_mutate(&lf[53],t5);
t7=t3;
f_773(t7,t6);}
else{
t5=t3;
f_773(t5,C_SCHEME_UNDEFINED);}}}

/* k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_773(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_773,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_776,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[66],"target-filename"))){
t3=t2;
f_776(t3,C_SCHEME_UNDEFINED);}
else{
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_783,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[72],"shared"))){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_790,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 609  last */
t5=C_retrieve(lf[170]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,C_retrieve2(lf[36],"scheme-files"));}
else{
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_797,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 610  last */
t5=C_retrieve(lf[170]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,C_retrieve2(lf[36],"scheme-files"));}}}

/* k795 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_797(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 610  pathname-replace-extension */
t2=C_retrieve(lf[151]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_retrieve2(lf[169],"executable-extension"));}

/* k788 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_790(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 609  pathname-replace-extension */
t2=C_retrieve(lf[151]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,C_retrieve2(lf[168],"shared-library-extension"));}

/* k781 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_783(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[66],t1);
t3=((C_word*)t0)[2];
f_776(t3,t2);}

/* k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_776(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_776,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1983,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_1991,a[2]=lf[195],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2250,a[2]=t3,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 875  reverse */
t5=*((C_word*)lf[86]+1);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,C_retrieve2(lf[36],"scheme-files"));}

/* k2248 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2250(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1991(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_1991,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_1995,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 832  pathname-replace-extension */
t4=C_retrieve(lf[151]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,t2,lf[194]);}

/* k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1995(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1995,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_1998,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2228,a[2]=t1,a[3]=t2,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2234,a[2]=t1,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 833  file-exists? */
t5=C_retrieve(lf[183]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t4,t1);}

/* k2232 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2234(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2234,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2237,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 834  with-input-from-file */
t3=C_retrieve(lf[182]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,((C_word*)t0)[2],C_retrieve(lf[180]));}
else{
t2=((C_word*)t0)[3];
f_2228(t2,C_SCHEME_FALSE);}}

/* k2235 in k2232 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2237(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=(C_word)C_eofp(t1);
t3=((C_word*)t0)[2];
f_2228(t3,(C_truep(t2)?t2:(C_word)C_i_string_equal_p(lf[193],t1)));}

/* k2226 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_2228(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* csc.scm: 836  delete-file* */
t2=C_retrieve2(lf[128],"delete-file*");
f_2821(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}
else{
t2=((C_word*)t0)[3];
f_1998(2,t2,C_SCHEME_UNDEFINED);}}

/* k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1998(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_1998,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2001,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_i_length(C_retrieve2(lf[36],"scheme-files"));
t4=(C_word)C_i_nequalp(C_fix(1),t3);
t5=(C_truep(t4)?C_retrieve2(lf[66],"target-filename"):((C_word*)t0)[2]);
t6=(C_truep(C_retrieve2(lf[41],"cpp-mode"))?lf[190]:(C_truep(C_retrieve2(lf[42],"objc-mode"))?lf[191]:lf[192]));
/* csc.scm: 837  pathname-replace-extension */
t7=C_retrieve(lf[151]);
((C_proc4)C_retrieve_proc(t7))(4,t7,t2,t5,t6);}

/* k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2001(C_word c,C_word t0,C_word t1){
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
C_word ab[31],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2001,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2004,a[2]=t1,a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2161,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2165,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2169,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2173,a[2]=((C_word*)t0)[2],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(C_truep(C_retrieve2(lf[71],"to-stdout"))?lf[185]:(C_word)C_a_i_list(&a,2,lf[186],t1));
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2181,a[2]=t7,a[3]=t6,tmp=(C_word)a,a+=4,tmp);
t9=C_retrieve2(lf[73],"static");
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2192,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t9)){
t11=t10;
f_2192(t11,t9);}
else{
t11=C_retrieve2(lf[74],"static-libs");
t12=t10;
f_2192(t12,(C_truep(t11)?t11:C_retrieve2(lf[75],"static-extensions")));}}

/* k2190 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_2192(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2192,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2197,a[2]=lf[189],tmp=(C_word)a,a+=3,tmp);
/* map */
t3=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t3+1)))(4,t3,((C_word*)t0)[2],t2,C_retrieve2(lf[76],"required-extensions"));}
else{
t2=((C_word*)t0)[2];
f_2181(2,t2,C_SCHEME_END_OF_LIST);}}

/* a2196 in k2190 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2197(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2197,3,t0,t1,t2);}
/* csc.scm: 853  conc */
t3=C_retrieve(lf[187]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,lf[188],t2);}

/* k2179 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2181(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2181,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2185,a[2]=t1,a[3]=((C_word*)t0)[2],a[4]=((C_word*)t0)[3],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2189,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 855  append */
t4=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_retrieve2(lf[53],"translate-options"),C_SCHEME_END_OF_LIST);}

/* k2187 in k2179 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2189(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[81],"quote-option"),t1);}

/* k2183 in k2179 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2185(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 848  append */
t2=*((C_word*)lf[83]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2171 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2173(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 847  cons* */
t2=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],C_retrieve2(lf[35],"translator"),((C_word*)t0)[2],t1);}

/* k2167 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2169(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 846  string-intersperse */
t2=C_retrieve(lf[79]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],t1,lf[184]);}

/* k2163 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2165(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 845  system* */
t2=C_retrieve2(lf[122],"system*");
f_2796(3,t2,((C_word*)t0)[2],t1);}

/* k2159 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2161(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_i_zerop(t1))){
t2=((C_word*)t0)[2];
f_2004(2,t2,C_SCHEME_UNDEFINED);}
else{
/* csc.scm: 857  exit */
t2=C_retrieve(lf[12]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_retrieve2(lf[121],"last-exit-code"));}}

/* k2002 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2004(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2004,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2008,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
/* csc.scm: 858  append */
t4=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,t3,C_retrieve2(lf[37],"c-files"));}

/* k2006 in k2002 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2008(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2008,2,t0,t1);}
t2=C_mutate(&lf[37],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2012,a[2]=((C_word*)t0)[3],a[3]=((C_word*)t0)[4],tmp=(C_word)a,a+=4,tmp);
t4=(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]);
/* csc.scm: 859  append */
t5=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t5))(4,t5,t3,t4,C_retrieve2(lf[38],"generated-c-files"));}

/* k2010 in k2006 in k2002 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2012(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2012,2,t0,t1);}
t2=C_mutate(&lf[38],t1);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2018,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 860  file-exists? */
t4=C_retrieve(lf[183]);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k2016 in k2010 in k2006 in k2002 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2018(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2018,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2021,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2026,a[2]=lf[181],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 861  with-input-from-file */
t4=C_retrieve(lf[182]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t2,((C_word*)t0)[2],t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}}

/* a2025 in k2016 in k2010 in k2006 in k2002 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2026(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2026,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2030,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 863  read-line */
t3=C_retrieve(lf[180]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k2028 in a2025 in k2016 in k2010 in k2006 in k2002 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2030(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2030,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2035,a[2]=lf[178],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2143,a[2]=t2,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 873  read-file */
t4=C_retrieve(lf[179]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k2141 in k2028 in a2025 in k2016 in k2010 in k2006 in k2002 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2143(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2034 in k2028 in a2025 in k2016 in k2010 in k2006 in k2002 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2035(C_word c,C_word t0,C_word t1,C_word t2){
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
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2035,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2037,a[2]=lf[174],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_pairp(t2))){
t4=(C_word)C_i_car(t2);
t5=(C_word)C_eqp(t4,lf[175]);
if(C_truep(t5)){
t6=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_listp(t6))){
t7=(C_word)C_i_cdr(t2);
/* for-each */
t8=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t1,C_retrieve2(lf[122],"system*"),t7);}
else{
/* g237239 */
f_2037(t1,t2);}}
else{
t6=(C_word)C_i_car(t2);
t7=(C_word)C_eqp(t6,lf[176]);
if(C_truep(t7)){
t8=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_listp(t8))){
t9=(C_word)C_i_cdr(t2);
t10=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2091,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* append */
t11=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t11))(4,t11,t10,C_retrieve2(lf[57],"compile-options"),t9);}
else{
/* g237239 */
f_2037(t1,t2);}}
else{
t8=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2104,a[2]=t3,a[3]=t1,a[4]=t2,tmp=(C_word)a,a+=5,tmp);
t9=(C_word)C_i_car(t2);
t10=(C_word)C_eqp(t9,lf[177]);
if(C_truep(t10)){
t11=(C_word)C_i_cdr(t2);
t12=t8;
f_2104(t12,(C_word)C_i_listp(t11));}
else{
t11=t8;
f_2104(t11,C_SCHEME_FALSE);}}}}
else{
/* g237239 */
f_2037(t1,t2);}}

/* k2102 in a2034 in k2028 in a2025 in k2016 in k2010 in k2006 in k2002 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_2104(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2104,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_cdr(((C_word*)t0)[4]);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2111,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
/* append */
t4=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_retrieve2(lf[65],"link-options"),t2);}
else{
/* g237239 */
f_2037(((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k2109 in k2102 in a2034 in k2028 in a2025 in k2016 in k2010 in k2006 in k2002 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2111(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[65],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2089 in a2034 in k2028 in a2025 in k2016 in k2010 in k2006 in k2002 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2091(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[57],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* g237 in a2034 in k2028 in a2025 in k2016 in k2010 in k2006 in k2002 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_2037(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2037,NULL,2,t1,t2);}
/* csc.scm: 872  error */
t3=*((C_word*)lf[172]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,lf[173],t2);}

/* k2019 in k2016 in k2010 in k2006 in k2002 in k1999 in k1996 in k1993 in a1990 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2021(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 874  delete-file* */
t2=C_retrieve2(lf[128],"delete-file*");
f_2821(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k1981 in k774 in k771 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_1983(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_retrieve2(lf[68],"keep-files"))){
t2=((C_word*)t0)[2];
f_691(2,t2,C_SCHEME_UNDEFINED);}
else{
/* for-each */
t2=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[128],"delete-file*"),C_SCHEME_END_OF_LIST);}}

/* k733 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_735(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_735,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_738,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(C_word)C_i_nullp(C_retrieve2(lf[37],"c-files"));
t4=(C_truep(t3)?C_retrieve2(lf[39],"object-files"):C_retrieve2(lf[37],"c-files"));
/* csc.scm: 597  last */
t5=C_retrieve(lf[170]);
((C_proc3)C_retrieve_proc(t5))(3,t5,t2,t4);}

/* k736 in k733 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_738,2,t0,t1);}
if(C_truep(C_retrieve2(lf[66],"target-filename"))){
t2=((C_word*)t0)[2];
f_691(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_745,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep(C_retrieve2(lf[72],"shared"))){
/* csc.scm: 601  pathname-replace-extension */
t3=C_retrieve(lf[151]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,t1,C_retrieve2(lf[168],"shared-library-extension"));}
else{
/* csc.scm: 602  pathname-replace-extension */
t3=C_retrieve(lf[151]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,t1,C_retrieve2(lf[169],"executable-extension"));}}}

/* k743 in k736 in k733 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_745(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[66],t1);
t3=((C_word*)t0)[2];
f_691(2,t3,t2);}

/* k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_691(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[13],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_691,2,t0,t1);}
if(C_truep(C_retrieve2(lf[69],"translate-only"))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_697,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2256,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2264,a[2]=lf[167],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2321,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 897  reverse */
t6=*((C_word*)lf[86]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,C_retrieve2(lf[37],"c-files"));}}

/* k2319 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2321(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* for-each */
t2=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2263 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2264(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2264,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2268,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 884  pathname-replace-extension */
t4=C_retrieve(lf[151]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,t2,C_retrieve2(lf[166],"object-extension"));}

/* k2266 in a2263 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2268(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2268,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2271,a[2]=((C_word*)t0)[3],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2289,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2293,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(C_truep(C_retrieve2(lf[41],"cpp-mode"))?C_retrieve2(lf[163],"c++-compiler"):C_retrieve2(lf[164],"compiler"));
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2305,a[2]=t1,a[3]=t4,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
/* csc.scm: 890  cleanup-filename */
t7=C_retrieve2(lf[157],"cleanup-filename");
((C_proc3)C_retrieve_proc(t7))(3,t7,t6,((C_word*)t0)[2]);}

/* k2303 in k2266 in a2263 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2305(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2305,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2309,a[2]=((C_word*)t0)[3],a[3]=t1,a[4]=((C_word*)t0)[4],tmp=(C_word)a,a+=5,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2317,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 891  cleanup-filename */
t4=C_retrieve2(lf[157],"cleanup-filename");
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,((C_word*)t0)[2]);}

/* k2315 in k2303 in k2266 in a2263 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2317(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 891  string-append */
t2=*((C_word*)lf[29]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[165],"compile-output-flag"),t1);}

/* k2307 in k2303 in k2266 in a2263 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2309(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2309,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2313,a[2]=((C_word*)t0)[2],a[3]=t1,a[4]=((C_word*)t0)[3],a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm: 893  compiler-options */
f_2323(t2);}

/* k2311 in k2307 in k2303 in k2266 in a2263 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2313(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2313,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,5,((C_word*)t0)[5],((C_word*)t0)[4],((C_word*)t0)[3],C_retrieve2(lf[60],"compile-only-flag"),t1);
/* csc.scm: 887  string-intersperse */
t3=C_retrieve(lf[79]);
((C_proc3)C_retrieve_proc(t3))(3,t3,((C_word*)t0)[2],t2);}

/* k2291 in k2266 in a2263 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2293(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 886  system* */
t2=C_retrieve2(lf[122],"system*");
f_2796(3,t2,((C_word*)t0)[2],t1);}

/* k2287 in k2266 in a2263 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2289(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_i_zerop(t1))){
t2=((C_word*)t0)[2];
f_2271(2,t2,C_SCHEME_UNDEFINED);}
else{
/* csc.scm: 894  exit */
t2=C_retrieve(lf[12]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_retrieve2(lf[121],"last-exit-code"));}}

/* k2269 in k2266 in a2263 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2271(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2271,2,t0,t1);}
t2=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_retrieve2(lf[40],"generated-object-files"));
t3=C_mutate(&lf[40],t2);
t4=(C_word)C_a_i_cons(&a,2,((C_word*)t0)[3],C_retrieve2(lf[39],"object-files"));
t5=C_mutate(&lf[39],t4);
t6=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t6+1)))(2,t6,t5);}

/* k2254 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2256(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_retrieve2(lf[68],"keep-files"))){
t2=((C_word*)t0)[2];
f_697(2,t2,C_SCHEME_UNDEFINED);}
else{
/* for-each */
t2=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[128],"delete-file*"),C_retrieve2(lf[38],"generated-c-files"));}}

/* k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_697(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_697,2,t0,t1);}
if(C_truep(C_retrieve2(lf[70],"compile-only"))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_703,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_member(C_retrieve2(lf[66],"target-filename"),C_retrieve2(lf[36],"scheme-files")))){
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_712,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 616  printf */
t4=C_retrieve(lf[123]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[162],C_retrieve2(lf[66],"target-filename"),C_retrieve2(lf[66],"target-filename"));}
else{
t3=t2;
f_703(2,t3,C_SCHEME_UNDEFINED);}}}

/* k710 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_712(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_712,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_725,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_729,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 618  sprintf */
t4=C_retrieve(lf[160]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[161],C_retrieve2(lf[66],"target-filename"),C_retrieve2(lf[66],"target-filename"));}

/* k727 in k710 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_729(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 618  system* */
t2=C_retrieve2(lf[122],"system*");
f_2796(3,t2,((C_word*)t0)[2],t1);}

/* k723 in k710 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_725(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_i_zerop(t1))){
t2=((C_word*)t0)[2];
f_703(2,t2,C_SCHEME_UNDEFINED);}
else{
/* csc.scm: 619  exit */
t2=C_retrieve(lf[12]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_retrieve2(lf[121],"last-exit-code"));}}

/* k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_703(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_703,2,t0,t1);}
t2=((C_word*)t0)[2];
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2348,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2442,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2446,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 913  reverse */
t6=*((C_word*)lf[86]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,C_retrieve2(lf[39],"object-files"));}

/* k2444 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2446(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2446,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2450,a[2]=t1,a[3]=((C_word*)t0)[2],tmp=(C_word)a,a+=4,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2465,a[2]=lf[158],tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2471,a[2]=lf[159],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 914  ##sys#call-with-values */
C_call_with_values(4,0,t2,t3,t4);}

/* a2470 in k2444 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2471(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2rv,(void*)f_2471r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_2471r(t0,t1,t2);}}

static void C_ccall f_2471r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_vector_ref(t2,C_fix(0)));}

/* a2464 in k2444 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2465(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2465,2,t0,t1);}
/* csc.scm: 914  static-extension-info */
f_2477(t1);}

/* k2448 in k2444 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2450(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word *a;
t2=C_retrieve2(lf[73],"static");
t3=(C_truep(t2)?t2:C_retrieve2(lf[74],"static-libs"));
t4=(C_truep(t3)?(C_truep(C_retrieve2(lf[77],"gui"))?C_retrieve2(lf[102],"gui-library-files"):C_retrieve2(lf[49],"library-files")):(C_truep(C_retrieve2(lf[77],"gui"))?C_retrieve2(lf[103],"gui-shared-library-files"):C_retrieve2(lf[51],"shared-library-files")));
/* csc.scm: 913  append */
t5=*((C_word*)lf[83]+1);
((C_proc5)C_retrieve_proc(t5))(5,t5,((C_word*)t0)[3],((C_word*)t0)[2],t1,t4);}

/* k2440 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2442(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[157],"cleanup-filename"),t1);}

/* k2346 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2348(C_word c,C_word t0,C_word t1){
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
C_word ab[23],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2348,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2351,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2402,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2406,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2410,a[2]=t4,tmp=(C_word)a,a+=3,tmp);
t6=(C_truep(C_retrieve2(lf[41],"cpp-mode"))?C_retrieve2(lf[154],"c++-linker"):C_retrieve2(lf[155],"linker"));
t7=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2418,a[2]=t6,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2426,a[2]=t1,a[3]=t7,tmp=(C_word)a,a+=4,tmp);
t9=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2438,a[2]=t8,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 925  cleanup-filename */
t10=C_retrieve2(lf[157],"cleanup-filename");
((C_proc3)C_retrieve_proc(t10))(3,t10,t9,C_retrieve2(lf[66],"target-filename"));}

/* k2436 in k2346 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2438(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 925  string-append */
t2=*((C_word*)lf[29]+1);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[156],"link-output-flag"),t1);}

/* k2424 in k2346 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2426(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2426,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2430,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,tmp=(C_word)a,a+=5,tmp);
/* csc.scm: 926  linker-options */
f_2574(t2);}

/* k2428 in k2424 in k2346 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2430(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2430,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2434,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],a[4]=t1,a[5]=((C_word*)t0)[4],tmp=(C_word)a,a+=6,tmp);
/* csc.scm: 927  linker-libraries */
f_2620(t2,(C_word)C_a_i_list(&a,1,C_SCHEME_FALSE));}

/* k2432 in k2428 in k2424 in k2346 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2434(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2434,2,t0,t1);}
t2=(C_word)C_a_i_list(&a,3,((C_word*)t0)[5],((C_word*)t0)[4],t1);
/* csc.scm: 923  append */
t3=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t3))(4,t3,((C_word*)t0)[3],((C_word*)t0)[2],t2);}

/* k2416 in k2346 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2418(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 921  cons* */
t2=C_retrieve(lf[115]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2408 in k2346 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2410(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 920  string-intersperse */
t2=C_retrieve(lf[79]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2404 in k2346 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2406(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 919  system* */
t2=C_retrieve2(lf[122],"system*");
f_2796(3,t2,((C_word*)t0)[2],t1);}

/* k2400 in k2346 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2402(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep((C_word)C_i_zerop(t1))){
t2=((C_word*)t0)[2];
f_2351(2,t2,C_SCHEME_UNDEFINED);}
else{
/* csc.scm: 928  exit */
t2=C_retrieve(lf[12]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_retrieve2(lf[121],"last-exit-code"));}}

/* k2349 in k2346 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2351(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2351,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2354,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2363,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(lf[3])){
t4=C_retrieve2(lf[73],"static");
if(C_truep(t4)){
t5=t3;
f_2363(t5,C_SCHEME_FALSE);}
else{
t5=C_retrieve2(lf[74],"static-libs");
t6=t3;
f_2363(t6,(C_truep(t5)?C_SCHEME_FALSE:(C_word)C_i_not(C_retrieve2(lf[72],"shared"))));}}
else{
t4=t3;
f_2363(t4,C_SCHEME_FALSE);}}

/* k2361 in k2349 in k2346 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_2363(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2363,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2366,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2377,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 930  pathname-replace-extension */
t4=C_retrieve(lf[151]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_retrieve2(lf[66],"target-filename"),lf[153]);}
else{
t2=((C_word*)t0)[2];
f_2354(2,t2,C_SCHEME_UNDEFINED);}}

/* k2375 in k2361 in k2349 in k2346 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2377(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 930  delete-file* */
t2=C_retrieve2(lf[128],"delete-file*");
f_2821(3,t2,((C_word*)t0)[2],t1);}

/* k2364 in k2361 in k2349 in k2346 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2366(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2366,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2373,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 931  pathname-replace-extension */
t3=C_retrieve(lf[151]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,C_retrieve2(lf[66],"target-filename"),lf[152]);}

/* k2371 in k2364 in k2361 in k2349 in k2346 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2373(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 931  delete-file* */
t2=C_retrieve2(lf[128],"delete-file*");
f_2821(3,t2,((C_word*)t0)[2],t1);}

/* k2352 in k2349 in k2346 in k701 in k695 in k689 in k686 in loop in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2354(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_retrieve2(lf[68],"keep-files"))){
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
/* for-each */
t2=*((C_word*)lf[150]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[128],"delete-file*"),C_retrieve2(lf[40],"generated-object-files"));}}

/* shared-build in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_641(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_641,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_646,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 572  cons* */
t4=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[147],lf[148],C_retrieve2(lf[53],"translate-options"));}

/* k644 in shared-build in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_646(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[10],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_646,2,t0,t1);}
t2=C_mutate(&lf[53],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_649,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep(lf[3])){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_654,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 575  cons* */
t5=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t4,lf[138],lf[139],C_retrieve2(lf[57],"compile-options"));}
else{
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_662,a[2]=((C_word*)t0)[2],a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 578  cons* */
t5=C_retrieve(lf[115]);
((C_proc6)C_retrieve_proc(t5))(6,t5,t4,lf[144],lf[145],lf[146],C_retrieve2(lf[57],"compile-options"));}}

/* k660 in k644 in shared-build in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_662(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_662,2,t0,t1);}
t2=C_mutate(&lf[57],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_666,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
t4=(C_truep(C_retrieve2(lf[9],"osx"))?(C_truep(((C_word*)t0)[2])?lf[140]:lf[141]):lf[142]);
/* csc.scm: 580  cons* */
t5=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t5))(5,t5,t3,lf[143],t4,C_retrieve2(lf[65],"link-options"));}

/* k664 in k660 in k644 in shared-build in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_666(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[65],t1);
t3=((C_word*)t0)[2];
f_649(t3,t2);}

/* k652 in k644 in shared-build in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_654(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_654,2,t0,t1);}
t2=C_mutate(&lf[57],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_658,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 576  cons* */
t4=C_retrieve(lf[115]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[137],C_retrieve2(lf[65],"link-options"));}

/* k656 in k652 in k644 in shared-build in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_658(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[65],t1);
t3=((C_word*)t0)[2];
f_649(t3,t2);}

/* k647 in k644 in shared-build in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_649(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=lf[72]=C_SCHEME_TRUE;;
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* check in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_602(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[5],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_602,NULL,4,t1,t2,t3,t4);}
t5=(C_word)C_i_length(t3);
t6=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_620,a[2]=t2,a[3]=t1,a[4]=t5,tmp=(C_word)a,a+=5,tmp);
if(C_truep((C_word)C_i_nullp(t4))){
t7=t6;
f_620(2,t7,C_fix(1));}
else{
t7=(C_word)C_i_cdr(t4);
if(C_truep((C_word)C_i_nullp(t7))){
t8=t6;
f_620(2,t8,(C_word)C_i_car(t4));}
else{
/* csc.scm: 568  ##sys#error */
t8=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t8+1)))(4,t8,t6,lf[0],t4);}}}

/* k618 in check in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_620(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_620,2,t0,t1);}
if(C_truep((C_word)C_i_greater_or_equalp(((C_word*)t0)[4],t1))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
/* csc.scm: 569  quit */
f_447(((C_word*)t0)[3],lf[135],(C_word)C_a_i_list(&a,1,((C_word*)t0)[2]));}}

/* t-options in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_595(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_595,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_600,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 565  append */
t4=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,C_retrieve2(lf[53],"translate-options"),t2);}

/* k598 in t-options in k2851 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_600(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word *a;
t2=C_mutate(&lf[53],t1);
t3=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,t2);}

/* k2841 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2843(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2843,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2846,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2849,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
/* ##sys#implicit-exit-handler */
t4=C_retrieve(lf[133]);
((C_proc2)C_retrieve_proc(t4))(2,t4,t3);}

/* k2847 in k2841 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2849(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=t1;
((C_proc2)C_retrieve_proc(t2))(2,t2,((C_word*)t0)[2]);}

/* k2844 in k2841 in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2846(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}

/* delete-file* in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2821(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2821,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2825,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[67],"verbose"))){
if(C_truep(lf[3])){
/* csc.scm: 1009 print */
t4=*((C_word*)lf[126]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[130],t2);}
else{
/* csc.scm: 1010 print */
t4=*((C_word*)lf[126]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,lf[131],t2);}}
else{
t4=t3;
f_2825(2,t4,C_SCHEME_UNDEFINED);}}

/* k2823 in delete-file* in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2825(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(C_retrieve2(lf[48],"dry-run"))){
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_SCHEME_UNDEFINED);}
else{
/* csc.scm: 1011 delete-file */
t2=C_retrieve(lf[129]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[3],((C_word*)t0)[2]);}}

/* system* in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2796(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2796,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2800,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[67],"verbose"))){
/* csc.scm: 997  print */
t4=*((C_word*)lf[126]+1);
((C_proc3)C_retrieve_proc(t4))(3,t4,t3,t2);}
else{
t4=t3;
f_2800(2,t4,C_SCHEME_UNDEFINED);}}

/* k2798 in system* in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2800(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2800,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2804,a[2]=((C_word*)t0)[2],a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
if(C_truep(C_retrieve2(lf[48],"dry-run"))){
t3=t2;
f_2804(2,t3,C_fix(0));}
else{
/* csc.scm: 1001 system */
t3=C_retrieve(lf[125]);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}}

/* k2802 in k2798 in system* in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2804(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2804,2,t0,t1);}
t2=C_mutate(&lf[121],t1);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2807,a[2]=((C_word*)t0)[3],tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_zerop(C_retrieve2(lf[121],"last-exit-code")))){
t4=t3;
f_2807(2,t4,C_SCHEME_UNDEFINED);}
else{
/* csc.scm: 1003 printf */
t4=C_retrieve(lf[123]);
((C_proc5)C_retrieve_proc(t4))(5,t4,t3,lf[124],C_retrieve2(lf[121],"last-exit-code"),((C_word*)t0)[2]);}}

/* k2805 in k2802 in k2798 in system* in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2807(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,C_retrieve2(lf[121],"last-exit-code"));}

/* quote-option in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2696(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[11],*a=ab;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2696,3,t0,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2703,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2708,a[2]=lf[118],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2722,a[2]=t4,a[3]=t3,tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 975  string->list */
t6=*((C_word*)lf[117]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t2);}

/* k2720 in quote-option in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2722(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 973  any */
t2=C_retrieve(lf[119]);
((C_proc4)C_retrieve_proc(t2))(4,t2,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* a2707 in quote-option in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2708(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_2708,3,t0,t1,t2);}
t3=(C_word)C_u_i_char_whitespacep(t2);
t4=t1;
((C_proc2)(void*)(*((C_word*)t4+1)))(2,t4,(C_truep(t3)?t3:(C_word)C_i_memq(t2,lf[108])));}

/* k2701 in quote-option in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2703(C_word c,C_word t0,C_word t1){
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
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2703,2,t0,t1);}
if(C_truep(t1)){
t2=((C_word*)t0)[3];
t3=((C_word*)t0)[2];
t4=C_SCHEME_FALSE;
t5=(*a=C_VECTOR_TYPE|1,a[1]=t4,tmp=(C_word)a,a+=2,tmp);
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2728,a[2]=t2,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2742,a[2]=t6,tmp=(C_word)a,a+=3,tmp);
t8=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2746,a[2]=t7,a[3]=t5,tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 982  string->list */
t9=*((C_word*)lf[117]+1);
((C_proc3)C_retrieve_proc(t9))(3,t9,t8,t3);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* k2744 in k2701 in quote-option in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2746(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2746,2,t0,t1);}
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2748,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=lf[116],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2748(t5,((C_word*)t0)[2],t1);}

/* fold in k2744 in k2701 in quote-option in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_2748(C_word t0,C_word t1,C_word t2){
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
a=C_alloc(10);
C_check_for_interrupt;
if(!C_stack_probe(a)){
C_save_and_reclaim((void*)trf_2748,NULL,3,t0,t1,t2);}
if(C_truep((C_word)C_i_nullp(t2))){
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,C_SCHEME_END_OF_LIST);}
else{
t3=(C_word)C_i_car(t2);
if(C_truep((C_word)C_i_memq(t3,lf[108]))){
t4=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2771,a[2]=t3,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
t5=(C_word)C_i_cdr(t2);
/* csc.scm: 986  fold */
t9=t4;
t10=t5;
t1=t9;
t2=t10;
goto loop;}
else{
t4=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2778,a[2]=((C_word*)t0)[3],a[3]=t2,a[4]=t3,a[5]=t1,tmp=(C_word)a,a+=6,tmp);
if(C_truep((C_word)C_u_i_char_whitespacep(t3))){
t5=C_set_block_item(((C_word*)t0)[2],0,C_SCHEME_TRUE);
t6=t4;
f_2778(t6,t5);}
else{
t5=t4;
f_2778(t5,C_SCHEME_UNDEFINED);}}}}

/* k2776 in fold in k2744 in k2701 in quote-option in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_2778(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2778,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2785,a[2]=((C_word*)t0)[4],a[3]=((C_word*)t0)[5],tmp=(C_word)a,a+=4,tmp);
t3=(C_word)C_i_cdr(((C_word*)t0)[3]);
/* csc.scm: 989  fold */
t4=((C_word*)((C_word*)t0)[2])[1];
f_2748(t4,t2,t3);}

/* k2783 in k2776 in fold in k2744 in k2701 in quote-option in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2785(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2785,2,t0,t1);}
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,(C_word)C_a_i_cons(&a,2,((C_word*)t0)[2],t1));}

/* k2769 in fold in k2744 in k2701 in quote-option in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2771(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 986  cons* */
t2=C_retrieve(lf[115]);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],C_make_character(92),((C_word*)t0)[2],t1);}

/* k2740 in k2701 in quote-option in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2742(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 981  list->string */
t2=*((C_word*)lf[114]+1);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2726 in k2701 in quote-option in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2728(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2728,2,t0,t1);}
if(C_truep(((C_word*)((C_word*)t0)[3])[1])){
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2738,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 991  string-translate* */
t3=C_retrieve(lf[112]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t2,t1,lf[113]);}
else{
t2=((C_word*)t0)[2];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,t1);}}

/* k2736 in k2726 in k2701 in quote-option in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2738(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 991  string-append */
t2=*((C_word*)lf[29]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],lf[110],t1,lf[111]);}

/* linker-libraries in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_2620(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word t5;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2620,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2624,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
if(C_truep((C_word)C_i_nullp(t2))){
t4=t3;
f_2624(2,t4,C_SCHEME_FALSE);}
else{
t4=(C_word)C_i_cdr(t2);
if(C_truep((C_word)C_i_nullp(t4))){
t5=t3;
f_2624(2,t5,(C_word)C_i_car(t2));}
else{
/* ##sys#error */
t5=*((C_word*)lf[106]+1);
((C_proc4)(void*)(*((C_word*)t5+1)))(4,t5,t3,lf[0],t2);}}}

/* k2622 in linker-libraries in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2624(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2624,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2631,a[2]=((C_word*)t0)[2],tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2635,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
if(C_truep(t1)){
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2664,a[2]=lf[104],tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2670,a[2]=lf[105],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 960  ##sys#call-with-values */
C_call_with_values(4,0,t3,t4,t5);}
else{
t4=t3;
f_2635(2,t4,C_SCHEME_END_OF_LIST);}}

/* a2669 in k2622 in linker-libraries in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2670(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2rv,(void*)f_2670r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_2670r(t0,t1,t2);}}

static void C_ccall f_2670r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_vector_ref(t2,C_fix(0)));}

/* a2663 in k2622 in linker-libraries in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2664(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2664,2,t0,t1);}
/* csc.scm: 960  static-extension-info */
f_2477(t1);}

/* k2633 in k2622 in linker-libraries in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2635(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2635,2,t0,t1);}
t2=C_retrieve2(lf[73],"static");
t3=(C_truep(t2)?t2:C_retrieve2(lf[74],"static-libs"));
t4=(C_truep(t3)?C_retrieve2(lf[100],"extra-libraries"):C_retrieve2(lf[101],"extra-shared-libraries"));
t5=C_retrieve2(lf[73],"static");
t6=(C_truep(t5)?t5:C_retrieve2(lf[74],"static-libs"));
t7=(C_truep(t6)?(C_truep(C_retrieve2(lf[77],"gui"))?C_retrieve2(lf[102],"gui-library-files"):C_retrieve2(lf[49],"library-files")):(C_truep(C_retrieve2(lf[77],"gui"))?C_retrieve2(lf[103],"gui-shared-library-files"):C_retrieve2(lf[51],"shared-library-files")));
t8=(C_word)C_a_i_cons(&a,2,t4,t7);
/* csc.scm: 959  append */
t9=*((C_word*)lf[83]+1);
((C_proc4)C_retrieve_proc(t9))(4,t9,((C_word*)t0)[2],t1,t8);}

/* k2629 in k2622 in linker-libraries in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2631(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 958  string-intersperse */
t2=C_retrieve(lf[79]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* linker-options in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_2574(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[15],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2574,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2582,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2602,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2606,a[2]=t3,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2608,a[2]=lf[96],tmp=(C_word)a,a+=3,tmp);
t6=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2614,a[2]=lf[97],tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 954  ##sys#call-with-values */
C_call_with_values(4,0,t4,t5,t6);}

/* a2613 in linker-options in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2614(C_word c,C_word t0,C_word t1,...){
C_word tmp;
C_word t2;
va_list v;
C_word *a,c2=c;
C_save_rest(t1,c2,2);
C_check_for_interrupt;
if(!C_demand(c*C_SIZEOF_PAIR+0)){
C_save_and_reclaim((void*)tr2rv,(void*)f_2614r,2,t0,t1);}
else{
a=C_alloc((c-2)*3);
t2=C_restore_rest_vector(a,C_rest_count(0));
f_2614r(t0,t1,t2);}}

static void C_ccall f_2614r(C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
t3=t1;
((C_proc2)(void*)(*((C_word*)t3+1)))(2,t3,(C_word)C_i_vector_ref(t2,C_fix(1)));}

/* a2607 in linker-options in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2608(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(c!=2) C_bad_argc_2(c,2,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2608,2,t0,t1);}
/* csc.scm: 954  static-extension-info */
f_2477(t1);}

/* k2604 in linker-options in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2606(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 953  append */
t2=*((C_word*)lf[83]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[2],C_retrieve2(lf[63],"linking-optimization-options"),C_retrieve2(lf[65],"link-options"),t1);}

/* k2600 in linker-options in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2602(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 952  string-intersperse */
t2=C_retrieve(lf[79]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* k2580 in linker-options in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2582(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word *a;
t2=(C_truep(C_retrieve2(lf[73],"static"))?(C_truep(lf[3])?C_SCHEME_FALSE:(C_word)C_i_not(C_retrieve2(lf[9],"osx"))):C_SCHEME_FALSE);
t3=(C_truep(t2)?lf[94]:lf[95]);
/* csc.scm: 951  string-append */
t4=*((C_word*)lf[29]+1);
((C_proc4)C_retrieve_proc(t4))(4,t4,((C_word*)t0)[2],t1,t3);}

/* static-extension-info in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_2477(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2477,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2481,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
/* csc.scm: 935  repository-path */
t3=C_retrieve(lf[91]);
((C_proc2)C_retrieve_proc(t3))(2,t3,t2);}

/* k2479 in static-extension-info in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2481(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2481,2,t0,t1);}
t2=C_retrieve2(lf[73],"static");
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2487,a[2]=((C_word*)t0)[2],a[3]=t1,tmp=(C_word)a,a+=4,tmp);
if(C_truep(t2)){
t4=t3;
f_2487(t4,t2);}
else{
t4=C_retrieve2(lf[74],"static-libs");
t5=t3;
f_2487(t5,(C_truep(t4)?t4:C_retrieve2(lf[75],"static-extensions")));}}

/* k2485 in k2479 in static-extension-info in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_2487(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word ab[7],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2487,NULL,2,t0,t1);}
if(C_truep(t1)){
t2=C_SCHEME_UNDEFINED;
t3=(*a=C_VECTOR_TYPE|1,a[1]=t2,tmp=(C_word)a,a+=2,tmp);
t4=C_set_block_item(t3,0,(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_2492,a[2]=((C_word*)t0)[3],a[3]=t3,a[4]=lf[90],tmp=(C_word)a,a+=5,tmp));
t5=((C_word*)t3)[1];
f_2492(t5,((C_word*)t0)[2],C_retrieve2(lf[76],"required-extensions"),C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}
else{
/* csc.scm: 948  values */
C_values(4,0,((C_word*)t0)[2],C_SCHEME_END_OF_LIST,C_SCHEME_END_OF_LIST);}}

/* loop in k2485 in k2479 in static-extension-info in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_2492(C_word t0,C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word ab[12],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2492,NULL,5,t0,t1,t2,t3,t4);}
if(C_truep((C_word)C_i_nullp(t2))){
t5=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2506,a[2]=t4,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 939  reverse */
t6=*((C_word*)lf[86]+1);
((C_proc3)C_retrieve_proc(t6))(3,t6,t5,t3);}
else{
t5=(*a=C_CLOSURE_TYPE|7,a[1]=(C_word)f_2513,a[2]=((C_word*)t0)[2],a[3]=t3,a[4]=t4,a[5]=t1,a[6]=((C_word*)t0)[3],a[7]=t2,tmp=(C_word)a,a+=8,tmp);
t6=(C_word)C_i_car(t2);
/* csc.scm: 940  extension-information */
t7=C_retrieve(lf[89]);
((C_proc3)C_retrieve_proc(t7))(3,t7,t5,t6);}}

/* k2511 in loop in k2485 in k2479 in static-extension-info in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2513(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word t8;
C_word t9;
C_word ab[11],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2513,2,t0,t1);}
if(C_truep(t1)){
t2=(C_word)C_i_assq(lf[87],t1);
t3=(C_word)C_i_assq(lf[88],t1);
t4=(C_word)C_i_cdr(((C_word*)t0)[7]);
t5=(*a=C_CLOSURE_TYPE|6,a[1]=(C_word)f_2533,a[2]=((C_word*)t0)[4],a[3]=t3,a[4]=t4,a[5]=((C_word*)t0)[5],a[6]=((C_word*)t0)[6],tmp=(C_word)a,a+=7,tmp);
if(C_truep(t2)){
t6=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2551,a[2]=((C_word*)t0)[3],a[3]=t5,tmp=(C_word)a,a+=4,tmp);
t7=(C_word)C_i_cadr(t2);
/* csc.scm: 945  make-pathname */
t8=C_retrieve(lf[23]);
((C_proc4)C_retrieve_proc(t8))(4,t8,t6,((C_word*)t0)[2],t7);}
else{
t6=t5;
f_2533(t6,((C_word*)t0)[3]);}}
else{
t2=(C_word)C_i_cdr(((C_word*)t0)[7]);
/* csc.scm: 947  loop */
t3=((C_word*)((C_word*)t0)[6])[1];
f_2492(t3,((C_word*)t0)[5],t2,((C_word*)t0)[3],((C_word*)t0)[4]);}}

/* k2549 in k2511 in loop in k2485 in k2479 in static-extension-info in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2551(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word ab[3],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2551,2,t0,t1);}
t2=((C_word*)t0)[3];
f_2533(t2,(C_word)C_a_i_cons(&a,2,t1,((C_word*)t0)[2]));}

/* k2531 in k2511 in loop in k2485 in k2479 in static-extension-info in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_2533(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word ab[9],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2533,NULL,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|5,a[1]=(C_word)f_2537,a[2]=t1,a[3]=((C_word*)t0)[4],a[4]=((C_word*)t0)[5],a[5]=((C_word*)t0)[6],tmp=(C_word)a,a+=6,tmp);
if(C_truep(((C_word*)t0)[3])){
t3=(C_word)C_i_cadr(((C_word*)t0)[3]);
t4=t2;
f_2537(t4,(C_word)C_a_i_cons(&a,2,t3,((C_word*)t0)[2]));}
else{
t3=t2;
f_2537(t3,((C_word*)t0)[2]);}}

/* k2535 in k2531 in k2511 in loop in k2485 in k2479 in static-extension-info in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_2537(C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 944  loop */
t2=((C_word*)((C_word*)t0)[5])[1];
f_2492(t2,((C_word*)t0)[4],((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* k2504 in loop in k2485 in k2479 in static-extension-info in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2506(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr2,(void*)f_2506,2,t0,t1);}
t2=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_2510,a[2]=t1,a[3]=((C_word*)t0)[3],tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 939  reverse */
t3=*((C_word*)lf[86]+1);
((C_proc3)C_retrieve_proc(t3))(3,t3,t2,((C_word*)t0)[2]);}

/* k2508 in k2504 in loop in k2485 in k2479 in static-extension-info in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2510(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 939  values */
C_values(4,0,((C_word*)t0)[3],((C_word*)t0)[2],t1);}

/* compiler-options in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_2323(C_word t1){
C_word tmp;
C_word t2;
C_word t3;
C_word t4;
C_word t5;
C_word t6;
C_word t7;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_2323,NULL,1,t1);}
t2=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2331,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t3=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_2335,a[2]=t2,tmp=(C_word)a,a+=3,tmp);
t4=C_retrieve2(lf[73],"static");
t5=(C_truep(t4)?t4:C_retrieve2(lf[74],"static-libs"));
t6=(C_truep(t5)?C_SCHEME_END_OF_LIST:C_retrieve2(lf[82],"nonstatic-compilation-options"));
/* csc.scm: 903  append */
t7=*((C_word*)lf[83]+1);
((C_proc5)C_retrieve_proc(t7))(5,t7,t3,t6,C_retrieve2(lf[61],"compilation-optimization-options"),C_retrieve2(lf[57],"compile-options"));}

/* k2333 in compiler-options in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2335(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* map */
t2=*((C_word*)lf[80]+1);
((C_proc4)(void*)(*((C_word*)t2+1)))(4,t2,((C_word*)t0)[2],C_retrieve2(lf[81],"quote-option"),t1);}

/* k2329 in compiler-options in k570 in k559 in k552 in k545 in k521 in k517 in k514 in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_2331(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 901  string-intersperse */
t2=C_retrieve(lf[79]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],t1);}

/* quotewrap in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_502(C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word t4;
C_word ab[4],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_502,NULL,2,t1,t2);}
t3=(*a=C_CLOSURE_TYPE|3,a[1]=(C_word)f_509,a[2]=t2,a[3]=t1,tmp=(C_word)a,a+=4,tmp);
/* csc.scm: 133  string-any */
t4=C_retrieve(lf[32]);
((C_proc4)C_retrieve_proc(t4))(4,t4,t3,*((C_word*)lf[33]+1),t2);}

/* k507 in quotewrap in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_509(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
if(C_truep(t1)){
/* csc.scm: 134  string-append */
t2=*((C_word*)lf[29]+1);
((C_proc5)C_retrieve_proc(t2))(5,t2,((C_word*)t0)[3],lf[30],((C_word*)t0)[2],lf[31]);}
else{
t2=((C_word*)t0)[3];
((C_proc2)(void*)(*((C_word*)t2+1)))(2,t2,((C_word*)t0)[2]);}}

/* homize in k492 in k489 in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_496(C_word c,C_word t0,C_word t1,C_word t2){
C_word tmp;
C_word t3;
C_word *a;
if(c!=3) C_bad_argc_2(c,3,t0);
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)tr3,(void*)f_496,3,t0,t1,t2);}
/* csc.scm: 130  make-pathname */
t3=C_retrieve(lf[23]);
((C_proc4)C_retrieve_proc(t3))(4,t3,t1,C_retrieve2(lf[25],"home"),t2);}

/* prefix in k468 in k460 in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_476(C_word t1,C_word t2,C_word t3,C_word t4){
C_word tmp;
C_word t5;
C_word t6;
C_word ab[6],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_476,NULL,4,t1,t2,t3,t4);}
if(C_truep(C_retrieve2(lf[17],"chicken-prefix"))){
t5=(C_word)C_a_i_list(&a,2,C_retrieve2(lf[17],"chicken-prefix"),t3);
/* csc.scm: 118  make-pathname */
t6=C_retrieve(lf[23]);
((C_proc4)C_retrieve_proc(t6))(4,t6,t1,t5,t2);}
else{
t5=t1;
((C_proc2)(void*)(*((C_word*)t5+1)))(2,t5,t4);}}

/* quit in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_fcall f_447(C_word t1,C_word t2,C_word t3){
C_word tmp;
C_word t4;
C_word t5;
C_word t6;
C_word ab[8],*a=ab;
C_check_for_interrupt;
if(!C_stack_probe(&a)){
C_save_and_reclaim((void*)trf_447,NULL,3,t1,t2,t3);}
t4=(*a=C_CLOSURE_TYPE|2,a[1]=(C_word)f_451,a[2]=t1,tmp=(C_word)a,a+=3,tmp);
t5=(*a=C_CLOSURE_TYPE|4,a[1]=(C_word)f_458,a[2]=t3,a[3]=t2,a[4]=t4,tmp=(C_word)a,a+=5,tmp);
/* csc.scm: 108  current-error-port */
t6=C_retrieve(lf[15]);
((C_proc2)C_retrieve_proc(t6))(2,t6,t5);}

/* k456 in quit in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_458(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 108  fprintf */
t2=C_retrieve(lf[13]);
((C_proc6)C_retrieve_proc(t2))(6,t2,((C_word*)t0)[4],t1,lf[14],((C_word*)t0)[3],((C_word*)t0)[2]);}

/* k449 in quit in k443 in k3443 in k3447 in k3451 in k3455 in k423 in k420 in k417 in k414 in k411 in k408 in k405 in k402 */
static void C_ccall f_451(C_word c,C_word t0,C_word t1){
C_word tmp;
C_word t2;
C_word *a;
/* csc.scm: 109  exit */
t2=C_retrieve(lf[12]);
((C_proc3)C_retrieve_proc(t2))(3,t2,((C_word*)t0)[2],C_fix(64));}

#ifdef C_ENABLE_PTABLES
static C_PTABLE_ENTRY ptable[328] = {
{"toplevelcsc.scm",(void*)C_toplevel},
{"f_404csc.scm",(void*)f_404},
{"f_407csc.scm",(void*)f_407},
{"f_410csc.scm",(void*)f_410},
{"f_413csc.scm",(void*)f_413},
{"f_416csc.scm",(void*)f_416},
{"f_419csc.scm",(void*)f_419},
{"f_422csc.scm",(void*)f_422},
{"f_425csc.scm",(void*)f_425},
{"f_3457csc.scm",(void*)f_3457},
{"f_3453csc.scm",(void*)f_3453},
{"f_3449csc.scm",(void*)f_3449},
{"f_3445csc.scm",(void*)f_3445},
{"f_3441csc.scm",(void*)f_3441},
{"f_3437csc.scm",(void*)f_3437},
{"f_445csc.scm",(void*)f_445},
{"f_462csc.scm",(void*)f_462},
{"f_470csc.scm",(void*)f_470},
{"f_491csc.scm",(void*)f_491},
{"f_3418csc.scm",(void*)f_3418},
{"f_3414csc.scm",(void*)f_3414},
{"f_494csc.scm",(void*)f_494},
{"f_3389csc.scm",(void*)f_3389},
{"f_3385csc.scm",(void*)f_3385},
{"f_3381csc.scm",(void*)f_3381},
{"f_3374csc.scm",(void*)f_3374},
{"f_516csc.scm",(void*)f_516},
{"f_3358csc.scm",(void*)f_3358},
{"f_3299csc.scm",(void*)f_3299},
{"f_3348csc.scm",(void*)f_3348},
{"f_3303csc.scm",(void*)f_3303},
{"f_3338csc.scm",(void*)f_3338},
{"f_3307csc.scm",(void*)f_3307},
{"f_3328csc.scm",(void*)f_3328},
{"f_3311csc.scm",(void*)f_3311},
{"f_519csc.scm",(void*)f_519},
{"f_3278csc.scm",(void*)f_3278},
{"f_3271csc.scm",(void*)f_3271},
{"f_3266csc.scm",(void*)f_3266},
{"f_3256csc.scm",(void*)f_3256},
{"f_523csc.scm",(void*)f_523},
{"f_3182csc.scm",(void*)f_3182},
{"f_3186csc.scm",(void*)f_3186},
{"f_3236csc.scm",(void*)f_3236},
{"f_3232csc.scm",(void*)f_3232},
{"f_3228csc.scm",(void*)f_3228},
{"f_3224csc.scm",(void*)f_3224},
{"f_3214csc.scm",(void*)f_3214},
{"f_3210csc.scm",(void*)f_3210},
{"f_3206csc.scm",(void*)f_3206},
{"f_3202csc.scm",(void*)f_3202},
{"f_3002csc.scm",(void*)f_3002},
{"f_3006csc.scm",(void*)f_3006},
{"f_3010csc.scm",(void*)f_3010},
{"f_3014csc.scm",(void*)f_3014},
{"f_3018csc.scm",(void*)f_3018},
{"f_3022csc.scm",(void*)f_3022},
{"f_3172csc.scm",(void*)f_3172},
{"f_3168csc.scm",(void*)f_3168},
{"f_3164csc.scm",(void*)f_3164},
{"f_3160csc.scm",(void*)f_3160},
{"f_3150csc.scm",(void*)f_3150},
{"f_3146csc.scm",(void*)f_3146},
{"f_3142csc.scm",(void*)f_3142},
{"f_3138csc.scm",(void*)f_3138},
{"f_3128csc.scm",(void*)f_3128},
{"f_3124csc.scm",(void*)f_3124},
{"f_3120csc.scm",(void*)f_3120},
{"f_3116csc.scm",(void*)f_3116},
{"f_3106csc.scm",(void*)f_3106},
{"f_3102csc.scm",(void*)f_3102},
{"f_3098csc.scm",(void*)f_3098},
{"f_3094csc.scm",(void*)f_3094},
{"f_3084csc.scm",(void*)f_3084},
{"f_3080csc.scm",(void*)f_3080},
{"f_3076csc.scm",(void*)f_3076},
{"f_3072csc.scm",(void*)f_3072},
{"f_3062csc.scm",(void*)f_3062},
{"f_3058csc.scm",(void*)f_3058},
{"f_3054csc.scm",(void*)f_3054},
{"f_3050csc.scm",(void*)f_3050},
{"f_547csc.scm",(void*)f_547},
{"f_2984csc.scm",(void*)f_2984},
{"f_554csc.scm",(void*)f_554},
{"f_2939csc.scm",(void*)f_2939},
{"f_2950csc.scm",(void*)f_2950},
{"f_2961csc.scm",(void*)f_2961},
{"f_2946csc.scm",(void*)f_2946},
{"f_561csc.scm",(void*)f_561},
{"f_2913csc.scm",(void*)f_2913},
{"f_2909csc.scm",(void*)f_2909},
{"f_2898csc.scm",(void*)f_2898},
{"f_2905csc.scm",(void*)f_2905},
{"f_2889csc.scm",(void*)f_2889},
{"f_2885csc.scm",(void*)f_2885},
{"f_2881csc.scm",(void*)f_2881},
{"f_2877csc.scm",(void*)f_2877},
{"f_572csc.scm",(void*)f_572},
{"f_2861csc.scm",(void*)f_2861},
{"f_2857csc.scm",(void*)f_2857},
{"f_2853csc.scm",(void*)f_2853},
{"f_678csc.scm",(void*)f_678},
{"f_852csc.scm",(void*)f_852},
{"f_1304csc.scm",(void*)f_1304},
{"f_1530csc.scm",(void*)f_1530},
{"f_1533csc.scm",(void*)f_1533},
{"f_1536csc.scm",(void*)f_1536},
{"f_1913csc.scm",(void*)f_1913},
{"f_1587csc.scm",(void*)f_1587},
{"f_1596csc.scm",(void*)f_1596},
{"f_1792csc.scm",(void*)f_1792},
{"f_1876csc.scm",(void*)f_1876},
{"f_1882csc.scm",(void*)f_1882},
{"f_1803csc.scm",(void*)f_1803},
{"f_1833csc.scm",(void*)f_1833},
{"f_1797csc.scm",(void*)f_1797},
{"f_1762csc.scm",(void*)f_1762},
{"f_1693csc.scm",(void*)f_1693},
{"f_1745csc.scm",(void*)f_1745},
{"f_1741csc.scm",(void*)f_1741},
{"f_1726csc.scm",(void*)f_1726},
{"f_1724csc.scm",(void*)f_1724},
{"f_1720csc.scm",(void*)f_1720},
{"f_1697csc.scm",(void*)f_1697},
{"f_1683csc.scm",(void*)f_1683},
{"f_1670csc.scm",(void*)f_1670},
{"f_1653csc.scm",(void*)f_1653},
{"f_1639csc.scm",(void*)f_1639},
{"f_1625csc.scm",(void*)f_1625},
{"f_1621csc.scm",(void*)f_1621},
{"f_1617csc.scm",(void*)f_1617},
{"f_1609csc.scm",(void*)f_1609},
{"f_1568csc.scm",(void*)f_1568},
{"f_1574csc.scm",(void*)f_1574},
{"f_1577csc.scm",(void*)f_1577},
{"f_1491csc.scm",(void*)f_1491},
{"f_1521csc.scm",(void*)f_1521},
{"f_1513csc.scm",(void*)f_1513},
{"f_1501csc.scm",(void*)f_1501},
{"f_1480csc.scm",(void*)f_1480},
{"f_1455csc.scm",(void*)f_1455},
{"f_1467csc.scm",(void*)f_1467},
{"f_1459csc.scm",(void*)f_1459},
{"f_1446csc.scm",(void*)f_1446},
{"f_1417csc.scm",(void*)f_1417},
{"f_1429csc.scm",(void*)f_1429},
{"f_1421csc.scm",(void*)f_1421},
{"f_1396csc.scm",(void*)f_1396},
{"f_1400csc.scm",(void*)f_1400},
{"f_1379csc.scm",(void*)f_1379},
{"f_1362csc.scm",(void*)f_1362},
{"f_1345csc.scm",(void*)f_1345},
{"f_1328csc.scm",(void*)f_1328},
{"f_1287csc.scm",(void*)f_1287},
{"f_1277csc.scm",(void*)f_1277},
{"f_1267csc.scm",(void*)f_1267},
{"f_1257csc.scm",(void*)f_1257},
{"f_1247csc.scm",(void*)f_1247},
{"f_1237csc.scm",(void*)f_1237},
{"f_1216csc.scm",(void*)f_1216},
{"f_1192csc.scm",(void*)f_1192},
{"f_1203csc.scm",(void*)f_1203},
{"f_1195csc.scm",(void*)f_1195},
{"f_1179csc.scm",(void*)f_1179},
{"f_1139csc.scm",(void*)f_1139},
{"f_1143csc.scm",(void*)f_1143},
{"f_1146csc.scm",(void*)f_1146},
{"f_1058csc.scm",(void*)f_1058},
{"f_1001csc.scm",(void*)f_1001},
{"f_989csc.scm",(void*)f_989},
{"f_977csc.scm",(void*)f_977},
{"f_944csc.scm",(void*)f_944},
{"f_933csc.scm",(void*)f_933},
{"f_902csc.scm",(void*)f_902},
{"f_895csc.scm",(void*)f_895},
{"f_886csc.scm",(void*)f_886},
{"f_879csc.scm",(void*)f_879},
{"f_867csc.scm",(void*)f_867},
{"f_855csc.scm",(void*)f_855},
{"f_843csc.scm",(void*)f_843},
{"f_810csc.scm",(void*)f_810},
{"f_836csc.scm",(void*)f_836},
{"f_813csc.scm",(void*)f_813},
{"f_829csc.scm",(void*)f_829},
{"f_816csc.scm",(void*)f_816},
{"f_819csc.scm",(void*)f_819},
{"f_688csc.scm",(void*)f_688},
{"f_773csc.scm",(void*)f_773},
{"f_797csc.scm",(void*)f_797},
{"f_790csc.scm",(void*)f_790},
{"f_783csc.scm",(void*)f_783},
{"f_776csc.scm",(void*)f_776},
{"f_2250csc.scm",(void*)f_2250},
{"f_1991csc.scm",(void*)f_1991},
{"f_1995csc.scm",(void*)f_1995},
{"f_2234csc.scm",(void*)f_2234},
{"f_2237csc.scm",(void*)f_2237},
{"f_2228csc.scm",(void*)f_2228},
{"f_1998csc.scm",(void*)f_1998},
{"f_2001csc.scm",(void*)f_2001},
{"f_2192csc.scm",(void*)f_2192},
{"f_2197csc.scm",(void*)f_2197},
{"f_2181csc.scm",(void*)f_2181},
{"f_2189csc.scm",(void*)f_2189},
{"f_2185csc.scm",(void*)f_2185},
{"f_2173csc.scm",(void*)f_2173},
{"f_2169csc.scm",(void*)f_2169},
{"f_2165csc.scm",(void*)f_2165},
{"f_2161csc.scm",(void*)f_2161},
{"f_2004csc.scm",(void*)f_2004},
{"f_2008csc.scm",(void*)f_2008},
{"f_2012csc.scm",(void*)f_2012},
{"f_2018csc.scm",(void*)f_2018},
{"f_2026csc.scm",(void*)f_2026},
{"f_2030csc.scm",(void*)f_2030},
{"f_2143csc.scm",(void*)f_2143},
{"f_2035csc.scm",(void*)f_2035},
{"f_2104csc.scm",(void*)f_2104},
{"f_2111csc.scm",(void*)f_2111},
{"f_2091csc.scm",(void*)f_2091},
{"f_2037csc.scm",(void*)f_2037},
{"f_2021csc.scm",(void*)f_2021},
{"f_1983csc.scm",(void*)f_1983},
{"f_735csc.scm",(void*)f_735},
{"f_738csc.scm",(void*)f_738},
{"f_745csc.scm",(void*)f_745},
{"f_691csc.scm",(void*)f_691},
{"f_2321csc.scm",(void*)f_2321},
{"f_2264csc.scm",(void*)f_2264},
{"f_2268csc.scm",(void*)f_2268},
{"f_2305csc.scm",(void*)f_2305},
{"f_2317csc.scm",(void*)f_2317},
{"f_2309csc.scm",(void*)f_2309},
{"f_2313csc.scm",(void*)f_2313},
{"f_2293csc.scm",(void*)f_2293},
{"f_2289csc.scm",(void*)f_2289},
{"f_2271csc.scm",(void*)f_2271},
{"f_2256csc.scm",(void*)f_2256},
{"f_697csc.scm",(void*)f_697},
{"f_712csc.scm",(void*)f_712},
{"f_729csc.scm",(void*)f_729},
{"f_725csc.scm",(void*)f_725},
{"f_703csc.scm",(void*)f_703},
{"f_2446csc.scm",(void*)f_2446},
{"f_2471csc.scm",(void*)f_2471},
{"f_2465csc.scm",(void*)f_2465},
{"f_2450csc.scm",(void*)f_2450},
{"f_2442csc.scm",(void*)f_2442},
{"f_2348csc.scm",(void*)f_2348},
{"f_2438csc.scm",(void*)f_2438},
{"f_2426csc.scm",(void*)f_2426},
{"f_2430csc.scm",(void*)f_2430},
{"f_2434csc.scm",(void*)f_2434},
{"f_2418csc.scm",(void*)f_2418},
{"f_2410csc.scm",(void*)f_2410},
{"f_2406csc.scm",(void*)f_2406},
{"f_2402csc.scm",(void*)f_2402},
{"f_2351csc.scm",(void*)f_2351},
{"f_2363csc.scm",(void*)f_2363},
{"f_2377csc.scm",(void*)f_2377},
{"f_2366csc.scm",(void*)f_2366},
{"f_2373csc.scm",(void*)f_2373},
{"f_2354csc.scm",(void*)f_2354},
{"f_641csc.scm",(void*)f_641},
{"f_646csc.scm",(void*)f_646},
{"f_662csc.scm",(void*)f_662},
{"f_666csc.scm",(void*)f_666},
{"f_654csc.scm",(void*)f_654},
{"f_658csc.scm",(void*)f_658},
{"f_649csc.scm",(void*)f_649},
{"f_602csc.scm",(void*)f_602},
{"f_620csc.scm",(void*)f_620},
{"f_595csc.scm",(void*)f_595},
{"f_600csc.scm",(void*)f_600},
{"f_2843csc.scm",(void*)f_2843},
{"f_2849csc.scm",(void*)f_2849},
{"f_2846csc.scm",(void*)f_2846},
{"f_2821csc.scm",(void*)f_2821},
{"f_2825csc.scm",(void*)f_2825},
{"f_2796csc.scm",(void*)f_2796},
{"f_2800csc.scm",(void*)f_2800},
{"f_2804csc.scm",(void*)f_2804},
{"f_2807csc.scm",(void*)f_2807},
{"f_2696csc.scm",(void*)f_2696},
{"f_2722csc.scm",(void*)f_2722},
{"f_2708csc.scm",(void*)f_2708},
{"f_2703csc.scm",(void*)f_2703},
{"f_2746csc.scm",(void*)f_2746},
{"f_2748csc.scm",(void*)f_2748},
{"f_2778csc.scm",(void*)f_2778},
{"f_2785csc.scm",(void*)f_2785},
{"f_2771csc.scm",(void*)f_2771},
{"f_2742csc.scm",(void*)f_2742},
{"f_2728csc.scm",(void*)f_2728},
{"f_2738csc.scm",(void*)f_2738},
{"f_2620csc.scm",(void*)f_2620},
{"f_2624csc.scm",(void*)f_2624},
{"f_2670csc.scm",(void*)f_2670},
{"f_2664csc.scm",(void*)f_2664},
{"f_2635csc.scm",(void*)f_2635},
{"f_2631csc.scm",(void*)f_2631},
{"f_2574csc.scm",(void*)f_2574},
{"f_2614csc.scm",(void*)f_2614},
{"f_2608csc.scm",(void*)f_2608},
{"f_2606csc.scm",(void*)f_2606},
{"f_2602csc.scm",(void*)f_2602},
{"f_2582csc.scm",(void*)f_2582},
{"f_2477csc.scm",(void*)f_2477},
{"f_2481csc.scm",(void*)f_2481},
{"f_2487csc.scm",(void*)f_2487},
{"f_2492csc.scm",(void*)f_2492},
{"f_2513csc.scm",(void*)f_2513},
{"f_2551csc.scm",(void*)f_2551},
{"f_2533csc.scm",(void*)f_2533},
{"f_2537csc.scm",(void*)f_2537},
{"f_2506csc.scm",(void*)f_2506},
{"f_2510csc.scm",(void*)f_2510},
{"f_2323csc.scm",(void*)f_2323},
{"f_2335csc.scm",(void*)f_2335},
{"f_2331csc.scm",(void*)f_2331},
{"f_502csc.scm",(void*)f_502},
{"f_509csc.scm",(void*)f_509},
{"f_496csc.scm",(void*)f_496},
{"f_476csc.scm",(void*)f_476},
{"f_447csc.scm",(void*)f_447},
{"f_458csc.scm",(void*)f_458},
{"f_451csc.scm",(void*)f_451},
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
